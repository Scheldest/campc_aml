// ADDR: 0x216710
// SYMBOL: sub_216710
int __fastcall sub_216710(_DWORD *a1, int a2)
{
  __int64 v4; // r0
  unsigned int v5; // r2
  int v6; // r3
  int v7; // r0
  __int64 v8; // r0
  int v9; // r1
  char v10; // r0
  __int64 v11; // r0
  int v12; // r2
  int v13; // r0
  int v14; // r6
  int result; // r0
  __int64 v16; // kr00_8
  int v17; // r1
  __int64 v18; // r0
  __int64 v19; // r0
  int v20; // r2
  unsigned int v21; // r2
  int v22; // r3
  int v23; // r0
  int v24; // r2
  bool v25; // zf
  _BYTE *v26; // r10
  int v27; // r5
  _DWORD *v28; // r0
  _BYTE *v29; // r2
  int v30; // r2
  int v31; // r1
  unsigned int v32; // r2
  char v33; // r0
  int v34; // r1
  int v35; // r0
  int v36; // r5
  int v37; // r1
  __int64 v38; // kr08_8
  __int64 v39; // r0
  unsigned __int8 *v40[3]; // [sp+4h] [bp-3Ch] BYREF
  int v41; // [sp+10h] [bp-30h] BYREF
  _BYTE *v42; // [sp+14h] [bp-2Ch] BYREF
  char v43; // [sp+1Bh] [bp-25h] BYREF
  int v44; // [sp+1Ch] [bp-24h] BYREF

  v4 = *(_QWORD *)a1;
  if ( (_DWORD)v4 != HIDWORD(v4) && *(_BYTE *)v4 == 76 )
  {
    LODWORD(v4) = v4 + 1;
    *a1 = v4;
  }
  v5 = HIDWORD(v4) - v4;
  if ( HIDWORD(v4) == (_DWORD)v4 )
    goto LABEL_27;
  v6 = *(unsigned __int8 *)v4;
  if ( v6 == 90 )
  {
    if ( (_DWORD)v4 == HIDWORD(v4) )
      return 0;
    *a1 = v4 + 1;
    v44 = sub_215654((int)a1);
    if ( !v44 )
      return 0;
    v11 = *(_QWORD *)a1;
    if ( (_DWORD)v11 == HIDWORD(v11) || *(_BYTE *)v11 != 69 )
      return 0;
    *a1 = v11 + 1;
    if ( (_DWORD)v11 + 1 != HIDWORD(v11) )
    {
      v12 = *(unsigned __int8 *)(v11 + 1);
      if ( v12 == 100 )
      {
        *a1 = v11 + 2;
        sub_215BB4(v40, (unsigned __int8 **)a1, 1);
        v39 = *(_QWORD *)a1;
        if ( (_DWORD)v39 == HIDWORD(v39) )
          return 0;
        if ( *(_BYTE *)v39 != 95 )
          return 0;
        *a1 = v39 + 1;
        v40[0] = (unsigned __int8 *)sub_216710(a1, a2);
        if ( !v40[0] )
          return 0;
        return sub_21C928(a1, &v44, v40);
      }
      if ( v12 == 115 )
      {
        LODWORD(v11) = v11 + 2;
        *a1 = v11;
        *a1 = sub_21C8C2(v11, HIDWORD(v11));
        v40[0] = (unsigned __int8 *)sub_21C12C(a1, "string literal");
        return sub_21C928(a1, &v44, v40);
      }
    }
    v40[0] = (unsigned __int8 *)sub_216710(a1, a2);
    if ( !v40[0] )
      return 0;
    *a1 = sub_21C8C2(*a1, a1[1]);
    return sub_21C928(a1, &v44, v40);
  }
  if ( v6 != 83 )
  {
    if ( v6 == 78 )
    {
      v42 = (_BYTE *)a2;
      if ( (_DWORD)v4 == HIDWORD(v4) || *(_BYTE *)v4 != 78 )
        return 0;
      *a1 = v4 + 1;
      v7 = sub_2173EC(a1, 78, v5);
      if ( a2 )
        *(_DWORD *)(a2 + 4) = v7;
      v8 = *(_QWORD *)a1;
      if ( (_DWORD)v8 != HIDWORD(v8) )
      {
        v9 = *(unsigned __int8 *)v8;
        if ( v9 == 82 )
        {
          *a1 = v8 + 1;
          if ( !a2 )
            goto LABEL_54;
          v10 = 1;
LABEL_53:
          *(_BYTE *)(a2 + 8) = v10;
LABEL_54:
          v41 = 0;
          v40[2] = (unsigned __int8 *)&v42;
          v40[0] = (unsigned __int8 *)&v41;
          v40[1] = (unsigned __int8 *)a1;
          if ( sub_2155E4((__int64 *)a1, (int)"St", (int)"") )
            v41 = sub_217430(a1, "std");
          while ( 1 )
          {
            while ( 1 )
            {
              v19 = *(_QWORD *)a1;
              if ( (_DWORD)v19 != HIDWORD(v19) )
              {
                v20 = *(unsigned __int8 *)v19;
                if ( v20 == 76 )
                {
                  LODWORD(v19) = v19 + 1;
                  *a1 = v19;
                }
                else if ( v20 == 69 )
                {
                  *a1 = v19 + 1;
                  result = v41;
                  if ( v41 )
                  {
                    v38 = *(_QWORD *)(a1 + 37);
                    if ( (_DWORD)v38 != HIDWORD(v38) )
                    {
                      a1[38] = HIDWORD(v38) - 4;
                      return result;
                    }
                  }
                  return 0;
                }
              }
              if ( (_DWORD)v19 == HIDWORD(v19) || *(_BYTE *)v19 != 77 )
                break;
              *a1 = v19 + 1;
              if ( !v41 )
                return 0;
            }
            v21 = HIDWORD(v19) - v19;
            if ( HIDWORD(v19) == (_DWORD)v19 )
              goto LABEL_105;
            v22 = *(unsigned __int8 *)v19;
            if ( v22 == 67 )
              goto LABEL_79;
            if ( v22 == 68 )
              break;
            switch ( v22 )
            {
              case 'I':
                v34 = (int)v42;
                if ( v42 )
                  v34 = 1;
                v44 = sub_217130(a1, v34);
                if ( !v44 || !v41 )
                  return 0;
                v41 = sub_2173BC(a1, &v41, &v44);
                if ( v42 )
                  v42[1] = 1;
LABEL_108:
                sub_216CEC(a1 + 37, &v41);
                break;
              case 'S':
                if ( v21 >= 2 && *(_BYTE *)(v19 + 1) == 116 )
                  goto LABEL_105;
                v36 = sub_21700C(a1);
                v44 = v36;
                if ( !sub_217468(v40, v36) )
                  return 0;
                if ( v41 != v36 )
                  sub_216CEC(a1 + 37, &v44);
                break;
              case 'T':
                v23 = sub_2174C8(a1);
                goto LABEL_106;
              default:
LABEL_105:
                v23 = sub_21778C(a1, v42);
LABEL_106:
                v35 = sub_217468(v40, v23);
LABEL_107:
                if ( !v35 )
                  return 0;
                goto LABEL_108;
            }
          }
          if ( v21 >= 2 )
          {
            v24 = *(unsigned __int8 *)(v19 + 1);
            if ( v24 == 67 )
              goto LABEL_105;
            v25 = v24 == 116;
            if ( v24 != 116 )
              v25 = v24 == 84;
            if ( v25 )
            {
              v23 = sub_21767C(a1);
              goto LABEL_106;
            }
          }
LABEL_79:
          if ( !v41 )
            return 0;
          v26 = v42;
          if ( *(_BYTE *)(v41 + 4) == 41 )
          {
            v27 = *(_DWORD *)(v41 + 8);
            if ( (unsigned int)(v27 - 2) <= 3 )
            {
              v28 = (_DWORD *)sub_216EF0(a1 + 102, 12);
              *v28 = &off_2338CC;
              v28[1] = 16843048;
              v28[2] = v27;
              v41 = (int)v28;
              v19 = *(_QWORD *)a1;
            }
          }
          if ( (_DWORD)v19 == HIDWORD(v19) || *(_BYTE *)v19 != 67 )
          {
            v30 = HIDWORD(v19) - v19;
            if ( HIDWORD(v19) != (_DWORD)v19 )
            {
              v31 = 0;
              if ( *(_BYTE *)v19 != 68 )
                goto LABEL_122;
              if ( v30 == 1 )
                goto LABEL_122;
              v32 = *(unsigned __int8 *)(v19 + 1) - 48;
              v31 = 0;
              if ( v32 > 5 || *(_BYTE *)(v19 + 1) == 51 )
                goto LABEL_122;
              *a1 = v19 + 2;
              v33 = 1;
              v44 = v32;
              if ( v26 )
                *v26 = 1;
              goto LABEL_120;
            }
          }
          else
          {
            v29 = (_BYTE *)(v19 + 1);
            *a1 = v19 + 1;
            if ( (_DWORD)v19 + 1 == HIDWORD(v19) )
            {
              LODWORD(v19) = 0;
              v29 = (_BYTE *)HIDWORD(v19);
            }
            else if ( *v29 == 73 )
            {
              v29 = (_BYTE *)(v19 + 2);
              *a1 = v19 + 2;
              LODWORD(v19) = 1;
            }
            else
            {
              LODWORD(v19) = 0;
            }
            if ( (_BYTE *)HIDWORD(v19) != v29 )
            {
              v37 = (unsigned __int8)*v29;
              if ( (unsigned int)(v37 - 49) <= 4 )
              {
                *a1 = v29 + 1;
                v44 = v37 - 48;
                if ( v26 )
                  *v26 = 1;
                if ( !(_DWORD)v19 || sub_216710(a1, v26) )
                {
                  v33 = 0;
LABEL_120:
                  v43 = v33;
                  v31 = sub_21C6BC(a1, &v41, &v43, &v44);
LABEL_122:
                  if ( !sub_217468(v40, v31) )
                    return 0;
                  v35 = sub_2176FC(a1, v41);
                  v41 = v35;
                  goto LABEL_107;
                }
              }
            }
          }
          v31 = 0;
          goto LABEL_122;
        }
        if ( v9 == 79 )
        {
          *a1 = v8 + 1;
          if ( !a2 )
            goto LABEL_54;
          v10 = 2;
          goto LABEL_53;
        }
      }
      if ( !a2 )
        goto LABEL_54;
      v10 = 0;
      goto LABEL_53;
    }
    goto LABEL_27;
  }
  if ( v5 >= 2 && *(_BYTE *)(v4 + 1) == 116 )
  {
LABEL_27:
    if ( sub_2155E4((__int64 *)a1, (int)"StL", (int)"") || sub_2155E4((__int64 *)a1, (int)"St", (int)"") )
    {
      v13 = sub_21778C(a1, a2);
      if ( !v13 )
        return 0;
      v14 = v13;
      result = sub_216EF0(a1 + 102, 12);
      *(_DWORD *)(result + 8) = v14;
      v40[0] = (unsigned __int8 *)result;
      *(_DWORD *)result = &off_233AC4;
      *(_DWORD *)(result + 4) = 16843047;
    }
    else
    {
      result = sub_21778C(a1, a2);
      v40[0] = (unsigned __int8 *)result;
      if ( !result )
        return 0;
    }
    v16 = *(_QWORD *)a1;
    if ( HIDWORD(v16) == (_DWORD)v16 || *(_BYTE *)v16 != 73 )
      return result;
    sub_216CEC(a1 + 37, v40);
    goto LABEL_35;
  }
  v40[0] = (unsigned __int8 *)sub_21700C(a1);
  if ( !v40[0] )
    return 0;
  v18 = *(_QWORD *)a1;
  if ( HIDWORD(v18) == (_DWORD)v18 || *(_BYTE *)v18 != 73 )
    return 0;
LABEL_35:
  v17 = a2;
  if ( a2 )
    v17 = 1;
  v44 = sub_217130(a1, v17);
  if ( !v44 )
    return 0;
  if ( a2 )
    *(_BYTE *)(a2 + 1) = 1;
  return sub_2173BC(a1, v40, &v44);
}


