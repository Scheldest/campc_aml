
// Address: 0x19498c
// Original: j__ZN11CHudColours7GetRGBAEh
// Demangled: CHudColours::GetRGBA(uchar)
// attributes: thunk
int __fastcall CHudColours::GetRGBA(CHudColours *this, unsigned __int8 a2)
{
  return _ZN11CHudColours7GetRGBAEh(this, a2);
}


// ============================================================

// Address: 0x19a390
// Original: j__ZN11CHudColours12GetIntColourEh
// Demangled: CHudColours::GetIntColour(uchar)
// attributes: thunk
int __fastcall CHudColours::GetIntColour(CHudColours *this, unsigned __int8 a2)
{
  return _ZN11CHudColours12GetIntColourEh(this, a2);
}


// ============================================================

// Address: 0x19e7a4
// Original: j__ZN11CHudColours6GetRGBEhh
// Demangled: CHudColours::GetRGB(uchar,uchar)
// attributes: thunk
int __fastcall CHudColours::GetRGB(CHudColours *this, unsigned __int8 a2, unsigned __int8 a3)
{
  return _ZN11CHudColours6GetRGBEhh(this, a2, a3);
}


// ============================================================

// Address: 0x43aa00
// Original: _ZN11CHudColoursC2Ev
// Demangled: CHudColours::CHudColours(void)
void __fastcall CHudColours::CHudColours(CHudColours *this)
{
  *(_QWORD *)this = 0xFF2C6836FF1D19B4LL;
  *((_QWORD *)this + 1) = 0xFFF1CBACFF7F3C32LL;
  *((_BYTE *)this + 16) = 100;
  *(_QWORD *)((char *)this + 37) = loc_43AAA0;
  *(_QWORD *)((char *)this + 45) = loc_43AAA8;
  *(_WORD *)((char *)this + 17) = -13156;
  *((_BYTE *)this + 23) = -1;
  *(_DWORD *)((char *)this + 19) = -1;
  *((_BYTE *)this + 24) = 0;
  *((_BYTE *)this + 27) = -1;
  *(_WORD *)((char *)this + 25) = 0;
  *((_BYTE *)this + 28) = -112;
  *((_BYTE *)this + 31) = -1;
  *(_WORD *)((char *)this + 29) = 4194;
  *((_BYTE *)this + 32) = -88;
  *((_BYTE *)this + 35) = -1;
  *(_WORD *)((char *)this + 33) = -914;
  *((_BYTE *)this + 36) = -106;
  *((_BYTE *)this + 55) = -1;
  *(_WORD *)((char *)this + 53) = 27482;
  *((_BYTE *)this + 59) = -1;
  *(_WORD *)((char *)this + 57) = -14311;
  *((_BYTE *)this + 56) = 20;
  *((_BYTE *)this + 63) = -1;
  *(_WORD *)((char *)this + 61) = 255;
  *((_BYTE *)this + 60) = -1;
}


// ============================================================

// Address: 0x43aab0
// Original: _ZN11CHudColours12SetRGBAValueEhhhhh
// Demangled: CHudColours::SetRGBAValue(uchar,uchar,uchar,uchar,uchar)
char *__fastcall CHudColours::SetRGBAValue(
        CHudColours *this,
        int a2,
        unsigned __int8 a3,
        char a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  char *result; // r0

  *((_BYTE *)this + 4 * a2) = a3;
  result = (char *)this + 4 * a2;
  result[1] = a4;
  result[2] = a5;
  result[3] = a6;
  return result;
}


// ============================================================

// Address: 0x43aacc
// Original: _ZN11CHudColours7GetRGBAEh
// Demangled: CHudColours::GetRGBA(uchar)
void __fastcall CHudColours::GetRGBA(CHudColours *this, int a2, int a3)
{
  CRGBA::CRGBA(
    this,
    *(_BYTE *)(a2 + 4 * a3),
    *(_BYTE *)(a2 + 4 * a3 + 1),
    *(_BYTE *)(a2 + 4 * a3 + 2),
    *(_BYTE *)(a2 + 4 * a3 + 3));
}


// ============================================================

// Address: 0x43aaec
// Original: _ZN11CHudColours12GetIntColourEh
// Demangled: CHudColours::GetIntColour(uchar)
int __fastcall CHudColours::GetIntColour(CHudColours *this, int a2)
{
  return ((*((unsigned __int8 *)this + 4 * a2 + 2) << 8) | 0xFF)
       + ((*((unsigned __int8 *)this + 4 * a2 + 1) << 16) | 0xFF)
       + ((*((unsigned __int8 *)this + 4 * a2) << 24) | 0xFF);
}


// ============================================================

// Address: 0x43ab0c
// Original: _ZN11CHudColours6GetRGBEhh
// Demangled: CHudColours::GetRGB(uchar,uchar)
void __fastcall CHudColours::GetRGB(CHudColours *this, int a2, int a3, unsigned __int8 a4)
{
  CRGBA::CRGBA(this, *(_BYTE *)(a2 + 4 * a3), *(_BYTE *)(a2 + 4 * a3 + 1), *(_BYTE *)(a2 + 4 * a3 + 2), a4);
}


// ============================================================

// Address: 0x43ab2e
// Original: _ZN11CHudColoursD2Ev
// Demangled: CHudColours::~CHudColours()
void __fastcall CHudColours::~CHudColours(CHudColours *this)
{
  ;
}


// ============================================================
