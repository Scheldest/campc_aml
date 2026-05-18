// ADDR: 0x15920a
// SYMBOL: sub_15920A
int __fastcall sub_15920A(int a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r0
  _BYTE v5[12]; // [sp+0h] [bp-20h] BYREF
  int v6[5]; // [sp+Ch] [bp-14h] BYREF

  result = sub_164B30(0, v5);
  if ( result )
  {
    v3 = 1;
    do
    {
      v4 = *(_DWORD *)(a1 + 16);
      v6[0] = v3 - 1;
      if ( !v4 )
        sub_DC92C();
      result = (*(int (__fastcall **)(int, int *, _BYTE *))(*(_DWORD *)v4 + 24))(v4, v6, v5);
      if ( !result )
        break;
      result = sub_164B30(v3++, v5);
    }
    while ( result );
  }
  return result;
}


// ======================================================================
