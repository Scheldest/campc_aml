// ADDR: 0x13d758
// SYMBOL: sub_13D758
int __fastcall sub_13D758(int a1)
{
  __int64 v2; // r0
  int v3; // r5
  int v4; // r0
  int *v5; // r1
  float v6; // s18
  float v7; // s16
  int v8; // r3
  float v9; // s0
  float v10; // s0
  float v11; // s20
  float v12; // s20
  int *v13; // r4
  int *v14; // r5
  int v15; // r6
  float v16; // s2
  float v17; // s0
  int v18; // r0
  __int64 i; // [sp+0h] [bp-38h] BYREF

  LODWORD(v2) = *(_DWORD *)(a1 + 68);
  if ( (_DWORD)v2 == *(_DWORD *)(a1 + 72) )
    return v2;
  v3 = sub_12BDDC(a1);
  v4 = *(_DWORD *)(a1 + 84);
  v5 = *(int **)(a1 + 68);
  v6 = *(float *)(a1 + 20) - (float)(*(float *)(a1 + 88) + *(float *)(a1 + 92));
  v7 = *(float *)(a1 + 24) - (float)(*(float *)(a1 + 96) + *(float *)(a1 + 100));
  while ( v5 != *(int **)(a1 + 72) )
  {
    v8 = *v5;
    if ( !*(_BYTE *)(*v5 + 80) )
      goto LABEL_12;
    if ( v4 == 1 )
    {
      v10 = *(float *)(v8 + 24);
      if ( v10 == 0.0 )
        goto LABEL_12;
      v7 = v7 - v10;
      goto LABEL_11;
    }
    if ( !v4 )
    {
      v9 = *(float *)(v8 + 20);
      if ( v9 != 0.0 )
      {
        v6 = v6 - v9;
LABEL_11:
        --v3;
      }
    }
LABEL_12:
    ++v5;
  }
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v11 = *(float *)(a1 + 104);
      v7 = (float)(v7 - (float)(v11 * (float)(sub_12BDDC(a1) - 1))) / (float)v3;
    }
  }
  else
  {
    v12 = *(float *)(a1 + 104);
    v6 = (float)(v6 - (float)(v12 * (float)(sub_12BDDC(a1) - 1))) / (float)v3;
  }
  v13 = *(int **)(a1 + 72);
  v14 = *(int **)(a1 + 68);
  HIDWORD(v2) = *(_DWORD *)(a1 + 96);
  LODWORD(v2) = *(_DWORD *)(a1 + 88);
  for ( i = v2; v14 != v13; ++v14 )
  {
    v15 = *v14;
    LODWORD(v2) = *(unsigned __int8 *)(*v14 + 80);
    if ( *(_BYTE *)(*v14 + 80) )
    {
      v16 = *(float *)(v15 + 24);
      v17 = *(float *)(v15 + 20);
      if ( v16 == 0.0 )
        v16 = v7;
      if ( v17 == 0.0 )
        v17 = v6;
      v18 = *(_DWORD *)v15;
      *(float *)(v15 + 20) = v17;
      *(float *)(v15 + 24) = v16;
      *(float *)(v15 + 28) = v17;
      *(float *)(v15 + 32) = v16;
      *(float *)(v15 + 36) = v17;
      *(float *)(v15 + 40) = v16;
      (*(void (__fastcall **)(int))(v18 + 8))(v15);
      sub_12BD92(v15, &i);
      LODWORD(v2) = *(_DWORD *)(a1 + 84);
      if ( (_DWORD)v2 == 1 )
      {
        *((float *)&i + 1) = *((float *)&i + 1) + (float)(*(float *)(a1 + 104) + *(float *)(v15 + 24));
      }
      else if ( !(_DWORD)v2 )
      {
        *(float *)&i = *(float *)&i + (float)(*(float *)(a1 + 104) + *(float *)(v15 + 20));
      }
    }
  }
  return v2;
}


// ======================================================================
