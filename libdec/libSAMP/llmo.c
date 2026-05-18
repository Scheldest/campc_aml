// ADDR: 0x1e2ac4
// SYMBOL: llmo::mem::pageSize(void)
int __fastcall llmo::mem::pageSize(llmo::mem *this)
{
  return sysconf(39);
}


// ======================================================================
// ADDR: 0x1e2ad0
// SYMBOL: llmo::mem::allocate(int,void *)
void *__fastcall llmo::mem::allocate(llmo::mem *this, int a2, void *a3)
{
  int v5; // r6
  size_t v6; // r1
  void *v7; // r6
  int v8; // r5
  void *result; // r0
  int v10; // r0

  v5 = sysconf(39);
  v6 = sysconf(39) * (_DWORD)this;
  v7 = (void *)(-v5 & a2);
  v8 = 50;
  if ( !v7 )
    v8 = 34;
  result = mmap(v7, v6, 7, v8, 0, 0);
  if ( result == (void *)-1 )
  {
    v10 = sysconf(39);
    return mmap(v7, v10 * (_DWORD)this, 3, v8, 0, 0);
  }
  return result;
}


// ======================================================================
// ADDR: 0x1e2b34
// SYMBOL: llmo::mem::deallocate(void *,int)
int __fastcall llmo::mem::deallocate(llmo::mem *this, void *a2, int a3)
{
  int v4; // r1

  v4 = sysconf(39) * (_DWORD)a2;
  return sub_224454(this, v4);
}


// ======================================================================
// ADDR: 0x1e2b50
// SYMBOL: llmo::mem::lib::load(char const*)
void *__fastcall llmo::mem::lib::load(llmo::mem::lib *this, const char *a2)
{
  return dlopen((const char *)this, 0);
}


// ======================================================================
// ADDR: 0x1e2b5c
// SYMBOL: llmo::mem::lib::load(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> const&)
void *__fastcall llmo::mem::lib::load(unsigned __int8 *a1)
{
  const char *v1; // r1

  v1 = (const char *)*((_DWORD *)a1 + 2);
  if ( !(*a1 << 31) )
    v1 = (const char *)(a1 + 1);
  return dlopen(v1, 0);
}


// ======================================================================
// ADDR: 0x1e2b74
// SYMBOL: llmo::mem::lib::unload(void *)
// attributes: thunk
int __fastcall llmo::mem::lib::unload(llmo::mem::lib *this, void *a2)
{
  return _ZN4llmo3mem3lib6unloadEPv_0(this, a2);
}


// ======================================================================
// ADDR: 0x1e2b78
// SYMBOL: llmo::mem::lib::find(char const*)
int __fastcall llmo::mem::lib::find(llmo::mem::lib *this, const char *a2, bool a3)
{
  return llmo::mem::lib::find(this, 0, a3);
}


// ======================================================================
// ADDR: 0x1e2b80
// SYMBOL: llmo::mem::lib::find(char const*,bool)
int __fastcall llmo::mem::lib::find(llmo::mem::lib *this, const char *a2, bool a3)
{
  int v3; // r1
  int v5; // [sp+0h] [bp-30h] BYREF
  llmo::mem::lib *v6; // [sp+4h] [bp-2Ch] BYREF
  _DWORD v7[4]; // [sp+8h] [bp-28h] BYREF
  _DWORD *v8; // [sp+18h] [bp-18h]

  v6 = this;
  v5 = 0;
  v7[2] = &v5;
  v7[1] = &v6;
  v8 = v7;
  v7[0] = &off_230FE8;
  posix_detail::getMemInfo((int)v7, (int)a2);
  if ( v7 == v8 )
  {
    v3 = 4;
    goto LABEL_5;
  }
  if ( v8 )
  {
    v3 = 5;
LABEL_5:
    (*(void (**)(void))(*v8 + 4 * v3))();
  }
  return v5;
}


// ======================================================================
// ADDR: 0x1e2c08
// SYMBOL: llmo::mem::lib::find(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> const&)
int __fastcall llmo::mem::lib::find(unsigned __int8 *a1)
{
  llmo::mem::lib *v1; // r1

  v1 = (llmo::mem::lib *)*((_DWORD *)a1 + 2);
  if ( !(*a1 << 31) )
    v1 = (llmo::mem::lib *)(a1 + 1);
  return llmo::mem::lib::find(v1, 0, 0);
}


