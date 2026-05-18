// ADDR: 0xf9480
// SYMBOL: sub_F9480
int __fastcall sub_F9480(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  return sub_107188(&unk_B2CA0, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}


// ======================================================================
// ADDR: 0xf9804
// SYMBOL: sub_F9804
int __fastcall sub_F9804(int a1, int a2, int a3, int a4)
{
  int v5; // r0
  int v6; // r0
  int v7; // r1
  int result; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // [sp+0h] [bp-38h]
  int v14; // [sp+0h] [bp-38h]
  int v15; // [sp+4h] [bp-34h]
  int v16; // [sp+4h] [bp-34h]
  int v17; // [sp+8h] [bp-30h]
  int v18; // [sp+8h] [bp-30h]
  int v19; // [sp+Ch] [bp-2Ch]
  int v20; // [sp+Ch] [bp-2Ch]
  int v21; // [sp+10h] [bp-28h]
  int v22; // [sp+10h] [bp-28h]
  int v23; // [sp+14h] [bp-24h]
  int v24; // [sp+14h] [bp-24h]
  int v25; // [sp+18h] [bp-20h]
  int v26; // [sp+18h] [bp-20h]

  if ( !*(_BYTE *)a1 )
  {
    v7 = *(_DWORD *)(a1 + 40);
    if ( !v7 )
      goto LABEL_8;
    sub_107188(&unk_B2D90, v7, a3, a4, v13, v15, v17, v19, v21, v23, v25);
    v6 = 0;
    goto LABEL_7;
  }
  v5 = sub_E35A0(a1);
  if ( v5 )
  {
    sub_107188(
      &unk_B2D18,
      *(_DWORD *)(v5 + 8),
      COERCE_UNSIGNED_INT64(*(float *)(a1 + 16)),
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(a1 + 16))),
      COERCE_UNSIGNED_INT64(*(float *)(a1 + 20)),
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(a1 + 20))),
      COERCE_UNSIGNED_INT64(*(float *)(a1 + 24)),
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(a1 + 24))),
      COERCE_UNSIGNED_INT64(*(float *)(a1 + 28)),
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(a1 + 28))),
      COERCE_UNSIGNED_INT64(*(float *)(a1 + 32)));
    if ( !*(_DWORD *)(a1 + 40) )
    {
      v6 = sub_F9904(*(_DWORD *)(a1 + 24), 0, *(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20), *(float *)(a1 + 24), 1005, 0);
LABEL_7:
      *(_DWORD *)(a1 + 40) = v6;
    }
  }
