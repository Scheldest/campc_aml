// ADDR: 0x11a0c8
// SYMBOL: sub_11A0C8
void __fastcall sub_11A0C8(int a1, int a2, int a3, int a4)
{
  unsigned int v6; // r0
  _WORD *v7; // r9
  unsigned int v8; // r1
  int v9; // r6
  _DWORD *v10; // r0
  unsigned int v11; // r8
  int v12; // r0
  double v13; // d16
  unsigned int v14; // r0
  int v15; // r1
  unsigned int v16; // r2
  int v17; // r0
  double v18; // d16
  int v19; // r0
  double v20; // d16
  unsigned int v21; // r0
  int v22; // r1
  unsigned int v23; // r2
  int v24; // r0
  double v25; // d16
  unsigned int v26; // r5
  unsigned __int8 *v27; // r5
  double v28; // d16
  void *v29[3]; // [sp+4h] [bp-64h] BYREF
  double v30; // [sp+10h] [bp-58h] BYREF
  void *v31; // [sp+18h] [bp-50h]
  double v32; // [sp+20h] [bp-48h] BYREF
  void *v33; // [sp+28h] [bp-40h]
  double v34; // [sp+30h] [bp-38h] BYREF
  void *v35; // [sp+38h] [bp-30h]
  double v36; // [sp+40h] [bp-28h]
  void *v37; // [sp+48h] [bp-20h]

  (*(void (__fastcall **)(int, int, int))(a1 + 4))(a2, a3, a4);
  v7 = (_WORD *)(a1 + 52);
  v6 = *(unsigned __int8 *)(a1 + 52);
  v8 = *(_DWORD *)(a1 + 56);
  if ( !(v6 << 31) )
    v8 = v6 >> 1;
  if ( v8 )
  {
    v9 = *(_DWORD *)(dword_23DF24 + 6782424);
    v10 = sub_DC6DC(v29, "modloader");
    v11 = (3435973837u * (unsigned __int64)(unsigned int)(a2 - v9)) >> 32;
    v12 = std::string::append((int)v10, "\\");
    v13 = *(double *)v12;
    v31 = *(void **)(v12 + 8);
    v30 = v13;
    *(_DWORD *)v12 = 0;
    *(_DWORD *)(v12 + 4) = 0;
    *(_DWORD *)(v12 + 8) = 0;
    v14 = *(unsigned __int8 *)(a1 + 40);
    v15 = *(_DWORD *)(a1 + 48);
    v16 = *(_DWORD *)(a1 + 44);
    if ( (v14 & 1) == 0 )
    {
      v15 = a1 + 41;
      v16 = v14 >> 1;
    }
    v17 = std::string::append(&v30, v15, v16, v14 & 1);
    v18 = *(double *)v17;
    v33 = *(void **)(v17 + 8);
    v32 = v18;
    *(_DWORD *)v17 = 0;
    *(_DWORD *)(v17 + 4) = 0;
    *(_DWORD *)(v17 + 8) = 0;
    v19 = std::string::append((int)&v32, "\\");
    v20 = *(double *)v19;
    v35 = *(void **)(v19 + 8);
    v34 = v20;
    *(_DWORD *)v19 = 0;
    *(_DWORD *)(v19 + 4) = 0;
    *(_DWORD *)(v19 + 8) = 0;
    v21 = *(unsigned __int8 *)(a1 + 52);
    v22 = *(_DWORD *)(a1 + 60);
    v23 = *(_DWORD *)(a1 + 56);
    if ( (v21 & 1) == 0 )
    {
      v22 = a1 + 53;
      v23 = v21 >> 1;
    }
    v24 = std::string::append(&v34, v22, v23, v21 & 1);
    v25 = *(double *)v24;
    v37 = *(void **)(v24 + 8);
    v36 = v25;
    *(_DWORD *)v24 = 0;
    *(_DWORD *)(v24 + 4) = 0;
    *(_DWORD *)(v24 + 8) = 0;
    if ( LOBYTE(v34) << 31 )
      operator delete(v35);
    if ( LOBYTE(v32) << 31 )
      operator delete(v33);
    if ( LOBYTE(v30) << 31 )
      operator delete(v31);
    if ( LOBYTE(v29[0]) << 31 )
      operator delete(v29[2]);
    sub_11A2E0(&v34);
    std::__fs::filesystem::__status((std::__fs::filesystem *)&v32, (const std::__fs::filesystem::path *)&v34, 0);
    v26 = LOBYTE(v32) - 1;
    if ( LOBYTE(v34) << 31 )
      operator delete(v35);
    if ( v26 <= 0xFD )
    {
      v27 = (unsigned __int8 *)(*(_DWORD *)(a1 + 64) + 12 * (v11 >> 4));
      if ( *v27 << 31 )
        operator delete(*((void **)v27 + 2));
      v28 = v36;
      *((_DWORD *)v27 + 2) = v37;
      *(double *)v27 = v28;
      LOWORD(v36) = 0;
    }
    if ( *(unsigned __int8 *)v7 << 31 )
    {
      **(_BYTE **)(a1 + 60) = 0;
      *(_DWORD *)(a1 + 56) = 0;
    }
    else
    {
      *v7 = 0;
    }
    if ( LOBYTE(v36) << 31 )
      operator delete(v37);
  }
}


// ======================================================================
