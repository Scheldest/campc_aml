// ADDR: 0x12f588
// SYMBOL: sub_12F588
int __fastcall sub_12F588(int a1)
{
  unsigned int v1; // lr
  bool v2; // r12
  int v3; // r3
  int v4; // r2
  int v5; // r1
  bool v6; // cf

  v1 = 0;
  v2 = 1;
  while ( 1 )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 4 * v1 + 108) + 68);
    v4 = *(_DWORD *)(*(_DWORD *)(a1 + 4 * v1 + 108) + 72) - v3;
    if ( v4 >= 1 )
      break;
LABEL_8:
    v6 = v1++ >= 2;
    v2 = !v6;
    if ( v1 == 3 )
      return v2;
  }
  v5 = 1;
  if ( (unsigned int)v4 >> 2 > 1 )
    v5 = (unsigned int)v4 >> 2;
  while ( !*(_DWORD *)v3 || !*(_BYTE *)(*(_DWORD *)v3 + 80) )
  {
    v3 += 4;
    if ( !--v5 )
      goto LABEL_8;
  }
  return v2;
}


// ======================================================================
// ADDR: 0x144712
// SYMBOL: sub_144712
int __fastcall sub_144712(int a1, char a2, int a3, int a4, unsigned __int8 *a5)
{
  int result; // r0
  int v10; // r0
  unsigned int v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // r1
  unsigned int v14; // r2
  int v15; // r0
  unsigned __int8 *v16; // r1
  _BYTE v17[276]; // [sp+8h] [bp-128h] BYREF
  _DWORD v18[5]; // [sp+11Ch] [bp-14h] BYREF

  result = *(_DWORD *)(a1 + 536);
  if ( result == 5 )
  {
    v10 = sub_17D4A8(v17);
    LOBYTE(v18[0]) = -36;
    sub_17D628(v10, v18, 8, 1);
    LOBYTE(v18[0]) = 63;
    sub_17D628(v17, v18, 8, 1);
    LOBYTE(v18[0]) = a2;
    sub_17D628(v17, v18, 8, 1);
    v18[0] = a3;
    sub_17D628(v17, v18, 32, 1);
    v18[0] = a4;
    sub_17D628(v17, v18, 32, 1);
    v11 = *a5;
    v12 = *((_DWORD *)a5 + 1);
    if ( !(v11 << 31) )
      v12 = v11 >> 1;
    v18[0] = v12;
    sub_17D628(v17, v18, 32, 1);
    v13 = *a5;
    v14 = *((_DWORD *)a5 + 1);
    v15 = v13 & 1;
    if ( (v13 & 1) == 0 )
      v14 = v13 >> 1;
    if ( v14 )
    {
      v16 = (unsigned __int8 *)*((_DWORD *)a5 + 2);
      if ( !v15 )
        v16 = a5 + 1;
      sub_17D566(v17, v16, v14);
    }
    (*(void (__fastcall **)(_DWORD, _BYTE *, int, int, int))(**(_DWORD **)(a1 + 528) + 32))(
      *(_DWORD *)(a1 + 528),
      v17,
      2,
      9,
      6);
    return sub_17D542(v17);
  }
  return result;
}


// ======================================================================
