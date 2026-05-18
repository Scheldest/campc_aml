// ADDR: 0x108c20
// SYMBOL: sub_108C20
int sub_108C20()
{
  sub_22178C((int)byte_262908, 0xC8u);
  return sub_22178C((int)dword_2629D0, 0x320u);
}


// ======================================================================
// ADDR: 0x14f170
// SYMBOL: sub_14F170
void __fastcall sub_14F170(int *a1, int a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r6
  void *v7; // [sp+4h] [bp-24h] BYREF
  char *v8; // [sp+8h] [bp-20h]
  char *v9; // [sp+Ch] [bp-1Ch]
  char *v10; // [sp+10h] [bp-18h]
  _DWORD *v11; // [sp+14h] [bp-14h]

  v4 = *a1;
  if ( a2 > (unsigned int)((a1[2] - v4) >> 1) )
  {
    v5 = a1[1];
    v11 = a1 + 2;
    if ( a2 <= -1 )
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    v6 = v5 - v4;
    v7 = (void *)operator new(2 * a2);
    v9 = (char *)v7 + v6;
    v10 = (char *)v7 + 2 * a2;
    v8 = (char *)v7 + v6;
    sub_14F62C(a1, &v7);
    if ( v9 != v8 )
      v9 += 2 * ~((unsigned int)(v9 - v8 - 2) >> 1);
    if ( v7 )
      operator delete(v7);
  }
}


// ======================================================================
