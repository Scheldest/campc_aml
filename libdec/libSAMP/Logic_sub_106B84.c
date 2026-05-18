// ADDR: 0x1056d0
// SYMBOL: sub_1056D0
int __fastcall sub_1056D0(int a1)
{
  int result; // r0
  char *v3; // r5
  int v4; // r4
  int v5; // r0
  _QWORD *v6; // r0
  char *v7; // r4
  int v8; // r5
  int v9; // r0
  _QWORD *v10; // r0
  _BYTE v11[19]; // [sp+0h] [bp-30h]
  _BYTE v12[19]; // [sp+0h] [bp-30h]

  result = *(_DWORD *)(a1 + 92);
  if ( result )
  {
    result = *(_DWORD *)result;
    if ( result != dword_23DF24 + 6715820 )
    {
      if ( *(_BYTE *)(a1 + 66) )
      {
        v3 = &byte_B3470;
        do
        {
          v4 = (unsigned __int8)*v3;
          *(_QWORD *)v11 = *(_QWORD *)(v3 + 1);
          *(_QWORD *)&v11[8] = *(_QWORD *)(v3 + 9);
          *(_DWORD *)&v11[15] = *((_DWORD *)v3 + 4);
          v5 = sub_F9124(a1);
          if ( v5 )
          {
            v6 = (_QWORD *)(*(_DWORD *)(v5 + 32) + *(_DWORD *)(*(_DWORD *)(v5 + 32) + 36) * v4 + 76);
            *v6 = *(_QWORD *)&v11[3];
            v6[1] = *(_QWORD *)&v11[11];
          }
          v3 += 20;
        }
        while ( v3 != &byte_B3524 );
      }
      else
      {
        result = *(unsigned __int8 *)(a1 + 67);
        if ( !*(_BYTE *)(a1 + 67) )
          return result;
        v7 = &byte_B3524;
        do
        {
          v8 = (unsigned __int8)*v7;
          *(_QWORD *)v12 = *(_QWORD *)(v7 + 1);
          *(_QWORD *)&v12[8] = *(_QWORD *)(v7 + 9);
          *(_DWORD *)&v12[15] = *((_DWORD *)v7 + 4);
          v9 = sub_F9124(a1);
          if ( v9 )
          {
            v10 = (_QWORD *)(*(_DWORD *)(v9 + 32) + *(_DWORD *)(*(_DWORD *)(v9 + 32) + 36) * v8 + 76);
            *v10 = *(_QWORD *)&v12[3];
            v10[1] = *(_QWORD *)&v12[11];
          }
          v7 += 20;
        }
        while ( v7 != "10CPlayerPed" );
      }
      sub_10479C(a1, 0, 0);
      return sub_F9104(a1);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x106164
// SYMBOL: sub_106164
int __fastcall sub_106164(int result)
{
  int v1; // r1
  int *v2; // r3
  int v3; // r12
  int v4; // r4
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r9
  bool v9; // zf
  int v10; // r1
  int v11; // [sp+0h] [bp-30h] BYREF
  int v12; // [sp+4h] [bp-2Ch]
  int *v13; // [sp+10h] [bp-20h]

  v1 = *(_DWORD *)(result + 92);
  if ( v1 )
  {
    v2 = (int *)(*(_DWORD *)(v1 + 20) + 48);
    v3 = *(_DWORD *)result;
    v4 = *(unsigned __int8 *)(result + 96);
    v5 = *v2;
    v6 = v2[1];
    v7 = v2[2];
    v13 = &v11;
    v12 = result;
    v8 = *(_DWORD *)dword_2402E4;
    *(_DWORD *)dword_2402E4 = v4;
    (*(void (__fastcall **)(int, int, int, int, _UNKNOWN **, int))(v3 + 16))(result, v5, v6, v7, &off_22B218, v12);
    sub_F88F8();
    result = (int)v13;
    v9 = &v11 == v13;
    *(_DWORD *)dword_2402E4 = v8;
    if ( v9 )
    {
      v10 = 4;
    }
    else
    {
      if ( !result )
        return result;
      v10 = 5;
    }
    return (*(int (**)(void))(*(_DWORD *)result + 4 * v10))();
  }
  return result;
}


// ======================================================================
// ADDR: 0x1061f8
// SYMBOL: sub_1061F8
int __fastcall sub_1061F8(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 92);
  if ( result )
  {
    if ( (*(_BYTE *)(result + 1157) & 0x10) == 0 )
    {
      result = *(_DWORD *)(*(_DWORD *)(result + 1088) + 16);
      if ( result )
      {
        if ( *(_DWORD *)result - dword_23DF24 == 6736952 )
        {
          ((void (*)(void))(dword_23DF24 + 5442701))();
          result = *(_DWORD *)(*(_DWORD *)(a1 + 92) + 1088);
          *(_DWORD *)(result + 16) = 0;
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x106248
// SYMBOL: sub_106248
unsigned int __fastcall sub_106248(_BYTE *a1, unsigned __int8 *a2)
{
  unsigned int result; // r0
  const char *v5; // r2
  __int64 v6; // r0
  int v7; // [sp+14h] [bp-24h]
  int v8; // [sp+18h] [bp-20h] BYREF
  unsigned __int8 v9; // [sp+1Ch] [bp-1Ch] BYREF
  unsigned __int8 v10; // [sp+1Dh] [bp-1Bh] BYREF
  char v11; // [sp+1Eh] [bp-1Ah] BYREF
  unsigned __int8 v12; // [sp+1Fh] [bp-19h] BYREF
  _DWORD v13[6]; // [sp+20h] [bp-18h] BYREF

  result = *a2;
  if ( result <= 3 )
  {
    if ( !a1[96] )
    {
      v5 = off_237DB0[result];
      HIDWORD(v6) = off_237DA0[result];
      v13[1] = 1076887552;
      v12 = 1;
      v13[0] = 0;
      v11 = 0;
      v10 = 0;
      v9 = 0;
      LODWORD(v6) = a1;
      sub_104F28(v6, v5, v13, &v12, (int)&v11, &v10, &v9, &v8, v7, -1);
      sub_F97A8(dword_23DEF0, 0);
    }
    a1[58] = 0;
    result = *a2;
    a1[57] = 1;
    a1[56] = result;
  }
  return result;
}


// ======================================================================
// ADDR: 0x1062f4
// SYMBOL: sub_1062F4
int __fastcall sub_1062F4(_BYTE *a1)
{
  int v2; // r0
  _DWORD v4[18]; // [sp+0h] [bp-48h] BYREF

  v2 = (unsigned __int8)a1[96];
  a1[57] = 0;
  if ( !v2 )
    sub_F97A8(dword_23DEF0, 1);
  sub_F8910((int)a1, v4);
  return (*(int (__fastcall **)(_BYTE *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 16))(a1, v4[12], v4[13], v4[14]);
}


// ======================================================================
// ADDR: 0x106334
// SYMBOL: sub_106334
int __fastcall sub_106334(int a1)
{
  int result; // r0
  int v3; // r5
  const char *v4; // r2
  __int64 v5; // r0
  const char *v6; // r2
  __int64 v7; // r0
  char **v8; // r1
  int v9; // [sp+14h] [bp-2Ch]
  int v10; // [sp+18h] [bp-28h] BYREF
  unsigned __int8 v11; // [sp+1Dh] [bp-23h] BYREF
  unsigned __int8 v12; // [sp+1Eh] [bp-22h] BYREF
  char v13; // [sp+1Fh] [bp-21h] BYREF
  int v14; // [sp+20h] [bp-20h] BYREF
  int v15; // [sp+24h] [bp-1Ch]
  unsigned __int8 v16[17]; // [sp+2Fh] [bp-11h] BYREF

  result = *(_DWORD *)(a1 + 92);
  if ( result )
  {
    result = *(unsigned __int8 *)(a1 + 57);
    if ( *(_BYTE *)(a1 + 57) )
    {
      result = sub_F8C70(a1);
      if ( result )
      {
        result = *(unsigned __int8 *)(a1 + 96);
        if ( !*(_BYTE *)(a1 + 96) )
        {
          sub_F97A8(dword_23DEF0, 0);
          v3 = *(unsigned __int8 *)(a1 + 56);
          if ( !*(_DWORD *)(a1 + 92) || !sub_F8C70(a1) || !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 92) + 1088) + 16) )
          {
            v13 = 0;
            v4 = off_237DB0[v3];
            v14 = 0;
            v15 = 1074790400;
            v16[0] = 1;
            HIDWORD(v5) = off_237DA0[v3];
            LODWORD(v5) = a1;
            v12 = 0;
            v11 = 0;
            sub_104F28(v5, v4, &v14, v16, (int)&v13, &v12, &v11, &v10, v9, 0);
          }
          sub_104BA4(a1, &v14, &v10, (char *)v16, 1);
          result = *(unsigned __int8 *)(a1 + 58);
          if ( *(_BYTE *)(a1 + 58) )
          {
            *(_BYTE *)(a1 + 58) = 0;
            if ( v3 == 3 )
            {
              v6 = off_237DBC[0];
              *((char **)&v7 + 1) = off_237E40[0];
              v15 = 1074790400;
            }
            else
            {
              if ( sub_10609E(a1) )
              {
                v8 = off_237E00;
              }
              else
              {
                result = sub_106070(a1);
                if ( !result )
                  return result;
                v8 = off_237DC0;
              }
              v6 = off_237DB0[v3];
              HIDWORD(v7) = *v8;
              v15 = 1074790400;
            }
            v14 = 0;
            v16[0] = 0;
            v13 = 0;
            v12 = 0;
            v11 = 0;
            LODWORD(v7) = a1;
            return sub_104F28(v7, v6, &v14, v16, (int)&v13, &v12, &v11, &v10, v9, 0);
          }
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1064bc
// SYMBOL: sub_1064BC
bool __fastcall sub_1064BC(int a1)
{
  int v2; // r0
  _DWORD *v3; // r0

  v2 = *(_DWORD *)(a1 + 92);
  return v2
      && (*(_BYTE *)(v2 + 1157) & 0x10) == 0
      && sub_F8C70(a1)
      && sub_1082F4(*(_DWORD *)(a1 + 8))
      && (v3 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(a1 + 92) + 1088) + 16)) != 0
      && *v3 - dword_23DF24 == 6707200;
}


// ======================================================================
// ADDR: 0x106580
// SYMBOL: sub_106580
int __fastcall sub_106580(int a1, _BYTE *a2)
{
  _DWORD *v3; // r6
  int result; // r0
  int v6; // r1
  int v7; // r12
  int v8; // r2
  int v9; // lr
  int v10; // r6
  int v11; // r9
  int v12; // r10
  int v13; // r11
  int v14; // [sp+14h] [bp-34h]
  int v15; // [sp+18h] [bp-30h]

  v3 = (_DWORD *)(a1 + 60);
  if ( *(_DWORD *)(a1 + 60) )
    sub_10679C(a1);
  result = (unsigned __int8)*a2 - 1;
  switch ( *a2 )
  {
    case 1:
      sub_107188(&unk_B38CA, 1543, 0, 0, 0, 0, 0, 0, v3, v14, v15);
      if ( !sub_108324(*v3) )
        goto LABEL_13;
      v6 = *(_DWORD *)(a1 + 8);
      v7 = 1068079513;
      v8 = *(_DWORD *)(a1 + 60);
      v9 = 1067366481;
      v10 = -536870911;
      v11 = -1076677837;
      v12 = 1073741825;
      v13 = -1610612736;
      goto LABEL_10;
    case 2:
      sub_107188(&unk_B38CA, 1486, 0, 0, 0, 0, 0, 0, v3, v14, v15);
      if ( sub_108324(*v3) )
        sub_107188(
          "\n\aiifffiissi",
          *(_DWORD *)(a1 + 8),
          *(_DWORD *)(a1 + 60),
          16,
          -1610612736,
          1068079513,
          -536870911,
          1067366481,
          -1610612736,
          -1079404135,
          6);
      goto LABEL_13;
    case 3:
      sub_107188(&unk_B38CA, 1546, 0, 0, 0, 0, 0, 0, v3, v14, v15);
      if ( sub_108324(*v3) )
      {
        v6 = *(_DWORD *)(a1 + 8);
        v7 = 1067743969;
        v8 = *(_DWORD *)(a1 + 60);
        v9 = 1069128089;
        v11 = -1080788255;
        v13 = 0x40000000;
        v10 = -1610612737;
        v12 = 0x3FFFFFFF;
LABEL_10:
        sub_107188("\n\aiifffiissi", v6, v8, 16, v13, v7, v10, v9, v12, v11, 6);
      }
      goto LABEL_13;
    case 4:
      sub_107188(&unk_B38CA, 1485, 0, 0, 0, 0, 0, 0, v3, v14, v15);
      if ( sub_108324(*v3) )
        sub_107188("\n\aiifffiissi", *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 60), 16, 0, 0, 0, 0, 0, 0, 6);
LABEL_13:
      result = (unsigned __int8)*a2;
      *(_BYTE *)(a1 + 59) = result;
      break;
    default:
      return result;
  }
  return result;
}


// ======================================================================
// ADDR: 0x1067fc
// SYMBOL: sub_1067FC
unsigned int __fastcall sub_1067FC(int a1)
{
  unsigned int result; // r0
  __int64 v3; // r0
  int v4; // r1
  int v5; // [sp+14h] [bp-1Ch]
  int v6; // [sp+18h] [bp-18h] BYREF
  unsigned __int8 v7; // [sp+1Ch] [bp-14h] BYREF
  unsigned __int8 v8; // [sp+1Dh] [bp-13h] BYREF
  char v9; // [sp+1Eh] [bp-12h] BYREF
  unsigned __int8 v10; // [sp+1Fh] [bp-11h] BYREF
  int v11; // [sp+20h] [bp-10h] BYREF
  int v12; // [sp+24h] [bp-Ch]

  result = sub_F8C70(a1);
  if ( !result )
    return result;
  result = *(unsigned __int8 *)(a1 + 96);
  if ( *(_BYTE *)(a1 + 96) )
    return result;
  if ( *(_DWORD *)(a1 + 92) )
  {
    if ( sub_F8C70(a1) )
    {
      result = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 92) + 1088) + 16);
      if ( result )
        return result;
    }
  }
  result = *(unsigned __int8 *)(a1 + 59);
  if ( result - 1 < 3 )
  {
    if ( sub_10609E(a1) )
    {
      HIDWORD(v3) = "dnk_stndM_loop";
    }
    else
    {
      if ( !sub_106070(a1) )
        goto LABEL_14;
      HIDWORD(v3) = "dnk_stndF_loop";
    }
    v12 = 1074790400;
    v11 = 0;
    v10 = 0;
    v9 = 0;
    v8 = 0;
    v7 = 0;
    LODWORD(v3) = a1;
    sub_104F28(v3, "BAR", &v11, &v10, (int)&v9, &v8, &v7, &v6, v5, -1);
LABEL_14:
    result = *(unsigned __int8 *)(a1 + 59);
    if ( result != 3 )
    {
      v4 = 50000;
      result = *(_DWORD *)(a1 + 72) + 1250;
      if ( result < 0xC350 )
        v4 = *(_DWORD *)(a1 + 72) + 1250;
      *(_DWORD *)(a1 + 72) = v4;
    }
    return result;
  }
  if ( result == 4 )
  {
    v12 = 1082515456;
    v11 = 0;
    v10 = 0;
    v9 = 0;
    v8 = 0;
    v7 = 0;
    sub_104F28(__SPAIR64__("smkcig_prtl", a1), "GANGS", &v11, &v10, (int)&v9, &v8, &v7, &v6, v5, 2750);
    sub_1043B8(a1);
    return (unsigned int)sub_10479C(a1, 0, 0);
  }
  return result;
}


// ======================================================================
// ADDR: 0x106944
// SYMBOL: sub_106944
int __fastcall sub_106944(unsigned int a1)
{
  int result; // r0
  int v3; // r2
  int v4; // r3
  int v5; // [sp+0h] [bp-58h]
  int v6; // [sp+4h] [bp-54h]
  int v7; // [sp+8h] [bp-50h]
  int v8; // [sp+Ch] [bp-4Ch]
  int v9; // [sp+10h] [bp-48h]
  int v10; // [sp+14h] [bp-44h]
  int v11; // [sp+14h] [bp-44h]
  int v12; // [sp+18h] [bp-40h]
  int v13; // [sp+18h] [bp-40h]
  int v14; // [sp+38h] [bp-20h] BYREF
  unsigned __int8 v15; // [sp+3Ch] [bp-1Ch] BYREF
  unsigned __int8 v16; // [sp+3Dh] [bp-1Bh] BYREF
  char v17; // [sp+3Eh] [bp-1Ah] BYREF
  unsigned __int8 v18; // [sp+3Fh] [bp-19h] BYREF
  _DWORD v19[6]; // [sp+40h] [bp-18h] BYREF

  result = *(unsigned __int8 *)(a1 + 64);
  if ( !result )
  {
    result = *(_DWORD *)(a1 + 92);
    if ( result )
    {
      result = sub_1082F4(*(_DWORD *)(a1 + 8));
      if ( result )
      {
        if ( !*(_BYTE *)(a1 + 96) )
        {
          v19[1] = 1074790400;
          v18 = 1;
          v19[0] = 0;
          v17 = 0;
          v16 = 0;
          v15 = 0;
          v14 = -1;
          sub_104F28(__SPAIR64__("PISS_LOOP", a1), "PAULNMAC", v19, &v18, (int)&v17, &v16, &v15, &v14, v10, v12);
        }
        sub_107188(
          &unk_B38F2,
          "PETROLCAN",
          *(_DWORD *)(a1 + 8),
          0,
          0,
          0,
          0x20000000,
          1071812444,
          0x40000000,
          -1078691103,
          0);
        result = sub_107188(&unk_B3906, *(_DWORD *)(a1 + 80), v3, v4, v5, v6, v7, v8, v9, v11, v13);
        *(_BYTE *)(a1 + 64) = 1;
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x106a40
// SYMBOL: sub_106A40
int __fastcall sub_106A40(int a1)
{
  int result; // r0
  int v3; // r2
  int v4; // r3
  int v5; // r1
  _DWORD v6[18]; // [sp+0h] [bp-48h] BYREF

  result = *(unsigned __int8 *)(a1 + 64);
  if ( result )
  {
    result = *(_DWORD *)(a1 + 92);
    if ( result )
    {
      result = sub_1082F4(*(_DWORD *)(a1 + 8));
      if ( result )
      {
        v5 = *(_DWORD *)(a1 + 80);
        if ( v5 )
        {
          sub_107188(&unk_B391A, v5, v3, v4, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6]);
          *(_DWORD *)(a1 + 80) = 0;
        }
        sub_F8910(a1, v6);
        (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 16))(a1, v6[12], v6[13], v6[14]);
        result = 0;
        *(_BYTE *)(a1 + 64) = 0;
      }
    }
  }
  return result;
}


// ======================================================================
