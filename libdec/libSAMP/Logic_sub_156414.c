// ADDR: 0x156aec
// SYMBOL: sub_156AEC
int __fastcall sub_156AEC(int result, unsigned __int8 *a2, int a3)
{
  unsigned int v4; // r2
  unsigned int v5; // r1
  int v6; // r12
  unsigned __int8 *v7; // lr
  int v8; // r3
  int v9; // r11
  std::__itoa *v10; // r6
  int v11; // r1
  int v12; // r2
  int v13; // r0
  unsigned int v14; // r8
  unsigned __int8 *v15; // r5
  int v16; // r5
  int v17; // r3
  _DWORD *v18; // r0
  __int16 v19; // r1
  int v20; // r0
  _BYTE *v21; // r1
  int v22; // r0
  char v23; // r5
  int v24; // r3
  int v25; // r4
  char v26; // r1
  char *v27; // r3
  int v28; // r0
  unsigned int v29; // r3
  unsigned int v30; // r5
  int v31; // r4
  int v32; // r0
  int (*v33)(void); // r3
  _DWORD *exception; // r4
  int v35; // r0
  double v36; // d16
  int v37; // r0
  double v38; // d16
  unsigned __int8 *v39; // r1
  _DWORD *v40; // r4
  int v41; // [sp+Ch] [bp-7Ch]
  _DWORD *v43; // [sp+14h] [bp-74h]
  _BYTE v44[12]; // [sp+2Ch] [bp-5Ch] BYREF
  double v45; // [sp+38h] [bp-50h] BYREF
  int v46; // [sp+40h] [bp-48h]
  double v47; // [sp+48h] [bp-40h] BYREF
  int v48; // [sp+50h] [bp-38h]
  unsigned __int8 v49[12]; // [sp+54h] [bp-34h] BYREF
  unsigned __int8 v50; // [sp+60h] [bp-28h] BYREF
  int v51; // [sp+61h] [bp-27h] BYREF
  int v52; // [sp+65h] [bp-23h]
  __int16 v53; // [sp+69h] [bp-1Fh]

  v4 = *a2;
  v5 = *((_DWORD *)a2 + 1);
  if ( (v4 & 1) == 0 )
    v5 = v4 >> 1;
  if ( !v5 )
    return result;
  v43 = (_DWORD *)result;
  v6 = result + 78;
  v7 = a2 + 1;
  v8 = !(v4 & 1);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v41 = v6;
  do
  {
    v15 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
    if ( v8 << 31 )
      v15 = v7;
    v16 = *((unsigned __int8 *)v10 + (_DWORD)v15);
    v17 = byte_B9AB2[v16];
    if ( v13 )
      v14 = v16 & 0x3F | (v14 << 6);
    else
      v14 = (0xFFu >> v17) & v16;
    v13 = byte_B9AB2[16 * v13 + 256 + v17];
    if ( v13 == 1 )
    {
      v20 = v43[151];
      if ( (unsigned int)(v20 - 1) < 2 )
      {
        if ( v11 )
          v10 = (std::__itoa *)((char *)v10 - 1);
        if ( v20 != 1 )
        {
LABEL_40:
          v13 = 0;
          v11 = 0;
          v9 = v12;
          goto LABEL_41;
        }
        v21 = (char *)v43 + v12 + 78;
        v22 = v12 + 1;
        if ( a3 )
        {
          v23 = 102;
          *(_BYTE *)(v6 + v22) = 117;
          v24 = 6;
          *v21 = 92;
          v25 = 5;
          *(_WORD *)(v12 + v6 + 2) = 26214;
          v22 = v12 + 4;
          v26 = 100;
        }
        else
        {
          v23 = -65;
          *v21 = -17;
          v26 = -67;
          v24 = 3;
          v25 = 2;
        }
        *(_BYTE *)(v6 + v22) = v23;
        v28 = v12 + v25;
        v12 += v24;
        *(_BYTE *)(v6 + v28) = v26;
LABEL_38:
        if ( (unsigned int)(v12 - 500) <= 0xC )
        {
          (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*v43 + 4))(*v43, v6);
          v7 = a2 + 1;
          v6 = v41;
          v13 = 0;
          v12 = 0;
          v11 = 0;
          v9 = 0;
          goto LABEL_41;
        }
        goto LABEL_40;
      }
      if ( !v20 )
      {
        v52 = 0;
        v51 = 0;
        v50 = 18;
        v53 = 0;
        sub_1561FE((int)&v51, 11, 9, "%.2X", v16);
        exception = j___cxa_allocate_exception(0x10u);
        std::to_string((std::__ndk1 *)v44, v10);
        v35 = std::string::insert((int)v44, 0, "invalid UTF-8 byte at index ");
        v36 = *(double *)v35;
        v46 = *(_DWORD *)(v35 + 8);
        v45 = v36;
        *(_DWORD *)v35 = 0;
        *(_DWORD *)(v35 + 4) = 0;
        *(_DWORD *)(v35 + 8) = 0;
        v37 = std::string::append((int)&v45, ": 0x");
        v38 = *(double *)v37;
        v48 = *(_DWORD *)(v37 + 8);
        v47 = v38;
        *(_DWORD *)v37 = 0;
        *(_DWORD *)(v37 + 4) = 0;
        *(_DWORD *)(v37 + 8) = 0;
        sub_155FE4((int)v49, (int)&v47, &v50);
        sub_E9CB0(exception, 316, v49);
        j___cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'nlohmann::detail::type_error,
          (void (*)(void *))sub_E9438);
      }
      v13 = 1;
    }
    else
    {
      if ( !v13 )
      {
        switch ( v14 )
        {
          case 8u:
            v18 = v43;
            v19 = 25180;
            goto LABEL_37;
          case 9u:
            v18 = v43;
            v19 = 29788;
            goto LABEL_37;
          case 0xAu:
            v18 = v43;
            v19 = 28252;
            goto LABEL_37;
          case 0xBu:
            goto LABEL_30;
          case 0xCu:
            v18 = v43;
            v19 = 26204;
            goto LABEL_37;
          case 0xDu:
            v18 = v43;
            v19 = 29276;
            goto LABEL_37;
          default:
            if ( v14 == 34 )
            {
              v18 = v43;
              v19 = 8796;
              goto LABEL_37;
            }
            if ( v14 == 92 )
            {
              v18 = v43;
              v19 = 23644;
LABEL_37:
              *(_WORD *)((char *)v18 + v9 + 78) = v19;
              v12 = v9 + 2;
              goto LABEL_38;
            }
LABEL_30:
            if ( v14 < 0x20 )
              goto LABEL_31;
            if ( a3 && v14 >= 0x7F )
            {
              if ( HIWORD(v14) )
              {
                sub_1561FE(
                  (int)v43 + v9 + 78,
                  -1,
                  13,
                  "\\u%04x\\u%04x",
                  (unsigned __int16)((v14 >> 10) - 10304),
                  v14 & 0x3FF | 0xDC00);
                v7 = a2 + 1;
                v12 = v9 + 12;
              }
              else
              {
LABEL_31:
                sub_1561FE((int)v43 + v9 + 78, -1, 7, "\\u%04x", v14);
                v7 = a2 + 1;
                v12 = v9 + 6;
              }
            }
            else
            {
              v12 = v9 + 1;
              *((_BYTE *)v43 + v9 + 78) = v16;
            }
            v6 = v41;
            break;
        }
        goto LABEL_38;
      }
      if ( !a3 )
      {
        v27 = (char *)v43 + v9++;
        v27[78] = v16;
      }
      ++v11;
    }
