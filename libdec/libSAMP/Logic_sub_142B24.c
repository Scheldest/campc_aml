// ADDR: 0x14aad8
// SYMBOL: sub_14AAD8
int __fastcall sub_14AAD8(int a1, unsigned __int8 *a2)
{
  int result; // r0
  unsigned __int8 *v5; // r6
  float v6; // r1
  float v7; // r2
  int v8; // r2
  int v9; // r4
  int v10; // r0
  int v11; // r3
  int v12; // s0
  int v13; // s2
  int v14; // r1
  int v15; // [sp+0h] [bp-58h] BYREF
  int v16; // [sp+4h] [bp-54h]
  int v17; // [sp+8h] [bp-50h]
  float v18[3]; // [sp+Ch] [bp-4Ch] BYREF
  _DWORD v19[16]; // [sp+18h] [bp-40h] BYREF

  result = *(_DWORD *)(a1 + 296);
  if ( result )
  {
    v5 = a2 + 1;
    sub_1051AC(result, *a2);
    v6 = *((float *)v5 + 1);
    v7 = *((float *)v5 + 2);
    v19[0] = *(_DWORD *)v5;
    *(float *)&v19[1] = v6;
    *(float *)&v19[2] = v7;
    v18[0] = *(float *)v19;
    v18[1] = v6;
    v18[2] = v7;
    v17 = 0;
    v15 = 0;
    v16 = 0;
    sub_F8050(v18, (float *)&v15);
    v8 = *((_DWORD *)v5 + 5);
    v19[9] = v15;
    v19[10] = v16;
    v9 = *((_DWORD *)v5 + 4);
    v10 = *(_DWORD *)(a1 + 296);
    v11 = *((_DWORD *)v5 + 3);
    v19[5] = v8;
    v19[6] = v11;
    v19[7] = v9;
    v19[11] = v17;
    v19[3] = v11;
    v19[4] = v9;
    v19[8] = v8;
    sub_105110(v10, (int)v19);
    sub_10514C(*(_DWORD *)(a1 + 296), *((float *)v5 + 6));
    *(float *)&v12 = (double)a2[30] * 0.0039215689;
    *(float *)&v13 = (double)(a2[29] & 0x3F) * 0.015873017;
    sub_1051B8(*(_DWORD *)(a1 + 296), v13, v12);
    result = sub_105190(*(_DWORD *)(a1 + 296));
    v14 = a2[29] >> 6;
    if ( v14 == 2 )
    {
      if ( *(_DWORD *)(result + 8) > 1u )
        return result;
      v14 = 2;
    }
    else if ( v14 == 3 )
    {
      *(_DWORD *)(result + 4) = 2;
      return result;
    }
    *(_DWORD *)(result + 8) = v14;
  }
  return result;
}


// ======================================================================
