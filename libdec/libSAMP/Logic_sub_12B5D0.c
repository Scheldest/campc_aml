// ADDR: 0x11c8f0
// SYMBOL: sub_11C8F0
int sub_11C8F0()
{
  return ((int (*)(void))(dword_23DF24 + 2834005))();
}


// ======================================================================
// ADDR: 0x11c908
// SYMBOL: sub_11C908
int sub_11C908()
{
  return *(_DWORD *)(dword_23DF24 + 10994504);
}


// ======================================================================
// ADDR: 0x11c920
// SYMBOL: sub_11C920
int sub_11C920()
{
  return *(_DWORD *)(dword_23DF24 + 10994500);
}


// ======================================================================
// ADDR: 0x12b778
// SYMBOL: sub_12B778
int sub_12B778()
{
  off_263758(6, 0);
  off_263758(8, 0);
  off_263758(12, 1);
  off_263758(10, 5);
  off_263758(11, 6);
  off_263758(14, 0);
  off_263758(20, 1);
  off_263758(13, 0);
  off_263758(29, 5);
  off_263758(30, 2);
  off_263758(9, 2);
  return off_263758(2, 3);
}


// ======================================================================
// ADDR: 0x12b7ec
// SYMBOL: sub_12B7EC
void *__fastcall sub_12B7EC(int a1, int a2)
{
  void *result; // r0
  unsigned int v5; // r1
  unsigned int v6; // r0
  int v7; // r2

  result = *(void **)(a1 + 32);
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 36) >= *(_DWORD *)(a2 + 16) )
      return result;
    operator delete(result);
    *(_DWORD *)(a1 + 32) = 0;
  }
  v5 = *(_DWORD *)(a2 + 16) + 10000;
  *(_DWORD *)(a1 + 36) = v5;
  v7 = (28 * (unsigned __int64)v5) >> 32;
  v6 = 28 * v5;
  if ( !is_mul_ok(0x1Cu, v5) )
    v7 = 1;
  if ( v7 )
    v6 = -1;
  result = (void *)operator new[](v6);
  *(_DWORD *)(a1 + 32) = result;
  return result;
}


// ======================================================================
