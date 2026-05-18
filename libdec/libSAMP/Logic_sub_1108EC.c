// ADDR: 0x110a14
// SYMBOL: sub_110A14
int __fastcall sub_110A14(int a1, int a2, int a3, int a4)
{
  _DWORD v6[5]; // [sp+4h] [bp-14h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  v6[2] = a3;
  v6[0] = a4;
  v6[1] = a2;
  sub_110C30(a1, v6);
  return a1;
}


// ======================================================================
// ADDR: 0x110b44
// SYMBOL: sub_110B44
int sub_110B44()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_2633F0;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_2633F0);
    if ( result )
    {
      dword_2633E8 = 0;
      _cxa_atexit((void (*)(void *))sub_110A7C, &unk_2633D8, &off_22A540);
      return sub_2242B0(&byte_2633F0);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x110b9c
// SYMBOL: sub_110B9C
int __fastcall sub_110B9C(int a1, int a2)
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
// ADDR: 0x110bc8
// SYMBOL: sub_110BC8
_DWORD *__fastcall sub_110BC8(_DWORD *a1, int a2)
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
