// ADDR: 0x120f10
// SYMBOL: sub_120F10
int __fastcall sub_120F10(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_121054();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================
