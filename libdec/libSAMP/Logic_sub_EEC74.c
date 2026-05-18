// ADDR: 0xef284
// SYMBOL: sub_EF284
int __fastcall sub_EF284(int a1, int a2)
{
  int result; // r0
  __int64 v4; // r0

  if ( !a2 || *(_BYTE *)(a1 + 4) )
  {
    v4 = *(int *)(*(_DWORD *)(a1 + 12) + 20);
    return sub_EFC1E(a1, HIDWORD(v4), v4 + 1900, (unsigned __int64)((int)v4 + 1900LL) >> 32);
  }
  else
  {
    result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 89, 69);
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}


// ======================================================================
// ADDR: 0xef2c6
// SYMBOL: sub_EF2C6
int __fastcall sub_EF2C6(int a1, int a2)
{
  int result; // r0
  __int64 v4; // r0
  int v5; // r2
  int v6; // r1
  int v7; // r3

  if ( !a2 || *(_BYTE *)(a1 + 4) )
  {
    v4 = *(int *)(*(_DWORD *)(a1 + 12) + 20) + 1900LL;
    sub_221404(v4, HIDWORD(v4), 100, 0);
    v6 = v5;
    if ( v7 < 0 )
      v6 = -v5;
    return sub_EFC70(a1, v6);
  }
  else
  {
    result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 121, 79);
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}


// ======================================================================
// ADDR: 0xef316
// SYMBOL: sub_EF316
int __fastcall sub_EF316(int a1, int a2)
{
  int result; // r0
  int v4; // r8
  int v5; // r1
  __int64 v6; // r2
  int v7; // r5
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r4
  int v12; // r1
  int v13; // r2

  if ( a2 && !*(_BYTE *)(a1 + 4) )
  {
    result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 67, 69);
LABEL_13:
    *(_DWORD *)(a1 + 8) = result;
    return result;
  }
  v4 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 20);
  LODWORD(v6) = sub_221404(v4 + 1900, (unsigned __int64)(v4 + 1900LL) >> 32, 100, 0);
  if ( (unsigned __int64)(v4 + 1900LL) < 0xFFFFFFFFFFFFFF9DLL )
  {
    if ( (unsigned __int64)(v4 + 1999LL) <= 0x2772 )
      return sub_EFC70(a1, v6);
    HIDWORD(v6) = v5;
    result = sub_DCFF4(*(_DWORD *)(a1 + 8), v6);
    goto LABEL_13;
  }
  v7 = *(_DWORD *)(a1 + 8);
  v8 = *(_DWORD *)(v7 + 8);
  v9 = v8 + 1;
  if ( *(_DWORD *)(v7 + 12) < (unsigned int)(v8 + 1) )
  {
    (**(void (__fastcall ***)(_DWORD))v7)(*(_DWORD *)(a1 + 8));
    v8 = *(_DWORD *)(v7 + 8);
    v9 = v8 + 1;
  }
  v10 = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(v7 + 8) = v9;
  *(_BYTE *)(v10 + v8) = 45;
  v11 = *(_DWORD *)(a1 + 8);
  result = *(_DWORD *)(v11 + 8);
  v12 = result + 1;
  if ( *(_DWORD *)(v11 + 12) < (unsigned int)(result + 1) )
  {
    (**(void (__fastcall ***)(int))v11)(v11);
    result = *(_DWORD *)(v11 + 8);
    v12 = result + 1;
  }
  v13 = *(_DWORD *)(v11 + 4);
  *(_DWORD *)(v11 + 8) = v12;
  *(_BYTE *)(v13 + result) = 48;
  return result;
}


// ======================================================================
// ADDR: 0xef3ec
// SYMBOL: sub_EF3EC
int __fastcall sub_EF3EC(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r1
  char *v5; // r1
  int result; // r0

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 12);
  if ( *(_BYTE *)(a1 + 4) )
  {
    v4 = *(_DWORD *)(v3 + 24);
    if ( v4 > 6 )
      v5 = "???";
    else
      v5 = off_22A9E8[v4];
    result = sub_DFA8C(v2, v5);
  }
  else
  {
    result = sub_EFCE0(v2, v3, *(_DWORD *)a1, 97, 0);
  }
  *(_DWORD *)(a1 + 8) = result;
  return result;
}


