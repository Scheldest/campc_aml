// ADDR: 0xf4d48
// SYMBOL: sub_F4D48
int __fastcall sub_F4D48(__int64 *a1)
{
  int result; // r0
  __int64 v3; // kr00_8
  int v4; // r6
  int v5; // t1

  v3 = *a1;
  result = *((_DWORD *)a1 + 1);
  if ( result != (_DWORD)v3 )
  {
    v4 = result;
    do
    {
      v5 = *(unsigned __int8 *)(v4 - 12);
      v4 -= 12;
      if ( v5 << 31 )
        operator delete(*(void **)(result - 4));
      result = v4;
    }
    while ( v4 != (_DWORD)v3 );
  }
  *((_DWORD *)a1 + 1) = v3;
  return result;
}


// ======================================================================
