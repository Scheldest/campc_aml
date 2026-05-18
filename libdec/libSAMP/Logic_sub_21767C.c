// ADDR: 0x21934c
// SYMBOL: sub_21934C
_DWORD *__fastcall sub_21934C(int a1, const char *a2, _DWORD *a3)
{
  _DWORD *v5; // r6
  size_t v6; // r0

  v5 = sub_216EF0(a1 + 408, 28);
  v6 = strlen(a2);
  v5[1] = 16843060;
  *v5 = &off_23377C;
  v5[4] = *a3;
  v5[2] = a2;
  v5[3] = &a2[v6];
  v5[5] = ")";
  v5[6] = "";
  return v5;
}


// ======================================================================
