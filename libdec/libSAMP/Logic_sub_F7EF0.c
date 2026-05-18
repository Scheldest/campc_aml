// ADDR: 0xf9748
// SYMBOL: sub_F9748
bool __fastcall sub_F9748(int a1, int a2)
{
  int v2; // r0
  int v4; // [sp+4h] [bp-Ch] BYREF

  v4 = a2;
  v2 = sub_F9E90(a2);
  if ( v2 )
    return *(_BYTE *)(v2 + 16) != 0;
  sub_DC970(2, (int)"Animation block \"{}\" is missed on mobile client!", 48, &v4);
  return 0;
}


// ======================================================================
// ADDR: 0xf9ec8
// SYMBOL: sub_F9EC8
int __fastcall sub_F9EC8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  return sub_107188(&unk_B2CC8, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}


// ======================================================================
