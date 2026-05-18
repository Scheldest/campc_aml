
// Address: 0x3e2c84
// Original: _ZN16CHeliCamSettings13RandomiseABitEv
// Demangled: CHeliCamSettings::RandomiseABit(void)
int __fastcall CHeliCamSettings::RandomiseABit(CHeliCamSettings *this)
{
  int result; // r0

  *((float *)this + 6) = *((float *)this + 6) * (float)((float)((float)((float)rand() * 4.6566e-10) * 1.4) + 0.1);
  *((float *)this + 7) = *((float *)this + 7) * (float)((float)((float)((float)rand() * 4.6566e-10) * 0.5) + 0.5);
  *((float *)this + 8) = *((float *)this + 8) * (float)((float)((float)((float)rand() * 4.6566e-10) * 0.5) + 0.5);
  *((float *)this + 9) = *((float *)this + 9) * (float)((float)((float)((float)rand() * 4.6566e-10) * 0.5) + 0.5);
  result = rand();
  *((float *)this + 10) = *((float *)this + 10) * (float)((float)((float)((float)result * 4.6566e-10) * 1.5) + 0.5);
  return result;
}


// ============================================================

// Address: 0x3e2d68
// Original: _ZN16CHeliCamSettings5ResetEv
// Demangled: CHeliCamSettings::Reset(void)
int __fastcall CHeliCamSettings::Reset(int this)
{
  int v1; // r1
  float v2; // s0
  int v3; // r3

  v1 = *(_DWORD *)(this + 72);
  v2 = *(float *)(this + 44) - *(float *)(this + 48);
  v3 = *(_DWORD *)(this + 96);
  *(_BYTE *)(this + 92) = 0;
  *(_BYTE *)(this + 64) = 0;
  *(_BYTE *)(this + 128) = 0;
  *(_BYTE *)(this + 129) = 0;
  *(_BYTE *)(this + 136) = 0;
  *(_DWORD *)(this + 100) = v3;
  *(_DWORD *)(this + 68) = v1;
  *(float *)(this + 124) = v2;
  return this;
}


// ============================================================

// Address: 0x3e2da0
// Original: _ZN16CHeliCamSettings10SetDefaultEv
// Demangled: CHeliCamSettings::SetDefault(void)
int __fastcall CHeliCamSettings::SetDefault(int this)
{
  *(_DWORD *)(this + 56) = 0;
  *(_DWORD *)(this + 60) = 1092616192;
  *(_DWORD *)(this + 72) = 30;
  *(_DWORD *)(this + 88) = 8;
  *(_DWORD *)(this + 148) = 1061158912;
  *(_DWORD *)(this + 152) = 4000;
  *(_BYTE *)(this + 64) = 0;
  *(_BYTE *)(this + 92) = 0;
  *(_BYTE *)(this + 128) = 0;
  *(_BYTE *)(this + 129) = 0;
  *(_QWORD *)(this + 40) = 0x428C00003D4CCCCDLL;
  *(_QWORD *)(this + 48) = 0x3F80000041B00000LL;
  *(_QWORD *)(this + 24) = 0x41F0000042480000LL;
  *(_QWORD *)(this + 32) = 0x42480000425C0000LL;
  *(_DWORD *)(this + 68) = 30;
  *(_DWORD *)(this + 96) = 60;
  *(_DWORD *)(this + 100) = 60;
  *(_DWORD *)(this + 104) = 1120403456;
  *(_DWORD *)(this + 108) = 1121714176;
  *(_DWORD *)(this + 112) = 1092616192;
  *(_DWORD *)(this + 116) = 1084227584;
  *(_DWORD *)(this + 120) = 1094713344;
  *(_DWORD *)(this + 124) = 1111490560;
  *(_BYTE *)(this + 136) = 0;
  return this;
}


// ============================================================
