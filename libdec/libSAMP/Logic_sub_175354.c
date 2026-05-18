// ADDR: 0x1754e4
// SYMBOL: sub_1754E4
int __fastcall sub_1754E4(int a1, unsigned int *a2, int a3, const void *a4, void *src, const void *a6)
{
  const void *v7; // r9
  const void *v8; // r11
  unsigned int v10; // r1
  unsigned __int8 *v11; // r4
  unsigned int v12; // r8
  unsigned int v13; // r0
  unsigned int v14; // r1
  int v15; // r2
  _BYTE *v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r1
  unsigned int v20; // r2
  int v21; // r1
  unsigned int v22; // r1
  _BYTE *v23; // r2
  int v24; // r3
  unsigned int v25; // r1
  int v26; // r1
  _BYTE *v27; // r2
  int v28; // r3
  unsigned int v29; // r1
  int v30; // r3
  _BYTE dest[120]; // [sp+10h] [bp-118h] BYREF
  const void *v34[40]; // [sp+88h] [bp-A0h] BYREF

  v7 = (const void *)bswap32(a2[2]);
  v8 = (const void *)sub_1654B0((int)v7);
  if ( bswap32(*a2) == 1471938560 && !bswap32(a2[1]) )
  {
    v10 = a2[2];
    dword_381BE4 = (int)a2;
    v11 = (unsigned __int8 *)(a2 + 4);
    v12 = (unsigned int)v8 + bswap32(v10);
    v13 = (unsigned int)v8;
    dword_381BE8 = v12;
    dword_381BEC = (int)v8;
    dword_381BF0 = (int)v8;
    do
    {
      v14 = *v11;
      if ( v14 < 0x20 )
      {
        if ( v14 >= 0x18 )
        {
          v18 = v11[3] + 1;
          v16 = (_BYTE *)(v13 + v18);
          if ( v13 + v18 <= dword_381BE8 )
          {
            v19 = 1572863 - (v11[2] | (v14 << 16) | (v11[1] << 8));
            if ( dword_381BEC <= v13 + v19 )
            {
              v16 = (_BYTE *)v13;
              do
              {
                --v18;
                *v16 = v16[v19];
                ++v16;
              }
              while ( v18 );
            }
            else
            {
              v16 = (_BYTE *)(dword_381BE8 + 1);
            }
          }
          dword_381BF0 = (int)v16;
          v11 += 4;
          goto LABEL_50;
        }
        if ( v14 >= 0x10 )
        {
          v20 = bswap32(*(unsigned __int16 *)(v11 + 3) << 16) + 1;
          v16 = (_BYTE *)(v13 + v20);
          if ( v13 + v20 <= dword_381BE8 )
          {
            v21 = 0xFFFFF - (v11[2] | (v14 << 16) | (v11[1] << 8));
            if ( dword_381BEC <= v13 + v21 )
            {
              v16 = (_BYTE *)v13;
              do
              {
                --v20;
                *v16 = v16[v21];
                ++v16;
              }
              while ( v20 );
            }
            else
            {
              v16 = (_BYTE *)(dword_381BE8 + 1);
            }
          }
          dword_381BF0 = (int)v16;
          v11 += 5;
          goto LABEL_50;
        }
        if ( v14 < 8 )
        {
          if ( v14 == 4 )
          {
            v29 = bswap32(*((unsigned __int16 *)v11 + 2) << 16) + 1;
            v27 = (_BYTE *)(v13 + v29);
            if ( v13 + v29 <= dword_381BE8 )
            {
              v30 = ~(v11[3] | (v11[1] << 16) | (v11[2] << 8));
              if ( dword_381BEC <= v13 + v30 )
              {
                v27 = (_BYTE *)v13;
                do
                {
                  --v29;
                  *v27 = v27[v30];
                  ++v27;
                }
                while ( v29 );
              }
              else
              {
                v27 = (_BYTE *)(dword_381BE8 + 1);
              }
            }
            dword_381BF0 = (int)v27;
            v11 += 6;
            goto LABEL_66;
          }
          if ( v14 == 6 )
          {
            v26 = v11[4] + 1;
            v27 = (_BYTE *)(v13 + v26);
            if ( v13 + v26 <= dword_381BE8 )
            {
              v28 = ~(v11[3] | (v11[1] << 16) | (v11[2] << 8));
              if ( dword_381BEC <= v13 + v28 )
              {
                v27 = (_BYTE *)v13;
                do
                {
                  --v26;
                  *v27 = v27[v28];
                  ++v27;
                }
                while ( v26 );
              }
              else
              {
                v27 = (_BYTE *)(dword_381BE8 + 1);
              }
            }
            dword_381BF0 = (int)v27;
            v11 += 5;
LABEL_66:
            v13 = (unsigned int)v27;
            continue;
          }
          if ( v14 != 7 )
            break;
          sub_17A9B0(v11 + 3, bswap32(*(unsigned __int16 *)(v11 + 1) << 16) + 1);
          v25 = bswap32(*(unsigned __int16 *)(v11 + 1) << 16) + 4;
          goto LABEL_31;
        }
        sub_17A9B0(v11 + 2, (v11[1] | (v14 << 8)) - 2047);
        v25 = bswap32(*(unsigned __int16 *)v11 << 16) - 2045;
      }
      else
      {
        if ( (char)v14 <= -1 )
        {
          v22 = v14 - 127;
          v23 = (_BYTE *)(v13 + v22);
          if ( v13 + v22 > dword_381BE8 )
            goto LABEL_42;
          v24 = ~v11[1];
          if ( dword_381BEC > v24 + v13 )
          {
            v23 = (_BYTE *)(dword_381BE8 + 1);
            goto LABEL_42;
          }
          if ( v22 )
          {
            v23 = (_BYTE *)v13;
            do
            {
              --v22;
              *v23 = v23[v24];
              ++v23;
            }
            while ( v22 );
LABEL_42:
            dword_381BF0 = (int)v23;
            v13 = (unsigned int)v23;
          }
          v11 += 2;
          continue;
        }
        if ( v14 >= 0x40 )
        {
          v15 = v11[2] + 1;
          v16 = (_BYTE *)(v13 + v15);
          if ( v13 + v15 <= dword_381BE8 )
          {
            v17 = 0x3FFF - (v11[1] | (v14 << 8));
            if ( dword_381BEC <= v13 + v17 )
            {
              v16 = (_BYTE *)v13;
              do
              {
                --v15;
                *v16 = v16[v17];
                ++v16;
              }
              while ( v15 );
            }
            else
            {
              v16 = (_BYTE *)(dword_381BE8 + 1);
            }
          }
          dword_381BF0 = (int)v16;
          v11 += 3;
LABEL_50:
          v13 = (unsigned int)v16;
          continue;
        }
        sub_17A9B0(v11 + 1, v14 - 31);
        v25 = *v11 - 30;
      }
      if ( !v25 )
        break;
LABEL_31:
      v11 += v25;
      v13 = dword_381BF0;
    }
    while ( v13 <= v12 );
  }
  if ( src )
    j_memcpy(dest, src, 0x74u);
  else
    sub_174FC6((int)dest);
  dest[8] = 1;
  j_memcpy(v34, dest, 0x74u);
  v34[4] = a4;
  v34[0] = v8;
  v34[1] = v7;
  if ( a6 )
    v34[12] = a6;
  return sub_1751CE(a1, v34);
}


// ======================================================================
