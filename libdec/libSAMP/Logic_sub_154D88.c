// ADDR: 0x15249e
// SYMBOL: sub_15249E
int __fastcall sub_15249E(int a1, int a2)
{
  int v2; // r5
  int v5; // r0

  v2 = *(unsigned __int8 *)(a1 + 4);
  if ( *(_BYTE *)(a1 + 4) )
  {
    if ( a2 )
    {
      v5 = sub_15E4A0(*(unsigned __int8 *)(a1 + 4));
      v2 = *(unsigned __int8 *)(a1 + 4);
      if ( v5 )
        return v2;
    }
    sub_1524F4(a1, v2, 0);
    *(_BYTE *)(a1 + 4) = 0;
  }
  if ( !a2 || !sub_15E484() )
    return 0;
  v2 = sub_15E468();
  *(_BYTE *)(a1 + 5) = v2;
  *(_BYTE *)(a1 + 4) = v2;
  sub_1524F4(a1, v2, 1);
  return v2;
}


// ======================================================================
// ADDR: 0x152b5a
// SYMBOL: sub_152B5A
void __fastcall sub_152B5A(int a1, int a2, int *a3, int *a4)
{
  int v8; // r0
  int v9; // r0
  int v10; // r9
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r11
  _DWORD *v15; // r4
  _DWORD *v16; // r6
  unsigned int v17; // r5
  _DWORD *v18; // r0
  int v19; // r2
  int v20; // [sp+8h] [bp-1140h]
  int v21; // [sp+Ch] [bp-113Ch] BYREF
  _QWORD dest[480]; // [sp+10h] [bp-1138h] BYREF
  int v23; // [sp+F14h] [bp-234h] BYREF
  _BYTE v24[516]; // [sp+F18h] [bp-230h] BYREF
  __int64 v25; // [sp+111Ch] [bp-2Ch] BYREF
  unsigned int v26; // [sp+1124h] [bp-24h]

  std::chrono::steady_clock::now((std::chrono::steady_clock *)dest);
  if ( (__int64)(dest[0] - *(_QWORD *)(a1 + 72)) >= 100000000 )
  {
    std::chrono::steady_clock::now((std::chrono::steady_clock *)dest);
    *(_QWORD *)(a1 + 72) = dest[0];
    v8 = *a4;
    if ( (unsigned int)*a4 >= 0xF00 )
    {
      if ( *(_BYTE *)(a1 + 80) )
      {
        v9 = *(_DWORD *)(a2 + 4);
        __dmb(0xBu);
        *a3 = v9;
        *a4 = 0;
        sub_152AC0(a1, 0, 0);
        return;
      }
      v10 = a1 + 52;
      v20 = a1;
      v26 = 0;
      v25 = 0LL;
      do
      {
        *a4 = v8 - 3840;
        v11 = sub_15BC96(a2, *a3, 3840, (int)&v23, dest);
        v12 = v23;
        *a3 = v11;
        v13 = sub_15E350(v10, v12, 960, v24, 512);
        v21 = v13;
        if ( v13 >= 3 )
        {
          v14 = HIDWORD(v25);
          if ( HIDWORD(v25) >= v26 )
          {
            sub_154312(&v25, &v21, v24);
          }
          else
          {
            *(_DWORD *)HIDWORD(v25) = v13;
            j_memcpy((void *)(v14 + 4), v24, 0x200u);
            HIDWORD(v25) = v14 + 516;
          }
        }
        v8 = *a4;
      }
      while ( (unsigned int)*a4 >> 8 > 0xE );
      if ( HIDWORD(v25) - (_DWORD)v25 == 516 )
      {
        sub_152AC0(a1, v25 + 4, *(_DWORD *)v25);
      }
      else
      {
        sub_15E348(v10);
        v16 = (_DWORD *)HIDWORD(v25);
        v15 = (_DWORD *)v25;
        if ( (_DWORD)v25 == HIDWORD(v25) )
          goto LABEL_24;
        v17 = 0;
        do
        {
          v17 += *v15;
          if ( v17 > 0x200 || !sub_15E31E(v10, v15 + 1) || (v18 = v15 + 129, v15 = v16, v18 == v16) )
          {
            v19 = sub_15E330(v10, dest, 512);
            if ( v19 >= 3 )
              sub_152AC0(v20, (int)dest, v19);
            v17 = 0;
          }
          else
          {
            v15 = v18;
          }
        }
        while ( v15 != v16 );
      }
      v15 = (_DWORD *)v25;
LABEL_24:
      if ( v15 )
      {
        HIDWORD(v25) = v15;
        operator delete(v15);
      }
    }
  }
}


