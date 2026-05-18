// ADDR: 0xf871c
// SYMBOL: sub_F871C
int __fastcall sub_F871C(int a1, float *a2, float *a3, int a4, int a5)
{
  int v7; // r2
  int v8; // r3
  int v10; // [sp+0h] [bp-40h]
  int v11; // [sp+0h] [bp-40h]
  int v12; // [sp+4h] [bp-3Ch]
  int v13; // [sp+4h] [bp-3Ch]
  int v14; // [sp+8h] [bp-38h]
  int v15; // [sp+8h] [bp-38h]
  int v16; // [sp+Ch] [bp-34h]
  int v17; // [sp+Ch] [bp-34h]
  int v18; // [sp+10h] [bp-30h]
  int v19; // [sp+10h] [bp-30h]
  int v20; // [sp+14h] [bp-2Ch]
  int v21; // [sp+14h] [bp-2Ch]
  int v22; // [sp+18h] [bp-28h]
  int v23; // [sp+18h] [bp-28h]

  sub_107188(&unk_B2BA6, a2, a3, a4, v10, v12, v14, v16, v18, v20, v22);
  sub_107188(&unk_B2BE2, 1, v7, v8, v11, v13, v15, v17, v19, v21, v23);
  return sub_107188(
           "6\tffffffii",
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
