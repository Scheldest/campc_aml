// ADDR: 0x2200ec
// SYMBOL: sub_2200EC
int __fastcall sub_2200EC(int a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  return sub_21FFB4(a1, a2, 0xFFFFFFFF, a3, a4);
}


// ======================================================================
// ADDR: 0x22044c
// SYMBOL: sub_22044C
void **__fastcall sub_22044C(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 )
  {
    operator delete[](v2);
    *a1 = 0;
  }
  return a1;
}


// ======================================================================