// ======================================================================
// ADDR: 0x216b88
// SYMBOL: sub_216B88
int __fastcall sub_216B88(__int64 **a1)
{
  __int64 v1; // r0
  int result; // r0
  int v3; // r1
  bool v4; // zf

  v1 = **a1;
  if ( HIDWORD(v1) == (_DWORD)v1 )
    return 1;
  v3 = *(unsigned __int8 *)v1;
  result = 1;
  v4 = v3 == 46;
  if ( v3 != 46 )
    v4 = v3 == 69;
  if ( !v4 && v3 != 95 )
    return 0;
  return result;
}


// ======================================================================
// ADDR: 0x216bac
// SYMBOL: sub_216BAC
_DWORD *__fastcall sub_216BAC(int a1)
{
  __int64 v2; // r0
  int v3; // r3
  _DWORD *result; // r0
  int v5; // r3
  int v6; // r2
  int v7; // r8
  __int64 v8; // kr00_8
  int v9; // r4
  _DWORD v10[2]; // [sp+4h] [bp-1Ch] BYREF

  v2 = *(_QWORD *)a1;
  if ( HIDWORD(v2) == (_DWORD)v2 )
    return (_DWORD *)sub_215C48((unsigned __int8 **)a1);
  v3 = *(unsigned __int8 *)v2;
  if ( v3 != 74 )
  {
    if ( v3 == 76 )
    {
      if ( (unsigned int)(HIDWORD(v2) - v2) < 2 || *(_BYTE *)(v2 + 1) != 90 )
        return (_DWORD *)sub_2193A0(a1, _stack_chk_guard);
      *(_DWORD *)a1 = v2 + 2;
      result = (_DWORD *)sub_215654(a1);
      goto LABEL_15;
    }
    if ( v3 == 88 )
    {
      *(_DWORD *)a1 = v2 + 1;
      result = (_DWORD *)sub_217B38(a1);
LABEL_15:
      if ( !result )
        return 0;
      v8 = *(_QWORD *)a1;
      if ( (_DWORD)v8 == HIDWORD(v8) || *(_BYTE *)v8 != 69 )
        return 0;
      *(_DWORD *)a1 = v8 + 1;
      return result;
    }
    return (_DWORD *)sub_215C48((unsigned __int8 **)a1);
  }
  v5 = *(_DWORD *)(a1 + 12);
  v6 = *(_DWORD *)(a1 + 8);
  LODWORD(v2) = v2 + 1;
  *(_DWORD *)a1 = v2;
  v7 = (v5 - v6) >> 2;
  while ( (_DWORD)v2 == HIDWORD(v2) || *(_BYTE *)v2 != 69 )
  {
    v10[0] = sub_216BAC(a1);
    if ( !v10[0] )
      return 0;
    sub_216CEC(a1 + 8, v10);
    v2 = *(_QWORD *)a1;
  }
  *(_DWORD *)a1 = v2 + 1;
  sub_216D60(v10, a1, v7);
  result = (_DWORD *)sub_216EF0(a1 + 408, 16);
  v9 = v10[1];
  result[2] = v10[0];
  result[3] = v9;
  *result = &off_233AFC;
  result[1] = 16843041;
  return result;
}


