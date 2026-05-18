// ADDR: 0x138ab2
// SYMBOL: sub_138AB2
int __fastcall sub_138AB2(int a1)
{
  unsigned int v2; // r3
  __int64 v3; // r0
  _DWORD *v4; // r8
  unsigned int v5; // r5
  unsigned int v6; // r6
  unsigned int v7; // r12
  unsigned int v8; // r5
  int v9; // r9
  _DWORD *v10; // r6
  unsigned int v11; // t1
  __int64 v12; // r0

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 4);
  if ( HIDWORD(v3) == (_DWORD)v3 )
  {
    v4 = (_DWORD *)(a1 + 20);
  }
  else
  {
    v4 = (_DWORD *)(a1 + 20);
    v5 = *(_DWORD *)(a1 + 20) + v2;
    v6 = v5 / 0xAA;
    v7 = v5 % 0xAA;
    v8 = *(_DWORD *)(v3 + 4 * (v2 / 0xAA)) + 24 * (v2 % 0xAA);
    v9 = *(_DWORD *)(v3 + 4 * v6) + 24 * v7;
    if ( v8 != v9 )
    {
      v10 = (_DWORD *)(v3 + 4 * (v2 / 0xAA));
      do
      {
        if ( *(unsigned __int8 *)(v8 + 4) << 31 )
          operator delete(*(void **)(v8 + 12));
        v8 += 24;
        if ( v8 - *v10 == 4080 )
        {
          v11 = v10[1];
          ++v10;
          v8 = v11;
        }
      }
      while ( v8 != v9 );
      v3 = *(_QWORD *)(a1 + 4);
    }
  }
  HIDWORD(v3) -= v3;
  *v4 = 0;
  if ( HIDWORD(v3) >= 9 )
  {
    do
    {
      operator delete(*(void **)v3);
      v12 = *(_QWORD *)(a1 + 4);
      LODWORD(v3) = v12 + 4;
      *(_DWORD *)(a1 + 4) = v3;
      HIDWORD(v3) = HIDWORD(v12) - v3;
    }
    while ( HIDWORD(v3) > 8 );
  }
  LODWORD(v3) = HIDWORD(v3) >> 2;
  if ( HIDWORD(v3) >> 2 == 1 )
  {
    LODWORD(v3) = 85;
    goto LABEL_17;
  }
  if ( (_DWORD)v3 == 2 )
  {
    LODWORD(v3) = 170;
LABEL_17:
    *(_DWORD *)(a1 + 16) = v3;
  }
  return v3;
}


// ======================================================================
// ADDR: 0x138b72
// SYMBOL: sub_138B72
int __fastcall sub_138B72(int a1)
{
  __int64 v2; // kr00_8

  v2 = *(_QWORD *)(a1 + 4);
  if ( HIDWORD(v2) != (_DWORD)v2 )
    *(_DWORD *)(a1 + 8) = HIDWORD(v2) + 4 * ~((unsigned int)(HIDWORD(v2) - v2 - 4) >> 2);
  if ( *(_DWORD *)a1 )
    operator delete(*(void **)a1);
  return a1;
}


// ======================================================================
