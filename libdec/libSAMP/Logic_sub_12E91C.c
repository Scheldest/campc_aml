// ADDR: 0x12c0b6
// SYMBOL: sub_12C0B6
int __fastcall sub_12C0B6(int result, int a2)
{
  int *i; // r5
  int *v3; // r6

  v3 = *(int **)(result + 72);
  for ( i = *(int **)(result + 68); i != v3; ++i )
  {
    result = *i;
    if ( *i )
    {
      if ( *(_BYTE *)(result + 80) )
        result = (*(int (__fastcall **)(int, int))(*(_DWORD *)result + 4))(result, a2);
    }
  }
  return result;
}


// ======================================================================
