// ADDR: 0x12ee78
// SYMBOL: sub_12EE78
int __fastcall sub_12EE78(int a1, int a2)
{
  int result; // r0

  sub_13D450(*(_DWORD *)(*(_DWORD *)(a1 + 108) + 84), a2);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 108) + 8))(*(_DWORD *)(a1 + 108));
  if ( *(_BYTE *)(a1 + 80) != 1 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 36))(a1, 1);
  result = 1;
  *(_BYTE *)(a1 + 80) = 1;
  return result;
}


// ======================================================================
// ADDR: 0x12eea8
// SYMBOL: sub_12EEA8
int __fastcall sub_12EEA8(_BYTE *a1)
{
  int result; // r0

  if ( a1[80] )
    (*(void (__fastcall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 36))(a1, 0);
  result = 0;
  a1[80] = 0;
  return result;
}


// ======================================================================
