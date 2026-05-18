// ADDR: 0x88644
// SYMBOL: sub_88644
unsigned int __fastcall sub_88644(unsigned int a1, unsigned int a2)
{
  unsigned int result; // r0

  do
  {
    result = a1;
    if ( a1 <= a2 )
      break;
    a1 -= 2;
  }
  while ( *(_WORD *)(result - 2) != 10 );
  return result;
}


// ======================================================================
// ADDR: 0x88838
// SYMBOL: sub_88838
int __fastcall sub_88838(_WORD *a1, int a2, unsigned __int8 *a3, unsigned int a4, unsigned __int8 **a5)
{
  _WORD *v8; // r4
  unsigned int v9; // r11
  int v10; // r0
  int v11; // r1
  int v13; // [sp+4h] [bp-24h] BYREF

  v8 = a1;
  v9 = (unsigned int)&a1[a2 - 1];
  do
  {
    if ( (unsigned int)v8 >= v9 || a4 && (unsigned int)a3 >= a4 || !*a3 )
      break;
    v10 = sub_88448(&v13, a3, a4);
    v11 = v13;
    a3 += v10;
    if ( (unsigned int)(v13 - 1) <= 0xFFFE )
      *v8++ = v13;
  }
  while ( v11 );
  *v8 = 0;
  if ( a5 )
    *a5 = a3;
  return v8 - a1;
}


// ======================================================================
// ADDR: 0x888c4
// SYMBOL: sub_888C4
int __fastcall sub_888C4(unsigned __int8 *a1, unsigned int a2)
{
  int v4; // r1
  int v5; // r6
  int v6; // r0
  unsigned int v8; // [sp+0h] [bp-18h] BYREF

  v4 = 0;
  do
  {
    v5 = v4;
    if ( a2 && (unsigned int)a1 >= a2 || !*a1 )
      break;
    v6 = sub_88448((int *)&v8, a1, a2);
    v4 = v5;
    a1 += v6;
    if ( v8 < 0x10000 )
      v4 = v5 + 1;
  }
  while ( v8 );
  return v5;
}


// ======================================================================
// ADDR: 0x8892c
// SYMBOL: sub_8892C
unsigned int __fastcall sub_8892C(unsigned int a1, int a2, _WORD *a3, unsigned int a4)
{
  int v4; // r12
  unsigned int v5; // r1
  unsigned int v6; // r5
  int v7; // r4
  int v8; // r6
  int v9; // r4
  unsigned int result; // r0

  v4 = a1 + a2;
  v5 = a1;
  if ( v4 - 1 > a1 )
  {
    v5 = a1;
    while ( 1 )
    {
      if ( a4 && (unsigned int)a3 >= a4 )
        goto LABEL_21;
      v6 = (unsigned __int16)*a3;
      if ( !*a3 )
        goto LABEL_21;
      if ( v6 > 0x7F )
        break;
      *(_BYTE *)v5++ = v6;
LABEL_4:
      ++a3;
      if ( v5 >= v4 - 1 )
        goto LABEL_21;
    }
    v7 = ~v5 + v4;
    if ( v6 >> 11 )
    {
      if ( (v6 & 0xFC00) != 0xDC00 )
      {
        if ( (v6 & 0xFC00) == 0xD800 )
        {
          if ( v7 >= 4 )
          {
            *(_WORD *)v5 = -29200;
            *(_BYTE *)(v5 + 2) = (v6 >> 6) & 0x3F | 0x80;
            v8 = 4;
            v9 = 3;
            goto LABEL_19;
          }
        }
        else if ( v7 >= 3 )
        {
          v9 = 2;
          *(_BYTE *)(v5 + 1) = (v6 >> 6) & 0x3F | 0x80;
          *(_BYTE *)v5 = (v6 >> 12) - 32;
          v8 = 3;
          goto LABEL_19;
        }
      }
    }
    else if ( v7 >= 2 )
    {
      *(_BYTE *)v5 = (v6 >> 6) - 64;
      v8 = 2;
      v9 = 1;
LABEL_19:
      *(_BYTE *)(v5 + v9) = v6 & 0x3F | 0x80;
      goto LABEL_20;
    }
    v8 = 0;
LABEL_20:
    v5 += v8;
    goto LABEL_4;
  }
LABEL_21:
  result = v5 - a1;
  *(_BYTE *)v5 = 0;
  return result;
}


// ======================================================================
// ADDR: 0x8bbc8
// SYMBOL: sub_8BBC8
char *sub_8BBC8()
{
  int (__fastcall *v0)(_DWORD); // r1

  v0 = *(int (__fastcall **)(_DWORD))(dword_1ACF68 + 200);
  if ( v0 )
    return (char *)v0(*(_DWORD *)(dword_1ACF68 + 208));
  else
    return &byte_4FDB8;
}


// ======================================================================
// ADDR: 0x8bbe8
// SYMBOL: sub_8BBE8
int __fastcall sub_8BBE8(int a1)
{
  int result; // r0
  int (__fastcall *v3)(_DWORD, int); // r2

  result = dword_1ACF68;
  v3 = *(int (__fastcall **)(_DWORD, int))(dword_1ACF68 + 204);
  if ( v3 )
    return v3(*(_DWORD *)(dword_1ACF68 + 208), a1);
  return result;
}


// ======================================================================
// ADDR: 0x95c50
// SYMBOL: sub_95C50
int __fastcall sub_95C50(int a1, float *a2, int a3)
{
  int v6; // r5
  int v7; // r0
  int v8; // r11
  int v9; // lr
  int v10; // r8
  int v11; // r3
  int v12; // r5
  int v13; // r10
  _DWORD *v14; // r12
  int *v15; // r2
  int v16; // r5
  _DWORD *v17; // r1
  int v18; // r5
  _DWORD *v19; // r6
  int v20; // r0
  int v21; // r1
  _DWORD *v22; // r0
  int v23; // r1
  _DWORD *v24; // r0
  int v25; // r1
  int v26; // r3
  _DWORD *v27; // r1
  int v28; // r0
  int v29; // r1
  _QWORD *v30; // r0
  int v31; // r1
  __int64 v32; // d16
  __int64 v33; // d17
  _QWORD *v34; // r0

  v6 = dword_1ACF68;
  sub_95E08(3, dword_1ACF68 + 5684);
  sub_95F20(6, *(_DWORD *)(v6 + 5464));
  sub_95F20(7, *(_DWORD *)(v6 + 5468));
  sub_96058(1, v6 + 5456);
  v7 = sub_95710(0, a1, a2, 1, a3 | 0x10004);
  v8 = dword_1ACF68;
  v9 = v7;
  v10 = *(_DWORD *)(dword_1ACF68 + 6788);
  v11 = *(_DWORD *)(dword_1ACF68 + 6796);
  v12 = *(_DWORD *)(v11 + 12 * (v10 - 1));
  v13 = dword_1ACF68 + 5400;
  v14 = (_DWORD *)(dword_1ACF68 + 5400 + dword_536AC[3 * v12 + 2]);
  v15 = (int *)(dword_1ACF68 + 6776);
  if ( 0x1F9BCDu >> v12 << 31 )
  {
    v17 = (_DWORD *)(v11 + 12 * (v10 - 1) + 4);
  }
  else
  {
    if ( !(0x606432u >> v12 << 31) )
      goto LABEL_6;
    v16 = v11 + 12 * (v10 - 1);
    *v14++ = *(_DWORD *)(v16 + 4);
    v17 = (_DWORD *)(v16 + 8);
  }
  *v14 = *v17;
LABEL_6:
  *(_DWORD *)(v8 + 6788) = v10 - 1;
  v18 = *(_DWORD *)(v11 + 12 * (v10 - 2));
  v19 = (_DWORD *)(v13 + dword_536AC[3 * v18 + 2]);
  if ( 0x1F9BCDu >> v18 << 31 )
  {
    v22 = (_DWORD *)(v11 + 12 * (v10 - 2) + 4);
  }
  else
  {
    if ( !(0x606432u >> v18 << 31) )
      goto LABEL_11;
    v20 = v11 + 12 * (v10 - 2);
    v21 = *(_DWORD *)(v20 + 4);
    v22 = (_DWORD *)(v20 + 8);
    *v19++ = v21;
  }
  *v19 = *v22;
LABEL_11:
  *(_DWORD *)(v8 + 6788) = v10 - 2;
  v23 = *(_DWORD *)(v11 + 12 * (v10 - 3));
  v24 = (_DWORD *)(dword_536AC[3 * v23 + 2] + v13);
  if ( 0x1F9BCDu >> v23 << 31 )
  {
    v27 = (_DWORD *)(v11 + 12 * (v10 - 3) + 4);
    goto LABEL_15;
  }
  if ( 0x606432u >> v23 << 31 )
  {
    v25 = v11 + 12 * (v10 - 3);
    v26 = *(_DWORD *)(v25 + 4);
    v27 = (_DWORD *)(v25 + 8);
    *v24++ = v26;
LABEL_15:
    *v24 = *v27;
  }
  v28 = *v15;
  v29 = *(_DWORD *)(v8 + 6784);
  *(_DWORD *)(v8 + 6788) = v10 - 3;
  v30 = (_QWORD *)(v29 + 20 * v28);
  v31 = *((_DWORD *)v30 - 5);
  v30 -= 2;
  v32 = *v30;
  v33 = v30[1];
  v34 = (_QWORD *)(v8 + 16 * v31 + 5572);
  *v34 = v32;
  v34[1] = v33;
  --*v15;
  return v9;
}


// ======================================================================
// ADDR: 0x96284
// SYMBOL: sub_96284
// attributes: thunk
int sub_96284()
{
  return sub_959E0();
}


