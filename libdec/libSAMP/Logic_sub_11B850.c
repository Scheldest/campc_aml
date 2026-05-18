// ADDR: 0x11b9e8
// SYMBOL: sub_11B9E8
int __fastcall sub_11B9E8(int a1, int a2, const char *a3, _DWORD *a4, int a5)
{
  int v5; // r5
  _BYTE *v9; // r1
  int v10; // r0
  unsigned int v12; // r1
  unsigned int v13; // r5
  int v14; // r2
  int v15; // r1
  int *v16; // r3
  int v17; // r3
  int v18; // r0
  double v19; // d16
  int v20; // r6
  int v21; // r5
  const char *v22; // r3
  _DWORD v24[3]; // [sp+Ch] [bp-154h] BYREF
  int v25; // [sp+18h] [bp-148h] BYREF
  _DWORD v26[3]; // [sp+1Ch] [bp-144h] BYREF
  double v27; // [sp+28h] [bp-138h] BYREF
  int v28; // [sp+30h] [bp-130h]
  _BYTE v29[256]; // [sp+38h] [bp-128h] BYREF
  _DWORD v30[10]; // [sp+138h] [bp-28h] BYREF

  v5 = 0;
  if ( !a2 || !a3 )
    return v5;
  if ( !*a3 )
    return 0;
  v9 = *(_BYTE **)(a2 + 4);
  v10 = a5;
  if ( v9 && *v9 )
  {
    v12 = (1540483477 * ((1540483477 * (_DWORD)v9) ^ ((unsigned int)(1540483477 * (_DWORD)v9) >> 24))) ^ 0x6F47A654;
    v13 = (1540483477 * (v12 ^ (v12 >> 13))) ^ ((1540483477 * (v12 ^ (v12 >> 13))) >> 15);
  }
  else
  {
    v13 = 0;
  }
  if ( !a5 )
    v10 = sub_11BC30(a3);
  v30[1] = v10;
  v14 = *(_DWORD *)(a1 + 24);
  v30[0] = v13;
  if ( !v14 )
    goto LABEL_19;
  v15 = a1 + 24;
  do
  {
    v16 = (int *)v14;
    if ( *(_QWORD *)(v14 + 16) < __PAIR64__(v10, v13) )
      v16 = (int *)(v14 + 4);
    v17 = *v16;
    if ( *(_QWORD *)(v14 + 16) >= __PAIR64__(v10, v13) )
      v15 = v14;
    v14 = v17;
  }
  while ( v17 );
  if ( v15 == a1 + 24 || __PAIR64__(v10, v13) < *(_QWORD *)(v15 + 16) )
  {
LABEL_19:
    sub_1638C8(a2, v29, a3);
    v25 = sub_F97EC();
    std::__fs::filesystem::path::path<char const*,void>((int)v26);
    std::__fs::filesystem::path::path<char [256],void>((int)v24);
    sub_F1DD4((int)&v27, (int)v26, (int)v24);
    if ( *(unsigned __int8 *)(a1 + 8) << 31 )
      operator delete(*(void **)(a1 + 16));
    v18 = LOBYTE(v24[0]);
    v19 = v27;
    *(_DWORD *)(a1 + 16) = v28;
    *(double *)(a1 + 8) = v19;
    LOWORD(v27) = 0;
    if ( v18 << 31 )
      operator delete((void *)v24[2]);
    if ( LOBYTE(v26[0]) << 31 )
      operator delete((void *)v26[2]);
    v5 = 0;
    std::__fs::filesystem::__status((std::__fs::filesystem *)&v27, (const std::__fs::filesystem::path *)(a1 + 8), 0);
    if ( (unsigned int)LOBYTE(v27) - 1 >= 0xFE )
    {
      v26[0] = v30;
      sub_11C4C0(&v27, a1 + 20);
      *(_BYTE *)(LODWORD(v27) + 24) = 0;
      return v5;
    }
    v26[0] = v30;
    sub_11C4C0(&v27, a1 + 20);
    *(_BYTE *)(LODWORD(v27) + 24) = 1;
    goto LABEL_30;
  }
  if ( !*(_BYTE *)(v15 + 24) )
    return 0;
  sub_1638C8(a2, v29, a3);
LABEL_30:
  v20 = sub_11BC9C(v29);
  LODWORD(v27) = 0;
  v24[0] = 0;
  v25 = 0;
  v26[0] = 0;
  sub_11BCD0(v20, 4, &v27, v26, v24, &v25);
  v21 = sub_11BD24(LODWORD(v27), v26[0], v24[0], v25);
  sub_11BD68(v21, v20);
  if ( a4 )
  {
    sub_11BE10(*a4);
    *a4 = 0;
    sub_11BE48(a4, v21);
    v5 = (int)a4;
  }
  else
  {
    v5 = sub_11BDA0(v21);
    sub_11BDD8(v5, a3);
  }
  sub_11BE80(v20);
  v22 = *(const char **)(a1 + 16);
  if ( !(*(unsigned __int8 *)(a1 + 8) << 31) )
    v22 = (const char *)(a1 + 9);
  _android_log_print(3, "AXL", "modloader: load texture \"%s\" from %s", a3, v22);
  return v5;
}


// ======================================================================
