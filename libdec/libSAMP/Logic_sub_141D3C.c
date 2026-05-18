// ADDR: 0xf948c
// SYMBOL: sub_F948C
int __fastcall sub_F948C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  int v11; // r3

  *(_BYTE *)(dword_23DF24 + 9777475) = a3;
  v11 = dword_23DF24;
  *(_BYTE *)(dword_23DF24 + 9777474) = a2;
  return sub_107188(&unk_B2CB4, a2, a3, v11, a5, a6, a7, a8, a9, a10, a11);
}


// ======================================================================
// ADDR: 0x13e2c8
// SYMBOL: sub_13E2C8
int __fastcall sub_13E2C8(int a1)
{
  __int64 v1; // r4
  int result; // r0
  bool v4; // zf
  int v5; // r5
  int v6; // r10
  int v7; // r0
  __int64 v8; // kr08_8
  int v9; // r0
  int v10; // r4
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r9
  int v15; // r4
  int v16; // r0
  __int64 v17; // r10
  int v18; // r8
  int v19; // r3
  int v20; // r4
  int v21; // r5
  int v22; // r3
  int v23; // r4
  int v24; // r5
  int v25; // r6
  int v26; // r3
  int v27; // r4
  int v28; // r5
  int v29; // r6
  int v30; // r1
  int v31; // r0
  int v32; // [sp+8h] [bp-20h]

  result = dword_23DEF4;
  if ( dword_23DEF4 )
  {
    result = *(_DWORD *)(dword_23DEF4 + 536);
    v4 = result == 5;
    if ( result != 5 )
    {
      v1 = *(_QWORD *)a1;
      v4 = (_DWORD)v1 == HIDWORD(v1);
    }
    if ( !v4 )
    {
      do
      {
        result = sub_13E4F0(HIDWORD(v1) - 4, 0);
        HIDWORD(v1) -= 60;
      }
      while ( HIDWORD(v1) != (_DWORD)v1 );
      *(_DWORD *)(a1 + 4) = v1;
    }
  }
  v6 = *(_DWORD *)(a1 + 4);
  v5 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 == v6 )
    return result;
  while ( 1 )
  {
    if ( *(_DWORD *)(v5 + 48) == -1 )
      goto LABEL_45;
    v7 = sub_F0B30();
    v8 = *(_QWORD *)(v5 + 48);
    if ( v7 - HIDWORD(v8) > (unsigned int)v8 )
    {
      if ( *(_DWORD *)(v5 + 56) )
      {
        sub_13E4F0(v5 + 56, 0);
        *(_DWORD *)(v5 + 52) = sub_F0B30();
      }
      goto LABEL_14;
    }
    if ( (_DWORD)v8 == -1 )
    {
LABEL_45:
      v9 = *(_DWORD *)(v5 + 56);
      if ( v9 )
      {
        result = *(unsigned __int8 *)(sub_163050(v9) + 85);
        if ( result )
          break;
      }
    }
LABEL_14:
    result = sub_1082E4();
    if ( result )
    {
      v10 = *(_DWORD *)(v5 + 56);
      v11 = sub_1082E4();
      v12 = v11;
      if ( v10 )
      {
        v13 = *(_DWORD *)(v5 + 56);
        if ( *(unsigned __int8 *)(v12 + 51) == *(unsigned __int8 *)(v5 + 44) )
        {
          result = *(unsigned __int8 *)(sub_163050(v13) + 84);
          if ( result == 1 )
            result = sub_163054(*(_DWORD *)(v5 + 56));
        }
        else
        {
          result = sub_163070(v13);
        }
      }
      else
      {
        if ( *(_DWORD *)(v11 + 24) )
          v14 = *(_DWORD *)(*(_DWORD *)(sub_1082E4() + 24) + 4) + 16;
        else
          v14 = 0;
        v15 = operator new(4u);
        sub_162F64(v15, v5, v5 + 32, v14, 1);
        sub_13E4F0(v5 + 56, v15);
        v16 = *(_DWORD *)(v5 + 56);
        if ( *(_DWORD *)(v5 + 48) == -1 )
          sub_16308C(v16);
        else
          sub_163054(v16);
        result = sub_F0B30();
        *(_DWORD *)(v5 + 52) = result;
      }
    }
    v5 += 60;
    if ( v5 == v6 )
      return result;
  }
  v17 = *(_QWORD *)a1;
  if ( (_DWORD)v17 != HIDWORD(v17) )
  {
    while ( 1 )
    {
      result = sub_13DF22((char *)v17, (char *)v5);
      if ( result )
        break;
      LODWORD(v17) = v17 + 60;
      if ( (_DWORD)v17 == HIDWORD(v17) )
        return result;
    }
  }
  if ( (_DWORD)v17 != HIDWORD(v17) )
  {
    v32 = a1;
    if ( (_DWORD)v17 + 60 == HIDWORD(v17) )
    {
      v18 = v17;
    }
    else
    {
      do
      {
        v18 = v17 + 60;
        v19 = *(_DWORD *)(v17 + 64);
        v20 = *(_DWORD *)(v17 + 68);
        v21 = *(_DWORD *)(v17 + 72);
        *(_DWORD *)v17 = *(_DWORD *)(v17 + 60);
        *(_DWORD *)(v17 + 4) = v19;
        *(_DWORD *)(v17 + 8) = v20;
        *(_DWORD *)(v17 + 12) = v21;
        v22 = *(_DWORD *)(v17 + 80);
        v23 = *(_DWORD *)(v17 + 84);
        v24 = *(_DWORD *)(v17 + 88);
        v25 = *(_DWORD *)(v17 + 92);
        *(_DWORD *)(v17 + 16) = *(_DWORD *)(v17 + 76);
        *(_DWORD *)(v17 + 20) = v22;
        *(_DWORD *)(v17 + 24) = v23;
        *(_DWORD *)(v17 + 28) = v24;
        *(_DWORD *)(v17 + 32) = v25;
        v26 = *(_DWORD *)(v17 + 100);
        v27 = *(_DWORD *)(v17 + 104);
        v28 = *(_DWORD *)(v17 + 108);
        v29 = *(_DWORD *)(v17 + 112);
        *(_DWORD *)(v17 + 36) = *(_DWORD *)(v17 + 96);
        *(_DWORD *)(v17 + 40) = v26;
        *(_DWORD *)(v17 + 44) = v27;
        *(_DWORD *)(v17 + 48) = v28;
        *(_DWORD *)(v17 + 52) = v29;
        v30 = *(_DWORD *)(v17 + 116);
        *(_DWORD *)(v17 + 116) = 0;
        sub_13E4F0(v17 + 56, v30);
        v31 = v17 + 120;
        LODWORD(v17) = v17 + 60;
      }
      while ( v31 != HIDWORD(v17) );
      HIDWORD(v17) = *(_DWORD *)(v32 + 4);
      if ( v18 == HIDWORD(v17) )
      {
LABEL_42:
        result = v32;
        *(_DWORD *)(v32 + 4) = v18;
        return result;
      }
    }
    do
    {
      sub_13E4F0(HIDWORD(v17) - 4, 0);
      HIDWORD(v17) -= 60;
    }
    while ( HIDWORD(v17) != v18 );
    goto LABEL_42;
  }
  return result;
}


