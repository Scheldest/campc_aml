// ADDR: 0xdfb10
// SYMBOL: sub_DFB10
int __fastcall sub_DFB10(int a1, int a2, int a3, unsigned int a4, __int64 *a5)
{
  int v6; // r8
  unsigned int v7; // r5
  char v8; // r0
  int v9; // r6
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r6
  __int64 v17; // r2
  __int64 v18; // r0
  unsigned int v19; // r2
  int v20; // r3
  int v21; // r3
  _BYTE *v22; // r1
  _BYTE *v23; // r2
  int v24; // r5
  _BYTE v26[33]; // [sp+7h] [bp-21h] BYREF

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 - a4;
  v8 = byte_91CE0[*(_WORD *)(a2 + 9) & 0xF];
  if ( *(_DWORD *)a2 < a4 )
    v7 = 0;
  v9 = v7 >> v8;
  if ( v7 >> v8 )
    a1 = sub_DD992(a1, v9, v6);
  v10 = *(_DWORD *)(a1 + 8);
  v11 = v10 + 1;
  if ( *(_DWORD *)(a1 + 12) < (unsigned int)(v10 + 1) )
  {
    (**(void (__fastcall ***)(int))a1)(a1);
    v10 = *(_DWORD *)(a1 + 8);
    v11 = v10 + 1;
  }
  v12 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 8) = v11;
  *(_BYTE *)(v12 + v10) = 48;
  v13 = *(_DWORD *)(a1 + 8);
  v14 = v13 + 1;
  if ( *(_DWORD *)(a1 + 12) < (unsigned int)(v13 + 1) )
  {
    (**(void (__fastcall ***)(int))a1)(a1);
    v13 = *(_DWORD *)(a1 + 8);
    v14 = v13 + 1;
  }
  v15 = *(_DWORD *)(a1 + 4);
  v16 = v7 - v9;
  *(_DWORD *)(a1 + 8) = v14;
  *(_BYTE *)(v15 + v13) = 120;
  v17 = *(_QWORD *)(a1 + 8);
  v18 = *a5;
  v19 = v17 + *((_DWORD *)a5 + 1);
  if ( HIDWORD(v17) >= v19 && (v20 = *(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8) = v19, v20) )
  {
    HIDWORD(v18) = v19 + v20 - 1;
    do
    {
      v21 = v18 & 0xF;
      LODWORD(v18) = (unsigned int)v18 >> 4;
      *(_BYTE *)HIDWORD(v18) = a0123456789abcd[v21];
      --HIDWORD(v18);
    }
    while ( (_DWORD)v18 );
  }
  else
  {
    v22 = &v26[HIDWORD(v18)];
    v23 = v22 - 1;
    do
    {
      v24 = v18 & 0xF;
      LODWORD(v18) = (unsigned int)v18 >> 4;
      *v23-- = a0123456789abcd[v24];
    }
    while ( (_DWORD)v18 );
    a1 = sub_DCF1C((int)v26, (int)v22, a1);
  }
  if ( v16 )
    return sub_DD992(a1, v16, v6);
  return a1;
}


// ======================================================================
