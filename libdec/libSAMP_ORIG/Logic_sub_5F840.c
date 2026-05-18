// ADDR: 0x5f764
// SYMBOL: sub_5F764
int sub_5F764(const char *a1, ...)
{
  char v3[256]; // [sp+8h] [bp-10Ch] BYREF
  int v4; // [sp+108h] [bp-Ch]
  va_list va; // [sp+11Ch] [bp+8h] BYREF

  va_start(va, a1);
  sub_10967C((int)v3, 0xFFu);
  vsnprintf(v3, 0xFFu, a1, va);
  _android_log_print(6, "SAMP_ORIG", "%s", v3);
  sub_6B238("%s", v3);
  return v4;
}


// ======================================================================
// ADDR: 0x5fbf8
// SYMBOL: sub_5FBF8
_DWORD *__fastcall sub_5FBF8(_DWORD *a1, char *s)
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
