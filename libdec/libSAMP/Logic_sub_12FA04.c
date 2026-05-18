// ADDR: 0x126dee
// SYMBOL: sub_126DEE
void **__fastcall sub_126DEE(void **a1, int a2)
{
  _BYTE *v3; // r5
  int v5; // r2
  __int64 v6; // r0
  char *v7; // r1
  char *v8; // r0
  char *v9; // r2
  void *v10; // r3
  __int64 v11; // d16
  char *v12; // r2
  void *v13; // r1
  void *v14; // r6
  void *v16; // [sp+4h] [bp-24h] BYREF
  char *v17; // [sp+8h] [bp-20h]
  char *v18; // [sp+Ch] [bp-1Ch]
  void *v19; // [sp+10h] [bp-18h]

  v3 = *a1;
  HIDWORD(v6) = 357913941;
  v5 = -1431655765 * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2);
  LODWORD(v6) = v5 + 1;
  if ( (unsigned int)(v5 + 1) > 0x15555555 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  if ( (unsigned int)v6 <= 1431655766 * (((_BYTE *)a1[2] - v3) >> 2) )
    LODWORD(v6) = 1431655766 * (((_BYTE *)a1[2] - v3) >> 2);
  if ( (unsigned int)(-1431655765 * (((_BYTE *)a1[2] - v3) >> 2)) < 0xAAAAAAA )
    HIDWORD(v6) = v6;
  LODWORD(v6) = &v16;
  sub_F4C90(v6, v5, (int)(a1 + 2));
  std::string::basic_string(v18, a2);
  v7 = v17;
  v9 = (char *)a1[1];
  v8 = (char *)*a1;
  v10 = v18 + 12;
  v18 += 12;
  if ( v9 == v8 )
  {
    v12 = v8;
  }
  else
  {
    do
    {
      v11 = *(_QWORD *)(v9 - 12);
      *((_DWORD *)v7 - 1) = *((_DWORD *)v9 - 1);
      *(_QWORD *)(v7 - 12) = v11;
      *((_DWORD *)v9 - 3) = 0;
      *((_DWORD *)v9 - 2) = 0;
      *((_DWORD *)v9 - 1) = 0;
      v9 -= 12;
      v7 = v17 - 12;
      v17 -= 12;
    }
    while ( v9 != v8 );
    v10 = v18;
    v8 = (char *)a1[1];
    v12 = (char *)*a1;
  }
  *a1 = v7;
  v13 = a1[2];
  v14 = v19;
  v16 = v12;
  v17 = v12;
  v18 = v8;
  v19 = v13;
  a1[1] = v10;
  a1[2] = v14;
  return sub_F4CE8(&v16);
}


// ======================================================================
