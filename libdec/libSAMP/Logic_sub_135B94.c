// ADDR: 0x134de0
// SYMBOL: sub_134DE0
int __fastcall sub_134DE0(int a1)
{
  _BYTE *v1; // r6
  _BYTE *v3; // r5
  int result; // r0

  v1 = *(_BYTE **)(a1 + 100);
  if ( v1[80] )
    (*(void (__fastcall **)(_BYTE *, _DWORD))(*(_DWORD *)v1 + 36))(v1, 0);
  v3 = *(_BYTE **)(a1 + 96);
  v1[80] = 0;
  if ( v3[80] )
    (*(void (__fastcall **)(_BYTE *, _DWORD))(*(_DWORD *)v3 + 36))(v3, 0);
  result = 1;
  v3[80] = 0;
  *(_BYTE *)(a1 + 88) = 1;
  return result;
}


// ======================================================================