// ======================================================================
// ADDR: 0x1e2c1a
// SYMBOL: llmo::mem::lib::find(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> const&,bool)
int __fastcall llmo::mem::lib::find(unsigned __int8 *a1, const char *a2)
{
  llmo::mem::lib *v2; // r2

  v2 = (llmo::mem::lib *)*((_DWORD *)a1 + 2);
  if ( !(*a1 << 31) )
    v2 = (llmo::mem::lib *)(a1 + 1);
  return llmo::mem::lib::find(v2, a2, (bool)v2);
}


// ======================================================================
// ADDR: 0x1e2c2c
// SYMBOL: llmo::mem::lib::name(uint)
int __fastcall llmo::mem::lib::name(llmo::mem::lib *this, unsigned int a2)
{
  int v2; // r1
  unsigned int v4; // [sp+4h] [bp-2Ch] BYREF
  _DWORD v5[4]; // [sp+8h] [bp-28h] BYREF
  _DWORD *v6; // [sp+18h] [bp-18h]
  int v7; // [sp+24h] [bp-Ch]

  v4 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v5[2] = this;
  v5[1] = &v4;
  v6 = v5;
  v5[0] = &off_231030;
  posix_detail::getMemInfo((int)v5, 1);
  if ( v5 == v6 )
  {
    v2 = 4;
    goto LABEL_5;
  }
  if ( v6 )
  {
    v2 = 5;
LABEL_5:
    (*(void (**)(void))(*v6 + 4 * v2))();
  }
  return v7;
}


// ======================================================================
// ADDR: 0x1e2cc0
// SYMBOL: llmo::mem::lib::symbol(char const*,char const*)
void *__fastcall llmo::mem::lib::symbol(llmo::mem::lib *this, const char *a2, const char *a3)
{
  void *v4; // r0

  v4 = dlopen((const char *)this, 4);
  if ( v4 )
    return dlsym(v4, a2);
  else
    return 0;
}


// ======================================================================
// ADDR: 0x1e2cda
// SYMBOL: llmo::mem::lib::symbol(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> const&)
int __fastcall llmo::mem::lib::symbol(unsigned __int8 *a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r4
  int v3; // r2
  unsigned __int8 *v4; // r3

  v2 = (unsigned __int8 *)*((_DWORD *)a1 + 2);
  v3 = *a1 << 31;
  v4 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
  if ( !v3 )
    v2 = a1 + 1;
  if ( !(*a2 << 31) )
    v4 = a2 + 1;
  return sub_224478(v2, v4, v3);
}


// ======================================================================
// ADDR: 0x1e2d06
// SYMBOL: llmo::mem::prot::get(void *,uint)
int __fastcall llmo::mem::prot::get(llmo::mem::prot *this, unsigned int a2, unsigned int a3, bool a4)
{
  return llmo::mem::prot::get(this, a2, 0, a4);
}


// ======================================================================
// ADDR: 0x1e2d0c
// SYMBOL: llmo::mem::prot::get(void *,uint,bool)
int __fastcall llmo::mem::prot::get(llmo::mem::prot *this, void *a2, int a3, bool a4)
{
  int v4; // r1
  int v6; // [sp+4h] [bp-34h] BYREF
  void *v7; // [sp+8h] [bp-30h] BYREF
  llmo::mem::prot *v8; // [sp+Ch] [bp-2Ch] BYREF
  _DWORD v9[4]; // [sp+10h] [bp-28h] BYREF
  _DWORD *v10; // [sp+20h] [bp-18h]

  v7 = a2;
  v8 = this;
  v6 = -1;
  v9[3] = &v6;
  v9[2] = &v7;
  v9[1] = &v8;
  v10 = v9;
  v9[0] = &off_231070;
  posix_detail::getMemInfo((int)v9, a3);
  if ( v9 == v10 )
  {
    v4 = 4;
    goto LABEL_5;
  }
  if ( v10 )
  {
    v4 = 5;
LABEL_5:
    (*(void (**)(void))(*v10 + 4 * v4))();
  }
  return v6;
}


// ======================================================================
// ADDR: 0x1e2d9c
// SYMBOL: llmo::mem::prot::get(uint,uint)
int __fastcall llmo::mem::prot::get(llmo::mem::prot *this, unsigned int a2, unsigned int a3, bool a4)
{
  return llmo::mem::prot::get(this, a2, 0, a4);
}


// ======================================================================
// ADDR: 0x1e2da2
// SYMBOL: llmo::mem::prot::get(uint,uint,bool)
// attributes: thunk
int __fastcall llmo::mem::prot::get(llmo::mem::prot *this, unsigned int a2, unsigned int a3, bool a4)
{
  return _ZN4llmo3mem4prot3getEjjb_0(this, a2, a3, a4);
}


