// ADDR: 0xf3cac
// SYMBOL: sub_F3CAC
int __fastcall sub_F3CAC(int a1, int a2, int a3, int a4)
{
  _DWORD v6[5]; // [sp+4h] [bp-14h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  v6[2] = a3;
  v6[0] = a4;
  v6[1] = a2;
  sub_F3EB0(a1, v6);
  return a1;
}


// ======================================================================
// ADDR: 0xf3db8
// SYMBOL: sub_F3DB8
int sub_F3DB8()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_240030;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_240030);
    if ( result )
    {
      dword_240028 = 0;
      _cxa_atexit((void (*)(void *))sub_F3CE6, &unk_240018, &off_22A540);
      return sub_2242B0(&byte_240030);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xf3e10
// SYMBOL: sub_F3E10
int __fastcall sub_F3E10(int a1, int a2)
{
  int v3; // r0
  int v4; // r0

  v3 = *(_DWORD *)(a2 + 16);
  if ( v3 )
  {
    if ( a2 == v3 )
    {
      *(_DWORD *)(a1 + 16) = a1;
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a2 + 16) + 12))(*(_DWORD *)(a2 + 16), a1);
      return a1;
    }
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
  }
  else
  {
    v4 = 0;
  }
  *(_DWORD *)(a1 + 16) = v4;
  return a1;
}


// ======================================================================
// ADDR: 0xf3e3c
// SYMBOL: sub_F3E3C
_DWORD *__fastcall sub_F3E3C(_DWORD *a1, int a2)
{
  _DWORD *v3; // r0
  int v5; // r1
  int v6; // r0

  v3 = (_DWORD *)a1[4];
  a1[4] = 0;
  if ( a1 == v3 )
  {
    v5 = 4;
  }
  else
  {
    if ( !v3 )
      goto LABEL_6;
    v5 = 5;
  }
  (*(void (**)(void))(*v3 + 4 * v5))();
LABEL_6:
  v6 = *(_DWORD *)(a2 + 16);
  if ( v6 )
  {
    if ( a2 == v6 )
    {
      a1[4] = a1;
      (*(void (__fastcall **)(_DWORD, _DWORD *))(**(_DWORD **)(a2 + 16) + 12))(*(_DWORD *)(a2 + 16), a1);
    }
    else
    {
      a1[4] = v6;
      *(_DWORD *)(a2 + 16) = 0;
    }
  }
  else
  {
    a1[4] = 0;
  }
  return a1;
}


// ======================================================================
// ADDR: 0xf4040
// SYMBOL: sub_F4040
void __fastcall sub_F4040(int *a1, _QWORD *a2)
{
  int v4; // r0
  int v5; // r2
  unsigned int v6; // r1
  int v7; // r2
  int v8; // r0
  char *v9; // r0
  __int64 v10; // d17
  void *v11; // [sp+4h] [bp-24h] BYREF
  char *v12; // [sp+8h] [bp-20h]
  char *v13; // [sp+Ch] [bp-1Ch]

  v4 = *a1;
  v5 = a1[1] - v4;
  v6 = (v5 >> 4) + 1;
  if ( v6 >= 0x10000000 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  v7 = v5 >> 4;
  v8 = a1[2] - v4;
  if ( v6 <= v8 >> 3 )
    v6 = v8 >> 3;
  if ( (unsigned int)v8 >= 0x7FFFFFF0 )
    v6 = 0xFFFFFFF;
  sub_F40DC(&v11, v6, v7, a1 + 2);
  v9 = v13;
  v10 = a2[1];
  *(_QWORD *)v13 = *a2;
  *((_QWORD *)v9 + 1) = v10;
  v13 += 16;
  sub_F4124(a1, &v11);
  if ( v13 != v12 )
    v13 += 16 * ~((unsigned int)(v13 - v12 - 16) >> 4);
  if ( v11 )
    operator delete(v11);
}


// ======================================================================
