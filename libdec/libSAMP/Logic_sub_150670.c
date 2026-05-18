// ADDR: 0x151890
// SYMBOL: sub_151890
_DWORD *__fastcall sub_151890(int a1, _DWORD *a2, int a3, char a4, char a5, int a6)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_151830(a1, a3, a4, a5, a6, 1u, 1065353216);
  *result = &off_22F340;
  result[12] = *a2;
  *a2 = 0;
  return result;
}


// ======================================================================
// ADDR: 0x157fd4
// SYMBOL: sub_157FD4
int __fastcall sub_157FD4(_DWORD *a1, char *a2, std::__thread_struct *a3)
{
  int v6; // r9
  std::__thread_struct *v7; // r10
  std::__thread_struct **v8; // r4
  char v9; // r12
  std::__thread_struct *v10; // r1
  std::__thread_struct *v11; // r3
  std::__thread_struct *v12; // r2
  std::__ndk1 *v13; // r0
  const char *v14; // r2
  pthread_t v16; // [sp+0h] [bp-28h] BYREF
  int v17; // [sp+4h] [bp-24h] BYREF
  int v18; // [sp+8h] [bp-20h] BYREF
  std::__thread_struct **v19; // [sp+Ch] [bp-1Ch] BYREF

  v6 = operator new(0x20u);
  *(_DWORD *)v6 = &off_22F51C;
  *a1 = v6;
  v17 = v6;
  *(_QWORD *)(v6 + 4) = 0LL;
  *(_QWORD *)(v6 + 12) = 0LL;
  *(_DWORD *)(v6 + 20) = 0;
  sub_1584A0(v6);
  v7 = (std::__thread_struct *)operator new(4u);
  std::__thread_struct::__thread_struct(v7);
  v8 = (std::__thread_struct **)operator new(0x18u);
  *v8 = v7;
  v8[1] = (std::__thread_struct *)v6;
  v8[5] = a3;
  v9 = *a2;
  v10 = (std::__thread_struct *)*((_DWORD *)a2 + 2);
  v11 = *(std::__thread_struct **)(a2 + 1);
  v12 = (std::__thread_struct *)*((_DWORD *)a2 + 1);
  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((_DWORD *)a2 + 2) = 0;
  v17 = 0;
  v18 = 0;
  *(std::__thread_struct **)((char *)v8 + 9) = v11;
  v8[3] = v12;
  v8[4] = v10;
  *((_BYTE *)v8 + 8) = v9;
  v19 = v8;
  sub_1580F4(&v18);
  v13 = (std::__ndk1 *)pthread_create(&v16, 0, (void *(*)(void *))sub_1584E8, v8);
  if ( v13 )
    std::__throw_system_error(v13, (int)"thread constructor failed", v14);
  v19 = 0;
  sub_158680(&v19);
  std::thread::detach((std::thread *)&v16);
  std::thread::~thread((std::thread *)&v16);
  return sub_1580F4(&v17);
}


// ======================================================================