// ======================================================================
// ADDR: 0x973c4
// SYMBOL: sub_973C4
int __fastcall sub_973C4(int a1)
{
  int v1; // r4
  int v2; // r0
  int v3; // r1
  int v4; // r6
  float v5; // s0
  int v6; // r2
  float v7; // s0
  int v8; // r1
  int v9; // r5
  __int64 v10; // kr08_8
  int v11; // r5
  int v12; // r2
  int (__fastcall *v13)(int, int); // r12
  int v14; // r1
  void *v15; // r0
  const void *v16; // r1
  void *v17; // r8
  int v18; // r1
  int v19; // r0
  bool v20; // zf
  int v21; // r0
  int v22; // r1
  int v24; // [sp+4h] [bp-1Ch]

  v1 = a1;
  v24 = a1;
  v2 = dword_1ACF68;
  v3 = dword_1ACF68 + 6340;
  v4 = dword_1ACF68 + 6352;
  if ( !v24 )
  {
    v1 = *(_DWORD *)(dword_1ACF68 + 160);
    if ( !v1 )
      v1 = **(_DWORD **)(*(_DWORD *)(dword_1ACF68 + 148) + 60);
    v24 = v1;
  }
  v5 = (float)(*(float *)(dword_1ACF68 + 152) * *(float *)(v1 + 16)) * *(float *)(v1 + 68);
  if ( v5 <= 1.0 )
    v5 = 1.0;
  v6 = *(_DWORD *)(dword_1ACF68 + 6572);
  *(_DWORD *)v3 = v1;
  *(float *)(v3 + 8) = v5;
  if ( v6 )
    v7 = v5 * *(float *)(v6 + 628);
  else
    v7 = 0.0;
  *(float *)(v3 + 4) = v7;
  v9 = *(_DWORD *)(v4 + 452);
  v8 = *(_DWORD *)(v4 + 448);
  v10 = *(_QWORD *)(*(_DWORD *)(v1 + 56) + 44);
  *(float *)(v4 + 12) = v7;
  *(_QWORD *)v4 = v10;
  *(_DWORD *)(v4 + 8) = v1;
  if ( v8 == v9 )
  {
    v11 = v8 + 1;
    if ( v8 )
      v12 = v8 + v8 / 2;
    else
      v12 = 8;
    if ( v12 > v11 )
      v11 = v12;
    if ( v8 < v11 )
    {
      v13 = off_117248;
      v14 = dword_1ACF70;
      ++*(_DWORD *)(v2 + 880);
      v15 = (void *)v13(4 * v11, v14);
      v16 = *(const void **)(v4 + 456);
      v17 = v15;
      if ( v16 )
      {
        j_memcpy(v15, v16, 4 * *(_DWORD *)(v4 + 448));
        v19 = *(_DWORD *)(v4 + 456);
        v20 = v19 == 0;
        if ( v19 )
        {
          v18 = dword_1ACF68;
          v20 = dword_1ACF68 == 0;
        }
        if ( !v20 )
          --*(_DWORD *)(v18 + 880);
        off_11724C(v19, dword_1ACF70);
      }
      v8 = *(_DWORD *)(v4 + 448);
      *(_DWORD *)(v4 + 452) = v11;
      *(_DWORD *)(v4 + 456) = v17;
    }
  }
  *(_DWORD *)(*(_DWORD *)(v4 + 456) + 4 * v8) = v24;
  v21 = *(_DWORD *)(*(_DWORD *)(v4 + 220) + 636);
  v22 = *(_DWORD *)(*(_DWORD *)(v1 + 56) + 8);
  ++*(_DWORD *)(v4 + 448);
  return sub_9C138(v21, v22);
}


// ======================================================================
// ADDR: 0x97518
// SYMBOL: sub_97518
int sub_97518()
{
  int v0; // r5
  int v1; // r0
  int v2; // r1
  int result; // r0
  float v4; // s0
  int v5; // r2
  int v6; // r3
  int v7; // r1
  float v8; // s0
  int v9; // r3
  __int64 v10; // r2

  v0 = dword_1ACF68;
  sub_9C1AA(*(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6572) + 636));
  v1 = *(_DWORD *)(v0 + 6800);
  *(_DWORD *)(v0 + 6800) = v1 - 1;
  if ( v1 == 1 )
  {
    v2 = dword_1ACF68;
    result = *(_DWORD *)(dword_1ACF68 + 160);
    if ( !result )
      result = **(_DWORD **)(*(_DWORD *)(dword_1ACF68 + 148) + 60);
  }
  else
  {
    v2 = dword_1ACF68;
    result = *(_DWORD *)(*(_DWORD *)(v0 + 6808) + 4 * v1 - 8);
  }
  v4 = (float)(*(float *)(v2 + 152) * *(float *)(result + 16)) * *(float *)(result + 68);
  if ( v4 <= 1.0 )
    v4 = 1.0;
  *(_DWORD *)(v2 + 6340) = result;
  v5 = v2 + 6340;
  v6 = *(_DWORD *)(v2 + 6572);
  v7 = v2 + 6352;
  *(float *)(v5 + 8) = v4;
  if ( v6 )
    v8 = v4 * *(float *)(v6 + 628);
  else
    v8 = 0.0;
  v9 = *(_DWORD *)(result + 56);
  *(float *)(v5 + 4) = v8;
  v10 = *(_QWORD *)(v9 + 44);
  *(float *)(v7 + 12) = v8;
  *(_QWORD *)v7 = v10;
  *(_DWORD *)(v7 + 8) = result;
  return result;
}


// ======================================================================
// ADDR: 0x975d4
// SYMBOL: sub_975D4
int __fastcall sub_975D4(int result, int a2)
{
  *(_DWORD *)(result + 84) = a2;
  return result;
}


// ======================================================================
// ADDR: 0x97904
// SYMBOL: sub_97904
int sub_97904()
{
  return *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6572) + 92);
}


// ======================================================================
// ADDR: 0x97dc8
// SYMBOL: sub_97DC8
int sub_97DC8()
{
  int v0; // r2
  int v1; // r9
  int v2; // r5
  unsigned __int8 *v3; // r10
  __int64 v4; // kr00_8
  int v5; // r11
  int v6; // r1
  int (__fastcall *v7)(int, int); // r12
  int v8; // r1
  void *v9; // r0
  const void *v10; // r1
  int v11; // r1
  int v12; // r0
  bool v13; // zf
  int v14; // r4
  __int64 v15; // r2
  int v16; // r0
  float v17; // s4
  float v18; // s0
  int v19; // r1
  __int64 v20; // r0
  float v21; // s0
  int result; // r0
  void *v23; // [sp+4h] [bp-24h]

  v0 = dword_1ACF68;
  v1 = dword_1ACF68 + 6572;
  v2 = *(_DWORD *)(dword_1ACF68 + 6572);
  v3 = (unsigned __int8 *)(dword_1ACF68 + 11552);
  v4 = *(_QWORD *)(v2 + 412);
  v5 = v4 + 1;
  *(_BYTE *)(v2 + 124) = 1;
  if ( SHIDWORD(v4) <= (int)v4 )
  {
    if ( HIDWORD(v4) )
      v6 = HIDWORD(v4) + SHIDWORD(v4) / 2;
    else
      v6 = 8;
    if ( v6 > v5 )
      v5 = v6;
    if ( SHIDWORD(v4) < v5 )
    {
      v7 = off_117248;
      v8 = dword_1ACF70;
      ++*(_DWORD *)(v0 + 880);
      v9 = (void *)v7(44 * v5, v8);
      v10 = *(const void **)(v2 + 420);
      if ( v10 )
      {
        v23 = v9;
        j_memcpy(v9, v10, 44 * *(_DWORD *)(v2 + 412));
        v12 = *(_DWORD *)(v2 + 420);
        v13 = v12 == 0;
        if ( v12 )
        {
          v11 = dword_1ACF68;
          v13 = dword_1ACF68 == 0;
        }
        if ( !v13 )
          --*(_DWORD *)(v11 + 880);
        off_11724C(v12, dword_1ACF70);
        v9 = v23;
      }
      *(_DWORD *)(v2 + 416) = v5;
      *(_DWORD *)(v2 + 420) = v9;
    }
  }
  v14 = *(_DWORD *)(v2 + 420);
  v15 = *(_QWORD *)(v2 + 200);
  *(_DWORD *)(v2 + 412) = v4 + 1;
  v16 = v14 + 44 * v4;
  *(_QWORD *)v16 = v15;
  *(_QWORD *)(v16 + 8) = *(_QWORD *)(v2 + 224);
  *(_DWORD *)(v16 + 16) = *(_DWORD *)(v2 + 436);
  *(_DWORD *)(v16 + 20) = *(_DWORD *)(v2 + 440);
  *(_QWORD *)(v16 + 24) = *(_QWORD *)(v2 + 232);
  v17 = *(float *)(v2 + 444);
  v18 = *(float *)(v2 + 200) - *(float *)(v2 + 12);
  v19 = *(_DWORD *)(v1 + 40);
  LODWORD(v15) = *(_DWORD *)(v2 + 248);
  *(_BYTE *)(v16 + 40) = *(_BYTE *)(v1 + 84);
  *(_DWORD *)(v16 + 32) = v15;
  *(_DWORD *)(v16 + 36) = v19;
  *(_BYTE *)(v16 + 41) = 1;
  v20 = *(_QWORD *)(v2 + 200);
  v21 = v18 - v17;
  *(_DWORD *)(v2 + 236) = 0;
  *(_QWORD *)(v2 + 224) = v20;
  *(_DWORD *)(v2 + 232) = 0;
  result = *v3;
  *(float *)(v2 + 436) = v21;
  *(float *)(v2 + 440) = v21;
  if ( result )
  {
    result = -8388609;
    *((_DWORD *)v3 + 6) = -8388609;
  }
  return result;
}


