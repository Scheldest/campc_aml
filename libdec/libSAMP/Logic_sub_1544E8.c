// ADDR: 0x1545c8
// SYMBOL: sub_1545C8
char *__fastcall sub_1545C8(char *a1, char *a2, int a3)
{
  char *v6; // r0
  int v7; // r1
  const char *v8; // r3
  char s[2063]; // [sp+1h] [bp-80Fh] BYREF

  std::runtime_error::runtime_error((std::runtime_error *)a1, &byte_8F794);
  *((_DWORD *)a1 + 2) = a3;
  *((_DWORD *)a1 + 3) = 0;
  *(_DWORD *)a1 = &off_22F42C;
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 5) = 0;
  std::string::assign((int)(a1 + 12), a2);
  std::string::append((int)(a1 + 12), ": ");
  v6 = (char *)sub_159660(a3);
  std::string::append((int)(a1 + 12), v6);
  v8 = (const char *)*((_DWORD *)a1 + 5);
  if ( !((unsigned __int8)a1[12] << 31) )
    v8 = a1 + 13;
  sub_1546EC(s, v7, "BassException - %s", v8);
  sub_159B70(4, s);
  return a1;
}


// ======================================================================
// ADDR: 0x1649ec
// SYMBOL: sub_1649EC
int sub_1649EC()
{
  if ( off_381AD0 )
    return off_381AD0();
  else
    return -1;
}


// ======================================================================
// ADDR: 0x164a28
// SYMBOL: sub_164A28
int sub_164A28()
{
  if ( off_381ADC )
    return off_381ADC();
  else
    return 0;
}


// ======================================================================
// ADDR: 0x164a3c
// SYMBOL: sub_164A3C
int sub_164A3C()
{
  if ( off_381AE0 )
    return off_381AE0();
  else
    return 0;
}


// ======================================================================
// ADDR: 0x164a50
// SYMBOL: sub_164A50
int sub_164A50()
{
  if ( off_381AE4 )
    return off_381AE4();
  else
    return 0;
}


// ======================================================================
// ADDR: 0x164a70
// SYMBOL: sub_164A70
int (*sub_164A70())(void)
{
  int (*result)(void); // r0

  result = off_381AE8;
  if ( off_381AE8 )
    return (int (*)(void))off_381AE8();
  return result;
}


// ======================================================================
// ADDR: 0x164cf0
// SYMBOL: sub_164CF0
int sub_164CF0()
{
  if ( off_381B54 )
    return off_381B54();
  else
    return 0;
}


// ======================================================================
