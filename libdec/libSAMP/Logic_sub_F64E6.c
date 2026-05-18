// ADDR: 0xf75a0
// SYMBOL: sub_F75A0
void __fastcall sub_F75A0(int *a1, int *a2)
{
  int v4; // r0
  int v5; // r6
  unsigned int v6; // r5
  int v7; // r2
  int v8; // r0
  char *v9; // r0
  char *v10; // r1
  int v11; // r2
  void *v12; // [sp+4h] [bp-24h] BYREF
  char *v13; // [sp+8h] [bp-20h]
  char *v14; // [sp+Ch] [bp-1Ch]
  char *v15; // [sp+10h] [bp-18h]
  _DWORD *v16; // [sp+14h] [bp-14h]

  v4 = *a1;
  v5 = a1[1] - v4;
  v6 = (v5 >> 2) + 1;
  if ( v6 >= 0x40000000 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  v7 = a1[2];
  v16 = a1 + 2;
  v8 = v7 - v4;
  if ( v6 <= v8 >> 1 )
    v6 = v8 >> 1;
  if ( (unsigned int)v8 >= 0x7FFFFFFC )
    v6 = 0x3FFFFFFF;
  if ( v6 )
  {
    if ( v6 >= 0x40000000 )
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    v9 = (char *)operator new(4 * v6);
  }
  else
  {
    v9 = 0;
  }
  v10 = &v9[4 * (v5 >> 2)];
  v15 = &v9[4 * v6];
  v11 = *a2;
  v12 = v9;
  v13 = v10;
  *(_DWORD *)v10 = v11;
  v14 = v10 + 4;
  sub_F7674(a1, &v12);
  if ( v14 != v13 )
    v14 += 4 * ~((unsigned int)(v14 - v13 - 4) >> 2);
  if ( v12 )
    operator delete(v12);
}


// ======================================================================