// ======================================================================
// ADDR: 0x97f20
// SYMBOL: sub_97F20
int sub_97F20()
{
  int v0; // r0
  int v1; // r4
  int v2; // r9
  int v3; // r10
  float v4; // s0
  int v5; // r2
  float v6; // s2
  float v7; // s8
  float v8; // s18
  float v9; // s16
  float v10; // s22
  float v11; // s20
  float v12; // s4
  int v13; // r1
  float v14; // s0
  int v15; // r8
  __int64 v16; // r0
  int v17; // r1
  int v18; // r0
  float *v19; // r2
  float v20; // s0
  float v21; // s2
  float v22; // s6
  float v23; // s4
  float *v24; // r2
  float v25; // s10
  float v26; // s6
  int v27; // r1
  int v28; // r0
  int v29; // r0
  int v30; // r3
  int *v31; // r2
  int v32; // r1
  float v34[17]; // [sp+4h] [bp-44h] BYREF

  v0 = dword_1ACF68;
  v1 = *(_DWORD *)(dword_1ACF68 + 6572);
  v2 = *(_DWORD *)(v1 + 420);
  v3 = *(_DWORD *)(v1 + 412) - 1;
  *(_BYTE *)(v1 + 124) = 1;
  v4 = *(float *)(v1 + 224);
  v5 = v2 + 44 * v3;
  v6 = *(float *)(v1 + 228);
  v7 = v4;
  v8 = *(float *)v5;
  v9 = *(float *)(v5 + 4);
  v10 = *(float *)v5;
  v11 = v9;
  *(_DWORD *)(v1 + 200) = *(_DWORD *)v5;
  *(float *)(v1 + 204) = v9;
  if ( *(float *)(v5 + 8) >= v4 )
    v7 = *(float *)(v5 + 8);
  v12 = v6;
  if ( *(float *)(v5 + 12) >= v6 )
    v12 = *(float *)(v5 + 12);
  *(float *)(v1 + 224) = v7;
  *(float *)(v1 + 228) = v12;
  *(_DWORD *)(v1 + 436) = *(_DWORD *)(v5 + 16);
  if ( v6 >= v9 )
    v11 = v6;
  *(_DWORD *)(v1 + 440) = *(_DWORD *)(v5 + 20);
  if ( v4 >= v8 )
    v10 = v4;
  *(_QWORD *)(v1 + 232) = *(_QWORD *)(v5 + 24);
  v13 = *(unsigned __int8 *)(v0 + 11552);
  v14 = *(float *)(v5 + 32);
  *(float *)(v1 + 248) = v14;
  if ( v13 )
    *(_DWORD *)(v0 + 11576) = -8388609;
  if ( *(_BYTE *)(v5 + 41) )
  {
    v15 = v0 + 6572;
    LODWORD(v16) = v34;
    HIDWORD(v16) = 0;
    if ( *(float *)(v1 + 252) >= v14 )
      v14 = *(float *)(v1 + 252);
    *(float *)(v1 + 248) = v14;
    v34[0] = v10 - v8;
    v34[1] = v11 - v9;
    sub_8B104(v16);
    v17 = dword_1ACF68;
    v18 = *(_DWORD *)(dword_1ACF68 + 6572);
    *(float *)(v18 + 272) = v8;
    *(float *)(v18 + 276) = v9;
    *(float *)(v18 + 280) = v10;
    *(float *)(v18 + 284) = v11;
    v19 = *(float **)(v17 + 6572);
    *(_DWORD *)(v17 + 6760) = 0;
    *(_DWORD *)(v18 + 264) = 0;
    *(_DWORD *)(v18 + 268) = 0;
    v20 = v19[133];
    if ( v20 >= v11 || (v21 = v19[135], v21 <= v9) || (v22 = v19[132], v22 >= v10) || (v23 = v19[134], v23 <= v8) )
    {
      if ( !*(_BYTE *)(v17 + 11552) )
        goto LABEL_30;
      v22 = v19[132];
      v23 = v19[134];
    }
    v24 = (float *)(v17 + 5488);
    if ( v8 >= v22 )
      v22 = v8;
    v25 = v22 - *v24;
    v26 = *(float *)(v17 + 224);
    if ( v26 >= v25 )
    {
      if ( v9 >= v20 )
        v20 = v9;
      if ( v10 < v23 )
        v23 = v10;
      if ( *(float *)(v17 + 228) >= (float)(v20 - *(float *)(v17 + 5492)) && v26 < (float)(v23 + *v24) )
        *(_DWORD *)(v18 + 268) = 1;
    }
LABEL_30:
    v27 = *(_DWORD *)(v15 + 36);
    v28 = v2 + 44 * v3;
    if ( *(_DWORD *)(v28 + 36) == v27 )
    {
      if ( *(_BYTE *)(v28 + 40) || !*(_BYTE *)(v15 + 84) )
        goto LABEL_32;
LABEL_47:
      *(_DWORD *)(v1 + 264) = *(_DWORD *)(v15 + 80);
      v29 = 1;
      goto LABEL_48;
    }
    v30 = *(_DWORD *)(v15 + 36);
    if ( v27 )
      LOBYTE(v30) = 1;
    if ( *(_BYTE *)(v28 + 40) )
    {
      v29 = 0;
      if ( ((*(_DWORD *)(v15 + 40) == v27) & (unsigned __int8)v30) == 0 )
      {
LABEL_48:
        v32 = *(_DWORD *)(v1 + 268);
        *(float *)(v1 + 272) = v8;
        *(float *)(v1 + 276) = v9;
        *(float *)(v1 + 280) = v10;
        *(float *)(v1 + 284) = v11;
        *(_DWORD *)(v1 + 268) = v32 | 0x10;
        if ( v29 )
        {
          v31 = (int *)(v1 + 268);
          goto LABEL_50;
        }
        goto LABEL_52;
      }
    }
    else
    {
      v29 = *(unsigned __int8 *)(v15 + 84);
      if ( *(_BYTE *)(v15 + 84) )
        v29 = 1;
      if ( ((*(_DWORD *)(v15 + 40) == v27) & (unsigned __int8)v30) == 0 )
      {
        if ( !*(_BYTE *)(v15 + 84) )
        {
LABEL_32:
          v29 = 0;
          goto LABEL_48;
        }
        goto LABEL_47;
      }
    }
    *(float *)(v1 + 272) = v8;
    v31 = (int *)(v1 + 268);
    *(float *)(v1 + 276) = v9;
    *(float *)(v1 + 280) = v10;
    *(float *)(v1 + 284) = v11;
    *(_DWORD *)(v1 + 264) = v27;
    v32 = *(_DWORD *)(v1 + 268);
    if ( *(_BYTE *)(v15 + 52) )
    {
      *v31 = v32 | 0x14;
      if ( v29 )
      {
        v32 |= 4u;
        goto LABEL_50;
      }
    }
    else
    {
      *v31 = v32 | 0x10;
      if ( v29 )
      {
LABEL_50:
        if ( *(_DWORD *)(v15 + 36) != *(_DWORD *)(v15 + 80) )
          *v31 = v32 | 0x30;
      }
    }
LABEL_52:
    v3 = *(_DWORD *)(v1 + 412) - 1;
  }
  *(_DWORD *)(v1 + 412) = v3;
  return LODWORD(v34[2]);
}


// ======================================================================
// ADDR: 0xa37cc
// SYMBOL: sub_A37CC
int __fastcall sub_A37CC(int a1, int a2)
{
  int result; // r0
  int v3; // r2
  __int64 v4; // kr00_8
  int v5; // r1

  if ( *(_DWORD *)(a1 + 20) <= a2 )
    return *(_DWORD *)(a1 + 44);
  v3 = *(_DWORD *)(a1 + 28);
  v4 = *(_QWORD *)(a1 + 40);
  result = *(_DWORD *)(a1 + 44);
  v5 = *(unsigned __int16 *)(v3 + 2 * a2);
  if ( v5 != 0xFFFF )
    return v4 + 40 * v5;
  return result;
}


