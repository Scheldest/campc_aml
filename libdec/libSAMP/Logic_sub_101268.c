// ADDR: 0xfe2b4
// SYMBOL: sub_FE2B4
_DWORD *__fastcall sub_FE2B4(_DWORD *a1)
{
  _DWORD *v3; // [sp+0h] [bp-18h] BYREF
  _DWORD v4[2]; // [sp+4h] [bp-14h] BYREF
  _BYTE v5[12]; // [sp+Ch] [bp-Ch] BYREF

  a1[2] = a1 + 1;
  a1[3] = 0;
  *a1 = 0;
  a1[1] = a1 + 1;
  v4[1] = 0;
  v3 = a1;
  v4[0] = sub_1008AC;
  ((void (__fastcall *)(_BYTE *, _DWORD *, _DWORD **))sub_100934)(v5, v4, &v3);
  std::thread::detach((std::thread *)v5);
  std::thread::~thread((std::thread *)v5);
  return a1;
}


// ======================================================================
// ADDR: 0x1236b4
// SYMBOL: sub_1236B4
int __fastcall sub_1236B4(int a1)
{
  int v2; // r0

  v2 = dword_23DF24;
  if ( !dword_23DF24 )
  {
    v2 = sub_163FF8("libGTASA.so");
    dword_23DF24 = v2;
  }
  sub_164222(v2 + 6739836);
  sub_164222(dword_23DF24 + 6741048);
  sub_164222(dword_23DF24 + 6741344);
  sub_164222(dword_23DF24 + 6741640);
  sub_164222(dword_23DF24 + 6741936);
  return a1;
}


// ======================================================================
// ADDR: 0x128338
// SYMBOL: sub_128338
int __fastcall sub_128338(int a1)
{
  int v2; // r0

  v2 = dword_23DF24;
  if ( !dword_23DF24 )
  {
    v2 = sub_163FF8("libGTASA.so");
    dword_23DF24 = v2;
  }
  sub_164222(v2 + 6741764);
  return a1;
}


// ======================================================================
