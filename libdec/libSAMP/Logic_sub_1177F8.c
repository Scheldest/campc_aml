// ADDR: 0x116964
// SYMBOL: sub_116964
void __fastcall sub_116964(_DWORD *a1, _DWORD *a2)
{
  char *v3; // r4
  int status[3]; // [sp+4h] [bp-Ch] BYREF

  v3 = j___cxa_demangle(*(const char **)(*(_DWORD *)(*a2 - 4) + 4), 0, 0, status);
  sub_DC6DC(a1, v3);
  if ( v3 )
  {
    if ( !status[0] )
      free(v3);
  }
}


// ======================================================================
