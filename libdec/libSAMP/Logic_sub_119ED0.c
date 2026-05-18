// ADDR: 0x11a084
// SYMBOL: sub_11A084
int __fastcall sub_11A084(unsigned __int8 *a1, int a2)
{
  char v2; // r6
  int v3; // r5
  unsigned __int8 *v4; // r4
  int v5; // r1
  int v6; // r2
  int result; // r0
  unsigned __int8 *v8; // r2

  v2 = 92;
  v3 = 47;
  if ( a2 )
  {
    v2 = 47;
    v3 = 92;
  }
  v4 = a1;
  v5 = v3;
  v6 = 0;
  while ( 1 )
  {
    result = std::string::find(a1, v5, v6);
    if ( result == -1 )
      break;
    v8 = (unsigned __int8 *)*((_DWORD *)v4 + 2);
    if ( !(*v4 << 31) )
      v8 = v4 + 1;
    v8[result] = v2;
    v6 = result;
    a1 = v4;
    v5 = v3;
  }
  return result;
}


// ======================================================================
