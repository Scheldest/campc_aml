// ADDR: 0x170b90
// SYMBOL: sub_170B90
int __fastcall sub_170B90(char *a1)
{
  int *v2; // r6
  int v3; // r0
  int v4; // r5
  int v5; // r1
  int (__fastcall *v6)(int, int); // r12
  void *v7; // r0
  const void *v8; // r1
  int v9; // r8
  int v10; // r0
  _QWORD *v11; // r0
  int v12; // r0
  int v13; // r4
  int v14; // r5
  int v15; // r5
  _BYTE v17[40]; // [sp+8h] [bp-30h] BYREF

  v2 = (int *)(dword_381B58 + 11540);
  v3 = *(_DWORD *)(dword_381B58 + 11540);
  memset(v17, 0, 17);
  if ( v3 == *(_DWORD *)(dword_381B58 + 11544) )
  {
    v4 = v3 + 1;
    if ( v3 )
      v5 = v3 + v3 / 2;
    else
      v5 = 8;
    if ( v5 > v4 )
      v4 = v5;
    if ( v3 < v4 )
    {
      v6 = off_2390AC;
      ++*(_DWORD *)(dword_381B58 + 880);
      v7 = (void *)v6(28 * v4, dword_381B60);
      v8 = (const void *)v2[2];
      v9 = (int)v7;
      if ( v8 )
      {
        j_memcpy(v7, v8, 28 * *v2);
        v10 = v2[2];
        if ( v10 && dword_381B58 )
          --*(_DWORD *)(dword_381B58 + 880);
        off_2390B0(v10, dword_381B60);
      }
      v3 = *v2;
      v2[1] = v4;
      v2[2] = v9;
    }
  }
  v11 = (_QWORD *)(v2[2] + 28 * v3);
  *v11 = 0LL;
  v11[1] = *(_QWORD *)v17;
  v11 = (_QWORD *)((char *)v11 + 12);
  *v11 = *(_QWORD *)&v17[4];
  v11[1] = *(_QWORD *)&v17[12];
  v12 = *v2;
  v13 = v2[2];
  ++*v2;
  v14 = 7 * v12;
  *(_DWORD *)(v13 + 4 * v14) = sub_165460(a1);
  v15 = v13 + 4 * v14;
  *(_DWORD *)(v15 + 4) = sub_16560C(a1, 0, 0);
  return v15;
}


// ======================================================================
