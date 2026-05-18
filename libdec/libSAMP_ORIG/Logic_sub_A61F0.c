// ADDR: 0x88724
// SYMBOL: sub_88724
int __fastcall sub_88724(char *a1, signed int a2, const char *a3, void *a4)
{
  int result; // r0
  int v7; // r2

  result = vsnprintf(a1, a2, a3, a4);
  if ( a1 )
  {
    v7 = a2 - 1;
    if ( result < a2 )
      v7 = result;
    if ( result == -1 )
      v7 = a2 - 1;
    a1[v7] = 0;
    return v7;
  }
  return result;
}


// ======================================================================
// ADDR: 0xa5e84
// SYMBOL: sub_A5E84
int __fastcall sub_A5E84(char *s, char *a2, char a3)
{
  char *v3; // r5
  int v4; // r6
  int v5; // r4
  char *v7; // r9
  int v8; // s16
  float v9; // s18
  float v10; // s0
  float v11; // s20
  int v12; // r0
  float v13; // s24
  int v14; // s22
  char *v15; // r6
  float v16; // s26
  int v17; // r4
  int v18; // r10
  char *v19; // r6
  float v20; // s0
  int v21; // s20
  int v22; // r8
  int v23; // r10
  int v24; // r4
  char *v25; // r6
  int v26; // s0
  float v27; // s0
  float v28; // s0
  char v30; // [sp+8h] [bp-78h]
  float v31[2]; // [sp+Ch] [bp-74h] BYREF
  int v32; // [sp+14h] [bp-6Ch] BYREF
  float v33; // [sp+18h] [bp-68h]
  float v34; // [sp+1Ch] [bp-64h]
  float v35; // [sp+20h] [bp-60h]
  float v36; // [sp+24h] [bp-5Ch] BYREF
  float v37; // [sp+28h] [bp-58h]
  int v38; // [sp+2Ch] [bp-54h]

  v3 = s;
  v4 = dword_1ACF68;
  v5 = *(_DWORD *)(dword_1ACF68 + 6572);
  *(_BYTE *)(v5 + 124) = 1;
  if ( !*(_BYTE *)(v5 + 127) )
  {
    v7 = a2;
    if ( !a2 )
      v7 = &s[strlen(s)];
    v8 = *(int *)(v5 + 200);
    v9 = *(float *)(v5 + 204) + *(float *)(v5 + 248);
    v10 = *(float *)(v5 + 372);
    if ( v7 - v3 > 2000 && v10 < 0.0 )
    {
      v11 = COERCE_FLOAT(sub_97894());
      v12 = *(unsigned __int8 *)(v4 + 11552);
      v13 = 0.0;
      v36 = 0.0;
      if ( v12 || (v22 = (int)(float)((float)(*(float *)(v5 + 532) - v9) / v11), v22 < 1) )
      {
        *(float *)&v14 = v9;
        if ( v3 >= v7 )
        {
LABEL_47:
          v16 = v13;
LABEL_48:
          v33 = v9;
          v32 = v8;
          v37 = *(float *)&v14 - v9;
          v34 = *(float *)&v8 + v16;
          v35 = v9 + (float)(*(float *)&v14 - v9);
          sub_8B104((unsigned int)&v36);
          sub_8B314((float *)&v32, 0, 0);
          return v38;
        }
      }
      else
      {
        if ( v7 <= v3 )
        {
          v13 = 0.0;
          v27 = 0.0;
        }
        else
        {
          v30 = a3;
          v23 = a3 & 1;
          v13 = 0.0;
          v24 = 0;
          do
          {
            v25 = (char *)memchr(v3, 10, v7 - v3);
            if ( !v25 )
              v25 = v7;
            if ( !v23 )
            {
              sub_899BC((float *)&v32, (unsigned int)v3, (unsigned int)v25, 0, -1.0);
              v26 = v32;
              if ( v13 >= *(float *)&v32 )
                *(float *)&v26 = v13;
              v13 = *(float *)&v26;
              v36 = *(float *)&v26;
            }
            v3 = v25 + 1;
            ++v24;
          }
          while ( v25 + 1 < v7 && v24 < v22 );
          a3 = v30;
          v27 = (float)v24;
        }
        *(float *)&v14 = v9 + (float)(v27 * v11);
        if ( v3 >= v7 )
          goto LABEL_47;
      }
      v33 = *(float *)&v14;
      v32 = v8;
      v35 = v11 + *(float *)&v14;
      v34 = *(float *)&v8 + 3.4028e38;
      while ( !sub_8B6F0((float *)&v32, 0, 0) )
      {
        v15 = (char *)memchr(v3, 10, v7 - v3);
        if ( !v15 )
          v15 = v7;
        sub_899BC(v31, (unsigned int)v3, (unsigned int)v15, 0, -1.0);
        v16 = v31[0];
        if ( v13 >= v31[0] )
          v16 = v13;
        v36 = v16;
        sub_89110(v8, v14, v3, (unsigned int)v15, 0);
        *(float *)&v14 = v11 + *(float *)&v14;
        v13 = v16;
        v3 = v15 + 1;
        v33 = v11 + v33;
        v35 = v11 + v35;
        if ( v15 + 1 >= v7 )
          goto LABEL_42;
      }
      v16 = v13;
      if ( v3 >= v7 )
      {
LABEL_42:
        v28 = 0.0;
        goto LABEL_44;
      }
      v17 = 0;
      v18 = a3 & 1;
      do
      {
        v19 = (char *)memchr(v3, 10, v7 - v3);
        if ( !v19 )
          v19 = v7;
        if ( !v18 )
        {
          sub_899BC(v31, (unsigned int)v3, (unsigned int)v19, 0, -1.0);
          v20 = v31[0];
          if ( v16 >= v31[0] )
            v20 = v16;
          v16 = v20;
          v36 = v20;
        }
        v3 = v19 + 1;
        ++v17;
      }
      while ( v19 + 1 < v7 );
      v28 = (float)v17;
LABEL_44:
      *(float *)&v14 = *(float *)&v14 + (float)(v28 * v11);
      goto LABEL_48;
    }
    if ( v10 < 0.0 )
      v21 = 0;
    else
      v21 = sub_8BB50((float *)(v5 + 200), *(float *)(v5 + 372));
    sub_899BC(&v36, (unsigned int)v3, (unsigned int)v7, 0, *(float *)&v21);
    v33 = v9;
    v32 = v8;
    v34 = *(float *)&v8 + v36;
    v35 = v9 + v37;
    sub_8B104((unsigned int)&v36);
    if ( sub_8B314((float *)&v32, 0, 0) )
      sub_8942C(v32, SLODWORD(v33), v3, v7, *(float *)&v21);
  }
  return v38;
}


// ======================================================================