// ======================================================================
// ADDR: 0xad8d4
// SYMBOL: sub_AD8D4
int __fastcall sub_AD8D4(int a1, int a2)
{
  int *v3; // r8
  _BYTE *v4; // r12
  int *v5; // r6
  int *v6; // r11
  int *v7; // r10
  int v8; // r0
  int v9; // r5
  int v10; // r9
  int v11; // r6
  _BYTE *v12; // r8
  _WORD *v13; // r0
  int v14; // r1
  _WORD *v15; // r5
  int v16; // r0
  __int64 v17; // kr00_8
  int v18; // r1
  int v19; // r0
  unsigned __int16 *v20; // r1
  int v21; // t1
  int v22; // r5
  int v23; // r0
  int v24; // r6
  _BYTE *v25; // r8
  _WORD *v26; // r0
  int v27; // r1
  _WORD *v28; // r6
  int v29; // r0
  int v30; // r2
  __int64 v31; // kr08_8
  int v32; // r1
  unsigned __int16 *v33; // r0
  int v34; // t1
  _BYTE *v35; // r5
  int v36; // r1
  int v37; // r2
  int v38; // r0
  int v39; // r1
  int v40; // r3
  int v41; // r2
  int v42; // r0
  int v43; // r1
  int v44; // r2
  int v45; // r0
  int v46; // r2
  int v47; // r3
  int v48; // r1
  int *v49; // r5
  int v50; // r2
  int v51; // r3
  int v52; // r6
  int v53; // r1
  int *v54; // r5
  int v55; // r2
  int v56; // r6
  int v57; // r3
  int v58; // r1
  int v59; // r0
  int *v60; // r0
  int v61; // r6
  int *v62; // r10
  int v63; // r5
  bool v64; // zf
  int v65; // r0
  int v66; // r9
  int *v67; // r0
  int v68; // r6
  int *v69; // r10
  int v70; // r9
  int v71; // r5
  int v72; // r8
  int v73; // r1
  int v74; // r0
  int v75; // r2
  int v76; // r1
  int v77; // r1
  int v78; // r0
  int *v79; // r5
  int v80; // r2
  int v81; // r1
  int v82; // r6
  int v83; // r3
  int *v84; // r5
  int v85; // r6
  int v86; // r2
  int v87; // r3
  int v88; // r1
  int v89; // r3
  int v90; // r0
  int v91; // r2
  int v92; // r5
  int v93; // r10
  __int64 v94; // kr18_8
  _DWORD *v95; // r0
  _DWORD *v96; // r0
  int v97; // r1
  _BYTE *v98; // r11
  int v99; // r0
  int v100; // r3
  _DWORD *v101; // r0
  int v102; // r3
  int v103; // r8
  __int64 v104; // r10
  int v105; // r9
  _DWORD *v106; // r1
  _DWORD *v107; // r6
  _DWORD *v108; // r3
  int v109; // lr
  int v110; // r2
  int v111; // r6
  int v112; // r0
  int v113; // r5
  int v114; // r1
  int v115; // r2
  int v116; // r6
  int v117; // r5
  int v118; // r8
  _BYTE *v119; // r9
  int v120; // r6
  _WORD *v121; // r0
  int v122; // r5
  _WORD *v123; // r6
  int v124; // r0
  __int64 v125; // kr28_8
  int v126; // r1
  int v127; // r0
  unsigned __int16 *v128; // r1
  int v129; // t1
  int v130; // r1
  int v131; // r0
  int v132; // r1
  int *v133; // r2
  int v134; // r2
  int v135; // r0
  int v136; // r3
  float *v137; // r6
  int v138; // r0
  int v139; // r9
  int v140; // r2
  int v141; // lr
  int v142; // r12
  float v143; // s0
  int v144; // r1
  float v145; // s2
  float v146; // s2
  unsigned __int16 *v147; // r1
  float v148; // s0
  int v149; // t1
  unsigned int v150; // r6
  float v151; // s4
  int v152; // r1
  int v153; // r6
  float *v154; // r3
  float v155; // s8
  int v156; // r6
  int v157; // r2
  int v158; // r1
  int v159; // r0
  int v160; // r2
  int v161; // r0
  int v162; // r0
  int v163; // r0
  int v164; // r1
  int v166; // r0
  int v167; // r1
  int v168; // r1
  int v169; // r0
  int *v170; // r10
  float *v171; // r6
  int v172; // r12
  int v173; // r5
  int v174; // r2
  int v175; // r3
  float v176; // s0
  float v177; // s2
  int v178; // r0
  float v179; // s2
  char *v180; // lr
  char *v181; // r5
  float v182; // s0
  int v183; // t1
  unsigned int v184; // r1
  int v185; // r5
  int v186; // lr
  float v187; // s4
  int *v188; // r6
  int v189; // r1
  float *v190; // r6
  float v191; // s8
  int v192; // r1
  int v193; // r1
  int v194; // r0
  __int16 v195; // r2
  int v196; // r3
  _BYTE *v197; // r5
  int v198; // r6
  int v199; // r1
  int *v200; // r0
  bool v201; // cf
  int v202; // r3
  int v203; // r2
  int *v204; // r1
  int v205; // r1
  __int64 *v206; // r3
  _QWORD *v207; // r6
  int v208; // r12
  int v209; // r3
  __int16 *v210; // r1
  _WORD *v211; // r0
  __int16 v212; // t1
  _WORD *v213; // r6
  int v214; // r0
  int v215; // r2
  __int64 v216; // kr30_8
  int v217; // r1
  unsigned __int16 *v218; // r0
  int v219; // t1
  _BYTE *v220; // r5
  __int16 v221; // r0
  __int16 v222; // r1
  __int16 v223; // r0
  int v224; // r12
  int v225; // r1
  __int64 *v226; // r2
  unsigned int v227; // r1
  unsigned int v228; // r2
  __int16 *v229; // r1
  int v230; // r0
  __int16 v231; // t1
  _WORD *v232; // r6
  int v233; // r0
  int v234; // r2
  __int64 v235; // kr38_8
  int v236; // r1
  unsigned __int16 *v237; // r0
  int v238; // t1
  int v239; // r2
  _BYTE *v240; // r5
  __int16 v241; // r0
  __int16 v242; // r1
  unsigned int v244; // r2
  __int64 v245; // d16
  __int64 v246; // d17
  _QWORD *v247; // r6
  unsigned int v248; // r3
  __int64 v249; // d16
  __int64 v250; // d17
  int v251; // [sp+4h] [bp-44h]
  int *v252; // [sp+8h] [bp-40h]
  int *v253; // [sp+Ch] [bp-3Ch]
  int *v254; // [sp+Ch] [bp-3Ch]
  int *v255; // [sp+Ch] [bp-3Ch]
  int v256; // [sp+Ch] [bp-3Ch]
  _BYTE *v257; // [sp+Ch] [bp-3Ch]
  _WORD v258[6]; // [sp+10h] [bp-38h] BYREF
  int v259; // [sp+1Ch] [bp-2Ch]
  int v260; // [sp+20h] [bp-28h]
  int v261; // [sp+24h] [bp-24h]
  int v262; // [sp+28h] [bp-20h]

  v3 = (int *)(a1 + 4);
  v4 = (_BYTE *)(a1 + 75);
  v5 = (int *)(a1 + 68);
  v6 = (int *)(a1 + 64);
  v7 = (int *)(a1 + 60);
  v8 = *(unsigned __int8 *)(a1 + 76);
  while ( 2 )
  {
    switch ( a2 )
    {
      case 65536:
        v73 = *v5;
        v74 = *v6;
        if ( *v6 != *v5 )
          goto LABEL_152;
        if ( *v7 >= 1 )
          --*v7;
        goto LABEL_403;
      case 65537:
        v75 = *v5;
        v76 = *v6;
        if ( *v6 == *v5 )
        {
          v77 = *v3;
          v78 = *v7 + 1;
        }
        else
        {
          if ( v75 >= v76 )
          {
            v78 = *v5;
            v75 = *v6;
          }
          else
          {
            v78 = *v6;
            *v5 = v76;
          }
          v77 = *v3;
          if ( v75 != v78 && v78 > v77 )
          {
            *v5 = v77;
            v78 = v77;
          }
          *v6 = v78;
        }
        *v7 = v78;
        if ( v78 > v77 )
          *v7 = v77;
        goto LABEL_403;
      case 65538:
LABEL_4:
        v9 = a2 & 0x20000;
        if ( !v8 )
        {
          v36 = *v5;
          v37 = *v6;
          if ( v9 )
          {
            if ( v37 == v36 )
            {
              v37 = *v7;
              *v5 = *v7;
              *v6 = v37;
              v38 = *v3;
            }
            else
            {
              v38 = *v3;
              v136 = *v5;
              *v7 = v36;
              if ( v37 > v38 )
              {
                *v6 = v38;
                v37 = v38;
              }
              if ( v36 > v38 )
              {
                *v5 = v38;
                v136 = v38;
              }
              if ( v37 == v136 )
                *v7 = v37;
              else
                v37 = v36;
            }
          }
          else if ( v37 == v36 )
          {
            v37 = *v7;
            v38 = *v3;
          }
          else
          {
            if ( v36 < v37 )
            {
              *v6 = v36;
              v37 = v36;
            }
            *v5 = v37;
            *v4 = 0;
            *v7 = v37;
            v38 = *v3;
          }
          v252 = v5;
          v137 = (float *)v258;
          if ( v37 > v38 )
          {
            *v7 = v38;
            v37 = v38;
          }
          sub_AED88(v258, a1, v37, 0);
          v138 = v261;
          if ( v261 != v259 )
          {
            v139 = *(_DWORD *)(a1 + 20);
            v140 = *(_DWORD *)(a1 + 4);
            v141 = v139 + 2 * v261;
            v142 = *(_DWORD *)(dword_1ACF68 + 6340);
            v143 = *(float *)(dword_1ACF68 + 6344);
            v144 = *(unsigned __int8 *)(a1 + 75);
            v145 = *(float *)(v142 + 16);
            *(_DWORD *)(a1 + 60) = v261;
            v146 = v143 / v145;
            if ( v144 )
              v137 = (float *)(a1 + 80);
            v147 = (unsigned __int16 *)(v139 + 2 * v138);
            v148 = *v137;
            v251 = v140;
            do
            {
              if ( (unsigned int)v147 >= v139 + 2 * v140 )
                break;
              v149 = *v147++;
            }
            while ( v149 != 10 );
            v150 = (unsigned int)v147 - v141;
            if ( (int)v147 - v141 >= 1 )
            {
              v151 = 0.0;
              v152 = 1;
              if ( v150 >> 1 > 1 )
                v152 = v150 >> 1;
              do
              {
                v153 = *(unsigned __int16 *)(v139 + 2 * v138);
                if ( v153 == 10 )
                  break;
                v154 = (float *)(v142 + 12);
                if ( *(_DWORD *)v142 > v153 )
                  v154 = (float *)(*(_DWORD *)(v142 + 8) + 4 * v153);
                v155 = v146 * *v154;
                if ( v155 == -1.0 )
                  break;
                v151 = v151 + v155;
                if ( v151 > v148 )
                  break;
                ++v138;
                --v152;
                *v7 = v138;
              }
              while ( v152 );
            }
            v156 = *v6;
            v157 = *v252;
            if ( *v6 == *v252 )
            {
              v158 = v251;
            }
            else
            {
              v158 = v251;
              if ( v156 > v251 )
              {
                *v6 = v251;
                v156 = v251;
              }
              if ( v157 > v251 )
              {
                *v252 = v251;
                v157 = v251;
              }
              if ( v156 == v157 )
              {
                *v7 = v156;
                v138 = v156;
              }
            }
            if ( v138 > v158 )
            {
              *v7 = v158;
              v138 = v158;
            }
            *(float *)(a1 + 80) = v148;
            *(_BYTE *)(a1 + 75) = 1;
            if ( v9 )
              *v252 = v138;
          }
          goto LABEL_404;
        }
        a2 = v9 | 0x10000;
        continue;
      case 65539:
LABEL_6:
        v10 = a2 & 0x20000;
        if ( v8 )
        {
          a2 = v10 | 0x10001;
          continue;
        }
        v39 = *v5;
        v40 = *v6;
        v253 = v7;
        if ( v10 )
        {
          if ( v40 == v39 )
          {
            v41 = *v7;
            *v5 = *v7;
            *v6 = v41;
            goto LABEL_312;
          }
          v159 = *v3;
          v160 = *v5;
          *v7 = v39;
          if ( v40 > v159 )
          {
            *v6 = v159;
            v40 = v159;
          }
          if ( v39 > v159 )
          {
            *v5 = v159;
            v160 = v159;
          }
          if ( v40 == v160 )
          {
            *v7 = v40;
            v41 = v40;
          }
          else
          {
            v41 = v39;
          }
        }
        else
        {
          if ( v40 == v39 )
          {
            v41 = *v7;
          }
          else
          {
            if ( v39 >= v40 )
            {
              v41 = *v5;
              v39 = *v6;
            }
            else
            {
              v41 = *v6;
              *v5 = v40;
            }
            if ( v39 != v41 )
            {
              v169 = *v3;
              if ( v41 > *v3 )
              {
                *v5 = v169;
                v41 = v169;
              }
            }
            *v6 = v41;
            *v4 = 0;
            *v7 = v41;
          }
LABEL_312:
          v159 = *v3;
        }
        v170 = v5;
        v171 = (float *)v258;
        if ( v41 > v159 )
        {
          *v253 = v159;
          v41 = v159;
        }
        sub_AED88(v258, a1, v41, 0);
        if ( v260 )
        {
          v172 = *(_DWORD *)(a1 + 20);
          v173 = *(unsigned __int8 *)(a1 + 75);
          v174 = *(_DWORD *)(dword_1ACF68 + 6340);
          v175 = *(_DWORD *)(a1 + 4);
          v176 = *(float *)(dword_1ACF68 + 6344);
          v177 = *(float *)(v174 + 16);
          v178 = v260 + v259;
          *(_DWORD *)(a1 + 60) = v260 + v259;
          v179 = v176 / v177;
          if ( v173 )
            v171 = (float *)(a1 + 80);
          v180 = (char *)(v172 + 2 * v178);
          v181 = v180;
          v182 = *v171;
          do
          {
            if ( (unsigned int)v181 >= v172 + 2 * v175 )
              break;
            v183 = *(unsigned __int16 *)v181;
            v181 += 2;
          }
          while ( v183 != 10 );
          v184 = v181 - v180;
          if ( v181 - v180 < 1 )
          {
            v188 = v170;
            v186 = v175;
          }
          else
          {
            v185 = 1;
            if ( v184 >> 1 > 1 )
              v185 = v184 >> 1;
            v186 = v175;
            v187 = 0.0;
            v188 = v170;
            while ( 1 )
            {
              v189 = *(unsigned __int16 *)(v172 + 2 * v178);
              if ( v189 == 10 )
                break;
              v190 = (float *)(v174 + 12);
              if ( *(_DWORD *)v174 > v189 )
                v190 = (float *)(*(_DWORD *)(v174 + 8) + 4 * v189);
              v191 = v179 * *v190;
              if ( v191 == -1.0 )
              {
                v188 = v170;
                break;
              }
              v187 = v187 + v191;
              v188 = v170;
              if ( v187 <= v182 )
              {
                ++v178;
                --v185;
                *v253 = v178;
                if ( v185 )
                  continue;
              }
              break;
            }
          }
          v202 = *v188;
          v203 = *v6;
          if ( *v6 == *v188 )
          {
            v204 = v253;
          }
          else
          {
            v204 = v253;
            if ( v203 > v186 )
            {
              *v6 = v186;
              v203 = v186;
            }
            if ( v202 > v186 )
            {
              *v188 = v186;
              v202 = v186;
            }
            if ( v203 == v202 )
            {
              *v253 = v203;
              v178 = v203;
            }
          }
          if ( v178 > v186 )
          {
            *v204 = v186;
            v178 = v186;
          }
          *(float *)(a1 + 80) = v182;
          *(_BYTE *)(a1 + 75) = 1;
          if ( v10 )
            *v188 = v178;
        }
LABEL_404:
        *(_DWORD *)(a1 + 3680) = -1097229926;
        *(_BYTE *)(a1 + 3684) = 1;
        return v262;
      case 65540:
        v79 = v5;
        v80 = *v5;
        v81 = *v6;
        v82 = *v3;
        if ( *v6 == v80 )
          goto LABEL_104;
        if ( v81 > v82 )
        {
          *v6 = v82;
          v81 = v82;
        }
        if ( v80 > v82 )
        {
          *v79 = v82;
          v80 = v82;
        }
        if ( v81 == v80 )
        {
          *v7 = v81;
LABEL_104:
          v80 = v81;
        }
        v83 = *v7;
        if ( *v7 > v82 )
        {
          *v7 = v82;
          v83 = v82;
        }
        if ( v81 != v80 )
        {
          if ( v80 < v81 )
          {
            *v6 = v80;
            v81 = v80;
          }
          v83 = v81;
          *v79 = v81;
          *v7 = v81;
        }
        if ( v8 )
        {
          *v7 = 0;
        }
        else if ( v83 >= 1 )
        {
          v163 = *(_DWORD *)(a1 + 20);
          v164 = v83 - 1;
          do
          {
            if ( *(_WORD *)(v163 + 2 * v164) == 10 )
              break;
            *v7 = v164;
          }
          while ( (unsigned int)(v164-- + 1) > 1 );
        }
        goto LABEL_403;
      case 65541:
        v84 = v5;
        v85 = *v5;
        v86 = *v6;
        v87 = *v3;
        if ( *v6 == v85 )
          goto LABEL_120;
        if ( v86 > v87 )
        {
          *v6 = v87;
          v86 = v87;
        }
        if ( v85 > v87 )
        {
          *v84 = v87;
          v85 = v87;
        }
        if ( v86 == v85 )
        {
          *v7 = v86;
LABEL_120:
          v85 = v86;
        }
        v88 = *v7;
        if ( *v7 > v87 )
        {
          *v7 = v87;
          v88 = v87;
        }
        if ( v86 != v85 )
        {
          if ( v85 < v86 )
          {
            *v6 = v85;
            v86 = v85;
          }
          v88 = v86;
          *v84 = v86;
          *v7 = v86;
        }
        if ( v8 )
        {
          *v7 = v87;
        }
        else if ( v88 < v87 )
        {
          v166 = *(_DWORD *)(a1 + 20);
          do
          {
            if ( *(_WORD *)(v166 + 2 * v88) == 10 )
              break;
            *v7 = ++v88;
          }
          while ( v87 != v88 );
        }
        goto LABEL_403;
      case 65542:
        *v6 = 0;
        *v5 = 0;
        *v7 = 0;
        goto LABEL_403;
      case 65543:
        *v5 = 0;
        *v6 = 0;
        *v4 = 0;
        *v7 = *v3;
        goto LABEL_404;
      case 65544:
LABEL_8:
        if ( *v6 != *v5 )
          goto LABEL_26;
        v11 = *v7;
        if ( *v7 < *v3 )
        {
          v12 = v4;
          v13 = (_WORD *)sub_AEFE0((void *)(a1 + 84));
          v14 = *(_DWORD *)(a1 + 20);
          if ( v13 )
            *v13 = *(_WORD *)(v14 + 2 * v11);
          v15 = (_WORD *)(v14 + 2 * v11);
          v16 = sub_889DE((unsigned int)v15, (unsigned int)(v15 + 1));
          v17 = *(_QWORD *)(a1 + 4);
          v18 = *(_DWORD *)(a1 + 20) + 2 * v11;
          *(_DWORD *)(a1 + 8) = HIDWORD(v17) - v16;
          v19 = *(unsigned __int16 *)(v18 + 2);
          *(_DWORD *)(a1 + 4) = v17 - 1;
          if ( v19 )
          {
            v20 = (unsigned __int16 *)(v18 + 4);
            v4 = v12;
            do
            {
              *v15++ = v19;
              v21 = *v20++;
              LOWORD(v19) = v21;
            }
            while ( v21 );
          }
          else
          {
            v4 = v12;
          }
          *v15 = 0;
        }
        goto LABEL_403;
      case 65545:
LABEL_16:
        if ( *v6 == *v5 )
        {
          v22 = *v7;
          v23 = *v3;
          if ( *v7 > *v3 )
          {
            *v7 = v23;
            v22 = v23;
          }
          if ( v22 >= 1 )
          {
            v24 = v22 - 1;
            v25 = v4;
            v26 = (_WORD *)sub_AEFE0((void *)(a1 + 84));
            v27 = *(_DWORD *)(a1 + 20);
            if ( v26 )
              *v26 = *(_WORD *)(v27 + 2 * v24);
            v28 = (_WORD *)(v27 + 2 * v24);
            v29 = sub_889DE((unsigned int)v28, v27 + 2 * v22);
            v30 = *(_DWORD *)(a1 + 20);
            v31 = *(_QWORD *)(a1 + 4);
            v32 = *(unsigned __int16 *)(v30 + 2 * v22);
            *(_DWORD *)(a1 + 4) = v31 - 1;
            *(_DWORD *)(a1 + 8) = HIDWORD(v31) - v29;
            if ( v32 )
            {
              v4 = v25;
              v33 = (unsigned __int16 *)(v30 + 2 * v22 + 2);
              do
              {
                *v28++ = v32;
                v34 = *v33++;
                LOWORD(v32) = v34;
              }
              while ( v34 );
            }
            else
            {
              v4 = v25;
            }
            v192 = *v7;
            *v28 = 0;
            *v7 = v192 - 1;
          }
        }
        else
        {
LABEL_26:
          v35 = v4;
          sub_AEBCE(a1, v7);
          v4 = v35;
        }
        goto LABEL_403;
      case 65546:
        if ( !*(_WORD *)(a1 + 3666) )
          goto LABEL_403;
        v89 = *(__int16 *)(a1 + 3668);
        v90 = a1 + 84 + 16 * *(__int16 *)(a1 + 3666);
        v91 = v89 - 1;
        v92 = *(_DWORD *)(v90 - 4);
        v93 = *(_DWORD *)(v90 - 8);
        v94 = *(_QWORD *)(v90 - 16);
        *(_DWORD *)(a1 + 84 + 16 * (v89 - 1)) = v94;
        v95 = (_DWORD *)(a1 + 84 + 16 * (v89 - 1));
        v95[2] = HIDWORD(v94);
        v95[3] = -1;
        v95[1] = v93;
        v96 = v95 + 1;
        if ( !v93 )
          goto LABEL_399;
        v97 = *(_DWORD *)(a1 + 3672);
        v256 = v92;
        if ( v97 + v93 > 998 )
        {
          v98 = v4;
          *v96 = 0;
          goto LABEL_393;
        }
        v194 = *(_DWORD *)(a1 + 3676);
        if ( v97 + v93 > v194 )
        {
          v195 = v89;
          do
          {
            if ( v195 == 99 )
              goto LABEL_403;
            v196 = v195;
            if ( v195 <= 98 )
            {
              v197 = v4;
              if ( *(int *)(a1 + 1664) > -1 )
              {
                v198 = *(_DWORD *)(a1 + 1656);
                *(_DWORD *)(a1 + 3676) = v198 + v194;
                j_memmove(
                  (void *)(a1 + 1668 + 2 * (v198 + v194)),
                  (const void *)(a1 + 1668 + 2 * v194),
                  1998 - 2 * (v198 + v194));
                v196 = *(__int16 *)(a1 + 3668);
                if ( v196 <= 97 )
                {
                  v199 = v196 - 98;
                  v200 = (int *)(a1 + 96 + 16 * v196);
                  do
                  {
                    if ( *v200 >= 0 )
                      *v200 += v198;
                    v201 = __CFADD__(v199++, 1);
                    v200 += 4;
                  }
                  while ( !v201 );
                }
              }
              j_memmove((void *)(a1 + 16 * v196 + 100), (const void *)(a1 + 16 * v196 + 84), 1568 - 16 * v196);
              v4 = v197;
              v97 = *(_DWORD *)(a1 + 3672);
              v194 = *(_DWORD *)(a1 + 3676);
              v195 = *(_WORD *)(a1 + 3668) + 1;
              *(_WORD *)(a1 + 3668) = v195;
            }
          }
          while ( v97 + v93 > v194 );
          v91 = v195 - 1;
        }
        v98 = v4;
        *(_DWORD *)(a1 + 3676) = v194 - v93;
        *(_DWORD *)(a1 + 16 * v91 + 96) = v194 - v93;
        if ( v93 < 1 )
          goto LABEL_393;
        v224 = *(_DWORD *)(a1 + 20);
        if ( (unsigned int)v93 < 8
          || (v225 = 2 * v194 + 1668,
              v226 = (__int64 *)(v224 + 2 * v94),
              v225 - 2 * v93 + a1 < (unsigned int)(v224 + 2 * (v93 + v94)))
          && v225 + a1 > (unsigned int)v226 )
        {
          v227 = 0;
LABEL_390:
          v228 = v227 - v93;
          v229 = (__int16 *)(v224 + 2 * (v227 + v94));
          v230 = a1 + 2 * v194 + 1668;
          do
          {
            v231 = *v229++;
            *(_WORD *)(v230 + 2 * v228) = v231;
            v201 = __CFADD__(v228++, 1);
          }
          while ( !v201 );
          goto LABEL_393;
        }
        v247 = (_QWORD *)(2 * v194 - 2 * v93 + a1 + 1668);
        v227 = v93 & 0xFFFFFFF8;
        v248 = v93 & 0xFFFFFFF8;
        do
        {
          v249 = *v226;
          v250 = v226[1];
          v226 += 2;
          v248 -= 8;
          *v247 = v249;
          v247[1] = v250;
          v247 += 2;
        }
        while ( v248 );
        if ( v93 != v227 )
          goto LABEL_390;
LABEL_393:
        v232 = (_WORD *)(*(_DWORD *)(a1 + 20) + 2 * v94);
        v233 = sub_889DE((unsigned int)v232, (unsigned int)&v232[v93]);
        v234 = *(_DWORD *)(a1 + 20);
        v235 = *(_QWORD *)(a1 + 4);
        v236 = *(unsigned __int16 *)(v234 + 2 * v94 + 2 * v93);
        *(_DWORD *)(a1 + 4) = v235 - v93;
        *(_DWORD *)(a1 + 8) = HIDWORD(v235) - v233;
        if ( v236 )
        {
          v92 = v256;
          v4 = v98;
          v237 = (unsigned __int16 *)(v234 + 2 * (v93 + v94) + 2);
          do
          {
            *v232++ = v236;
            v238 = *v237++;
            LOWORD(v236) = v238;
          }
          while ( v238 );
        }
        else
        {
          v4 = v98;
          v92 = v256;
        }
        *v232 = 0;
LABEL_399:
        if ( HIDWORD(v94) )
        {
          v239 = a1 + 2 * v92 + 1668;
          v240 = v4;
          sub_AEADC(a1, v94, v239, HIDWORD(v94));
          v4 = v240;
          *(_DWORD *)(a1 + 3672) -= HIDWORD(v94);
        }
        v241 = *(_WORD *)(a1 + 3666);
        *(_DWORD *)(a1 + 60) = HIDWORD(v94) + v94;
        v242 = *(_WORD *)(a1 + 3668);
        *(_WORD *)(a1 + 3666) = v241 - 1;
        v223 = v242 - 1;
        goto LABEL_402;
      case 65547:
        v99 = *(__int16 *)(a1 + 3668);
        if ( v99 == 99 )
          goto LABEL_403;
        v100 = 16 * v99;
        v101 = (_DWORD *)(a1 + 84 + 16 * v99);
        LODWORD(v104) = *(_DWORD *)(a1 + 84 + v100);
        v102 = a1 + 84 + 16 * *(__int16 *)(a1 + 3666);
        HIDWORD(v104) = v101[2];
        v103 = v101[1];
        v105 = v101[3];
        *(_QWORD *)v102 = v104;
        v106 = (_DWORD *)(v102 + 4);
        *(_DWORD *)(v102 + 8) = v103;
        v107 = (_DWORD *)(v102 + 8);
        *(_DWORD *)(v102 + 12) = -1;
        v108 = (_DWORD *)(v102 + 12);
        if ( !HIDWORD(v104) )
          goto LABEL_381;
        v109 = *(_DWORD *)(a1 + 3672);
        v110 = v109 + HIDWORD(v104);
        v257 = v4;
        if ( v109 + HIDWORD(v104) > *(_DWORD *)(a1 + 3676) )
        {
          *v107 = 0;
          *v106 = 0;
          goto LABEL_375;
        }
        *(_DWORD *)(a1 + 3672) = v110;
        *v108 = v109;
        if ( SHIDWORD(v104) < 1 )
          goto LABEL_375;
        v205 = *(_DWORD *)(a1 + 20);
        if ( HIDWORD(v104) >= 8
          && ((v206 = (__int64 *)(v205 + 2 * v104),
               v207 = (_QWORD *)(a1 + 2 * v109 + 1668),
               (unsigned int)v207 >= v205 + 2 * (HIDWORD(v104) + (int)v104))
           || a1 + 2 * v110 + 1668 <= (unsigned int)v206) )
        {
          v208 = HIDWORD(v104) & 0x7FFFFFF8;
          v244 = HIDWORD(v104) & 0xFFFFFFF8;
          do
          {
            v245 = *v206;
            v246 = v206[1];
            v206 += 2;
            v244 -= 8;
            *v207 = v245;
            v207[1] = v246;
            v207 += 2;
          }
          while ( v244 );
          if ( HIDWORD(v104) == v208 )
          {
LABEL_375:
            v213 = (_WORD *)(*(_DWORD *)(a1 + 20) + 2 * v104);
            v214 = sub_889DE((unsigned int)v213, (unsigned int)&v213[HIDWORD(v104)]);
            v215 = *(_DWORD *)(a1 + 20);
            v216 = *(_QWORD *)(a1 + 4);
            v217 = *(unsigned __int16 *)(v215 + 2 * v104 + 2 * HIDWORD(v104));
            *(_DWORD *)(a1 + 4) = v216 - HIDWORD(v104);
            *(_DWORD *)(a1 + 8) = HIDWORD(v216) - v214;
            if ( v217 )
            {
              v4 = v257;
              v218 = (unsigned __int16 *)(v215 + 2 * (HIDWORD(v104) + v104) + 2);
              do
              {
                *v213++ = v217;
                v219 = *v218++;
                LOWORD(v217) = v219;
              }
              while ( v219 );
            }
            else
            {
              v4 = v257;
            }
            *v213 = 0;
LABEL_381:
            if ( v103 )
            {
              v220 = v4;
              sub_AEADC(a1, v104, a1 + 2 * v105 + 1668, v103);
              v4 = v220;
              *(_DWORD *)(a1 + 3676) += v103;
            }
            v221 = *(_WORD *)(a1 + 3666);
            *(_DWORD *)(a1 + 60) = v103 + v104;
            v222 = *(_WORD *)(a1 + 3668);
            *(_WORD *)(a1 + 3666) = v221 + 1;
            v223 = v222 + 1;
LABEL_402:
            *(_WORD *)(a1 + 3668) = v223;
LABEL_403:
            *v4 = 0;
            goto LABEL_404;
          }
        }
        else
        {
          v208 = 0;
        }
        v209 = HIDWORD(v104) - v208;
        v210 = (__int16 *)(v205 + 2 * (v208 + v104));
        v211 = (_WORD *)(a1 + 2 * (v208 + v109) + 1668);
        do
        {
          v212 = *v210++;
          --v209;
          *v211++ = v212;
        }
        while ( v209 );
        goto LABEL_375;
      case 65548:
        v73 = *v5;
        v74 = *v6;
        if ( *v6 != *v5 )
        {
LABEL_152:
          if ( v73 < v74 )
          {
            *v6 = v73;
            v74 = v73;
          }
          *v5 = v74;
          *v7 = v74;
          goto LABEL_403;
        }
        v111 = *v7;
        v112 = *v7;
        if ( *v7 >= 0 )
          v112 = 0;
        v113 = v112 - 1;
        while ( v111 >= 1 )
        {
          if ( sub_AF144(a1, --v111) )
            goto LABEL_287;
        }
        v111 = v113;
LABEL_287:
        v167 = v111 & ~(v111 >> 31);
        if ( v167 > *v3 )
          v167 = *v3;
        *v7 = v167;
        goto LABEL_404;
      case 65549:
        v114 = *v5;
        v115 = *v6;
        if ( *v6 == *v5 )
        {
          v116 = *v7;
          v117 = *v3;
          v118 = *v7 + 1;
          if ( v117 > v118 )
            v118 = v117;
          while ( ++v116 < v117 )
          {
            if ( sub_AF144(a1, v116) )
              goto LABEL_291;
          }
          v116 = v118;
LABEL_291:
          if ( v116 > v117 )
            v116 = v117;
          *v7 = v116;
          goto LABEL_404;
        }
        if ( v114 >= v115 )
        {
          v135 = *v5;
          v114 = *v6;
        }
        else
        {
          v135 = *v6;
          *v5 = v115;
        }
        if ( v114 != v135 )
        {
          v168 = *v3;
          if ( v135 > *v3 )
          {
            *v5 = v168;
            v135 = v168;
          }
        }
        *v6 = v135;
        *v7 = v135;
        goto LABEL_403;
      default:
        switch ( a2 )
        {
          case 196608:
            v42 = *v5;
            v43 = *v6;
            v44 = *v3;
            if ( *v6 == *v5 )
            {
              v43 = *v7;
            }
            else
            {
              if ( v43 > v44 )
              {
                *v6 = v44;
                v43 = v44;
              }
              if ( v42 > v44 )
              {
                *v5 = v44;
                v42 = v44;
              }
              if ( v43 != v42 )
              {
LABEL_194:
                if ( v42 >= 1 )
                  *v5 = --v42;
                *v4 = 0;
                *v7 = v42;
                goto LABEL_404;
              }
            }
            if ( v43 > v44 )
              v43 = v44;
            v42 = v43;
            *v6 = v43;
            *v5 = v43;
            goto LABEL_194;
          case 196609:
            v45 = *v5;
            v46 = *v6;
            if ( *v6 == *v5 )
            {
              v46 = *v7;
              *v6 = *v7;
              v45 = v46;
            }
            v47 = *v3;
            v48 = v45 + 1;
            *v5 = v45 + 1;
            if ( v46 == v45 + 1 )
            {
              v48 = v46;
            }
            else
            {
              if ( v46 > v47 )
                *v6 = v47;
              if ( v45 >= v47 )
              {
                *v5 = v47;
                v48 = v47;
              }
            }
            *v7 = v48;
            goto LABEL_403;
          case 196610:
            goto LABEL_4;
          case 196611:
            goto LABEL_6;
          case 196612:
            v49 = v5;
            v50 = *v5;
            v51 = *v6;
            v52 = *v3;
            if ( *v6 == v50 )
              goto LABEL_46;
            if ( v51 > v52 )
            {
              *v6 = v52;
              v51 = v52;
            }
            if ( v50 > v52 )
            {
              *v49 = v52;
              v50 = v52;
            }
            if ( v51 == v50 )
            {
              *v7 = v51;
LABEL_46:
              v50 = v51;
            }
            v53 = *v7;
            if ( *v7 > v52 )
            {
              *v7 = v52;
              v53 = v52;
            }
            if ( v51 == v50 )
            {
              *v6 = v53;
            }
            else
            {
              *v7 = v50;
              v53 = v50;
            }
            if ( v8 )
            {
              v53 = 0;
              *v7 = 0;
              goto LABEL_54;
            }
            if ( v53 < 1 )
              goto LABEL_54;
            v161 = *(_DWORD *)(a1 + 20) - 2;
            while ( *(_WORD *)(v161 + 2 * v53) != 10 )
            {
              *v7 = --v53;
              if ( (unsigned int)(v53 + 1) <= 1 )
              {
                v53 = 0;
                break;
              }
            }
LABEL_54:
            *v49 = v53;
            goto LABEL_403;
          case 196613:
            v54 = v5;
            v55 = *v5;
            v56 = *v6;
            v57 = *v3;
            if ( *v6 == v55 )
              goto LABEL_62;
            if ( v56 > v57 )
            {
              *v6 = v57;
              v56 = v57;
            }
            if ( v55 > v57 )
            {
              *v54 = v57;
              v55 = v57;
            }
            if ( v56 == v55 )
            {
              *v7 = v56;
LABEL_62:
              v55 = v56;
            }
            v58 = *v7;
            if ( *v7 > v57 )
            {
              *v7 = v57;
              v58 = v57;
            }
            if ( v56 == v55 )
            {
              *v6 = v58;
            }
            else
            {
              *v7 = v55;
              v58 = v55;
            }
            if ( v8 )
            {
              *v7 = v57;
              goto LABEL_285;
            }
            if ( v58 >= v57 )
              goto LABEL_284;
            v162 = *(_DWORD *)(a1 + 20);
            while ( *(_WORD *)(v162 + 2 * v58) != 10 )
            {
              *v7 = ++v58;
              if ( v57 == v58 )
                goto LABEL_285;
            }
LABEL_284:
            v57 = v58;
LABEL_285:
            *v54 = v57;
            goto LABEL_403;
          case 196614:
            if ( *v6 == *v5 )
              *v6 = *v7;
            *v7 = 0;
            *v5 = 0;
            goto LABEL_403;
          case 196615:
            if ( *v6 == *v5 )
              *v6 = *v7;
            *v4 = 0;
            v59 = *v3;
            *v5 = *v3;
            *v7 = v59;
            goto LABEL_404;
          case 196616:
            goto LABEL_8;
          case 196617:
            goto LABEL_16;
          case 196620:
            v60 = v5;
            v61 = *v7;
            v254 = v7;
            v62 = v60;
            v63 = *v6;
            v64 = *v6 == *v60;
            v65 = v61;
            if ( v64 )
            {
              *v6 = v61;
              *v62 = v61;
              v63 = v61;
            }
            if ( v61 >= 0 )
              v65 = 0;
            v66 = v65 - 1;
            while ( v61 >= 1 )
            {
              if ( sub_AF144(a1, --v61) )
                goto LABEL_175;
            }
            v61 = v66;
LABEL_175:
            v131 = *v3;
            v132 = v61 & ~(v61 >> 31);
            *v62 = v132;
            *v254 = v132;
            if ( v63 == v132 )
            {
              v132 = v63;
              v133 = v254;
            }
            else
            {
              v134 = v61 & ~(v61 >> 31);
              if ( v63 > v131 )
              {
                *v6 = v131;
                v63 = v131;
              }
              if ( v132 > v131 )
              {
                *v62 = v131;
                v134 = v131;
              }
              v64 = v63 == v134;
              v133 = v254;
              if ( v64 )
              {
                *v254 = v63;
                v132 = v63;
              }
            }
            if ( v132 > v131 )
              *v133 = v131;
            goto LABEL_404;
          case 196621:
            v67 = v5;
            v255 = v7;
            v68 = *v7;
            v69 = v67;
            v70 = *v6;
            if ( *v6 == *v67 )
            {
              *v6 = v68;
              *v67 = v68;
              v70 = v68;
            }
            v71 = *v3;
            v72 = v68 + 1;
            if ( v71 > v68 + 1 )
              v72 = v71;
            while ( ++v68 < v71 )
            {
              if ( sub_AF144(a1, v68) )
                goto LABEL_178;
            }
            v68 = v72;
LABEL_178:
            if ( v68 > v71 )
              v68 = v71;
            *v69 = v68;
            *v255 = v68;
            if ( v70 != v68 )
            {
              if ( v70 > v71 )
              {
                *v6 = v71;
                v70 = v71;
              }
              if ( v70 == v68 )
                *v255 = v68;
            }
            goto LABEL_404;
          default:
            if ( a2 >= 0x10000 )
              a2 = 0;
            if ( a2 < 1 )
              goto LABEL_404;
            v258[0] = a2;
            if ( a2 == 10 )
            {
              if ( v8 )
                goto LABEL_404;
            }
            v119 = v4;
            if ( *(_BYTE *)(a1 + 72) && *v6 == *v5 && (v120 = *v7, *v7 < *v3) )
            {
              v121 = (_WORD *)sub_AEFE0((void *)(a1 + 84));
              if ( v121 )
                *v121 = *(_WORD *)(*(_DWORD *)(a1 + 20) + 2 * v120);
              v122 = *(_DWORD *)(a1 + 60);
              v123 = (_WORD *)(*(_DWORD *)(a1 + 20) + 2 * v122);
              v124 = sub_889DE((unsigned int)v123, (unsigned int)(v123 + 1));
              v125 = *(_QWORD *)(a1 + 4);
              v126 = *(_DWORD *)(a1 + 20) + 2 * v122;
              *(_DWORD *)(a1 + 8) = HIDWORD(v125) - v124;
              v127 = *(unsigned __int16 *)(v126 + 2);
              *(_DWORD *)(a1 + 4) = v125 - 1;
              if ( v127 )
              {
                v128 = (unsigned __int16 *)(v126 + 4);
                do
                {
                  *v123++ = v127;
                  v129 = *v128++;
                  LOWORD(v127) = v129;
                }
                while ( v129 );
              }
              v130 = *(_DWORD *)(a1 + 60);
              *v123 = 0;
              if ( !sub_AEADC(a1, v130, v258, 1) )
                goto LABEL_404;
            }
            else
            {
              sub_AEBCE(a1, v7);
              if ( !sub_AEADC(a1, *(_DWORD *)(a1 + 60), v258, 1) )
                goto LABEL_404;
              sub_AEFE0((void *)(a1 + 84));
            }
            v193 = *v7;
            *v119 = 0;
            *v7 = v193 + 1;
            goto LABEL_404;
        }
    }
  }
}


