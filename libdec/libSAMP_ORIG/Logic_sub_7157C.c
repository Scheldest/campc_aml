// ADDR: 0x9d568
// SYMBOL: sub_9D568
int __fastcall sub_9D568(int a1, float *a2, float *a3, unsigned int a4, float a5, int a6, float a7)
{
  float v9; // s2
  float v10; // s4
  float v11; // s0
  float v12; // s2
  float v14[2]; // [sp+Ch] [bp-24h] BYREF
  float v15[7]; // [sp+14h] [bp-1Ch] BYREF

  if ( a4 >= 0x1000000 )
  {
    v9 = *a2 + 0.5;
    if ( *(unsigned __int8 *)(a1 + 36) << 31 )
      v10 = -0.5;
    else
      v10 = -0.49;
    v11 = *a3 + v10;
    v15[1] = a2[1] + 0.5;
    v15[0] = v9;
    v12 = a3[1];
    v14[0] = v11;
    v14[1] = v12 + v10;
    sub_9D108(a1, v15, v14, a5, a6);
    sub_9C2AC(a1, *(_DWORD *)(a1 + 96), *(_DWORD *)(a1 + 88), a4, 1, a7);
    *(_DWORD *)(a1 + 88) = 0;
  }
  return LODWORD(v15[2]);
}


// ======================================================================
// ADDR: 0x9d624
// SYMBOL: sub_9D624
int __fastcall sub_9D624(int result, int a2, float *a3, unsigned int a4, float a5, int a6)
{
  int v9; // r4
  __int16 v10; // r3
  __int64 v11; // kr00_8
  __int64 v12; // kr08_8
  int v13; // r0
  float v14; // r9
  __int64 v15; // kr18_8
  _DWORD *v16; // r3
  int v17; // r0
  float *v18; // r0
  int v19; // r2
  int v20; // r1
  int v21; // r2

  if ( a4 >= 0x1000000 )
  {
    v9 = result;
    if ( a5 <= 0.0 )
    {
      sub_9C1B4(result, 6, 4);
      v10 = *(_WORD *)(v9 + 52);
      v11 = *(_QWORD *)(v9 + 56);
      v12 = *(_QWORD *)*(_DWORD *)(v9 + 40);
      *(_WORD *)(HIDWORD(v11) + 10) = v10 + 3;
      *(_WORD *)(HIDWORD(v11) + 8) = v10 + 2;
      *(_WORD *)(HIDWORD(v11) + 4) = v10 + 2;
      *(_WORD *)(HIDWORD(v11) + 2) = v10 + 1;
      *(_WORD *)(HIDWORD(v11) + 6) = v10;
      *(_WORD *)HIDWORD(v11) = v10;
      v13 = *(_DWORD *)(a2 + 4);
      v14 = *(float *)a2;
      v15 = *(_QWORD *)a3;
      *(_QWORD *)v11 = *(_QWORD *)a2;
      *(_QWORD *)(*(_DWORD *)(v9 + 56) + 8) = v12;
      v16 = *(_DWORD **)(v9 + 56);
      v16[4] = a4;
      v16[5] = v15;
      v16[6] = v13;
      *(_QWORD *)(*(_DWORD *)(v9 + 56) + 28) = v12;
      v17 = *(_DWORD *)(v9 + 56);
      *(_DWORD *)(v17 + 36) = a4;
      *(_QWORD *)(v17 + 40) = *(_QWORD *)a3;
      *(_QWORD *)(*(_DWORD *)(v9 + 56) + 48) = v12;
      v18 = *(float **)(v9 + 56);
      v18[15] = v14;
      v18[16] = *((float *)&v15 + 1);
      v19 = *(_DWORD *)(v9 + 56);
      *((_DWORD *)v18 + 14) = a4;
      *(_QWORD *)(v19 + 68) = v12;
      v20 = *(_DWORD *)(v9 + 56);
      v21 = *(_DWORD *)(v9 + 60) + 12;
      result = *(_DWORD *)(v9 + 52) + 4;
      *(_DWORD *)(v9 + 52) = result;
      *(_DWORD *)(v9 + 56) = v20 + 80;
      *(_DWORD *)(v9 + 60) = v21;
      *(_DWORD *)(v20 + 76) = a4;
    }
    else
    {
      sub_9D108(result, (float *)a2, a3, a5, a6);
      sub_9CA40(v9, *(__int64 **)(v9 + 96), *(_DWORD *)(v9 + 88), a4);
      result = 0;
      *(_DWORD *)(v9 + 88) = 0;
    }
  }
  return result;
}


// ======================================================================
