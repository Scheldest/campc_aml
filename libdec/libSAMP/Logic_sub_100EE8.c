// ADDR: 0xf8224
// SYMBOL: sub_F8224
int __fastcall sub_F8224(int a1)
{
  return byte_242A78[a1];
}


// ======================================================================
// ADDR: 0xf8230
// SYMBOL: sub_F8230
int __fastcall sub_F8230(int a1)
{
  return sub_2242EC(dword_2402CC, (char *)&unk_240318 + 48 * a1, 48);
}


// ======================================================================
// ADDR: 0xf8268
// SYMBOL: sub_F8268
int sub_F8268()
{
  return sub_2242EC(dword_2402CC, &unk_2402E8, 48);
}


// ======================================================================
// ADDR: 0xf8280
// SYMBOL: sub_F8280
int sub_F8280()
{
  return sub_2242EC(&unk_2402E8, dword_2402CC, 48);
}


// ======================================================================
// ADDR: 0xf8298
// SYMBOL: sub_F8298
int sub_F8298()
{
  _DWORD *v0; // r1
  int result; // r0

  v0 = (_DWORD *)dword_2402D8;
  *(_DWORD *)dword_2402D4 = dword_2431DC;
  result = dword_2431E0;
  *v0 = dword_2431E0;
  return result;
}


// ======================================================================
// ADDR: 0xf82c8
// SYMBOL: sub_F82C8
int sub_F82C8()
{
  int result; // r0

  dword_2431DC = *(_DWORD *)dword_2402D4;
  result = *(_DWORD *)dword_2402D8;
  dword_2431E0 = *(_DWORD *)dword_2402D8;
  return result;
}


// ======================================================================
// ADDR: 0xf82f8
// SYMBOL: sub_F82F8
int __fastcall sub_F82F8(int a1)
{
  float v1; // s0
  int result; // r0

  *(float *)dword_2402D4 = (float)(*(float *)&dword_242B4C[a1] * 35.0) + 35.0;
  v1 = *(float *)&dword_242E94[a1] + 1.0;
  result = dword_2402D8;
  *(float *)dword_2402D8 = v1;
  return result;
}


// ======================================================================
