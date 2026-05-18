// ADDR: 0x10a4a4
// SYMBOL: sub_10A4A4
int __fastcall sub_10A4A4(int result)
{
  std::__shared_weak_count *v1; // r4
  unsigned int *v2; // r0
  unsigned int v3; // r1
  unsigned int *v4; // r0
  unsigned int v5; // r1
  _QWORD v6[2]; // [sp+0h] [bp-10h] BYREF

  switch ( result )
  {
    case 2:
      v1 = (std::__shared_weak_count *)dword_26307C;
      v6[0] = *(_QWORD *)&dword_263078;
      if ( dword_26307C )
      {
        v4 = (unsigned int *)(dword_26307C + 8);
        do
          v5 = __ldrex(v4);
        while ( __strex(v5 + 1, v4) );
      }
      break;
    case 1:
      v1 = (std::__shared_weak_count *)dword_263074;
      v6[0] = *(_QWORD *)&dword_263070;
      if ( dword_263074 )
      {
        v2 = (unsigned int *)(dword_263074 + 8);
        do
          v3 = __ldrex(v2);
        while ( __strex(v3 + 1, v2) );
      }
      break;
    case 0:
      v6[0] = 0LL;
      return sub_10A534(v6);
    default:
      return result;
  }
  result = sub_10A534(v6);
  if ( v1 )
    return std::__shared_weak_count::__release_weak(v1);
  return result;
}


// ======================================================================
// ADDR: 0x10a784
// SYMBOL: sub_10A784
int *__fastcall sub_10A784(float a1)
{
  int v1; // s0
  int *result; // r0

  v1 = LODWORD(a1);
  if ( a1 >= 0.0 )
  {
    if ( a1 > 100.0 )
      v1 = 1120403456;
  }
  else
  {
    v1 = 0;
  }
  result = &dword_238E84;
  dword_238E84 = v1;
  return result;
}


// ======================================================================
// ADDR: 0x13df62
// SYMBOL: sub_13DF62
void __fastcall sub_13DF62(int a1, int a2)
{
  int v3; // r0
  void *v4; // r0
  _BYTE v5[56]; // [sp+4h] [bp-44h] BYREF
  int v6; // [sp+3Ch] [bp-Ch]

  sub_13DFA2((int)v5, a2);
  sub_13E044(a1, v5);
  v3 = v6;
  v6 = 0;
  if ( v3 )
  {
    v4 = (void *)sub_163020();
    operator delete(v4);
  }
}


// ======================================================================
// ADDR: 0x13e172
// SYMBOL: sub_13E172
void __fastcall sub_13E172(__int64 *a1, int a2)
{
  __int64 v3; // r10
  int v4; // r8
  int v5; // r3
  int v6; // r4
  int v7; // r6
  int v8; // r3
  int v9; // r4
  int v10; // r5
  int v11; // r6
  int v12; // r3
  int v13; // r4
  int v14; // r5
  int v15; // r6
  int v16; // r1
  int v17; // r0
  int v18; // r0
  void *v19; // r0
  __int64 *v20; // [sp+4h] [bp-5Ch]
  char s2[56]; // [sp+8h] [bp-58h] BYREF
  int v22; // [sp+40h] [bp-20h]

  sub_13DFA2(s2, a2);
  v3 = *a1;
  if ( (_DWORD)v3 != HIDWORD(v3) )
  {
    while ( !sub_13DF22((char *)v3, s2) )
    {
      LODWORD(v3) = v3 + 60;
      if ( (_DWORD)v3 == HIDWORD(v3) )
        goto LABEL_14;
    }
  }
  if ( (_DWORD)v3 != HIDWORD(v3) )
  {
    if ( (_DWORD)v3 + 60 == HIDWORD(v3) )
    {
      v4 = v3;
    }
    else
    {
      v20 = a1;
      do
      {
        v4 = v3 + 60;
        v5 = *(_DWORD *)(v3 + 64);
        v6 = *(_DWORD *)(v3 + 68);
        v7 = *(_DWORD *)(v3 + 72);
        *(_DWORD *)v3 = *(_DWORD *)(v3 + 60);
        *(_DWORD *)(v3 + 4) = v5;
        *(_DWORD *)(v3 + 8) = v6;
        *(_DWORD *)(v3 + 12) = v7;
        v8 = *(_DWORD *)(v3 + 80);
        v9 = *(_DWORD *)(v3 + 84);
        v10 = *(_DWORD *)(v3 + 88);
        v11 = *(_DWORD *)(v3 + 92);
        *(_DWORD *)(v3 + 16) = *(_DWORD *)(v3 + 76);
        *(_DWORD *)(v3 + 20) = v8;
        *(_DWORD *)(v3 + 24) = v9;
        *(_DWORD *)(v3 + 28) = v10;
        *(_DWORD *)(v3 + 32) = v11;
        v12 = *(_DWORD *)(v3 + 100);
        v13 = *(_DWORD *)(v3 + 104);
        v14 = *(_DWORD *)(v3 + 108);
        v15 = *(_DWORD *)(v3 + 112);
        *(_DWORD *)(v3 + 36) = *(_DWORD *)(v3 + 96);
        *(_DWORD *)(v3 + 40) = v12;
        *(_DWORD *)(v3 + 44) = v13;
        *(_DWORD *)(v3 + 48) = v14;
        *(_DWORD *)(v3 + 52) = v15;
        v16 = *(_DWORD *)(v3 + 116);
        *(_DWORD *)(v3 + 116) = 0;
        sub_13E4F0(v3 + 56, v16);
        v17 = v3 + 120;
        LODWORD(v3) = v3 + 60;
      }
      while ( v17 != HIDWORD(v3) );
      a1 = v20;
      HIDWORD(v3) = *((_DWORD *)v20 + 1);
      if ( v4 == HIDWORD(v3) )
        goto LABEL_13;
    }
    do
    {
      sub_13E4F0(HIDWORD(v3) - 4, 0);
      HIDWORD(v3) -= 60;
    }
    while ( HIDWORD(v3) != v4 );
LABEL_13:
    *((_DWORD *)a1 + 1) = v4;
  }
LABEL_14:
  v18 = v22;
  v22 = 0;
  if ( v18 )
  {
    v19 = (void *)sub_163020();
    operator delete(v19);
  }
}


