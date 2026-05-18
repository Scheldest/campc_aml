// ADDR: 0x2154cc
// SYMBOL: sub_2154CC
int __fastcall sub_2154CC(unsigned __int8 *a1, int a2)
{
  int result; // r0

  (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 16))(a1);
  result = a1[5];
  if ( result != 1 )
    return (*(int (__fastcall **)(unsigned __int8 *, int))(*(_DWORD *)a1 + 20))(a1, a2);
  return result;
}


// ======================================================================
// ADDR: 0x2154f2
// SYMBOL: sub_2154F2
__int64 __fastcall sub_2154F2(__int64 *a1, char a2)
{
  __int64 result; // r0

  sub_2155BA(a1, 1);
  result = *a1;
  ++*((_DWORD *)a1 + 1);
  *(_BYTE *)(result + HIDWORD(result)) = a2;
  return result;
}


// ======================================================================
// ADDR: 0x21550c
// SYMBOL: sub_21550C
_DWORD *__fastcall sub_21550C(_DWORD *a1)
{
  _DWORD **v2; // r5
  _DWORD *v3; // r6
  _DWORD *v4; // r0
  _DWORD *v5; // r0

  v2 = (_DWORD **)(a1 + 1126);
  v3 = a1 + 102;
  while ( 1 )
  {
    v4 = *v2;
    if ( !*v2 )
      break;
    *v2 = (_DWORD *)*v4;
    if ( v3 != v4 )
      free(v4);
  }
  a1[102] = 0;
  a1[103] = 0;
  v5 = (_DWORD *)a1[90];
  *v2 = v3;
  if ( v5 != a1 + 93 )
    free(v5);
  sub_215572(a1 + 83);
  sub_21558A(a1 + 72);
  sub_2155A2(a1 + 37);
  sub_2155A2(a1 + 2);
  return a1;
}


// ======================================================================
// ADDR: 0x2155e4
// SYMBOL: sub_2155E4
int __fastcall sub_2155E4(__int64 *a1, int a2, int a3)
{
  int result; // r0
  __int64 v7; // [sp+4h] [bp-1Ch] BYREF

  v7 = *a1;
  result = sub_2166CC(&v7, a2);
  if ( result )
    *(_DWORD *)a1 += a3 - a2;
  return result;
}


