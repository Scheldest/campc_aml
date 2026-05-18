// ADDR: 0xfd218
// SYMBOL: sub_FD218
int __fastcall sub_FD218(int result, _DWORD *a2)
{
  __int64 v2; // r2

  v2 = *(_QWORD *)(result + 4);
  if ( (_DWORD)v2 == HIDWORD(v2) )
    return sub_FD404();
  *(_DWORD *)v2 = *a2;
  *(_DWORD *)(result + 4) = v2 + 4;
  return result;
}


// ======================================================================
