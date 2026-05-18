// ADDR: 0xf427c
// SYMBOL: sub_F427C
int __fastcall sub_F427C(char a1)
{
  unsigned __int8 v1; // r0

  v1 = a1 - 1;
  if ( v1 <= 0x22u )
    return byte_9298E[(char)v1];
  else
    return 0;
}


// ======================================================================
// ADDR: 0xf4298
// SYMBOL: sub_F4298
int __fastcall sub_F4298(int a1, int a2)
{
  int result; // r0

  switch ( a2 )
  {
    case 1:
      result = a1 + 4;
      break;
    case 2:
      result = a1 + 12;
      break;
    case 3:
      result = a1 + 16;
      break;
    case 4:
      result = a1 + 20;
      break;
    case 5:
      result = a1 + 24;
      break;
    case 6:
      result = a1 + 28;
      break;
    case 7:
      result = a1 + 40;
      break;
    case 8:
      result = a1 + 164;
      break;
    case 9:
      result = a1 + 168;
      break;
    case 10:
      result = a1 + 132;
      break;
    case 11:
      result = a1 + 124;
      break;
    case 12:
      result = a1 + 128;
      break;
    case 13:
      result = a1 + 148;
      break;
    case 14:
      result = a1 + 152;
      break;
    case 15:
      result = a1 + 160;
      break;
    case 16:
      result = a1 + 172;
      break;
    case 17:
      result = a1 + 176;
      break;
    case 18:
      result = a1 + 180;
      break;
    case 19:
      result = a1 + 184;
      break;
    case 20:
      result = a1 + 188;
      break;
    case 21:
      result = a1 + 192;
      break;
    case 22:
      result = a1 + 196;
      break;
    case 23:
      result = a1 + 212;
      break;
    case 24:
      result = a1 + 200;
      break;
    case 25:
      result = a1 + 32;
      break;
    case 26:
      result = a1 + 222;
      break;
    case 27:
      result = a1 + 220;
      break;
    case 28:
      result = a1 + 221;
      break;
    case 29:
      result = a1 + 116;
      break;
    case 30:
      result = a1 + 117;
      break;
    case 31:
      result = a1 + 118;
      break;
    case 32:
      result = a1 + 156;
      break;
    case 33:
      result = a1 + 216;
      break;
    case 34:
      result = a1 + 208;
      break;
    case 35:
      result = a1 + 204;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// ======================================================================
// ADDR: 0xf630c
// SYMBOL: sub_F630C
void __fastcall sub_F630C(int a1)
{
  int v2; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r6
  int v5; // r0
  int v6; // r0
  _DWORD *v7; // [sp+4h] [bp-1Ch] BYREF
  _DWORD *v8; // [sp+8h] [bp-18h]
  int v9; // [sp+Ch] [bp-14h]

  v9 = 0;
  v7 = 0;
  v8 = 0;
  v2 = sub_F61A4();
  sub_15EAE0(v2, a1, &v7);
  v3 = v7;
  v4 = v8;
  if ( v7 != v8 )
  {
    do
    {
      v5 = sub_F61A4();
      sub_15E950(v5, a1, *v3);
      v6 = sub_F61A4();
      sub_15EA00(v6, a1, *v3++);
    }
    while ( v3 != v4 );
    v3 = v7;
  }
  if ( v3 )
  {
    v8 = v3;
    operator delete(v3);
  }
}


// ======================================================================
// ADDR: 0xf6376
// SYMBOL: sub_F6376
void __fastcall sub_F6376(int a1, unsigned __int8 *a2)
{
  int v4; // r0
  _DWORD *v5; // r6
  _DWORD *v6; // r9
  size_t v7; // r0
  unsigned int v8; // r1
  unsigned int v9; // r2
  int v10; // r0
  int v11; // r0
  _DWORD *v12; // [sp+4h] [bp-24h] BYREF
  _DWORD *v13; // [sp+8h] [bp-20h]
  int v14; // [sp+Ch] [bp-1Ch]

  v14 = 0;
  v12 = 0;
  v13 = 0;
  v4 = sub_F61A4();
  sub_15EAE0(v4, a1, &v12);
  v5 = v12;
  v6 = v13;
  if ( v12 != v13 )
  {
    do
    {
      v7 = strlen((const char *)(*v5 + 172));
      v8 = *a2;
      v9 = *((_DWORD *)a2 + 1);
      if ( !(v8 << 31) )
        v9 = v8 >> 1;
      if ( v7 == v9 && !std::string::compare(a2, 0, -1, *v5 + 172, v7) )
      {
        v10 = sub_F61A4();
        sub_15E950(v10, a1, *v5);
        v11 = sub_F61A4();
        sub_15EA00(v11, a1, *v5);
      }
      ++v5;
    }
    while ( v5 != v6 );
    v5 = v12;
  }
  if ( v5 )
  {
    v13 = v5;
    operator delete(v5);
  }
}


// ======================================================================
// ADDR: 0xf6412
// SYMBOL: sub_F6412
void __fastcall sub_F6412(int a1, unsigned __int8 *a2, int a3, _DWORD *a4)
{
  int v7; // r0
  _DWORD *v8; // r4
  _DWORD *v9; // r11
  size_t v10; // r0
  unsigned int v11; // r1
  unsigned int v12; // r2
  int v13; // r0
  int v14; // r0
  _DWORD *v15; // [sp+8h] [bp-28h] BYREF
  _DWORD *v16; // [sp+Ch] [bp-24h]
  int v17; // [sp+10h] [bp-20h]

  v17 = 0;
  v15 = 0;
  v16 = 0;
  v7 = sub_F61A4();
  sub_15EAE0(v7, a1, &v15);
  v8 = v15;
  v9 = v16;
  if ( v15 != v16 )
  {
    do
    {
      v10 = strlen((const char *)(*v8 + 172));
      v11 = *a2;
      v12 = *((_DWORD *)a2 + 1);
      if ( !(v11 << 31) )
        v12 = v11 >> 1;
      if ( v10 == v12 && !std::string::compare(a2, 0, -1, *v8 + 172, v10) )
      {
        v13 = sub_F61A4();
        sub_15E99C(v13, a1);
        v14 = sub_F61A4();
        sub_15E8F0(v14, a1, *v8, *a4);
      }
      ++v8;
    }
    while ( v8 != v9 );
    v8 = v15;
  }
  if ( v8 )
  {
    v16 = v8;
    operator delete(v8);
  }
}


// ======================================================================
// ADDR: 0xf6ba4
// SYMBOL: sub_F6BA4
int __fastcall sub_F6BA4(int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // r8
  int v5; // r4
  int i; // r6
  _DWORD v7[3]; // [sp+Ch] [bp-24h] BYREF
  _DWORD v8[6]; // [sp+18h] [bp-18h] BYREF

  v7[0] = a1;
  v2 = sub_F61A4();
  sub_15E858(v2, a1);
  v7[2] = v7;
  result = sub_F7976(v8, &dword_2402C0);
  v4 = v8[0];
  v5 = *(_DWORD *)(v8[0] + 24);
  for ( i = *(_DWORD *)(v8[0] + 20); v5 != i; result = sub_F7A9E(v4 + 28, v5) )
    v5 -= 28;
  *(_DWORD *)(v4 + 24) = i;
  return result;
}


// ======================================================================
// ADDR: 0xf6c08
// SYMBOL: sub_F6C08
void __fastcall sub_F6C08(int a1, unsigned __int8 *a2)
{
  int v4; // r0
  _DWORD *v5; // r2
  int v6; // r9
  char *v7; // r10
  int **v8; // r6
  int **v9; // r11
  int v10; // r0
  const char *v11; // r1
  int v12; // r0
  int v13; // r0
  _DWORD *v14; // [sp+4h] [bp-54h]
  _DWORD *v15; // [sp+8h] [bp-50h]
  char *v16; // [sp+10h] [bp-48h]
  int **v17; // [sp+18h] [bp-40h] BYREF
  int **v18; // [sp+1Ch] [bp-3Ch]
  int v19; // [sp+20h] [bp-38h]
  char *v20; // [sp+24h] [bp-34h] BYREF
  char *v21; // [sp+28h] [bp-30h]
  int v22; // [sp+2Ch] [bp-2Ch]
  void *v23; // [sp+30h] [bp-28h] BYREF
  _DWORD *v24; // [sp+34h] [bp-24h]
  int v25; // [sp+38h] [bp-20h]

  v25 = 0;
  v23 = 0;
  v24 = 0;
  v4 = sub_F61A4();
  sub_15EAE0(v4, a1, &v23);
  v5 = v23;
  v14 = v24;
  if ( v23 != v24 )
  {
    v6 = 0;
    do
    {
      v22 = 0;
      v20 = 0;
      v21 = 0;
      v15 = v5;
      ((void (__fastcall *)(_DWORD, void (__fastcall __spoils<R1,R2,R3,R12> *)(int, int), char **))(dword_23DF24
                                                                                                  + 1935577))(
        *v5,
        sub_F650E,
        &v20);
      v7 = v20;
      v16 = v21;
      if ( v20 != v21 )
      {
        do
        {
          v19 = 0;
          v17 = 0;
          v18 = 0;
          ((void (__fastcall *)(_DWORD, void (__fastcall __spoils<R1,R2,R3,R12> *)(int, int), int ***))((char *)&loc_215FB0 + dword_23DF24))(
            *(_DWORD *)(*(_DWORD *)v7 + 24),
            sub_F64E6,
            &v17);
          v8 = v17;
          v9 = v18;
          if ( v17 != v18 )
          {
            do
            {
              v10 = **v8;
              if ( v10 )
              {
                v11 = (const char *)*((_DWORD *)a2 + 2);
                if ( !(*a2 << 31) )
                  v11 = (const char *)(a2 + 1);
                if ( sub_F6920((const char *)(v10 + 16), v11) )
                {
                  v12 = sub_F61A4();
                  sub_15EA98(v12, a1, *v8);
                  v13 = sub_F61A4();
                  sub_15EA4C(v13, a1, *v8);
                  v6 = 1;
                }
              }
              ++v8;
            }
            while ( v8 != v9 );
            v8 = v17;
          }
          if ( v8 )
          {
            v18 = v8;
            operator delete(v8);
          }
          v7 += 4;
        }
        while ( v7 != v16 );
        v7 = v20;
      }
      if ( v7 )
      {
        v21 = v7;
        operator delete(v7);
      }
      v5 = v15 + 1;
    }
    while ( v15 + 1 != v14 );
    if ( v6 << 31 )
      sub_F6D68(a1, a2);
  }
  if ( v23 )
  {
    v24 = v23;
    operator delete(v23);
  }
}


// ======================================================================
// ADDR: 0xf6f04
// SYMBOL: sub_F6F04
void __fastcall sub_F6F04(int a1, unsigned __int8 *a2, void *a3, _DWORD *a4)
{
  int v7; // r0
  _DWORD *v8; // r2
  int v9; // r9
  _DWORD *v10; // r8
  int v11; // r0
  int v12; // r10
  int **v13; // r5
  int **v14; // r11
  int v15; // r0
  const char *v16; // r1
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r6
  int v21; // r5
  void *v22; // [sp+8h] [bp-80h]
  _DWORD *v23; // [sp+10h] [bp-78h]
  _DWORD *v24; // [sp+14h] [bp-74h]
  _DWORD *v25; // [sp+1Ch] [bp-6Ch]
  int v26; // [sp+24h] [bp-64h]
  _DWORD *v28; // [sp+2Ch] [bp-5Ch] BYREF
  _DWORD *v29; // [sp+30h] [bp-58h]
  void *v30; // [sp+34h] [bp-54h]
  unsigned __int8 v31; // [sp+38h] [bp-50h]
  void *v32; // [sp+40h] [bp-48h]
  int v33; // [sp+44h] [bp-44h]
  int v34; // [sp+48h] [bp-40h] BYREF
  int **v35; // [sp+4Ch] [bp-3Ch]
  int v36; // [sp+50h] [bp-38h]
  void *v37; // [sp+54h] [bp-34h] BYREF
  _DWORD *v38; // [sp+58h] [bp-30h]
  int v39; // [sp+5Ch] [bp-2Ch]
  int v40; // [sp+60h] [bp-28h] BYREF
  int *v41; // [sp+68h] [bp-20h]

  v40 = a1;
  v37 = a3;
  sub_F7BFA(&v28, &dword_2402B4, a3, &unk_92D14, &v37, &v34);
  v26 = v28[7];
  if ( v26 )
  {
    v39 = 0;
    v37 = 0;
    v38 = 0;
    v7 = sub_F61A4();
    sub_15EAE0(v7, a1, &v37);
    v8 = v37;
    v23 = v38;
    if ( v37 != v38 )
    {
      v22 = a3;
      v9 = 0;
      do
      {
        v24 = v8;
        v30 = 0;
        v28 = 0;
        v29 = 0;
        ((void (__fastcall *)(_DWORD, void (__fastcall __spoils<R1,R2,R3,R12> *)(int, int), _DWORD **))(dword_23DF24 + 1935577))(
          *v8,
          sub_F650E,
          &v28);
        v10 = v28;
        v25 = v29;
        if ( v28 != v29 )
        {
          do
          {
            v11 = *v10;
            v35 = 0;
            v36 = 0;
            v34 = 0;
            v12 = *(_DWORD *)(v11 + 24);
            ((void (__fastcall *)(int, void (__fastcall __spoils<R1,R2,R3,R12> *)(int, int), int *))((char *)&loc_215FB0 + dword_23DF24))(
              v12,
              sub_F64E6,
              &v34);
            v14 = (int **)v34;
            v13 = v35;
            if ( (int **)v34 != v35 )
            {
              do
              {
                v15 = **v14;
                if ( v15 )
                {
                  v16 = (const char *)*((_DWORD *)a2 + 2);
                  if ( !(*a2 << 31) )
                    v16 = (const char *)(a2 + 1);
                  if ( sub_F6920((const char *)(v15 + 16), v16) )
                  {
                    v17 = sub_F61A4();
                    sub_15E8B8(v17, a1, *v14, v26);
                    v18 = sub_F61A4();
                    sub_15E87C(v18, a1, *v14, v12, *a4);
                    v9 = 1;
                  }
                }
                ++v14;
              }
              while ( v14 != v13 );
              v14 = (int **)v34;
            }
            if ( v14 )
            {
              v35 = v14;
              operator delete(v14);
            }
            ++v10;
          }
          while ( v10 != v25 );
          v10 = v28;
        }
        if ( v10 )
        {
          v29 = v10;
          operator delete(v10);
        }
        v8 = v24 + 1;
      }
      while ( v24 + 1 != v23 );
      if ( v9 << 31 )
      {
        v19 = std::string::basic_string(&v28, a2);
        std::string::basic_string(v19 + 12, v22);
        v33 = *a4;
        v41 = &v40;
        sub_F7976(&v34, &dword_2402C0);
        v20 = *(_DWORD *)(v34 + 20);
        v41 = &v40;
        sub_F7976(&v34, &dword_2402C0);
        v21 = *(_DWORD *)(v34 + 24);
        if ( v20 != v21 )
        {
          while ( !sub_F74D0(v20, &v28) )
          {
            v20 += 28;
            if ( v20 == v21 )
            {
              v20 = v21;
              break;
            }
          }
        }
        v41 = &v40;
        sub_F7976(&v34, &dword_2402C0);
        if ( v20 == *(_DWORD *)(v34 + 24) )
        {
          sub_F6D68(v40, a2);
          v41 = &v40;
          sub_F7976(&v34, &dword_2402C0);
          sub_F71C4(v34 + 20, &v28);
        }
        if ( v31 << 31 )
          operator delete(v32);
        if ( (unsigned __int8)v28 << 31 )
          operator delete(v30);
      }
    }
    if ( v37 )
    {
      v38 = v37;
      operator delete(v37);
    }
  }
}


// ======================================================================
