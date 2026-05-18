// ADDR: 0x147e28
// SYMBOL: sub_147E28
int __fastcall sub_147E28(int result, unsigned int a2, char a3)
{
  int v3; // r4
  __int16 v4; // r5
  int v5; // r6
  double v7; // d16
  double v8; // d17
  int v9; // r0
  int v10; // r2
  int v11; // r0
  _BYTE *v12; // r4
  double v13; // [sp+0h] [bp-60h] BYREF
  float v14[2]; // [sp+8h] [bp-58h] BYREF
  _DWORD v15[12]; // [sp+10h] [bp-50h] BYREF
  double v16; // [sp+40h] [bp-20h]
  int v17; // [sp+48h] [bp-18h]

  if ( a2 <= 0x3E8 )
  {
    v3 = result;
    v4 = a2;
    result = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 16);
    if ( *(_BYTE *)(a2 + result + 4) )
    {
      result += 4 * a2;
      v5 = *(_DWORD *)(result + 1004);
      if ( v5 )
      {
        sub_F8910(*(_DWORD *)(result + 1004), v15);
        sub_1021F0(v5, (float *)&v13, (float *)&v13 + 1, v14);
        v7 = v13;
        v8 = v16;
        v9 = v17;
        *(float *)(v3 + 36) = v14[0];
        v10 = dword_23DEEC;
        *(_DWORD *)(v3 + 24) = v9;
        *(double *)(v3 + 28) = v7;
        *(_BYTE *)(v3 + 10) = a3;
        *(double *)(v3 + 16) = v8;
        *(_WORD *)(v3 + 8) = v4;
        v11 = *(_DWORD *)(v10 + 120);
        *(_DWORD *)v3 = 2;
        sub_134D18(v11, v3 + 16);
        v12 = *(_BYTE **)(dword_23DEEC + 132);
        if ( v12[80] )
          (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v12 + 36))(*(_DWORD *)(dword_23DEEC + 132), 0);
        result = 0;
        v12[80] = 0;
      }
    }
  }
  return result;
}


// ======================================================================
