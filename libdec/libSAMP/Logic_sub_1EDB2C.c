// ADDR: 0x1ee408
// SYMBOL: sub_1EE408
bool __fastcall sub_1EE408(int a1, int a2, const void *a3, size_t n)
{
  _DWORD v5[2]; // [sp+4h] [bp-Ch] BYREF

  v5[0] = a1;
  v5[1] = a2;
  return a2 == n && sub_126DBE((int)v5, a3, n) == 0;
}


// ======================================================================
// ADDR: 0x1ee450
// SYMBOL: sub_1EE450
__int64 __fastcall sub_1EE450(__int64 a1, int a2, int a3)
{
  __int64 v5; // [sp+0h] [bp-18h] BYREF
  int v6; // [sp+8h] [bp-10h]
  int v7; // [sp+Ch] [bp-Ch]

  v5 = a1;
  v6 = a2;
  v7 = a3;
  sub_1ED8D4((_DWORD *)a1);
  if ( closedir(*(DIR **)HIDWORD(a1)) == -1 )
  {
    sub_1EE4D8(&v5);
    *(_QWORD *)a1 = v5;
  }
  *(_DWORD *)HIDWORD(a1) = 0;
  return v5;
}


// ======================================================================
// ADDR: 0x1ee4a0
// SYMBOL: sub_1EE4A0
int __fastcall sub_1EE4A0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  int result; // r0

  sub_1EE4FE();
  *(_DWORD *)(a1 + 44) = a10;
  *(_DWORD *)(a1 + 40) = a9;
  *(_DWORD *)(a1 + 36) = a8;
  *(_DWORD *)(a1 + 32) = a7;
  *(_DWORD *)(a1 + 28) = a6;
  *(_DWORD *)(a1 + 24) = a5;
  result = a11;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = a4;
  *(_WORD *)(a1 + 48) = a11;
  return result;
}


// ======================================================================
// ADDR: 0x1ee4d8
// SYMBOL: sub_1EE4D8
int __fastcall sub_1EE4D8(_DWORD *a1)
{
  std::__ndk1 *v2; // r0
  int v3; // r5
  int result; // r0

  v2 = (std::__ndk1 *)_errno(a1);
  v3 = *(_DWORD *)v2;
  result = std::generic_category(v2);
  *a1 = v3;
  a1[1] = result;
  return result;
}


// ======================================================================
