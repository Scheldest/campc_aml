// ADDR: 0x14f3d8
// SYMBOL: sub_14F3D8
bool __fastcall sub_14F3D8(int a1, unsigned int a2)
{
  unsigned __int16 *v3; // r0
  unsigned __int16 *v4; // r2
  __int64 v5; // kr00_8

  if ( a2 > 0x900 )
    return 0;
  v5 = *(_QWORD *)(a1 + 9216);
  v3 = *(unsigned __int16 **)(a1 + 9220);
  v4 = (unsigned __int16 *)v5;
  if ( (unsigned __int16 *)v5 != v3 )
  {
    while ( *v4 != a2 )
    {
      if ( ++v4 == v3 )
      {
        v4 = v3;
        return v4 != v3;
      }
    }
  }
  return v4 != v3;
}


// ======================================================================
