// ADDR: 0x214e90
// SYMBOL: sub_214E90
int __fastcall sub_214E90(int result, _QWORD *a2)
{
  __int64 v2; // r2

  v2 = *(_QWORD *)(result + 4);
  if ( (unsigned int)v2 >= HIDWORD(v2) )
    return sub_214F74();
  *(_QWORD *)v2 = *a2;
  *(_DWORD *)(result + 4) = v2 + 8;
  return result;
}


// ======================================================================
