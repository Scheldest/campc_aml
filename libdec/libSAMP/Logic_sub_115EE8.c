// ADDR: 0x117584
// SYMBOL: sub_117584
int __fastcall sub_117584(int a1)
{
  int v2; // r5

  *(_DWORD *)a1 = &off_22BD30;
  v2 = a1 + 28;
  sub_1630A8(a1 + 28);
  sub_1630A8(v2);
  if ( *(unsigned __int8 *)(a1 + 16) << 31 )
    operator delete(*(void **)(a1 + 24));
  return sub_1177F8(a1);
}


// ======================================================================
// ADDR: 0x1175e4
// SYMBOL: sub_1175E4
int __fastcall sub_1175E4(int a1)
{
  return sub_1630A8(a1 + 28);
}


// ======================================================================
