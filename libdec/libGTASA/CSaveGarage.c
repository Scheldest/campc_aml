
// Address: 0x48aec4
// Original: _ZN11CSaveGarage24CopyGarageIntoSaveGarageEP7CGarage
// Demangled: CSaveGarage::CopyGarageIntoSaveGarage(CGarage *)
int __fastcall CSaveGarage::CopyGarageIntoSaveGarage(CSaveGarage *this, CGarage *a2)
{
  int result; // r0

  *(_BYTE *)this = *((_BYTE *)a2 + 76);
  *((_BYTE *)this + 1) = *((_BYTE *)a2 + 77);
  *((_BYTE *)this + 2) = *((_BYTE *)a2 + 78);
  *((_DWORD *)this + 1) = *(_DWORD *)a2;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 15);
  strcpy((char *)this + 68, (const char *)a2 + 68);
  result = *((unsigned __int8 *)a2 + 79);
  *((_BYTE *)this + 76) = result;
  return result;
}


// ============================================================

// Address: 0x48af34
// Original: _ZN11CSaveGarage25CopyGarageOutOfSaveGarageEP7CGarage
// Demangled: CSaveGarage::CopyGarageOutOfSaveGarage(CGarage *)
int __fastcall CSaveGarage::CopyGarageOutOfSaveGarage(CSaveGarage *this, CGarage *a2)
{
  int result; // r0

  *((_BYTE *)a2 + 76) = *(_BYTE *)this;
  *((_BYTE *)a2 + 77) = *((_BYTE *)this + 1);
  *((_BYTE *)a2 + 78) = *((_BYTE *)this + 2);
  *(_DWORD *)a2 = *((_DWORD *)this + 1);
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 2);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 3);
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 4);
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 5);
  *((_DWORD *)a2 + 5) = *((_DWORD *)this + 6);
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 7);
  *((_DWORD *)a2 + 7) = *((_DWORD *)this + 8);
  *((_DWORD *)a2 + 8) = *((_DWORD *)this + 9);
  *((_DWORD *)a2 + 9) = *((_DWORD *)this + 10);
  *((_DWORD *)a2 + 10) = *((_DWORD *)this + 11);
  *((_DWORD *)a2 + 11) = *((_DWORD *)this + 12);
  *((_DWORD *)a2 + 12) = *((_DWORD *)this + 13);
  *((_DWORD *)a2 + 13) = *((_DWORD *)this + 14);
  *((_DWORD *)a2 + 14) = *((_DWORD *)this + 15);
  *(_QWORD *)((char *)a2 + 60) = *((unsigned int *)this + 16);
  strcpy((char *)a2 + 68, (const char *)this + 68);
  result = *((unsigned __int8 *)this + 76);
  *((_BYTE *)a2 + 79) = result;
  return result;
}


// ============================================================