// ======================================================================
// ADDR: 0x215654
// SYMBOL: sub_215654
int __fastcall sub_215654(int a1)
{
  __int64 v2; // r0
  int v3; // r2
  bool v4; // zf
  unsigned int v5; // r3
  int v6; // r2
  int v7; // r0
  int v8; // r6
  _DWORD *v9; // r9
  const char *v10; // r1
  char *v11; // r2
  __int64 v12; // r0
  int v13; // r0
  int v14; // r1
  int v15; // r12
  __int64 v16; // kr08_8
  int v17; // r2
  unsigned int v18; // r6
  unsigned int i; // r3
  int v20; // r4
  __int64 v21; // kr10_8
  unsigned int v22; // r5
  bool v23; // zf
  int v25; // r1
  int v26; // r0
  int v27; // r0
  _BOOL4 v28; // r4
  int v29; // r4
  __int64 v30; // r0
  int v31; // r0
  const char *v32; // r0
  char *v33; // r1
  int v34; // r0
  int v35; // r0
  __int64 v36; // kr18_8
  int v37; // r0
  int v38; // r0
  int v40; // r0
  int v41; // r6
  __int64 v42; // r0
  bool v43; // zf
  int v44; // r0
  int v45; // r4
  int v46; // r0
  int v47; // r0
  _DWORD *v48; // r0
  int v49; // r4
  __int64 v50; // r0
  int v51; // r4
  int v52; // [sp+10h] [bp-48h] BYREF
  int v53; // [sp+14h] [bp-44h] BYREF
  int v54; // [sp+18h] [bp-40h]
  _DWORD *v55; // [sp+1Ch] [bp-3Ch] BYREF
  int v56; // [sp+20h] [bp-38h] BYREF
  int v57; // [sp+24h] [bp-34h] BYREF
  int v58; // [sp+28h] [bp-30h] BYREF
  _BYTE v59[4]; // [sp+2Ch] [bp-2Ch] BYREF
  int v60; // [sp+30h] [bp-28h]
  int v61; // [sp+34h] [bp-24h] BYREF

  v2 = *(_QWORD *)a1;
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = *(unsigned __int8 *)v2;
    v4 = v3 == 84;
    if ( v3 != 84 )
      v4 = v3 == 71;
    if ( v4 )
    {
      v5 = HIDWORD(v2) - v2;
      if ( HIDWORD(v2) == (_DWORD)v2 )
        return 0;
      if ( v3 == 71 )
      {
        if ( v5 < 2 )
          return 0;
        v25 = *(unsigned __int8 *)(v2 + 1);
        if ( v25 == 82 )
        {
          *(_DWORD *)a1 = v2 + 2;
          v9 = 0;
          v34 = sub_216710(a1, 0);
          if ( !v34 )
            return (int)v9;
          v8 = v34;
          v35 = sub_216E90(a1, &v57);
          v36 = *(_QWORD *)a1;
          if ( (_DWORD)v36 == HIDWORD(v36) || *(_BYTE *)v36 != 95 )
          {
            if ( !v35 )
              return 0;
          }
          else
          {
            *(_DWORD *)a1 = v36 + 1;
          }
          v9 = (_DWORD *)sub_216EF0(a1 + 408, 20);
          v10 = "reference temporary for ";
          v11 = "";
        }
        else
        {
          if ( v25 != 86 )
            return 0;
          *(_DWORD *)a1 = v2 + 2;
          v9 = 0;
          v26 = sub_216710(a1, 0);
          if ( !v26 )
            return (int)v9;
          v8 = v26;
          v9 = (_DWORD *)sub_216EF0(a1 + 408, 20);
          v10 = "guard variable for ";
          v11 = "";
        }
      }
      else
      {
        if ( v3 != 84 )
          return 0;
        if ( v5 < 2 )
        {
LABEL_38:
          LODWORD(v2) = v2 + 1;
          *(_DWORD *)a1 = v2;
          v28 = HIDWORD(v2) != (_DWORD)v2 && *(unsigned __int8 *)v2 == 118;
          if ( sub_216DDC(a1) )
            return 0;
          v31 = sub_215654(a1);
          if ( !v31 )
            return 0;
          v8 = v31;
          v9 = (_DWORD *)sub_216EF0(a1 + 408, 20);
          *v9 = &off_232E7C;
          v9[1] = 16843028;
          if ( v28 )
          {
            v32 = "virtual thunk to ";
            v33 = "";
          }
          else
          {
            v32 = "non-virtual thunk to ";
            v33 = "";
          }
          v9[2] = v32;
          v9[3] = v33;
LABEL_78:
          v9[4] = v8;
          return (int)v9;
        }
        v6 = *(unsigned __int8 *)(v2 + 1);
        switch ( *(_BYTE *)(v2 + 1) )
        {
          case 'S':
            *(_DWORD *)a1 = v2 + 2;
            v27 = sub_215C48(a1);
            if ( !v27 )
              return 0;
            v8 = v27;
            v9 = (_DWORD *)sub_216EF0(a1 + 408, 20);
            v10 = "typeinfo name for ";
            v11 = "";
            break;
          case 'T':
            *(_DWORD *)a1 = v2 + 2;
            v37 = sub_215C48(a1);
            if ( !v37 )
              return 0;
            v8 = v37;
            v9 = (_DWORD *)sub_216EF0(a1 + 408, 20);
            v10 = "VTT for ";
            v11 = "";
            break;
          case 'U':
            goto LABEL_38;
          case 'V':
            *(_DWORD *)a1 = v2 + 2;
            v38 = sub_215C48(a1);
            if ( !v38 )
              return 0;
            v8 = v38;
            v9 = (_DWORD *)sub_216EF0(a1 + 408, 20);
            v10 = "vtable for ";
            v11 = "";
            break;
          case 'W':
            *(_DWORD *)a1 = v2 + 2;
            v9 = 0;
            v57 = sub_216710(a1, 0);
            if ( !v57 )
              return (int)v9;
            return sub_215C04(a1, "thread-local wrapper routine for ", &v57);
          default:
            switch ( v6 )
            {
              case 'C':
                *(_DWORD *)a1 = v2 + 2;
                v40 = sub_215C48(a1);
                if ( v40 )
                {
                  v41 = v40;
                  sub_215BB4(&v57, a1, 1);
                  LODWORD(v42) = v57;
                  v43 = v57 == v58;
                  if ( v57 != v58 )
                  {
                    v42 = *(_QWORD *)a1;
                    v43 = (_DWORD)v42 == HIDWORD(v42);
                  }
                  if ( !v43 && *(_BYTE *)v42 == 95 )
                  {
                    *(_DWORD *)a1 = v42 + 1;
                    v44 = sub_215C48(a1);
                    if ( v44 )
                    {
                      v45 = v44;
                      v9 = (_DWORD *)sub_216EF0(a1 + 408, 16);
                      v9[2] = v45;
                      v9[3] = v41;
                      *v9 = &off_232EBC;
                      v9[1] = 16843029;
                      return (int)v9;
                    }
                  }
                }
                return 0;
              case 'H':
                *(_DWORD *)a1 = v2 + 2;
                v9 = 0;
                v46 = sub_216710(a1, 0);
                if ( !v46 )
                  return (int)v9;
                v8 = v46;
                v9 = (_DWORD *)sub_216EF0(a1 + 408, 20);
                v10 = "thread-local initialization routine for ";
                v11 = "";
                break;
              case 'I':
                *(_DWORD *)a1 = v2 + 2;
                v47 = sub_215C48(a1);
                if ( !v47 )
                  return 0;
                v8 = v47;
                v9 = (_DWORD *)sub_216EF0(a1 + 408, 20);
                v10 = "typeinfo for ";
                v11 = "";
                break;
              case 'c':
                *(_DWORD *)a1 = v2 + 2;
                if ( !sub_216DDC(a1) && !sub_216DDC(a1) )
                {
                  v7 = sub_215654(a1);
                  if ( v7 )
                  {
                    v8 = v7;
                    v9 = (_DWORD *)sub_216EF0(a1 + 408, 20);
                    v10 = "covariant return thunk to ";
                    v11 = "";
                    goto LABEL_77;
                  }
                }
                return 0;
              default:
                goto LABEL_38;
            }
            break;
        }
      }
LABEL_77:
      *v9 = &off_232E7C;
      v9[1] = 16843028;
      v9[2] = v10;
      v9[3] = v11;
      goto LABEL_78;
    }
  }
  v12 = *(_QWORD *)(a1 + 360);
  v9 = 0;
  v61 = a1;
  v59[0] = 0;
  v58 = 0;
  v60 = (HIDWORD(v12) - (int)v12) >> 2;
  LOWORD(v57) = 0;
  v13 = sub_216710(a1, &v57);
  v56 = v13;
  if ( v13 )
  {
    v14 = *(_DWORD *)(a1 + 360);
    v9 = (_DWORD *)v13;
    v15 = v60;
    v16 = *(_QWORD *)(a1 + 332);
    v17 = *(_DWORD *)(a1 + 364) - v14;
    v18 = v17 >> 2;
    for ( i = v60; i < v18; ++i )
    {
      v23 = (_DWORD)v16 == HIDWORD(v16);
      if ( (_DWORD)v16 != HIDWORD(v16) )
      {
        v17 = *(_DWORD *)v16;
        v23 = *(_DWORD *)v16 == 0;
      }
      if ( v23 )
        return 0;
      v20 = *(_DWORD *)(v14 + 4 * i);
      v21 = *(_QWORD *)v17;
      v22 = *(_DWORD *)(v20 + 8);
      if ( v22 >= (HIDWORD(v21) - (int)v21) >> 2 )
        return 0;
      v17 = *(_DWORD *)(v21 + 4 * v22);
      *(_DWORD *)(v20 + 12) = v17;
    }
    *(_DWORD *)(a1 + 364) = v14 + 4 * v15;
    if ( !sub_216B88(&v61) )
    {
      v55 = 0;
      if ( sub_2155E4((__int64 *)a1, (int)"Ua9enable_ifI", (int)"") )
      {
        v29 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
        while ( 1 )
        {
          v30 = *(_QWORD *)a1;
          if ( (_DWORD)v30 != HIDWORD(v30) && *(_BYTE *)v30 == 69 )
            break;
          v53 = sub_216BAC(a1);
          if ( !v53 )
            return 0;
          sub_216CEC(a1 + 8, &v53);
        }
        *(_DWORD *)a1 = v30 + 1;
        sub_216D60(&v53, a1, v29);
        v48 = (_DWORD *)sub_216EF0(a1 + 408, 16);
        v49 = v54;
        v48[2] = v53;
        v48[3] = v49;
        *v48 = &off_233B34;
        v48[1] = 16843017;
        v55 = v48;
      }
      v52 = 0;
      if ( !(_BYTE)v57 )
      {
        if ( BYTE1(v57) )
        {
          v52 = sub_215C48(a1);
          if ( !v52 )
            return 0;
        }
      }
      v50 = *(_QWORD *)a1;
      if ( (_DWORD)v50 != HIDWORD(v50) && *(_BYTE *)v50 == 118 )
      {
        *(_DWORD *)a1 = v50 + 1;
        v53 = 0;
        v54 = 0;
        return sub_216D80(a1, &v52, &v56, &v53, &v55, &v58, v59);
      }
      v51 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
      while ( 1 )
      {
        v53 = sub_215C48(a1);
        if ( !v53 )
          break;
        sub_216CEC(a1 + 8, &v53);
        if ( sub_216B88(&v61) )
        {
          sub_216D60(&v53, a1, v51);
          return sub_216D80(a1, &v52, &v56, &v53, &v55, &v58, v59);
        }
      }
      return 0;
    }
  }
  return (int)v9;
}


