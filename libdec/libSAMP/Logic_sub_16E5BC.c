// ADDR: 0x16dcc0
// SYMBOL: sub_16DCC0
int __fastcall sub_16DCC0(__int64 *a1)
{
  int result; // r0
  __int64 v3; // kr00_8
  int v4; // r2
  int v5; // r5
  int v6; // r9
  int v7; // r1
  const void *v8; // r1
  int v9; // r8
  int v10; // r0
  void *v11; // r0
  const void *v12; // r1
  void *v13; // r5
  int v14; // r0

  v3 = *a1;
  result = *((_DWORD *)a1 + 1);
  v4 = *((_DWORD *)a1 + 3);
  v5 = v4 + v3;
  v6 = v4 + v3;
  if ( result < v4 + (int)v3 )
  {
    if ( result )
      v7 = result + result / 2;
    else
      v7 = 8;
    if ( v7 > v5 )
      v5 = v7;
    if ( result < v5 )
    {
      if ( dword_381B58 )
        ++*(_DWORD *)(dword_381B58 + 880);
      result = off_2390AC(4 * v5, dword_381B60);
      v8 = (const void *)*((_DWORD *)a1 + 2);
      v9 = result;
      if ( v8 )
      {
        j_memcpy((void *)result, v8, 4 * *(_DWORD *)a1);
        v10 = *((_DWORD *)a1 + 2);
        if ( v10 && dword_381B58 )
          --*(_DWORD *)(dword_381B58 + 880);
        result = off_2390B0(v10, dword_381B60);
      }
      v4 = *((_DWORD *)a1 + 3);
      *((_DWORD *)a1 + 1) = v5;
      *((_DWORD *)a1 + 2) = v9;
    }
  }
  *(_DWORD *)a1 = v6;
  if ( v4 )
  {
    j_memcpy((void *)(*((_DWORD *)a1 + 2) + 4 * v3), *((const void **)a1 + 5), 4 * v4);
    if ( *((int *)a1 + 4) <= -1 )
    {
      if ( dword_381B58 )
        ++*(_DWORD *)(dword_381B58 + 880);
      v11 = (void *)off_2390AC(0, dword_381B60);
      v12 = (const void *)*((_DWORD *)a1 + 5);
      v13 = v11;
      if ( v12 )
      {
        j_memcpy(v11, v12, 4 * *((_DWORD *)a1 + 3));
        v14 = *((_DWORD *)a1 + 5);
        if ( v14 )
        {
          if ( dword_381B58 )
            --*(_DWORD *)(dword_381B58 + 880);
        }
        off_2390B0(v14, dword_381B60);
      }
      *((_DWORD *)a1 + 4) = 0;
      *((_DWORD *)a1 + 5) = v13;
    }
    result = 0;
    *((_DWORD *)a1 + 3) = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x16de84
// SYMBOL: sub_16DE84
int sub_16DE84()
{
  int v0; // r9
  int result; // r0
  void (__fastcall *v2)(int, int); // r2
  int v3; // r4
  _QWORD *v4; // r6
  _QWORD *v5; // r5
  float v6; // s4
  float v7; // s0
  float v8; // s2
  int v9; // r1
  _DWORD *v10; // r5
  int v11; // r6
  int v12; // r9
  unsigned int v13; // r0
  float v14; // s6
  float v15; // s4
  int v16; // r0
  float v17; // s2
  float v18; // s0
  int v19; // r11
  int v20; // r6
  int v21; // r8
  int v22; // r10
  int v23; // r1
  const char *v24; // r0
  int v25; // r2
  int v26; // r1
  int v27; // r1
  int v28; // r0
  int v29; // r6
  void *v30; // r0
  const void *v31; // r1
  void *v32; // r8
  int v33; // r0
  int v34; // r11
  void *v35; // r0
  const void *v36; // r1
  void *v37; // r8
  int v38; // r0
  int v39; // r0
  int i; // r6
  int v41; // r1
  int v42; // r1
  _BYTE *v43; // r3
  int v44; // lr
  int v45; // r12
  int v46; // r2
  int v47; // r6
  void *v48; // r0
  const void *v49; // r1
  void *v50; // r4
  int v51; // r0
  int v52; // [sp+4h] [bp-2Ch]
  float v53; // [sp+Ch] [bp-24h] BYREF
  float v54; // [sp+10h] [bp-20h]

  v0 = dword_381B58;
  result = *(_DWORD *)(dword_381B58 + 6496);
  if ( *(_DWORD *)(dword_381B58 + 6500) == result )
    return result;
  v2 = *(void (__fastcall **)(int, int))(dword_381B58 + 212);
  v3 = dword_381B58 + 6532;
  if ( v2 )
  {
    v4 = (_QWORD *)(dword_381B58 + 11492);
    v5 = (_QWORD *)(dword_381B58 + 11500);
    v6 = *(float *)(dword_381B58 + 11500);
    v7 = *(float *)(dword_381B58 + 11492);
    if ( v6 == 3.4028e38 )
    {
      v8 = *(float *)(dword_381B58 + 11496);
    }
    else
    {
      v8 = *(float *)(dword_381B58 + 11496);
      if ( (float)((float)((float)(*(float *)(dword_381B58 + 11504) - v8)
                         * (float)(*(float *)(dword_381B58 + 11504) - v8))
                 + (float)((float)(v6 - v7) * (float)(v6 - v7))) <= 0.0001 )
        goto LABEL_7;
    }
    v2((int)v7, (int)v8);
    *v5 = *v4;
  }
LABEL_7:
  if ( *(int *)(v0 + 6544) >= 2 )
  {
    do
      sub_16E36C();
    while ( *(int *)(v0 + 6544) > 1 );
  }
  v9 = *(_DWORD *)(v0 + 6572);
  *(_BYTE *)(v0 + 2) = 0;
  if ( v9 && !*(_BYTE *)(v9 + 124) )
    *(_BYTE *)(v9 + 122) = 0;
  v10 = (_DWORD *)(v0 + 5384);
  sub_16E36C();
  if ( *(_DWORD *)(v0 + 6900) )
  {
    v11 = dword_381B58;
    if ( *(float *)(dword_381B58 + 6912) >= 0.15 )
    {
      v52 = v0;
      v12 = dword_381B58 + 5404;
      if ( !*(_DWORD *)(dword_381B58 + 6908) )
      {
        v13 = sub_16560C("###NavWindowingList", 0, 0);
        *(_DWORD *)(v11 + 6908) = sub_1658B8((unsigned int *)(v11 + 6556), v13);
      }
      v14 = *(float *)(v11 + 20);
      v15 = *(float *)(v11 + 16);
      *(_DWORD *)(v11 + 6732) = 2139095039;
      *(_DWORD *)(v11 + 6736) = 2139095039;
      *(_DWORD *)(v11 + 6696) = 1056964608;
      *(_DWORD *)(v11 + 6700) = 1056964608;
      v16 = *(_DWORD *)(v11 + 6672);
      *(_DWORD *)(v11 + 6740) = 0;
      *(_DWORD *)(v11 + 6744) = 0;
      *(_DWORD *)(v11 + 6676) = 1;
      *(_DWORD *)(v11 + 6672) = v16 | 0x11;
      *(float *)(v11 + 6724) = v15 * 0.2;
      v17 = *(float *)(v11 + 5408);
      *(float *)(v11 + 6728) = v14 * 0.2;
      *(float *)(v11 + 6692) = v14 * 0.5;
      *(float *)(v11 + 6688) = v15 * 0.5;
      v18 = *(float *)v12 + *(float *)v12;
      v54 = v17 + v17;
      v53 = v18;
      sub_16ECA8(1, &v53);
      sub_16A980("###NavWindowingList", 0, (unsigned int)&unk_C1347);
      v19 = *(_DWORD *)(v11 + 6520);
      if ( v19 >= 1 )
      {
        v20 = v11 + 6732;
        do
        {
          v21 = v19--;
          v22 = *(_DWORD *)(*(_DWORD *)(v12 + 1124) + 4 * v19);
          if ( *(_BYTE *)(v22 + 122) )
          {
            if ( *(_DWORD *)(v22 + 764) == v22 )
            {
              v23 = *(_DWORD *)(v22 + 8);
              if ( (v23 & 0x80000) == 0 )
              {
                v24 = *(const char **)v22;
                if ( *(_DWORD *)v22 == -1 )
                  goto LABEL_30;
                v25 = *(_DWORD *)v22;
                do
                {
                  if ( *(_BYTE *)v25 == 35 )
                  {
                    if ( *(_BYTE *)(v25 + 1) == 35 )
                      goto LABEL_29;
                  }
                  else if ( !*(_BYTE *)v25 )
                  {
                    goto LABEL_29;
                  }
                  ++v25;
                }
                while ( v25 != -1 );
                v25 = -1;
LABEL_29:
                if ( v24 == (const char *)v25 )
                {
LABEL_30:
                  if ( (v23 & 0x4000000) != 0 )
                  {
                    v24 = "(Popup)";
                  }
                  else if ( (v23 & 0x400) != 0 && !strcmp(v24, "##MainMenuBar") )
                  {
                    v24 = "(Main menu bar)";
                  }
                  else
                  {
                    v24 = "(Untitled)";
                  }
                }
                v26 = *(_DWORD *)(v20 + 168);
                v53 = 0.0;
                v54 = 0.0;
                sub_17B9EC(v24, v26 == v22, 0, &v53);
              }
            }
          }
        }
        while ( v21 > 1 );
      }
      sub_16E36C();
      sub_16EDC4(1);
      v0 = v52;
    }
  }
  if ( !*(_BYTE *)(v3 + 916) )
    goto LABEL_50;
  if ( *(_DWORD *)(v3 + 948) + 1 >= v10[278] )
  {
    v27 = 0;
  }
  else
  {
    v27 = *(unsigned __int8 *)(v3 + 920) << 26;
    if ( (*(_BYTE *)(v3 + 920) & 0x20) != 0 )
      goto LABEL_47;
    v27 = *(unsigned __int8 *)(*(_DWORD *)(v3 + 928) + dword_381B58 + 232) == 0;
  }
  if ( !*(_BYTE *)(v3 + 986) && !v27 )
  {
LABEL_48:
    if ( *(_DWORD *)(v3 + 924) < v10[278] )
    {
      *(_BYTE *)(v3 + 917) = 1;
      sub_16E490("...");
      *(_BYTE *)(v3 + 917) = 0;
    }
    goto LABEL_50;
  }
LABEL_47:
  sub_16E404(*(unsigned __int8 *)(v3 + 986), v27);
  if ( *(_BYTE *)(v3 + 916) )
    goto LABEL_48;
LABEL_50:
  v28 = v10[278];
  *(_BYTE *)(v0 + 1) = 0;
  v10[279] = v28;
  sub_168290();
  v29 = *(_DWORD *)(v3 + 4);
  if ( v29 <= -1 )
  {
    if ( dword_381B58 )
      ++*(_DWORD *)(dword_381B58 + 880);
    v29 = 0;
    v30 = (void *)off_2390AC(0, dword_381B60);
    v31 = *(const void **)(v3 + 8);
    v32 = v30;
    if ( v31 )
    {
      j_memcpy(v30, v31, 4 * *(_DWORD *)v3);
      v33 = *(_DWORD *)(v3 + 8);
      if ( v33 && dword_381B58 )
        --*(_DWORD *)(dword_381B58 + 880);
      off_2390B0(v33, dword_381B60);
    }
    *(_DWORD *)(v3 + 4) = 0;
    *(_DWORD *)(v3 + 8) = v32;
  }
  v34 = v10[281];
  *(_DWORD *)v3 = 0;
  if ( v29 >= v34 )
  {
    v39 = v34;
  }
  else
  {
    if ( dword_381B58 )
      ++*(_DWORD *)(dword_381B58 + 880);
    v35 = (void *)off_2390AC(4 * v34, dword_381B60);
    v36 = *(const void **)(v3 + 8);
    v37 = v35;
    if ( v36 )
    {
      j_memcpy(v35, v36, 4 * *(_DWORD *)v3);
      v38 = *(_DWORD *)(v3 + 8);
      if ( v38 && dword_381B58 )
        --*(_DWORD *)(dword_381B58 + 880);
      off_2390B0(v38, dword_381B60);
    }
    v39 = v10[281];
    v29 = v34;
    *(_DWORD *)(v3 + 4) = v34;
    *(_DWORD *)(v3 + 8) = v37;
  }
  if ( v39 )
  {
    for ( i = 0; i != v39; ++i )
    {
      v41 = *(_DWORD *)(v10[283] + 4 * i);
      if ( !*(_BYTE *)(v41 + 122) || !(*(unsigned __int8 *)(v41 + 11) << 31) )
      {
        sub_16E4B4(v3);
        v39 = v10[281];
      }
    }
    v29 = *(_DWORD *)(v3 + 4);
  }
  else
  {
    v39 = 0;
  }
  v10[281] = *(_DWORD *)v3;
  v42 = v10[1];
  v43 = *(_BYTE **)(v0 + 148);
  v44 = *(_DWORD *)(v3 + 36);
  v45 = *(_DWORD *)(v3 + 8);
  v46 = v10[282];
  v10[282] = v29;
  v47 = v10[283];
  *(_DWORD *)(v0 + 240) = 0;
  *(_DWORD *)(v0 + 244) = 0;
  *(_DWORD *)v3 = v39;
  *(_DWORD *)(v3 + 4) = v46;
  *(_DWORD *)(v3 + 8) = v47;
  v10[283] = v45;
  *(_DWORD *)(v0 + 876) = v44;
  *v43 = 0;
  if ( v42 <= -1 )
  {
    if ( dword_381B58 )
      ++*(_DWORD *)(dword_381B58 + 880);
    v48 = (void *)off_2390AC(0, dword_381B60);
    v49 = (const void *)v10[2];
    v50 = v48;
    if ( v49 )
    {
      j_memcpy(v48, v49, 2 * *v10);
      v51 = v10[2];
      if ( v51 )
      {
        if ( dword_381B58 )
          --*(_DWORD *)(dword_381B58 + 880);
      }
      off_2390B0(v51, dword_381B60);
    }
    v10[1] = 0;
    v10[2] = v50;
  }
  *v10 = 0;
  return sub_22178C(v0 + 764, 0x58u);
}


// ======================================================================
// ADDR: 0x16e7c0
// SYMBOL: sub_16E7C0
int __fastcall sub_16E7C0(int a1)
{
  int v2; // r6
  int result; // r0
  _DWORD *v4; // r4
  void *v5; // r0
  int v6; // r10
  const void *v7; // r1
  int *v8; // r11
  int v9; // r0
  bool v10; // zf

  v2 = 1;
  result = 0;
  do
  {
    v4 = (_DWORD *)(a1 + 12 * result);
    if ( (int)v4[1] <= -1 )
    {
      if ( dword_381B58 )
        ++*(_DWORD *)(dword_381B58 + 880);
      v5 = (void *)off_2390AC(0, dword_381B60);
      v6 = (int)v5;
      v8 = v4 + 2;
      v7 = (const void *)v4[2];
      if ( v7 )
      {
        j_memcpy(v5, v7, 4 * *v4);
        v9 = *v8;
        if ( *v8 )
        {
          if ( dword_381B58 )
            --*(_DWORD *)(dword_381B58 + 880);
        }
        off_2390B0(v9, dword_381B60);
      }
      *v8 = v6;
      v4[1] = 0;
    }
    *v4 = 0;
    v10 = v2 << 31 == 0;
    result = 1;
    v2 = 0;
  }
  while ( !v10 );
  return result;
}


// ======================================================================
// ADDR: 0x16e87c
// SYMBOL: sub_16E87C
int __fastcall sub_16E87C(__int64 *a1, int *a2)
{
  int result; // r0
  int v4; // r2
  __int64 v5; // r0
  int v6; // r6
  int v7; // r1
  void *v8; // r0
  const void *v9; // r1
  void *v10; // r8
  int v11; // r0

  result = *a2;
  if ( *a2 )
  {
    --result;
    v4 = a2[2];
    if ( *(_DWORD *)(v4 + 40 * result) || *(_DWORD *)(v4 + 40 * result + 32) || (*a2 = result) != 0 )
    {
      v5 = *a1;
      if ( (_DWORD)v5 == HIDWORD(v5) )
      {
        v6 = v5 + 1;
        if ( (_DWORD)v5 )
          v7 = v5 + (int)v5 / 2;
        else
          v7 = 8;
        if ( v7 > v6 )
          v6 = v7;
        if ( (int)v5 < v6 )
        {
          if ( dword_381B58 )
            ++*(_DWORD *)(dword_381B58 + 880);
          v8 = (void *)off_2390AC(4 * v6, dword_381B60);
          v9 = (const void *)*((_DWORD *)a1 + 2);
          v10 = v8;
          if ( v9 )
          {
            j_memcpy(v8, v9, 4 * *(_DWORD *)a1);
            v11 = *((_DWORD *)a1 + 2);
            if ( v11 )
            {
              if ( dword_381B58 )
                --*(_DWORD *)(dword_381B58 + 880);
            }
            off_2390B0(v11, dword_381B60);
          }
          LODWORD(v5) = *(_DWORD *)a1;
          *((_DWORD *)a1 + 1) = v6;
          *((_DWORD *)a1 + 2) = v10;
        }
      }
      *(_DWORD *)(*((_DWORD *)a1 + 2) + 4 * v5) = a2;
      result = *(_DWORD *)a1 + 1;
      *(_DWORD *)a1 = result;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x17176c
// SYMBOL: sub_17176C
int __fastcall sub_17176C(__int64 *a1, _DWORD *a2)
{
  int *v4; // r1
  int result; // r0
  int i; // r6
  int v7; // r1

  v4 = (int *)a2[159];
  ++*(_DWORD *)(dword_381B58 + 872);
  sub_16E87C(a1, v4);
  result = a2[83];
  if ( result >= 1 )
  {
    for ( i = 0; i < result; ++i )
    {
      v7 = *(_DWORD *)(a2[85] + 4 * i);
      if ( *(_BYTE *)(v7 + 122) )
      {
        if ( !*(_BYTE *)(v7 + 129) )
        {
          sub_17176C(a1);
          result = a2[83];
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x178cc4
// SYMBOL: sub_178CC4
int __fastcall sub_178CC4(int *a1, float a2, float a3, float a4, unsigned int a5)
{
  int result; // r0
  int v10; // r0
  int v11; // r5
  float v12; // s20
  float v13; // s18
  float v14; // s16
  int v15; // r8
  float v16; // s26
  float v17; // s24
  float v18; // s28
  float v19; // s18
  __int64 v20; // [sp+10h] [bp-A0h] BYREF
  __int64 v21; // [sp+18h] [bp-98h] BYREF
  __int64 v22; // [sp+20h] [bp-90h] BYREF
  __int64 v23; // [sp+28h] [bp-88h] BYREF
  __int64 v24; // [sp+30h] [bp-80h] BYREF
  __int64 v25; // [sp+38h] [bp-78h] BYREF
  __int64 v26; // [sp+40h] [bp-70h] BYREF
  __int64 v27; // [sp+48h] [bp-68h] BYREF
  int v28[24]; // [sp+50h] [bp-60h] BYREF

  result = a5 + 1;
  if ( a5 != -1 )
  {
    v10 = *(_DWORD *)(a1[10] + 8);
    v22 = 0LL;
    v23 = 0LL;
    v11 = *(_DWORD *)(v10 + 56);
    v27 = 0LL;
    v26 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    result = sub_175894(v11, a5, &v27, &v26, (float *)&v22, (float *)&v24);
    if ( result )
    {
      v12 = a3 - *((float *)&v27 + 1);
      v13 = a2 - *(float *)&v27;
      v14 = a4;
      v15 = *(_DWORD *)(v11 + 8);
      *(float *)&v28[1] = a3 - *((float *)&v27 + 1);
      *(float *)v28 = a2 - *(float *)&v27;
      sub_172D4E(a1, v15);
      v16 = *(float *)&v26 * v14;
      v17 = *((float *)&v26 + 1) * v14;
      v18 = (float)(v12 + (float)(v14 * 0.0)) + (float)(*((float *)&v26 + 1) * v14);
      *((float *)&v21 + 1) = v12 + (float)(v14 * 0.0);
      *(float *)&v21 = v13 + v14;
      *((float *)&v20 + 1) = v18;
      *(float *)&v20 = (float)(v13 + v14) + (float)(*(float *)&v26 * v14);
      sub_174BE2(a1, v15, (int *)&v21, &v20, (int *)&v24, &v25, 0x30000000u);
      *((float *)&v21 + 1) = v12 + (float)(v14 * 0.0);
      *((float *)&v20 + 1) = v18;
      *(float *)&v21 = (float)(v14 + v14) + v13;
      *(float *)&v20 = *(float *)&v21 + v16;
      sub_174BE2(a1, v15, (int *)&v21, &v20, (int *)&v24, &v25, 0x30000000u);
      v19 = v13 + v16;
      *((float *)&v21 + 1) = v12 + v17;
      *(float *)&v21 = v19;
      sub_174BE2(a1, v15, v28, &v21, (int *)&v24, &v25, 0xFF000000);
      *((float *)&v21 + 1) = v12 + v17;
      *(float *)&v21 = v19;
      sub_174BE2(a1, v15, v28, &v21, (int *)&v22, &v23, 0xFFFFFFFF);
      --a1[19];
      return sub_172B7A(a1);
    }
  }
  return result;
}


// ======================================================================