// ======================================================================
// ADDR: 0xef430
// SYMBOL: sub_EF430
int __fastcall sub_EF430(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r1
  char *v5; // r1
  int result; // r0

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 12);
  if ( *(_BYTE *)(a1 + 4) )
  {
    v4 = *(_DWORD *)(v3 + 24);
    if ( v4 > 6 )
      v5 = "?";
    else
      v5 = off_22AA04[v4];
    result = sub_DFA8C(v2, v5);
  }
  else
  {
    result = sub_EFCE0(v2, v3, *(_DWORD *)a1, 65, 0);
  }
  *(_DWORD *)(a1 + 8) = result;
  return result;
}


// ======================================================================
// ADDR: 0xef474
// SYMBOL: sub_EF474
int __fastcall sub_EF474(int a1, int a2)
{
  int result; // r0

  if ( !a2 || *(_BYTE *)(a1 + 4) )
    return sub_F03D8(a1, *(_DWORD *)(*(_DWORD *)(a1 + 12) + 24));
  result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 119, 79);
  *(_DWORD *)(a1 + 8) = result;
  return result;
}


// ======================================================================
// ADDR: 0xef4a8
// SYMBOL: sub_EF4A8
int __fastcall sub_EF4A8(int a1, int a2)
{
  int result; // r0
  int v4; // r1

  if ( !a2 || *(_BYTE *)(a1 + 4) )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 24);
    if ( !v4 )
      v4 = 7;
    return sub_F03D8(a1, v4);
  }
  else
  {
    result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 117, 79);
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}


// ======================================================================
// ADDR: 0xef4e4
// SYMBOL: sub_EF4E4
int __fastcall sub_EF4E4(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r1
  char *v5; // r1
  int result; // r0

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 12);
  if ( *(_BYTE *)(a1 + 4) )
  {
    v4 = *(_DWORD *)(v3 + 16);
    if ( v4 > 0xB )
      v5 = "???";
    else
      v5 = off_22AA20[v4];
    result = sub_DFA8C(v2, v5);
  }
  else
  {
    result = sub_EFCE0(v2, v3, *(_DWORD *)a1, 98, 0);
  }
  *(_DWORD *)(a1 + 8) = result;
  return result;
}


// ======================================================================
// ADDR: 0xef528
// SYMBOL: sub_EF528
int __fastcall sub_EF528(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r1
  char *v5; // r1
  int result; // r0

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 12);
  if ( *(_BYTE *)(a1 + 4) )
  {
    v4 = *(_DWORD *)(v3 + 16);
    if ( v4 > 0xB )
      v5 = "?";
    else
      v5 = off_22AA50[v4];
    result = sub_DFA8C(v2, v5);
  }
  else
  {
    result = sub_EFCE0(v2, v3, *(_DWORD *)a1, 66, 0);
  }
  *(_DWORD *)(a1 + 8) = result;
  return result;
}


// ======================================================================
// ADDR: 0xef56c
// SYMBOL: sub_EF56C
int __fastcall sub_EF56C(int a1, int a2)
{
  int result; // r0

  if ( !a2 || *(_BYTE *)(a1 + 4) )
    return sub_EFC70(a1, *(_DWORD *)(*(_DWORD *)(a1 + 12) + 16) + 1);
  result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 109, 79);
  *(_DWORD *)(a1 + 8) = result;
  return result;
}


// ======================================================================
// ADDR: 0xef5a2
// SYMBOL: sub_EF5A2
int __fastcall sub_EF5A2(int a1, int a2)
{
  int result; // r0
  int v4; // r0

  if ( !a2 || *(_BYTE *)(a1 + 4) )
  {
    v4 = (unsigned __int64)(2454267027LL
                          * (*(_DWORD *)(*(_DWORD *)(a1 + 12) + 28) - *(_DWORD *)(*(_DWORD *)(a1 + 12) + 24) + 7)) >> 32;
    return sub_EFC70(a1, (v4 >> 2) + ((unsigned int)v4 >> 31));
  }
  else
  {
    result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 85, 79);
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}


// ======================================================================
// ADDR: 0xef5ee
// SYMBOL: sub_EF5EE
int __fastcall sub_EF5EE(int a1, int a2)
{
  int result; // r0
  __int64 v4; // kr00_8
  int v5; // r2

  if ( !a2 || *(_BYTE *)(a1 + 4) )
  {
    v4 = *(_QWORD *)(*(_DWORD *)(a1 + 12) + 24);
    v5 = 1 - v4;
    if ( !(_DWORD)v4 )
      v5 = -6;
    return sub_EFC70(a1, (HIDWORD(v4) + v5 + 7) / 7);
  }
  else
  {
    result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 87, 79);
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}


