// ADDR: 0x163eba
// SYMBOL: sub_163EBA
int __fastcall sub_163EBA(int result, _DWORD *a2)
{
  __int64 v2; // r2

  v2 = (unsigned int)*a2;
  *(_QWORD *)(result + 4) = v2;
  if ( (_DWORD)v2 )
    *(_DWORD *)(v2 + 8) = result;
  *a2 = result;
  return result;
}


// ======================================================================
// ADDR: 0x163ecc
// SYMBOL: sub_163ECC
int sub_163ECC()
{
  return ((int (*)(void))(dword_23DF24 + 4249949))();
}


// ======================================================================
