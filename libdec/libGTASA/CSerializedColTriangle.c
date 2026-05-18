
// Address: 0x3f03ea
// Original: _ZN22CSerializedColTriangle5FixupEPS_i
// Demangled: CSerializedColTriangle::Fixup(CSerializedColTriangle*,int)
char *__fastcall CSerializedColTriangle::Fixup(int a1, int a2)
{
  int v2; // r4
  char *result; // r0
  int v5; // r1
  int v6; // r2
  char *v7; // r6
  int v8; // r3

  v2 = a2;
  result = (char *)malloc(16 * a2);
  if ( v2 >= 1 )
  {
    v5 = 0;
    v6 = 8;
    do
    {
      v7 = &result[2 * v5];
      *(_DWORD *)&result[v6 - 8] = *(unsigned __int16 *)(a1 + v5);
      v8 = a1 + v5;
      v5 += 8;
      --v2;
      *((_DWORD *)v7 + 1) = *(unsigned __int16 *)(v8 + 2);
      *(_DWORD *)&result[v6] = *(unsigned __int16 *)(v8 + 4);
      v6 += 16;
      v7[12] = *(_BYTE *)(v8 + 6);
      v7[13] = *(_BYTE *)(v8 + 7);
    }
    while ( v2 );
  }
  return result;
}


// ============================================================
