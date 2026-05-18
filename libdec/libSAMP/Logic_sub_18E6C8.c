// ADDR: 0x18e49e
// SYMBOL: sub_18E49E
int *__fastcall sub_18E49E(_BYTE *a1, int *a2)
{
  _BYTE *v2; // r0
  unsigned int v3; // r6
  unsigned int v4; // r5
  size_t v5; // r4
  int v6; // r1
  unsigned int v7; // r8
  char *v8; // r10
  char *v9; // r0
  int v10; // r4
  bool v11; // zf
  int v12; // r8
  char *v13; // r11
  int v14; // r10
  int i; // r0
  int8x16_t v16; // q8
  int8x16_t *v17; // r1
  int j; // r0
  _DWORD *v19; // r1
  int v20; // r5
  int v21; // r3
  unsigned int v22; // r0
  int v23; // r2
  int v24; // r6
  int v25; // r5
  int v26; // r1
  int v27; // r12
  int v28; // lr
  int v29; // r4
  int v30; // r6
  int v31; // r5
  int v32; // r2
  int v33; // r3
  int *result; // r0
  void *v35; // [sp+0h] [bp-180h]
  unsigned int v37; // [sp+Ch] [bp-174h]
  int v38; // [sp+10h] [bp-170h]
  int v39; // [sp+14h] [bp-16Ch]
  int v40; // [sp+18h] [bp-168h]
  int srca; // [sp+1Ch] [bp-164h]
  _DWORD v43[16]; // [sp+20h] [bp-160h] BYREF
  int v44; // [sp+60h] [bp-120h] BYREF

  if ( *a1 )
  {
    v2 = a1 + 1;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = (unsigned __int8)v2[v5];
      v4 = (__PAIR64__(v4, v3) + 8) >> 32;
      v3 += 8;
      ++v5;
    }
    while ( v6 );
  }
  else
  {
    v5 = 0;
    v3 = 0;
    v4 = 0;
  }
  v7 = (((v5 + 8) >> 3) & 0xFFFFFFF8) + 56 * (v5 / 0x38) + 64;
  v8 = (char *)operator new[](v7);
  j_memcpy(v8, a1, v5);
  v8[v5] = 0x80;
  sub_22178C((int)&v8[v5 + 1], (((v5 + 8) >> 3) & 0xFFFFFFF8) + 56 * (v5 / 0x38) - v5 + 55);
  v9 = &v8[56 * (v5 / 0x38) + 55 + (((v5 + 8) >> 3) & 0xFFFFFFF8)];
  v10 = 271733878;
  *(_DWORD *)(v9 + 1) = bswap32(v4);
  *(_DWORD *)(v9 + 5) = bswap32(v3);
  v11 = v7 >> 6 == 0;
  v37 = v7 >> 6;
  v12 = -271733879;
  srca = 1732584193;
  v40 = -1732584194;
  v35 = v8;
  v39 = -1009589776;
  if ( !v11 )
  {
    v13 = v8;
    v14 = 0;
    do
    {
      for ( i = 0; i != 16; i += 4 )
      {
        v16 = *(int8x16_t *)&v13[i * 4];
        v17 = (int8x16_t *)&v43[i];
        *v17 = vrev32q_s8(v16);
      }
      sub_22178C((int)&v44, 0x100u);
      for ( j = 0; j != 64; ++j )
      {
        v19 = &v43[j];
        v20 = v43[j];
        v19[16] = __ROR4__(v19[2] ^ v19[8] ^ v19[13] ^ v20, 31);
      }
      v21 = v39;
      v22 = 0;
      v23 = v40;
      v24 = v10;
      v25 = srca;
      v26 = v12;
      v38 = v10;
      do
      {
        v27 = v25;
        v28 = v23;
        v29 = v24;
        if ( v22 > 0x13 )
        {
          if ( v22 > 0x27 )
          {
            if ( v22 > 0x3B )
            {
              v31 = -899497514;
              v30 = v23 ^ v26 ^ v24;
            }
            else
            {
              v30 = (v24 | v23) & v26 | v24 & v23;
              v31 = -1894007588;
            }
          }
          else
          {
            v31 = 1859775393;
            v30 = v23 ^ v26 ^ v24;
          }
        }
        else
        {
          v30 = (v24 & ~v26) + (v23 & v26);
          v31 = 1518500249;
        }
        v32 = v21 + __ROR4__(v27, 27);
        v33 = v43[v22++];
        v25 = v32 + v30 + v31 + v33;
        v23 = __ROR4__(v26, 2);
        v21 = v29;
        v24 = v28;
        v26 = v27;
      }
      while ( v22 != 80 );
      v12 += v27;
      v13 += 64;
      ++v14;
      v39 += v29;
      v40 += v23;
      v10 = v38 + v28;
      srca += v25;
    }
    while ( v14 != v37 );
  }
  operator delete[](v35);
  result = a2;
  *a2 = srca;
  a2[1] = v12;
  a2[2] = v40;
  a2[3] = v10;
  a2[4] = v39;
  return result;
}


// ======================================================================
// ADDR: 0x18e69e
// SYMBOL: sub_18E69E
int sub_18E69E(int a1, int a2, const char *a3, ...)
{
  va_list va; // [sp+14h] [bp-4h] BYREF

  va_start(va, a3);
  return _vsprintf_chk(a1, 0, a2, a3, va);
}


// ======================================================================
