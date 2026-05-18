// ADDR: 0xf5f14
// SYMBOL: sub_F5F14
int __fastcall sub_F5F14(int result, int a2, int a3)
{
  int v3; // r3

  if ( a2 < dword_237974[2 * result + 1] )
  {
    v3 = dword_237974[2 * result];
    if ( a2 >= v3 )
    {
      dword_237984[2 * result] = a2;
      dword_237984[2 * result + 1] = a3;
      if ( result == 1 )
      {
        if ( a2 != v3 + 1 )
        {
LABEL_6:
          result = (unsigned __int8)byte_2400C8;
          if ( !byte_2400C8 )
            return result;
          result = 0;
LABEL_11:
          byte_2400C8 = result;
          return result;
        }
      }
      else if ( result || a2 != v3 )
      {
        goto LABEL_6;
      }
      result = (unsigned __int8)byte_2400C8;
      if ( byte_2400C8 == 1 )
        return result;
      result = 1;
      goto LABEL_11;
    }
  }
  return result;
}


// ======================================================================
