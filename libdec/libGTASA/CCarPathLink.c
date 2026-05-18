
// Address: 0x1a13f8
// Original: j__ZN12CCarPathLink16OneWayLaneOffsetEv
// Demangled: CCarPathLink::OneWayLaneOffset(void)
// attributes: thunk
int __fastcall CCarPathLink::OneWayLaneOffset(CCarPathLink *this)
{
  return _ZN12CCarPathLink16OneWayLaneOffsetEv(this);
}


// ============================================================

// Address: 0x319418
// Original: _ZN12CCarPathLink16OneWayLaneOffsetEv
// Demangled: CCarPathLink::OneWayLaneOffset(void)
float __fastcall CCarPathLink::OneWayLaneOffset(CCarPathLink *this)
{
  unsigned int v1; // r2
  bool v2; // zf
  int v3; // r2
  float v5; // s0
  int v6; // r0

  v1 = *(unsigned __int16 *)((char *)this + 11);
  v2 = (v1 & 7) == 0;
  v3 = (v1 >> 3) & 7;
  if ( v2 )
  {
    v5 = 0.5;
    v6 = (unsigned __int16)v3;
  }
  else
  {
    if ( v3 )
      return (float)((float)*((unsigned __int8 *)this + 10) / 86.4) + 0.5;
    v5 = 0.5;
    v6 = *(_WORD *)((_BYTE *)this + 11) & 7;
  }
  return v5 - (float)((float)(unsigned int)v6 * v5);
}


// ============================================================
