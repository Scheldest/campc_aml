
// Address: 0x1929bc
// Original: j__ZN15FxFrustumInfo_c11IsCollisionEP10FxSphere_c
// Demangled: FxFrustumInfo_c::IsCollision(FxSphere_c *)
// attributes: thunk
int __fastcall FxFrustumInfo_c::IsCollision(FxFrustumInfo_c *this, FxSphere_c *a2)
{
  return _ZN15FxFrustumInfo_c11IsCollisionEP10FxSphere_c(this, a2);
}


// ============================================================

// Address: 0x36ddce
// Original: _ZN15FxFrustumInfo_c11IsCollisionEP10FxSphere_c
// Demangled: FxFrustumInfo_c::IsCollision(FxSphere_c *)
int __fastcall FxFrustumInfo_c::IsCollision(FxFrustumInfo_c *this, FxSphere_c *a2)
{
  float v2; // s2
  float v3; // s6
  float v4; // s4
  float v5; // s0
  int v6; // r12
  int v7; // r2

  v2 = *(float *)a2;
  v3 = *((float *)a2 + 1);
  v4 = *((float *)a2 + 2);
  v5 = *((float *)a2 + 3);
  if ( (float)((float)((float)((float)(*(float *)a2 - *(float *)this) * (float)(*(float *)a2 - *(float *)this))
                     + (float)((float)(v3 - *((float *)this + 1)) * (float)(v3 - *((float *)this + 1))))
             + (float)((float)(v4 - *((float *)this + 2)) * (float)(v4 - *((float *)this + 2)))) < (float)((float)(*((float *)this + 3) + v5) * (float)(*((float *)this + 3) + v5)) )
  {
    v6 = *((_DWORD *)a2 + 4);
    v7 = v6 & 3;
    if ( (float)((float)((float)((float)(*((float *)this + 4 * v7 + 5) * v2)
                               + (float)(*((float *)this + 4 * v7 + 6) * v3))
                       + (float)(*((float *)this + 4 * v7 + 7) * v4))
               - *((float *)this + 4 * v7 + 8)) <= v5 )
    {
      v7 = ((_BYTE)v6 + 1) & 3;
      if ( (float)((float)((float)((float)(*((float *)this + 4 * v7 + 5) * v2)
                                 + (float)(*((float *)this + 4 * v7 + 6) * v3))
                         + (float)(*((float *)this + 4 * v7 + 7) * v4))
                 - *((float *)this + 4 * v7 + 8)) <= v5 )
      {
        v7 = ((_BYTE)v6 + 2) & 3;
        if ( (float)((float)((float)((float)(*((float *)this + 4 * v7 + 5) * v2)
                                   + (float)(*((float *)this + 4 * v7 + 6) * v3))
                           + (float)(*((float *)this + 4 * v7 + 7) * v4))
                   - *((float *)this + 4 * v7 + 8)) <= v5 )
        {
          v7 = ((_BYTE)v6 + 3) & 3;
          if ( (float)((float)((float)((float)(*((float *)this + 4 * v7 + 5) * v2)
                                     + (float)(*((float *)this + 4 * v7 + 6) * v3))
                             + (float)(*((float *)this + 4 * v7 + 7) * v4))
                     - *((float *)this + 4 * v7 + 8)) <= v5 )
            return 1;
        }
      }
    }
    *((_DWORD *)a2 + 4) = v7;
  }
  return 0;
}


// ============================================================
