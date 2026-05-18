// ADDR: 0x10f6c2
// SYMBOL: sub_10F6C2
int __fastcall sub_10F6C2(__int64 *a1)
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
      v5 = *(unsigned __int8 *)(v4 - 20);
      v4 -= 20;
      if ( v5 << 31 )
        operator delete(*(void **)(result - 12));
      result = v4;
    }
    while ( v4 != (_DWORD)v3 );
  }
  *((_DWORD *)a1 + 1) = v3;
  return result;
}


// ======================================================================
