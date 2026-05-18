// ADDR: 0x214ee4
// SYMBOL: sub_214EE4
int __fastcall sub_214EE4(int result, _DWORD *a2)
{
  __int64 v2; // r2

  v2 = *(_QWORD *)(result + 4);
  if ( (_DWORD)v2 == HIDWORD(v2) )
    return sub_2150D0();
  *(_DWORD *)v2 = *a2;
  *(_DWORD *)(result + 4) = v2 + 4;
  return result;
}


// ======================================================================
