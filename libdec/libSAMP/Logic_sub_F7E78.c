// ADDR: 0xf7e20
// SYMBOL: sub_F7E20
_DWORD *__fastcall sub_F7E20(_DWORD *a1)
{
  int v2; // r1
  int v3; // r0

  v2 = a1[3];
  *a1 = &off_22AE50;
  if ( v2 && sub_1082F4(a1[2]) && (v3 = a1[3], *(_DWORD *)v3 != dword_23DF24 + 6716708) )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  else
    a1[2] = 0;
  a1[1] = 0;
  a1[3] = 0;
  return a1;
}


// ======================================================================
