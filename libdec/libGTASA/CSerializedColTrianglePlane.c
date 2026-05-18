
// Address: 0x3f0a90
// Original: _ZN27CSerializedColTrianglePlane5FixupEPS_i
// Demangled: CSerializedColTrianglePlane::Fixup(CSerializedColTrianglePlane*,int)
char *__fastcall CSerializedColTrianglePlane::Fixup(int a1, int a2)
{
  int v2; // r4
  char *result; // r0
  float *v5; // r2
  int v6; // r3

  v2 = a2;
  result = (char *)malloc(20 * a2);
  if ( v2 >= 1 )
  {
    v5 = (float *)(result + 8);
    v6 = 0;
    do
    {
      --v2;
      *(v5 - 2) = (float)*(__int16 *)(a1 + v6) * 0.00024414;
      *(v5 - 1) = (float)*(__int16 *)(a1 + v6 + 2) * 0.00024414;
      *v5 = (float)*(__int16 *)(a1 + v6 + 4) * 0.00024414;
      v5[1] = (float)*(__int16 *)(a1 + v6 + 6);
      v5 += 5;
      result[2 * v6 + 16] = *(_BYTE *)(a1 + v6 + 8);
      v6 += 10;
    }
    while ( v2 );
  }
  return result;
}


// ============================================================
