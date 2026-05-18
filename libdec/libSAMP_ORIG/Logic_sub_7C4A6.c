// ADDR: 0x7c4b2
// SYMBOL: sub_7C4B2
unsigned __int64 *__fastcall sub_7C4B2(int a1)
{
  int v1; // r1
  unsigned __int64 v2; // d16
  __int64 v3; // r4
  unsigned __int64 *result; // r0
  int v5; // t1

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    v2 = vadd_f32(*(float32x2_t *)(v1 + 44), *(float32x2_t *)(a1 + 12)).n64_u64[0];
  else
    v2 = *(_QWORD *)(a1 + 12);
  v3 = *(_QWORD *)(a1 + 72);
  result = (unsigned __int64 *)(a1 + 44);
  for ( *result = v2; (_DWORD)v3 != HIDWORD(v3); result = (unsigned __int64 *)sub_7C4B2(v5) )
  {
    v5 = *(_DWORD *)v3;
    LODWORD(v3) = v3 + 4;
  }
  return result;
}


// ======================================================================
