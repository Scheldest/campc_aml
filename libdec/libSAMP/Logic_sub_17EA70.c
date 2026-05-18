// ADDR: 0x17ea3a
// SYMBOL: sub_17EA3A
unsigned __int8 *__fastcall sub_17EA3A(int a1, const char *a2)
{
  unsigned __int8 *v3; // r5
  size_t v4; // r2

  if ( !a2 || !*a2 )
    return (unsigned __int8 *)sub_17D55E((_DWORD *)(a1 + 2516));
  v3 = (unsigned __int8 *)(a1 + 2516);
  sub_17D55E((_DWORD *)(a1 + 2516));
  v4 = strlen(a2) + 1;
  return sub_17D566(v3, a2, v4);
}


// ======================================================================
