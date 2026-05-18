// ADDR: 0x1757f0
// SYMBOL: sub_1757F0
int __fastcall sub_1757F0(_DWORD *a1, int a2, __int16 a3, __int16 a4)
{
  int v5; // r0
  int v6; // r5
  int v7; // r1
  void *v8; // r0
  const void *v9; // r1
  void *v10; // r8
  _QWORD *v11; // r0
  int result; // r0
  __int64 v13; // [sp+0h] [bp-38h]

  v5 = a1[16];
  HIWORD(v13) = a4;
  WORD2(v13) = a3;
  LODWORD(v13) = a2;
  if ( v5 == a1[17] )
  {
    v6 = v5 + 1;
    if ( v5 )
      v7 = v5 + v5 / 2;
    else
      v7 = 8;
    if ( v7 > v6 )
      v6 = v7;
    if ( v5 < v6 )
    {
      v8 = (void *)sub_1654B0(28 * v6);
      v9 = (const void *)a1[18];
      v10 = v8;
      if ( v9 )
      {
        j_memcpy(v8, v9, 28 * a1[16]);
        sub_165578(a1[18]);
      }
      v5 = a1[16];
      a1[17] = v6;
      a1[18] = v10;
    }
  }
  v11 = (_QWORD *)(a1[18] + 28 * v5);
  *v11 = v13;
  v11[1] = 0xFFFFFFFFLL;
  v11 = (_QWORD *)((char *)v11 + 12);
  *v11 = 0LL;
  v11[1] = 0LL;
  result = a1[16];
  a1[16] = result + 1;
  return result;
}


// ======================================================================