// ======================================================================
// ADDR: 0xef646
// SYMBOL: sub_EF646
int __fastcall sub_EF646(int a1, int a2)
{
  int result; // r0
  int v4; // r1

  if ( !a2 || *(_BYTE *)(a1 + 4) )
  {
    v4 = sub_F0418(a1);
    return sub_EFC70(a1, v4);
  }
  else
  {
    result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 86, 79);
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}


// ======================================================================
// ADDR: 0xef67e
// SYMBOL: sub_EF67E
int __fastcall sub_EF67E(int a1, int a2)
{
  int result; // r0

  if ( !a2 || *(_BYTE *)(a1 + 4) )
    return sub_EFC70(a1, *(_DWORD *)(*(_DWORD *)(a1 + 12) + 12));
  result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 100, 79);
  *(_DWORD *)(a1 + 8) = result;
  return result;
}


// ======================================================================
// ADDR: 0xef6b4
// SYMBOL: sub_EF6B4
int __fastcall sub_EF6B4(int a1, int a2)
{
  int result; // r0
  unsigned int v4; // r0
  char *v5; // r8
  char v6; // r6
  int v7; // r5
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r4
  int v12; // r1
  int v13; // r2

  if ( !a2 || *(_BYTE *)(a1 + 4) )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 12) % 0x64u;
    v5 = &a00010203040506[2 * v4];
    if ( v4 < 0xA )
      v6 = 32;
    else
      v6 = *v5;
    v7 = *(_DWORD *)(a1 + 8);
    v8 = *(_DWORD *)(v7 + 8);
    v9 = v8 + 1;
    if ( *(_DWORD *)(v7 + 12) < (unsigned int)(v8 + 1) )
    {
      (**(void (__fastcall ***)(_DWORD))v7)(*(_DWORD *)(a1 + 8));
      v8 = *(_DWORD *)(v7 + 8);
      v9 = v8 + 1;
    }
    v10 = *(_DWORD *)(v7 + 4);
    *(_DWORD *)(v7 + 8) = v9;
    *(_BYTE *)(v10 + v8) = v6;
    v11 = *(_DWORD *)(a1 + 8);
    result = *(_DWORD *)(v11 + 8);
    v12 = result + 1;
    if ( *(_DWORD *)(v11 + 12) < (unsigned int)(result + 1) )
    {
      (**(void (__fastcall ***)(int))v11)(v11);
      result = *(_DWORD *)(v11 + 8);
      v12 = result + 1;
    }
    v13 = *(_DWORD *)(v11 + 4);
    *(_DWORD *)(v11 + 8) = v12;
    *(_BYTE *)(v13 + result) = v5[1];
  }
  else
  {
    result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 101, 79);
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}


// ======================================================================
// ADDR: 0xef750
// SYMBOL: sub_EF750
int __fastcall sub_EF750(int a1, int a2)
{
  int result; // r0

  if ( !a2 || *(_BYTE *)(a1 + 4) )
    return sub_EFC70(a1, *(_DWORD *)(*(_DWORD *)(a1 + 12) + 8));
  result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 72, 79);
  *(_DWORD *)(a1 + 8) = result;
  return result;
}


// ======================================================================
// ADDR: 0xef784
// SYMBOL: sub_EF784
int __fastcall sub_EF784(int a1, int a2)
{
  int result; // r0
  int v4; // r0
  int v5; // r1

  if ( !a2 || *(_BYTE *)(a1 + 4) )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 8);
    v5 = v4 - 12;
    if ( v4 < 12 )
      v5 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 8);
    if ( !v5 )
      v5 = 12;
    return sub_EFC70(a1, v5);
  }
  else
  {
    result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 73, 79);
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}


// ======================================================================
// ADDR: 0xef7c6
// SYMBOL: sub_EF7C6
int __fastcall sub_EF7C6(int a1, int a2)
{
  int result; // r0

  if ( !a2 || *(_BYTE *)(a1 + 4) )
    return sub_EFC70(a1, *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4));
  result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 77, 79);
  *(_DWORD *)(a1 + 8) = result;
  return result;
}


// ======================================================================
// ADDR: 0xef7fa
// SYMBOL: sub_EF7FA
int __fastcall sub_EF7FA(int a1, int a2)
{
  int result; // r0

  if ( !a2 || *(_BYTE *)(a1 + 4) )
    return sub_EFC70(a1, **(_DWORD **)(a1 + 12));
  result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 83, 79);
  *(_DWORD *)(a1 + 8) = result;
  return result;
}


