// ADDR: 0x155fe4
// SYMBOL: sub_155FE4
int __fastcall sub_155FE4(int a1, int a2, unsigned __int8 *a3)
{
  unsigned int v4; // r0
  unsigned __int8 *v6; // r1
  unsigned int v7; // r3
  int result; // r0
  __int64 v9; // d16
  int v10; // r1

  v4 = *a3;
  v6 = (unsigned __int8 *)*((_DWORD *)a3 + 2);
  v7 = *((_DWORD *)a3 + 1);
  if ( (v4 & 1) == 0 )
  {
    v6 = a3 + 1;
    v7 = v4 >> 1;
  }
  result = std::string::append(a2, v6, v7, v7);
  v9 = *(_QWORD *)result;
  v10 = *(_DWORD *)(result + 8);
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(a1 + 8) = v10;
  *(_QWORD *)a1 = v9;
  return result;
}


// ======================================================================
// ADDR: 0x1561fe
// SYMBOL: sub_1561FE
int sub_1561FE(int a1, int a2, int a3, const char *a4, ...)
{
  va_list va; // [sp+18h] [bp+0h] BYREF

  va_start(va, a4);
  return _vsnprintf_chk(a1, a3, 0, a2, a4, va);
}


// ======================================================================