// ======================================================================
// ADDR: 0x216cec
// SYMBOL: sub_216CEC
int __fastcall sub_216CEC(int a1, int *a2)
{
  char *v3; // r6
  void *v5; // r9
  int v6; // r10
  char *v7; // r5
  char *v8; // r0
  int result; // r0

  v3 = *(char **)(a1 + 4);
  if ( v3 == *(char **)(a1 + 8) )
  {
    v5 = *(void **)a1;
    v6 = (int)&v3[-*(_DWORD *)a1];
    if ( *(_DWORD *)a1 == a1 + 12 )
    {
      v8 = (char *)malloc(2 * v6);
      if ( !v8 )
        goto LABEL_9;
      v7 = v8;
      sub_21AB64(v5, (int)v3, v8);
      *(_DWORD *)a1 = v7;
    }
    else
    {
      v7 = (char *)realloc(*(void **)a1, 2 * v6);
      *(_DWORD *)a1 = v7;
      if ( !v7 )
LABEL_9:
        std::terminate();
    }
    v3 = &v7[4 * (v6 >> 2)];
    *(_DWORD *)(a1 + 4) = v3;
    *(_DWORD *)(a1 + 8) = &v7[4 * (v6 >> 1)];
  }
  result = *a2;
  *(_DWORD *)(a1 + 4) = v3 + 4;
  *(_DWORD *)v3 = result;
  return result;
}


