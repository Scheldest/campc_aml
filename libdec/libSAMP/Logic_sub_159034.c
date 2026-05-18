// ADDR: 0x1590e0
// SYMBOL: sub_1590E0
int __fastcall sub_1590E0(int result, float a2)
{
  int v3; // r4
  float v4[8]; // [sp+0h] [bp-20h] BYREF

  v3 = result;
  if ( *(float *)(result + 20) != a2 )
  {
    result = *(_DWORD *)(result + 40);
    if ( result || (result = sub_164CB4(**(_DWORD **)(v3 + 36), 9), (*(_DWORD *)(v3 + 40) = result) != 0) )
    {
      v4[0] = a2;
      v4[2] = 0.0;
      v4[3] = 0.0;
      v4[1] = -1.0;
      result = sub_164CDC(result, v4);
    }
  }
  *(float *)(v3 + 20) = a2;
  return result;
}


// ======================================================================
// ADDR: 0x164b44
// SYMBOL: sub_164B44
int sub_164B44()
{
  if ( off_381B08 )
    return off_381B08();
  else
    return 0;
}


// ======================================================================
// ADDR: 0x164b6c
// SYMBOL: sub_164B6C
int sub_164B6C()
{
  if ( off_381B10 )
    return off_381B10();
  else
    return 0;
}


// ======================================================================
