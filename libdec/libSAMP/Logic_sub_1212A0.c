// ADDR: 0x121608
// SYMBOL: sub_121608
int __fastcall sub_121608(int a1, int a2, int a3, int a4)
{
  _DWORD v6[5]; // [sp+4h] [bp-14h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  v6[2] = a3;
  v6[0] = a4;
  v6[1] = a2;
  sub_12186C(a1, v6);
  return a1;
}


// ======================================================================
// ADDR: 0x12167c
// SYMBOL: sub_12167C
int __fastcall sub_12167C(int a1, int a2, int a3, int a4)
{
  _DWORD v6[5]; // [sp+4h] [bp-14h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  v6[2] = a3;
  v6[0] = a4;
  v6[1] = a2;
  sub_121A64(a1, v6);
  return a1;
}


// ======================================================================
// ADDR: 0x1217a0
// SYMBOL: sub_1217A0
int sub_1217A0()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_263988;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_263988);
    if ( result )
    {
      dword_263980 = 0;
      _cxa_atexit((void (*)(void *))sub_1216D8, &unk_263970, &off_22A540);
      return sub_2242B0(&byte_263988);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1217f8
// SYMBOL: sub_1217F8
int __fastcall sub_1217F8(int a1, int a2)
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
// ADDR: 0x121824
// SYMBOL: sub_121824
_DWORD *__fastcall sub_121824(_DWORD *a1, int a2)
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
// ADDR: 0x121a0c
// SYMBOL: sub_121A0C
int sub_121A0C()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_2639A8;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_2639A8);
    if ( result )
    {
      dword_2639A0 = 0;
      _cxa_atexit((void (*)(void *))sub_11BEB8, dword_263990, &off_22A540);
      return sub_2242B0(&byte_2639A8);
    }
  }
  return result;
}


// ======================================================================
