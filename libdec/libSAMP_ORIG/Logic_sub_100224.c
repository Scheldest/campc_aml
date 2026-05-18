// ADDR: 0x101ef4
// SYMBOL: sub_101EF4
_DWORD *__fastcall sub_101EF4(int a1, const char *a2, _DWORD *a3)
{
  _DWORD *v5; // r6
  size_t v6; // r0

  v5 = sub_FFA98(a1 + 408, 28);
  v6 = strlen(a2);
  v5[1] = 16843060;
  *v5 = &off_1139A0;
  v5[4] = *a3;
  v5[2] = a2;
  v5[3] = &a2[v6];
  v5[5] = ")";
  v5[6] = "";
  return v5;
}


// ======================================================================
