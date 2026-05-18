// ADDR: 0x1801d8
// SYMBOL: sub_1801D8
bool __fastcall sub_1801D8(_DWORD *a1, int a2, int a3, const void *a4, size_t a5)
{
  int v7; // r6
  int v8; // r5
  __int16 v9; // r1
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v14; // [sp+4h] [bp-24h] BYREF
  int v15; // [sp+8h] [bp-20h]

  (*(void (__fastcall **)(_DWORD *, int, int, int *))(*a1 + 192))(a1, a2, a3, &v14);
  v7 = sub_181978(a1, v14, v15, 0, 1);
  if ( !v7 )
  {
    v8 = sub_1824B6(a1 + 227);
    v9 = v15;
    *(_DWORD *)v8 = v14;
    *(_WORD *)(v8 + 4) = v9;
    *(_DWORD *)(v8 + 8) = sub_17E2E4();
    *(_DWORD *)(v8 + 280) = 1;
    *(_DWORD *)(v8 + 16) = 0;
    *(_BYTE *)(v8 + 12) = 0;
    j_memcpy((void *)(v8 + 22), a4, a5);
    v10 = a1[230];
    v11 = a1[232];
    *(_BYTE *)(v10 + 284) = 1;
    *(_BYTE *)(v8 + 278) = a5;
    v12 = *(_DWORD *)(v10 + 288);
    a1[232] = v11 + 1;
    a1[230] = v12;
  }
  return v7 == 0;
}


// ======================================================================
