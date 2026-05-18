// ADDR: 0x104026
// SYMBOL: sub_104026
int __fastcall sub_104026(int a1)
{
  int v1; // r10
  int v2; // r6
  int i; // r5
  int v4; // r4
  int result; // r0
  int v6; // r0
  _QWORD *v7; // r1
  _QWORD *v8; // r1
  _QWORD *v9; // r1

  v1 = a1 + 648;
  v2 = 0;
  for ( i = 0; i != 10; ++i )
  {
    v4 = v1 + i;
    result = *(unsigned __int8 *)(v1 + i - 532);
    if ( *(_BYTE *)(v1 + i - 532) )
    {
      v6 = *(_DWORD *)(v1 + 4 * i);
      if ( v6 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
        *(_DWORD *)(v1 + 4 * i) = 0;
      }
      result = v4 - 532;
      v7 = (_QWORD *)(v1 + v2 - 520);
      *v7 = 0LL;
      v7[1] = 0LL;
      v8 = (_QWORD *)(v1 + v2 - 504);
      *v8 = 0LL;
      v8[1] = 0LL;
      v9 = (_QWORD *)(v1 + v2 - 488);
      *v9 = 0LL;
      v9[1] = 0LL;
      *(_DWORD *)(v1 + v2 - 472) = 0;
      *(_BYTE *)(v4 - 532) = 0;
    }
    v2 += 52;
  }
  return result;
}


// ======================================================================
