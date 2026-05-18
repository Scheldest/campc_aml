// ADDR: 0x148a3c
// SYMBOL: sub_148A3C
int __fastcall sub_148A3C(int *a1, int a2, unsigned int a3, int a4)
{
  int result; // r0
  int *v6; // r8
  int v9; // r1
  __int64 v10; // d17
  int *v11; // r1
  int v12; // r3
  float v13; // r3
  unsigned int v14; // r1
  int v15; // r2
  float v16; // r4
  float v17; // r5
  int v18; // r0
  int v19; // [sp+0h] [bp-30h]
  int v20; // [sp+4h] [bp-2Ch]
  int v21; // [sp+8h] [bp-28h]
  int v22; // [sp+Ch] [bp-24h]
  int v23[8]; // [sp+10h] [bp-20h] BYREF

  result = 0;
  if ( !(a3 >> 12) )
  {
    result = *a1;
    if ( *a1 < 4096 )
    {
      v6 = &a1[a3];
      v9 = v6[1];
      if ( v9 )
        sub_107188(word_B953C, v9, a3, a4, v19, v20, v21, v22, v23[0], v23[1], v23[2]);
      v10 = *(_QWORD *)(a2 + 8);
      v11 = &a1[5 * a3 + 15361];
      v12 = *(_DWORD *)(a2 + 16);
      *(_QWORD *)v11 = *(_QWORD *)a2;
      *((_QWORD *)v11 + 1) = v10;
      a1[5 * a3 + 15365] = v12;
      v13 = *(float *)(a2 + 8);
      *((_BYTE *)a1 + 3 * a3 + 49156) = 0;
      v14 = *(_DWORD *)a2;
      v15 = *(_DWORD *)(a2 + 4);
      v16 = *(float *)(a2 + 12);
      v17 = *(float *)(a2 + 16);
      v23[0] = 0;
      v18 = sub_F9BB4(dword_23DEF0, v14, v15, v13, v16, v17, v23);
      v6[4097] = v23[0];
      v6[1] = v18;
      result = *a1 + 1;
      *a1 = result;
    }
  }
  return result;
}


// ======================================================================