// ======================================================================
// ADDR: 0x1e2da6
// SYMBOL: llmo::mem::prot::set(void *,uint,int)
int __fastcall llmo::mem::prot::set(unsigned int this, char *a2, int a3, int a4)
{
  unsigned int v5; // r4
  int v7; // r0
  unsigned int v8; // r4
  char *v9; // r5
  _BOOL4 v10; // r6
  size_t v11; // r0
  int v12; // r0

  v5 = (unsigned int)&a2[this];
  v7 = -sysconf(39);
  v8 = v5 & v7;
  v9 = (char *)(this & v7);
  if ( (unsigned int)v9 > v8 )
    return 1;
  do
  {
    v11 = sysconf(39);
    v12 = mprotect(v9, v11, a3);
    v10 = v12 == 0;
    if ( v12 )
      break;
    v9 += sysconf(39);
  }
  while ( (unsigned int)v9 <= v8 );
  return v10;
}


// ======================================================================
// ADDR: 0x1e2df6
// SYMBOL: llmo::mem::prot::set(uint,uint,int)
// attributes: thunk
int __fastcall llmo::mem::prot::set(llmo::mem::prot *this, unsigned int a2, unsigned int a3, int a4)
{
  return _ZN4llmo3mem4prot3setEjji_0(this, a2, a3, a4);
}


// ======================================================================
// ADDR: 0x1e2dfc
// SYMBOL: llmo::mem::getFD(void *,bool)
int __fastcall llmo::mem::getFD(llmo::mem *this, int a2, bool a3)
{
  int v3; // r1
  int v5; // [sp+0h] [bp-30h] BYREF
  llmo::mem *v6; // [sp+4h] [bp-2Ch] BYREF
  _DWORD v7[4]; // [sp+8h] [bp-28h] BYREF
  _DWORD *v8; // [sp+18h] [bp-18h]

  v6 = this;
  v5 = 0;
  v7[2] = &v5;
  v7[1] = &v6;
  v8 = v7;
  v7[0] = &off_2310B0;
  posix_detail::getMemInfo((int)v7, a2);
  if ( v7 == v8 )
  {
    v3 = 4;
    goto LABEL_5;
  }
  if ( v8 )
  {
    v3 = 5;
LABEL_5:
    (*(void (**)(void))(*v8 + 4 * v3))();
  }
  return v5;
}


// ======================================================================
// ADDR: 0x1e2e84
// SYMBOL: llmo::mem::getFD(uint,bool)
// attributes: thunk
int __fastcall llmo::mem::getFD(llmo::mem *this, unsigned int a2, bool a3)
{
  return _ZN4llmo3mem5getFDEjb_0(this, a2, a3);
}


// ======================================================================
// ADDR: 0x1e2e88
// SYMBOL: llmo::mem::getSize(void *,bool)
int __fastcall llmo::mem::getSize(llmo::mem *this, int a2, bool a3)
{
  int v3; // r1
  int v5; // [sp+0h] [bp-30h] BYREF
  llmo::mem *v6; // [sp+4h] [bp-2Ch] BYREF
  _DWORD v7[4]; // [sp+8h] [bp-28h] BYREF
  _DWORD *v8; // [sp+18h] [bp-18h]

  v6 = this;
  v5 = 0;
  v7[2] = &v5;
  v7[1] = &v6;
  v8 = v7;
  v7[0] = &off_2310F0;
  posix_detail::getMemInfo((int)v7, a2);
  if ( v7 == v8 )
  {
    v3 = 4;
    goto LABEL_5;
  }
  if ( v8 )
  {
    v3 = 5;
LABEL_5:
    (*(void (**)(void))(*v8 + 4 * v3))();
  }
  return v5;
}


// ======================================================================
// ADDR: 0x1e2f10
// SYMBOL: llmo::mem::getSize(uint,bool)
// attributes: thunk
int __fastcall llmo::mem::getSize(llmo::mem *this, unsigned int a2, bool a3)
{
  return _ZN4llmo3mem7getSizeEjb_0(this, a2, a3);
}


// ======================================================================
// ADDR: 0x224460
// SYMBOL: llmo::mem::lib::unload(void *)
int __fastcall llmo::mem::lib::unload(void *this, void *a2)
{
  return CloseLib_0(this);
}


// ======================================================================
// ADDR: 0x224484
// SYMBOL: llmo::mem::prot::get(uint,uint,bool)
int __fastcall llmo::mem::prot::get(llmo::mem::prot *this, void *a2, unsigned int a3, bool a4)
{
  return llmo::mem::prot::get(this, a2, a3, a4);
}