// ======================================================================
// ADDR: 0xae7b0
// SYMBOL: sub_AE7B0
int __fastcall sub_AE7B0(int *a1, int a2)
{
  int result; // r0
  int v5; // r6
  const void *v6; // r1
  int v7; // r8

  result = a1[1];
  if ( result < a2 )
  {
    if ( result )
      v5 = result + result / 2;
    else
      v5 = 8;
    if ( v5 <= a2 )
      v5 = a2;
    if ( result < v5 )
    {
      result = sub_885E4(2 * v5);
      v6 = (const void *)a1[2];
      v7 = result;
      if ( v6 )
      {
        j_memcpy((void *)result, v6, 2 * *a1);
        result = sub_88614(a1[2]);
      }
      a1[1] = v5;
      a1[2] = v7;
    }
  }
  *a1 = a2;
  return result;
}


// ======================================================================
// ADDR: 0xae804
// SYMBOL: sub_AE804
int __fastcall sub_AE804(int a1, int *a2)
{
  int result; // r0

  if ( a2[1] == a2[2] )
    a2[1] = *a2;
  result = sub_AF2B0(a1);
  a2[2] = result;
  *a2 = result;
  return result;
}


// ======================================================================
// ADDR: 0xae838
// SYMBOL: sub_AE838
int __fastcall sub_AE838(int *a1, unsigned int a2, int (*a3)(void))
{
  int v4; // r4
  bool v5; // zf
  int result; // r0
  unsigned int v7; // r0
  bool v8; // cf
  bool v9; // zf

  v4 = *a1;
  if ( (unsigned int)*a1 > 0x1F )
  {
    if ( (unsigned int)(v4 - 57344) < 0x1900 )
      return 0;
  }
  else
  {
    v5 = ((v4 == 10) & (a2 >> 20)) == 0;
    if ( ((v4 == 10) & (a2 >> 20)) == 0 )
      v5 = ((v4 == 9) & (a2 >> 10)) == 0;
    if ( v5 )
      return 0;
  }
  if ( (a2 & 0x2000F) == 0 )
  {
LABEL_28:
    if ( (a2 & 0x200) == 0 )
      return 1;
    if ( !a3() )
    {
      *a1 = (unsigned __int16)v4;
      if ( (_WORD)v4 )
        return 1;
    }
    return 0;
  }
  if ( a2 << 31 )
  {
    if ( (unsigned int)(v4 - 58) <= 0xFFFFFFF5 )
    {
      result = 0;
      if ( (unsigned int)(v4 - 42) > 5 || v4 == 44 )
        return result;
    }
  }
  if ( (a2 & 0x20000) == 0 || (unsigned int)(v4 - 58) > 0xFFFFFFF5 )
  {
LABEL_16:
    v7 = v4 - 97;
    if ( (a2 & 2) != 0 )
    {
      v8 = (unsigned int)(v4 - 48) >= 0xA;
      if ( (unsigned int)(v4 - 48) >= 0xA )
        v8 = v7 >= 6;
      if ( v8 && (unsigned int)(v4 - 65) > 5 )
        return 0;
    }
    if ( (a2 & 4) != 0 && v7 <= 0x19 )
    {
      v4 -= 32;
      *a1 = v4;
    }
    if ( (a2 & 8) != 0 )
    {
      result = 0;
      if ( v4 == 9 )
        return result;
      v9 = v4 == 32;
      if ( v4 != 32 )
        v9 = v4 == 12288;
      if ( v9 )
        return result;
    }
    goto LABEL_28;
  }
  result = 0;
  switch ( v4 )
  {
    case '*':
    case '+':
    case '-':
    case '.':
    case '/':
    case 'E':
    case 'e':
      goto LABEL_16;
    default:
      return result;
  }
  return result;
}


