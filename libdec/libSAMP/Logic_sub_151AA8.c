// ADDR: 0x15defa
// SYMBOL: sub_15DEFA
int __fastcall sub_15DEFA(int a1)
{
  return sub_164BF8(*(_DWORD *)(a1 + 8));
}


// ======================================================================
// ADDR: 0x15df60
// SYMBOL: sub_15DF60
bool __fastcall sub_15DF60(int a1)
{
  __int64 v2; // r0

  v2 = sub_164BA8(*(_DWORD *)(a1 + 8));
  return sub_164C84(*(_DWORD *)(a1 + 8), HIDWORD(v2), v2, HIDWORD(v2), 0) != 0;
}


// ======================================================================
