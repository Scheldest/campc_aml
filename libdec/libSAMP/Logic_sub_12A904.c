// ADDR: 0xe3464
// SYMBOL: sub_E3464
float __fastcall sub_E3464(int a1, int a2)
{
  float result; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r10
  float *v8; // r8
  unsigned int v9; // r5
  int i; // r9
  int v11; // r4
  int v12; // r0
  int v13; // r4
  int v14; // [sp+14h] [bp-64h] BYREF

  result = *(float *)&dword_23DEF4;
  if ( dword_23DEF4 )
  {
    result = COERCE_FLOAT(sub_E35A0(dword_23DEF0));
    if ( result != 0.0 )
    {
      v5 = a1 + 16;
      v6 = **(_DWORD **)(dword_23DEF4 + 944);
      v7 = v6 + 4020;
      v8 = (float *)(v6 + 4);
      v9 = sub_F0B30();
      for ( i = 0; i != 1004; ++i )
      {
        LODWORD(result) = *(unsigned __int8 *)(v5 - 16);
        if ( *(_BYTE *)(v5 - 16) )
        {
          LODWORD(result) = *(_DWORD *)v5 + *(_DWORD *)(v5 + 4);
          if ( v9 <= LODWORD(result) )
          {
            LODWORD(result) = *(unsigned __int8 *)(v7 + i);
            if ( *(_BYTE *)(v7 + i) )
            {
              result = *v8;
              if ( *(_DWORD *)v8 )
              {
                v11 = *(_DWORD *)LODWORD(result);
                if ( *(_DWORD *)LODWORD(result) )
                {
                  result = *(float *)(v11 + 296);
                  if ( result != 0.0 )
                  {
                    if ( *(_BYTE *)(v11 + 25) )
                    {
                      result = sub_F8E1C();
                      if ( result <= *(float *)(v5 + 12) )
                      {
                        sub_104D90(*(_DWORD *)(v11 + 296), 8, &v14);
                        v12 = *(_DWORD *)(v11 + 296);
                        v13 = v14;
                        sub_F8D40(v12);
                        result = COERCE_FLOAT(sub_E35C8(*(_DWORD *)(v5 + 8), a2, v13));
                      }
                    }
                  }
                }
              }
            }
          }
        }
        ++v8;
        v5 += 36;
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xf16bc
// SYMBOL: sub_F16BC
float __fastcall sub_F16BC(int a1, int a2)
{
  float result; // r0
  int v4; // r6
  int v5; // r0
  int v6; // r9
  unsigned __int8 *v7; // r4
  int v8; // r8
  bool v9; // zf
  int v10; // r10
  float *v11; // r0
  int v12; // r10
  int v13; // r5
  float v14; // r0
  int v15; // [sp+0h] [bp-130h]
  _BYTE v17[64]; // [sp+48h] [bp-E8h] BYREF
  _BYTE v18[48]; // [sp+88h] [bp-A8h] BYREF
  float v19; // [sp+B8h] [bp-78h]
  float v20; // [sp+BCh] [bp-74h]
  float v21; // [sp+C0h] [bp-70h]
  _BYTE v22[64]; // [sp+C8h] [bp-68h] BYREF
  float v23; // [sp+108h] [bp-28h] BYREF
  float v24; // [sp+10Ch] [bp-24h]
  float v25; // [sp+110h] [bp-20h]

  result = *(float *)&dword_23DEF4;
  if ( dword_23DEF4 && *(_BYTE *)(*(_DWORD *)(dword_23DEF4 + 524) + 52) )
  {
    v4 = **(_DWORD **)(dword_23DEF4 + 944);
    v5 = sub_E35A0(dword_23DEF0);
    sub_F8910(v5, v22);
    v6 = 0;
    while ( 1 )
    {
      LODWORD(result) = *(unsigned __int8 *)(v4 + v6 + 4020);
      if ( !*(_BYTE *)(v4 + v6 + 4020) )
        goto LABEL_11;
      result = *(float *)(v4 + 4 * v6 + 4);
      if ( result == 0.0 )
        goto LABEL_11;
      v7 = *(unsigned __int8 **)LODWORD(result);
      if ( !*(_DWORD *)LODWORD(result) )
        goto LABEL_11;
      v8 = *((_DWORD *)v7 + 74);
      v9 = v8 == 0;
      if ( v8 )
      {
        LODWORD(result) = v7[25];
        v9 = LODWORD(result) == 0;
      }
      if ( v9 )
        goto LABEL_11;
      LODWORD(result) = *v7;
      if ( !*v7 )
        goto LABEL_11;
      v10 = sub_144B84(dword_23DEF4);
      result = COERCE_FLOAT(sub_F8D40(v8));
      if ( !v10 && result > *(float *)(*(_DWORD *)(dword_23DEF4 + 524) + 32) )
        goto LABEL_11;
      if ( v7[25] == 19 && *((_DWORD *)v7 + 1) && sub_109A0C() )
        break;
      result = COERCE_FLOAT(sub_F8C70(v8));
      if ( result != 0.0 )
      {
        v25 = 0.0;
        v23 = 0.0;
        v24 = 0.0;
        sub_104D90(v8, 8, &v23);
        goto LABEL_22;
      }
LABEL_11:
      if ( ++v6 == 1004 )
        return result;
    }
    sub_F8910(*((_DWORD *)v7 + 1), v18);
    v23 = v19;
    v24 = v20;
    v25 = v21;
LABEL_22:
    v11 = (float *)sub_F7FE0();
    if ( !*(_BYTE *)(*(_DWORD *)(dword_23DEF4 + 524) + 40)
      || (result = COERCE_FLOAT(
                     sub_107188(
                       &unk_922F8,
                       0,
                       COERCE_UNSIGNED_INT64(v23),
                       HIDWORD(COERCE_UNSIGNED_INT64(v23)),
                       COERCE_UNSIGNED_INT64(v24),
                       HIDWORD(COERCE_UNSIGNED_INT64(v24)),
                       COERCE_UNSIGNED_INT64(v25),
                       HIDWORD(COERCE_UNSIGNED_INT64(v25)),
                       COERCE_UNSIGNED_INT64(v11[3]),
                       HIDWORD(COERCE_UNSIGNED_INT64(v11[3])),
                       COERCE_UNSIGNED_INT64(v11[4]),
                       HIDWORD(COERCE_UNSIGNED_INT64(v11[4])),
                       COERCE_UNSIGNED_INT64(v11[5]),
                       HIDWORD(COERCE_UNSIGNED_INT64(v11[5])),
                       v10 ^ 1,
                       0,
                       0,
                       v10 ^ 1,
                       0)),
          !*(_BYTE *)(*(_DWORD *)(dword_23DEF4 + 524) + 40))
      || result != 0.0 && (LODWORD(result) = v7[24]) == 0 )
    {
      sub_148E64(v4, (unsigned __int16)v6);
      sub_F1898(v17);
      v12 = a2;
      v13 = sub_14A402(v7);
      v14 = COERCE_FLOAT(sub_F8D40(v8));
      v15 = v13;
      a2 = v12;
      result = COERCE_FLOAT(sub_F18C8(a1, v12, (int)&v23, (int)v17, v15, v14, *((float *)v7 + 2), *((float *)v7 + 3), v7[16]));
    }
    goto LABEL_11;
  }
  return result;
}


// ======================================================================
// ADDR: 0xf1f4c
// SYMBOL: sub_F1F4C
int __fastcall sub_F1F4C(unsigned __int8 *a1, int a2)
{
  int result; // r0
  int v3; // r9
  int v5; // r4
  int v6; // r5
  int v7; // r3

  result = *a1;
  if ( result )
  {
    result = dword_23DEF4;
    if ( dword_23DEF4 )
    {
      result = *(_DWORD *)(dword_23DEF4 + 944);
      v3 = *(_DWORD *)(result + 4);
      if ( v3 )
      {
        v5 = 0;
        v6 = 16000;
        do
        {
          result = sub_F2396(v3, (unsigned __int16)v5);
          if ( result )
          {
            v7 = *(_DWORD *)(v3 + 4 * v5);
            if ( v7 )
              result = sub_F1FC0(
                         *(_DWORD *)(v3 + v6),
                         a2,
                         (unsigned __int16)v5,
                         v7,
                         *(float *)(v3 + v6),
                         *(float *)(v3 + v6 + 4),
                         *(float *)(v3 + v6 + 8));
          }
          ++v5;
          v6 += 12;
        }
        while ( v5 != 2000 );
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x10bbac
// SYMBOL: sub_10BBAC
float __fastcall sub_10BBAC(float result)
{
  int *v1; // r4
  float v2; // r1
  int v3; // r6
  int v4; // r0
  int v5; // r5
  float v6; // s22
  int v7; // r5
  int v8; // [sp+8h] [bp-B8h]
  float v9; // [sp+18h] [bp-A8h]
  int v10; // [sp+1Ch] [bp-A4h]
  int v11; // [sp+20h] [bp-A0h]
  float v12; // [sp+24h] [bp-9Ch]
  _DWORD v13[16]; // [sp+28h] [bp-98h] BYREF
  _BYTE v14[4]; // [sp+68h] [bp-58h] BYREF
  int *v15; // [sp+6Ch] [bp-54h] BYREF
  _DWORD v16[20]; // [sp+70h] [bp-50h] BYREF

  v1 = *(int **)(LODWORD(result) + 80);
  v2 = result;
  v9 = result;
  if ( v1 )
  {
    v3 = LODWORD(result) + 72;
    do
    {
      v4 = sub_15E5D4(*((unsigned __int16 *)v1 + 4), LODWORD(v2));
      if ( v4 )
      {
        v5 = v4;
        result = COERCE_FLOAT(sub_F8D40(v4));
        v6 = result;
        if ( result <= 15.0 )
        {
          sub_F8910(v5, v13);
          sub_104D90(v5);
          v7 = sub_F0B30();
          v15 = v1 + 2;
          sub_10C0B8(v16, v3, v1 + 2, &unk_B400A, &v15, v14);
          if ( (unsigned int)(v7 - *(_DWORD *)(v16[0] + 12)) >= 0xC9 )
          {
            v15 = v1 + 2;
            sub_10C0B8(v16, v3, v1 + 2, &unk_B400A, &v15, v14);
            ++*(_DWORD *)(v16[0] + 16);
            v8 = sub_F0B30();
            v15 = v1 + 2;
            sub_10C0B8(v16, v3, v1 + 2, &unk_B400A, &v15, v14);
            *(_DWORD *)(v16[0] + 12) = v8;
          }
          v15 = v1 + 2;
          sub_10C0B8(v16, v3, v1 + 2, &unk_B400A, &v15, v14);
          result = COERCE_FLOAT(
                     sub_10BD04(
                       LODWORD(v9),
                       v10,
                       v11,
                       (float)((float)(v6 * 0.0475) + 0.53) + v12,
                       *(_DWORD *)(v16[0] + 16) % 4));
        }
      }
      else
      {
        result = COERCE_FLOAT(sub_10BD3C(LODWORD(v9), *((unsigned __int16 *)v1 + 4)));
      }
      v1 = (int *)*v1;
    }
    while ( v1 );
  }
  return result;
}


// ======================================================================
// ADDR: 0x10ed30
// SYMBOL: sub_10ED30
int __fastcall sub_10ED30(int a1, int a2)
{
  int v4; // r0
  int v5; // r6
  int i; // r11
  _QWORD v8[6]; // [sp+10h] [bp-30h] BYREF

  v4 = (unsigned __int8)byte_2632A0;
  __dmb(0xBu);
  if ( !(v4 << 31) && j___cxa_guard_acquire((__guard *)&byte_2632A0) )
  {
    qword_263290[0] = 0x3F0B8B8C3E54D4D6LL;
    qword_263290[1] = 0x3F8000003F54D4D6LL;
    j___cxa_guard_release((__guard *)&byte_2632A0);
  }
  v5 = *(_DWORD *)(a1 + 8);
  for ( i = *(_DWORD *)(a1 + 12); v5 != i; v5 += 20 )
  {
    v8[0] = *(_QWORD *)(v5 + 12);
    sub_12AE34(a2, (int)v8, (int)qword_263290, v5, 1, *(float *)&dword_238EC0 * 0.5);
  }
  return sub_10F6C2(a1 + 8);
}


// ======================================================================
// ADDR: 0x1382d8
// SYMBOL: sub_1382D8
int __fastcall sub_1382D8(int a1, int a2)
{
  int result; // r0
  int v4; // r8
  unsigned int v5; // r9
  char *v6; // r0
  int v7; // r0
  double v8; // d16
  int v9; // r0
  double v10; // d16
  char *v11; // r1
  int v12; // r2
  int v13; // r1
  int v14; // r0
  double v15; // d16
  char *v16; // r1
  int v17; // r2
  char *v18; // r1
  int v19; // r2
  int v20; // r0
  double v21; // d16
  char *v22; // r1
  int v23; // r2
  int v24; // r0
  double v25; // d16
  int v26; // r0
  unsigned int v27; // r1
  float v28; // s4
  double v30; // [sp+10h] [bp-A0h] BYREF
  void *v31; // [sp+18h] [bp-98h]
  int v32; // [sp+1Ch] [bp-94h]
  __int64 v33; // [sp+20h] [bp-90h] BYREF
  void *v34; // [sp+28h] [bp-88h]
  unsigned __int8 v35[8]; // [sp+2Ch] [bp-84h] BYREF
  void *v36; // [sp+34h] [bp-7Ch]
  double v37; // [sp+38h] [bp-78h] BYREF
  void *v38; // [sp+40h] [bp-70h]
  int v39; // [sp+44h] [bp-6Ch] BYREF
  int v40; // [sp+48h] [bp-68h]
  void *v41; // [sp+4Ch] [bp-64h]
  int v42; // [sp+50h] [bp-60h]
  _BYTE v43[4]; // [sp+54h] [bp-5Ch] BYREF
  int v44; // [sp+58h] [bp-58h]
  void *v45; // [sp+5Ch] [bp-54h]
  __int64 v46; // [sp+60h] [bp-50h]

  result = *(_DWORD *)(a1 + 104);
  if ( result )
  {
    v4 = 0;
    do
    {
      v5 = *(_DWORD *)(*(_DWORD *)(a1 + 88) + 4 * (*(_DWORD *)(a1 + 100) / 0xAAu))
         + 24 * (*(_DWORD *)(a1 + 100) % 0xAAu);
      LOWORD(v42) = *(_WORD *)v5;
      std::string::basic_string(v43, v5 + 4);
      v46 = *(_QWORD *)(v5 + 16);
      if ( sub_15E580((unsigned __int16)v42) )
      {
        v6 = (char *)sub_15E670((unsigned __int16)v42);
        sub_DC6DC(&v39, v6);
        std::to_string((std::__ndk1 *)v35, (unsigned __int16)v42);
        v7 = std::string::insert((int)v35, 0, " (");
        v8 = *(double *)v7;
        v38 = *(void **)(v7 + 8);
        v37 = v8;
        *(_DWORD *)v7 = 0;
        *(_DWORD *)(v7 + 4) = 0;
        *(_DWORD *)(v7 + 8) = 0;
        v9 = std::string::append((int)&v37, ")");
        v10 = *(double *)v9;
        v31 = *(void **)(v9 + 8);
        v30 = v10;
        *(_DWORD *)v9 = 0;
        *(_DWORD *)(v9 + 4) = 0;
        *(_DWORD *)(v9 + 8) = 0;
        v12 = HIDWORD(v30);
        v11 = (char *)v31;
        if ( (LOBYTE(v30) & 1) == 0 )
        {
          v11 = (char *)&v30 + 1;
          v12 = LOBYTE(v30) >> 1;
        }
        std::string::append(&v39, v11, v12, &v30);
        if ( LOBYTE(v30) << 31 )
          operator delete(v31);
        if ( LOBYTE(v37) << 31 )
          operator delete(v38);
        if ( v35[0] << 31 )
          operator delete(v36);
        v13 = v44;
        if ( !(v43[0] << 31) )
          v13 = v43[0] >> 1;
        if ( v13 )
        {
          std::operator+<char>(v35, &a5[2], v43);
          v14 = std::string::append((int)v35, "]");
          v15 = *(double *)v14;
          v31 = *(void **)(v14 + 8);
          v30 = v15;
          *(_DWORD *)v14 = 0;
          *(_DWORD *)(v14 + 4) = 0;
          *(_DWORD *)(v14 + 8) = 0;
          v17 = v40;
          v16 = (char *)v41;
          if ( (v39 & 1) == 0 )
          {
            v16 = (char *)&v39 + 1;
            v17 = (unsigned __int8)v39 >> 1;
          }
          sub_164D04(&v33, v16, v17);
          v19 = HIDWORD(v33);
          v18 = (char *)v34;
          if ( (v33 & 1) == 0 )
          {
            v18 = (char *)&v33 + 1;
            v19 = (unsigned __int8)v33 >> 1;
          }
          v20 = std::string::append(&v30, v18, v19, &v33);
          v21 = *(double *)v20;
          v38 = *(void **)(v20 + 8);
          v37 = v21;
          *(_DWORD *)v20 = 0;
          *(_DWORD *)(v20 + 4) = 0;
          *(_DWORD *)(v20 + 8) = 0;
          if ( (unsigned __int8)v33 << 31 )
            operator delete(v34);
          if ( LOBYTE(v30) << 31 )
            operator delete(v31);
          if ( v35[0] << 31 )
            operator delete(v36);
        }
        else
        {
          v23 = v40;
          v22 = (char *)v41;
          if ( (v39 & 1) == 0 )
          {
            v22 = (char *)&v39 + 1;
            v23 = (unsigned __int8)v39 >> 1;
          }
          sub_164D04(&v30, v22, v23);
          v24 = std::string::insert((int)&v30, 0, asc_84840);
          v25 = *(double *)v24;
          v38 = *(void **)(v24 + 8);
          v37 = v25;
          *(_DWORD *)v24 = 0;
          *(_DWORD *)(v24 + 4) = 0;
          *(_DWORD *)(v24 + 8) = 0;
          if ( LOBYTE(v30) << 31 )
            operator delete(v31);
        }
        ++v4;
        v26 = v44;
        v27 = bswap32(v46 | 0xFF);
        if ( !(v43[0] << 31) )
          v26 = v43[0] >> 1;
        if ( !v26 )
        {
          LOWORD(v27) = -17531;
          BYTE2(v27) = 101;
        }
        v28 = *(float *)(a1 + 24);
        v32 = 1065353216;
        *(float *)&v33 = *(float *)(a1 + 20) * 0.85;
        *((float *)&v33 + 1) = (float)((float)((float)v4 * 0.02) + 0.3) * v28;
        *(float *)&v31 = (float)BYTE2(v27) * 0.0039216;
        *((float *)&v30 + 1) = (float)BYTE1(v27) * 0.0039216;
        *(float *)&v30 = (float)(unsigned __int8)v27 * 0.0039216;
        std::string::basic_string(v35, &v37);
        sub_12AE34(a2, &v33, (__int64 *)&v30, v35, 1, *(float *)&dword_238EC0 / 3.0);
        if ( v35[0] << 31 )
          operator delete(v36);
        if ( LOBYTE(v37) << 31 )
          operator delete(v38);
        if ( (unsigned __int8)v39 << 31 )
          operator delete(v41);
      }
      sub_139B94(a1 + 84);
      if ( v43[0] << 31 )
        operator delete(v45);
      result = *(_DWORD *)(a1 + 104);
    }
    while ( result );
  }
  return result;
}


// ======================================================================
// ADDR: 0x14826c
// SYMBOL: sub_14826C
unsigned int __fastcall sub_14826C(int a1, int a2)
{
  unsigned int result; // r0
  int v5; // r1
  int v6; // r0
  _DWORD *v7; // r0
  _DWORD v8[18]; // [sp+0h] [bp-48h] BYREF

  result = *(_DWORD *)a1;
  if ( result == 1 )
  {
    v6 = sub_E35A0(dword_23DEF0);
    result = sub_1056B4(v6, *(_DWORD *)(a1 + 4));
LABEL_7:
    if ( result )
    {
      v7 = sub_F8910(result, v8);
      return sub_1482E0(v7, a2, v8, 1065353216);
    }
    return result;
  }
  if ( result == 2 )
  {
    result = *(unsigned __int16 *)(a1 + 8);
    if ( result <= 0x3E8 )
    {
      v5 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 16);
      if ( *(_BYTE *)(v5 + result + 4) )
      {
        result = *(_DWORD *)(v5 + 4 * result + 1004);
        goto LABEL_7;
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x154d88
// SYMBOL: sub_154D88
void __fastcall sub_154D88(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r1
  int v7; // r1
  int v8; // r0

  if ( *(_BYTE *)(a1 + 125) )
  {
    v2 = *(unsigned __int8 *)(a1 + 126);
    if ( v2 != sub_15E510() )
    {
      v3 = sub_15E510();
      sub_154E98(a1, v3 ^ 1);
    }
    if ( !*(_BYTE *)(a1 + 126) )
    {
      v4 = *(_DWORD *)(a1 + 128);
      if ( v4 <= 49 )
        *(_DWORD *)(a1 + 128) = v4 + 1;
    }
    v5 = *(unsigned __int8 *)(a1 + 132);
    __dmb(0xBu);
    if ( v5 << 31 )
    {
      __dmb(0xBu);
      *(_BYTE *)(a1 + 132) = 0;
      __dmb(0xBu);
      if ( *(_DWORD *)(a1 + 88) )
        sub_154EF2(a1);
    }
    if ( *(_DWORD *)(a1 + 88) )
    {
      sub_154F18(a1);
      sub_15C6C2(a1 + 20);
      if ( **(_DWORD **)(a1 + 92) )
      {
        if ( sub_157EA4() )
        {
          if ( *(_BYTE *)(a1 + 124) && !sub_15E514() )
            v6 = sub_15E538() ^ 1;
          else
            v6 = 0;
          v7 = sub_15249E(*(_DWORD *)(a1 + 88), v6);
          v8 = *(_DWORD *)(a1 + 92);
          if ( v7 )
            sub_157E40(v8);
          else
            sub_157E92(v8);
          if ( *(_BYTE *)(a1 + 124) )
            sub_152B5A(
              *(_DWORD *)(a1 + 88),
              **(_DWORD **)(a1 + 92) + 24,
              (int *)(*(_DWORD *)(a1 + 92) + 8),
              (int *)(*(_DWORD *)(a1 + 92) + 12));
        }
        else
        {
          sub_154D48(a1, 0);
        }
      }
    }
  }
}


// ======================================================================