// ======================================================================
// ADDR: 0xef82e
// SYMBOL: sub_EF82E
int __fastcall sub_EF82E(int a1, int a2)
{
  int v3; // r5
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r5
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r5
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r5
  int v16; // r0
  int v17; // r1
  int v18; // r2
  __int64 v19; // r0
  int result; // r0

  if ( *(_BYTE *)(a1 + 4) )
  {
    sub_EF3EC(a1);
    v3 = *(_DWORD *)(a1 + 8);
    v4 = *(_DWORD *)(v3 + 8);
    v5 = v4 + 1;
    if ( *(_DWORD *)(v3 + 12) < (unsigned int)(v4 + 1) )
    {
      (**(void (__fastcall ***)(_DWORD))v3)(*(_DWORD *)(a1 + 8));
      v4 = *(_DWORD *)(v3 + 8);
      v5 = v4 + 1;
    }
    v6 = *(_DWORD *)(v3 + 4);
    *(_DWORD *)(v3 + 8) = v5;
    *(_BYTE *)(v6 + v4) = 32;
    sub_EF4E4(a1);
    v7 = *(_DWORD *)(a1 + 8);
    v8 = *(_DWORD *)(v7 + 8);
    v9 = v8 + 1;
    if ( *(_DWORD *)(v7 + 12) < (unsigned int)(v8 + 1) )
    {
      (**(void (__fastcall ***)(_DWORD))v7)(*(_DWORD *)(a1 + 8));
      v8 = *(_DWORD *)(v7 + 8);
      v9 = v8 + 1;
    }
    v10 = *(_DWORD *)(v7 + 4);
    *(_DWORD *)(v7 + 8) = v9;
    *(_BYTE *)(v10 + v8) = 32;
    sub_EF6B4(a1, 0);
    v11 = *(_DWORD *)(a1 + 8);
    v12 = *(_DWORD *)(v11 + 8);
    v13 = v12 + 1;
    if ( *(_DWORD *)(v11 + 12) < (unsigned int)(v12 + 1) )
    {
      (**(void (__fastcall ***)(_DWORD))v11)(*(_DWORD *)(a1 + 8));
      v12 = *(_DWORD *)(v11 + 8);
      v13 = v12 + 1;
    }
    v14 = *(_DWORD *)(v11 + 4);
    *(_DWORD *)(v11 + 8) = v13;
    *(_BYTE *)(v14 + v12) = 32;
    sub_EEBD8(a1);
    v15 = *(_DWORD *)(a1 + 8);
    v16 = *(_DWORD *)(v15 + 8);
    v17 = v16 + 1;
    if ( *(_DWORD *)(v15 + 12) < (unsigned int)(v16 + 1) )
    {
      (**(void (__fastcall ***)(_DWORD))v15)(*(_DWORD *)(a1 + 8));
      v16 = *(_DWORD *)(v15 + 8);
      v17 = v16 + 1;
    }
    v18 = *(_DWORD *)(v15 + 4);
    *(_DWORD *)(v15 + 8) = v17;
    *(_BYTE *)(v18 + v16) = 32;
    v19 = *(int *)(*(_DWORD *)(a1 + 12) + 20);
    return sub_EFC1E(a1, HIDWORD(v19), v19 + 1900, (unsigned __int64)((int)v19 + 1900LL) >> 32);
  }
  else
  {
    if ( a2 )
      a2 = 69;
    result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 99, a2);
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}


// ======================================================================
// ADDR: 0xef918
// SYMBOL: sub_EF918
int __fastcall sub_EF918(int a1, int a2)
{
  int result; // r0

  if ( *(_BYTE *)(a1 + 4) )
    return sub_EF980(a1);
  if ( a2 )
    a2 = 69;
  result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 120, a2);
  *(_DWORD *)(a1 + 8) = result;
  return result;
}


// ======================================================================
// ADDR: 0xef94c
// SYMBOL: sub_EF94C
int __fastcall sub_EF94C(int a1, int a2)
{
  int result; // r0

  if ( *(_BYTE *)(a1 + 4) )
    return sub_EEBD8(a1);
  if ( a2 )
    a2 = 69;
  result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 88, a2);
  *(_DWORD *)(a1 + 8) = result;
  return result;
}


