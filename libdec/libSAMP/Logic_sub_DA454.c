// ADDR: 0xdc6dc
// SYMBOL: sub_DC6DC
_DWORD *__fastcall sub_DC6DC(_DWORD *a1, char *s)
{
  size_t v4; // r0
  size_t v5; // r5
  void *v6; // r4
  unsigned int v7; // r9

  v4 = strlen(s);
  if ( v4 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(a1);
  v5 = v4;
  if ( v4 >= 0xB )
  {
    v7 = (v4 + 16) & 0xFFFFFFF0;
    v6 = (void *)operator new(v7);
    *a1 = v7 + 1;
    a1[1] = v5;
    a1[2] = v6;
  }
  else
  {
    *(_BYTE *)a1 = 2 * v4;
    v6 = (char *)a1 + 1;
    if ( !v4 )
      goto LABEL_7;
  }
  j_memcpy(v6, s, v5);
LABEL_7:
  *((_BYTE *)v6 + v5) = 0;
  return a1;
}


// ======================================================================
