// ADDR: 0x13a160
// SYMBOL: sub_13A160
int __fastcall sub_13A160(int result, char a2)
{
  *(_BYTE *)(result + 83) = a2;
  return result;
}


// ======================================================================
// ADDR: 0x17ca90
// SYMBOL: sub_17CA90
int sub_17CA90()
{
  int v0; // r0
  int v1; // r4
  int result; // r0

  v0 = sub_17C080();
  if ( !v0 )
    return sub_2242C8(6, "AXL", "Env not loaded (SetAutocompleteState)");
  v1 = v0;
  sub_17C1B8(v0);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 912))(v1);
  if ( result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 64))(v1);
    return (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 68))(v1);
  }
  return result;
}


// ======================================================================
