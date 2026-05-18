// ADDR: 0x21d7d4
// SYMBOL: sub_21D7D4
bool __fastcall sub_21D7D4(int a1, const char *a2, char *a3, int a4)
{
  int v4; // r0
  const char *v6; // [sp+0h] [bp-18h] BYREF
  char *v7; // [sp+4h] [bp-14h]
  __int64 v8; // [sp+8h] [bp-10h] BYREF

  v6 = a2;
  v7 = a3;
  LODWORD(v8) = a4;
  v4 = *(_DWORD *)(a1 + 8);
  if ( *(_BYTE *)(v4 + 4) != 7 )
    return 0;
  v8 = *(_QWORD *)(v4 + 8);
  v6 = "objc_object";
  v7 = "";
  return sub_21B154(&v8, (int)&v6);
}


// ======================================================================