// ======================================================================
// ADDR: 0x215bb4
// SYMBOL: sub_215BB4
unsigned __int8 **__fastcall sub_215BB4(unsigned __int8 **result, unsigned __int8 **a2, int a3)
{
  unsigned __int8 *v3; // r3
  unsigned __int8 *v4; // r4
  bool v5; // zf
  unsigned __int8 *v6; // r2

  v4 = a2[1];
  v3 = *a2;
  v5 = a3 == 0;
  v6 = *a2;
  if ( !v5 )
  {
    if ( v3 == v4 )
    {
LABEL_7:
      v3 = 0;
      v4 = 0;
      goto LABEL_8;
    }
    v6 = *a2;
    if ( *v3 == 110 )
    {
      v6 = v3 + 1;
      *a2 = v3 + 1;
    }
  }
  if ( v4 == v6 || (unsigned int)*v6 - 58 < 0xFFFFFFF6 )
    goto LABEL_7;
  while ( v6 != v4 )
  {
    if ( (unsigned int)*v6 - 58 < 0xFFFFFFF6 )
    {
      v4 = v6;
      break;
    }
    *a2 = ++v6;
  }
LABEL_8:
  *result = v3;
  result[1] = v4;
  return result;
}


// ======================================================================
// ADDR: 0x215c04
// SYMBOL: sub_215C04
_DWORD *__fastcall sub_215C04(int a1, const char *a2, int *a3)
{
  _DWORD *v5; // r6
  size_t v6; // r0
  int v7; // r1
  _DWORD *result; // r0

  v5 = (_DWORD *)sub_216EF0(a1 + 408, 20);
  v6 = strlen(a2);
  v5[1] = 16843028;
  *v5 = &off_232E7C;
  v7 = *a3;
  v5[3] = &a2[v6];
  result = v5;
  v5[4] = v7;
  v5[2] = a2;
  return result;
}


