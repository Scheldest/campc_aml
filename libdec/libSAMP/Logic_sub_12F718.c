// ADDR: 0x12f820
// SYMBOL: sub_12F820
int __fastcall sub_12F820(int result)
{
  if ( *(unsigned __int8 *)(result + 100) << 31 )
  {
    **(_BYTE **)(result + 108) = 0;
    *(_DWORD *)(result + 104) = 0;
  }
  else
  {
    *(_WORD *)(result + 100) = 0;
  }
  if ( *(unsigned __int8 *)(result + 88) << 31 )
  {
    **(_BYTE **)(result + 96) = 0;
    *(_DWORD *)(result + 92) = 0;
  }
  else
  {
    *(_WORD *)(result + 88) = 0;
  }
  if ( *(unsigned __int8 *)(result + 112) << 31 )
  {
    **(_BYTE **)(result + 120) = 0;
    *(_DWORD *)(result + 116) = 0;
  }
  else
  {
    *(_WORD *)(result + 112) = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x12f86a
// SYMBOL: sub_12F86A
int __fastcall sub_12F86A(int a1, __int64 *a2)
{
  int v3; // r6
  __int64 v5; // d16
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r2
  double v9; // d16
  int result; // r0
  double v11; // [sp+0h] [bp-20h] BYREF
  int v12; // [sp+8h] [bp-18h]

  v3 = a1 + 100;
  if ( *(unsigned __int8 *)(a1 + 100) << 31 )
    operator delete(*(void **)(a1 + 108));
  v5 = *a2;
  *(_DWORD *)(v3 + 8) = *((_DWORD *)a2 + 2);
  *(_QWORD *)v3 = v5;
  *(_WORD *)a2 = 0;
  v6 = *(unsigned __int8 *)(a1 + 100);
  v7 = *(_DWORD *)(a1 + 108);
  v8 = *(_DWORD *)(a1 + 104);
  if ( (v6 & 1) == 0 )
  {
    v7 = v3 + 1;
    v8 = v6 >> 1;
  }
  sub_164D04(&v11, v7, v8);
  if ( *(unsigned __int8 *)(a1 + 88) << 31 )
    operator delete(*(void **)(a1 + 96));
  v9 = v11;
  result = v12;
  *(_DWORD *)(a1 + 96) = v12;
  *(double *)(a1 + 88) = v9;
  return result;
}


// ======================================================================
