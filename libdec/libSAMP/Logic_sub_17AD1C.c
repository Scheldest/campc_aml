// ADDR: 0x1655e4
// SYMBOL: sub_1655E4
int __fastcall sub_1655E4(char *a1, signed int a2, const char *a3, void *a4)
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
// ADDR: 0x17a9f4
// SYMBOL: sub_17A9F4
size_t __fastcall sub_17A9F4(char *s, char *a2, char a3)
{
  int v4; // r6
  int v5; // r4
  size_t result; // r0
  char *v8; // r9
  int v9; // s16
  float v10; // s18
  float v11; // s0
  float v12; // s20
  int v13; // r0
  float v14; // s24
  int v15; // s22
  int v16; // s20
  int v17; // r8
  int v18; // r10
  int v19; // r4
  char *v20; // r6
  float v21; // s0
  float v22; // s0
  char *v23; // r6
  float v24; // s26
  int v25; // r4
  int v26; // r10
  char *v27; // r6
  float v28; // s0
  float v29; // s0
  char v30; // [sp+4h] [bp-74h]
  float v31[2]; // [sp+8h] [bp-70h] BYREF
  unsigned __int64 v32; // [sp+10h] [bp-68h] BYREF
  float v33; // [sp+18h] [bp-60h]
  float v34; // [sp+1Ch] [bp-5Ch]
  float v35; // [sp+20h] [bp-58h] BYREF
  float v36; // [sp+24h] [bp-54h]

  v4 = dword_381B58;
  v5 = *(_DWORD *)(dword_381B58 + 6572);
  *(_BYTE *)(v5 + 124) = 1;
  result = *(unsigned __int8 *)(v5 + 127);
  if ( !*(_BYTE *)(v5 + 127) )
  {
    v8 = a2;
    if ( !a2 )
      v8 = &s[strlen(s)];
    v9 = *(_DWORD *)(v5 + 200);
    v10 = *(float *)(v5 + 204) + *(float *)(v5 + 248);
    v11 = *(float *)(v5 + 372);
    if ( v8 - s <= 2000 || v11 >= 0.0 )
    {
      if ( v11 < 0.0 )
        v16 = 0;
      else
        v16 = sub_167718((float *)(v5 + 200), *(float *)(v5 + 372));
      sub_1660A4(&v35, (unsigned int)s, (unsigned int)v8, 0, *(float *)&v16);
      v32 = __PAIR64__(LODWORD(v10), v9);
      v33 = *(float *)&v9 + v35;
      v34 = v10 + v36;
      sub_167054((unsigned int)&v35);
      result = sub_167164(&v32, 0, 0);
      if ( result )
        return sub_165E10(v32, SHIDWORD(v32), s, v8, *(float *)&v16);
    }
    else
    {
      v12 = COERCE_FLOAT(sub_16FF28());
      v13 = *(unsigned __int8 *)(v4 + 11552);
      v14 = 0.0;
      v35 = 0.0;
      if ( v13 || (v17 = (int)(float)((float)(*(float *)(v5 + 468) - v10) / v12), v17 < 1) )
      {
        v15 = LODWORD(v10);
      }
      else
      {
        if ( v8 <= s )
        {
          v14 = 0.0;
          v22 = 0.0;
        }
        else
        {
          v30 = a3;
          v18 = a3 & 1;
          v14 = 0.0;
          v19 = 0;
          do
          {
            v20 = (char *)memchr(s, 10, v8 - s);
            if ( !v20 )
              v20 = v8;
            if ( !v18 )
            {
              sub_1660A4((float *)&v32, (unsigned int)s, (unsigned int)v20, 0, -1.0);
              v21 = *(float *)&v32;
              if ( v14 >= *(float *)&v32 )
                v21 = v14;
              v14 = v21;
              v35 = v21;
            }
            s = v20 + 1;
            ++v19;
          }
          while ( v20 + 1 < v8 && v19 < v17 );
          a3 = v30;
          v22 = (float)v19;
        }
        *(float *)&v15 = v10 + (float)(v22 * v12);
      }
      if ( s >= v8 )
      {
        v24 = v14;
      }
      else
      {
        v32 = __PAIR64__(v15, v9);
        v34 = v12 + *(float *)&v15;
        v33 = *(float *)&v9 + 3.4028e38;
        while ( !sub_167448((float *)&v32, 0, 0) )
        {
          v23 = (char *)memchr(s, 10, v8 - s);
          if ( !v23 )
            v23 = v8;
          sub_1660A4(v31, (unsigned int)s, (unsigned int)v23, 0, -1.0);
          v24 = v31[0];
          if ( v14 >= v31[0] )
            v24 = v14;
          v35 = v24;
          sub_165BF0(v9, v15, s, (unsigned int)v23, 0);
          *(float *)&v15 = v12 + *(float *)&v15;
          v14 = v24;
          s = v23 + 1;
          *((float *)&v32 + 1) = v12 + *((float *)&v32 + 1);
          v34 = v12 + v34;
          if ( v23 + 1 >= v8 )
            goto LABEL_38;
        }
        v24 = v14;
LABEL_38:
        if ( s >= v8 )
        {
          v29 = 0.0;
        }
        else
        {
          v25 = 0;
          v26 = a3 & 1;
          do
          {
            v27 = (char *)memchr(s, 10, v8 - s);
            if ( !v27 )
              v27 = v8;
            if ( !v26 )
            {
              sub_1660A4(v31, (unsigned int)s, (unsigned int)v27, 0, -1.0);
              v28 = v31[0];
              if ( v24 >= v31[0] )
                v28 = v24;
              v24 = v28;
              v35 = v28;
            }
            s = v27 + 1;
            ++v25;
          }
          while ( v27 + 1 < v8 );
          v29 = (float)v25;
        }
        *(float *)&v15 = *(float *)&v15 + (float)(v29 * v12);
      }
      v32 = __PAIR64__(LODWORD(v10), v9);
      v36 = *(float *)&v15 - v10;
      v33 = *(float *)&v9 + v24;
      v34 = v10 + (float)(*(float *)&v15 - v10);
      sub_167054((unsigned int)&v35);
      return sub_167164(&v32, 0, 0);
    }
  }
  return result;
}


// ======================================================================
