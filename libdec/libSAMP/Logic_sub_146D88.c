// ADDR: 0x14f844
// SYMBOL: sub_14F844
int __fastcall sub_14F844(int result, unsigned int a2)
{
  _BYTE *v2; // r5
  int v3; // r4

  if ( !(a2 >> 11) )
  {
    if ( *(_BYTE *)(result + a2 + 81920) )
    {
      v2 = (_BYTE *)(result + a2 + 81920);
      v3 = result + 40 * a2;
      std::string::assign(v3, &byte_8F794);
      result = 0;
      *(_QWORD *)(v3 + 12) = 0LL;
      *(_QWORD *)(v3 + 20) = 0LL;
      *(_DWORD *)(v3 + 29) = 0;
      *(_DWORD *)(v3 + 34) = 0;
      *(_DWORD *)(v3 + 25) = 0;
      *v2 = 0;
    }
  }
  return result;
}


// ======================================================================
