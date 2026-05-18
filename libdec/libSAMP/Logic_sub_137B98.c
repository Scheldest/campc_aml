// ADDR: 0x137b98
// SYMBOL: sub_137B98
int *__fastcall sub_137B98(int a1, unsigned __int8 *a2, int a3)
{
  __int64 v4; // r4
  unsigned int v5; // r1
  int *result; // r0
  __int64 v7; // r10
  unsigned int v8; // r1
  unsigned int v9; // r3
  const char *v10; // r6
  int v11; // r1
  int v12; // r4
  int v13; // r0
  int v14; // r4
  int v15; // r6
  __int64 v16; // d16
  __int64 v17; // d17
  int v18; // r0
  int v19; // r0
  const char *v20; // r4
  int v21; // r0
  _BYTE *v22; // r4
  int v23; // [sp+18h] [bp-50h]
  int v24; // [sp+1Ch] [bp-4Ch]
  __int64 v27; // [sp+28h] [bp-40h] BYREF
  __int64 v28; // [sp+30h] [bp-38h]
  _BYTE v29[4]; // [sp+38h] [bp-30h] BYREF
  int v30; // [sp+3Ch] [bp-2Ch]
  char v31; // [sp+43h] [bp-25h] BYREF
  _DWORD v32[9]; // [sp+44h] [bp-24h] BYREF

  v4 = *(_QWORD *)(a2 + 4);
  v5 = *a2;
  result = &dword_3141E8;
  v31 = a3;
  if ( (v5 & 1) == 0 )
    HIDWORD(v4) = a2 + 1;
  v7 = *(_QWORD *)&dword_3141E8;
  if ( (v5 & 1) == 0 )
    LODWORD(v4) = v5 >> 1;
  while ( (_DWORD)v7 != HIDWORD(v7) )
  {
    result = (int *)(v7 + 4);
    v8 = *(unsigned __int8 *)(v7 + 4);
    v9 = *(_DWORD *)(v7 + 8);
    if ( (v8 & 1) == 0 )
      v9 = v8 >> 1;
    if ( v9 == (_DWORD)v4 )
    {
      v10 = *(const char **)(v7 + 12);
      if ( (v8 & 1) != 0 )
      {
        if ( !(_DWORD)v4 )
          goto LABEL_19;
        result = (int *)memcmp(*(const void **)(v7 + 12), (const void *)HIDWORD(v4), v4);
        if ( !result )
          goto LABEL_19;
      }
      else
      {
        if ( !(_DWORD)v4 )
        {
LABEL_18:
          v10 = (const char *)(v7 + 5);
LABEL_19:
          if ( !strcmp(v10, byte_8D75A) || !strcmp(v10, byte_8F456) )
          {
            v13 = -1;
          }
          else
          {
            v12 = dword_381BF4;
            v32[0] = a2;
            sub_138B9C(&v27, dword_381A0C + 136, a2, &unk_B9357, v32, v29);
            v13 = sub_17C76C(v12, 0, 100, (int)(float)(*(float *)(v27 + 32) * 100.0), a2);
          }
          v24 = v13;
          v14 = operator new(0xB0u);
          v23 = *(_DWORD *)v7;
          HIDWORD(v7) = dword_3141C4;
          v15 = operator new(0x78u);
          *(float *)&v16 = 1.0;
          *((float *)&v16 + 1) = 1.0;
          *(float *)&v17 = 1.0;
          *((float *)&v17 + 1) = 1.0;
          v27 = v16;
          v28 = v17;
          sub_13D3DC(v15, v7 + 16, (int)&v27, 1, *(float *)&dword_238EC0 / 2.5);
          sub_1387D4(v14, a3, v23, HIDWORD(v7), a2, v7 + 28, v7 + 44, v15, v24);
          v30 = v14;
          v29[0] = a3;
          sub_138F8C(v32, &qword_3141C8, v29, v29);
          v18 = sub_13934C(&qword_3141C8, &v31);
          if ( !v18 )
            goto LABEL_37;
          sub_12BDF6(a1, *(_DWORD *)(v18 + 12));
          v19 = sub_13934C(&qword_3141C8, &v31);
          if ( !v19 )
            goto LABEL_37;
          sub_12BDF6(a1, *(_DWORD *)(*(_DWORD *)(v19 + 12) + 168));
          v20 = *(const char **)(v7 + 12);
          if ( !(*(unsigned __int8 *)(v7 + 4) << 31) )
            v20 = (const char *)(v7 + 5);
          if ( !strcmp(v20, byte_8D75A) )
            dword_239028 = *(_DWORD *)v7;
          if ( !strcmp(v20, byte_8F456) )
          {
            sub_DC6DC(&v27, byte_8D75A);
            sub_137B98(a1, &v27, 255);
            if ( (unsigned __int8)v27 << 31 )
              operator delete((void *)v28);
          }
          v21 = sub_13934C(&qword_3141C8, &v31);
          if ( !v21 )
LABEL_37:
            sub_EE13C((int)"unordered_map::at: key not found");
          v22 = *(_BYTE **)(*(_DWORD *)(v21 + 12) + 168);
          if ( v22[80] )
            (*(void (__fastcall **)(_BYTE *, _DWORD))(*(_DWORD *)v22 + 36))(v22, 0);
          v22[80] = 0;
          return (int *)sub_137E48(a1);
        }
        result = (int *)(v8 >> 1);
        v11 = 0;
        while ( *(unsigned __int8 *)(v7 + v11 + 5) == *(unsigned __int8 *)(HIDWORD(v4) + v11) )
        {
          if ( result == (int *)++v11 )
            goto LABEL_18;
        }
      }
    }
    LODWORD(v7) = v7 + 60;
  }
  return result;
}


