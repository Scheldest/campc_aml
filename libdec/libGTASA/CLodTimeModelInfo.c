
// Address: 0x386438
// Original: _ZN17CLodTimeModelInfoD0Ev
// Demangled: CLodTimeModelInfo::~CLodTimeModelInfo()
// attributes: thunk
void __fastcall CLodTimeModelInfo::~CLodTimeModelInfo(CLodTimeModelInfo *this)
{
  operator delete(this);
}


// ============================================================

// Address: 0x38643c
// Original: _ZN17CLodTimeModelInfo12GetModelTypeEv
// Demangled: CLodTimeModelInfo::GetModelType(void)
int __fastcall CLodTimeModelInfo::GetModelType(CLodTimeModelInfo *this)
{
  return 3;
}


// ============================================================

// Address: 0x386440
// Original: _ZN17CLodTimeModelInfo11GetTimeInfoEv
// Demangled: CLodTimeModelInfo::GetTimeInfo(void)
char *__fastcall CLodTimeModelInfo::GetTimeInfo(CLodTimeModelInfo *this)
{
  return (char *)this + 60;
}


// ============================================================
