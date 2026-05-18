// ADDR: 0x77b7c
// SYMBOL: sub_77B7C
int __fastcall sub_77B7C(int *a1, unsigned __int8 *a2, char *s)
{
  char *v4; // r11
  size_t v6; // r6
  unsigned int v7; // r5
  int v8; // r3
  size_t v9; // r9
  const void *v10; // r10
  unsigned int v11; // r0
  void *v12; // r4
  char *v14; // r5
  unsigned int v15; // r11
  int v16; // r0

  *a1 = 0;
  a1[1] = 0;
  v4 = s;
  a1[2] = 0;
  v6 = *((_DWORD *)a2 + 1);
  v7 = *a2;
  v9 = strlen(s);
  v10 = (const void *)*((_DWORD *)a2 + 2);
  if ( (v7 & 1) == 0 )
  {
    v10 = a2 + 1;
    v6 = v7 >> 1;
  }
  v11 = v6 + v9;
  if ( v6 + v9 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(a1);
  if ( v11 > 0xA )
  {
    v14 = v4;
    v15 = (v11 + 16) & 0xFFFFFFF0;
    v12 = (void *)operator new(v15);
    v16 = v15 | 1;
    v4 = v14;
    *a1 = v16;
    a1[1] = v6;
    a1[2] = (int)v12;
    if ( !v6 )
      goto LABEL_7;
    goto LABEL_6;
  }
  *(_BYTE *)a1 = 2 * v6;
  v12 = (char *)a1 + 1;
  if ( v6 )
LABEL_6:
    j_memcpy(v12, v10, v6);
LABEL_7:
  *((_BYTE *)v12 + v6) = 0;
  return std::string::append(a1, v4, v9, v8);
}


// ======================================================================