// ======================================================================
// ADDR: 0xef980
// SYMBOL: sub_EF980
int __fastcall sub_EF980(int a1)
{
  __int64 v2; // kr08_8
  __int64 v3; // kr10_8
  int v4; // r2
  int v5; // r0
  int v6; // r3
  __int64 v7; // kr18_8
  unsigned int v8; // r3
  unsigned int v9; // r0
  signed __int64 v10; // kr20_8
  int result; // r0
  _DWORD v12[2]; // [sp+0h] [bp-18h] BYREF
  char v13[16]; // [sp+8h] [bp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(HIDWORD(v2) + 12);
  sub_221404(
    *(_DWORD *)(HIDWORD(v2) + 20) + 1900,
    (unsigned __int64)(*(int *)(HIDWORD(v2) + 20) + 1900LL) >> 32,
    100,
    0);
  v5 = (HIDWORD(v3) + 1) | ((_DWORD)v3 << 24);
  if ( v6 < 0 )
    v4 = -v4;
  v7 = 205LL * (unsigned int)v5;
  v8 = 13434880 * v4 + HIDWORD(v7);
  v9 = v5 + 6 * ((((unsigned int)v7 >> 11) | (v8 << 21)) & 0xF00000F);
  v12[0] = (v9 >> 4) & 0xF00000F | ((v9 & 0xF) << 8) | 0x302F3030;
  v10 = __PAIR64__(6 * ((v8 >> 11) & 0xF0000), (unsigned int)(HIDWORD(v3) + 1) | ((_DWORD)v3 << 24))
      + __PAIR64__(v4 << 16, 6 * ((((unsigned int)v7 >> 11) | (v8 << 21)) & 0xF00000F));
  v12[1] = (((v10 >> 24) & 0xF00000F) + ((HIDWORD(v10) >> 4) & 0xF0000)) | 0x30302F30;
  result = sub_DCF30(v2, (char *)v12, v13);
  *(_DWORD *)(a1 + 8) = v2;
  return result;
}


// ======================================================================
// ADDR: 0xefa38
// SYMBOL: sub_EFA38
int __fastcall sub_EFA38(int a1)
{
  __int64 v2; // kr08_8
  __int64 v3; // kr10_8
  int v4; // r1
  int v5; // r3
  int v6; // r1
  __int64 v7; // r2
  unsigned int v8; // r0
  unsigned int v9; // r1
  int v10; // kr00_4
  unsigned int v11; // r0
  unsigned int v12; // kr18_4
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int result; // r0
  _DWORD v17[2]; // [sp+8h] [bp-10h] BYREF
  char v18[8]; // [sp+10h] [bp-8h] BYREF

  if ( *(_BYTE *)(a1 + 4) )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = *(_QWORD *)HIDWORD(v2);
    v4 = *(_DWORD *)(HIDWORD(v2) + 8);
    v5 = v4 - 12;
    if ( v4 < 12 )
      v5 = *(_DWORD *)(HIDWORD(v2) + 8);
    if ( !v5 )
      v5 = 12;
    v6 = v5 | (HIDWORD(v3) << 24);
    v7 = 205LL * (unsigned int)v6;
    v8 = 13434880 * v3 + HIDWORD(v7);
    v10 = v6;
    v9 = v6 + 6 * ((((unsigned int)v7 >> 11) | (v8 << 21)) & 0xF00000F);
    v17[0] = (v9 >> 4) & 0xF00000F | ((v9 & 0xF) << 8) | 0x303A3030;
    v12 = v10 + 6 * ((((unsigned int)v7 >> 11) | (v8 << 21)) & 0xF00000F);
    v11 = (__PAIR64__(6 * ((v8 >> 11) & 0xF0000), v10)
         + __PAIR64__((_DWORD)v3 << 16, 6 * ((((unsigned int)v7 >> 11) | (v8 << 21)) & 0xF00000F))) >> 32;
    v17[1] = (((__SPAIR64__(v11, v12) >> 24) & 0xF00000F) + ((v11 >> 4) & 0xF0000)) | 0x30303A30;
    sub_DCF30(v2, (char *)v17, v18);
    *(_DWORD *)(a1 + 8) = v2;
    v13 = *(_DWORD *)(v2 + 8);
    v14 = v13 + 1;
    if ( *(_DWORD *)(v2 + 12) < (unsigned int)(v13 + 1) )
    {
      (**(void (__fastcall ***)(_DWORD))v2)(v2);
      v13 = *(_DWORD *)(v2 + 8);
      v14 = v13 + 1;
    }
    v15 = *(_DWORD *)(v2 + 4);
    *(_DWORD *)(v2 + 8) = v14;
    *(_BYTE *)(v15 + v13) = 32;
    return sub_EFB5A(a1);
  }
  else
  {
    result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 114, 0);
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}