// ======================================================================
// ADDR: 0x141dfc
// SYMBOL: sub_141DFC
int __fastcall sub_141DFC(int a1)
{
  int result; // r0
  int v3; // r5
  unsigned __int8 *v4; // r1
  int v5; // r0

  result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 528) + 36))(*(_DWORD *)(a1 + 528));
  if ( result )
  {
    v3 = result;
    do
    {
      v4 = *(unsigned __int8 **)(v3 + 20);
      v5 = *v4;
      if ( v5 == 40 )
        v5 = v4[5];
      switch ( v5 )
      {
        case 200:
          sub_14289C(a1, v3);
          break;
        case 201:
        case 202:
        case 204:
        case 205:
        case 212:
        case 213:
        case 214:
        case 215:
        case 216:
        case 217:
        case 218:
        case 219:
          break;
        case 203:
          sub_142B24(a1, v3);
          break;
        case 206:
          sub_142BA4(a1, v3);
          break;
        case 207:
          sub_142C2E(a1, v3);
          break;
        case 208:
          sub_142E8A(a1, v3);
          break;
        case 209:
          sub_142F9E(a1, v3);
          break;
        case 210:
          sub_143028(a1, v3);
          break;
        case 211:
          sub_1430C8(a1, v3);
          break;
        case 220:
          sub_143148(a1, v3);
          break;
        default:
          switch ( v5 )
          {
            case 29:
              sub_142198(a1);
              break;
            case 30:
              goto LABEL_27;
            case 31:
              sub_1421D4(a1);
              break;
            case 32:
              sub_142210(a1);
              break;
            case 33:
              sub_14229C(a1);
              break;
            case 34:
              sub_1423A0(a1, v3);
              break;
            case 35:
              sub_142780();
              break;
            case 36:
              sub_1427B4(a1);
              break;
            case 37:
              sub_142800(a1);
              break;
            default:
              if ( v5 == 12 )
                sub_1420BC(a1, v3);
              break;
          }
          break;
      }
LABEL_27:
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 528) + 40))(*(_DWORD *)(a1 + 528), v3);
      result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 528) + 36))(*(_DWORD *)(a1 + 528));
      v3 = result;
    }
    while ( result );
  }
  return result;
}


