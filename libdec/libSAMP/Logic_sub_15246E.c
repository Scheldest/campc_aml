// ADDR: 0x15e2e2
// SYMBOL: sub_15E2E2
int __fastcall sub_15E2E2(_DWORD *a1, int a2)
{
  return j_opus_encoder_ctl(*a1, 4016, a2);
}


// ======================================================================
// ADDR: 0x15e2ee
// SYMBOL: sub_15E2EE
int __fastcall sub_15E2EE(_DWORD *a1, int a2)
{
  return j_opus_encoder_ctl(*a1, 4006, a2);
}


// ======================================================================
// ADDR: 0x15e2fa
// SYMBOL: sub_15E2FA
int __fastcall sub_15E2FA(_DWORD *a1, int a2)
{
  int result; // r0

  result = j_opus_encoder_ctl(*a1, 4002, a2);
  a1[2] = a2;
  return result;
}


// ======================================================================
// ADDR: 0x15e312
// SYMBOL: sub_15E312
int __fastcall sub_15E312(_DWORD *a1, int a2)
{
  return j_opus_encoder_ctl(*a1, 4010, a2);
}


// ======================================================================
