
// Address: 0x191090
// Original: j__ZN8CIniFile11LoadIniFileEv
// Demangled: CIniFile::LoadIniFile(void)
// attributes: thunk
int __fastcall CIniFile::LoadIniFile(CIniFile *this)
{
  return _ZN8CIniFile11LoadIniFileEv(this);
}


// ============================================================

// Address: 0x3f4d44
// Original: _ZN8CIniFile11LoadIniFileEv
// Demangled: CIniFile::LoadIniFile(void)
int __fastcall CIniFile::LoadIniFile(CIniFile *this, const char *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d8
  float32x2_t v4; // d9
  const char *v5; // r2
  CFileMgr *v6; // r0
  int v7; // r3
  CFileMgr *v8; // r4
  float32x2_t v9; // d0
  int v10; // r3
  unsigned int v11; // r1
  int result; // r0

  CFileMgr::SetDir((CFileMgr *)&byte_61CD7E, a2);
  v6 = (CFileMgr *)CFileMgr::OpenFile((CFileMgr *)"gta3.ini", "r", v5);
  v8 = v6;
  if ( v6 )
  {
    CFileMgr::ReadLine(v6, (unsigned int)&gString, (char *)&dword_C8, v7);
    sscanf((const char *)&gString, (const char *)&dword_3F4E0C, &CIniFile::PedNumberMultiplier);
    v3.n64_u32[0] = 0.5;
    v2.n64_u32[0] = CIniFile::PedNumberMultiplier;
    v4.n64_u32[0] = 3.0;
    v9.n64_u64[0] = vmin_f32(vmax_f32(v2, v3), v4).n64_u64[0];
    CIniFile::PedNumberMultiplier = v9.n64_u32[0];
    CFileMgr::ReadLine(v8, (unsigned int)&gString, (char *)&dword_C8, v10);
    sscanf((const char *)&gString, (const char *)&dword_3F4E0C, &CIniFile::CarNumberMultiplier);
    v9.n64_u32[0] = CIniFile::CarNumberMultiplier;
    CIniFile::CarNumberMultiplier = vmin_f32(vmax_f32(v9, v3), v4).n64_u32[0];
    CFileMgr::CloseFile(v8, v11);
  }
  CCarCtrl::MaxNumberOfCarsInUse = 12;
  result = 25;
  CPopulation::MaxNumberOfPedsInUse = 25;
  return result;
}


// ============================================================