// ======================================================================
// ADDR: 0x137e48
// SYMBOL: sub_137E48
int __fastcall sub_137E48(int a1)
{
  int32x2_t v1; // d11
  float v3; // s4
  float v4; // s6
  float v5; // s0
  float v6; // s16
  float v7; // s18
  _DWORD *v8; // r4
  int v9; // r5
  float v10; // s20
  int v11; // r0
  int32x4_t v12; // q6
  int v13; // r0
  int *v14; // r6
  int32x4_t *v15; // r0
  int v16; // r0
  float v17; // s2
  int v18; // r0
  float v19; // s0
  int v20; // r0
  _QWORD v22[12]; // [sp+0h] [bp-60h] BYREF

  if ( *(_BYTE *)(dword_381BF4 + 132) )
  {
    v3 = 0.392;
    v4 = 1.127;
  }
  else
  {
    v3 = 0.4;
    v4 = 1.118;
  }
  v5 = *(float *)(a1 + 24);
  v6 = *(float *)(a1 + 20) * v4;
  v7 = v5 * v3;
  v8 = (_DWORD *)dword_3141D0;
  if ( dword_3141D0 )
  {
    v9 = 0;
    v1.n64_f32[0] = v5 * 0.12;
    v10 = v5 * 0.52;
    v11 = HIBYTE(word_3141DC);
    v12 = vdupq_lane_s32(v1, 0);
    do
    {
      if ( v11 )
      {
        v14 = v8 + 3;
        v13 = v8[3];
      }
      else
      {
        v14 = v8 + 3;
        v13 = v8[3];
        if ( dword_3141E0 != *(_DWORD *)(v13 + 116) )
        {
          v11 = 0;
          goto LABEL_10;
        }
      }
      ++v9;
      v15 = (int32x4_t *)(v13 + 20);
      *v15++ = v12;
      v15->n128_u32[0] = v1.n64_u32[0];
      v15->n128_u32[1] = v1.n64_u32[0];
      v16 = *v14;
      *((float *)v22 + 1) = v7;
      v17 = (float)((float)v9 * -0.07) + 0.9;
      *(float *)v22 = (float)(*(float *)(a1 + 20) - (float)(v6 * v17)) - v1.n64_f32[0];
      sub_12BD92(v16, v22);
      v18 = *v14;
      v19 = *(float *)(a1 + 20) - (float)(v6 * v17);
      *((float *)v22 + 1) = v10;
      v20 = *(_DWORD *)(v18 + 168);
      *(float *)v22 = v19 - v1.n64_f32[0];
      sub_12BD92(v20, v22);
      v11 = HIBYTE(word_3141DC);
LABEL_10:
      v8 = (_DWORD *)*v8;
    }
    while ( v8 );
  }
  return _android_log_print(4, "AXL", "VoiceButton: layout performed!");
}