// ======================================================================
// ADDR: 0xefb1c
// SYMBOL: sub_EFB1C
int __fastcall sub_EFB1C(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  int v5; // r2

  sub_EFC70(a1, *(_DWORD *)(*(_DWORD *)(a1 + 12) + 8));
  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(v2 + 8);
  v4 = v3 + 1;
  if ( *(_DWORD *)(v2 + 12) < (unsigned int)(v3 + 1) )
  {
    (**(void (__fastcall ***)(_DWORD))v2)(*(_DWORD *)(a1 + 8));
    v3 = *(_DWORD *)(v2 + 8);
    v4 = v3 + 1;
  }
  v5 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v2 + 8) = v4;
  *(_BYTE *)(v5 + v3) = 58;
  return sub_EFC70(a1, *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4));
}


// ======================================================================
// ADDR: 0xefb5a
// SYMBOL: sub_EFB5A
int __fastcall sub_EFB5A(int a1)
{
  __int64 v2; // kr00_8
  char v3; // r6
  int v4; // r0
  int v5; // r2
  int v6; // r4
  int result; // r0
  int v8; // r1
  int v9; // r2

  if ( *(_BYTE *)(a1 + 4) )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = 80;
    v4 = *(_DWORD *)(v2 + 8);
    if ( *(int *)(HIDWORD(v2) + 8) < 12 )
      v3 = 65;
    if ( *(_DWORD *)(v2 + 12) < (unsigned int)(v4 + 1) )
    {
      (**(void (__fastcall ***)(_DWORD))v2)(v2);
      v4 = *(_DWORD *)(v2 + 8);
    }
    v5 = *(_DWORD *)(v2 + 4);
    *(_DWORD *)(v2 + 8) = HIDWORD(v2);
    *(_BYTE *)(v5 + v4) = v3;
    v6 = *(_DWORD *)(a1 + 8);
    result = *(_DWORD *)(v6 + 8);
    v8 = result + 1;
    if ( *(_DWORD *)(v6 + 12) < (unsigned int)(result + 1) )
    {
      (**(void (__fastcall ***)(int))v6)(v6);
      result = *(_DWORD *)(v6 + 8);
      v8 = result + 1;
    }
    v9 = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v6 + 8) = v8;
    *(_BYTE *)(v9 + result) = 77;
  }
  else
  {
    result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 112, 0);
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}


// ======================================================================
// ADDR: 0xefbd0
// SYMBOL: sub_EFBD0
int __fastcall sub_EFBD0(int a1)
{
  __int64 v2; // r0
  int v3; // r2
  int v4; // r1
  int v5; // r3
  int result; // r0

  if ( *(_BYTE *)(a1 + 4) )
  {
    v2 = *(int *)(*(_DWORD *)(a1 + 12) + 20) + 1900LL;
    sub_221404(v2, HIDWORD(v2), 100, 0);
    v4 = v3;
    if ( v5 < 0 )
      v4 = -v3;
    return sub_EFC70(a1, v4);
  }
  else
  {
    result = sub_EFCE0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)a1, 121, 69);
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}


// ======================================================================
// ADDR: 0xefc1e
// SYMBOL: sub_EFC1E
int __fastcall sub_EFC1E(int a1, unsigned __int64 a2)
{
  __int16 v4; // r5
  unsigned int v5; // r6

  v4 = a2;
  if ( a2 > 0x270F )
    return sub_EF194(a1, 9999 - a2, a2, SHIDWORD(a2));
  v5 = (unsigned int)(5243 * ((unsigned __int16)a2 >> 2)) >> 17;
  sub_EFC70(a1, v5);
  return sub_EFC70(a1, (unsigned __int16)(v4 - 100 * v5));
}


// ======================================================================
// ADDR: 0xefc70
// SYMBOL: sub_EFC70
int __fastcall sub_EFC70(int a1, unsigned int a2)
{
  int v3; // r5
  int v4; // r0
  char *v5; // r6
  int v6; // r1
  int v7; // r2
  int v8; // r4
  int result; // r0
  int v10; // r1
  int v11; // r2

  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(v3 + 8);
  v5 = &a00010203040506[2 * (a2 % 0x64)];
  v6 = v4 + 1;
  if ( *(_DWORD *)(v3 + 12) < (unsigned int)(v4 + 1) )
  {
    (**(void (__fastcall ***)(int))v3)(v3);
    v4 = *(_DWORD *)(v3 + 8);
    v6 = v4 + 1;
  }
  v7 = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v3 + 8) = v6;
  *(_BYTE *)(v7 + v4) = *v5;
  v8 = *(_DWORD *)(a1 + 8);
  result = *(_DWORD *)(v8 + 8);
  v10 = result + 1;
  if ( *(_DWORD *)(v8 + 12) < (unsigned int)(result + 1) )
  {
    (**(void (__fastcall ***)(int))v8)(v8);
    result = *(_DWORD *)(v8 + 8);
    v10 = result + 1;
  }
  v11 = *(_DWORD *)(v8 + 4);
  *(_DWORD *)(v8 + 8) = v10;
  *(_BYTE *)(v11 + result) = v5[1];
  return result;
}