// ======================================================================
// ADDR: 0xae9b8
// SYMBOL: sub_AE9B8
int __fastcall sub_AE9B8(int a1, int *a2, int a3, int a4)
{
  int v7; // r1
  int v8; // r2
  int v10; // r0
  int v11; // r0
  int result; // r0

  v7 = a2[1];
  v8 = a2[2];
  v10 = *(_DWORD *)(a1 + 4);
  if ( v7 != v8 )
  {
    if ( v7 > v10 )
    {
      a2[1] = v10;
      v7 = v10;
    }
    if ( v8 > v10 )
    {
      a2[2] = v10;
      v8 = v10;
    }
    if ( v7 == v8 )
      *a2 = v7;
  }
  if ( *a2 > v10 )
    *a2 = v10;
  sub_AEBCE(a1, a2);
  if ( sub_AEADC(a1, *a2, a3, a4) )
  {
    sub_AEFE0(a2 + 6);
    v11 = *a2;
    *((_BYTE *)a2 + 15) = 0;
    result = v11 + a4;
    *a2 = result;
  }
  else
  {
    result = *((unsigned __int16 *)a2 + 1803);
    if ( *((_WORD *)a2 + 1803) )
      *((_WORD *)a2 + 1803) = --result;
  }
  return result;
}


// ======================================================================
// ADDR: 0xaebce
// SYMBOL: sub_AEBCE
int __fastcall sub_AEBCE(_DWORD *a1, int a2)
{
  int v2; // r5
  int v3; // r6
  int result; // r0
  unsigned int v7; // r9
  unsigned int v8; // r0
  int v9; // lr
  unsigned int v10; // r1
  __int64 *v11; // r3
  bool v12; // cf
  int v13; // r12
  _QWORD *v14; // r1
  unsigned int v15; // r2
  __int64 v16; // d16
  __int64 v17; // d17
  int v18; // r9
  unsigned int v19; // r0
  int v20; // lr
  unsigned int v21; // r1
  __int64 *v22; // r3
  bool v23; // cf
  int v24; // r12
  _QWORD *v25; // r1
  unsigned int v26; // r2
  __int64 v27; // d16
  __int64 v28; // d17
  _WORD *v29; // r0
  int v30; // r3
  __int16 *v31; // r2
  __int16 v32; // t1
  _WORD *v33; // r6
  int v34; // r0
  int v35; // r2
  __int64 v36; // kr08_8
  int v37; // r1
  unsigned __int16 *v38; // r0
  int v39; // t1
  int v40; // r1
  _WORD *v41; // r0
  int v42; // r3
  __int16 *v43; // r2
  __int16 v44; // t1
  _WORD *v45; // r5
  int v46; // r0
  int v47; // r2
  __int64 v48; // kr10_8
  int v49; // r1
  unsigned __int16 *v50; // r0
  int v51; // t1
  int v52; // r1

  v2 = *(_DWORD *)(a2 + 8);
  v3 = *(_DWORD *)(a2 + 4);
  result = a1[1];
  if ( v3 == v2 )
    goto LABEL_8;
  if ( v3 > result )
  {
    *(_DWORD *)(a2 + 4) = result;
    v3 = result;
  }
  if ( v2 > result )
  {
    *(_DWORD *)(a2 + 8) = result;
    v2 = result;
  }
  if ( v3 == v2 )
  {
    *(_DWORD *)a2 = v3;
LABEL_8:
    v2 = v3;
  }
  if ( *(_DWORD *)a2 > result )
    *(_DWORD *)a2 = result;
  if ( v3 != v2 )
  {
    if ( v3 >= v2 )
    {
      v18 = v3 - v2;
      v19 = sub_AEFE0((void *)(a2 + 24));
      v20 = a1[5];
      if ( v18 < 1 || !v19 )
        goto LABEL_46;
      if ( (unsigned int)v18 < 8 )
        goto LABEL_43;
      v21 = v20 + 2 * v3;
      v22 = (__int64 *)(v20 + 2 * v2);
      v23 = v19 >= v21;
      if ( v19 < v21 )
        v23 = (unsigned int)v22 >= v19 + 2 * v18;
      if ( v23 )
      {
        v24 = v18 & 0x7FFFFFF8;
        v25 = (_QWORD *)v19;
        v26 = v18 & 0xFFFFFFF8;
        do
        {
          v27 = *v22;
          v28 = v22[1];
          v22 += 2;
          v26 -= 8;
          *v25 = v27;
          v25[1] = v28;
          v25 += 2;
        }
        while ( v26 );
        if ( v18 == v24 )
          goto LABEL_46;
      }
      else
      {
LABEL_43:
        v24 = 0;
      }
      v41 = (_WORD *)(v19 + 2 * v24);
      v42 = v3 - v24 - v2;
      v43 = (__int16 *)(v20 + 2 * (v2 + v24));
      do
      {
        v44 = *v43++;
        --v42;
        *v41++ = v44;
      }
      while ( v42 );
LABEL_46:
      v45 = (_WORD *)(v20 + 2 * v2);
      v46 = sub_889DE((unsigned int)v45, v20 + 2 * v3);
      v47 = a1[5];
      v48 = *(_QWORD *)(a1 + 1);
      v49 = *(unsigned __int16 *)(v47 + 2 * v3);
      a1[1] = v48 - v18;
      a1[2] = HIDWORD(v48) - v46;
      if ( v49 )
      {
        v50 = (unsigned __int16 *)(v47 + 2 * v3 + 2);
        do
        {
          *v45++ = v49;
          v51 = *v50++;
          LOWORD(v49) = v51;
        }
        while ( v51 );
      }
      v52 = *(_DWORD *)(a2 + 8);
      *v45 = 0;
      *(_DWORD *)a2 = v52;
      *(_DWORD *)(a2 + 4) = v52;
LABEL_50:
      result = 0;
      *(_BYTE *)(a2 + 15) = 0;
      return result;
    }
    v7 = v2 - v3;
    v8 = sub_AEFE0((void *)(a2 + 24));
    v9 = a1[5];
    if ( v2 - v3 >= 1 && v8 )
    {
      if ( v7 < 8 )
        goto LABEL_36;
      v10 = v9 + 2 * v2;
      v11 = (__int64 *)(v9 + 2 * v3);
      v12 = v8 >= v10;
      if ( v8 < v10 )
        v12 = (unsigned int)v11 >= v8 + 2 * v7;
      if ( v12 )
      {
        v13 = v7 & 0x7FFFFFF8;
        v14 = (_QWORD *)v8;
        v15 = v7 & 0xFFFFFFF8;
        do
        {
          v16 = *v11;
          v17 = v11[1];
          v11 += 2;
          v15 -= 8;
          *v14 = v16;
          v14[1] = v17;
          v14 += 2;
        }
        while ( v15 );
        if ( v7 == v13 )
          goto LABEL_39;
      }
      else
      {
LABEL_36:
        v13 = 0;
      }
      v29 = (_WORD *)(v8 + 2 * v13);
      v30 = v2 - v13 - v3;
      v31 = (__int16 *)(v9 + 2 * (v3 + v13));
      do
      {
        v32 = *v31++;
        --v30;
        *v29++ = v32;
      }
      while ( v30 );
    }
LABEL_39:
    v33 = (_WORD *)(v9 + 2 * v3);
    v34 = sub_889DE((unsigned int)v33, v9 + 2 * v2);
    v35 = a1[5];
    v36 = *(_QWORD *)(a1 + 1);
    v37 = *(unsigned __int16 *)(v35 + 2 * v2);
    a1[1] = v36 - v7;
    a1[2] = HIDWORD(v36) - v34;
    if ( v37 )
    {
      v38 = (unsigned __int16 *)(v35 + 2 * v2 + 2);
      do
      {
        *v33++ = v37;
        v39 = *v38++;
        LOWORD(v37) = v39;
      }
      while ( v39 );
    }
    v40 = *(_DWORD *)(a2 + 4);
    *v33 = 0;
    *(_DWORD *)(a2 + 8) = v40;
    *(_DWORD *)a2 = v40;
    goto LABEL_50;
  }
  return result;
}


