
// Address: 0x18cd5c
// Original: j__ZN20CAEStreamTransformer10InitialiseEv
// Demangled: CAEStreamTransformer::Initialise(void)
// attributes: thunk
int __fastcall CAEStreamTransformer::Initialise(CAEStreamTransformer *this)
{
  return _ZN20CAEStreamTransformer10InitialiseEv(this);
}


// ============================================================

// Address: 0x1a1550
// Original: j__ZN20CAEStreamTransformer15TransformBufferEPvmm
// Demangled: CAEStreamTransformer::TransformBuffer(void *,ulong,ulong)
// attributes: thunk
int __fastcall CAEStreamTransformer::TransformBuffer(
        CAEStreamTransformer *this,
        void *a2,
        unsigned int a3,
        unsigned int a4)
{
  return _ZN20CAEStreamTransformer15TransformBufferEPvmm(this, a2, a3, a4);
}


// ============================================================

// Address: 0x3aa730
// Original: _ZN20CAEStreamTransformer10InitialiseEv
// Demangled: CAEStreamTransformer::Initialise(void)
_QWORD *__fastcall CAEStreamTransformer::Initialise(_QWORD *this)
{
  *this = 0xF314A89AA1C43AEALL;
  this[1] = 0xF1FFE89D23D7B048LL;
  return this;
}


// ============================================================

// Address: 0x3aa750
// Original: _ZN20CAEStreamTransformer15TransformBufferEPvmm
// Demangled: CAEStreamTransformer::TransformBuffer(void *,ulong,ulong)
int __fastcall CAEStreamTransformer::TransformBuffer(int this, char *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // lr

  for ( ; a3; ++a2 )
  {
    v4 = a4 & 0xF;
    --a3;
    ++a4;
    *a2 ^= *(_BYTE *)(this + v4);
  }
  return this;
}


// ============================================================
