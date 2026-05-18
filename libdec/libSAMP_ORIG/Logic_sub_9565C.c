// ADDR: 0x95710
// SYMBOL: sub_95710
int __fastcall sub_95710(int a1, int a2, float *a3, int a4, int a5)
{
  float *v6; // r4
  int *v7; // r8
  int v8; // r11
  int v9; // r6
  int v10; // r5
  float v11; // s2
  float v12; // s4
  int v13; // r6
  float v14; // s2
  float *v15; // r6
  float v16; // s8
  int v17; // r1
  int v18; // r2
  float v19; // s10
  float v20; // s2
  int v21; // r3
  int v22; // r9
  int v23; // r3
  int v24; // s16
  int v25; // r0
  int v26; // r6
  int v27; // r5
  int v28; // r0
  int v29; // r0
  bool v30; // zf
  int v31; // r1
  int v32; // r0
  int v33; // r1
  int v34; // r2
  int v35; // r1
  int v36; // r2
  int v37; // r1
  int v38; // r2
  int v39; // r2
  char s[256]; // [sp+14h] [bp-12Ch] BYREF

  v6 = *(float **)(dword_1ACF68 + 6572);
  v7 = (int *)(dword_1ACF68 + 5444);
  v8 = dword_1ACF68 + 6704;
  v9 = *((_DWORD *)v6 + 112);
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 12);
    v11 = *(float *)(v9 + 20);
    v12 = *(float *)(v9 + 24);
    v13 = *(_DWORD *)(v9 + 68);
    if ( v10 > -2 )
      ++v10;
    v14 = (float)(v6[3] + (float)(v11 + (float)((float)(v12 - v11) * *(float *)(v13 + 28 * v10)))) - v6[13];
  }
  else
  {
    v14 = v6[138];
  }
  v15 = (float *)((_DWORD)v6[2] & 4 | a5 | 0x1000103);
  v16 = 4.0;
  v17 = (int)a3[1];
  v18 = (int)*a3;
  v19 = 4.0;
  v20 = (float)(v14 - v6[50]) + (float)v18;
  if ( (float)((float)(v6[139] - v6[51]) + (float)v17) >= 4.0 )
    v19 = (float)(v6[139] - v6[51]) + (float)v17;
  if ( v20 >= 4.0 )
    v16 = v20;
  if ( v17 > 0 )
    v19 = (float)v17;
  if ( v18 > 0 )
    v16 = (float)v18;
  v21 = *(_DWORD *)(dword_1ACF68 + 6672);
  *(_DWORD *)(dword_1ACF68 + 6680) = 1;
  v7[307] = v21 | 2;
  *(float *)v8 = v16;
  v22 = v18 == 0;
  *(float *)(v8 + 4) = v19;
  v23 = *(_DWORD *)v6;
  if ( !v17 )
    v22 += 2;
  if ( a1 )
    sub_886C0(s, 256, "%s/%s_%08X", v23, a1, a2);
  else
    sub_886C0(s, 256, "%s/%08X", v23, a2);
  v24 = *v7;
  if ( !a4 )
    *v7 = 0;
  v25 = sub_8FD20(s, 0, v15);
  v26 = v7[282];
  v27 = v25;
  *v7 = v24;
  v28 = *(unsigned __int16 *)(v26 + 132);
  *(_DWORD *)(v26 + 156) = v22;
  *(_DWORD *)(v26 + 76) = a2;
  if ( v28 == 1 )
    *((_QWORD *)v6 + 25) = *(_QWORD *)(v26 + 12);
  if ( (a5 & 0x800000) == 0 && *(_DWORD *)(v8 + 140) == a2 )
  {
    v29 = *(_DWORD *)(v26 + 312);
    v30 = v29 == 0;
    if ( !v29 )
      v30 = *(_BYTE *)(v26 + 321) == 0;
    if ( !v30 )
    {
      sub_8C628(v26);
      v31 = *(_DWORD *)(v26 + 8);
      v32 = dword_1ACF68 + 6608;
      if ( (v31 & 0x40000) != 0 )
      {
        v33 = *(_DWORD *)(v26 + 780);
      }
      else if ( (v31 & 0x5000000) != 0x1000000 || (v33 = *(_DWORD *)(v26 + 780)) == 0 )
      {
        v34 = *(_DWORD *)(dword_1ACF68 + 6924);
        v35 = *(_DWORD *)(dword_1ACF68 + 6836);
        *(_DWORD *)(dword_1ACF68 + 6840) = 0;
        *(_BYTE *)(v32 + 330) = 0;
        *(_WORD *)(v32 + 328) = 257;
        *(_DWORD *)(v35 + 4 * v34 + 780) = 0;
        *(_DWORD *)(v32 + 332) = 0;
        *(_QWORD *)(v32 + 336) = 0x7F7FFFFF7F7FFFFFLL;
        *(_QWORD *)(v32 + 344) = 0xFF7FFFFFFF7FFFFFLL;
        goto LABEL_34;
      }
      *(_DWORD *)(dword_1ACF68 + 6840) = v33;
LABEL_34:
      v36 = *(_DWORD *)v32;
      v37 = a2 + 1;
      *(_BYTE *)(v32 + 12) = *(_DWORD *)v32 != a2 + 1;
      if ( v36 != a2 + 1 )
      {
        *(_WORD *)(v32 + 14) = 0;
        *(_DWORD *)(v32 + 8) = 0;
        if ( a2 != -1 )
        {
          *(_DWORD *)(v32 + 56) = v37;
          *(_DWORD *)(v32 + 60) = 0;
        }
      }
      *(_DWORD *)(v32 + 20) = 0;
      *(_DWORD *)(v32 + 24) = 0;
      *(_DWORD *)v32 = v37;
      *(_DWORD *)(v32 + 36) = v26;
      *(_BYTE *)(v32 + 13) = 0;
      *(_BYTE *)(v32 + 16) = 0;
      if ( a2 != -1 )
      {
        v38 = *(_DWORD *)(v32 + 236);
        *(_DWORD *)(v32 + 4) = v37;
        if ( v38 == v37 || *(_DWORD *)(v32 + 248) == v37 || *(_DWORD *)(v32 + 252) == v37 )
        {
          v39 = 2;
        }
        else
        {
          v39 = 1;
          if ( *(_DWORD *)(v32 + 256) == v37 )
            v39 = 2;
        }
        *(_DWORD *)(v32 + 40) = v39;
      }
      v7[301] = 2;
    }
  }
  return v27;
}


// ======================================================================
