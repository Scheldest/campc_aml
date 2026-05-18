// ADDR: 0x157af0
// SYMBOL: sub_157AF0
int __fastcall sub_157AF0(int result, int a2, int a3)
{
  *(_DWORD *)(result + 20) = 1065353216;
  *(_BYTE *)(result + 16) = 0;
  *(_DWORD *)result = &off_22F4EC;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = a2;
  *(_DWORD *)(result + 12) = a3;
  return result;
}


// ======================================================================
// ADDR: 0x157b14
// SYMBOL: sub_157B14
int __fastcall sub_157B14(int *a1, int a2)
{
  int result; // r0
  int v4; // r0

  result = *((unsigned __int8 *)a1 + 16);
  if ( !result )
  {
    v4 = *a1;
    a1[1] = a2;
    (*(void (__fastcall **)(int *))(v4 + 28))(a1);
    result = 1;
    *((_BYTE *)a1 + 16) = 1;
  }
  return result;
}


// ======================================================================
// ADDR: 0x157fa8
// SYMBOL: sub_157FA8
int sub_157FA8(int a1, int a2, const char *a3, ...)
{
  va_list va; // [sp+14h] [bp-4h] BYREF

  va_start(va, a3);
  return _vsprintf_chk(a1, 0, 2047, a3, va);
}


// ======================================================================
// ADDR: 0x15bbfe
// SYMBOL: sub_15BBFE
_DWORD *__fastcall sub_15BBFE(_DWORD *a1, unsigned int a2)
{
  *a1 = a2;
  a1[1] = 0;
  a1[2] = operator new[](a2);
  return a1;
}


// ======================================================================
