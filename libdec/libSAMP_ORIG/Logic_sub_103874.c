// ADDR: 0x1038c0
// SYMBOL: sub_1038C0
int __fastcall sub_1038C0(_DWORD *a1, int a2)
{
  if ( a1[3] )
  {
    sub_FFB40(a2, "<", "");
    sub_1037E0(a1 + 2, a2);
    sub_FFB40(a2, ">", "");
  }
  sub_FFB40(a2, "(", "");
  sub_1037E0(a1 + 4, a2);
  return sub_FFB40(a2, ")", "");
}


// ======================================================================
