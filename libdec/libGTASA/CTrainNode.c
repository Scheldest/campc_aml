
// Address: 0x57c410
// Original: _ZN10CTrainNode24GetLightingFromCollisionEv
// Demangled: CTrainNode::GetLightingFromCollision(void)
int __fastcall CTrainNode::GetLightingFromCollision(CTrainNode *this)
{
  int result; // r0
  _BYTE v3[4]; // [sp+1Ch] [bp-44h] BYREF
  _BYTE v4[44]; // [sp+20h] [bp-40h] BYREF
  float v5[5]; // [sp+4Ch] [bp-14h] BYREF

  if ( *((_BYTE *)this + 9) )
    return *((unsigned __int8 *)this + 8);
  v5[0] = (float)*(__int16 *)this * 0.125;
  v5[1] = (float)*((__int16 *)this + 1) * 0.125;
  v5[2] = (float)((float)*((__int16 *)this + 2) * 0.125) + 1.0;
  if ( CWorld::ProcessVerticalLine((CVector *)v5, -998637568, (int)v4, (int)v3, 1, 0, 0, 0, 0, 0, 0) != 1 )
    return 72;
  result = v4[37];
  *((_BYTE *)this + 9) = 1;
  *((_BYTE *)this + 8) = result;
  return result;
}


// ============================================================
