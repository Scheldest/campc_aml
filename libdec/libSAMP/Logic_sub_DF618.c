// ADDR: 0xdf6dc
// SYMBOL: sub_DF6DC
int __fastcall sub_DF6DC(int a1, unsigned __int64 a2, int a3, int a4, int a5, unsigned __int8 *a6)
{
  unsigned __int8 *v7; // r11
  int v8; // r10
  int v9; // r6
  int v10; // r5
  unsigned int v11; // r10
  char *v12; // r4
  unsigned int v13; // r11
  __int64 v14; // r0
  int v15; // r5
  unsigned int v16; // r9
  char *v17; // r10
  unsigned int v18; // r5
  __int64 v19; // r0
  int v20; // r4
  char *v21; // r1
  int v22; // r4
  char *v23; // r1
  int v25; // [sp+10h] [bp-248h]
  _UNKNOWN **v26; // [sp+14h] [bp-244h] BYREF
  void *v27; // [sp+18h] [bp-240h]
  int v28; // [sp+1Ch] [bp-23Ch]
  int v29; // [sp+20h] [bp-238h]
  _BYTE v30[504]; // [sp+24h] [bp-234h] BYREF
  _DWORD v31[6]; // [sp+21Ch] [bp-3Ch] BYREF
  _DWORD v32[9]; // [sp+234h] [bp-24h] BYREF

  v7 = a6;
  v8 = a1;
  v9 = a2;
  v10 = a4;
  if ( a6[12] )
  {
    v29 = 500;
    v27 = v30;
    v28 = 0;
    v26 = &off_22A5C8;
    if ( a5 )
    {
      v25 = a1;
      v11 = a3 - a4;
      v12 = (char *)v31 + a3 + 1;
      if ( a3 - a4 < 2 )
      {
        v15 = a2;
      }
      else
      {
        v13 = (v11 >> 1) + 1;
        do
        {
          v14 = sub_2217B4(v9, HIDWORD(a2), 100, 0);
          v15 = v14;
          LODWORD(v14) = v9 - 100 * v14;
          --v13;
          HIDWORD(a2) = HIDWORD(v14);
          v9 = v15;
          *((_WORD *)v12 - 1) = *(_WORD *)&a00010203040506[2 * v14];
          v12 -= 2;
        }
        while ( v13 > 1 );
      }
      v7 = a6;
      if ( v11 << 31 )
      {
        a2 = sub_2217B4(v15, HIDWORD(a2), 10, 0);
        *--v12 = (v15 - 10 * a2) | 0x30;
      }
      else
      {
        LODWORD(a2) = v15;
      }
      v8 = v25;
      v10 = a4;
      *(v12 - 1) = a5;
      sub_DD0CC(v32, (int)&v12[-a4 - 1], a2, a4);
      v21 = (char *)v31 + a3 + 1;
    }
    else
    {
      sub_DD0CC(v32, (int)v31, a2, a3);
      v21 = (char *)v32[1];
    }
    sub_DCF1C((int)v31, (int)v21, (int)&v26);
    sub_DDA0C(v7, v8, (char *)v27, v10);
    v22 = sub_DCF1C((int)v27 + v10, (int)v27 + v28, v8);
    if ( v27 != v30 )
      operator delete(v27);
  }
  else
  {
    if ( a5 )
    {
      v16 = a3 - a4;
      v25 = a1;
      v17 = (char *)&v26 + a3 + 1;
      if ( a3 - a4 < 2 )
      {
        v20 = a2;
      }
      else
      {
        v18 = (v16 >> 1) + 1;
        do
        {
          v19 = sub_2217B4(v9, HIDWORD(a2), 100, 0);
          v20 = v19;
          LODWORD(v19) = v9 - 100 * v19;
          --v18;
          HIDWORD(a2) = HIDWORD(v19);
          v9 = v20;
          *((_WORD *)v17 - 1) = *(_WORD *)&a00010203040506[2 * v19];
          v17 -= 2;
        }
        while ( v18 > 1 );
      }
      if ( v16 << 31 )
      {
        a2 = sub_2217B4(v20, HIDWORD(a2), 10, 0);
        *--v17 = (v20 - 10 * a2) | 0x30;
      }
      else
      {
        LODWORD(a2) = v20;
      }
      *(v17 - 1) = a5;
      sub_DD0CC(v31, (int)&v17[-a4 - 1], a2, a4);
      v23 = (char *)&v26 + a3 + 1;
      v8 = v25;
    }
    else
    {
      sub_DD0CC(v31, (int)&v26, a2, a3);
      v23 = (char *)v31[1];
    }
    return sub_DCF1C((int)&v26, (int)v23, v8);
  }
  return v22;
}


// ======================================================================
