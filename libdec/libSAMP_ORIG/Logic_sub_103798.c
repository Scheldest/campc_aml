// ADDR: 0x1037e0
// SYMBOL: sub_1037E0
int __fastcall sub_1037E0(_DWORD *a1, int a2)
{
  int v4; // r8
  int i; // r6
  int result; // r0
  int v7; // r10
  int v8; // r5

  v4 = 1;
  for ( i = 0; ; ++i )
  {
    result = a1[1];
    if ( i == result )
      break;
    v7 = *(_DWORD *)(a2 + 4);
    v8 = v7;
    if ( !(v4 << 31) )
    {
      sub_FFB40(a2, ", ", "");
      v8 = *(_DWORD *)(a2 + 4);
    }
    sub_FE074(*(unsigned __int8 **)(*a1 + 4 * i), a2);
    if ( v8 == *(_DWORD *)(a2 + 4) )
      *(_DWORD *)(a2 + 4) = v7;
    else
      v4 = 0;
  }
  return result;
}


// ======================================================================
