
// Address: 0x4848f8
// Original: _ZN21CVehicleSaveStructure9ConstructEP8CVehicle
// Demangled: CVehicleSaveStructure::Construct(CVehicle *)
int __fastcall CVehicleSaveStructure::Construct(CVehicleSaveStructure *this, CVehicle *a2)
{
  int v4; // r0
  int result; // r0

  CMatrix::operator=();
  *((_BYTE *)this + 73) = *((_BYTE *)a2 + 1080);
  *((_BYTE *)this + 74) = *((_BYTE *)a2 + 1081);
  *((_BYTE *)this + 75) = *((_BYTE *)a2 + 1082);
  *((_BYTE *)this + 76) = *((_BYTE *)a2 + 1083);
  *((_WORD *)this + 39) = *((_WORD *)a2 + 560);
  *((_BYTE *)this + 80) = *((_BYTE *)a2 + 1164);
  *((_DWORD *)this + 21) = *((_DWORD *)a2 + 294);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 296);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 297);
  v4 = *((_DWORD *)a2 + 267);
  *((_DWORD *)this + 25) = *((_DWORD *)a2 + 268);
  *((_DWORD *)this + 24) = v4;
  *((_BYTE *)this + 72) = *((_BYTE *)a2 + 1192);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 307);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 322);
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 29) = *((_DWORD *)a2 + 36);
  *((_DWORD *)this + 30) = *((_DWORD *)a2 + 37);
  result = *((_DWORD *)a2 + 41);
  *((_DWORD *)this + 31) = result;
  return result;
}


// ============================================================

// Address: 0x484980
// Original: _ZN21CVehicleSaveStructure7ExtractEP8CVehicle
// Demangled: CVehicleSaveStructure::Extract(CVehicle *)
int __fastcall CVehicleSaveStructure::Extract(CVehicleSaveStructure *this, CVehicle *a2)
{
  int v4; // r0
  int result; // r0

  CPlaceable::SetMatrix(a2, this);
  *((_BYTE *)a2 + 1080) = *((_BYTE *)this + 73);
  *((_BYTE *)a2 + 1081) = *((_BYTE *)this + 74);
  *((_BYTE *)a2 + 1082) = *((_BYTE *)this + 75);
  *((_BYTE *)a2 + 1083) = *((_BYTE *)this + 76);
  *((_WORD *)a2 + 560) = *((_WORD *)this + 39);
  *((_BYTE *)a2 + 1164) = *((_BYTE *)this + 80);
  *((_DWORD *)a2 + 294) = *((_DWORD *)this + 21);
  *((_DWORD *)a2 + 296) = *((_DWORD *)this + 22);
  *((_DWORD *)a2 + 297) = *((_DWORD *)this + 23);
  v4 = *((_DWORD *)this + 24);
  *((_DWORD *)a2 + 268) = *((_DWORD *)this + 25);
  *((_DWORD *)a2 + 267) = v4;
  CVehicle::SetVehicleCreatedBy(a2, *((unsigned __int8 *)this + 72), 1);
  *((_DWORD *)a2 + 307) = *((_DWORD *)this + 26);
  *((_DWORD *)a2 + 322) = *((_DWORD *)this + 27);
  *((_DWORD *)a2 + 17) = *((_DWORD *)this + 28);
  *((_DWORD *)a2 + 36) = *((_DWORD *)this + 29);
  *((_DWORD *)a2 + 37) = *((_DWORD *)this + 30);
  result = *((_DWORD *)this + 31);
  *((_DWORD *)a2 + 41) = result;
  return result;
}


// ============================================================
