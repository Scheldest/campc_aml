// ADDR: 0xf4270
// SYMBOL: sub_F4270
int sub_F4270()
{
  return (unsigned __int8)byte_240038;
}


// ======================================================================
// ADDR: 0xf541c
// SYMBOL: sub_F541C
int sub_F541C()
{
  return (unsigned __int8)byte_240090;
}


// ======================================================================
// ADDR: 0xf7290
// SYMBOL: sub_F7290
int __fastcall sub_F7290(int a1)
{
  int result; // r0
  int v2; // r4
  int v3; // r9
  int v4; // r0
  int *v5; // r4
  _DWORD *v6; // r4
  _DWORD *v7; // r8
  int v8; // r0
  int v9; // r10
  int **v10; // r6
  int **v11; // r11
  int v12; // r0
  const char *v13; // r1
  int v14; // r0
  int v15; // r0
  int v16; // [sp+14h] [bp-74h]
  int v17; // [sp+18h] [bp-70h]
  int *v18; // [sp+1Ch] [bp-6Ch]
  int *v19; // [sp+20h] [bp-68h]
  int **v20; // [sp+28h] [bp-60h] BYREF
  int **v21; // [sp+2Ch] [bp-5Ch]
  int v22; // [sp+30h] [bp-58h]
  _BYTE *v23; // [sp+34h] [bp-54h] BYREF
  _BYTE *v24; // [sp+38h] [bp-50h]
  int v25; // [sp+3Ch] [bp-4Ch]
  int *v26; // [sp+40h] [bp-48h] BYREF
  int *v27; // [sp+44h] [bp-44h]
  int v28; // [sp+48h] [bp-40h]
  unsigned __int8 v29[8]; // [sp+4Ch] [bp-3Ch] BYREF
  void *v30; // [sp+54h] [bp-34h]
  _BYTE v31[8]; // [sp+58h] [bp-30h] BYREF
  void *v32; // [sp+60h] [bp-28h]
  int v33; // [sp+64h] [bp-24h]
  int v34; // [sp+68h] [bp-20h] BYREF

  v34 = a1;
  v26 = &v34;
  sub_F7976(v29, &dword_2402C0);
  result = *(_DWORD *)(*(_DWORD *)v29 + 24);
  v2 = *(_DWORD *)(*(_DWORD *)v29 + 20);
  v16 = result;
  if ( v2 != result )
  {
    do
    {
      std::string::basic_string(v29, v2);
      std::string::basic_string(v31, v2 + 12);
      v17 = v2;
      v33 = *(_DWORD *)(v2 + 24);
      v23 = v31;
      sub_F7BFA(&v26, &dword_2402B4, v31, &unk_92D14, &v23, &v20);
      v3 = v26[7];
      if ( v3 )
      {
        v28 = 0;
        v26 = 0;
        v27 = 0;
        v4 = sub_F61A4();
        sub_15EAE0(v4, v34, &v26);
        v5 = v26;
        v18 = v27;
        if ( v26 != v27 )
        {
          do
          {
            v25 = 0;
            v23 = 0;
            v24 = 0;
            ((void (__fastcall *)(int, void (__fastcall __spoils<R1,R2,R3,R12> *)(int, int), _BYTE **))&aConfigParseErr_0[dword_23DF24 + 9])(
              *v5,
              sub_F650E,
              &v23);
            v19 = v5;
            v7 = v23;
            v6 = v24;
            if ( v23 != v24 )
            {
              do
              {
                v8 = *v7;
                v21 = 0;
                v22 = 0;
                v9 = *(_DWORD *)(v8 + 24);
                v20 = 0;
                ((void (__fastcall *)(int, void (__fastcall __spoils<R1,R2,R3,R12> *)(int, int), int ***))(dword_23DF24 + 2187185))(
                  v9,
                  sub_F64E6,
                  &v20);
                v10 = v20;
                v11 = v21;
                if ( v20 != v21 )
                {
                  do
                  {
                    v12 = **v10;
                    if ( v12 )
                    {
                      v13 = (const char *)v30;
                      if ( !(v29[0] << 31) )
                        v13 = (const char *)&v29[1];
                      if ( sub_F6920((const char *)(v12 + 16), v13) )
                      {
                        v14 = sub_F61A4();
                        sub_15E8B8(v14, v34, *v10, v3);
                        v15 = sub_F61A4();
                        sub_15E87C(v15, v34, *v10, v9, v33);
                      }
                    }
                    ++v10;
                  }
                  while ( v10 != v11 );
                  v10 = v20;
                }
                if ( v10 )
                {
                  v21 = v10;
                  operator delete(v10);
                }
                ++v7;
              }
              while ( v7 != v6 );
              v7 = v23;
            }
            if ( v7 )
            {
              v24 = v7;
              operator delete(v7);
            }
            v5 = v19 + 1;
          }
          while ( v19 + 1 != v18 );
          v5 = v26;
        }
        if ( v5 )
        {
          v27 = v5;
          operator delete(v5);
        }
      }
      if ( v31[0] << 31 )
        operator delete(v32);
      if ( v29[0] << 31 )
        operator delete(v30);
      result = v16;
      v2 = v17 + 28;
    }
    while ( v17 + 28 != v16 );
  }
  return result;
}


