// ADDR: 0xfb398
// SYMBOL: sub_FB398
int *__fastcall sub_FB398(int *a1, int a2, int a3, int a4, int a5, int a6)
{
  size_t v6; // r6
  int *v7; // r4
  int v9; // r5
  int v11; // r0
  bool v12; // cc
  size_t v13; // r0
  int v14; // r2
  char *v15; // r5
  char *v16; // r0
  int v17; // r0
  char *v18; // r1
  int v19; // r5
  _DWORD v21[2]; // [sp+0h] [bp-28h] BYREF
  void *v22; // [sp+8h] [bp-20h]

  v6 = 0;
  if ( !a1 )
    return 0;
  v7 = a1;
  v9 = a3 - a2;
  v11 = *(_DWORD *)(a5 + 12);
  v12 = v11 <= a4 - a2;
  v13 = v11 - (a4 - a2);
  if ( !v12 )
    v6 = v13;
  if ( v9 >= 1 && (*(int (__fastcall **)(int *))(*v7 + 48))(v7) != v9 )
    return 0;
  if ( v6 )
  {
    v14 = a6;
    if ( v6 >= 0xB )
    {
      v16 = (char *)operator new((v6 + 16) & 0xFFFFFFF0);
      v14 = a6;
      v15 = v16;
      v21[1] = v6;
      v22 = v16;
      v21[0] = ((v6 + 16) & 0xFFFFFFF0) + 1;
    }
    else
    {
      LOBYTE(v21[0]) = 2 * v6;
      v15 = (char *)v21 + 1;
    }
    sub_22177C((int)v15, v6, v14);
    v17 = *v7;
    v15[v6] = 0;
    v18 = (char *)v22;
    if ( !(LOBYTE(v21[0]) << 31) )
      v18 = (char *)v21 + 1;
    v19 = (*(int (__fastcall **)(int *, char *, size_t, _DWORD *))(v17 + 48))(v7, v18, v6, v21);
    if ( LOBYTE(v21[0]) << 31 )
      operator delete(v22);
    if ( v19 != v6 )
      return 0;
  }
  if ( a4 - a3 >= 1 && (*(int (__fastcall **)(int *, int, int))(*v7 + 48))(v7, a3, a4 - a3) != a4 - a3 )
    return 0;
  *(_DWORD *)(a5 + 12) = 0;
  return v7;
}


// ======================================================================
