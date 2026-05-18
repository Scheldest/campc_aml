
// Address: 0x38642c
// Original: _ZN14CTimeModelInfoD0Ev
// Demangled: CTimeModelInfo::~CTimeModelInfo()
// attributes: thunk
void __fastcall CTimeModelInfo::~CTimeModelInfo(CTimeModelInfo *this)
{
  operator delete(this);
}


// ============================================================

// Address: 0x386430
// Original: _ZN14CTimeModelInfo12GetModelTypeEv
// Demangled: CTimeModelInfo::GetModelType(void)
int __fastcall CTimeModelInfo::GetModelType(CTimeModelInfo *this)
{
  return 3;
}


// ============================================================

// Address: 0x386434
// Original: _ZN14CTimeModelInfo11GetTimeInfoEv
// Demangled: CTimeModelInfo::GetTimeInfo(void)
char *__fastcall CTimeModelInfo::GetTimeInfo(CTimeModelInfo *this)
{
  return (char *)this + 56;
}


// ============================================================
