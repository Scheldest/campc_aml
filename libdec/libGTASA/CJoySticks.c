
// Address: 0x5e4d70
// Original: _ZN10CJoySticksC2Ev
// Demangled: CJoySticks::CJoySticks(void)
void __fastcall CJoySticks::CJoySticks(CJoySticks *this)
{
  *((_BYTE *)this + 6) = 0;
  *((_WORD *)this + 2) = 0;
  *(_DWORD *)this = 0;
  *((_BYTE *)this + 22) = 0;
  *((_WORD *)this + 10) = 0;
  *((_DWORD *)this + 4) = 0;
}


// ============================================================

// Address: 0x5e4d80
// Original: _ZN10CJoySticks12ClearJoyInfoEi
// Demangled: CJoySticks::ClearJoyInfo(int)
char *__fastcall CJoySticks::ClearJoyInfo(CJoySticks *this, int a2)
{
  char *result; // r0

  *((_DWORD *)this + 4 * a2) = 0;
  result = (char *)this + 16 * a2;
  result[6] = 0;
  *((_WORD *)result + 2) = 0;
  return result;
}


// ============================================================