// ======================================================================
// ADDR: 0x216d60
// SYMBOL: sub_216D60
int __fastcall sub_216D60(int a1, int a2, int a3)
{
  int result; // r0

  sub_21B270(a1, a2, *(_DWORD *)(a2 + 8) + 4 * a3, *(_DWORD *)(a2 + 12));
  result = *(_DWORD *)(a2 + 8) + 4 * a3;
  *(_DWORD *)(a2 + 12) = result;
  return result;
}


// ======================================================================
// ADDR: 0x216d80
// SYMBOL: sub_216D80
int __fastcall sub_216D80(int a1, int *a2, _DWORD *a3, __int64 *a4, int *a5, int *a6, _BYTE *a7)
{
  int result; // r0
  int v11; // r8
  int v12; // r12
  __int64 v13; // kr00_8
  int v14; // r1

  result = sub_216EF0(a1 + 408, 36);
  v11 = *a2;
  v12 = *a6;
  v13 = *a4;
  *(_BYTE *)(result + 32) = *a7;
  v14 = *a5;
  *(_DWORD *)(result + 12) = *a3;
  *(_QWORD *)(result + 16) = v13;
  *(_DWORD *)(result + 24) = v14;
  *(_DWORD *)result = &off_233B6C;
  *(_DWORD *)(result + 4) = 65554;
  *(_DWORD *)(result + 8) = v11;
  *(_DWORD *)(result + 28) = v12;
  return result;
}


