// ADDR: 0x10bfe8
// SYMBOL: sub_10BFE8
int __fastcall sub_10BFE8(int (__fastcall *a1)(_BYTE *, int), int a2)
{
  int result; // r0
  _DWORD v5[3]; // [sp+0h] [bp-370h] BYREF
  int (__fastcall *v6)(int, char *, _BYTE *); // [sp+Ch] [bp-364h]
  int v7; // [sp+14h] [bp-35Ch]
  unsigned int v8; // [sp+20h] [bp-350h]
  char v9[8]; // [sp+28h] [bp-348h] BYREF
  __int64 v10; // [sp+30h] [bp-340h]
  __int64 v11; // [sp+38h] [bp-338h]
  __int64 v12; // [sp+40h] [bp-330h]
  __int64 v13; // [sp+48h] [bp-328h]
  __int64 v14; // [sp+50h] [bp-320h]
  __int64 v15; // [sp+58h] [bp-318h]
  __int64 v16; // [sp+60h] [bp-310h]
  __int64 v17; // [sp+68h] [bp-308h]
  unsigned __int64 v18; // [sp+70h] [bp-300h]
  __int64 v19; // [sp+78h] [bp-2F8h]
  __int64 v20[42]; // [sp+80h] [bp-2F0h] BYREF
  _BYTE v21[416]; // [sp+1D0h] [bp-1A0h] BYREF

  sub_10C110(v20);
  sub_10AAA0((int)v21, v20);
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  strcpy(v9, "CLNGUNW");
  while ( !sub_10AD8C((int)v21, (int)v5) )
  {
    v18 = __PAIR64__(v8, v5[0]);
    LODWORD(v19) = v7;
    if ( !v6 || v6(8, v9, v21) != 8 )
      break;
    result = a1(v21, a2);
    if ( result )
      return result;
  }
  return 5;
}


// ======================================================================