// ======================================================================
// ADDR: 0x13e2a0
// SYMBOL: sub_13E2A0
_DWORD *__fastcall sub_13E2A0(_DWORD *result)
{
  _DWORD *v1; // r4
  int v2; // r5
  int v3; // r6

  v1 = result;
  v3 = result[1];
  v2 = *result;
  while ( v3 != v2 )
  {
    result = (_DWORD *)sub_13E4F0(v3 - 4, 0);
    v3 -= 60;
  }
  v1[1] = v2;
  return result;
}


// ======================================================================
// ADDR: 0x143a0c
// SYMBOL: sub_143A0C
int __fastcall sub_143A0C(int a1, int a2)
{
  int v2; // r0
  unsigned __int8 v4; // [sp+7h] [bp-9h] BYREF

  sub_17D786(a2, (int)&v4);
  v2 = sub_111AD4();
  return sub_111B24(v2, v4);
}


// ======================================================================
// ADDR: 0x143a60
// SYMBOL: sub_143A60
int __fastcall sub_143A60(int a1, int a2)
{
  char v3; // r1
  char v4; // [sp+7h] [bp-9h] BYREF

  v4 = 0;
  sub_17D786(a2, (int)&v4);
  if ( *(_BYTE *)(dword_381BF4 + 132) )
    return sub_17CA90();
  v3 = v4;
  if ( v4 )
    v3 = 1;
  return sub_13A160(*(_DWORD *)(dword_23DEEC + 104), v3);
}


// ======================================================================
// ADDR: 0x143abc
// SYMBOL: sub_143ABC
void __fastcall sub_143ABC(int a1, int a2)
{
  void *v3; // r8
  int v4; // r5
  int v5; // r6
  int v6; // r0
  int v7; // r5
  _DWORD *v8; // r0
  _DWORD *v9; // r6
  size_t v10; // r0
  void *v11[2]; // [sp+4h] [bp-24h] BYREF
  void *v12; // [sp+Ch] [bp-1Ch]
  int v13; // [sp+10h] [bp-18h] BYREF
  _BYTE v14[17]; // [sp+17h] [bp-11h] BYREF

  v14[0] = 0;
  sub_17D786(a2, (int)v14);
  v13 = 0;
  sub_17D786(a2, (int)&v13);
  v3 = (void *)operator new[](v13 + 1);
  sub_17D744(a2, v3);
  *((_BYTE *)v3 + v13) = 0;
  v4 = dword_381BF4;
  if ( *(_BYTE *)(dword_381BF4 + 133) || *(_BYTE *)(dword_381BF4 + 132) )
  {
    v5 = v14[0];
    sub_DC6DC(v11, (char *)v3);
    sub_17C370(v4, v5, v11);
    if ( LOBYTE(v11[0]) << 31 )
      operator delete(v12);
  }
  else if ( dword_23DEEC )
  {
    v6 = *(_DWORD *)(dword_23DEEC + 88);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 132);
      if ( v7 )
      {
        v8 = sub_133038(*(_DWORD *)(v6 + 132), v14[0] + 1);
        if ( v8 )
        {
          v9 = v8;
          v10 = strlen((const char *)v3);
          sub_164D04(v11, v3, v10);
          sub_13D450(v9[21]);
          if ( LOBYTE(v11[0]) << 31 )
            operator delete(v12);
          if ( *((_BYTE *)v9 + 80) != 1 )
            (*(void (__fastcall **)(_DWORD *, int))(*v9 + 36))(v9, 1);
          *((_BYTE *)v9 + 80) = 1;
          sub_1330A8(v7);
        }
      }
    }
  }
  operator delete[](v3);
}


