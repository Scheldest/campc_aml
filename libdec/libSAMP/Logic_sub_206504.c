// ADDR: 0x20e494
// SYMBOL: sub_20E494
int __fastcall sub_20E494(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  __int64 v6; // r0
  unsigned int v7; // r8
  int v8; // r1
  int v9; // r9
  int v10; // r0
  unsigned int v11; // r1
  _DWORD *v12; // r0
  _DWORD *v13; // r1
  int v14; // r2
  int v16; // [sp+0h] [bp-30h] BYREF
  _DWORD *v17; // [sp+4h] [bp-2Ch]
  _DWORD *v18; // [sp+8h] [bp-28h]
  unsigned int v19; // [sp+Ch] [bp-24h]
  int v20; // [sp+10h] [bp-20h]
  int v21; // [sp+14h] [bp-1Ch]

  v16 = a3;
  v17 = a4;
  v6 = *(_QWORD *)(a1 + 4);
  if ( a2 <= (HIDWORD(v6) - (int)v6) >> 2 )
    return sub_20E1D4(a1, a2);
  v7 = sub_20E3B4((_DWORD *)a1, a2 + (((int)v6 - *(_DWORD *)a1) >> 2));
  v8 = *(_DWORD *)(a1 + 4) - *(_DWORD *)a1;
  v20 = a1 + 16;
  v9 = v8 >> 2;
  if ( v7 )
    v10 = sub_20E20C(a1 + 16, v7);
  else
    v10 = 0;
  v11 = v10 + 4 * v7;
  v16 = v10;
  v12 = (_DWORD *)(v10 + 4 * v9);
  v19 = v11;
  v13 = &v12[a2];
  v14 = 4 * a2;
  v17 = v12;
  while ( v14 )
  {
    *v12++ = 0;
    v14 -= 4;
  }
  v18 = v13;
  sub_20E568(a1, &v16);
  sub_20E598(&v16);
  return v21;
}


// ======================================================================