// ======================================================================
// ADDR: 0x154e98
// SYMBOL: sub_154E98
int __fastcall sub_154E98(int a1, int a2)
{
  int v3; // r5
  int result; // r0
  int v5; // r0

  if ( a2 )
    v3 = sub_15E510() ^ 1;
  else
    v3 = 0;
  result = *(unsigned __int8 *)(a1 + 126);
  if ( result == v3 )
  {
    *(_BYTE *)(a1 + 126) = v3 ^ 1;
    result = *(unsigned __int8 *)(a1 + 125);
    *(_DWORD *)(a1 + 128) = 0;
    if ( result )
    {
      v5 = *(_DWORD *)(a1 + 112);
      if ( !v3 )
        v5 = 0;
      sub_154698(v5);
      result = (*(_DWORD *)(a1 + 88) == 0) | v3;
      if ( !result )
      {
        sub_157E92(*(_DWORD *)(a1 + 92));
        return sub_15249E(*(_DWORD *)(a1 + 88), 0);
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x154ef2
// SYMBOL: sub_154EF2
int __fastcall sub_154EF2(int a1)
{
  _DWORD *v2; // r0
  int v3; // t1

  v3 = *(_DWORD *)(a1 + 88);
  v2 = (_DWORD *)(a1 + 88);
  *v2 = 0;
  if ( v3 )
    sub_1561D2(v2);
  sub_157E92(*(_DWORD *)(a1 + 92));
  return sub_15BE94(a1 + 20);
}


// ======================================================================
// ADDR: 0x154f18
// SYMBOL: sub_154F18
int __fastcall sub_154F18(int a1)
{
  int result; // r0
  _DWORD *v3; // r8
  __int64 v4; // r10
  int v5; // r9
  __int64 v6; // kr00_8
  int v7; // r6
  unsigned __int16 *v8; // r0
  int v9; // r1
  int v10; // r11
  int v11; // r0
  int v12; // r4
  float v13; // r0
  int v14; // r0
  unsigned __int16 *v15; // r0
  int v16; // r4
  int v17; // r0
  int v18; // r5
  double v19; // kr08_8
  float v20; // s26
  float v21; // s0
  int v22; // r0
  int *i; // r5
  __int64 v24; // r0
  int v25; // r0
  char *v26; // r0
  double v27; // d16
  int v28; // r0
  int v29; // r0
  int v30; // r0
  double v31; // d16
  int v32; // r0
  int v33; // [sp+0h] [bp-E8h]
  int v34; // [sp+4h] [bp-E4h]
  int v35; // [sp+10h] [bp-D8h]
  int v36; // [sp+14h] [bp-D4h]
  unsigned int v37; // [sp+18h] [bp-D0h]
  int v38; // [sp+1Ch] [bp-CCh]
  int v39; // [sp+1Ch] [bp-CCh]
  double v40; // [sp+20h] [bp-C8h] BYREF
  float v41; // [sp+28h] [bp-C0h]
  _DWORD v42[3]; // [sp+2Ch] [bp-BCh] BYREF
  _QWORD v43[2]; // [sp+38h] [bp-B0h] BYREF
  _BYTE v44[16]; // [sp+48h] [bp-A0h] BYREF
  int v45; // [sp+58h] [bp-90h] BYREF
  double v46; // [sp+68h] [bp-80h] BYREF
  float v47; // [sp+70h] [bp-78h]
  double v48; // [sp+78h] [bp-70h] BYREF
  float v49; // [sp+80h] [bp-68h]

  result = *(_DWORD *)(*(_DWORD *)(a1 + 88) + 24);
  if ( !result )
    return result;
  result = sub_15E5BC();
  v3 = *(_DWORD **)(*(_DWORD *)(a1 + 88) + 20);
  if ( !v3 )
    return result;
  v35 = result;
  LODWORD(v4) = 400000000;
  v38 = 0;
  do
  {
    v5 = v3[3];
    sub_150588((_DWORD *)v5);
    if ( *(_DWORD *)(v5 + 28) )
    {
      std::chrono::steady_clock::now((std::chrono::steady_clock *)v43);
      v6 = v43[0] - *(_QWORD *)(v5 + 48);
      v36 = HIDWORD(v6);
      v37 = v6;
      v7 = v6 < 400000000;
    }
    else
    {
      v7 = 0;
      v37 = 0;
      v36 = 0;
    }
    v8 = (unsigned __int16 *)j___dynamic_cast(
                               (const void *)v5,
                               (const struct __class_type_info *)&`typeinfo for'AudioChannel,
                               (const struct __class_type_info *)&`typeinfo for'AudioChannelPlayer,
                               0);
    if ( v8 )
    {
      v10 = (int)v8;
      v11 = sub_15E5D4(v8[52], v9);
      if ( !v11 )
        goto LABEL_20;
      v12 = v11;
      sub_F8910(v11, v43);
      v49 = v47;
      v48 = v46;
      sub_F8994(v12, v42);
      v39 = v7;
      sub_104D90(v12);
      v49 = v41;
      v48 = v40;
      v13 = COERCE_FLOAT(sub_F8D40(v12));
      v49 = v49 + (float)((float)(v13 * 0.0475) + 0.43);
      sub_150CB4(v10, (int)&v40, (int)v44, (int)v42);
      v14 = *(unsigned __int8 *)(v10 + 106);
      if ( *(_BYTE *)(v10 + 106) )
        v14 = 1;
      if ( v7 != v14 )
        *(_BYTE *)(v10 + 106) = v7;
    }
    else
    {
      v15 = (unsigned __int16 *)j___dynamic_cast(
                                  (const void *)v5,
                                  (const struct __class_type_info *)&`typeinfo for'AudioChannel,
                                  (const struct __class_type_info *)&`typeinfo for'AudioChannelVehicle,
                                  0);
      if ( v15 )
      {
        v16 = (int)v15;
        v17 = sub_15E638(v15[52]);
        if ( !v17 )
          goto LABEL_20;
        v39 = v7;
        v18 = v17;
        sub_F8910(v17, v43);
        v49 = v47;
        v48 = v46;
        sub_F8994(v18, v42);
        sub_150CB4(v16, (int)&v48, (int)v44, (int)v42);
      }
      else
      {
        v26 = (char *)j___dynamic_cast(
                        (const void *)v5,
                        (const struct __class_type_info *)&`typeinfo for'AudioChannel,
                        (const struct __class_type_info *)&`typeinfo for'AudioChannelPoint3D,
                        0);
        if ( !v26 )
          goto LABEL_20;
        v27 = *(double *)(v26 + 108);
        v39 = v7;
        v49 = *((float *)v26 + 29);
        v48 = v27;
      }
    }
    sub_F8910(v35, v43);
    v19 = v48;
    v20 = v49;
    v21 = (float)((float)((float)(*((float *)&v48 + 1) - *((float *)&v46 + 1))
                        * (float)(*((float *)&v48 + 1) - *((float *)&v46 + 1)))
                + (float)((float)(*(float *)&v48 - *(float *)&v46) * (float)(*(float *)&v48 - *(float *)&v46)))
        + (float)((float)(v20 - v47) * (float)(v20 - v47));
    *((float *)j___dynamic_cast(
                 (const void *)v5,
                 (const struct __class_type_info *)&`typeinfo for'AudioChannel,
                 (const struct __class_type_info *)&`typeinfo for'AudioChannel3D,
                 0)
    + 25) = v21;
    v7 = v39;
    if ( !((v21 > 900.0) | v39 ^ 1) )
    {
      v22 = sub_221404(400000000 - v37, (400000000 - __PAIR64__(v36, v37)) >> 32, 1000000, 0);
      v33 = 180;
      sub_15E720(LODWORD(v19), HIDWORD(v19), LODWORD(v20), v22);
    }
    v38 = 1;
LABEL_20:
    HIDWORD(v4) = 0;
    if ( v7 )
    {
      for ( i = *(int **)(v5 + 24); i; i = (int *)*i )
      {
        std::chrono::steady_clock::now((std::chrono::steady_clock *)v43);
        v24 = v43[0] - *(_QWORD *)(i[3] + 24);
        if ( v24 < 400000000 )
        {
          v25 = sub_2217B4(400000000 - (int)v24, (unsigned __int64)(v4 - v24) >> 32, &loc_F4240, 0);
          sub_138284(*(_DWORD *)(dword_23DEEC + 132), *((_WORD *)i + 4), v5 + 56, *(_DWORD *)(v5 + 68), v25);
        }
      }
    }
    v3 = (_DWORD *)*v3;
  }
  while ( v3 );
  result = v38 << 31;
  if ( v38 << 31 )
  {
    v28 = sub_15E620(result);
    sub_F8828(v28, v43);
    if ( sub_104108(v35) )
      v29 = sub_104326(v35);
    else
      v29 = *(_DWORD *)(v35 + 4);
    v30 = *(_DWORD *)(v29 + 20);
    v31 = *(double *)(v30 + 48);
    v49 = *(float *)(v30 + 56);
    v48 = v31;
    sub_F8994(v35, v42);
    v32 = sub_1546AC((int)&v48, (int)v42, (int)&v45, (int)v44, v33, v34, (int)&v46, (int)v44, v35, v36);
    return sub_154694(v32);
  }
  return result;
}


// ======================================================================
// ADDR: 0x157e40
// SYMBOL: sub_157E40
bool __fastcall sub_157E40(_DWORD *a1)
{
  _DWORD *v2; // r0
  unsigned int v3; // r1
  char v5; // r0
  int v6; // r1
  unsigned int v7; // r2
  int v8; // r3
  int v9; // r0
  bool v10; // cf
  unsigned int v11; // r1

  v2 = (_DWORD *)*a1;
  if ( !v2 )
    return 0;
  if ( *((_BYTE *)a1 + 16) )
  {
    v3 = a1[2];
  }
  else
  {
    if ( (*(int (__fastcall **)(_DWORD *))(*v2 + 16))(v2) )
      v5 = 1;
    else
      v5 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*a1 + 8))(*a1);
    v6 = *a1;
    *((_BYTE *)a1 + 16) = v5;
    v3 = *(_DWORD *)(v6 + 28);
    __dmb(0xBu);
    v2 = (_DWORD *)*a1;
    a1[2] = v3;
  }
  v7 = v2[7];
  __dmb(0xBu);
  v8 = v2[6];
  v9 = *((unsigned __int8 *)a1 + 16);
  v10 = v7 >= v3;
  v11 = v7 - v3;
  if ( !v10 )
    v11 += v8;
  a1[3] = v11;
  return v9 != 0;
}


// ======================================================================
// ADDR: 0x157e92
// SYMBOL: sub_157E92
bool __fastcall sub_157E92(int a1)
{
  int v2; // r0

  v2 = *(unsigned __int8 *)(a1 + 16);
  if ( v2 )
    *(_BYTE *)(a1 + 16) = 0;
  return v2 != 0;
}


// ======================================================================
// ADDR: 0x157ea4
// SYMBOL: sub_157EA4
int __fastcall sub_157EA4(int a1)
{
  const char *v1; // r5
  bool v3; // zf
  int v5; // r6
  size_t v6; // r0
  unsigned int v7; // r1
  int v8; // r6
  unsigned int v9; // t1
  unsigned int v10; // r2
  __int64 v11; // [sp+8h] [bp-20h] BYREF
  unsigned __int8 v12; // [sp+10h] [bp-18h]

  if ( !*(_DWORD *)a1 )
    return 0;
  std::chrono::steady_clock::now((std::chrono::steady_clock *)&v11);
  if ( v11 - *(_QWORD *)(a1 + 24) >= 2000000001 )
  {
    std::chrono::steady_clock::now((std::chrono::steady_clock *)&v11);
    *(_QWORD *)(a1 + 24) = v11;
    if ( !sub_164B30(**(_DWORD **)(a1 + 4), &v11) )
      goto LABEL_8;
    v3 = v12 << 31 == 0;
    if ( v12 << 31 )
    {
      v1 = (const char *)HIDWORD(v11);
      v3 = HIDWORD(v11) == 0;
    }
    if ( v3 )
      goto LABEL_8;
    v5 = *(_DWORD *)(a1 + 4);
    v6 = strlen(v1);
    v9 = *(unsigned __int8 *)(v5 + 4);
    v8 = v5 + 4;
    v7 = v9;
    v10 = *(_DWORD *)(v8 + 4);
    if ( !(v9 << 31) )
      v10 = v7 >> 1;
    if ( v6 != v10 || std::string::compare(v8, 0, -1, v1, v6) )
    {
LABEL_8:
      sub_157C88((int *)a1);
      return 0;
    }
  }
  return 1;
}


// ======================================================================
// ADDR: 0x15c6c2
// SYMBOL: sub_15C6C2
int __fastcall sub_15C6C2(int result)
{
  _DWORD *v1; // r9
  int v2; // r6
  std::__shared_weak_count *v3; // r8
  int v4; // r0
  unsigned int *v5; // r1
  unsigned int *v6; // r0
  unsigned int v7; // r1
  std::__shared_weak_count *v8; // r4
  unsigned int *v9; // r0
  unsigned int v10; // r1
  _DWORD *v11; // r0
  __int64 v12; // r0
  _DWORD *v13; // r4
  int v14; // r0
  std::__shared_weak_count *v15; // r5
  unsigned int v16; // r1
  int v17; // [sp+4h] [bp-34h]
  int v18; // [sp+8h] [bp-30h]
  int v19; // [sp+Ch] [bp-2Ch]
  int v20; // [sp+10h] [bp-28h] BYREF
  unsigned int *v21; // [sp+14h] [bp-24h]

  v1 = *(_DWORD **)(result + 32);
  v18 = result;
  if ( v1 )
  {
    v19 = result + 24;
    v17 = result + 4;
    do
    {
      v2 = v1[3];
      if ( *(_BYTE *)(v2 + 17) && sub_15BD1E(v1[3]) )
      {
        sub_15C840(&v20, v2);
        v3 = *(std::__shared_weak_count **)(v2 + 8);
        v4 = v20;
        v5 = v21;
        v21 = 0;
        *(_DWORD *)(v2 + 8) = v5;
        *(_DWORD *)(v2 + 4) = v4;
        v20 = 0;
        if ( v3 )
        {
          v6 = (unsigned int *)((char *)v3 + 4);
          __dmb(0xBu);
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          __dmb(0xBu);
          if ( !v7 )
          {
            (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v3 + 8))(v3);
            std::__shared_weak_count::__release_weak(v3);
          }
        }
        v8 = (std::__shared_weak_count *)v21;
        if ( v21 )
        {
          v9 = v21 + 1;
          __dmb(0xBu);
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          __dmb(0xBu);
          if ( !v10 )
          {
            (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v8 + 8))(v8);
            std::__shared_weak_count::__release_weak(v8);
          }
        }
        v11 = *(_DWORD **)(v2 + 4);
        if ( !v11 )
          goto LABEL_21;
        v12 = sub_164C70(*v11, 0);
        *(_QWORD *)(v2 + 24) = sub_164B90(**(_DWORD **)(v2 + 4), HIDWORD(v12), v12, HIDWORD(v12));
        *(_BYTE *)(v2 + 17) = 0;
        sub_15DCEC(&v20, v17, v2 + 12, v2 + 12, v2 + 16);
      }
      result = *(_DWORD *)(v2 + 4);
      if ( !result )
        goto LABEL_30;
      if ( !*(_BYTE *)(v2 + 18) )
      {
        if ( *(_BYTE *)(v2 + 17) )
          goto LABEL_30;
        v14 = *(unsigned __int8 *)(result + 4);
        __dmb(0xBu);
        result = v14 << 31;
        if ( !result )
          goto LABEL_30;
      }
      if ( !sub_15BD48(v2) )
      {
        v15 = *(std::__shared_weak_count **)(v2 + 8);
        result = 1;
        *(_DWORD *)(v2 + 4) = 0;
        *(_BYTE *)(v2 + 18) = 1;
        *(_DWORD *)(v2 + 8) = 0;
        if ( v15 )
        {
          result = (int)v15 + 4;
          __dmb(0xBu);
          do
            v16 = __ldrex((unsigned int *)result);
          while ( __strex(v16 - 1, (unsigned int *)result) );
          __dmb(0xBu);
          if ( !v16 )
          {
            (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v15 + 8))(v15);
            result = std::__shared_weak_count::__release_weak(v15);
          }
        }
LABEL_30:
        v1 = (_DWORD *)*v1;
        continue;
      }
      sub_15BEC4(v18, v1 + 3);
LABEL_21:
      v13 = (_DWORD *)*v1;
      sub_15DA90(&v20, v19, v1);
      result = sub_15D7C0(&v20, 0);
      v1 = v13;
    }
    while ( v1 );
  }
  return result;
}


// ======================================================================
// ADDR: 0x15e510
// SYMBOL: sub_15E510
// attributes: thunk
int sub_15E510()
{
  return sub_F9B64();
}


// ======================================================================
// ADDR: 0x15e514
// SYMBOL: sub_15E514
bool sub_15E514()
{
  int v0; // r0

  return dword_23DEEC && (v0 = *(_DWORD *)(dword_23DEEC + 88)) != 0 && *(_BYTE *)(v0 + 80) != 0;
}


// ======================================================================
// ADDR: 0x15e538
// SYMBOL: sub_15E538
bool sub_15E538()
{
  int v0; // r0

  return dword_23DEEC && (v0 = *(_DWORD *)(dword_23DEEC + 104)) != 0 && *(_BYTE *)(v0 + 80) != 0;
}


// ======================================================================
