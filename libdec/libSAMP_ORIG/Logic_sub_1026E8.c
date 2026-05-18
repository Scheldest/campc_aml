// ADDR: 0x103efc
// SYMBOL: sub_103EFC
int __fastcall sub_103EFC(__int64 *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  int v6; // r0
  int v7; // r5
  int v8; // r0
  int *v9; // r1
  int v11; // [sp+4h] [bp-14h] BYREF
  _DWORD v12[4]; // [sp+8h] [bp-10h] BYREF

  v11 = a2;
  v12[0] = a3;
  v12[1] = a4;
  v5 = *a1;
  if ( HIDWORD(v5) == (_DWORD)v5 )
    return sub_FFBB4(a1);
  v6 = *(unsigned __int8 *)v5;
  if ( v6 != 68 )
  {
    if ( v6 == 84 )
    {
      v7 = sub_100070(a1);
      v12[0] = v7;
      if ( v7 )
      {
        v8 = (int)a1 + 148;
        v9 = v12;
LABEL_9:
        sub_FF894(v8, v9);
        return v7;
      }
      return v7;
    }
    return sub_FFBB4(a1);
  }
  v7 = sub_100224(a1, SHIDWORD(v5), a3, a4);
  v11 = v7;
  if ( v7 )
  {
    v8 = (int)a1 + 148;
    v9 = &v11;
    goto LABEL_9;
  }
  return v7;
}


// ======================================================================
// ADDR: 0x103f88
// SYMBOL: sub_103F88
_DWORD *__fastcall sub_103F88(__int64 *a1, _DWORD *a2, int a3, int a4)
{
  int v5; // r0
  int v6; // r4
  __int64 v7; // r0
  _DWORD *v9; // [sp+4h] [bp-14h] BYREF
  int v10[4]; // [sp+8h] [bp-10h] BYREF

  v9 = a2;
  v10[1] = a4;
  v5 = sub_104164(a1);
  v10[0] = v5;
  if ( !v5 )
    return 0;
  v6 = v5;
  v7 = *a1;
  if ( HIDWORD(v7) != (_DWORD)v7 && *(_BYTE *)v7 == 73 )
  {
    v6 = 0;
    v9 = sub_FFCD8((int)a1, 0);
    if ( v9 )
      return sub_FFF64((int)a1, v10, (int *)&v9);
  }
  return (_DWORD *)v6;
}


// ======================================================================
// ADDR: 0x103ff0
// SYMBOL: sub_103FF0
_DWORD *__fastcall sub_103FF0(int a1, int *a2, int *a3)
{
  _DWORD *result; // r0
  int v6; // r2
  int v7; // r1

  result = sub_FFA98(a1 + 408, 16);
  result[1] = 16843030;
  v6 = *a2;
  *result = &off_113700;
  v7 = *a3;
  result[2] = v6;
  result[3] = v7;
  return result;
}


// ======================================================================
// ADDR: 0x104020
// SYMBOL: sub_104020
_DWORD *__fastcall sub_104020(__int64 *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  int v6; // r2
  int v7; // r3
  __int64 v8; // r0
  _DWORD *v9; // r0
  int v10; // r0
  _DWORD *v11; // r5
  __int64 v12; // r0
  _DWORD *v14; // r6
  _DWORD *v15; // [sp+4h] [bp-1Ch] BYREF
  int v16; // [sp+8h] [bp-18h] BYREF

  v5 = *a1;
  if ( HIDWORD(v5) != (_DWORD)v5 && (unsigned int)*(unsigned __int8 *)v5 - 58 >= 0xFFFFFFF6 )
    return sub_103F88(a1, _stack_chk_guard, a3, a4);
  if ( !sub_FE18C(a1, (int)"dn", (int)"") )
  {
    sub_FE18C(a1, (int)"on", (int)"");
    v10 = sub_10427C(a1, 0);
    v16 = v10;
    if ( v10 )
    {
      v11 = (_DWORD *)v10;
      v12 = *a1;
      if ( HIDWORD(v12) != (_DWORD)v12 && *(_BYTE *)v12 == 73 )
      {
        v11 = 0;
        v15 = sub_FFCD8((int)a1, 0);
        if ( v15 )
          return sub_FFF64((int)a1, &v16, (int *)&v15);
      }
      return v11;
    }
    return 0;
  }
  v8 = *a1;
  if ( HIDWORD(v8) == (_DWORD)v8 || (unsigned int)*(unsigned __int8 *)v8 - 58 < 0xFFFFFFF6 )
    v9 = (_DWORD *)sub_103EFC(a1, SHIDWORD(v8), v6, v7);
  else
    v9 = sub_103F88(a1, (_DWORD *)HIDWORD(v8), v6, v7);
  v14 = v9;
  if ( !v9 )
    return 0;
  v11 = sub_FFA98((int)(a1 + 51), 12);
  v11[2] = v14;
  *v11 = &off_113738;
  v11[1] = 16843051;
  return v11;
}


// ======================================================================
// ADDR: 0x104138
// SYMBOL: sub_104138
_DWORD *__fastcall sub_104138(int a1, _DWORD *a2)
{
  _DWORD *result; // r0

  result = sub_FFA98(a1 + 408, 12);
  result[1] = 16843046;
  *result = &off_1137E0;
  result[2] = *a2;
  return result;
}


// ======================================================================
