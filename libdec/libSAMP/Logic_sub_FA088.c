// ADDR: 0xfa0e8
// SYMBOL: sub_FA0E8
int __fastcall sub_FA0E8(int a1, int a2, int a3, int a4)
{
  int v5; // r1
  _DWORD *v6; // r6
  float v7; // s2
  double v8; // r2
  float v9; // s4
  float v10; // s6
  float v11; // s8
  int v12; // r1
  int result; // r0
  int v14; // [sp+0h] [bp-48h]
  int v15; // [sp+4h] [bp-44h]
  int v16; // [sp+8h] [bp-40h]
  int v17; // [sp+Ch] [bp-3Ch]
  int v18; // [sp+10h] [bp-38h]
  int v19; // [sp+14h] [bp-34h]
  int v20; // [sp+18h] [bp-30h]

  v6 = (_DWORD *)(a1 + 80);
  v5 = *(_DWORD *)(a1 + 80);
  if ( v5 )
  {
    sub_107188(&unk_B2E44, v5, a3, a4, v14, v15, v16, v17, v18, v19, v20);
    *v6 = 0;
  }
  v7 = *(float *)(a1 + 48);
  v8 = *(float *)(a1 + 44);
  v9 = *(float *)(a1 + 52);
  v10 = *(float *)(a1 + 56);
  v11 = *(float *)(a1 + 60);
  v12 = *(unsigned __int8 *)(a1 + 68);
  *(_BYTE *)(a1 + 1) = 0;
  sub_107188(
    &unk_B2E30,
    v12,
    LODWORD(v8),
    HIDWORD(v8),
    COERCE_UNSIGNED_INT64(v7),
    HIDWORD(COERCE_UNSIGNED_INT64(v7)),
    COERCE_UNSIGNED_INT64(v9),
    HIDWORD(COERCE_UNSIGNED_INT64(v9)),
    COERCE_UNSIGNED_INT64(v10),
    HIDWORD(COERCE_UNSIGNED_INT64(v10)),
    COERCE_UNSIGNED_INT64(v11));
  result = 1;
  *(_BYTE *)(a1 + 1) = 1;
  return result;
}


// ======================================================================
