
// Address: 0x484a0e
// Original: _ZN27CPlayerPedDataSaveStructure9ConstructEP14CPlayerPedData
// Demangled: CPlayerPedDataSaveStructure::Construct(CPlayerPedData *)
int __fastcall CPlayerPedDataSaveStructure::Construct(CPlayerPedDataSaveStructure *this, const void **a2)
{
  int result; // r0

  *(_DWORD *)this = *(_DWORD *)*a2;
  *((_BYTE *)this + 4) = *((_DWORD *)*a2 + 11);
  memcpy_0((char *)this + 8, a2[1], 0x78u);
  *((_BYTE *)this + 128) = *((_BYTE *)a2 + 32);
  result = *((_DWORD *)*a2 + 5);
  *((_DWORD *)this + 33) = result;
  return result;
}


// ============================================================

// Address: 0x484a40
// Original: _ZN27CPlayerPedDataSaveStructure7ExtractEP14CPlayerPedData
// Demangled: CPlayerPedDataSaveStructure::Extract(CPlayerPedData *)
_DWORD *__fastcall CPlayerPedDataSaveStructure::Extract(CPlayerPedDataSaveStructure *this, void **a2)
{
  _DWORD *result; // r0

  *(_DWORD *)*a2 = *(_DWORD *)this;
  *((_DWORD *)*a2 + 11) = *((unsigned __int8 *)this + 4);
  memcpy_0(a2[1], (char *)this + 8, 0x78u);
  result = *a2;
  *((_BYTE *)a2 + 32) = *((_BYTE *)this + 128);
  result[5] = *((_DWORD *)this + 33);
  return result;
}


// ============================================================
