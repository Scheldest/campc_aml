// ADDR: 0x15ec40
// SYMBOL: sub_15EC40
int __fastcall sub_15EC40(int *a1, int a2)
{
  int result; // r0
  int v5; // r0
  int v6; // [sp+0h] [bp-10h] BYREF
  _DWORD v7[3]; // [sp+4h] [bp-Ch] BYREF

  result = *a1;
  if ( result )
  {
    v6 = a2;
    result = sub_15FAE4(result, &v6);
    if ( result )
    {
      v5 = *a1;
      v7[0] = a2;
      return sub_15FBB6(v5, v7);
    }
  }
  return result;
}


// ======================================================================
