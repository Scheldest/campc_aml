// ADDR: 0x60e78
// SYMBOL: sub_60E78
int __fastcall sub_60E78(int a1, int a2, const char *a3)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 92);
  if ( result )
  {
    result = sub_685E0(*(_DWORD *)(a1 + 8));
    if ( result )
    {
      result = strcasecmp(a3, "SEX");
      if ( result )
      {
        result = strcasecmp(a3, "SAMP");
        if ( result )
        {
          if ( !sub_682E8(&unk_5090E, a3) )
          {
            sub_682E8(&unk_50922, a3);
            sub_682E8(&unk_50936, *(_DWORD *)(a1 + 8));
          }
          return sub_682E8(&unk_50936, *(_DWORD *)(a1 + 8));
        }
      }
    }
  }
  return result;
}


// ======================================================================
