
// Address: 0x484a72
// Original: _ZN24CPlayerInfoSaveStructure9ConstructEP11CPlayerInfo
// Demangled: CPlayerInfoSaveStructure::Construct(CPlayerInfo *)
int __fastcall CPlayerInfoSaveStructure::Construct(int this, CPlayerInfo *a2)
{
  *(_DWORD *)this = *((_DWORD *)a2 + 46);
  *(_WORD *)(this + 4) = *((_WORD *)a2 + 152);
  *(_BYTE *)(this + 6) = *((_BYTE *)a2 + 220);
  *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 77);
  *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 47);
  *(_BYTE *)(this + 16) = *((_BYTE *)a2 + 324);
  *(_DWORD *)(this + 20) = *((_DWORD *)a2 + 48);
  *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 49);
  *(_BYTE *)(this + 28) = *((_BYTE *)a2 + 332);
  *(_BYTE *)(this + 29) = *((_BYTE *)a2 + 333);
  *(_BYTE *)(this + 30) = *((_BYTE *)a2 + 334);
  *(_BYTE *)(this + 31) = *((_BYTE *)a2 + 335);
  *(_BYTE *)(this + 32) = *((_BYTE *)a2 + 336);
  *(_BYTE *)(this + 33) = *((_BYTE *)a2 + 337);
  *(_BYTE *)(this + 34) = *((_BYTE *)a2 + 338);
  *(_BYTE *)(this + 35) = *((_BYTE *)a2 + 339);
  *(_BYTE *)(this + 36) = *((_BYTE *)a2 + 340);
  *(_WORD *)(this + 38) = *((_WORD *)a2 + 171);
  return this;
}


// ============================================================

// Address: 0x484aea
// Original: _ZN24CPlayerInfoSaveStructure7ExtractEP11CPlayerInfo
// Demangled: CPlayerInfoSaveStructure::Extract(CPlayerInfo *)
int __fastcall CPlayerInfoSaveStructure::Extract(CPlayerInfoSaveStructure *this, CPlayerInfo *a2)
{
  int result; // r0

  *((_DWORD *)a2 + 46) = *(_DWORD *)this;
  *((_WORD *)a2 + 152) = *((_WORD *)this + 2);
  *((_BYTE *)a2 + 220) = *((_BYTE *)this + 6);
  *((_WORD *)a2 + 152) = *((_WORD *)this + 2);
  *((_DWORD *)a2 + 77) = *((_DWORD *)this + 2);
  *((_DWORD *)a2 + 47) = *((_DWORD *)this + 3);
  *((_WORD *)a2 + 162) = *((unsigned __int8 *)this + 16);
  *((_DWORD *)a2 + 48) = *((_DWORD *)this + 5);
  *((_DWORD *)a2 + 49) = *((_DWORD *)this + 6);
  *((_BYTE *)a2 + 332) = *((_BYTE *)this + 28);
  *((_BYTE *)a2 + 333) = *((_BYTE *)this + 29);
  *((_BYTE *)a2 + 334) = *((_BYTE *)this + 30);
  *((_BYTE *)a2 + 335) = *((_BYTE *)this + 31);
  *((_BYTE *)a2 + 336) = *((_BYTE *)this + 32);
  *((_BYTE *)a2 + 337) = *((_BYTE *)this + 33);
  *((_BYTE *)a2 + 338) = *((_BYTE *)this + 34);
  *((_BYTE *)a2 + 339) = *((_BYTE *)this + 35);
  *((_BYTE *)a2 + 340) = *((_BYTE *)this + 36);
  result = *((unsigned __int16 *)this + 19);
  *((_WORD *)a2 + 171) = result;
  return result;
}


// ============================================================