// ======================================================================
// ADDR: 0x1387d4
// SYMBOL: sub_1387D4
int __fastcall sub_1387D4(int a1, char a2, int a3, int a4, int a5, _QWORD *a6, _QWORD *a7, int a8, int a9)
{
  __int64 v13; // d17
  __int64 v14; // d17
  int result; // r0
  void *v16[9]; // [sp+4h] [bp-24h] BYREF

  sub_DC6DC(v16, &byte_8F794);
  sub_13CE34(a1, v16, 0);
  if ( LOBYTE(v16[0]) << 31 )
    operator delete(v16[2]);
  *(_DWORD *)(a1 + 116) = a3;
  *(_DWORD *)(a1 + 120) = a4;
  *(_BYTE *)(a1 + 112) = a2;
  *(_DWORD *)a1 = &off_22EB68;
  std::string::basic_string(a1 + 124, a5);
  v13 = a6[1];
  *(_QWORD *)(a1 + 136) = *a6;
  *(_QWORD *)(a1 + 144) = v13;
  v14 = a7[1];
  *(_QWORD *)(a1 + 152) = *a7;
  *(_QWORD *)(a1 + 160) = v14;
  *(_DWORD *)(a1 + 172) = a9;
  result = a1;
  *(_DWORD *)(a1 + 168) = a8;
  return result;
}


// ======================================================================
// ADDR: 0x138b9c
// SYMBOL: sub_138B9C
int __fastcall sub_138B9C(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int *v9; // r6
  int result; // r0
  char v11; // r1
  _DWORD v12[3]; // [sp+8h] [bp-20h] BYREF
  _DWORD v13[5]; // [sp+14h] [bp-14h] BYREF

  v9 = (int *)sub_138BEA(a2, v13);
  result = *v9;
  if ( *v9 )
  {
    v11 = 0;
  }
  else
  {
    sub_138C5A(v12, a2, a4, a5, a6);
    sub_138CA8(a2, v13[0], v9, v12[0]);
    result = v12[0];
    v11 = 1;
  }
  *(_BYTE *)(a1 + 4) = v11;
  *(_DWORD *)a1 = result;
  return result;
}


