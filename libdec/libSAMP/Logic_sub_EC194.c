// ADDR: 0xec1c2
// SYMBOL: sub_EC1C2
int __fastcall sub_EC1C2(int a1, int *a2)
{
  int v4; // r1
  int v5; // r2
  unsigned int v6; // r1
  __int64 v7; // kr00_8
  int v8; // r5
  size_t v9; // r6

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v4 = *a2;
  v5 = a2[1];
  *(_DWORD *)(a1 + 8) = 0;
  v6 = v5 - v4;
  if ( v6 )
  {
    sub_EC212(a1, v6);
    v7 = *(_QWORD *)a2;
    v8 = *(_DWORD *)(a1 + 4);
    v9 = HIDWORD(v7) - v7;
    if ( HIDWORD(v7) - (int)v7 >= 1 )
    {
      j_memcpy(*(void **)(a1 + 4), (const void *)v7, v9);
      v8 += v9;
    }
    *(_DWORD *)(a1 + 4) = v8;
  }
  return a1;
}


// ======================================================================
