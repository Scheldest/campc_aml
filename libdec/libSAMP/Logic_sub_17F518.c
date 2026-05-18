// ADDR: 0x17f4c0
// SYMBOL: sub_17F4C0
int __fastcall sub_17F4C0(int a1, int a2)
{
  int v3; // r0
  int result; // r0
  _QWORD v6[3]; // [sp+0h] [bp-18h] BYREF

  v3 = *(_DWORD *)(a2 + 832);
  if ( v3 )
  {
    sub_181C80(v6, a2, *(_DWORD *)(v3 + 4), *(_DWORD *)(v3 + 8));
    if ( sub_17E580((int)v6, (int)&unk_BE920) )
    {
      return sub_181C76(a1, a2);
    }
    else
    {
      result = v6[0];
      *(_QWORD *)a1 = v6[0];
    }
  }
  else
  {
    result = 0xFFFF;
    *(_DWORD *)a1 = -1;
    *(_DWORD *)(a1 + 4) = 0xFFFF;
  }
  return result;
}


// ======================================================================
