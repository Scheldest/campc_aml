// ADDR: 0x21db10
// SYMBOL: sub_21DB10
_DWORD *__fastcall sub_21DB10(_DWORD *a1, int a2)
{
  return sub_21DA26(a1, a2, 1126902528, 1129074247);
}


// ======================================================================
// ADDR: 0x21db38
// SYMBOL: sub_21DB38
void __fastcall __noreturn sub_21DB38(int a1)
{
  j___cxa_begin_catch((void *)(a1 + 40));
  sub_21E258(*(_DWORD *)(a1 + 20));
}


// ======================================================================
// ADDR: 0x22273c
// SYMBOL: sub_22273C
int __fastcall sub_22273C(_DWORD *a1)
{
  int (__fastcall *v3)(_DWORD, _DWORD *, _BYTE *); // r3
  int v4; // r1
  int v5; // r2
  int v6; // r0
  _BYTE v7[392]; // [sp+0h] [bp-310h] BYREF
  _BYTE v8[336]; // [sp+188h] [bp-188h] BYREF
  _DWORD v9[3]; // [sp+2D8h] [bp-38h] BYREF
  int (__fastcall *v10)(_DWORD, _DWORD *, _BYTE *); // [sp+2E4h] [bp-2Ch]
  int v11; // [sp+2ECh] [bp-24h]
  int v12; // [sp+2F8h] [bp-18h]

  sub_224220(v8);
  a1[3] = 0;
  sub_222BB0(v7, v8);
  if ( sub_222E9C(v7, v9) )
    return 3;
  while ( 1 )
  {
    v3 = v10;
    if ( v10 )
    {
      v4 = v11;
      v5 = v12;
      a1[18] = v9[0];
      a1[19] = v5;
      a1[20] = v4;
      v6 = v3(0, a1, v7);
      if ( v6 != 8 )
        break;
    }
    if ( sub_222E9C(v7, v9) )
      return 3;
  }
  if ( v6 == 6 )
  {
    sub_222828(v8, v7, a1, 0);
    return 2;
  }
  else
  {
    if ( v6 != 9 )
      return 3;
    return 9;
  }
}


// ======================================================================
