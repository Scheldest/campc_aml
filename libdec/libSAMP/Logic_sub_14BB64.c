// ADDR: 0xf87a8
// SYMBOL: sub_F87A8
int __fastcall sub_F87A8(int a1, float *a2, float *a3, int a4, int a5)
{
  int v8; // [sp+0h] [bp-40h]
  int v9; // [sp+4h] [bp-3Ch]
  int v10; // [sp+8h] [bp-38h]
  int v11; // [sp+Ch] [bp-34h]
  int v12; // [sp+10h] [bp-30h]
  int v13; // [sp+14h] [bp-2Ch]
  int v14; // [sp+18h] [bp-28h]

  sub_107188("/\ti", 1, a3, a4, v8, v9, v10, v11, v12, v13, v14);
  return sub_107188(
           " \tffffffii",
           a5,
           COERCE_UNSIGNED_INT64(*a2),
           HIDWORD(COERCE_UNSIGNED_INT64(*a2)),
           COERCE_UNSIGNED_INT64(a2[1]),
           HIDWORD(COERCE_UNSIGNED_INT64(a2[1])),
           COERCE_UNSIGNED_INT64(a2[2]),
           HIDWORD(COERCE_UNSIGNED_INT64(a2[2])),
           COERCE_UNSIGNED_INT64(*a3),
           HIDWORD(COERCE_UNSIGNED_INT64(*a3)),
           COERCE_UNSIGNED_INT64(a3[1]));
}


// ======================================================================
