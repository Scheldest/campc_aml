// ADDR: 0x1ee4fe
// SYMBOL: sub_1EE4FE
int __fastcall sub_1EE4FE(unsigned __int8 *a1, int a2)
{
  int result; // r0

  if ( *a1 << 31 )
    operator delete(*((void **)a1 + 2));
  *((_DWORD *)a1 + 2) = *(_DWORD *)(a2 + 8);
  result = 0;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_WORD *)a2 = 0;
  return result;
}


// ======================================================================
