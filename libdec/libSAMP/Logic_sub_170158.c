// ADDR: 0x170010
// SYMBOL: sub_170010
int sub_170010()
{
  _DWORD *v0; // r0
  int v1; // r2
  float v2; // s6
  float *v3; // r3
  float v4; // s10
  float v5; // s4
  float v6; // s12
  char v8[24]; // [sp+0h] [bp-18h] BYREF

  v0 = (_DWORD *)dword_381B58;
  if ( *(_BYTE *)(dword_381B58 + 7449) )
  {
    v1 = dword_381B58 + 6696;
    v2 = *(float *)(dword_381B58 + 5560);
    v3 = (float *)(dword_381B58 + 6688);
    v4 = *(float *)(dword_381B58 + 224);
    v5 = *(float *)(dword_381B58 + 5648) * 0.6;
    v6 = *(float *)(dword_381B58 + 228) + (float)(v2 * 8.0);
    *(_DWORD *)(dword_381B58 + 6696) = 0;
    v0[1675] = 0;
    v0[1668] |= 0x41u;
    v0[1669] = 1;
    *(float *)(v1 + 52) = v5;
    v3[1] = v6;
    *v3 = v4 + (float)(v2 * 16.0);
    return sub_1700C4(0, 1);
  }
  else
  {
    sub_1655A8(v8, 16, "##Tooltip_%02d", *(_DWORD *)(dword_381B58 + 11472));
    return sub_16A980(v8, 0, 0x20C0347u);
  }
}


// ======================================================================
// ADDR: 0x17ad1c
// SYMBOL: sub_17AD1C
size_t __fastcall sub_17AD1C(const char *a1, void *a2)
{
  size_t result; // r0
  int v5; // r1
  int v6; // r4
  char *v7; // r4
  char *v8; // r1

  result = dword_381B58;
  v5 = *(_DWORD *)(dword_381B58 + 6572);
  v6 = *(unsigned __int8 *)(v5 + 127);
  *(_BYTE *)(v5 + 124) = 1;
  if ( !v6 )
  {
    v7 = (char *)(result + 12096);
    v8 = (char *)(result + 12096 + sub_1655E4((char *)(result + 12096), 3073, a1, a2));
    return sub_17A9F4(v7, v8, 1);
  }
  return result;
}


// ======================================================================
