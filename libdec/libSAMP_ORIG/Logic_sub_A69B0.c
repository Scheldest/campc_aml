// ADDR: 0xa67c0
// SYMBOL: sub_A67C0
int __fastcall sub_A67C0(char *a1, float *a2, int a3)
{
  float *v4; // r8
  int v5; // r4
  int v6; // r6
  float *v8; // r11
  float v9; // r9
  float v10; // r10
  float v11; // s0
  float v12; // s2
  __int64 v13; // r0
  int v14; // r2
  int v15; // r0
  int v16; // r10
  float v17; // s10
  float v18; // s4
  int v20; // [sp+14h] [bp-5Ch]
  float v22[2]; // [sp+1Ch] [bp-54h] BYREF
  float v23[2]; // [sp+24h] [bp-4Ch] BYREF
  char v24; // [sp+2Eh] [bp-42h] BYREF
  char v25; // [sp+2Fh] [bp-41h] BYREF
  unsigned __int64 v26; // [sp+30h] [bp-40h] BYREF
  float v27; // [sp+38h] [bp-38h]
  float v28; // [sp+3Ch] [bp-34h]
  float v29[2]; // [sp+40h] [bp-30h] BYREF
  float v30[2]; // [sp+48h] [bp-28h] BYREF

  v4 = (float *)dword_1ACF68;
  v5 = *(_DWORD *)(dword_1ACF68 + 6572);
  *(_BYTE *)(v5 + 124) = 1;
  if ( *(_BYTE *)(v5 + 127) )
    return 0;
  v8 = v4 + 1364;
  v20 = sub_8AAD4(v5, (unsigned int)a1, 0);
  sub_899BC(v30, (unsigned int)a1, 0, 1, -1.0);
  v10 = *(float *)(v5 + 204);
  v9 = *(float *)(v5 + 200);
  v11 = v4[1365];
  if ( (a3 & 0x200) != 0 )
  {
    v12 = *(float *)(v5 + 248);
    if ( v11 < v12 )
      v10 = (float)(v12 - v11) + v10;
  }
  sub_972C4(v29, *a2, a2[1], (float)(*v8 + *v8) + v30[0], (float)(v11 + v11) + v30[1]);
  v26 = __PAIR64__(LODWORD(v10), LODWORD(v9));
  LODWORD(v13) = v29;
  v28 = v29[1] + v10;
  v27 = v29[0] + v9;
  *((float *)&v13 + 1) = v4[1365];
  sub_8B104(v13);
  v6 = 0;
  if ( sub_8B314((float *)&v26, v20, 0) )
  {
    v6 = sub_A634C((float *)&v26, v20, &v25, &v24, (*(_DWORD *)(v5 + 364) >> 1) & 1 | a3);
    if ( v6 )
      sub_8B0DC();
    v14 = 22;
    if ( !v25 )
      v14 = 21;
    v15 = v14;
    if ( v25 )
      v15 = 23;
    if ( !v24 )
      v15 = v14;
    v16 = sub_88C10(v15, 1.0);
    sub_8A1F8(&v26, v20, 1);
    sub_89B34(*(float *)&v26, *((float *)&v26 + 1), v27, v28, v16, 1, v4[1366]);
    v17 = v4[1365];
    v18 = v27 - *v8;
    v23[0] = *(float *)&v26 + *v8;
    v22[0] = v18;
    v23[1] = *((float *)&v26 + 1) + v17;
    v22[1] = v28 - v17;
    sub_89A94((char *)v23, v22, a1, 0, v30, v4 + 1382, (float *)&v26);
  }
  return v6;
}


// ======================================================================
