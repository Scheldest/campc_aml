// ADDR: 0x126b70
// SYMBOL: sub_126B70
int __fastcall sub_126B70(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_126B98();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================
