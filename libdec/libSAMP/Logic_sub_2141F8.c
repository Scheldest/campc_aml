// ADDR: 0x214222
// SYMBOL: sub_214222
int __fastcall sub_214222(_DWORD *a1, int a2, unsigned __int64 a3, std::__itoa *a4, int a5, int a6)
{
  int v8; // r6
  int result; // r0
  char *v10; // [sp+0h] [bp-18h]

  if ( (int)a3 - a2 > 19 || (v8 = a3, sub_214268(a4, a5) <= (int)a3 - a2) )
  {
    LODWORD(a3) = a2;
    *a1 = std::__itoa::__u64toa(a4, a3, v10);
    result = 0;
  }
  else
  {
    result = 75;
    *a1 = v8;
  }
  a1[1] = result;
  return result;
}


// ======================================================================
