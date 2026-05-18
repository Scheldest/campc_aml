// ADDR: 0x1054ca
// SYMBOL: sub_1054CA
int __fastcall sub_1054CA(int a1)
{
  int v1; // r0
  _DWORD *v2; // r1

  v1 = *(_DWORD *)(a1 + 92);
  if ( *(_DWORD *)(v1 + 1100) != 50 )
    return -1;
  v2 = *(_DWORD **)(v1 + 1424);
  if ( !v2 )
    return -1;
  if ( v2[281] == v1 )
    return 0;
  if ( v2[282] == v1 )
    return 1;
  if ( v2[283] == v1 )
    return 2;
  if ( v2[284] == v1 )
    return 3;
  if ( v2[285] == v1 )
    return 4;
  if ( v2[286] == v1 )
    return 5;
  if ( v2[287] == v1 )
    return 6;
  if ( v2[288] == v1 )
    return 7;
  else
    return -1;
}


// ======================================================================