// ======================================================================
// ADDR: 0x224490
// SYMBOL: llmo::mem::prot::set(uint,uint,int)
int __fastcall llmo::mem::prot::set(llmo::mem::prot *this, void *a2, unsigned int a3, int a4)
{
  return llmo::mem::prot::set(this, a2, a3, a4);
}


// ======================================================================
// ADDR: 0x22449c
// SYMBOL: llmo::mem::getFD(uint,bool)
int __fastcall llmo::mem::getFD(llmo::mem *this, void *a2, bool a3)
{
  return llmo::mem::getFD(this, a2, a3);
}


// ======================================================================
// ADDR: 0x2244a8
// SYMBOL: llmo::mem::getSize(uint,bool)
int __fastcall llmo::mem::getSize(llmo::mem *this, void *a2, bool a3)
{
  return llmo::mem::getSize(this, a2, a3);
}


// ======================================================================
// ADDR: 0x225050
// SYMBOL: llmo::mem::prot::get(void *,uint)
// attributes: thunk
int __fastcall llmo::mem::prot::get(llmo::mem::prot *this, unsigned int a2, unsigned int a3, bool a4)
{
  return _ZN4llmo3mem4prot3getEPvj(this, a2, a3, a4);
}


// ======================================================================
// ADDR: 0x225a80
// SYMBOL: llmo::mem::prot::set(void *,uint,int)
// attributes: thunk
int __fastcall llmo::mem::prot::set(unsigned int this, char *a2, int a3, int a4)
{
  return _ZN4llmo3mem4prot3setEPvji(this, a2, a3, a4);
}


// ======================================================================
// ADDR: 0x225a90
// SYMBOL: llmo::mem::pageSize(void)
// attributes: thunk
int __fastcall llmo::mem::pageSize(llmo::mem *this)
{
  return _ZN4llmo3mem8pageSizeEv(this);
}


// ======================================================================
// ADDR: 0x225aa0
// SYMBOL: llmo::mem::prot::get(uint,uint,bool)
// attributes: thunk
int __fastcall llmo::mem::prot::get(llmo::mem::prot *this, unsigned int a2, unsigned int a3, bool a4)
{
  return _ZN4llmo3mem4prot3getEjjb(this, a2, a3, a4);
}


// ======================================================================
// ADDR: 0x225ab0
// SYMBOL: llmo::mem::prot::get(void *,uint,bool)
// attributes: thunk
int __fastcall llmo::mem::prot::get(llmo::mem::prot *this, void *a2, int a3, bool a4)
{
  return _ZN4llmo3mem4prot3getEPvjb(this, a2, a3, a4);
}


// ======================================================================
// ADDR: 0x225b20
// SYMBOL: llmo::mem::prot::get(uint,uint)
// attributes: thunk
int __fastcall llmo::mem::prot::get(llmo::mem::prot *this, unsigned int a2, unsigned int a3, bool a4)
{
  return _ZN4llmo3mem4prot3getEjj(this, a2, a3, a4);
}


// ======================================================================
// ADDR: 0x225b30
// SYMBOL: llmo::mem::prot::set(uint,uint,int)
// attributes: thunk
int __fastcall llmo::mem::prot::set(llmo::mem::prot *this, unsigned int a2, unsigned int a3, int a4)
{
  return _ZN4llmo3mem4prot3setEjji(this, a2, a3, a4);
}


// ======================================================================
// ADDR: 0x227200
// SYMBOL: llmo::mem::lib::find(char const*,bool)
// attributes: thunk
int __fastcall llmo::mem::lib::find(llmo::mem::lib *this, const char *a2, bool a3)
{
  return _ZN4llmo3mem3lib4findEPKcb(this, a2, a3);
}


// ======================================================================
// ADDR: 0x227210
// SYMBOL: llmo::mem::lib::symbol(char const*,char const*)
// attributes: thunk
void *__fastcall llmo::mem::lib::symbol(llmo::mem::lib *this, const char *a2, const char *a3)
{
  return _ZN4llmo3mem3lib6symbolEPKcS3_(this, a2, a3);
}


// ======================================================================
// ADDR: 0x227220
// SYMBOL: llmo::mem::getFD(void *,bool)
// attributes: thunk
int __fastcall llmo::mem::getFD(llmo::mem *this, int a2, bool a3)
{
  return _ZN4llmo3mem5getFDEPvb(this, a2, a3);
}


// ======================================================================
// ADDR: 0x227230
// SYMBOL: llmo::mem::getSize(void *,bool)
// attributes: thunk
int __fastcall llmo::mem::getSize(llmo::mem *this, int a2, bool a3)
{
  return _ZN4llmo3mem7getSizeEPvb(this, a2, a3);
}


// ======================================================================