// ======================================================================
// ADDR: 0x216ddc
// SYMBOL: sub_216DDC
int __fastcall sub_216DDC(unsigned __int8 **a1)
{
  __int64 v2; // r0
  int v3; // r4
  unsigned __int8 *v4; // r0
  unsigned __int8 *v5; // r1
  __int64 v6; // r0
  __int64 v7; // r0
  unsigned __int8 *v9[2]; // [sp+4h] [bp-1Ch] BYREF
  unsigned __int8 *v10; // [sp+Ch] [bp-14h] BYREF
  unsigned __int8 *v11; // [sp+10h] [bp-10h]

  v2 = *(_QWORD *)a1;
  if ( (_DWORD)v2 == HIDWORD(v2) )
    return 1;
  if ( *(_BYTE *)v2 == 104 )
  {
    *a1 = (unsigned __int8 *)(v2 + 1);
    v3 = 1;
    sub_215BB4(&v10, a1, 1);
    v4 = v10;
    v5 = v11;
  }
  else
  {
    if ( *(_BYTE *)v2 != 118 )
      return 1;
    *a1 = (unsigned __int8 *)(v2 + 1);
    v3 = 1;
    sub_215BB4(&v10, a1, 1);
    if ( v10 == v11 )
      return v3;
    v7 = *(_QWORD *)a1;
    if ( (_DWORD)v7 == HIDWORD(v7) || *(_BYTE *)v7 != 95 )
      return 1;
    *a1 = (unsigned __int8 *)(v7 + 1);
    v3 = 1;
    sub_215BB4(v9, a1, 1);
    v4 = v9[0];
    v5 = v9[1];
  }
  if ( v4 != v5 )
  {
    v6 = *(_QWORD *)a1;
    if ( (_DWORD)v6 != HIDWORD(v6) && *(_BYTE *)v6 == 95 )
    {
      *a1 = (unsigned __int8 *)(v6 + 1);
      return 0;
    }
    return 1;
  }
  return v3;
}


// ======================================================================
// ADDR: 0x216e90
// SYMBOL: sub_216E90
int __fastcall sub_216E90(unsigned __int8 **a1, unsigned int *a2)
{
  unsigned __int8 *v2; // r2
  unsigned __int8 *v3; // r3
  unsigned int v4; // r4
  bool v5; // cc
  unsigned int i; // r4
  unsigned int v7; // r5
  int v8; // r6
  int result; // r0

  v2 = a1[1];
  v3 = *a1;
  if ( v2 == *a1 )
    return 1;
  v4 = *v3;
  if ( v4 < 0x30 )
    return 1;
  v5 = v4 > 0x3A;
  if ( v4 >= 0x3A )
    v5 = v4 - 65 > 0x19;
  if ( v5 )
    return 1;
  for ( i = 0; v3 != v2; i = v8 + 36 * i + v7 )
  {
    v7 = *v3;
    if ( v7 < 0x30 )
      break;
    if ( v7 >= 0x3A )
    {
      if ( v7 - 65 >= 0x1A )
        break;
      v8 = -55;
    }
    else
    {
      v8 = -48;
    }
    *a1 = ++v3;
  }
  result = 0;
  *a2 = i;
  return result;
}


// ======================================================================