// ======================================================================
// ADDR: 0xf74a4
// SYMBOL: sub_F74A4
int sub_F74A4()
{
  return (unsigned __int8)byte_2401EC;
}


// ======================================================================
// ADDR: 0x104108
// SYMBOL: sub_104108
int __fastcall sub_104108(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + 92);
  if ( v1 )
    return *((_BYTE *)&stru_480.st_value + v1 + 1) & 1;
  else
    return 0;
}


// ======================================================================
// ADDR: 0x10411a
// SYMBOL: sub_10411A
bool __fastcall sub_10411A(int a1)
{
  int v1; // r1
  int v2; // r0

  v1 = *(_DWORD *)(a1 + 92);
  v2 = *(_DWORD *)(v1 + 1424);
  if ( !v2 || !(*(unsigned __int8 *)(v1 + 1157) << 31) )
    return 0;
  if ( *(_DWORD *)(v2 + 1124) == v1 )
    return (unsigned int)*(unsigned __int16 *)(v2 + 38) - 569 < 2;
  return 1;
}


// ======================================================================
// ADDR: 0x10421c
// SYMBOL: sub_10421C
int __fastcall sub_10421C(int a1, int a2)
{
  int result; // r0
  int v5; // r3
  int v6; // r2
  int v7; // r3
  int v8; // r0
  int v9; // r1
  int v10; // r3
  int v11; // [sp+0h] [bp-48h] BYREF
  int v12; // [sp+4h] [bp-44h]
  int v13; // [sp+8h] [bp-40h]
  int v14; // [sp+Ch] [bp-3Ch]
  int v15; // [sp+10h] [bp-38h]
  int v16; // [sp+14h] [bp-34h]
  int v17; // [sp+18h] [bp-30h]
  int v18; // [sp+30h] [bp-18h]
  int v19; // [sp+34h] [bp-14h]
  int v20; // [sp+38h] [bp-10h]

  result = sub_1082F4(*(_DWORD *)(a1 + 8));
  if ( result )
  {
    v6 = *(_DWORD *)(a1 + 84);
    if ( a2 )
    {
      if ( v6 )
        *(_DWORD *)(a1 + 84) = v6 - 1;
      sub_107188(&unk_B36D6, *(unsigned __int8 *)(a1 + 96), 1, v5, v11, v12, v13, v14, v15, v16, v17);
      sub_107188(&unk_B36EA, *(_DWORD *)(a1 + 8), 0, v7, v11, v12, v13, v14, v15, v16, v17);
      v8 = *(_DWORD *)(a1 + 92);
      if ( !v8 || !(*(unsigned __int8 *)(v8 + 1157) << 31) )
      {
        sub_F8910(a1, &v11);
        (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)a1 + 16))(a1, v18, v19, v20);
      }
      result = dword_23DEF0;
      if ( dword_23DEF0 )
        return sub_F97A8(dword_23DEF0, 1);
    }
    else
    {
      v9 = *(unsigned __int8 *)(a1 + 96);
      *(_DWORD *)(a1 + 84) = v6 + 1;
      sub_107188(&unk_B36D6, v9, 0, v5, v11, v12, v13, v14, v15, v16, v17);
      sub_107188(&unk_B36EA, *(_DWORD *)(a1 + 8), 1, v10, v11, v12, v13, v14, v15, v16, v17);
      result = dword_23DEF0;
      if ( dword_23DEF0 )
        return sub_F97A8(dword_23DEF0, 0);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x105034
// SYMBOL: sub_105034
int __fastcall sub_105034(int a1, int a2, int a3, int a4)
{
  int v6; // r3
  int v7; // r0
  int v9; // r3
  int v10; // r1
  int v11; // [sp+0h] [bp-50h]
  int v12; // [sp+0h] [bp-50h]
  int v13; // [sp+4h] [bp-4Ch]
  int v14; // [sp+4h] [bp-4Ch]
  int v15; // [sp+8h] [bp-48h] BYREF
  int v16; // [sp+Ch] [bp-44h]
  int v17; // [sp+10h] [bp-40h]
  int v18; // [sp+14h] [bp-3Ch]
  int v19; // [sp+18h] [bp-38h]
  float v20; // [sp+38h] [bp-18h]
  float v21; // [sp+3Ch] [bp-14h]

  if ( *(_DWORD *)(a1 + 92) && *(_BYTE *)(a1 + 96) )
  {
    sub_10FDF0(0);
    sub_107188("`\bii", *(_DWORD *)(a1 + 8), a2, v6, v11, v13, v15, v16, v17, v18, v19);
    v7 = (unsigned __int8)byte_25C9DC;
    __dmb(0xBu);
    if ( !(v7 << 31) )
    {
      if ( j___cxa_guard_acquire((__guard *)&byte_25C9DC) )
      {
        dword_25C9D8 = dword_23DF24 + 6840224;
        j___cxa_guard_release((__guard *)&byte_25C9DC);
      }
    }
    return sub_10FDF0(*(_DWORD *)dword_25C9D8 >> 1);
  }
  else
  {
    sub_107188(&unk_B3802, a2, a3, a4, v11, v13, v15, v16, v17, v18, v19);
    sub_107188("`\bii", *(_DWORD *)(a1 + 8), a2, v9, v12, v14, v15, v16, v17, v18, v19);
    sub_F8910(a1, &v15);
    return sub_107188(
             &unk_B37C6,
             v10,
             COERCE_UNSIGNED_INT64(v20),
             HIDWORD(COERCE_UNSIGNED_INT64(v20)),
             COERCE_UNSIGNED_INT64(v21),
             HIDWORD(COERCE_UNSIGNED_INT64(v21)),
             v15,
             v16,
             v17,
             v18,
             v19);
  }
}


// ======================================================================
// ADDR: 0x105464
// SYMBOL: sub_105464
int __fastcall sub_105464(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + 92);
  if ( v1 )
    return sub_10833C(*(_DWORD *)(v1 + 1424));
  else
    return 0;
}


