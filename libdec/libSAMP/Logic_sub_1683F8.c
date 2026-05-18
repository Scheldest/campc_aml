// ADDR: 0x1702cc
// SYMBOL: sub_1702CC
void *__fastcall sub_1702CC(int a1, int a2)
{
  int v4; // r3
  void *result; // r0
  int *v6; // r4
  int v7; // r1
  __int64 v8; // kr00_8
  int v9; // r8
  int (__fastcall *v10)(int, int); // r12
  const void *v11; // r1
  int v12; // r0
  int v13; // r0
  void *v14; // [sp+4h] [bp-24h]

  v4 = 9 * a1;
  result = (void *)dword_381B58;
  v6 = (int *)(dword_381B58 + 6812);
  v7 = *(_DWORD *)(dword_381B58 + 6816);
  v8 = *(_QWORD *)(*(_DWORD *)(dword_381B58 + 6820) + 4 * v4 + 4);
  if ( v7 < a1 )
  {
    if ( v7 )
      v9 = v7 + v7 / 2;
    else
      v9 = 8;
    if ( v9 <= a1 )
      v9 = a1;
    if ( v7 < v9 )
    {
      v10 = off_2390AC;
      ++*(_DWORD *)(dword_381B58 + 880);
      result = (void *)v10(36 * v9, dword_381B60);
      v11 = (const void *)v6[2];
      if ( v11 )
      {
        v14 = result;
        j_memcpy(result, v11, 36 * *v6);
        v12 = v6[2];
        if ( v12 && dword_381B58 )
          --*(_DWORD *)(dword_381B58 + 880);
        off_2390B0(v12, dword_381B60);
        result = v14;
      }
      v6[1] = v9;
      v6[2] = (int)result;
    }
  }
  *v6 = a1;
  if ( a2 )
  {
    if ( HIDWORD(v8) )
    {
      if ( !*(_BYTE *)(HIDWORD(v8) + 123) && (_DWORD)v8 )
        return (void *)sub_16A8F8(v8, 0);
      if ( v6[28] )
      {
        v13 = HIDWORD(v8);
      }
      else
      {
        v13 = *(_DWORD *)(HIDWORD(v8) + 776);
        if ( !v13 )
          v13 = HIDWORD(v8);
      }
    }
    else
    {
      v13 = 0;
    }
    return (void *)sub_168010(v13);
  }
  return result;
}


// ======================================================================
