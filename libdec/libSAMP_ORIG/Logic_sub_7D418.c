// ADDR: 0x7d460
// SYMBOL: sub_7D460
int __fastcall sub_7D460(float *a1, int a2, unsigned __int8 *a3)
{
  unsigned int v6; // r0
  unsigned int v7; // r2
  int v8; // r1
  unsigned int v9; // r3
  float v10; // s22
  int v11; // r0
  int v12; // r3
  unsigned int v13; // r2
  unsigned __int8 *v14; // r8
  float v15; // s20
  float v16; // s18
  unsigned int v17; // r11
  float v18; // s16
  int v19; // r10
  unsigned int v20; // r0
  int v21; // r0
  int v22; // s0
  int v23; // r1
  int v24; // r0
  int v25; // s0
  int v26; // r1
  int v27; // r0
  int v28; // s0
  int v29; // r1
  int v30; // r0
  int v31; // s0
  int v32; // r1
  float v34; // [sp+14h] [bp-54h] BYREF
  float v35; // [sp+18h] [bp-50h]
  int v36; // [sp+1Ch] [bp-4Ch]

  v6 = *((_DWORD *)a3 + 1);
  v7 = *a3;
  *a1 = 0.0;
  a1[1] = 0.0;
  v8 = v7 & 1;
  v9 = v6;
  if ( (v7 & 1) == 0 )
    v9 = v7 >> 1;
  if ( v9 )
  {
    v10 = *(float *)(a2 + 116);
    if ( v10 == 0.0 )
    {
      v11 = sub_8C514(v6);
      v7 = *a3;
      v8 = v7 & 1;
      v12 = **(_DWORD **)(*(_DWORD *)(v11 + 140) + 60);
      v6 = *((_DWORD *)a3 + 1);
      v10 = *(float *)(v12 + 16);
    }
    v13 = v7 >> 1;
    v14 = (unsigned __int8 *)*((_DWORD *)a3 + 2);
    v15 = 0.0;
    if ( v8 )
      v13 = v6;
    else
      v14 = a3 + 1;
    v16 = 0.0;
    v17 = (unsigned int)&v14[v13];
    v18 = 0.0;
    v19 = (int)v14;
    while ( 1 )
    {
      while ( 1 )
      {
        v20 = *v14;
        if ( v20 > 9 )
          break;
        if ( v20 == 9 )
        {
          if ( v14 != (unsigned __int8 *)v19 )
          {
            v24 = sub_8C514(9);
            v25 = *(int *)(a2 + 116);
            v26 = **(_DWORD **)(*(_DWORD *)(v24 + 140) + 60);
            if ( *(float *)&v25 == 0.0 )
              v25 = *(int *)(v26 + 16);
            sub_A3980((int)&v34, v26, v25, 2139095039, 0.0, v19, (int)v14, 0);
            v16 = v16 + v34;
            if ( v18 == 0.0 )
              v18 = v35;
          }
          v16 = v10 + v16;
          v19 = (int)(v14 + 1);
        }
        else if ( !*v14 )
        {
          if ( v14 != (unsigned __int8 *)v19 )
          {
            v30 = sub_8C514(0);
            v31 = *(int *)(a2 + 116);
            v32 = **(_DWORD **)(*(_DWORD *)(v30 + 140) + 60);
            if ( *(float *)&v31 == 0.0 )
              v31 = *(int *)(v32 + 16);
            sub_A3980((int)&v34, v32, v31, 2139095039, 0.0, v19, (int)v14, 0);
            v16 = v16 + v34;
            if ( v18 == 0.0 )
              v18 = v35;
          }
          if ( v18 <= 0.0 )
            v18 = 0.0;
          if ( v15 >= v16 )
            v16 = v15;
          *a1 = v16;
          a1[1] = v18;
          return v36;
        }
LABEL_11:
        ++v14;
      }
      if ( v20 == 10 )
      {
        if ( v14 != (unsigned __int8 *)v19 )
        {
          v27 = sub_8C514(10);
          v28 = *(int *)(a2 + 116);
          v29 = **(_DWORD **)(*(_DWORD *)(v27 + 140) + 60);
          if ( *(float *)&v28 == 0.0 )
            v28 = *(int *)(v29 + 16);
          sub_A3980((int)&v34, v29, v28, 2139095039, 0.0, v19, (int)v14, 0);
          v16 = v16 + v34;
          if ( v18 == 0.0 )
            v18 = v35;
        }
        v19 = (int)(v14 + 1);
        if ( v15 >= v16 )
          v16 = v15;
        v18 = v10 + v18;
        *a1 = v16;
        v15 = v16;
        v16 = 0.0;
        goto LABEL_11;
      }
      if ( v20 != 123 || (unsigned int)(v14 + 7) >= v17 || v14[7] != 125 )
        goto LABEL_11;
      if ( v14 != (unsigned __int8 *)v19 )
      {
        v21 = sub_8C514(125);
        v22 = *(int *)(a2 + 116);
        v23 = **(_DWORD **)(*(_DWORD *)(v21 + 140) + 60);
        if ( *(float *)&v22 == 0.0 )
          v22 = *(int *)(v23 + 16);
        sub_A3980((int)&v34, v23, v22, 2139095039, 0.0, v19, (int)v14, 0);
        v16 = v16 + v34;
        if ( v18 == 0.0 )
          v18 = v35;
      }
      v19 = (int)(v14 + 8);
      v14 += 8;
    }
  }
  return v36;
}


// ======================================================================
