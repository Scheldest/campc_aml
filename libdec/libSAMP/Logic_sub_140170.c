// ADDR: 0x1408d0
// SYMBOL: sub_1408D0
int __fastcall sub_1408D0(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r0
  unsigned __int8 *v5; // r1
  unsigned int v6; // r0
  unsigned int v7; // r1

  if ( sub_106128(*(_DWORD *)(a1 + 28)) )
  {
    LOBYTE(result) = 2;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 28);
    if ( *(_BYTE *)(v3 + 57) )
    {
      LOBYTE(result) = 6;
    }
    else if ( sub_1064BC(v3) )
    {
      LOBYTE(result) = 10;
    }
    else
    {
      v4 = *(_DWORD *)(a1 + 28);
      if ( *(_BYTE *)(v4 + 65) )
      {
        LOBYTE(result) = 11;
      }
      else if ( *(_BYTE *)(v4 + 64) )
      {
        LOBYTE(result) = 68;
      }
      else if ( sub_106A90(v4) )
      {
        LOBYTE(result) = 1;
      }
      else if ( sub_106AB0(*(_DWORD *)(a1 + 28)) )
      {
        LOBYTE(result) = 3;
      }
      else if ( sub_106AF8(*(_DWORD *)(a1 + 28)) )
      {
        LOBYTE(result) = 4;
      }
      else
      {
        v5 = *(unsigned __int8 **)(a1 + 28);
        v6 = (unsigned __int8)(v5[59] - 1);
        if ( v6 >= 4 )
        {
          if ( v5[66] )
          {
            LOBYTE(result) = 24;
          }
          else if ( v5[67] )
          {
            LOBYTE(result) = 25;
          }
          else
          {
            LOBYTE(result) = 0;
            if ( v5[57] )
            {
              v7 = v5[56];
              if ( v7 < 4 )
                LOBYTE(result) = v7 + 5;
            }
          }
        }
        else
        {
          return (unsigned __int8)(0x15171614u >> (8 * v6));
        }
      }
    }
  }
  return (unsigned __int8)result;
}


// ======================================================================
