// ADDR: 0x12bd9e
// SYMBOL: sub_12BD9E
unsigned __int64 *__fastcall sub_12BD9E(int a1)
{
  int v1; // r1
  unsigned __int64 v2; // d16
  __int64 v3; // r4
  unsigned __int64 *result; // r0

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 )
    v2 = vadd_f32(*(float32x2_t *)(v1 + 44), *(float32x2_t *)(a1 + 12)).n64_u64[0];
  else
    v2 = *(_QWORD *)(a1 + 12);
  v3 = *(_QWORD *)(a1 + 68);
  result = (unsigned __int64 *)(a1 + 44);
  *result = v2;
  while ( (_DWORD)v3 != HIDWORD(v3) )
  {
    result = *(unsigned __int64 **)v3;
    if ( *(_DWORD *)v3 )
      result = (unsigned __int64 *)sub_12BD9E();
    LODWORD(v3) = v3 + 4;
  }
  return result;
}


// ======================================================================
