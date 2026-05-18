// ADDR: 0x1f3004
// SYMBOL: sub_1F3004
int __fastcall sub_1F3004(__int64 *a1)
{
  int v1; // r1
  int v2; // r0
  int v3; // r1
  __int64 v4; // kr00_8
  __int64 v6; // kr08_8

  v1 = *((unsigned __int8 *)a1 + 16);
  if ( (unsigned int)(v1 - 2) >= 3 )
  {
    if ( (unsigned int)(v1 - 5) >= 2 )
      return *(_DWORD *)a1;
    v6 = *a1;
    v2 = *((_DWORD *)a1 + 1);
    v3 = v6;
  }
  else
  {
    v4 = a1[1];
    v2 = *((_DWORD *)a1 + 3);
    v3 = v4;
  }
  return v2 + v3;
}


// ======================================================================
