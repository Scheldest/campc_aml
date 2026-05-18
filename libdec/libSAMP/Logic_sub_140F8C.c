// ADDR: 0x140f4a
// SYMBOL: sub_140F4A
float *__fastcall sub_140F4A(float *a1, int a2)
{
  float *v3; // r1
  float v4; // r2
  int v5; // r3
  int v6; // r4
  int v7; // r5
  int v8; // r6
  float v9; // r2
  int v10; // r3
  int v11; // r4
  int v12; // r5
  int v13; // r6
  int v14; // r3
  int v15; // r4
  int v16; // r5
  int v17; // r6
  int v18; // r12

  if ( (*(_DWORD *)(a2 + 12) & 0x20000) != 0 )
  {
    v4 = *(float *)a2;
    v5 = *(_DWORD *)(a2 + 4);
    v6 = *(_DWORD *)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 12);
    v8 = *(_DWORD *)(a2 + 16);
    v3 = (float *)(a2 + 20);
    *a1 = v4;
    *((_DWORD *)a1 + 1) = v5;
    *((_DWORD *)a1 + 2) = v6;
    *((_DWORD *)a1 + 3) = v7;
    *((_DWORD *)a1 + 4) = v8;
    v9 = *v3;
    v10 = *((_DWORD *)v3 + 1);
    v11 = *((_DWORD *)v3 + 2);
    v12 = *((_DWORD *)v3 + 3);
    v13 = *((_DWORD *)v3 + 4);
    v3 += 5;
    a1[5] = v9;
    *((_DWORD *)a1 + 6) = v10;
    *((_DWORD *)a1 + 7) = v11;
    *((_DWORD *)a1 + 8) = v12;
    *((_DWORD *)a1 + 9) = v13;
    v14 = *((_DWORD *)v3 + 1);
    v15 = *((_DWORD *)v3 + 2);
    v16 = *((_DWORD *)v3 + 3);
    v17 = *((_DWORD *)v3 + 4);
    v18 = *((_DWORD *)v3 + 5);
    a1[10] = *v3;
    *((_DWORD *)a1 + 11) = v14;
    *((_DWORD *)a1 + 12) = v15;
    *((_DWORD *)a1 + 13) = v16;
    *((_DWORD *)a1 + 14) = v17;
    *((_DWORD *)a1 + 15) = v18;
  }
  else if ( (*(_DWORD *)(a2 + 12) & 3) == 3 )
  {
    sub_140D58((int)a1, a2);
  }
  else
  {
    sub_140DF6((int)a1, (float *)a2);
  }
  return a1;
}


// ======================================================================
