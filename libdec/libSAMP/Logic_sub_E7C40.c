// ADDR: 0xeb024
// SYMBOL: sub_EB024
int __fastcall sub_EB024(int a1, _DWORD *a2)
{
  __int64 v4; // r0

  HIDWORD(v4) = a2[1];
  LODWORD(v4) = &off_22A820;
  *(_QWORD *)a1 = v4;
  std::runtime_error::runtime_error((std::runtime_error *)(a1 + 8), (const std::runtime_error *)(a2 + 2));
  *(_DWORD *)(a1 + 16) = a2[4];
  *(_DWORD *)a1 = &off_22A8A0;
  return a1;
}


// ======================================================================
