// ADDR: 0x12bddc
// SYMBOL: sub_12BDDC
int __fastcall sub_12BDDC(int a1)
{
  int v1; // r1
  int v2; // r2
  int result; // r0

  v2 = *(_DWORD *)(a1 + 72);
  v1 = *(_DWORD *)(a1 + 68);
  result = 0;
  while ( v1 != v2 )
  {
    if ( *(_DWORD *)v1 )
      result += *(unsigned __int8 *)(*(_DWORD *)v1 + 80);
    v1 += 4;
  }
  return result;
}


// ======================================================================
