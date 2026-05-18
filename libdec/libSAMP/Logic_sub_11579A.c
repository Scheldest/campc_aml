// ADDR: 0x115054
// SYMBOL: sub_115054
int __fastcall sub_115054(int a1, float *a2)
{
  int v4; // r0
  float v5; // s2
  float v6; // s4
  float v7; // s0
  float v8; // s8
  float v9; // s4

  v4 = (unsigned __int8)byte_263470;
  __dmb(0xBu);
  if ( !(v4 << 31) && j___cxa_guard_acquire((__guard *)&byte_263470) )
  {
    dword_26346C = dword_23DF24 + 7209176;
    j___cxa_guard_release((__guard *)&byte_263470);
  }
  v5 = a2[1];
  v6 = *a2;
  v7 = sqrtf((float)(v5 * v5) + (float)(v6 * v6));
  if ( *(_BYTE *)(a1 + 85) )
  {
    if ( !*(_BYTE *)dword_26346C )
    {
      if ( v7 > 1.4142 )
      {
        v5 = v5 / (float)(v7 * 0.7071);
        v6 = v6 / (float)(v7 * 0.7071);
        *a2 = v6;
        a2[1] = v5;
      }
      if ( v6 <= 1.0 )
      {
        if ( v6 < -1.0 )
          *a2 = -1.0;
      }
      else
      {
        *a2 = 1.0;
      }
      v9 = 1.0;
      if ( v5 > 1.0 )
        goto LABEL_14;
      if ( v5 < -1.0 )
        a2[1] = -1.0;
    }
  }
  else if ( !*(_BYTE *)dword_26346C && v7 > 1.0 )
  {
    v8 = v6 * (float)(1.0 / v7);
    v9 = v5 * (float)(1.0 / v7);
    *a2 = v8;
LABEL_14:
    a2[1] = v9;
  }
  return LODWORD(v7);
}


// ======================================================================
