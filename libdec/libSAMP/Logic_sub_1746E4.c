// ADDR: 0x165308
// SYMBOL: sub_165308
int __fastcall sub_165308(int *a1, unsigned __int8 *a2, int a3)
{
  int v3; // r12
  int v4; // r1
  unsigned int v5; // r2
  unsigned __int8 v6; // r1
  int v7; // r12
  unsigned int v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // lr
  unsigned __int8 v11; // r1
  unsigned __int8 v12; // r12
  unsigned __int8 v13; // r1
  int v14; // r2

  v3 = *a2;
  if ( (v3 & 0x80) != 0 )
  {
    if ( (v3 & 0xE0) == 0xC0 )
    {
      *a1 = 65533;
      if ( !a3 || a3 - (int)a2 >= 2 )
      {
        v5 = *a2;
        if ( v5 < 0xC2 )
          return 2;
        v6 = a2[1];
        if ( (v6 & 0xC0) != 0x80 )
          return 2;
        v3 = v6 & 0x3F | ((v5 & 0x1F) << 6);
        v4 = 2;
        goto LABEL_3;
      }
      return 1;
    }
    if ( (v3 & 0xF0) == 0xE0 )
    {
      *a1 = 65533;
      if ( a3 && a3 - (int)a2 < 3 )
        return 1;
      v7 = *a2;
      if ( v7 == 224 )
      {
        LOBYTE(v8) = a2[1];
        if ( (unsigned __int8)(v8 + 64) < 0xE0u )
          return 3;
      }
      else if ( v7 == 237 )
      {
        v8 = a2[1];
        if ( v8 > 0x9F )
          return 3;
      }
      else
      {
        LOBYTE(v8) = a2[1];
      }
      if ( (v8 & 0xC0) == 0x80 )
      {
        v11 = a2[2];
        if ( (v11 & 0xC0) == 0x80 )
        {
          v3 = (v11 & 0x3F) + (((v7 & 0xF) << 12) | ((v8 & 0x3F) << 6));
          v4 = 3;
          goto LABEL_3;
        }
      }
      return 3;
    }
    if ( (v3 & 0xF8) != 0xF0 )
    {
      v3 = 0;
      v4 = 0;
      goto LABEL_3;
    }
    *a1 = 65533;
    if ( a3 && a3 - (int)a2 < 4 )
      return 1;
    v9 = *a2;
    if ( v9 <= 0xF4 )
    {
      if ( v9 == 240 )
      {
        LOBYTE(v10) = a2[1];
        if ( (unsigned __int8)(v10 + 64) < 0xD0u )
          return 4;
      }
      else if ( v9 == 244 )
      {
        v10 = a2[1];
        if ( v10 > 0x8F )
          return 4;
      }
      else
      {
        LOBYTE(v10) = a2[1];
      }
      if ( (v10 & 0xC0) == 0x80 )
      {
        v12 = a2[2];
        if ( (v12 & 0xC0) == 0x80 )
        {
          v13 = a2[3];
          if ( (v13 & 0xC0) == 0x80 )
          {
            v14 = ((v9 & 7) << 18) | ((v12 & 0x3F) << 6) & 0xFFF | ((v10 & 0x3F) << 12);
            if ( (v14 & 0x1FF800) != 0xD800 )
            {
              v3 = v13 & 0x3F | v14;
              v4 = 4;
              goto LABEL_3;
            }
          }
        }
      }
    }
    return 4;
  }
  v4 = 1;
LABEL_3:
  *a1 = v3;
  return v4;
}


// ======================================================================
// ADDR: 0x1789b4
// SYMBOL: sub_1789B4
unsigned __int8 *__fastcall sub_1789B4(_DWORD *a1, float a2, unsigned __int8 *a3, unsigned int a4, float a5)
{
  float *v5; // r9
  float v6; // s16
  int v9; // r11
  unsigned __int8 *v10; // r10
  float v11; // s26
  float v12; // s22
  float v13; // s24
  int v14; // r0
  unsigned __int8 *v15; // r6
  unsigned int v16; // r1
  int v17; // r0
  float *v18; // r0
  float v19; // s0
  bool v20; // zf
  float v21; // s2
  unsigned int v22; // r11
  float v23; // s0
  unsigned __int8 *v25; // [sp+0h] [bp-58h]
  unsigned int v26[21]; // [sp+4h] [bp-54h] BYREF

  if ( (unsigned int)a3 < a4 )
  {
    v5 = (float *)(a1 + 3);
    v6 = a5 / a2;
    v9 = 1;
    v10 = a3;
    v25 = 0;
    v11 = 0.0;
    v12 = 0.0;
    v13 = 0.0;
    do
    {
      v14 = (char)*a3;
      v15 = a3;
      v16 = (unsigned __int8)v14;
      v26[0] = (unsigned __int8)v14;
      if ( v14 < 0 )
      {
        v17 = sub_165308((int *)v26, a3, a4);
        v16 = v26[0];
        a3 = &v15[v17];
      }
      else
      {
        ++a3;
      }
      if ( !v16 )
        return v15;
      if ( v16 > 0x1F )
        goto LABEL_10;
      if ( v16 == 10 )
      {
        v13 = 0.0;
        v9 = 1;
        v12 = 0.0;
        v11 = 0.0;
        continue;
      }
      if ( v16 != 13 )
      {
LABEL_10:
        v18 = v5;
        if ( (signed int)v16 < *a1 )
          v18 = (float *)(a1[2] + 4 * v16);
        v19 = *v18;
        v20 = v16 == 9;
        if ( v16 != 9 )
          v20 = v16 == 12288;
        if ( v20 || v16 == 32 )
        {
          v21 = -0.0;
          if ( (v9 & 1) != 0 )
          {
            v21 = v11;
            v11 = 0.0;
          }
          v13 = v13 + v21;
          v11 = v11 + v19;
          if ( (v9 & 1) != 0 )
            v10 = v15;
          v22 = 0;
        }
        else
        {
          v12 = v12 + v19;
          if ( v9 << 31 )
          {
            v10 = a3;
          }
          else
          {
            v23 = v11 + v12;
            v25 = v10;
            v12 = 0.0;
            v11 = 0.0;
            v13 = v13 + v23;
          }
          v22 = (0x3BFFD7FCu >> (v16 - 33)) & 1 | (v16 - 33 > 0x1E);
        }
        v9 = v22 != 0;
        if ( (float)(v13 + v12) >= v6 )
        {
          if ( v25 )
            v10 = v25;
          if ( v12 < v6 )
            return v10;
          return v15;
        }
      }
    }
    while ( (unsigned int)a3 < a4 );
  }
  return a3;
}


// ======================================================================
