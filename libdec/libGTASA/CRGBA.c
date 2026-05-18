
// Address: 0x197e5c
// Original: j__ZN5CRGBAC2Ehhhh
// Demangled: CRGBA::CRGBA(uchar,uchar,uchar,uchar)
// attributes: thunk
void __fastcall CRGBA::CRGBA(
        CRGBA *this,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  _ZN5CRGBAC2Ehhhh(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x5a201c
// Original: _ZN5CRGBAC2Ehhhh
// Demangled: CRGBA::CRGBA(uchar,uchar,uchar,uchar)
void __fastcall CRGBA::CRGBA(
        CRGBA *this,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  *((_BYTE *)this + 1) = a3;
  *(_BYTE *)this = a2;
  *((_BYTE *)this + 2) = a4;
  *((_BYTE *)this + 3) = a5;
}


// ============================================================