// ======================================================================
// ADDR: 0xf029c
// SYMBOL: sub_F029C
int __fastcall sub_F029C(int a1)
{
  _DWORD *v1; // r0
  int v2; // r1
  int v3; // r8
  __int64 v4; // kr10_8
  int v5; // r1
  int result; // r0
  __int64 v7; // kr18_8
  __int64 v8; // r0
  int v9; // r2
  int v10; // r3
  __int64 v11; // kr28_8
  __int64 v12; // r0
  int v13; // r2
  int v14; // r0
  unsigned int v15; // r2
  int v16; // r3
  __int64 v17; // r0
  int v18; // [sp+0h] [bp-28h]
  int v19; // [sp+8h] [bp-20h]

  v1 = *(_DWORD **)(a1 + 12);
  v2 = v1[6];
  v3 = v1[5];
  v4 = v3 + 1900LL;
  if ( !v2 )
    v2 = 7;
  v5 = v1[7] - v2 + 11;
  if ( v5 <= 6 )
    return v3 + 1899;
  v19 = v5;
  v7 = v4 / 4 + v4 + sub_221404(v4, HIDWORD(v4), -100, -1);
  v8 = sub_221404(v4, HIDWORD(v4), 400, 0);
  sub_221404(v8 + v7, (unsigned __int64)(v8 + v7) >> 32, 7, 0);
  v18 = v9 ^ 4 | v10;
  v11 = ((v3 + 1899LL + ((unsigned int)((unsigned __int64)(v3 + 1899LL) >> 32) >> 30)) >> 2)
      + v3
      + 1899LL
      + sub_221404(v3 + 1899, (unsigned __int64)(v3 + 1899LL) >> 32, -100, -1);
  v12 = sub_221404(v3 + 1899, (unsigned __int64)(v3 + 1899LL) >> 32, 400, 0);
  sub_221404(v12 + v11, (unsigned __int64)(v12 + v11) >> 32, 7, 0);
  v14 = v13 ^ 3;
  v15 = 52;
  if ( !(v14 | v16) )
    v15 = 53;
  v17 = 613566757LL * (unsigned int)v19;
  if ( !v18 )
    v15 = 53;
  result = v3 + 1901;
  if ( v15 >= (HIDWORD(v17) + ((unsigned int)(v19 - HIDWORD(v17)) >> 1)) >> 2 )
    return v3 + 1900;
  return result;
}


// ======================================================================
// ADDR: 0xf03d8
// SYMBOL: sub_F03D8
int __fastcall sub_F03D8(int a1, unsigned int a2)
{
  int v2; // r5
  int result; // r0
  int v5; // r1

  v2 = *(_DWORD *)(a1 + 8);
  result = *(_DWORD *)(v2 + 8);
  v5 = result + 1;
  if ( *(_DWORD *)(v2 + 12) < (unsigned int)(result + 1) )
  {
    (**(void (__fastcall ***)(int))v2)(v2);
    result = *(_DWORD *)(v2 + 8);
    v5 = result + 1;
  }
  *(_DWORD *)(v2 + 8) = v5;
  *(_BYTE *)(*(_DWORD *)(v2 + 4) + result) = (a2 % 0xA) | 0x30;
  return result;
}


