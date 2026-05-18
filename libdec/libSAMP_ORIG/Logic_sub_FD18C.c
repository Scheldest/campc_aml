// ADDR: 0xfd1c4
// SYMBOL: sub_FD1C4
int __fastcall sub_FD1C4(int result, _QWORD *a2)
{
  __int64 v2; // r2

  v2 = *(_QWORD *)(result + 4);
  if ( (unsigned int)v2 >= HIDWORD(v2) )
    return sub_FD2A8();
  *(_QWORD *)v2 = *a2;
  *(_DWORD *)(result + 4) = v2 + 8;
  return result;
}


// ======================================================================
