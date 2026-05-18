// ADDR: 0x17cbc4
// SYMBOL: sub_17CBC4
int __fastcall sub_17CBC4(int result, unsigned int a2)
{
  int v2; // r0
  int v3; // r4

  if ( a2 <= 0x1B )
  {
    result = *(unsigned __int8 *)(result + a2 + 104);
    if ( result )
    {
      v2 = sub_17C080();
      if ( v2 )
      {
        v3 = v2;
        sub_17C1B8(v2);
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 912))(v3);
        if ( result )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 64))(v3);
          return (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 68))(v3);
        }
      }
      else
      {
        return sub_2242C8(4, "AXL", "Env not loaded. (SetUIElementVisible)");
      }
    }
  }
  return result;
}


// ======================================================================
