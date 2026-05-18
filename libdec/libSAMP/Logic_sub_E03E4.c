// ADDR: 0xe0408
// SYMBOL: sub_E0408
int __fastcall sub_E0408(int a1, int a2, int a3)
{
  int v4; // r1
  int v6; // r0
  _DWORD *v7; // r4
  int v8; // r5
  size_t v9; // r0
  _DWORD v11[8]; // [sp+0h] [bp-20h] BYREF

  v4 = *(_DWORD *)(a1 + 4);
  if ( (v4 & 0x40000000) == 0 )
    return -1;
  v6 = *(_DWORD *)(a1 + 8);
  v7 = (_DWORD *)(v4 >= 0 ? v6 - 8 : v6 - 16);
  if ( !v7[1] )
    return -1;
  v8 = 0;
  while ( 1 )
  {
    v9 = strlen(*(const char **)(*v7 + 8 * v8));
    v11[0] = *(_DWORD *)(*v7 + 8 * v8);
    v11[1] = v9;
    if ( !((int (__fastcall *)(_DWORD *, int, int))sub_E046C)(v11, a2, a3) )
      break;
    if ( (unsigned int)++v8 >= v7[1] )
      return -1;
  }
  return *(_DWORD *)(*v7 + 8 * v8 + 4);
}


// ======================================================================
