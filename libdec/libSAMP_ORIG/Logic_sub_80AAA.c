// ADDR: 0x833e8
// SYMBOL: sub_833E8
bool sub_833E8()
{
  int v0; // r4
  int v1; // r0
  _DWORD v3[2]; // [sp+0h] [bp-20h] BYREF
  int v4; // [sp+8h] [bp-18h]

  v0 = 0;
  v3[0] = 0;
  v3[1] = 0;
  v4 = 0;
  while ( 1 )
  {
    v1 = off_1ABF2C(v0, v3);
    if ( !v1 || v4 << 31 && (v4 & 8) == 0 && v3[0] )
      break;
    ++v0;
  }
  return v1 != 0;
}


// ======================================================================
