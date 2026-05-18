// ADDR: 0x12c0e6
// SYMBOL: sub_12C0E6
int __fastcall sub_12C0E6(int result)
{
  __int64 i; // r4

  for ( i = *(_QWORD *)(result + 68); (_DWORD)i != HIDWORD(i); LODWORD(i) = i + 4 )
  {
    result = *(_DWORD *)i;
    if ( *(_DWORD *)i )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 8))(result);
  }
  return result;
}


// ======================================================================
