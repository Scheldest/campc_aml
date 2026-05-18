// ADDR: 0xf1538
// SYMBOL: sub_F1538
int __fastcall sub_F1538(
        int a1,
        int a2,
        int a3,
        float *a4,
        float *a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v12; // r3
  float v13; // s2
  float v14; // s6
  float v16[2]; // [sp+10h] [bp-28h] BYREF
  _DWORD v17[2]; // [sp+18h] [bp-20h] BYREF
  _DWORD v18[6]; // [sp+20h] [bp-18h] BYREF

  v18[0] = a8;
  v18[1] = a9;
  v12 = -1;
  v17[0] = a10;
  v17[1] = a11;
  if ( a6 < a7 && __PAIR64__(a7, a6) )
    v12 = ((unsigned int)(255.0 / (double)a7 * (double)a6) << 24) | 0xFFFFFF;
  v13 = a5[1];
  v14 = a4[1];
  v16[0] = *a4 + *a5;
  v16[1] = v14 + v13;
  return ((int (__fastcall *)(int, int, float *, float *, _DWORD *, _DWORD *, unsigned int))sub_174BE2)(
           a2,
           a3,
           a4,
           v16,
           v18,
           v17,
           v12);
}


// ======================================================================
// ADDR: 0x167f88
// SYMBOL: sub_167F88
int sub_167F88()
{
  return dword_381B58 + 7204;
}


// ======================================================================