// ======================================================================
// ADDR: 0x143bdc
// SYMBOL: sub_143BDC
_DWORD *__fastcall sub_143BDC(int a1, int *a2)
{
  int v2; // r6
  int v4; // r0
  int v5; // r1
  _DWORD *result; // r0
  int v7; // r4
  int v8; // r1
  _BYTE *v9; // r5
  int v10; // r0
  _BYTE v11[17]; // [sp+7h] [bp-11h] BYREF

  sub_17D786((int)a2, (int)v11);
  v4 = a2[2];
  if ( v4 < *a2 )
  {
    v5 = *(unsigned __int8 *)(a2[3] + (v4 >> 3));
    a2[2] = v4 + 1;
    v2 = (unsigned __int8)(v5 << (v4 & 7)) >> 7;
  }
  if ( *(_BYTE *)(dword_381BF4 + 133) || *(_BYTE *)(dword_381BF4 + 132) )
    return (_DWORD *)sub_17C45C(dword_381BF4, v11[0]);
  result = (_DWORD *)dword_23DEEC;
  if ( dword_23DEEC )
  {
    result = *(_DWORD **)(dword_23DEEC + 88);
    if ( result )
    {
      v7 = result[33];
      if ( v7 )
      {
        result = sub_133038(result[33], v11[0] + 1);
        if ( result )
        {
          v8 = (unsigned __int8)v2;
          v9 = result;
          v10 = *((unsigned __int8 *)result + 80);
          v2 = (unsigned __int8)v2;
          if ( (_BYTE)v2 )
            v2 = 1;
          if ( v10 != v2 )
            (*(void (__fastcall **)(_BYTE *, bool))(*(_DWORD *)v9 + 36))(v9, v8 != 0);
          v9[80] = v2;
          return (_DWORD *)sub_1330A8(v7);
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x143ca0
// SYMBOL: sub_143CA0
unsigned int __fastcall sub_143CA0(int *a1)
{
  int v2; // r1
  unsigned int result; // r0
  int v4; // r0
  int v5; // r2
  int v6; // r2
  _BYTE v7[9]; // [sp+7h] [bp-9h] BYREF

  v7[0] = 0;
  sub_17D786((int)a1, (int)v7);
  v2 = v7[0];
  result = (unsigned __int8)(v7[0] - 28);
  if ( result >= 0xE5 )
  {
    v4 = a1[2];
    if ( v4 >= *a1 )
    {
      v6 = 0;
    }
    else
    {
      v5 = *(unsigned __int8 *)(a1[3] + (v4 >> 3));
      a1[2] = v4 + 1;
      v6 = (unsigned __int8)(v5 << (v4 & 7)) >> 7;
    }
    if ( *(_BYTE *)(dword_381BF4 + 132) || v2 != 1 )
    {
      return sub_17C2A4();
    }
    else
    {
      result = dword_23DEEC;
      if ( dword_23DEEC )
      {
        result = *(_DWORD *)(dword_23DEEC + 88);
        if ( result )
        {
          if ( *(_DWORD *)(result + 132) )
          {
            if ( v6 )
              return sub_12F8D4(result);
            else
              return sub_12F5E0(result);
          }
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x143d34
// SYMBOL: sub_143D34
unsigned int __fastcall sub_143D34(int a1)
{
  unsigned int result; // r0
  int v3; // [sp+4h] [bp-14h] BYREF
  int v4; // [sp+8h] [bp-10h] BYREF
  unsigned __int8 v5; // [sp+Eh] [bp-Ah] BYREF
  _BYTE v6[9]; // [sp+Fh] [bp-9h] BYREF

  v6[0] = 0;
  sub_17D786(a1, (int)v6);
  result = v6[0] - 28;
  if ( result >= 0xFFFFFFE5 )
  {
    v5 = 0;
    sub_17D786(a1, (int)&v5);
    result = v5 - 10;
    if ( result >= 0xFFFFFFF7 )
    {
      v3 = 0;
      v4 = 0;
      sub_17D786(a1, (int)&v4);
      sub_17D786(a1, (int)&v3);
      return sub_17CBC4(dword_381BF4, v6[0], v5, v4, v3);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x143db8
// SYMBOL: sub_143DB8
void __fastcall sub_143DB8(int a1, int a2)
{
  int v3; // r0
  int v4; // r8
  size_t v5; // r0
  _BYTE v6[8]; // [sp+4h] [bp-124h] BYREF
  void *v7; // [sp+Ch] [bp-11Ch]
  char dest[256]; // [sp+10h] [bp-118h] BYREF
  int v9; // [sp+110h] [bp-18h] BYREF
  int v10[5]; // [sp+114h] [bp-14h] BYREF

  sub_17D786(a2, (int)v10);
  if ( v10[0] )
  {
    sub_17D786(a2, (int)&v9);
    sub_17D744(a2, dest);
    v3 = dword_23DEEC;
    dest[v9] = 0;
    v4 = *(_DWORD *)(v3 + 112);
    dword_25B208 = v10[0];
    byte_25B20C = 0;
    v5 = strlen(dest);
    sub_164D04(v6, dest, v5);
    sub_12EE78(v4, (int)v6);
    if ( v6[0] << 31 )
      operator delete(v7);
  }
  else
  {
    byte_25B20C = 0;
    dword_25B208 = 0;
    sub_12EEA8(*(_BYTE **)(dword_23DEEC + 112));
  }
}


// ======================================================================
// ADDR: 0x143e90
// SYMBOL: sub_143E90
int __fastcall sub_143E90(int a1, int a2)
{
  int v3; // r1
  int v4; // r2
  int v5; // r0
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  sub_17D786(a2, (int)v7);
  v3 = *(_DWORD *)(a2 + 8);
  v4 = *(unsigned __int8 *)(*(_DWORD *)(a2 + 12) + (v3 >> 3));
  v5 = v7[0];
  *(_DWORD *)(a2 + 8) = v3 + 1;
  return sub_10D528(v5, (unsigned __int8)(v4 << (v3 & 7)) >> 7);
}


// ======================================================================
// ADDR: 0x143ec8
// SYMBOL: sub_143EC8
void __fastcall sub_143EC8(int a1, int a2)
{
  int v3; // r6
  int v4; // r5
  int v5; // r4
  void *v6[3]; // [sp+4h] [bp-102Ch] BYREF
  unsigned __int8 v7; // [sp+12h] [bp-101Eh] BYREF
  unsigned __int8 v8; // [sp+13h] [bp-101Dh] BYREF
  char dest[4096]; // [sp+14h] [bp-101Ch] BYREF
  _DWORD v10[7]; // [sp+1014h] [bp-1Ch] BYREF

  v10[0] = 0;
  v8 = 0;
  v7 = 0;
  sub_17D786(a2, (int)&v8);
  sub_17D786(a2, (int)&v7);
  sub_17D786(a2, (int)v10);
  sub_17D744(a2, dest);
  v3 = v7;
  v4 = v8;
  dest[v10[0]] = 0;
  v5 = dword_381BF4;
  sub_DC6DC(v6, dest);
  sub_17CAF8(v5, v4, v3, v6);
  if ( LOBYTE(v6[0]) << 31 )
    operator delete(v6[2]);
}


// ======================================================================
// ADDR: 0x143f84
// SYMBOL: sub_143F84
int __fastcall sub_143F84(int a1, int a2)
{
  int result; // r0
  int v4; // r1
  _BYTE v5[9]; // [sp+7h] [bp-9h] BYREF

  v5[0] = 0;
  sub_17D786(a2, (int)v5);
  result = v5[0];
  if ( (unsigned int)v5[0] - 3 >= 0xFFFFFFFE )
  {
    v4 = *(_DWORD *)(a1 + 524);
    if ( *(unsigned __int8 *)(v4 + 72) != v5[0] )
    {
      *(_BYTE *)(v4 + 72) = v5[0];
      *(_DWORD *)(dword_23DF24 + 7210076) = result;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x143fd8
// SYMBOL: sub_143FD8
int __fastcall sub_143FD8(int a1, int *a2)
{
  int result; // r0
  int v3; // r0
  int v4; // r2
  int v5; // r1

  v3 = a2[2];
  if ( v3 >= *a2 )
  {
    LOBYTE(v5) = 0;
  }
  else
  {
    v4 = *(unsigned __int8 *)(a2[3] + (v3 >> 3));
    a2[2] = v3 + 1;
    v5 = (unsigned __int8)(v4 << (v3 & 7)) >> 7;
  }
  result = dword_25C9C8;
  *(_BYTE *)(dword_25C9C8 + 332) = v5;
  return result;
}


// ======================================================================
// ADDR: 0x14400c
// SYMBOL: sub_14400C
int __fastcall sub_14400C(int a1, int *a2)
{
  int v2; // r0
  int v3; // r2
  int v4; // r1
  int result; // r0

  v2 = a2[2];
  if ( v2 >= *a2 )
  {
    LOBYTE(v4) = 0;
  }
  else
  {
    v3 = *(unsigned __int8 *)(a2[3] + (v2 >> 3));
    a2[2] = v2 + 1;
    v4 = (unsigned __int8)(v3 << (v2 & 7)) >> 7;
  }
  result = dword_23DEF0;
  *(_BYTE *)(dword_23DEF0 + 2) = v4;
  return result;
}


// ======================================================================
// ADDR: 0x144040
// SYMBOL: sub_144040
int __fastcall sub_144040(int a1, int *a2)
{
  int v3; // r0
  int v4; // r1
  _DWORD v6[3]; // [sp+4h] [bp-Ch] BYREF

  v6[0] = 0;
  sub_17D786((int)a2, (int)v6);
  v3 = a2[2];
  if ( v3 < *a2 && (v4 = *(unsigned __int8 *)(a2[3] + (v3 >> 3)), a2[2] = v3 + 1, ((v4 << (v3 & 7)) & 0x80) != 0) )
    return sub_10BD64(dword_2631B0, v6[0]);
  else
    return sub_10BD3C(dword_2631B0, v6[0]);
}


// ======================================================================
// ADDR: 0x1440a4
// SYMBOL: sub_1440A4
int __fastcall sub_1440A4(int *a1)
{
  int v1; // r1
  int v2; // r2
  int result; // r0

  v1 = a1[2];
  if ( v1 >= *a1 )
  {
    result = 0;
  }
  else
  {
    v2 = *(unsigned __int8 *)(a1[3] + (v1 >> 3));
    a1[2] = v1 + 1;
    result = (unsigned __int8)(v2 << (v1 & 7)) >> 7;
  }
  if ( result != (unsigned __int8)byte_2633CC )
    byte_2633CC = result;
  return result;
}


// ======================================================================
// ADDR: 0x1440dc
// SYMBOL: sub_1440DC
void __fastcall sub_1440DC(int a1)
{
  unsigned int v2; // r4
  _BYTE *v3; // r5
  _DWORD v4[7]; // [sp+4h] [bp-1Ch] BYREF

  v4[0] = 0;
  sub_17D786(a1, (int)v4);
  v2 = v4[0] + 1;
  if ( v4[0] == -1 )
    v2 = -1;
  v3 = (_BYTE *)operator new[](v2);
  *v3 = 0;
  sub_22178C((int)(v3 + 1), v2 - 1);
  sub_17D744(a1, v3);
  sub_163108(*(_DWORD *)(dword_23DF24 + 6787064) + 4, v3, "site16M");
  operator delete[](v3);
}


// ======================================================================
// ADDR: 0x144154
// SYMBOL: sub_144154
int __fastcall sub_144154(int a1)
{
  int result; // r0
  __int16 v3; // [sp+4h] [bp-Ch] BYREF
  _BYTE v4[9]; // [sp+7h] [bp-9h] BYREF

  v4[0] = 0;
  sub_17D786(a1, (int)v4);
  v3 = 0;
  sub_17D786(a1, (int)&v3);
  result = sub_E35A0(dword_23DEF0);
  if ( result )
    return sub_1107A0(*(_DWORD *)(result + 92), v4[0], v3);
  return result;
}


// ======================================================================
// ADDR: 0x1441a4
// SYMBOL: sub_1441A4
int __fastcall sub_1441A4(int result, int a2)
{
  int v3; // r1
  int *i; // r5
  int *v5; // r6
  int v6; // r1
  int v7; // r1

  v3 = *(unsigned __int8 *)(result + 20);
  __dmb(0xBu);
  if ( !(v3 << 31) )
  {
    v5 = *(int **)(result + 12);
    for ( i = *(int **)(result + 8); i != v5; i += 2 )
    {
      result = *i;
      v6 = *(unsigned __int8 *)(*i + 8);
      __dmb(0xBu);
      if ( v6 << 31 )
      {
        v7 = *(unsigned __int8 *)(result + 9);
        __dmb(0xBu);
        if ( !(v7 << 31) )
          result = (*(int (__fastcall **)(int, int))(*(_DWORD *)result + 16))(result, a2);
      }
    }
  }
  return result;
}


// ======================================================================
