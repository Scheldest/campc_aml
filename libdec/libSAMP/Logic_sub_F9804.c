// ADDR: 0xf9904
// SYMBOL: sub_F9904
int __fastcall sub_F9904(int a1, char a2, float a3, int a4, float a5, unsigned int a6, char a7)
{
  int v7; // r3
  int v8; // r1
  float v9; // s0
  double v10; // r2
  double v11; // d17
  void *v12; // r0
  unsigned int v13; // r4
  int v14; // r3
  int v15; // r2
  float *v17; // [sp+0h] [bp-38h]
  int v18; // [sp+0h] [bp-38h]
  int *v19; // [sp+4h] [bp-34h]
  int v20; // [sp+4h] [bp-34h]
  float *v21; // [sp+8h] [bp-30h]
  int v22; // [sp+8h] [bp-30h]
  int *v23; // [sp+Ch] [bp-2Ch]
  int v24; // [sp+Ch] [bp-2Ch]
  char *v25; // [sp+10h] [bp-28h]
  int v26; // [sp+10h] [bp-28h]
  int v27; // [sp+14h] [bp-24h]
  int v28; // [sp+14h] [bp-24h]
  int v29; // [sp+18h] [bp-20h]
  int v30; // [sp+18h] [bp-20h]
  int v31; // [sp+1Ch] [bp-1Ch] BYREF
  char v32; // [sp+23h] [bp-15h] BYREF
  int v33; // [sp+24h] [bp-14h] BYREF
  float v34; // [sp+28h] [bp-10h] BYREF
  _BYTE v35[9]; // [sp+2Fh] [bp-9h] BYREF

  v33 = a4;
  v34 = a3;
  v32 = a7;
  v21 = &a5;
  v23 = (int *)&a6;
  v35[0] = a2;
  v17 = &v34;
  v19 = &v33;
  v25 = &v32;
  sub_FA3AC(1, "CreateRadarMarkerIcon: {}, {}, {}, {}, {}, {}", 45, v35);
  v31 = 0;
  switch ( v32 )
  {
    case 0:
      v8 = v35[0];
      v9 = *(float *)&v33;
      v10 = v34;
      v11 = a5;
      v12 = &unk_B2DA4;
      goto LABEL_6;
    case 1:
      v8 = v35[0];
      v9 = *(float *)&v33;
      v10 = v34;
      v11 = a5;
      v12 = &unk_B2DB8;
      goto LABEL_6;
    case 2:
      v8 = v35[0];
      v9 = *(float *)&v33;
      v10 = v34;
      v11 = a5;
      v12 = &unk_B2DCC;
      goto LABEL_6;
    case 3:
      v8 = v35[0];
      v10 = v34;
      v9 = *(float *)&v33;
      v11 = a5;
      v12 = &unk_B2DE0;
LABEL_6:
      sub_107188(
        v12,
        v8,
        LODWORD(v10),
        HIDWORD(v10),
        COERCE_UNSIGNED_INT64(v9),
        HIDWORD(COERCE_UNSIGNED_INT64(v9)),
        LODWORD(v11),
        HIDWORD(v11),
        v8,
        &v31,
        v29);
      break;
    default:
      break;
  }
  if ( !v35[0] )
  {
    v13 = a6;
    sub_107188(&unk_B2DF4, v31, a6, v7, v17, v19, v21, v23, v25, v27, v29);
    v15 = 3;
    if ( v13 < 0x3EC )
      v15 = 2;
    sub_107188(&unk_B2E08, v31, v15, v14, v18, v20, v22, v24, v26, v28, v30);
  }
  return v31;
}


// ======================================================================
