// ADDR: 0xf851c
// SYMBOL: sub_F851C
int __fastcall sub_F851C(int a1)
{
  int i; // r1

  for ( i = 0; i != 1812; ++i )
  {
    if ( *((_DWORD *)&unk_245630 + i + 1) == a1 )
      return i + 1;
  }
  return -1;
}


// ======================================================================
// ADDR: 0xf8548
// SYMBOL: sub_F8548
int __fastcall sub_F8548(int a1)
{
  int v1; // r0
  int v2; // r1

  if ( !a1 )
    return -1;
  v1 = sub_16368C();
  if ( !v1 )
    return -1;
  v2 = 0;
  while ( *((_DWORD *)&unk_245630 + v2 + 1) != v1 )
  {
    if ( ++v2 == 1812 )
      return -1;
  }
  return v2 + 1;
}


// ======================================================================
// ADDR: 0x1045d8
// SYMBOL: sub_1045D8
int __fastcall sub_1045D8(int a1)
{
  int v1; // r4

  v1 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 92) + 1088) + 16);
  if ( !v1 )
    return 0;
  while ( (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 20))(v1) != 401
       && (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 20))(v1) != 934 )
  {
    v1 = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
    if ( !v1 )
      return 0;
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 20))(v1) != 401
    && (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 20))(v1) != 934 )
  {
    return 0;
  }
  return v1;
}


// ======================================================================
// ADDR: 0x1091b4
// SYMBOL: sub_1091B4
int sub_1091B4()
{
  int v0; // r0

  v0 = ((int (*)(void))(dword_23DF24 + 3727337))();
  if ( v0 )
    return **(_DWORD **)((char *)&word_10 + v0);
  else
    return 0;
}


// ======================================================================
// ADDR: 0x163698
// SYMBOL: sub_163698
int __fastcall sub_163698(_DWORD *a1)
{
  int v1; // r2
  int v2; // r3
  unsigned int v3; // r4

  v2 = 8;
  v1 = a1[16];
  if ( v1 < 1 )
    v2 = 4 * (v1 != 0);
  v3 = a1[23];
  return sub_220C40(a1[14]) | ((8 * v3) & 0x200 | ((((v3 >> 2) & 2) + v2 + ((v3 >> 7) & 1)) << 10) | ((v3 & 2) << 7)) ^ 0x800;
}


// ======================================================================
// ADDR: 0x220c40
// SYMBOL: sub_220C40
unsigned int __fastcall sub_220C40(float a1)
{
  unsigned int result; // r0

  result = 0;
  if ( a1 > 0.0 )
    return (unsigned int)(a1 + (double)(unsigned int)(a1 * 2.32830644e-10) * -4294967300.0);
  return result;
}


// ======================================================================
