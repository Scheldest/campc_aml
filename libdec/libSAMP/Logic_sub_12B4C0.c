// ADDR: 0x17513c
// SYMBOL: sub_17513C
_DWORD *__fastcall sub_17513C(_DWORD *a1, int *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // r0
  _DWORD *result; // r0
  int v11; // r4
  __int64 v12; // kr00_8
  unsigned int v13; // r1
  int v14; // r2
  _DWORD v15[7]; // [sp+4h] [bp-1Ch] BYREF

  v6 = a1[6];
  if ( !v6 )
  {
    v15[0] = 0;
    sub_175064(a1, v15, 0, 0, 0);
    v11 = v15[0];
    if ( v15[0] )
    {
      v6 = sub_1654B0(4 * a1[7] * a1[8]);
      v12 = *(_QWORD *)(a1 + 7);
      a1[6] = v6;
      if ( (int)v12 * HIDWORD(v12) >= 1 )
      {
        v13 = v12 * HIDWORD(v12) + 1;
        v14 = 0;
        do
        {
          --v13;
          *(_DWORD *)(v6 + 4 * v14) = (*(unsigned __int8 *)(v11 + v14) << 24) | 0xFFFFFF;
          ++v14;
        }
        while ( v13 > 1 );
      }
    }
    else
    {
      v6 = a1[6];
    }
  }
  *a2 = v6;
  if ( a3 )
    *a3 = a1[7];
  result = a5;
  if ( a4 )
    *a4 = a1[8];
  if ( a5 )
    *a5 = 4;
  return result;
}


// ======================================================================