// ======================================================================
// ADDR: 0x138f8c
// SYMBOL: sub_138F8C
int __fastcall sub_138F8C(int a1, int a2, unsigned __int8 *a3, _QWORD *a4)
{
  int v4; // r11
  unsigned int v5; // r10
  _QWORD *v6; // r5
  unsigned int v7; // r4
  int v9; // r8
  unsigned int v10; // r0
  unsigned int v11; // r8
  int v12; // r1
  int *v13; // r6
  unsigned int v14; // r0
  unsigned int v15; // r1
  int result; // r0
  float v17; // s0
  int v18; // r0
  float v19; // s2
  int v20; // r11
  int v21; // r8
  int v22; // r5
  _BOOL4 v23; // r5
  float v24; // r0
  std::__ndk1 *v25; // r1
  unsigned int v26; // r0
  unsigned int v27; // r1
  int v28; // r0
  int *v29; // r1
  unsigned int v30; // r0
  unsigned int v31; // r1

  v5 = *(_DWORD *)(a2 + 4);
  v6 = a4;
  v7 = *a3;
  v9 = a1;
  if ( v5 )
  {
    v10 = ((v5 - ((v5 >> 1) & 0x55555555)) & 0x33333333) + (((v5 - ((v5 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v11 = (16843009 * ((v10 + (v10 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v11 > 1 )
    {
      v4 = *a3;
      if ( v5 <= v7 )
      {
        sub_221798(v7, v5);
        v4 = v12;
      }
    }
    else
    {
      v4 = (v5 - 1) & v7;
    }
    v13 = *(int **)(*(_DWORD *)a2 + 4 * v4);
    if ( v13 )
    {
      while ( 1 )
      {
        v13 = (int *)*v13;
        if ( !v13 )
          break;
        v14 = v13[1];
        if ( v14 != v7 )
        {
          if ( v11 > 1 )
          {
            if ( v14 >= v5 )
            {
              sub_221798(v14, v5);
              v14 = v15;
            }
          }
          else
          {
            v14 &= v5 - 1;
          }
          if ( v14 != v4 )
            break;
        }
        if ( *((unsigned __int8 *)v13 + 8) == v7 )
        {
          result = 0;
          v9 = a1;
          goto LABEL_39;
        }
      }
    }
    v6 = a4;
    v9 = a1;
  }
  v13 = (int *)operator new(0x10u);
  v17 = *(float *)(a2 + 16);
  v18 = *(_DWORD *)(a2 + 12) + 1;
  *v13 = 0;
  v13[1] = v7;
  *((_QWORD *)v13 + 1) = *v6;
  v19 = (float)(unsigned int)v18;
  if ( v5 && (float)(v17 * (float)v5) >= v19 )
  {
    v7 = v4;
  }
  else
  {
    v20 = v9;
    v21 = 2 * v5;
    if ( v5 < 3 )
    {
      v23 = 1;
    }
    else
    {
      v22 = v5 & (v5 - 1);
      v23 = v22 != 0;
    }
    v24 = ceilf(v19 / v17);
    v25 = (std::__ndk1 *)(v23 | v21);
    v26 = (unsigned int)v24;
    if ( (v23 | (unsigned int)v21) < v26 )
      v25 = (std::__ndk1 *)v26;
    sub_13915A(a2, v25);
    v5 = *(_DWORD *)(a2 + 4);
    v9 = v20;
    if ( (v5 & (v5 - 1)) != 0 )
    {
      if ( v5 <= v7 )
      {
        sub_221798(v7, *(_DWORD *)(a2 + 4));
        v7 = v27;
      }
    }
    else
    {
      v7 &= v5 - 1;
    }
  }
  v28 = *(_DWORD *)a2;
  v29 = *(int **)(*(_DWORD *)a2 + 4 * v7);
  if ( v29 )
  {
    *v13 = *v29;
    *v29 = (int)v13;
  }
  else
  {
    *v13 = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 8) = v13;
    *(_DWORD *)(v28 + 4 * v7) = a2 + 8;
    if ( *v13 )
    {
      v30 = *(_DWORD *)(*v13 + 4);
      if ( (v5 & (v5 - 1)) != 0 )
      {
        if ( v30 >= v5 )
        {
          sub_221798(v30, v5);
          v30 = v31;
        }
      }
      else
      {
        v30 &= v5 - 1;
      }
      *(_DWORD *)(*(_DWORD *)a2 + 4 * v30) = v13;
    }
  }
  ++*(_DWORD *)(a2 + 12);
  result = 1;
LABEL_39:
  *(_BYTE *)(v9 + 4) = result;
  *(_DWORD *)v9 = v13;
  return result;
}


// ======================================================================
// ADDR: 0x13934c
// SYMBOL: sub_13934C
int **__fastcall sub_13934C(_DWORD *a1, unsigned __int8 *a2)
{
  unsigned int v2; // r4
  unsigned int v4; // r5
  unsigned int v5; // r0
  unsigned int v6; // r9
  int v7; // r8
  int v8; // r1
  int ***v9; // r0
  int **i; // r6
  unsigned int v11; // r0
  unsigned int v12; // r1

  v2 = a1[1];
  if ( v2 )
  {
    v4 = *a2;
    v5 = ((v2 - ((v2 >> 1) & 0x55555555)) & 0x33333333) + (((v2 - ((v2 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v6 = (16843009 * ((v5 + (v5 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v6 > 1 )
    {
      if ( v2 <= v4 )
      {
        sub_221798(v4, v2);
        v7 = v8;
      }
      else
      {
        v7 = *a2;
      }
    }
    else
    {
      v7 = (v2 - 1) & v4;
    }
    v9 = *(int ****)(*a1 + 4 * v7);
    if ( v9 )
    {
      for ( i = *v9; i; i = (int **)*i )
      {
        v11 = (unsigned int)i[1];
        if ( v11 == v4 )
        {
          if ( *((unsigned __int8 *)i + 8) == v4 )
            return i;
        }
        else
        {
          if ( v6 > 1 )
          {
            if ( v11 >= v2 )
            {
              sub_221798(v11, v2);
              v11 = v12;
            }
          }
          else
          {
            v11 &= v2 - 1;
          }
          if ( v11 != v7 )
            return 0;
        }
      }
    }
  }
  return 0;
}


// ======================================================================
// ADDR: 0x17c76c
// SYMBOL: sub_17C76C
int __fastcall sub_17C76C(int *a1, int a2, int a3, int a4, unsigned __int8 *a5)
{
  int v9; // r0
  int v10; // r4
  int v11; // r1
  int v12; // r2
  int v13; // r6
  int v14; // r5
  int v16[7]; // [sp+Ch] [bp-1Ch] BYREF

  v9 = sub_17C080();
  if ( v9 )
  {
    v10 = v9;
    sub_17C5B0(v9, a5, v16);
    v11 = *a1;
    v12 = a1[8];
    v13 = v16[0];
    v14 = sub_17C7F0(v10, v11, v12, a2, a3, a4, v16[0]);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v10 + 92))(v10, v13);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 912))(v10) )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 64))(v10);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 68))(v10);
    }
  }
  else
  {
    _android_log_print(4, "AXL", "Env not loaded (addSliderToAzVoiceSettings)");
    return -1;
  }
  return v14;
}


// ======================================================================