LABEL_8:
  result = *(unsigned __int8 *)(a1 + 1);
  if ( *(_BYTE *)(a1 + 1) )
  {
    result = sub_E35A0(a1);
    if ( result )
    {
      result = *(_DWORD *)(a1 + 76);
      if ( !result )
      {
        result = sub_F9904(
                   *(_DWORD *)(a1 + 52),
                   0,
                   *(_DWORD *)(a1 + 44),
                   *(_DWORD *)(a1 + 48),
                   *(float *)(a1 + 52),
                   1005,
                   0);
        *(_DWORD *)(a1 + 76) = result;
      }
    }
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 76);
    if ( v9 )
    {
      sub_107188(&unk_B2D90, v9, a3, a4, v13, v15, v17, v19, v21, v23, v25);
      v12 = *(_DWORD *)(a1 + 80);
      if ( v12 )
      {
        sub_107188(&unk_B2E44, v12, v10, v11, v14, v16, v18, v20, v22, v24, v26);
        *(_DWORD *)(a1 + 80) = 0;
      }
      result = 0;
      *(_DWORD *)(a1 + 76) = 0;
      *(_BYTE *)(a1 + 1) = 0;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x104000
// SYMBOL: sub_104000
bool __fastcall sub_104000(int a1)
{
  int v2; // r0
  unsigned int v3; // r2
  unsigned int v4; // r1

  if ( *(_BYTE *)(a1 + 116) )
    return 1;
  v2 = a1 + 117;
  v3 = 0;
  do
  {
    v4 = v3;
    if ( v3 == 9 )
      break;
    ++v3;
  }
  while ( !*(_BYTE *)(v2 + v4) );
  return v4 < 9;
}


// ======================================================================
// ADDR: 0x10414a
// SYMBOL: sub_10414A
int __fastcall sub_10414A(int a1)
{
  return *(unsigned __int8 *)(*(_DWORD *)(a1 + 92) + 1100);
}


// ======================================================================
// ADDR: 0x104154
// SYMBOL: sub_104154
_DWORD *__fastcall sub_104154(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r1
  int v4; // r6
  int v5; // r2
  bool v6; // zf
  int v7; // r1
  _DWORD v8[4]; // [sp+0h] [bp-68h] BYREF
  _DWORD *v9; // [sp+10h] [bp-58h]
  int v10; // [sp+14h] [bp-54h]
  _DWORD v11[20]; // [sp+18h] [bp-50h] BYREF

  result = *(_DWORD **)(a1 + 8);
  if ( result )
  {
    result = *(_DWORD **)(a1 + 92);
    if ( result )
    {
      sub_F8910(a1, v11);
      (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 16))(a1, v11[12], v11[13], v11[14]);
      v3 = (_DWORD *)dword_2402E4;
      v4 = *(_DWORD *)dword_2402E4;
      *(_DWORD *)(*(_DWORD *)(a1 + 92) + 1348) = 0;
      v5 = *(unsigned __int8 *)(a1 + 96);
      *v3 = v5;
      sub_107188(
        &unk_B3984,
        *(_DWORD *)(a1 + 8),
        v5,
        &`vtable for'std::__function::__func<CPlayerPed::SetDead(void)::$_0,std::allocator<CPlayerPed::SetDead(void)::$_0>,void ()(void)>,
        &off_22B118,
        a1,
        v8[2],
        v8[3],
        v8,
        v10,
        v11[0]);
      result = v9;
      v6 = v8 == v9;
      *(_DWORD *)dword_2402E4 = v4;
      if ( v6 )
      {
        v7 = 4;
      }
      else
      {
        if ( !result )
          return result;
        v7 = 5;
      }
      return (_DWORD *)(*(int (**)(void))(*result + 4 * v7))();
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1041fa
// SYMBOL: sub_1041FA
bool __fastcall sub_1041FA(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + 92);
  return !v1 || *(float *)(v1 + 1348) <= 0.0;
}


// ======================================================================
// ADDR: 0x1042d8
// SYMBOL: sub_1042D8
int __fastcall sub_1042D8(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + 92);
  if ( v1 )
    return *(_DWORD *)(v1 + 1348);
  else
    return 0;
}


// ======================================================================
// ADDR: 0x1042f4
// SYMBOL: sub_1042F4
int __fastcall sub_1042F4(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 92);
  if ( result )
    *(_DWORD *)(result + 1348) = a2;
  return result;
}


// ======================================================================
// ADDR: 0x104550
// SYMBOL: sub_104550
unsigned int __fastcall sub_104550(int a1)
{
  _DWORD *v1; // r1
  bool v2; // zf
  int v4; // r0
  int v5; // r4
  int v6; // r5
  int v7; // r0
  int v8; // r4

  v1 = *(_DWORD **)(a1 + 92);
  if ( !v1 )
    return 0;
  v2 = *v1 == dword_23DF24 + 6716708;
  if ( *v1 != dword_23DF24 + 6716708 )
    v2 = v1[6] == 0;
  if ( v2 )
    return 0;
  v4 = sub_1045D8();
  if ( v4 )
  {
    v5 = v4;
    v6 = sub_F8548(v4);
    return v6 | (sub_163698(v5) << 16);
  }
  else
  {
    v7 = sub_1091B4(dword_247578, dword_24757C);
    v8 = sub_F851C(v7);
    return v8 | ((unsigned __int8)sub_220C40(dword_247580) << 16) | 0x80000000;
  }
}


// ======================================================================
// ADDR: 0x104680
// SYMBOL: sub_104680
bool __fastcall sub_104680(int a1)
{
  int v2; // r1
  unsigned int v3; // r0
  _BOOL4 result; // r0

  result = 1;
  if ( *(_DWORD *)(a1 + 92) )
  {
    if ( sub_1082F4(*(_DWORD *)(a1 + 8)) )
    {
      v3 = sub_104648(a1, v2);
      if ( v3 >= 0x10
        && v3 != 46
        && !*(_DWORD *)(*(_DWORD *)(a1 + 92) + 28 * *(unsigned __int8 *)(*(_DWORD *)(a1 + 92) + 1820) + 1456) )
      {
        return 0;
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1046bc
// SYMBOL: sub_1046BC
int __fastcall sub_1046BC(int a1)
{
  int result; // r0
  void (__fastcall ***v3)(_DWORD); // r5

  result = *(_DWORD *)(a1 + 92);
  if ( result )
  {
    result = sub_1082F4(*(_DWORD *)(a1 + 8));
    if ( result )
    {
      result = sub_163684(*(_DWORD *)(*(_DWORD *)(a1 + 92) + 1088) + 4);
      if ( result )
      {
        v3 = (void (__fastcall ***)(_DWORD))result;
        result = sub_163664();
        if ( result )
        {
          (**v3)(v3);
          return sub_163688(*(_DWORD *)(*(_DWORD *)(a1 + 92) + 1088) + 4, 0);
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x104700
// SYMBOL: sub_104700
bool __fastcall sub_104700(int a1)
{
  int v2; // r0
  int v3; // r1
  int v5; // r4

  if ( !*(_DWORD *)(a1 + 92) )
    return 0;
  if ( !sub_1082F4(*(_DWORD *)(a1 + 8)) )
    return 0;
  v2 = *(_DWORD *)(a1 + 92);
  v3 = *(_DWORD *)(v2 + 1424);
  if ( !v3 || !(*(unsigned __int8 *)(v2 + 1157) << 31) )
    return 0;
  v5 = sub_104648(a1, v3);
  if ( v5 == 46 )
  {
    sub_10479C(a1, 0, 0);
  }
  else
  {
    sub_10479C(a1, v5, 0);
    sub_107188(&unk_B3726, *(_DWORD *)(a1 + 8), -1, -1, 0, 0, 0, 0, 0, 0, 0);
  }
  return v5 != 46;
}


// ======================================================================
// ADDR: 0x104834
// SYMBOL: sub_104834
int __fastcall sub_104834(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 92);
  if ( result )
    return ((int (__fastcall *)(int, _DWORD))(dword_23DF24 + 4870909))(result, 0);
  return result;
}


// ======================================================================
// ADDR: 0x106b84
// SYMBOL: sub_106B84
int __fastcall sub_106B84(unsigned int a1)
{
  int result; // r0
  unsigned __int8 *v3; // r0
  int v4; // r5
  int v5; // r0
  _DWORD *v6; // r0
  int v7; // r0
  _DWORD *v8; // r0
  int v9; // r0
  int v10; // r1
  int v11; // r1
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // [sp+0h] [bp-20h]
  int v17; // [sp+4h] [bp-1Ch]
  int v18; // [sp+8h] [bp-18h]
  int v19; // [sp+Ch] [bp-14h]
  int v20; // [sp+10h] [bp-10h]
  int v21; // [sp+14h] [bp-Ch] BYREF
  int v22; // [sp+18h] [bp-8h]

  result = *(_DWORD *)(a1 + 92);
  if ( !result )
    return result;
  result = sub_F8C70(a1);
  if ( !result )
    return result;
  result = sub_1082F4(*(_DWORD *)(a1 + 8));
  if ( !result )
    return result;
  v3 = *(unsigned __int8 **)(a1 + 88);
  if ( v3 )
  {
    v4 = *v3;
    if ( v4 == 2 )
    {
      v5 = *(_DWORD *)(a1 + 92);
      if ( (!v5
         || (*(_BYTE *)(v5 + 1157) & 0x10) != 0
         || (v6 = *(_DWORD **)(*(_DWORD *)(v5 + 1088) + 16)) == 0
         || *v6 - dword_23DF24 != 6736952)
        && *(_DWORD *)(*(_DWORD *)(**(_DWORD **)(dword_23DEF4 + 944) + 5052) + 28) != a1 )
      {
        sub_106164(a1);
      }
      v4 = 2;
LABEL_22:
      if ( *(_BYTE *)(a1 + 57) )
        sub_1062F4((_BYTE *)a1);
      if ( v4 == 10 )
      {
        if ( !sub_1064BC(a1) )
          sub_10650C(a1);
        v4 = 10;
        goto LABEL_44;
      }
      goto LABEL_38;
    }
  }
  else
  {
    v4 = 0;
  }
  v7 = *(_DWORD *)(a1 + 92);
  if ( v7 )
  {
    if ( (*(_BYTE *)(v7 + 1157) & 0x10) == 0 )
    {
      v8 = *(_DWORD **)(*(_DWORD *)(v7 + 1088) + 16);
      if ( v8 )
      {
        if ( *v8 - dword_23DF24 == 6736952 )
          sub_1061F8(a1);
      }
    }
  }
  if ( (unsigned int)(v4 - 5) > 3 )
  {
    if ( *(_BYTE *)(a1 + 57) )
      sub_1062F4((_BYTE *)a1);
  }
  else
  {
    switch ( v4 )
    {
      case 5:
        v9 = 0;
        break;
      case 6:
        v9 = 1;
        break;
      case 7:
        v9 = 2;
        break;
      case 8:
        v9 = 3;
        break;
      default:
        goto LABEL_22;
    }
    v11 = *(unsigned __int8 *)(a1 + 57);
    HIBYTE(v21) = v9;
    if ( v11 )
    {
      if ( *(unsigned __int8 *)(a1 + 56) == v9 )
      {
        sub_106334(a1);
        goto LABEL_38;
      }
      sub_1062F4((_BYTE *)a1);
    }
    sub_106248((_BYTE *)a1, (unsigned __int8 *)&v21 + 3);
  }
LABEL_38:
  if ( sub_1064BC(a1) )
    sub_1062F4((_BYTE *)a1);
  if ( v4 == 11 )
  {
    if ( !*(_BYTE *)(a1 + 65) )
    {
      BYTE2(v21) = 1;
      sub_106544(a1, (char *)&v21 + 2);
    }
    v4 = 11;
    goto LABEL_49;
  }
LABEL_44:
  if ( *(_BYTE *)(a1 + 65) )
  {
    BYTE1(v21) = 0;
    sub_106544(a1, (char *)&v21 + 1);
  }
  if ( (v4 & 0xFC) == 0x14 )
  {
    switch ( v4 )
    {
      case 20:
        v12 = 1;
        goto LABEL_61;
      case 21:
        v12 = 4;
        goto LABEL_61;
      case 22:
        v12 = 2;
        goto LABEL_61;
      case 23:
        v12 = 3;
LABEL_61:
        v13 = *(unsigned __int8 *)(a1 + 59);
        LOBYTE(v21) = v12;
        if ( v13 == v12 )
          sub_1067FC(a1);
        else
          sub_106580(a1, &v21);
        break;
      default:
        if ( *(_BYTE *)(a1 + 59) )
          sub_10679C(a1);
        break;
    }
    goto LABEL_64;
  }
LABEL_49:
  if ( *(_BYTE *)(a1 + 59) )
    sub_10679C(a1);
  if ( v4 == 24 )
  {
    if ( *(_BYTE *)(a1 + 66) )
    {
      sub_1056D0(a1);
    }
    else
    {
      *(_BYTE *)(a1 + 68) = 1;
      *(_BYTE *)(a1 + 66) = 1;
    }
    v4 = 24;
    goto LABEL_69;
  }
LABEL_64:
  if ( *(_BYTE *)(a1 + 66) )
  {
    *(_BYTE *)(a1 + 68) = 0;
    *(_BYTE *)(a1 + 66) = 0;
  }
  if ( v4 == 25 )
  {
    if ( *(_BYTE *)(a1 + 67) )
      sub_1056D0(a1);
    else
      *(_WORD *)(a1 + 67) = 257;
    goto LABEL_75;
  }
LABEL_69:
  if ( *(_BYTE *)(a1 + 67) )
    *(_WORD *)(a1 + 67) = 0;
  if ( v4 == 68 )
  {
    if ( !*(_BYTE *)(a1 + 64) )
      sub_106944(a1);
    goto LABEL_77;
  }
LABEL_75:
  if ( *(_BYTE *)(a1 + 64) )
    sub_106A40(a1);
LABEL_77:
  result = *(_DWORD *)(a1 + 92);
  if ( result )
  {
    result = *(_DWORD *)(a1 + 104);
    if ( result )
    {
      result = sub_104648(a1, v10);
      if ( result != 46 )
      {
        sub_107188(&unk_B369A, *(_DWORD *)(a1 + 104), 0, 0, 0, 0, 0, 0, 0, v21, v22);
        result = sub_107188(&unk_B36AE, *(_DWORD *)(a1 + 104), v14, v15, v16, v17, v18, v19, v20, v21, v22);
        *(_DWORD *)(a1 + 104) = 0;
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x13f048
// SYMBOL: sub_13F048
unsigned int __fastcall sub_13F048(int a1)
{
  unsigned int result; // r0
  int v3; // r6
  _DWORD *v4; // r1
  _DWORD *v5; // r2
  int v6; // r5
  __int64 v7; // d17
  int v8; // r0
  int v9; // r1
  float v10; // s0
  int v11; // r0
  float v12; // s0
  int v13; // r0
  char v14; // r5
  char v15; // r0
  int v16; // r0
  int v17; // r5
  double v18; // d16
  int v19; // r3
  int v20; // r12
  int *v21; // r1
  int *v22; // r2
  float v23; // r0
  int v24; // [sp+60h] [bp-1E8h]
  _BYTE v25[276]; // [sp+64h] [bp-1E4h] BYREF
  __int64 v26; // [sp+178h] [bp-D0h] BYREF
  __int64 v27; // [sp+180h] [bp-C8h]
  float v28; // [sp+18Ch] [bp-BCh] BYREF
  float v29; // [sp+190h] [bp-B8h]
  int v30; // [sp+194h] [bp-B4h]
  _DWORD v31[12]; // [sp+198h] [bp-B0h] BYREF
  int v32; // [sp+1C8h] [bp-80h]
  int v33; // [sp+1CCh] [bp-7Ch]
  int v34; // [sp+1D0h] [bp-78h]
  char v35; // [sp+1DBh] [bp-6Dh] BYREF
  __int16 v36; // [sp+1DCh] [bp-6Ch] BYREF
  __int16 v37; // [sp+1DEh] [bp-6Ah] BYREF
  _BYTE src[63]; // [sp+1E0h] [bp-68h] BYREF
  char v39[41]; // [sp+21Fh] [bp-29h] BYREF

  result = *(_DWORD *)(a1 + 28);
  if ( result )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
    if ( v3 )
    {
      memset(src, 0, sizeof(src));
      result = sub_104326(result);
      if ( result )
      {
        v5 = *(_DWORD **)(v3 + 60004);
        v4 = *(_DWORD **)(v3 + 60000);
        if ( v4 != v5 )
        {
          while ( *(_DWORD *)(v3 + 4 * *v4 + 8000) != result )
          {
            if ( ++v4 == v5 )
              return result;
          }
        }
        if ( v4 != v5 )
        {
          *(_WORD *)src = *v4;
          result = *(unsigned __int16 *)src >> 4;
          if ( result <= 0x7C )
          {
            result = sub_F2396(v3, *(unsigned __int16 *)src);
            if ( result )
            {
              v6 = *(_DWORD *)(v3 + 4 * *(unsigned __int16 *)src);
              if ( v6 )
              {
                *(_WORD *)&src[6] = sub_104BA4(*(_DWORD *)(a1 + 28), &v37, &v36, &v35, 1);
                *(_WORD *)&src[4] = v36;
                src[54] = src[54] & 0x3F | (v35 << 6);
                *(_WORD *)&src[2] = v37;
                sub_F8910(v6, v31);
                v24 = v6;
                sub_F8994(v6, &v28);
                v26 = 1065353216LL;
                v27 = 0LL;
                sub_17D12C(
                  &v26,
                  v31[0],
                  v31[1],
                  v31[2],
                  v31[3],
                  v31[4],
                  v31[5],
                  v31[6],
                  v31[7],
                  v31[8],
                  v31[9],
                  v31[10],
                  v31[11],
                  v32,
                  v33,
                  v34);
                sub_17D2F2(&v26);
                *(_QWORD *)&src[8] = v26;
                *(_QWORD *)&src[16] = v27;
                if ( COERCE_FLOAT(sub_108700(*(float *)&v26, *(float *)(a1 + 234))) < 0.00001
                  && COERCE_FLOAT(sub_108700(*(float *)&src[12], *(float *)(a1 + 238))) < 0.00001
                  && COERCE_FLOAT(sub_108700(*(float *)&src[16], *(float *)(a1 + 242))) < 0.00001
                  && COERCE_FLOAT(sub_108700(*(float *)&src[20], *(float *)(a1 + 246))) < 0.00001 )
                {
                  v7 = *(_QWORD *)(a1 + 242);
                  *(_QWORD *)&src[8] = *(_QWORD *)(a1 + 234);
                  *(_QWORD *)&src[16] = v7;
                }
                *(_DWORD *)&src[24] = v32;
                *(_DWORD *)&src[28] = v33;
                *(_DWORD *)&src[32] = v34;
                *(float *)&src[36] = v28;
                *(float *)&src[40] = v29;
                *(_DWORD *)&src[44] = v30;
                if ( COERCE_FLOAT(sub_109AB4(v6)) < 250.0 )
                  sub_109AD0(v6, 1132068864);
                v8 = sub_109AB4(v6);
                v9 = *(_DWORD *)(a1 + 28);
                *(_DWORD *)&src[48] = v8;
                v10 = COERCE_FLOAT(sub_1042D8(v9));
                v11 = *(_DWORD *)(a1 + 28);
                src[52] = (unsigned int)v10;
                v12 = COERCE_FLOAT(sub_104300(v11));
                v13 = *(_DWORD *)(a1 + 28);
                v14 = src[54];
                src[53] = (unsigned int)v12;
                v15 = sub_104648(v13, (unsigned int)v12);
                *(_WORD *)&src[57] = 0;
                src[54] ^= (v15 ^ v14) & 0x3F;
                v16 = sub_109E00(v24);
                if ( v16 && (v17 = v16, *(_DWORD *)(v16 + 12)) && sub_109E78(v16) == v24 )
                {
                  sub_109C00(v24, v17);
                  v19 = *(_DWORD *)(v17 + 12);
                  LOWORD(v20) = -1;
                  if ( v19 )
                  {
                    v22 = *(int **)(v3 + 60004);
                    v21 = *(int **)(v3 + 60000);
                    if ( v21 != v22 )
                    {
                      while ( *(_DWORD *)(v3 + 4 * *v21 + 8000) != v19 )
                      {
                        if ( ++v21 == v22 )
                          goto LABEL_45;
                      }
                    }
                    if ( v21 != v22 )
                      v20 = *v21;
                  }
LABEL_45:
                  *(_WORD *)&src[57] = v20;
                }
                else
                {
                  sub_109C00(v24, 0);
                }
                if ( sub_F8A2C(v24) == 538 || sub_F8A2C(v24) == 537 || sub_F8A2C(v24) == 449 )
                {
                  result = sub_109F08(v24);
                  *(_DWORD *)&src[59] = result;
                  v18 = COERCE_FLOAT(result & 0x7FFFFFFF);
                  if ( sqrt(v29 * v29 + v28 * v28) > v18 + 0.01 )
                  {
                    if ( v18 >= 0.001 )
                      return result;
                    sub_F89BC(v24, 0, 0, 0);
                    memset(&src[36], 0, 12);
                  }
                }
                else
                {
                  if ( sub_109864(v24) == 2 || sub_109864(v24) == 6 )
                  {
                    v23 = COERCE_FLOAT(sub_109F32());
                  }
                  else if ( sub_F8A2C(v24) == 520 )
                  {
                    v23 = (float)(unsigned int)sub_109F24(v24);
                  }
                  else
                  {
                    v23 = 0.0;
                  }
                  *(float *)&src[59] = v23;
                }
                if ( sub_140978(a1, a1 + 226, src, 63) )
                {
                  sub_17D4A8(v25);
                  *(_DWORD *)(a1 + 452) = sub_F0B30();
                  v39[0] = -56;
                  sub_17D628(v25, v39, 8, 1);
                  sub_17D566(v25, src, 63);
                  (*(void (__fastcall **)(_DWORD, _BYTE *, int, int, int))(**(_DWORD **)(dword_23DEF4 + 528) + 32))(
                    *(_DWORD *)(dword_23DEF4 + 528),
                    v25,
                    1,
                    7,
                    1);
                  j_memcpy((void *)(a1 + 226), src, 0x3Fu);
                  sub_17D542(v25);
                }
                result = (unsigned __int16)(*(_WORD *)&src[57] - 1);
                if ( result <= 0x7CE )
                  return sub_1409B8(a1);
              }
            }
          }
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x13f4d0
// SYMBOL: sub_13F4D0
int __fastcall sub_13F4D0(int a1)
{
  _BYTE v3[276]; // [sp+20h] [bp-120h] BYREF
  __int16 v4; // [sp+134h] [bp-Ch] BYREF
  _WORD v5[5]; // [sp+136h] [bp-Ah] BYREF

  sub_17D4A8(v3);
  LOBYTE(v5[0]) = sub_105F20(*(_DWORD *)(a1 + 28), &v4);
  sub_17D628(v3, v5, 8, 1);
  v5[0] = v4;
  sub_17D628(v3, v5, 16, 1);
  (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(dword_23DEF4 + 528) + 108))(
    *(_DWORD *)(dword_23DEF4 + 528),
    &unk_23C740,
    v3,
    1,
    9,
    0,
    0,
    -1,
    0xFFFF,
    0xFFFF,
    0);
  return sub_17D542(v3);
}


// ======================================================================
// ADDR: 0x13f564
// SYMBOL: sub_13F564
int __fastcall sub_13F564(int a1)
{
  int v2; // r0
  _BYTE v4[276]; // [sp+8h] [bp-120h] BYREF
  _DWORD v5[3]; // [sp+11Ch] [bp-Ch] BYREF

  v2 = sub_17D4A8(v4);
  LOBYTE(v5[0]) = -51;
  sub_17D628(v2, v5, 8, 1);
  v5[0] = sub_FA350();
  sub_17D628(v4, v5, 32, 1);
  v5[0] = *(_DWORD *)(*(_DWORD *)(a1 + 28) + 72);
  sub_17D628(v4, v5, 32, 1);
  (*(void (__fastcall **)(_DWORD, _BYTE *, int, int, int))(**(_DWORD **)(dword_23DEF4 + 528) + 32))(
    *(_DWORD *)(dword_23DEF4 + 528),
    v4,
    1,
    6,
    1);
  return sub_17D542(v4);
}


// ======================================================================
// ADDR: 0x13f5e8
// SYMBOL: sub_13F5E8
unsigned int __fastcall sub_13F5E8(int a1, int a2)
{
  int v3; // r0
  unsigned int result; // r0
  int v5; // r0
  int v6; // r5
  int v7; // r6
  int v8; // r4
  int v9; // r12
  _DWORD *v10; // r1
  int v11; // r11
  int v12; // r3
  int v13; // r2
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int *v17; // r2
  int v18; // r1
  _BYTE v19[278]; // [sp+4h] [bp-134h] BYREF
  _WORD v20[15]; // [sp+11Ah] [bp-1Eh] BYREF

  v3 = sub_104648(*(_DWORD *)(a1 + 28), a2);
  if ( v3 == *(unsigned __int8 *)(a1 + 46) )
  {
    result = sub_F0B30() - *(_DWORD *)(a1 + 460);
    if ( result < 0x64 )
      return result;
  }
  else
  {
    *(_BYTE *)(a1 + 46) = v3;
  }
  v5 = sub_17D4A8(v19);
  LOBYTE(v20[0]) = -52;
  sub_17D628(v5, v20, 8, 1);
  v20[0] = -1;
  sub_17D628(v19, v20, 16, 1);
  v20[0] = -1;
  sub_17D628(v19, v20, 16, 1);
  v6 = a1 + 60;
  v7 = 0;
  v8 = 1456;
  v9 = 0;
  do
  {
    v10 = *(_DWORD **)(a1 + 28);
    v11 = a1 + v7;
    v12 = *(unsigned __int8 *)(a1 + v7 + 47);
    if ( v7 == v10[28] )
    {
      v13 = v10[27];
      if ( v13 != v12 || *(_DWORD *)(v6 + 4 * v7) != *(_DWORD *)(v10[23] + v8) )
        goto LABEL_12;
    }
    else
    {
      v14 = v10[23];
      v13 = *(_DWORD *)(v14 + v8 - 12);
      if ( v13 != v12 || *(_DWORD *)(v6 + 4 * v7) != *(_DWORD *)(v14 + v8) )
      {
LABEL_12:
        *(_BYTE *)(v11 + 47) = v13;
        v15 = v10[23];
        LOBYTE(v20[0]) = v7;
        *(_DWORD *)(v6 + 4 * v7) = *(_DWORD *)(v15 + v8);
        sub_17D628(v19, v20, 8, 1);
        LOBYTE(v20[0]) = *(_BYTE *)(v11 + 47);
        sub_17D628(v19, v20, 8, 1);
        v20[0] = *(_DWORD *)(v6 + 4 * v7);
        sub_17D628(v19, v20, 16, 1);
        v9 = 1;
      }
    }
    v8 += 28;
    ++v7;
  }
  while ( v8 != 1820 );
  if ( v9 << 31 )
  {
    v16 = sub_F0B30();
    v17 = *(int **)(dword_23DEF4 + 528);
    v18 = *v17;
    *(_DWORD *)(a1 + 460) = v16;
    (*(void (__fastcall **)(int *, _BYTE *, int, int, _DWORD))(v18 + 32))(v17, v19, 1, 6, 0);
  }
  return sub_17D542(v19);
}


// ======================================================================
// ADDR: 0x13f790
// SYMBOL: sub_13F790
int __fastcall sub_13F790(int a1, char a2)
{
  int v3; // r0
  _BYTE v5[279]; // [sp+20h] [bp-128h] BYREF
  _BYTE v6[17]; // [sp+137h] [bp-11h] BYREF

  *(_BYTE *)(a1 + 468) = a2;
  v3 = sub_17D4A8(v5);
  v6[0] = a2;
  sub_17D628(v3, v6, 8, 1);
  (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(dword_23DEF4 + 528) + 108))(
    *(_DWORD *)(dword_23DEF4 + 528),
    &unk_23C74C,
    v5,
    1,
    8,
    0,
    0,
    -1,
    0xFFFF,
    0xFFFF,
    0);
  return sub_17D542(v5);
}


// ======================================================================
// ADDR: 0x13f810
// SYMBOL: sub_13F810
unsigned int __fastcall sub_13F810(int a1)
{
  unsigned int result; // r0
  int v3; // r0
  _BYTE v4[276]; // [sp+1Ch] [bp-12Ch] BYREF
  __int64 v5; // [sp+130h] [bp-18h] BYREF

  if ( *(_BYTE *)(dword_23DEF4 + 521) )
  {
    result = sub_F0B30() - *(_DWORD *)(a1 + 464);
    if ( result >= 0x65 )
    {
      sub_140B58();
      if ( (unsigned __int16)v5 != *(unsigned __int16 *)(a1 + 420)
        || __PAIR64__(WORD2(v5), WORD1(v5)) != __PAIR64__(
                                                 *(unsigned __int16 *)(a1 + 424),
                                                 *(unsigned __int16 *)(a1 + 422))
        || HIWORD(v5) != *(unsigned __int16 *)(a1 + 426) )
      {
        v3 = sub_17D4A8(v4);
        sub_17D566(v3, &v5, 8);
        (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(dword_23DEF4 + 528) + 108))(
          *(_DWORD *)(dword_23DEF4 + 528),
          &unk_23C7F4,
          v4,
          1,
          9,
          0,
          0,
          -1,
          0xFFFF,
          0xFFFF,
          0);
        *(_QWORD *)(a1 + 420) = v5;
        sub_17D542(v4);
      }
      result = sub_F0B30();
      *(_DWORD *)(a1 + 464) = result;
    }
  }
  else
  {
    result = -1;
    *(_DWORD *)(a1 + 420) = -1;
    *(_DWORD *)(a1 + 424) = -1;
  }
  return result;
}


// ======================================================================
// ADDR: 0x13f8ec
// SYMBOL: sub_13F8EC
int __fastcall sub_13F8EC(int a1)
{
  __int16 v2; // r6
  int *v3; // r0
  int v4; // r0
  int v5; // r8
  int v6; // r0
  int v7; // r4
  int v8; // r0
  unsigned int v9; // r0
  int v10; // r0
  int v11; // r0
  unsigned int v13; // r6
  int v14; // r0
  unsigned int v15; // r0
  int v16; // r0
  int v17; // [sp+0h] [bp-1A8h]
  int v18; // [sp+4h] [bp-1A4h]
  int v19; // [sp+8h] [bp-1A0h]
  int v20; // [sp+Ch] [bp-19Ch]
  int v21; // [sp+10h] [bp-198h]
  int v22; // [sp+14h] [bp-194h]
  int v23; // [sp+18h] [bp-190h] BYREF
  __int16 v24; // [sp+1Ch] [bp-18Ch] BYREF
  __int16 v25; // [sp+1Eh] [bp-18Ah] BYREF
  _DWORD v26[16]; // [sp+20h] [bp-188h] BYREF
  _WORD v27[3]; // [sp+60h] [bp-148h] BYREF
  int v28; // [sp+66h] [bp-142h]
  int v29; // [sp+6Ah] [bp-13Eh]
  float v30; // [sp+6Eh] [bp-13Ah]
  _BYTE v31[279]; // [sp+74h] [bp-134h] BYREF
  char v32[29]; // [sp+18Bh] [bp-1Dh] BYREF

  sub_17D4A8(v31);
  v2 = sub_104BA4(*(_DWORD *)(a1 + 28), &v25, &v24, (char *)&v23 + 3, 1);
  sub_F8828(*(_DWORD *)(dword_23DEF0 + 4), v26);
  v3 = *(int **)(dword_23DEF4 + 944);
  if ( *v3 )
  {
    v21 = v3[1];
    if ( v21 )
    {
      v22 = *v3;
      v27[0] = v25;
      v28 = v26[12];
      v29 = v26[13];
      v30 = *(float *)&v26[14];
      v27[2] = v2;
      v27[1] = v24;
      v4 = sub_F0B30();
      v5 = *(_DWORD *)(a1 + 456);
      if ( v4 - v5 > (unsigned int)sub_140128(a1) )
      {
        *(_DWORD *)(a1 + 456) = sub_F0B30();
        v32[0] = -44;
        sub_17D628(v31, v32, 8, 1);
        sub_17D566(v31, v27, 18);
        v17 = 0;
        (*(void (__fastcall **)(_DWORD, _BYTE *, int, int))(**(_DWORD **)(dword_23DEF4 + 528) + 32))(
          *(_DWORD *)(dword_23DEF4 + 528),
          v31,
          1,
          6);
        v6 = sub_F0B30();
        v7 = *(_DWORD *)(a1 + 448);
        if ( v6 - v7 > (unsigned int)(2 * sub_140128(a1)) )
        {
          *(_DWORD *)(a1 + 448) = sub_F0B30();
          sub_13FB70(a1);
        }
      }
      sub_F97A8(dword_23DEF0, 0);
      sub_1042F4(*(_DWORD *)(a1 + 28), 1120403456);
      (*(void (__fastcall **)(_DWORD, int, int, _DWORD))(**(_DWORD **)(a1 + 28) + 16))(
        *(_DWORD *)(a1 + 28),
        v28,
        v29,
        v30 + 20.0);
      v8 = *(unsigned __int8 *)(a1 + 17);
      if ( v8 == 1 )
      {
        v9 = *(unsigned __int16 *)(a1 + 4);
        if ( v9 <= 0x3EC
          && *(_BYTE *)(v22 + v9 + 4020)
          && (v10 = **(_DWORD **)(v22 + 4 * v9 + 4), *(_DWORD *)(v10 + 296))
          && (v11 = *(unsigned __int8 *)(v10 + 25)) != 0
          && v11 != 32 )
        {
          v8 = 1;
        }
        else
        {
          v8 = 0;
          *(_BYTE *)(a1 + 8) = 0;
          *(_BYTE *)(a1 + 17) = 0;
        }
      }
      if ( !*(_BYTE *)(a1 + 8) )
      {
        if ( v8 == 2 )
        {
          v13 = *(unsigned __int16 *)(a1 + 4);
          if ( v13 >> 4 > 0x7C )
            return sub_17D542(v31);
          if ( !sub_F2396(v21, *(unsigned __int16 *)(a1 + 4)) )
            return sub_17D542(v31);
          v14 = *(_DWORD *)(v21 + 4 * v13);
          if ( !v14 )
            return sub_17D542(v31);
          sub_107188(
            word_B94C8,
            *(_DWORD *)(v14 + 8),
            *(unsigned __int8 *)(a1 + 16),
            2,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
        }
        else if ( v8 == 1 )
        {
          v15 = *(unsigned __int16 *)(a1 + 4);
          if ( v15 > 0x3EC )
            return sub_17D542(v31);
          if ( !*(_BYTE *)(v22 + v15 + 4020) )
            return sub_17D542(v31);
          v16 = *(_DWORD *)(**(_DWORD **)(v22 + 4 * v15 + 4) + 296);
          if ( !v16 )
            return sub_17D542(v31);
          sub_107188(
            word_B94B4,
            *(_DWORD *)(v16 + 8),
            *(unsigned __int8 *)(a1 + 16),
            2,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
        }
        else
        {
          if ( v8 )
            return sub_17D542(v31);
          sub_F885C(*(_DWORD *)(dword_23DEF0 + 4), 0);
          sub_104098(*(_DWORD *)(a1 + 28), 0.0, 0.0, 10.0);
          sub_F8630(*(_DWORD *)(dword_23DEF0 + 4), 50.0, 50.0, 50.0, 0.0, 0.0, 0.0);
          sub_F86AC(*(_DWORD *)(dword_23DEF0 + 4), 60.0, 60.0, 50.0, 2);
        }
        *(_BYTE *)(a1 + 8) = 1;
      }
    }
  }
  return sub_17D542(v31);
}


// ======================================================================
// ADDR: 0x13fb70
// SYMBOL: sub_13FB70
unsigned int __fastcall sub_13FB70(int a1)
{
  int v2; // r5
  unsigned int result; // r0
  int v4; // r1
  __int64 v5; // d17
  int v6; // r0
  float v7; // s16
  int v8; // r0
  unsigned int v9; // r1
  char v10; // r0
  unsigned int v11; // r0
  char v12; // r2
  int v13; // r0
  __int64 v14; // d17
  __int64 v15; // d19
  _BYTE v16[276]; // [sp+4h] [bp-14Ch] BYREF
  _BYTE s2[31]; // [sp+118h] [bp-38h] BYREF
  char v18[25]; // [sp+137h] [bp-19h] BYREF

  v2 = sub_10510C();
  result = sub_105118(*(_DWORD *)(a1 + 28));
  s2[0] = result;
  if ( result == 34 )
  {
    if ( sub_104648(*(_DWORD *)(a1 + 28), v4) == 33 )
      s2[0] = 53;
  }
  else if ( result > 0x41 )
  {
    return result;
  }
  v5 = *(_QWORD *)(v2 + 8);
  *(_QWORD *)&s2[1] = *(_QWORD *)v2;
  *(_QWORD *)&s2[9] = v5;
  *(_DWORD *)&s2[17] = *(_DWORD *)(v2 + 16);
  v6 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)&s2[21] = *(_DWORD *)(v2 + 20);
  *(_DWORD *)&s2[25] = sub_105130(v6);
  s2[30] = (unsigned int)(COERCE_FLOAT(sub_F803C()) * 255.0);
  v7 = COERCE_FLOAT(sub_F8000()) * 63.0;
  v8 = sub_105190(*(_DWORD *)(a1 + 28));
  v9 = (unsigned int)v7;
  if ( *(_DWORD *)(v8 + 4) == 2 )
  {
    v10 = v9 | 0xC0;
  }
  else
  {
    v11 = *(_DWORD *)(v8 + 8);
    v12 = (_BYTE)v11 << 6;
    if ( v11 > 1 )
      v12 = 0x80;
    v10 = (v9 & 0x3F) + v12;
  }
  s2[29] = v10;
  if ( (unsigned int)(sub_F0B30() - *(_DWORD *)(a1 + 452)) > 0x1F4
    || (result = memcmp((const void *)(a1 + 316), s2, 0x1Fu)) != 0 )
  {
    *(_DWORD *)(a1 + 452) = sub_F0B30();
    v13 = sub_17D4A8(v16);
    v18[0] = -53;
    sub_17D628(v13, v18, 8, 1);
    sub_17D566(v16, s2, 31);
    (*(void (__fastcall **)(_DWORD, _BYTE *, int, int, int))(**(_DWORD **)(dword_23DEF4 + 528) + 32))(
      *(_DWORD *)(dword_23DEF4 + 528),
      v16,
      1,
      7,
      1);
    v14 = *(_QWORD *)&s2[8];
    *(_QWORD *)(a1 + 316) = *(_QWORD *)s2;
    *(_QWORD *)(a1 + 324) = v14;
    v15 = *(_QWORD *)&s2[23];
    *(_QWORD *)(a1 + 331) = *(_QWORD *)&s2[15];
    *(_QWORD *)(a1 + 339) = v15;
    return sub_17D542(v16);
  }
  return result;
}


// ======================================================================
// ADDR: 0x13fcd8
// SYMBOL: sub_13FCD8
int __fastcall sub_13FCD8(int a1, unsigned int a2)
{
  int result; // r0
  int v4; // r5
  unsigned int v6; // r6
  int v7; // r1
  int v8; // r0
  __int64 v9; // d17
  _BYTE v10[276]; // [sp+1Ch] [bp-144h] BYREF
  __int64 v11; // [sp+130h] [bp-30h] BYREF
  __int64 v12; // [sp+138h] [bp-28h]
  _DWORD v13[7]; // [sp+144h] [bp-1Ch] BYREF

  result = *(_DWORD *)(dword_23DEF4 + 944);
  v4 = *(_DWORD *)(result + 4);
  if ( v4 )
  {
    result = sub_F2396(*(_DWORD *)(result + 4), a2);
    if ( result )
    {
      v6 = *(unsigned __int16 *)(a1 + 470);
      result = v6 >> 4;
      if ( v6 >> 4 <= 0x7C )
      {
        result = sub_F2396(v4, *(unsigned __int16 *)(a1 + 470));
        if ( result )
        {
          v7 = *(_DWORD *)(v4 + 4 * v6);
          if ( v7 )
          {
            sub_10A354((int)&v11, v7);
            result = (unsigned __int16)v11;
            if ( (unsigned __int16)v11 == a2 )
            {
              result = sub_10945C(&v11, (const void *)(a1 + 472));
              if ( !result )
              {
                result = sub_104326(*(_DWORD *)(a1 + 28));
                if ( result )
                {
                  v8 = sub_17D4A8(v10);
                  LOWORD(v13[0]) = v11;
                  sub_17D628(v8, v13, 16, 1);
                  v13[0] = HIDWORD(v11);
                  sub_17D628(v10, v13, 32, 1);
                  v13[0] = v12;
                  sub_17D628(v10, v13, 32, 1);
                  LOBYTE(v13[0]) = BYTE4(v12);
                  sub_17D628(v10, v13, 8, 1);
                  LOBYTE(v13[0]) = BYTE5(v12);
                  sub_17D628(v10, v13, 8, 1);
                  (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(dword_23DEF4 + 528) + 108))(
                    *(_DWORD *)(dword_23DEF4 + 528),
                    &unk_23C760,
                    v10,
                    1,
                    8,
                    0,
                    0,
                    -1,
                    0xFFFF,
                    0xFFFF,
                    0);
                  v9 = v12;
                  *(_QWORD *)(a1 + 472) = v11;
                  *(_QWORD *)(a1 + 480) = v9;
                  return sub_17D542(v10);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x13fe10
// SYMBOL: sub_13FE10
int __fastcall sub_13FE10(int a1)
{
  int v2; // r4

  if ( !*(_DWORD *)(a1 + 28) )
    return 1000;
  if ( *(_BYTE *)(dword_23DEF4 + 520) )
    return 15;
  v2 = dword_239040;
  return sub_F9A54() + v2;
}


// ======================================================================
// ADDR: 0x140090
// SYMBOL: sub_140090
unsigned int __fastcall sub_140090(int a1)
{
  int v2; // r0
  unsigned int result; // r0

  v2 = (unsigned __int8)byte_3142F4;
  __dmb(0xBu);
  if ( !(v2 << 31) && j___cxa_guard_acquire((__guard *)&byte_3142F4) )
  {
    dword_3142F0 = sub_F0B30();
    j___cxa_guard_release((__guard *)&byte_3142F4);
  }
  result = sub_F0B30() - dword_3142F0;
  if ( result >= 0x64 )
  {
    dword_3142F0 = sub_F0B30();
    result = ((int (__fastcall *)(int, _DWORD, int))(dword_23DF24 + 2821309))(190, 0, 1);
    if ( result )
      return sub_1410CC(a1);
  }
  return result;
}


// ======================================================================
// ADDR: 0x140128
// SYMBOL: sub_140128
int __fastcall sub_140128(int a1)
{
  int v2; // r4

  if ( !*(_DWORD *)(a1 + 28) )
    return 1000;
  if ( *(_BYTE *)(dword_23DEF4 + 520) )
    return 15;
  v2 = dword_23903C;
  return sub_F9A54() + v2;
}


// ======================================================================
// ADDR: 0x140170
// SYMBOL: sub_140170
int __fastcall sub_140170(int a1)
{
  __int16 v2; // r10
  int v3; // r0
  float v4; // r1
  __int64 v5; // d17
  float v6; // s0
  int v7; // r0
  float v8; // s0
  char v9; // r5
  int v10; // r0
  char v11; // r0
  int v12; // r0
  __int16 v13; // r0
  int v14; // s0
  int v15; // s2
  int v16; // s4
  int v17; // r5
  __int64 v19; // [sp+40h] [bp-1F0h] BYREF
  __int64 v20; // [sp+48h] [bp-1E8h]
  _DWORD s2[17]; // [sp+50h] [bp-1E0h] BYREF
  char v22; // [sp+97h] [bp-199h] BYREF
  __int16 v23; // [sp+98h] [bp-198h] BYREF
  __int16 v24; // [sp+9Ah] [bp-196h] BYREF
  _DWORD v25[3]; // [sp+9Ch] [bp-194h] BYREF
  _DWORD v26[12]; // [sp+A8h] [bp-188h] BYREF
  int v27; // [sp+D8h] [bp-158h]
  int v28; // [sp+DCh] [bp-154h]
  int v29; // [sp+E0h] [bp-150h]
  _BYTE v30[279]; // [sp+E8h] [bp-148h] BYREF
  char v31[49]; // [sp+1FFh] [bp-31h] BYREF

  sub_17D4A8(v30);
  v2 = sub_104BA4(*(_DWORD *)(a1 + 28), &v24, &v23, &v22, 1);
  v3 = *(_DWORD *)(a1 + 28);
  *(_QWORD *)((char *)&s2[4] + 2) = 1065353216LL;
  *(_QWORD *)((char *)&s2[6] + 2) = 0LL;
  sub_F8910(v3, v26);
  sub_F8994(*(_DWORD *)(a1 + 28), v25);
  LOWORD(s2[0]) = v24;
  LOWORD(s2[1]) = v2;
  HIWORD(s2[0]) = v23;
  *(_DWORD *)((char *)&s2[1] + 2) = v27;
  *(_DWORD *)((char *)&s2[2] + 2) = v28;
  *(_DWORD *)((char *)&s2[3] + 2) = v29;
  LOBYTE(s2[9]) = s2[9] & 0x3F | (v22 << 6);
  v19 = 1065353216LL;
  v20 = 0LL;
  sub_17D12C(
    &v19,
    v26[0],
    v26[1],
    v26[2],
    v26[3],
    v26[4],
    v26[5],
    v26[6],
    v26[7],
    v26[8],
    v26[9],
    v26[10],
    v26[11],
    v27,
    v28,
    v29);
  sub_17D2F2(&v19);
  v4 = *(float *)(a1 + 176);
  *(_QWORD *)((char *)&s2[4] + 2) = v19;
  *(_QWORD *)((char *)&s2[6] + 2) = v20;
  if ( COERCE_FLOAT(sub_108700(*(float *)&v19, v4)) < 0.00001
    && COERCE_FLOAT(sub_108700(*(float *)((char *)&s2[5] + 2), *(float *)(a1 + 180))) < 0.00001
    && COERCE_FLOAT(sub_108700(*(float *)((char *)&s2[6] + 2), *(float *)(a1 + 184))) < 0.00001
    && COERCE_FLOAT(sub_108700(*(float *)((char *)&s2[7] + 2), *(float *)(a1 + 188))) < 0.00001 )
  {
    v5 = *(_QWORD *)(a1 + 184);
    *(_QWORD *)((char *)&s2[4] + 2) = *(_QWORD *)(a1 + 176);
    *(_QWORD *)((char *)&s2[6] + 2) = v5;
  }
  v6 = COERCE_FLOAT(sub_1042D8(*(_DWORD *)(a1 + 28)));
  v7 = *(_DWORD *)(a1 + 28);
  BYTE2(s2[8]) = (unsigned int)v6;
  v8 = COERCE_FLOAT(sub_104300(v7));
  v9 = s2[9];
  v10 = *(_DWORD *)(a1 + 28);
  HIBYTE(s2[8]) = (unsigned int)v8;
  v11 = sub_104648(v10, (unsigned int)v8);
  LOBYTE(s2[9]) ^= (v11 ^ v9) & 0x3F;
  BYTE1(s2[9]) = sub_1408D0(a1);
  v12 = *(unsigned __int8 *)(a1 + 9);
  *(_DWORD *)((char *)&s2[9] + 2) = v25[0];
  *(_DWORD *)((char *)&s2[10] + 2) = v25[1];
  *(_DWORD *)((char *)&s2[11] + 2) = v25[2];
  if ( v12 )
  {
    v13 = *(_WORD *)(a1 + 418);
    v14 = *(_DWORD *)(a1 + 404);
    v15 = *(_DWORD *)(a1 + 408);
    v16 = *(_DWORD *)(a1 + 412);
  }
  else
  {
    v14 = 0;
    v13 = 0;
    v15 = 0;
    v16 = 0;
  }
  *(_BYTE *)(a1 + 44) = 1;
  v17 = *(_DWORD *)(a1 + 40);
  HIWORD(s2[15]) = v13;
  s2[16] = v17;
  *(_DWORD *)((char *)&s2[14] + 2) = v16;
  *(_DWORD *)((char *)&s2[13] + 2) = v15;
  *(_DWORD *)((char *)&s2[12] + 2) = v14;
  if ( (unsigned int)(sub_F0B30() - *(_DWORD *)(a1 + 452)) > 0x1F4 || memcmp((const void *)(a1 + 158), s2, 0x44u) )
  {
    *(_DWORD *)(a1 + 452) = sub_F0B30();
    v31[0] = -49;
    sub_17D628(v30, v31, 8, 1);
    sub_17D566(v30, s2, 68);
    (*(void (__fastcall **)(_DWORD, _BYTE *, int, int, int))(**(_DWORD **)(dword_23DEF4 + 528) + 32))(
      *(_DWORD *)(dword_23DEF4 + 528),
      v30,
      1,
      7,
      1);
    j_memcpy((void *)(a1 + 158), s2, 0x44u);
  }
  return sub_17D542(v30);
}


// ======================================================================
// ADDR: 0x140448
// SYMBOL: sub_140448
int __fastcall sub_140448(int a1)
{
  int v2; // r6
  __int16 v3; // r8
  int v4; // r0
  int v5; // r0
  _DWORD *v6; // r1
  _DWORD *v7; // r2
  char v8; // r6
  int v9; // r0
  float v10; // s0
  int v11; // r0
  float v12; // s0
  int v13; // r0
  char v14; // r0
  int v15; // r1
  char v16; // r2
  __int64 v17; // d17
  int v18; // r6
  __int64 v19; // d18
  int v20; // r0
  unsigned int v21; // r1
  _DWORD v23[13]; // [sp+8h] [bp-190h] BYREF
  __int64 v24; // [sp+3Ch] [bp-15Ch]
  __int64 v25; // [sp+48h] [bp-150h] BYREF
  __int64 v26; // [sp+50h] [bp-148h]
  __int64 v27; // [sp+58h] [bp-140h]
  char v28; // [sp+63h] [bp-135h] BYREF
  __int16 v29; // [sp+64h] [bp-134h] BYREF
  __int16 v30; // [sp+66h] [bp-132h] BYREF
  _BYTE v31[279]; // [sp+68h] [bp-130h] BYREF
  char v32[25]; // [sp+17Fh] [bp-19h] BYREF

  sub_17D4A8(v31);
  v2 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
  v3 = sub_104BA4(*(_DWORD *)(a1 + 28), &v30, &v29, &v28, 1);
  v4 = *(_DWORD *)(a1 + 28);
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v5 = sub_104326(v4);
  if ( v5 )
  {
    v7 = *(_DWORD **)(v2 + 60004);
    v6 = *(_DWORD **)(v2 + 60000);
    if ( v6 != v7 )
    {
      while ( *(_DWORD *)(v2 + 4 * *v6 + 8000) != v5 )
      {
        if ( ++v6 == v7 )
          return sub_17D542(v31);
      }
    }
    if ( v6 != v7 )
    {
      LOWORD(v25) = *(_WORD *)v6;
      if ( (unsigned __int16)v25 != 0xFFFF )
      {
        HIWORD(v25) = v30;
        v8 = v28;
        v9 = *(_DWORD *)(a1 + 28);
        WORD1(v26) = v3;
        LOWORD(v26) = v29;
        v10 = COERCE_FLOAT(sub_1042D8(v9));
        v11 = *(_DWORD *)(a1 + 28);
        BYTE4(v25) = (unsigned int)v10;
        v12 = COERCE_FLOAT(sub_104300(v11));
        v13 = *(_DWORD *)(a1 + 28);
        BYTE5(v25) = (unsigned int)v12;
        v14 = sub_1054CA(v13);
        v15 = *(_DWORD *)(a1 + 28);
        v16 = *(_BYTE *)(v15 + 66);
        BYTE2(v25) = v14 & 0x3F | ((v16 != 0) << 7) | (*(_BYTE *)(a1 + 35) << 6);
        BYTE3(v25) = sub_104648(v15, v15) & 0x3F | (v8 << 6);
        sub_F8910(*(_DWORD *)(a1 + 28), v23);
        HIDWORD(v26) = v23[12];
        v27 = v24;
        if ( sub_140978(a1, a1 + 292, &v25, 24) )
        {
          v32[0] = -45;
          sub_17D628(v31, v32, 8, 1);
          sub_17D566(v31, &v25, 24);
          (*(void (__fastcall **)(_DWORD, _BYTE *, int, int, int))(**(_DWORD **)(dword_23DEF4 + 528) + 32))(
            *(_DWORD *)(dword_23DEF4 + 528),
            v31,
            1,
            7,
            1);
          v17 = v26;
          v18 = *(unsigned __int8 *)(a1 + 35);
          v19 = v27;
          *(_QWORD *)(a1 + 292) = v25;
          *(_QWORD *)(a1 + 300) = v17;
          *(_QWORD *)(a1 + 308) = v19;
          v20 = sub_F0B30();
          v21 = 100;
          if ( !v18 )
            v21 = 1000;
          if ( v20 - *(_DWORD *)(a1 + 448) > v21 )
          {
            *(_DWORD *)(a1 + 448) = sub_F0B30();
            sub_13FB70(a1);
          }
        }
      }
    }
  }
  return sub_17D542(v31);
}


// ======================================================================
// ADDR: 0x140610
// SYMBOL: sub_140610
bool __fastcall sub_140610(int a1)
{
  int v1; // r8
  float *v3; // r4
  _BYTE *v4; // r6
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r0
  float v9; // r2
  double v10; // d16
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r1
  int v15; // r1
  int v17; // [sp+0h] [bp-158h]
  int v18; // [sp+0h] [bp-158h]
  int v19; // [sp+4h] [bp-154h]
  int v20; // [sp+4h] [bp-154h]
  int v21; // [sp+8h] [bp-150h]
  int v22; // [sp+8h] [bp-150h]
  int v23; // [sp+Ch] [bp-14Ch]
  int v24; // [sp+Ch] [bp-14Ch]
  int v25; // [sp+10h] [bp-148h]
  int v26; // [sp+10h] [bp-148h]
  int v27; // [sp+14h] [bp-144h]
  int v28; // [sp+14h] [bp-144h]
  int v29; // [sp+18h] [bp-140h]
  int v30; // [sp+18h] [bp-140h]
  _BYTE v31[276]; // [sp+1Ch] [bp-13Ch] BYREF
  double v32; // [sp+130h] [bp-28h] BYREF
  int v33; // [sp+138h] [bp-20h]

  v1 = *(unsigned __int8 *)(a1 + 36);
  if ( *(_BYTE *)(a1 + 36) )
  {
    v3 = (float *)(a1 + 118);
    if ( *(_BYTE *)(a1 + 45) )
    {
      *(_BYTE *)(a1 + 45) = 0;
      if ( dword_23DEEC )
      {
        v4 = *(_BYTE **)(dword_23DEEC + 100);
        if ( v4[80] )
          (*(void (__fastcall **)(_BYTE *, _DWORD))(*(_DWORD *)v4 + 36))(v4, 0);
        v4[80] = 0;
      }
    }
    _android_log_print(4, "AXL", "Spawn localplayer");
    sub_F8708(*(_DWORD *)(dword_23DEF0 + 4), v5, v6, v7, v17, v19, v21, v23, v25, v27, v29);
    sub_F85F0(*(_DWORD *)(dword_23DEF0 + 4));
    sub_F97A8(dword_23DEF0, 1);
    sub_10421C(*(_DWORD *)(a1 + 28), 1);
    if ( byte_239030 )
      byte_239030 = 0;
    else
      sub_104854(*(_DWORD *)(a1 + 28));
    sub_F9AEC(dword_23DEF0, *(_DWORD *)v3, *((_DWORD *)v3 + 1));
    v8 = *(_DWORD *)(a1 + 28);
    v9 = v3[3];
    v10 = *(double *)v3;
    v33 = *((_DWORD *)v3 + 2);
    v32 = v10;
    sub_104870(v8, (float *)&v32, v9);
    sub_103E90(*(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 113));
    sub_1048BC(*(_DWORD *)(a1 + 28));
    nullsub_9();
    v13 = *(_DWORD *)(a1 + 142);
    *(_WORD *)(a1 + 418) = -1;
    *(_DWORD *)(a1 + 404) = 0;
    *(_DWORD *)(a1 + 408) = 0;
    *(_DWORD *)(a1 + 412) = 0;
    *(_BYTE *)(a1 + 9) = 0;
    *(_BYTE *)(a1 + 26) = 0;
    *(_BYTE *)(a1 + 416) = 0;
    *(_DWORD *)(a1 + 12) = 0;
    if ( v13 != -1 )
      sub_104950(*(_DWORD *)(a1 + 28), v13, *(_DWORD *)(a1 + 154));
    v14 = *(_DWORD *)(a1 + 138);
    if ( v14 != -1 )
      sub_104950(*(_DWORD *)(a1 + 28), v14, *(_DWORD *)(a1 + 150));
    v15 = *(_DWORD *)(a1 + 134);
    if ( v15 != -1 )
      sub_104950(*(_DWORD *)(a1 + 28), v15, *(_DWORD *)(a1 + 146));
    sub_F9B1C(dword_23DEF0, v15, v11, v12, v18, v20, v22, v24, v26, v28, v30);
    (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 28) + 16))(
      *(_DWORD *)(a1 + 28),
      *(_DWORD *)v3,
      *((_DWORD *)v3 + 1),
      v3[2] + 0.5);
    sub_104A28(*(_DWORD *)(a1 + 28), *((_DWORD *)v3 + 3));
    *(_BYTE *)(a1 + 19) = 1;
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)a1 = 0;
    sub_17D4A8(v31);
    (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(dword_23DEF4 + 528) + 108))(
      *(_DWORD *)(dword_23DEF4 + 528),
      &unk_23C750,
      v31,
      1,
      9,
      0,
      0,
      -1,
      0xFFFF,
      0xFFFF,
      0);
    *(_DWORD *)(a1 + 436) = sub_F0B30() + 1000;
    sub_17D542(v31);
  }
  return v1 != 0;
}


// ======================================================================
// ADDR: 0x1407ec
// SYMBOL: sub_1407EC
int __fastcall sub_1407EC(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 28);
  *(_BYTE *)(a1 + 33) = 0;
  if ( result )
  {
    sub_104854(result);
    sub_1042F4(*(_DWORD *)(a1 + 28), 1120403456);
    return sub_10421C(*(_DWORD *)(a1 + 28), 0);
  }
  return result;
}


// ======================================================================
// ADDR: 0x14081c
// SYMBOL: sub_14081C
int __fastcall sub_14081C(int a1)
{
  int result; // r0
  _BYTE *v3; // r5

  result = *(unsigned __int8 *)(a1 + 45);
  if ( !result )
  {
    if ( dword_23DEEC )
    {
      v3 = *(_BYTE **)(dword_23DEEC + 100);
      if ( v3[80] != 1 )
        (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v3 + 36))(v3, 1);
      v3[80] = 1;
    }
    sub_140860();
    result = 1;
    *(_BYTE *)(a1 + 45) = 1;
  }
  return result;
}


// ======================================================================
