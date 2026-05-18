// ADDR: 0x140f8c
// SYMBOL: sub_140F8C
float *__fastcall sub_140F8C(int a1)
{
  float *result; // r0
  int v3[3]; // [sp+54h] [bp-3Ch] BYREF
  _DWORD v4[3]; // [sp+60h] [bp-30h] BYREF
  char v5; // [sp+6Fh] [bp-21h] BYREF
  __int16 v6; // [sp+70h] [bp-20h] BYREF
  _WORD v7[15]; // [sp+72h] [bp-1Eh] BYREF

  result = *(float **)(a1 + 12);
  if ( result )
  {
    sub_F8910((int)result, flt_314218);
    sub_F8910(*(_DWORD *)(a1 + 28), &dword_314258);
    sub_F8994(*(_DWORD *)(a1 + 12), dword_314298);
    sub_F89E0(*(_DWORD *)(a1 + 12), dword_3142A4);
    sub_104BA4(*(_DWORD *)(a1 + 28), v7, &v6, &v5, 0);
    if ( !*(_BYTE *)(a1 + 416) || v7[0] || v6 )
    {
      sub_140F4A(flt_3142B0, (int)flt_314218);
      return sub_108F30((float *)(a1 + 404), flt_3142B0, (float *)&dword_314288);
    }
    else
    {
      sub_108F30((float *)&dword_314288, flt_314218, (float *)(a1 + 404));
      sub_F8F58(
        *(_DWORD *)(a1 + 28),
        dword_314258,
        dword_31425C,
        dword_314260,
        dword_314264,
        unk_314268,
        unk_31426C,
        unk_314270,
        unk_314274,
        unk_314278,
        dword_31427C,
        dword_314280,
        dword_314284,
        dword_314288,
        unk_31428C,
        unk_314290);
      sub_F8994(*(_DWORD *)(a1 + 28), v4);
      sub_F89BC(*(_DWORD *)(a1 + 28), dword_314298[0], dword_314298[1], v4[2]);
      sub_F89E0(*(_DWORD *)(a1 + 28), v3);
      return (float *)sub_F8A08(*(_DWORD *)(a1 + 28), v3[0], v3[1], dword_3142A4[2]);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x14a280
// SYMBOL: sub_14A280
float __fastcall sub_14A280(int a1)
{
  float result; // r0
  unsigned int v3; // r5
  int v4; // r0
  int v5; // r6
  int v6; // r5
  double v7; // d16
  int v8; // r0
  double v9; // [sp+48h] [bp-D8h] BYREF
  int v10; // [sp+50h] [bp-D0h]
  double v11; // [sp+58h] [bp-C8h] BYREF
  int v12; // [sp+60h] [bp-C0h]
  _DWORD v13[3]; // [sp+68h] [bp-B8h] BYREF
  _DWORD v14[3]; // [sp+74h] [bp-ACh] BYREF
  int v15[12]; // [sp+80h] [bp-A0h] BYREF
  double v16; // [sp+B0h] [bp-70h]
  int v17; // [sp+B8h] [bp-68h]
  float v18[23]; // [sp+C4h] [bp-5Ch] BYREF

  LODWORD(result) = *(unsigned __int8 *)(a1 + 25);
  if ( LODWORD(result) == 17 )
  {
    v3 = *(unsigned __int16 *)(a1 + 178);
    LODWORD(result) = (unsigned __int16)(v3 - 1);
    if ( LODWORD(result) <= 0xBB6 )
    {
      v4 = *(_DWORD *)(dword_23DEF4 + 944);
      if ( v3 >> 4 > 0x7C )
      {
        result = *(float *)(v4 + 16);
        if ( !*(_BYTE *)(LODWORD(result) + (unsigned __int16)(v3 - 2000) + 4) )
          return result;
        LODWORD(result) += 4 * (unsigned __int16)(v3 - 2000);
        v6 = *(_DWORD *)(LODWORD(result) + 1004);
      }
      else
      {
        v5 = *(_DWORD *)(v4 + 4);
        LODWORD(result) = sub_F2396(v5, *(unsigned __int16 *)(a1 + 178));
        if ( result == 0.0 )
          return result;
        v6 = *(_DWORD *)(v5 + 4 * v3);
      }
      if ( v6 )
      {
        result = *(float *)(a1 + 166);
        if ( result <= 100.0 && result >= -100.0 )
        {
          result = *(float *)(a1 + 170);
          if ( result <= 100.0 && result >= -100.0 )
          {
            result = *(float *)(a1 + 174);
            if ( result <= 100.0 && result >= -100.0 )
            {
              sub_F8910(v6, v18);
              sub_F8994(v6, v14);
              sub_F89E0(v6, v13);
              sub_F8910(*(_DWORD *)(a1 + 296), v15);
              v7 = *(double *)(a1 + 166);
              v10 = *(_DWORD *)(a1 + 174);
              v9 = v7;
              sub_108F30((float *)&v11, v18, (float *)&v9);
              v8 = *(_DWORD *)(a1 + 296);
              v16 = v11;
              v17 = v12;
              return COERCE_FLOAT(
                       sub_F8F58(
                         v8,
                         v15[0],
                         v15[1],
                         v15[2],
                         v15[3],
                         v15[4],
                         v15[5],
                         v15[6],
                         v15[7],
                         v15[8],
                         v15[9],
                         v15[10],
                         v15[11],
                         LODWORD(v11),
                         HIDWORD(v11),
                         v12));
            }
          }
        }
      }
    }
  }
  return result;
}


// ======================================================================
