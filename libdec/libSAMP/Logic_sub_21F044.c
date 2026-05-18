// ADDR: 0x21f010
// SYMBOL: sub_21F010
int __fastcall sub_21F010(_DWORD *a1, int a2, _DWORD *a3)
{
  int v3; // r4
  int v4; // r5

  v3 = a1[1];
  if ( a3 )
  {
    v4 = v3 >> 8;
    if ( v3 << 31 )
      v4 = *(_DWORD *)(*a3 + v4);
  }
  else
  {
    v4 = 0;
  }
  return (*(int (__fastcall **)(_DWORD, int, int))(*(_DWORD *)*a1 + 28))(*a1, a2, (int)a3 + v4);
}


// ======================================================================