// ======================================================================
// ADDR: 0x141f1c
// SYMBOL: sub_141F1C
int __fastcall sub_141F1C(int a1)
{
  _DWORD *v1; // r1
  int v3; // r2
  int v4; // r0
  int result; // r0

  v1 = *(_DWORD **)(a1 + 944);
  if ( *v1 )
  {
    sub_148D6A();
    v1 = *(_DWORD **)(a1 + 944);
  }
  if ( v1[1] && dword_314310 >= 3 )
  {
    sub_150224();
    v1 = *(_DWORD **)(a1 + 944);
    v3 = 0;
  }
  else
  {
    v3 = dword_314310 + 1;
  }
  v4 = v1[3];
  dword_314310 = v3;
  if ( v4 && dword_314314 >= 6 )
  {
    sub_148858();
    result = 0;
  }
  else
  {
    result = dword_314314 + 1;
  }
  dword_314314 = result;
  return result;
}


// ======================================================================
// ADDR: 0x141f74
// SYMBOL: sub_141F74
int sub_141F74()
{
  int v0; // r4

  v0 = sub_E35A0(dword_23DEF0);
  if ( sub_104108(v0) )
    sub_104098(v0, 1093.4, -2036.5, 82.711);
  else
    (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v0 + 16))(v0, 1150132637, -989934359, 1116353331);
  sub_F8630(*(_DWORD *)(dword_23DEF0 + 4), 1093.0, -2036.0, 90.0, 0.0, 0.0, 0.0);
  sub_F86AC(*(_DWORD *)(dword_23DEF0 + 4), 384.0, -1557.0, 20.0, 2);
  sub_F977C(dword_23DEF0, 1);
  return sub_F97A8(dword_23DEF0, 0);
}


// ======================================================================
// ADDR: 0x142030
// SYMBOL: sub_142030
unsigned int __fastcall sub_142030(int a1)
{
  int v2; // r5
  unsigned int result; // r0
  int v4; // r6
  int v5; // r0
  int v6; // r2
  int (__fastcall *v7)(int, int, int, _DWORD, _DWORD, int); // r6
  const char *v8; // [sp+8h] [bp-18h] BYREF

  v2 = sub_F0B30();
  result = v2 - *(_DWORD *)(a1 + 948);
  if ( result >= 0xFB )
  {
    ++*(_DWORD *)(a1 + 540);
    if ( dword_23DEEC )
    {
      v4 = *(_DWORD *)(dword_23DEEC + 96);
      sub_F1E90((int)&v8, byte_8F469);
      sub_12D5E8(v4, v8, *(_DWORD *)(a1 + 540));
    }
    v5 = *(_DWORD *)(a1 + 528);
    v6 = *(unsigned __int16 *)(a1 + 516);
    v7 = *(int (__fastcall **)(int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)v5 + 8);
    byte_314318 = 1;
    result = v7(v5, a1 + 257, v6, 0, 0, 2);
    *(_DWORD *)(a1 + 948) = v2;
    *(_DWORD *)(a1 + 536) = 2;
  }
  return result;
}


// ======================================================================