// ======================================================================
// ADDR: 0x109adc
// SYMBOL: sub_109ADC
int __fastcall sub_109ADC(int a1, int a2)
{
  int result; // r0
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r2
  int v15; // r3
  int v16; // r5
  int v17; // [sp+0h] [bp-18h]
  int v18; // [sp+0h] [bp-18h]
  int v19; // [sp+0h] [bp-18h]
  int v20; // [sp+0h] [bp-18h]
  int v21; // [sp+0h] [bp-18h]
  int v22; // [sp+4h] [bp-14h] BYREF
  int v23; // [sp+8h] [bp-10h]
  int v24; // [sp+Ch] [bp-Ch]
  int v25; // [sp+10h] [bp-8h]
  int v26; // [sp+14h] [bp-4h]
  int savedregs[2]; // [sp+18h] [bp+0h]

  result = *(_DWORD *)(a1 + 12);
  if ( result )
  {
    result = sub_108354(*(_DWORD *)(a1 + 8));
    if ( result )
    {
      if ( !sub_107188(word_B3DAA, a2, v5, v6, v17, v22, v23, v24, v25, v26, savedregs[0]) )
      {
        v10 = sub_F9CBC(a2, v7, v8, v9, v18, v22, v23, v24, v25, v26, savedregs[0]);
        sub_F9CCC(v10, v11, v12, v13, v19, v22, v23, v24, v25, v26, savedregs[0]);
        sub_107188(word_B3DBE, a2, v14, v15, v20, v22, v23, v24, v25, v26, savedregs[0]);
        v16 = 20;
        do
        {
          if ( sub_107188(word_B3DAA, a2, v8, v9, v18, v22, v23, v24, v25, v26, savedregs[0]) )
            break;
          usleep(0x3E8u);
          --v16;
        }
        while ( v16 );
      }
      if ( sub_107188(word_B3DAA, a2, v8, v9, v18, v22, v23, v24, v25, v26, savedregs[0]) )
        return sub_107188(word_B3DD2, *(_DWORD *)(a1 + 8), a2, (int)&v22, v21, v22, v23, v24, v25, v26, savedregs[0]);
      else
        return sub_2242C8(5, "AXL", "Can't load vehicle component %d", a2);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x109bc8
// SYMBOL: sub_109BC8
int __fastcall sub_109BC8(int a1, char a2, char a3)
{
  int v6; // r0
  int result; // r0

  if ( *(_DWORD *)(a1 + 12) && sub_108354(*(_DWORD *)(a1 + 8)) )
  {
    v6 = *(_DWORD *)(a1 + 12);
    *(_BYTE *)(v6 + 1081) = a3;
    *(_BYTE *)(v6 + 1080) = a2;
  }
  result = 1;
  *(_BYTE *)(a1 + 38) = a3;
  *(_BYTE *)(a1 + 39) = 1;
  *(_BYTE *)(a1 + 37) = a2;
  return result;
}


// ======================================================================
