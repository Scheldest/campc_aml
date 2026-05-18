// ADDR: 0x1518c8
// SYMBOL: sub_1518C8
int __fastcall sub_1518C8(int a1, __int64 *a2, char a3, int a4, char a5, char a6, int a7)
{
  int result; // r0
  __int64 v10; // kr00_8
  unsigned int *v11; // r1
  unsigned int v12; // r2

  result = sub_151830(a1, a4, a5, a6, a7, 0, 1065353216);
  v10 = *a2;
  *(_BYTE *)(result + 48) = a3;
  *(_DWORD *)result = &off_22F354;
  *(_QWORD *)(result + 52) = v10;
  if ( HIDWORD(v10) )
  {
    v11 = (unsigned int *)(HIDWORD(v10) + 8);
    do
      v12 = __ldrex(v11);
    while ( __strex(v12 + 1, v11) );
  }
  return result;
}


// ======================================================================
