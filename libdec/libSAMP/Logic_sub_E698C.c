// ADDR: 0xe7238
// SYMBOL: sub_E7238
int __fastcall sub_E7238(int result)
{
  __int64 v1; // kr00_8
  int v2; // r1

  v1 = *(_QWORD *)(result + 20);
  *(_BYTE *)(result + 16) = 1;
  *(_DWORD *)(result + 20) = v1 - 1;
  if ( HIDWORD(v1) )
  {
    *(_DWORD *)(result + 24) = HIDWORD(v1) - 1;
  }
  else
  {
    v2 = *(_DWORD *)(result + 28);
    if ( v2 )
      *(_DWORD *)(result + 28) = v2 - 1;
  }
  if ( *(_DWORD *)(result + 12) != -1 )
    --*(_DWORD *)(result + 36);
  return result;
}


// ======================================================================