LABEL_41:
    v29 = *a2;
    v10 = (std::__itoa *)((char *)v10 + 1);
    v30 = *((_DWORD *)a2 + 1);
    v31 = v29 & 1;
    if ( (v29 & 1) == 0 )
      v30 = v29 >> 1;
    v8 = !(v29 & 1);
  }
  while ( (unsigned int)v10 < v30 );
  if ( v13 )
  {
    result = v43[151];
    switch ( result )
    {
      case 1:
        (*(void (__fastcall **)(_DWORD, int, int))(*(_DWORD *)*v43 + 4))(*v43, v6, v12);
        v33 = *(int (**)(void))(*(_DWORD *)*v43 + 4);
        break;
      case 2:
        v32 = *v43;
LABEL_54:
        v33 = *(int (**)(void))(*(_DWORD *)v32 + 4);
        break;
      case 0:
        v52 = 0;
        v51 = 0;
        v53 = 0;
        v39 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
        v50 = 18;
        if ( !v31 )
          v39 = a2 + 1;
        sub_1561FE((int)&v51, 11, 9, "%.2X", v39[v30 - 1]);
        v40 = j___cxa_allocate_exception(0x10u);
        std::operator+<char>(v49, "incomplete UTF-8 string; last byte: 0x", &v50);
        sub_E9CB0(v40, 316, v49);
        j___cxa_throw(v40, (struct type_info *)&`typeinfo for'nlohmann::detail::type_error, (void (*)(void *))sub_E9438);
      default:
        return result;
    }
    return v33();
  }
  result = (int)v43;
  if ( v9 )
  {
    v32 = *v43;
    goto LABEL_54;
  }
  return result;
}


// ======================================================================
// ADDR: 0x156f54
// SYMBOL: sub_156F54
int __fastcall sub_156F54(_DWORD *a1, unsigned int a2)
{
  int v2; // r2
  int v4; // lr
  unsigned int v5; // r12

  if ( !a2 )
    return (**(int (__fastcall ***)(_DWORD, int))*a1)(*a1, 48);
  if ( a2 >= 0xA )
  {
    if ( a2 >= 0x64 )
    {
      v4 = 1;
      v5 = (41 * a2) >> 12;
      *(_WORD *)((char *)a1 + 9) = *(_WORD *)&a00010203040506_0[2 * (unsigned __int8)(a2 - 100 * v5)];
      goto LABEL_11;
    }
    v2 = 2;
  }
  else
  {
    v2 = 1;
  }
  if ( a2 < 0xA )
  {
    v4 = v2;
    LOBYTE(v5) = a2;
LABEL_11:
    *((_BYTE *)a1 + v4 + 7) = v5 + 48;
    return (*(int (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)*a1 + 4))(*a1, a1 + 2);
  }
  *(_WORD *)((char *)a1 + v2 + 6) = *(_WORD *)&a00010203040506_0[2 * a2];
  return (*(int (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)*a1 + 4))(*a1, a1 + 2);
}


// ======================================================================
// ADDR: 0x156fd8
// SYMBOL: sub_156FD8
int __fastcall sub_156FD8(_DWORD *a1, unsigned __int64 a2)
{
  _DWORD *v3; // r5
  unsigned int v4; // r11
  unsigned int v5; // r6
  _WORD *v6; // r2
  int v7; // r10
  unsigned int v9; // r4
  unsigned int v10; // r5
  __int64 v11; // r0
  _BOOL1 v12; // cf
  char *v13; // r2
  _WORD *v14; // r4
  __int64 v15; // r0
  _DWORD *v16; // [sp+4h] [bp-24h]
  _DWORD *v17; // [sp+8h] [bp-20h]

  if ( !a2 )
    return (**(int (__fastcall ***)(_DWORD, int))*a1)(*a1, 48);
  v3 = a1 + 2;
  v4 = HIDWORD(a2);
  v5 = a2;
  if ( a2 < 0xA )
  {
    v6 = (_WORD *)((char *)a1 + 9);
    v7 = 1;
LABEL_22:
    *((_BYTE *)v6 - 1) = v5 + 48;
    return (*(int (__fastcall **)(_DWORD, _DWORD *, int))(*(_DWORD *)*a1 + 4))(*a1, v3, v7);
  }
  v16 = a1 + 2;
  v17 = a1;
  v7 = 4;
  v9 = HIDWORD(a2);
  v10 = a2;
  while ( 1 )
  {
    if ( __PAIR64__(v9, v10) <= 0x63 )
    {
      v7 -= 2;
      goto LABEL_14;
    }
    if ( __CFSUB__(0, v9 >> 3, __CFSHR__(v9, 3)) )
      break;
    if ( __PAIR64__(v9, v10) < 0x2710 )
      goto LABEL_14;
    v11 = sub_2217B4(v10, v9, 10000, 0);
    v7 += 4;
    v12 = (unsigned int)&elf_hash_chain[1143] + 3 >= v10;
    v10 = v11;
    v12 = __CFSUB__(0, v9, v12);
    v9 = HIDWORD(v11);
    if ( v12 )
    {
      v7 -= 3;
      goto LABEL_14;
    }
  }
  --v7;
LABEL_14:
  v3 = v16;
  a1 = v17;
  v13 = (char *)v17 + v7;
  if ( __PAIR64__(v4, v5) < 0x64 )
  {
    v6 = v13 + 8;
  }
  else
  {
    v14 = v13 + 6;
    do
    {
      v15 = sub_2217B4(v5, v4, 100, 0);
      *v14-- = *(_WORD *)&a00010203040506_0[2 * (v5 - 100 * v15) + 200];
      v12 = __PAIR64__(v4, v5) <= 0x270F;
      v4 = HIDWORD(v15);
      v5 = v15;
    }
    while ( !v12 );
    v5 = v15;
    v3 = v16;
    a1 = v17;
    v6 = v14 + 1;
    v4 = HIDWORD(v15);
  }
  if ( __PAIR64__(v4, v5) < 0xA )
    goto LABEL_22;
  *(v6 - 1) = *(_WORD *)&a00010203040506_0[2 * v5 + 200];
  return (*(int (__fastcall **)(_DWORD, _DWORD *, int))(*(_DWORD *)*a1 + 4))(*a1, v3, v7);
}


// ======================================================================
// ADDR: 0x15711c
// SYMBOL: sub_15711C
int __fastcall sub_15711C(_DWORD *a1, unsigned __int64 a2)
{
  _DWORD *v3; // r10
  _BYTE *v4; // r1
  unsigned int v5; // r11
  int v6; // r4
  _WORD *v7; // r2
  int v8; // r8
  int v10; // r10
  unsigned int v11; // r5
  unsigned int v12; // r6
  __int64 v13; // r0
  bool v14; // cf
  unsigned int v15; // r6
  unsigned int v16; // r5
  __int64 v17; // r0
  char *v18; // r0
  _WORD *v19; // r5
  __int64 v20; // r0
  _BYTE *v22; // [sp+8h] [bp-20h]
  _BYTE *v23; // [sp+8h] [bp-20h]

  v3 = a1;
  if ( !a2 )
    return (**(int (__fastcall ***)(_DWORD, int))*a1)(*a1, 48);
  v4 = a1 + 2;
  v5 = HIDWORD(a2);
  v6 = a2;
  if ( SHIDWORD(a2) <= -1 )
  {
    v6 = -(int)a2;
    *v4 = 45;
    v5 = (unsigned __int64)-(__int64)a2 >> 32;
    if ( (unsigned __int64)-(__int64)a2 >= 0xA )
    {
      v10 = 4;
      v15 = -(int)a2;
      v16 = (unsigned __int64)-(__int64)a2 >> 32;
      v22 = a1 + 2;
      while ( 1 )
      {
        if ( __PAIR64__(v16, v15) <= 0x63 )
        {
          v10 -= 2;
          goto LABEL_25;
        }
        if ( __CFSUB__(0, v16 >> 3, __CFSHR__(v16, 3)) )
          break;
        if ( __PAIR64__(v16, v15) < 0x2710 )
          goto LABEL_25;
        v17 = sub_2217B4(v15, v16, 10000, 0);
        v10 += 4;
        v14 = v15 >= (unsigned int)&elf_hash_chain[1144];
        v15 = v17;
        v14 = v16 >= !v14;
        v16 = HIDWORD(v17);
        if ( !v14 )
        {
          v10 -= 3;
          goto LABEL_25;
        }
      }
      --v10;
LABEL_25:
      v4 = v22;
    }
    else
    {
      v10 = 1;
    }
    v8 = v10 + 1;
    v3 = a1;
  }
  else
  {
    if ( a2 < 0xA )
    {
      v7 = (_WORD *)((char *)a1 + 9);
      v8 = 1;
LABEL_35:
      *((_BYTE *)v7 - 1) = v6 + 48;
      return (*(int (__fastcall **)(_DWORD, _BYTE *, int))(*(_DWORD *)*v3 + 4))(*v3, v4, v8);
    }
    v8 = 4;
    v11 = HIDWORD(a2);
    v12 = a2;
    while ( 1 )
    {
      if ( __PAIR64__(v11, v12) <= 0x63 )
      {
        v8 -= 2;
        goto LABEL_22;
      }
      if ( __CFSUB__(0, v11 >> 3, __CFSHR__(v11, 3)) )
        break;
      if ( __PAIR64__(v11, v12) < 0x2710 )
        goto LABEL_22;
      v13 = sub_2217B4(v12, v11, 10000, 0);
      v8 += 4;
      v14 = v12 >= (unsigned int)&elf_hash_chain[1144];
      v12 = v13;
      v14 = v11 >= !v14;
      v11 = HIDWORD(v13);
      if ( !v14 )
      {
        v8 -= 3;
        goto LABEL_22;
      }
    }
    --v8;
LABEL_22:
    v4 = v3 + 2;
  }
  v18 = (char *)v3 + v8;
  if ( __PAIR64__(v5, v6) < 0x64 )
  {
    v7 = v18 + 8;
  }
  else
  {
    v23 = v4;
    v19 = v18 + 6;
    do
    {
      v20 = sub_2217B4(v6, v5, 100, 0);
      *v19-- = *(_WORD *)&a00010203040506_0[2 * (v6 - 100 * v20) + 400];
      v14 = __PAIR64__(v5, v6) <= 0x270F;
      v5 = HIDWORD(v20);
      v6 = v20;
    }
    while ( !v14 );
    v5 = HIDWORD(v20);
    v4 = v23;
    v7 = v19 + 1;
    v6 = v20;
  }
  if ( __PAIR64__(v5, v6) < 0xA )
    goto LABEL_35;
  *(v7 - 1) = *(_WORD *)&a00010203040506_0[2 * v6 + 400];
  return (*(int (__fastcall **)(_DWORD, _BYTE *, int))(*(_DWORD *)*v3 + 4))(*v3, v4, v8);
}


// ======================================================================
// ADDR: 0x157308
// SYMBOL: sub_157308
int __fastcall sub_157308(_DWORD *a1, __int64 a2)
{
  int v4; // r0

  if ( COERCE_DOUBLE(a2 & 0x7FFFFFFFFFFFFFFFLL) >= INFINITY && COERCE_DOUBLE(a2 & 0x7FFFFFFFFFFFFFFFLL) <= INFINITY )
    return (*(int (__fastcall **)(_DWORD, const char *, int))(*(_DWORD *)*a1 + 4))(*a1, "null", 4);
  v4 = sub_15736C(a1 + 2, a1 + 18);
  return (*(int (__fastcall **)(_DWORD, _DWORD *, int))(*(_DWORD *)*a1 + 4))(*a1, a1 + 2, v4 - (_DWORD)(a1 + 2));
}


// ======================================================================
