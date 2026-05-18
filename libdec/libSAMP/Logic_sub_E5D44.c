// ADDR: 0xe5dd0
// SYMBOL: sub_E5DD0
int __fastcall sub_E5DD0(int *a1, _DWORD *a2)
{
  int v2; // r2
  int v3; // r12
  int v4; // r3
  char v5; // t1
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int result; // r0

  v2 = a1[1];
  v3 = *a1;
  v4 = a2[1];
  if ( v2 != *a1 )
  {
    do
    {
      v5 = *(_BYTE *)(v2 - 16);
      v2 -= 16;
      *(_BYTE *)(v4 - 16) = v5;
      *(_QWORD *)(v4 - 8) = *(_QWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 8) = 0;
      *(_DWORD *)(v2 + 12) = 0;
      v6 = a2[1];
      *(_BYTE *)v2 = 0;
      v4 = v6 - 16;
      a2[1] = v4;
    }
    while ( v2 != v3 );
    v3 = *a1;
  }
  *a1 = v4;
  a2[1] = v3;
  v7 = a1[1];
  a1[1] = a2[2];
  a2[2] = v7;
  v8 = a1[2];
  a1[2] = a2[3];
  result = a2[1];
  a2[3] = v8;
  *a2 = result;
  return result;
}


// ======================================================================
