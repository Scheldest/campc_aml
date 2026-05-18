// ADDR: 0x133e94
// SYMBOL: sub_133E94
_DWORD *__fastcall sub_133E94(_DWORD *a1)
{
  int i; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0

  for ( i = 34; i != 24; --i )
    sub_134570(&a1[i], 0);
  v3 = a1[24];
  a1[24] = 0;
  if ( v3 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 44))(v3);
  v4 = a1[23];
  a1[23] = 0;
  if ( v4 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 44))(v4);
  v5 = a1[22];
  a1[22] = 0;
  if ( v5 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 44))(v5);
  v6 = a1[21];
  a1[21] = 0;
  if ( v6 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 44))(v6);
  return sub_12BCE4(a1);
}


// ======================================================================
