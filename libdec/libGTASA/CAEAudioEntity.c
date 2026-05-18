
// Address: 0x391cd8
// Original: _ZN14CAEAudioEntity16UpdateParametersEP8CAESounds
// Demangled: CAEAudioEntity::UpdateParameters(CAESound *,short)
void __fastcall CAEAudioEntity::UpdateParameters(CAEAudioEntity *this, CAESound *a2, __int16 a3)
{
  ;
}


// ============================================================

// Address: 0x5cead8
// Original: _ZN14CAEAudioEntityD2Ev
// Demangled: CAEAudioEntity::~CAEAudioEntity()
void __fastcall CAEAudioEntity::~CAEAudioEntity(CEntity **this)
{
  *this = (CEntity *)&off_6677A8;
  CAESound::~CAESound(this + 2);
}


// ============================================================
