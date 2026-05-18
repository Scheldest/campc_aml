// ADDR: 0x2173ec
// SYMBOL: sub_2173EC
int __fastcall sub_2173EC(__int64 *a1)
{
  __int64 v1; // r2
  int result; // r0

  v1 = *a1;
  if ( (_DWORD)v1 == HIDWORD(v1) || *(_BYTE *)v1 != 114 )
  {
    result = 0;
  }
  else
  {
    LODWORD(v1) = v1 + 1;
    result = 4;
    *(_DWORD *)a1 = v1;
  }
  if ( (_DWORD)v1 != HIDWORD(v1) )
  {
    if ( *(_BYTE *)v1 == 86 )
    {
      LODWORD(v1) = v1 + 1;
      *(_DWORD *)a1 = v1;
      result |= 2u;
    }
    if ( (_DWORD)v1 != HIDWORD(v1) && *(_BYTE *)v1 == 75 )
    {
      *(_DWORD *)a1 = v1 + 1;
      return result | 1;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x217468
// SYMBOL: sub_217468
bool __fastcall sub_217468(int a1, int a2)
{
  _DWORD *v2; // r6
  _DWORD *v5; // r0
  int v7; // r0

  if ( !a2 )
    return 0;
  v2 = *(_DWORD **)a1;
  if ( **(_DWORD **)a1 )
  {
    v5 = sub_216EF0(*(_DWORD *)(a1 + 4) + 408, 16);
    v5[2] = *v2;
    v5[3] = a2;
    *v5 = &off_232F2C;
    v5[1] = 16843031;
    **(_DWORD **)a1 = v5;
  }
  else
  {
    *v2 = a2;
  }
  v7 = **(_DWORD **)(a1 + 8);
  if ( v7 )
    *(_BYTE *)(v7 + 1) = 0;
  return **(_DWORD **)a1 != 0;
}


// ======================================================================
// ADDR: 0x2176fc
// SYMBOL: sub_2176FC
_DWORD *__fastcall sub_2176FC(__int64 *a1, _DWORD *a2)
{
  int v3; // r10
  __int64 v5; // r0
  int v6; // r6
  int v7; // r9
  _DWORD *v8; // r0
  __int16 v9; // r1
  char v10; // r2
  int v12; // [sp+0h] [bp-28h] BYREF
  int v13; // [sp+4h] [bp-24h]

  v3 = (int)(a1 + 51);
  while ( 1 )
  {
    v5 = *a1;
    if ( (_DWORD)v5 == HIDWORD(v5) || *(_BYTE *)v5 != 66 )
      break;
    *(_DWORD *)a1 = v5 + 1;
    sub_21C7E4(&v12, a1);
    v6 = v12;
    v7 = v13;
    if ( v12 == v13 )
      return 0;
    v8 = sub_216EF0(v3, 20);
    v8[2] = a2;
    *((_BYTE *)v8 + 4) = 8;
    *v8 = &off_23393C;
    v9 = *((_WORD *)a2 + 3);
    v10 = *((_BYTE *)a2 + 5);
    a2 = v8;
    v8[3] = v6;
    v8[4] = v7;
    *((_BYTE *)v8 + 5) = v10;
    *((_WORD *)v8 + 3) = v9;
  }
  return a2;
}


// ======================================================================
// ADDR: 0x21778c
// SYMBOL: sub_21778C
_DWORD *__fastcall sub_21778C(int a1, int a2)
{
  __int64 v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r8
  __int64 v8; // r0
  _DWORD *v9; // r1
  int v10; // r5
  int v12[2]; // [sp+4h] [bp-1Ch] BYREF

  v4 = *(_QWORD *)a1;
  if ( HIDWORD(v4) == (_DWORD)v4 )
    goto LABEL_18;
  v5 = *(unsigned __int8 *)v4;
  if ( v5 == 85 )
  {
    v6 = sub_21A0A0(a1, a2);
    goto LABEL_13;
  }
  if ( (unsigned int)(v5 - 49) > 8 )
  {
LABEL_18:
    if ( sub_2155E4((__int64 *)a1, (int)"DC", (int)"") )
    {
      v7 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
      while ( 1 )
      {
        v12[0] = sub_21B5BC(a1);
        if ( !v12[0] )
          break;
        sub_216CEC(a1 + 8, v12);
        v8 = *(_QWORD *)a1;
        if ( (_DWORD)v8 != HIDWORD(v8) && *(_BYTE *)v8 == 69 )
        {
          *(_DWORD *)a1 = v8 + 1;
          sub_216D60((int)v12, a1, v7);
          v9 = sub_216EF0(a1 + 408, 16);
          v10 = v12[1];
          v9[2] = v12[0];
          v9[3] = v10;
          *v9 = &off_233974;
          v9[1] = 16843054;
          return sub_2176FC((__int64 *)a1, v9);
        }
      }
      return 0;
    }
    v6 = sub_21B6D4(a1, a2);
  }
  else
  {
    v6 = sub_21B5BC(a1);
  }
LABEL_13:
  v9 = (_DWORD *)v6;
  if ( v6 )
    return sub_2176FC((__int64 *)a1, v9);
  return 0;
}


// ======================================================================
// ADDR: 0x21c6bc
// SYMBOL: sub_21C6BC
_DWORD *__fastcall sub_21C6BC(int a1, _DWORD *a2, _BYTE *a3, _DWORD *a4)
{
  _DWORD *result; // r0

  result = sub_216EF0(a1 + 408, 20);
  result[1] = 16843050;
  *result = &off_233904;
  result[2] = *a2;
  *((_BYTE *)result + 12) = *a3;
  result[4] = *a4;
  return result;
}


// ======================================================================
// ADDR: 0x21c8c2
// SYMBOL: sub_21C8C2
unsigned __int8 *__fastcall sub_21C8C2(unsigned __int8 *result, unsigned __int8 *a2)
{
  int v2; // r2
  int v3; // r2
  unsigned __int8 *i; // r2
  int v5; // r3
  unsigned __int8 *v6; // r2
  int v7; // t1

  if ( result != a2 )
  {
    v2 = *result;
    if ( v2 == 95 )
    {
      if ( result + 1 != a2 )
      {
        v3 = result[1];
        if ( (unsigned int)(v3 - 58) >= 0xFFFFFFF6 )
        {
          result += 2;
        }
        else if ( v3 == 95 )
        {
          for ( i = result + 2; i != a2; ++i )
          {
            v5 = *i;
            if ( (unsigned int)(v5 - 58) < 0xFFFFFFF6 )
            {
              if ( v5 == 95 )
                return i + 1;
              return result;
            }
          }
        }
      }
    }
    else if ( (unsigned int)(v2 - 58) >= 0xFFFFFFF6 )
    {
      v6 = result + 1;
      while ( v6 != a2 )
      {
        v7 = *v6++;
        if ( (unsigned int)(v7 - 58) <= 0xFFFFFFF5 )
          return result;
      }
      return a2;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x21c928
// SYMBOL: sub_21C928
_DWORD *__fastcall sub_21C928(int a1, int *a2, int *a3)
{
  _DWORD *result; // r0
  int v6; // r2
  int v7; // r1

  result = sub_216EF0(a1 + 408, 16);
  result[1] = 16843032;
  v6 = *a2;
  *result = &off_2339AC;
  v7 = *a3;
  result[2] = v6;
  result[3] = v7;
  return result;
}


// ======================================================================