// ======================================================================
// ADDR: 0x215c48
// SYMBOL: sub_215C48
int __fastcall sub_215C48(unsigned __int8 **a1)
{
  __int64 v2; // kr00_8
  unsigned int v3; // r0
  int v4; // r3
  unsigned int v5; // r2
  int v6; // r6
  int v7; // r3
  unsigned int v8; // r2
  int v9; // r0
  int v10; // r0
  int v11; // r0
  unsigned __int8 *v12; // r0
  int v13; // r8
  int v14; // r0
  int v15; // r5
  int v16; // r0
  const char *v17; // r2
  char *v18; // r3
  int result; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r6
  int v23; // r0
  int v24; // r8
  int v25; // r5
  int v26; // r0
  int v27; // r0
  int v28; // r5
  __int64 v29; // kr08_8
  int *v30; // r1
  int *v31; // r2
  unsigned int v32; // r0
  const char *v33; // r1
  const char *v34; // r1
  const char *v35; // r2
  char *v36; // r3
  const char *v37; // r1
  const char *v38; // r1
  const char *v39; // r1
  const char *v40; // r1
  const char *v41; // r1
  const char *v42; // r1
  const char *v43; // r1
  const char *v44; // r1
  __int64 v45; // r0
  int v46; // r0
  __int64 v47; // r0
  int v48; // r0
  int v49; // r6
  int v50; // r0
  int *v51; // r1
  __int64 v52; // r0
  unsigned int v53; // r1
  int v54; // r6
  __int64 v55; // r0
  int v56; // r0
  int v57; // r6
  _DWORD *v58; // r0
  __int64 v59; // r0
  int *v60; // r1
  int *v61; // r2
  int v62; // [sp+4h] [bp-24h] BYREF
  int v63; // [sp+8h] [bp-20h] BYREF
  unsigned __int8 *v64[2]; // [sp+Ch] [bp-1Ch] BYREF

  v2 = *(_QWORD *)a1;
  v62 = 0;
  v3 = HIDWORD(v2) - v2;
  if ( HIDWORD(v2) == (_DWORD)v2 )
  {
LABEL_55:
    v10 = sub_21D14C(a1);
LABEL_56:
    v25 = v10;
    v62 = v10;
  }
  else
  {
    v4 = *(unsigned __int8 *)v2;
    switch ( *(_BYTE *)v2 )
    {
      case 'A':
        if ( (_DWORD)v2 == HIDWORD(v2) )
          goto LABEL_146;
        *a1 = (unsigned __int8 *)(v2 + 1);
        if ( HIDWORD(v2) == (_DWORD)v2 + 1 )
          goto LABEL_101;
        v11 = *(unsigned __int8 *)(v2 + 1);
        if ( (unsigned int)(v11 - 58) >= 0xFFFFFFF6 )
        {
          v25 = 0;
          sub_215BB4(v64, a1, 0);
          v13 = sub_21D4A0(a1, v64);
          v47 = *(_QWORD *)a1;
          if ( (_DWORD)v47 == HIDWORD(v47) )
            goto LABEL_147;
        }
        else
        {
          if ( v11 == 95 )
          {
            v12 = (unsigned __int8 *)(v2 + 2);
            v13 = 0;
            goto LABEL_107;
          }
LABEL_101:
          v46 = sub_217B38(a1);
          if ( !v46 )
            goto LABEL_146;
          v13 = v46;
          v47 = *(_QWORD *)a1;
          if ( (_DWORD)v47 == HIDWORD(v47) )
            goto LABEL_146;
        }
        if ( *(_BYTE *)v47 != 95 )
          goto LABEL_146;
        v12 = (unsigned __int8 *)(v47 + 1);
LABEL_107:
        *a1 = v12;
        v48 = sub_215C48(a1);
        if ( !v48 )
          goto LABEL_146;
        v49 = v48;
        v25 = sub_216EF0(a1 + 102, 16);
        v50 = 16777230;
        v51 = &`vtable for'`anonymous namespace'::itanium_demangle::ArrayType;
        *(_DWORD *)(v25 + 8) = v49;
        *(_DWORD *)(v25 + 12) = v13;
LABEL_109:
        *(_DWORD *)v25 = v51 + 2;
        *(_DWORD *)(v25 + 4) = v50;
        goto LABEL_147;
      case 'C':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v14 = sub_215C48(a1);
        if ( !v14 )
          return 0;
        v15 = v14;
        v16 = sub_216EF0(a1 + 102, 20);
        v17 = " complex";
        v18 = "";
        goto LABEL_31;
      case 'D':
        if ( v3 < 2 )
          return 0;
        break;
      case 'F':
        goto LABEL_28;
      case 'G':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v20 = sub_215C48(a1);
        if ( !v20 )
          return 0;
        v15 = v20;
        v16 = sub_216EF0(a1 + 102, 20);
        v17 = " imaginary";
        v18 = "";
LABEL_31:
        *(_DWORD *)v16 = &off_233EB4;
        *(_DWORD *)(v16 + 4) = 16843013;
        *(_DWORD *)(v16 + 8) = v15;
        *(_DWORD *)(v16 + 12) = v17;
        *(_DWORD *)(v16 + 16) = v18;
        goto LABEL_83;
      case 'K':
      case 'V':
      case 'r':
        v5 = v4 == 114;
        if ( v3 > v5 )
        {
          v6 = 1;
          if ( v4 == 114 )
            v6 = 2;
          if ( *(_BYTE *)(v2 + HIDWORD(v2)) == 86 )
            v5 = v6;
        }
        if ( v3 > v5 && *(_BYTE *)(v2 + HIDWORD(v2)) == 75 )
          ++v5;
        if ( v3 <= v5 )
          goto LABEL_18;
        v7 = *(unsigned __int8 *)(v2 + HIDWORD(v2));
        if ( v7 != 70 )
        {
          if ( v7 != 68 )
            goto LABEL_18;
          v8 = v5 + 1;
          if ( v3 <= v8 )
            goto LABEL_18;
          v9 = *(unsigned __int8 *)(v2 + HIDWORD(v2));
          if ( ((unsigned int)(v9 - 111) > 9 || ((1 << (v9 - 111)) & 0x301) == 0) && v9 != 79 )
            goto LABEL_18;
        }
LABEL_28:
        v10 = sub_21CD74(a1);
        goto LABEL_56;
      case 'M':
        if ( (_DWORD)v2 == HIDWORD(v2) )
          goto LABEL_146;
        *a1 = (unsigned __int8 *)(v2 + 1);
        v21 = sub_215C48(a1);
        if ( !v21 )
          goto LABEL_146;
        v22 = v21;
        v23 = sub_215C48(a1);
        if ( !v23 )
          goto LABEL_146;
        v24 = v23;
        v25 = sub_216EF0(a1 + 102, 16);
        *(_WORD *)(v25 + 6) = 257;
        *(_BYTE *)(v25 + 4) = 13;
        *(_DWORD *)(v25 + 8) = v22;
        *(_DWORD *)(v25 + 12) = v24;
        *(_DWORD *)v25 = &off_233DD4;
        *(_BYTE *)(v25 + 5) = *(_BYTE *)(v24 + 5);
        goto LABEL_147;
      case 'O':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v64[0] = (unsigned __int8 *)sub_215C48(a1);
        if ( !v64[0] )
          return 0;
        v26 = 1;
        goto LABEL_42;
      case 'P':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v27 = sub_215C48(a1);
        if ( !v27 )
          return 0;
        v28 = v27;
        v16 = sub_216EF0(a1 + 102, 12);
        *(_DWORD *)(v16 + 8) = v28;
        *(_WORD *)(v16 + 6) = 257;
        *(_BYTE *)(v16 + 4) = 11;
        *(_DWORD *)v16 = &off_233E44;
        *(_BYTE *)(v16 + 5) = *(_BYTE *)(v28 + 5);
        goto LABEL_83;
      case 'R':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v64[0] = (unsigned __int8 *)sub_215C48(a1);
        if ( !v64[0] )
          return 0;
        v26 = 0;
LABEL_42:
        v63 = v26;
        v16 = sub_21D204(a1, v64, &v63);
        goto LABEL_83;
      case 'S':
        if ( v3 < 2 || !*(_BYTE *)(v2 + 1) || *(_BYTE *)(v2 + 1) == 116 )
          goto LABEL_55;
        result = sub_21700C(a1);
        v64[0] = (unsigned __int8 *)result;
        if ( !result )
          return result;
        if ( !*((_BYTE *)a1 + 388) )
          return result;
        v29 = *(_QWORD *)a1;
        if ( HIDWORD(v29) == (_DWORD)v29 || *(_BYTE *)v29 != 73 )
          return result;
        v63 = sub_217130(a1, 0);
        if ( !v63 )
          return 0;
        v30 = (int *)v64;
        v31 = &v63;
        goto LABEL_100;
      case 'T':
        if ( v3 >= 2 )
        {
          v32 = *(unsigned __int8 *)(v2 + 1) - 101;
          if ( v32 <= 0x10 && ((1 << v32) & 0x14001) != 0 )
            goto LABEL_55;
        }
        v62 = sub_2174C8(a1);
        if ( !v62 )
          return 0;
        if ( !*((_BYTE *)a1 + 388) )
          goto LABEL_58;
        v45 = *(_QWORD *)a1;
        if ( HIDWORD(v45) == (_DWORD)v45 || *(_BYTE *)v45 != 73 )
          goto LABEL_58;
        v64[0] = (unsigned __int8 *)sub_217130(a1, 0);
        if ( !v64[0] )
          return 0;
        v30 = &v62;
        v31 = (int *)v64;
LABEL_100:
        v16 = sub_2173BC(a1, v30, v31);
LABEL_83:
        v62 = v16;
        goto LABEL_58;
      case 'U':
LABEL_18:
        v10 = sub_21CFAC(a1);
        goto LABEL_56;
      case 'a':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v33 = "signed char";
        return sub_21C0F4(a1, v33);
      case 'b':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v34 = "bool";
        return sub_2179C0(a1, v34);
      case 'c':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v34 = "char";
        return sub_2179C0(a1, v34);
      case 'd':
        *a1 = (unsigned __int8 *)(v2 + 1);
        result = sub_216EF0(a1 + 102, 16);
        v35 = "double";
        v36 = "";
        goto LABEL_91;
      case 'e':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v33 = "long double";
        return sub_21C0F4(a1, v33);
      case 'f':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v37 = "float";
        return sub_219F4C(a1, v37);
      case 'g':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v38 = "__float128";
        return sub_21C020(a1, v38);
      case 'h':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v39 = "unsigned char";
        return sub_21D0DC(a1, v39);
      case 'i':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v40 = "int";
        return sub_217430(a1, v40);
      case 'j':
        *a1 = (unsigned __int8 *)(v2 + 1);
        return sub_21C164(a1, "unsigned int");
      case 'l':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v34 = "long";
        return sub_2179C0(a1, v34);
      case 'm':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v39 = "unsigned long";
        return sub_21D0DC(a1, v39);
      case 'n':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v41 = "__int128";
        return sub_21D114(a1, v41);
      case 'o':
        *a1 = (unsigned __int8 *)(v2 + 1);
        return sub_21C0BC(a1, "unsigned __int128");
      case 's':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v37 = "short";
        return sub_219F4C(a1, v37);
      case 't':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v42 = "unsigned short";
        return sub_21C12C(a1, v42);
      case 'u':
        *a1 = (unsigned __int8 *)(v2 + 1);
        sub_21C7E4(v64, a1);
        if ( v64[0] == v64[1] )
          return 0;
        v16 = sub_21B664(a1, v64);
        goto LABEL_83;
      case 'v':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v34 = "void";
        return sub_2179C0(a1, v34);
      case 'w':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v43 = "wchar_t";
        return sub_21A068(a1, v43);
      case 'x':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v44 = "long long";
        return sub_21C058(a1, v44);
      case 'y':
        *a1 = (unsigned __int8 *)(v2 + 1);
        result = sub_216EF0(a1 + 102, 16);
        v35 = "unsigned long long";
        v36 = "";
LABEL_91:
        *(_DWORD *)result = &off_232EF4;
        *(_DWORD *)(result + 4) = 16843015;
        *(_DWORD *)(result + 8) = v35;
        *(_DWORD *)(result + 12) = v36;
        return result;
      case 'z':
        *a1 = (unsigned __int8 *)(v2 + 1);
        v40 = "...";
        return sub_217430(a1, v40);
      default:
        goto LABEL_55;
    }
    result = 0;
    switch ( *(_BYTE *)(v2 + 1) )
    {
      case 'O':
      case 'o':
      case 'w':
      case 'x':
        goto LABEL_28;
      case 'T':
      case 't':
        v10 = sub_21767C(a1);
        goto LABEL_56;
      case 'a':
        *a1 = (unsigned __int8 *)(v2 + 2);
        v34 = "auto";
        return sub_2179C0(a1, v34);
      case 'c':
        *a1 = (unsigned __int8 *)(v2 + 2);
        v42 = "decltype(auto)";
        return sub_21C12C(a1, v42);
      case 'd':
        *a1 = (unsigned __int8 *)(v2 + 2);
        v44 = "decimal64";
        return sub_21C058(a1, v44);
      case 'e':
        *a1 = (unsigned __int8 *)(v2 + 2);
        v38 = "decimal128";
        return sub_21C020(a1, v38);
      case 'f':
        *a1 = (unsigned __int8 *)(v2 + 2);
        v44 = "decimal32";
        return sub_21C058(a1, v44);
      case 'h':
        *a1 = (unsigned __int8 *)(v2 + 2);
        v44 = "decimal16";
        return sub_21C058(a1, v44);
      case 'i':
        *a1 = (unsigned __int8 *)(v2 + 2);
        v41 = "char32_t";
        return sub_21D114(a1, v41);
      case 'n':
        *a1 = (unsigned __int8 *)(v2 + 2);
        v42 = "std::nullptr_t";
        return sub_21C12C(a1, v42);
      case 'p':
        *a1 = (unsigned __int8 *)(v2 + 2);
        v64[0] = (unsigned __int8 *)sub_215C48(a1);
        if ( !v64[0] )
          return 0;
        v16 = sub_219E84(a1, v64);
        goto LABEL_83;
      case 's':
        *a1 = (unsigned __int8 *)(v2 + 2);
        v41 = "char16_t";
        return sub_21D114(a1, v41);
      case 'u':
        *a1 = (unsigned __int8 *)(v2 + 2);
        v43 = "char8_t";
        return sub_21A068(a1, v43);
      case 'v':
        if ( !sub_2155E4((__int64 *)a1, (int)"Dv", (int)"") )
          goto LABEL_146;
        v52 = *(_QWORD *)a1;
        if ( HIDWORD(v52) == (_DWORD)v52 )
          goto LABEL_137;
        v53 = *(unsigned __int8 *)v52;
        if ( v53 < 0x31 )
          goto LABEL_137;
        if ( v53 > 0x39 )
        {
          if ( v53 == 95 )
          {
            *a1 = (unsigned __int8 *)(v52 + 1);
            v56 = sub_215C48(a1);
            v25 = 0;
            if ( !v56 )
              goto LABEL_147;
            v57 = v56;
            v58 = (_DWORD *)sub_216EF0(a1 + 102, 16);
            v58[2] = v57;
            v58[3] = 0;
            *v58 = &off_233D64;
            v58[1] = 16843033;
            goto LABEL_143;
          }
LABEL_137:
          v64[0] = (unsigned __int8 *)sub_217B38(a1);
          if ( v64[0] )
          {
            v59 = *(_QWORD *)a1;
            if ( (_DWORD)v59 != HIDWORD(v59) && *(_BYTE *)v59 == 95 )
            {
              *a1 = (unsigned __int8 *)(v59 + 1);
              v63 = sub_215C48(a1);
              if ( v63 )
              {
                v60 = &v63;
                v61 = (int *)v64;
LABEL_142:
                v58 = (_DWORD *)sub_21D4D0(a1, v60, v61);
LABEL_143:
                v25 = (int)v58;
                goto LABEL_147;
              }
            }
          }
        }
        else
        {
          v25 = 0;
          sub_215BB4(v64, a1, 0);
          v54 = sub_21D4A0(a1, v64);
          v63 = v54;
          v55 = *(_QWORD *)a1;
          if ( (_DWORD)v55 == HIDWORD(v55) )
            goto LABEL_147;
          if ( *(_BYTE *)v55 == 95 )
          {
            *a1 = (unsigned __int8 *)(v55 + 1);
            if ( (_DWORD)v55 + 1 != HIDWORD(v55) && *(_BYTE *)(v55 + 1) == 112 )
            {
              *a1 = (unsigned __int8 *)(v55 + 2);
              v25 = sub_216EF0(a1 + 102, 12);
              v50 = 16843034;
              v51 = &`vtable for'`anonymous namespace'::itanium_demangle::PixelVectorType;
              *(_DWORD *)(v25 + 8) = v54;
              goto LABEL_109;
            }
            v64[0] = (unsigned __int8 *)sub_215C48(a1);
            if ( v64[0] )
            {
              v60 = (int *)v64;
              v61 = &v63;
              goto LABEL_142;
            }
          }
        }
LABEL_146:
        v25 = 0;
LABEL_147:
        v62 = v25;
        break;
      default:
        return result;
    }
  }
  if ( !v25 )
    return 0;
LABEL_58:
  sub_216CEC(a1 + 37, &v62);
  return v62;
}


