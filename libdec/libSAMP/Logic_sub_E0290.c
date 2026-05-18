// ADDR: 0xdcd26
// SYMBOL: sub_DCD26
int __fastcall sub_DCD26(int result, __int64 *a2, int a3)
{
  __int64 v3; // kr00_8
  bool v4; // cc
  unsigned int v5; // r12
  int v6; // r3
  int v7; // r1
  int v8; // r3
  int v9; // r1
  int v10; // r1
  __int64 v11; // d16

  v3 = *a2;
  v4 = *((_DWORD *)a2 + 1) <= -1;
  *(_DWORD *)(result + 8) = 0;
  if ( v4 )
  {
    if ( (int)v3 > a3 )
    {
      v10 = *((_DWORD *)a2 + 2) + 16 * a3;
      v11 = *(_QWORD *)v10;
      *(_DWORD *)(result + 8) = *(_DWORD *)(v10 + 8);
      *(_QWORD *)result = v11;
    }
  }
  else if ( a3 <= 14 )
  {
    v5 = ((unsigned int)v3 >> (4 * a3)) | (HIDWORD(v3) << (32 - 4 * a3));
    v6 = 4 * a3 - 32;
    if ( v6 >= 0 )
      v5 = HIDWORD(v3) >> v6;
    *(_DWORD *)(result + 8) = v5 & 0xF;
    if ( (v5 & 0xF) != 0 )
    {
      v7 = *((_DWORD *)a2 + 2);
      v8 = *(_DWORD *)(v7 + 8 * a3);
      v9 = *(_DWORD *)(v7 + 8 * a3 + 4);
      *(_DWORD *)result = v8;
      *(_DWORD *)(result + 4) = v9;
    }
  }
  return result;
}


// ======================================================================