// ======================================================================
// ADDR: 0xaf2b0
// SYMBOL: sub_AF2B0
int __fastcall sub_AF2B0(int a1)
{
  float v1; // s0
  float v2; // s1
  int result; // r0
  int v5; // lr
  float v6; // s12
  int v7; // r8
  float v8; // s4
  int v9; // r3
  float v10; // s2
  float v11; // s14
  unsigned __int16 *v12; // r5
  int v13; // r6
  int v14; // t1
  float *v15; // r2
  float v16; // s5
  float v17; // s3
  int v18; // r4
  float v19; // s7
  int v20; // r4
  int v21; // r1
  float v22; // s4
  float v23; // s8
  int v24; // r5
  float *v25; // r2

  result = *(_DWORD *)(a1 + 4);
  if ( result >= 1 )
  {
    v5 = *(_DWORD *)(a1 + 20);
    v6 = 0.0;
    v7 = *(_DWORD *)(dword_1ACF68 + 6340);
    v8 = *(float *)(dword_1ACF68 + 6344);
    v9 = 0;
    v10 = v8 / *(float *)(v7 + 16);
    do
    {
      v11 = 0.0;
      v12 = (unsigned __int16 *)(v5 + 2 * v9);
      while ( 1 )
      {
        do
        {
          if ( (unsigned int)v12 >= v5 + 2 * result )
          {
            v16 = 0.0;
            v17 = 0.0;
            goto LABEL_14;
          }
          v14 = *v12++;
          v13 = v14;
        }
        while ( v14 == 13 );
        if ( v13 == 10 )
          break;
        v15 = (float *)(v7 + 12);
        if ( *(_DWORD *)v7 > v13 )
          v15 = (float *)(*(_DWORD *)(v7 + 8) + 4 * v13);
        v11 = v11 + (float)(v10 * *v15);
      }
      if ( v11 <= 0.0 )
        v11 = 0.0;
      v17 = v11;
      v16 = v8 + 0.0;
      v11 = 0.0;
LABEL_14:
      v18 = (int)v12 - v5 + -2 * v9;
      v19 = -0.0;
      if ( v16 == 0.0 )
        v19 = *(float *)(dword_1ACF68 + 6344);
      if ( v11 > 0.0 )
        v19 = *(float *)(dword_1ACF68 + 6344);
      if ( v18 < 2 )
        break;
      if ( !v9 && (float)(v6 + 0.0) > v2 )
        return 0;
      v20 = v18 >> 1;
      v6 = v6 + (float)(v16 + v19);
      if ( v6 > v2 )
      {
        if ( v1 < 0.0 )
          return v9;
        if ( v17 < v11 )
          v17 = v11;
        if ( v17 <= v1 )
        {
LABEL_39:
          result = v20 + v9;
          if ( *(_WORD *)(v5 + 2 * (v20 + v9 - 1)) == 10 )
            return v20 + v9 - 1;
        }
        else
        {
          v21 = v20;
          v22 = 0.0;
          if ( v20 <= 1 )
            v21 = 1;
          result = v9;
          while ( 1 )
          {
            v23 = -1.0;
            v24 = *(unsigned __int16 *)(v5 + 2 * result);
            if ( v24 != 10 )
            {
              v25 = (float *)(v7 + 12);
              if ( *(_DWORD *)v7 > v24 )
                v25 = (float *)(*(_DWORD *)(v7 + 8) + 4 * v24);
              v23 = *v25 * v10;
            }
            if ( (float)(v22 + v23) > v1 )
              break;
            v22 = v22 + v23;
            ++result;
            if ( !--v21 )
              goto LABEL_39;
          }
          if ( (float)(v22 + (float)(v23 * 0.5)) <= v1 )
            ++result;
        }
        return result;
      }
      v9 += v20;
    }
    while ( v9 < result );
  }
  return result;
}


// ======================================================================