// ======================================================================
// ADDR: 0xf0418
// SYMBOL: sub_F0418
int __fastcall sub_F0418(int a1)
{
  _DWORD *v1; // r0
  int v2; // r1
  int v3; // r4
  int v4; // r0
  int v5; // r0
  __int64 v6; // kr08_8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r8
  __int64 v13; // r4
  __int64 v14; // kr18_8
  __int64 v15; // r0
  unsigned int v16; // r4
  __int64 v17; // r2
  __int64 v18; // r10
  __int64 v19; // r0
  unsigned int v20; // r5
  __int64 v21; // r2
  __int64 v22; // kr20_8
  __int64 v23; // r0
  __int64 v24; // r2

  v1 = *(_DWORD **)(a1 + 12);
  v2 = v1[6];
  v3 = v1[5];
  v4 = v1[7];
  if ( !v2 )
    v2 = 7;
  v5 = v4 - v2 + 11;
  v6 = v3 + 1899LL;
  v7 = v3 + 1900LL;
  if ( v5 > 6 )
  {
    v16 = v5 / 7;
    v18 = v6 / 4 + v6 + sub_221404(v6, HIDWORD(v6), -100, -1);
    v19 = sub_221404(v6, HIDWORD(v6), 400, 0);
    sub_221404(v19 + v18, (unsigned __int64)(v19 + v18) >> 32, 7, 0);
    v20 = 52;
    if ( v21 == 3 )
      v20 = 53;
    v22 = v7 / 4 + v7 + sub_221404(v7, HIDWORD(v7), -100, -1);
    v23 = sub_221404(v7, HIDWORD(v7), 400, 0);
    sub_221404(v23 + v22, (unsigned __int64)(v23 + v22) >> 32, 7, 0);
    if ( v24 == 4 )
      v20 = 53;
    if ( v16 > v20 )
      return 1;
  }
  else
  {
    v8 = v6 / 4 + v6 + sub_221404(v6, HIDWORD(v6), -100, -1);
    v9 = sub_221404(v6, HIDWORD(v6), 400, 0);
    sub_221404(v9 + v8, (unsigned __int64)(v9 + v8) >> 32, 7, 0);
    v12 = v10 ^ 4 | v11;
    v13 = v3 + 1898LL;
    v14 = ((v13 + (HIDWORD(v13) >> 30)) >> 2) + v13 + sub_221404(v13, HIDWORD(v13), -100, -1);
    v15 = sub_221404(v13, HIDWORD(v13), 400, 0);
    sub_221404(v15 + v14, (unsigned __int64)(v15 + v14) >> 32, 7, 0);
    v16 = 52;
    if ( v17 == 3 )
      v16 = 53;
    if ( !v12 )
      return 53;
  }
  return v16;
}


// ======================================================================
// ADDR: 0xf05e2
// SYMBOL: sub_F05E2
int __fastcall sub_F05E2(int a1, int a2)
{
  int v2; // r6
  unsigned int v4; // r5
  bool v5; // cc
  int v6; // r0
  unsigned int v7; // r2
  unsigned int v8; // r1
  int v9; // r2
  char v10; // r1

  v2 = *(_DWORD *)(a1 + 8);
  v4 = a2;
  v5 = a2 <= -1;
  v7 = *(_DWORD *)(v2 + 12);
  v6 = *(_DWORD *)(v2 + 8);
  v8 = v6 + 1;
  if ( v5 )
  {
    if ( v7 < v8 )
    {
      (**(void (__fastcall ***)(int))v2)(v2);
      v6 = *(_DWORD *)(v2 + 8);
      v8 = v6 + 1;
    }
    v9 = *(_DWORD *)(v2 + 4);
    v4 = -v4;
    *(_DWORD *)(v2 + 8) = v8;
    v10 = 45;
  }
  else
  {
    if ( v7 < v8 )
    {
      (**(void (__fastcall ***)(int))v2)(v2);
      v6 = *(_DWORD *)(v2 + 8);
      v8 = v6 + 1;
    }
    v9 = *(_DWORD *)(v2 + 4);
    *(_DWORD *)(v2 + 8) = v8;
    v10 = 43;
  }
  *(_BYTE *)(v9 + v6) = v10;
  sub_EFC70(a1, v4 / 0xE10);
  return sub_EFC70(a1, v4 / 0x3C % 0x3C);
}


// ======================================================================
// ADDR: 0xf0670
// SYMBOL: sub_F0670
int __fastcall sub_F0670(int a1, int a2)
{
  int v3; // r5
  char *v4; // r6
  size_t v5; // r0
  int result; // r0

  v3 = *(_DWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 4) )
  {
    v4 = *(char **)(a2 + 40);
    v5 = strlen(v4);
    result = sub_EFEA0(v3, v4, v5, *(std::locale **)a1);
  }
  else
  {
    result = sub_EFCE0(v3, *(_DWORD *)(a1 + 12), *(_DWORD *)a1);
  }
  *(_DWORD *)(a1 + 8) = result;
  return result;
}


// ======================================================================
// ADDR: 0x221404
// SYMBOL: sub_221404
int __fastcall sub_221404(int a1)
{
  return sub_221428(a1);
}


// ======================================================================