// ======================================================================
// ADDR: 0x216ef0
// SYMBOL: sub_216EF0
_DWORD *__fastcall sub_216EF0(int a1, int a2)
{
  _DWORD *v3; // r5
  unsigned int v4; // r6
  int v5; // r2
  _DWORD *v6; // r0
  _DWORD *v7; // r0

  v3 = *(_DWORD **)(a1 + 4096);
  v4 = (a2 + 15) & 0xFFFFFFF0;
  v5 = v3[1];
  if ( v5 + v4 < 0xFF8 )
  {
    v7 = *(_DWORD **)(a1 + 4096);
    goto LABEL_8;
  }
  if ( v4 < 0xFF9 )
  {
    v7 = malloc(0x1000u);
    if ( !v7 )
LABEL_10:
      std::terminate();
    v5 = 0;
    *v7 = v3;
    v7[1] = 0;
    *(_DWORD *)(a1 + 4096) = v7;
LABEL_8:
    v7[1] = v5 + v4;
    v6 = (_DWORD *)((char *)v7 + v5);
    return v6 + 2;
  }
  v6 = malloc(v4 | 8);
  if ( !v6 )
    goto LABEL_10;
  *v6 = *v3;
  v6[1] = 0;
  *v3 = v6;
  return v6 + 2;
}


// ======================================================================
