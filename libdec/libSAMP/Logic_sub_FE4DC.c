// ADDR: 0xfe5fc
// SYMBOL: sub_FE5FC
int __fastcall sub_FE5FC(int a1, int a2)
{
  unsigned int v2; // r8
  int v5; // r6
  __int64 v6; // r0
  bool v7; // zf
  int v9; // r0
  int v10; // r1
  const char *v11; // r8
  int v12; // r0
  int v13; // r0
  signed int v14; // r0
  int v15; // r6
  bool v16; // cf
  int v17; // r4
  int v18; // r0
  int v19; // r0
  int v20; // r4
  int v21; // r3
  int v22; // r5
  int (__fastcall *v23)(const char *, int); // r4
  int v24; // r0
  int v25; // r0
  int v26; // r2
  _DWORD v27[2]; // [sp+8h] [bp-30h] BYREF
  int v28; // [sp+10h] [bp-28h] BYREF
  int v29; // [sp+14h] [bp-24h] BYREF
  _DWORD v30[2]; // [sp+18h] [bp-20h] BYREF
  char v31; // [sp+20h] [bp-18h]

  v28 = a2;
  v29 = a1;
  if ( !sub_163810(a2) || !a1 )
    return off_25AE94(a1, a2);
  v5 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
  v6 = *(_QWORD *)(v5 + 60000);
  if ( (_DWORD)v6 != HIDWORD(v6) )
  {
    while ( *(_DWORD *)(v5 + 4 * *(_DWORD *)v6 + 8000) != a1 )
    {
      LODWORD(v6) = v6 + 4;
      if ( (_DWORD)v6 == HIDWORD(v6) )
        return off_25AE94(a1, a2);
    }
  }
  v7 = (_DWORD)v6 == HIDWORD(v6);
  if ( (_DWORD)v6 != HIDWORD(v6) )
  {
    v2 = *(unsigned __int16 *)v6;
    v7 = v2 == 0xFFFF;
  }
  if ( v7 )
    return off_25AE94(a1, a2);
  if ( v2 >> 4 <= 0x7C && sub_F2396(*(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4), v2) )
    v9 = *(_DWORD *)(v5 + 4 * v2);
  else
    v9 = 0;
  v10 = *(_DWORD *)(a1 + 1432);
  v11 = (const char *)(v9 + 41);
  if ( !v10 )
    goto LABEL_19;
  if ( strcmp((const char *)(v10 + 16), v11) )
  {
    ((void (__fastcall *)(int))(dword_23DF24 + 5774381))(a1);
LABEL_19:
    v12 = (unsigned __int8)byte_25AE9C;
    __dmb(0xBu);
    if ( !(v12 << 31) && j___cxa_guard_acquire((__guard *)&byte_25AE9C) )
    {
      off_25AE98 = (_UNKNOWN *)(dword_23DF24 + 5919445);
      j___cxa_guard_release((__guard *)&byte_25AE9C);
    }
    v27[1] = &v28;
    v13 = *(unsigned __int8 *)v11;
    v27[0] = &v29;
    if ( v13 )
    {
      v14 = strlen(v11);
      dword_25AE90 = v14;
      if ( v14 << 29 )
      {
        v15 = 8;
        while ( v14 >= v15 )
        {
          v16 = (unsigned int)v15 >= 0x19;
          v15 += 8;
          if ( v16 )
            goto LABEL_26;
        }
        dword_25AE90 = v15;
      }
      else
      {
LABEL_26:
        v15 = v14;
      }
      v20 = *((_DWORD *)v11 + 1);
      v21 = *(unsigned __int16 *)(v29 + 38);
      v22 = *(_DWORD *)v11;
      v31 = 0;
      v30[0] = v22;
      v30[1] = v20;
      _android_log_print(4, "AXL", "Create numberplate for model %d: %s[%d]", v21, (const char *)v30, v15);
      v23 = (int (__fastcall *)(const char *, int))off_25AE98;
      v24 = sub_16381E(v28);
      v25 = v23(v11, v24);
      v26 = v28;
      *(_DWORD *)(v29 + 1432) = v25;
      sub_1637F8(v26, &byte_8F794);
      sub_163824(v28, 255);
    }
    else
    {
      v17 = *(_DWORD *)sub_16381A(v28);
      if ( strcmp((const char *)(v17 + 16), "XYZSR998") )
      {
        v18 = (unsigned __int8)byte_25AEA4;
        __dmb(0xBu);
        if ( !(v18 << 31) )
        {
          if ( j___cxa_guard_acquire((__guard *)&byte_25AEA4) )
          {
            dword_25AEA0 = sub_FE8E8((int)v27, "XYZSR998");
            j___cxa_guard_release((__guard *)&byte_25AEA4);
          }
        }
        v17 = dword_25AEA0;
      }
      v19 = v29;
      ++*(_DWORD *)(v17 + 84);
      *(_DWORD *)(v19 + 1432) = v17;
    }
  }
  return 1;
}


// ======================================================================
// ADDR: 0x15eb0c
// SYMBOL: sub_15EB0C
int __fastcall sub_15EB0C(int *a1, int a2)
{
  int result; // r0
  int *i; // r0
  __int64 v6; // r2
  int v7; // r2
  int *v8; // r3
  int *j; // r4
  _DWORD *v10; // r0
  int v11; // r2
  int v12[5]; // [sp+4h] [bp-14h] BYREF

  result = *a1;
  if ( result )
  {
    v12[0] = a2;
    result = sub_15FAE4(result, v12);
    if ( result )
    {
      for ( i = *(int **)(sub_15E7CC(*a1, a2) + 8); i; i = (int *)*i )
      {
        if ( *((_BYTE *)i + 20) )
        {
          v6 = *((_QWORD *)i + 1);
          i[7] = *(_DWORD *)(v6 + 4);
          *(_DWORD *)(v6 + 4) = HIDWORD(v6);
          LODWORD(v6) = i[6];
          i[9] = *(_DWORD *)(v6 + 8);
          *(_DWORD *)(v6 + 8) |= 0x40u;
        }
        if ( *((_BYTE *)i + 21) )
        {
          v7 = i[4];
          if ( v7 )
          {
            v8 = (int *)i[2];
            i[8] = *v8;
            *v8 = v7;
          }
          else
          {
            *((_BYTE *)i + 21) = 0;
          }
        }
      }
      result = sub_15E7CC(*a1, a2);
      for ( j = *(int **)(result + 28); j; j = (int *)*j )
      {
        if ( *((_BYTE *)j + 80) )
        {
          v10 = (_DWORD *)j[2];
          v11 = dword_23DF24;
          v10[16] = j[21];
          v10[17] = j[22];
          v10[18] = j[23];
          ((void (__fastcall *)(_DWORD *, _DWORD *, _DWORD))(v11 + 1935181))(v10, v10 + 4, 0);
        }
        result = *((unsigned __int8 *)j + 96);
        if ( *((_BYTE *)j + 96) )
          result = ((int (__fastcall *)(int, int, int, int))(dword_23DF24 + 1935273))(j[2], j[2] + 64, j[25], 2);
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x163810
// SYMBOL: sub_163810
bool __fastcall sub_163810(int a1)
{
  return *(_DWORD *)(a1 + 60) != 0;
}


// ======================================================================
// ADDR: 0x16381a
// SYMBOL: sub_16381A
int __fastcall sub_16381A(int a1)
{
  return *(_DWORD *)(a1 + 60);
}


// ======================================================================
