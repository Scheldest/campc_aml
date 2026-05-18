// ADDR: 0x14abc8
// SYMBOL: sub_14ABC8
int __fastcall sub_14ABC8(int a1, unsigned __int16 *a2)
{
  __int64 v4; // d17
  __int64 v5; // d18
  unsigned int v6; // r6
  char v7; // r2
  int v8; // r1
  int v9; // r0
  int v10; // r8
  unsigned int v11; // r1
  unsigned int v12; // r2
  int v13; // r0
  int result; // r0

  v4 = *((_QWORD *)a2 + 1);
  v5 = *((_QWORD *)a2 + 2);
  *(_QWORD *)(a1 + 248) = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 256) = v4;
  *(_QWORD *)(a1 + 264) = v5;
  v6 = *a2;
  v7 = *((_BYTE *)a2 + 2);
  v8 = *(_DWORD *)(dword_23DEF4 + 944);
  *(_BYTE *)(a1 + 36) = v7 & 0x3F;
  v9 = 0;
  *(_WORD *)(a1 + 22) = v6;
  if ( v6 >> 4 <= 0x7C )
  {
    v10 = *(_DWORD *)(v8 + 4);
    if ( sub_F2396(v10, v6) )
      v9 = *(_DWORD *)(v10 + 4 * v6);
    else
      v9 = 0;
  }
  v11 = *((unsigned __int8 *)a2 + 4);
  v12 = *((unsigned __int8 *)a2 + 5);
  *(_DWORD *)(a1 + 4) = v9;
  *(_BYTE *)(a1 + 26) = 18;
  *(float *)(a1 + 8) = (float)v11;
  *(float *)(a1 + 12) = (float)v12;
  *(_DWORD *)(a1 + 288) = sub_F0B30();
  v13 = *(_DWORD *)(a1 + 296);
  *(_BYTE *)(a1 + 27) = 0;
  if ( v13 && !sub_104108(v13) )
    sub_14AA0C(a1);
  result = *(unsigned __int8 *)(a1 + 25);
  if ( result != 18 )
  {
    result = 18;
    *(_BYTE *)(a1 + 25) = 18;
  }
  return result;
}


// ======================================================================
