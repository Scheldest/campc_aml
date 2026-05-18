// ADDR: 0x13dd80
// SYMBOL: sub_13DD80
int __fastcall sub_13DD80(int result, float a2)
{
  __int64 v2; // r2
  int v3; // r2
  float v4; // s2
  float v5; // s6
  float v6; // s4
  __int64 v7; // [sp+0h] [bp-10h] BYREF

  v2 = *(_QWORD *)(result + 68);
  if ( (_DWORD)v2 != HIDWORD(v2) )
  {
    v3 = *(_DWORD *)v2;
    v4 = *(float *)(v3 + 20) - *(float *)(result + 20);
    v5 = *(float *)(result + 84);
    v6 = *(float *)(v3 + 24) - *(float *)(result + 24);
    *(float *)(result + 88) = a2;
    *(float *)&v7 = -(float)(v5 * v4);
    *((float *)&v7 + 1) = -(float)(a2 * v6);
    return sub_12BD92(v3, &v7);
  }
  return result;
}


// ======================================================================
