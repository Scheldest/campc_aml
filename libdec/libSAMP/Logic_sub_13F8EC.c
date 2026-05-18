// ADDR: 0xf8630
// SYMBOL: sub_F8630
int __fastcall sub_F8630(int a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  int v12; // [sp+0h] [bp-38h]
  int v13; // [sp+4h] [bp-34h]
  int v14; // [sp+8h] [bp-30h]
  int v15; // [sp+Ch] [bp-2Ch]
  int v16; // [sp+10h] [bp-28h]
  int v17; // [sp+14h] [bp-24h]
  int v18; // [sp+18h] [bp-20h]

  sub_107188(&unk_B2BA6, LODWORD(a2), LODWORD(a3), LODWORD(a4), v12, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(a1 + 4) = 0;
  return sub_107188(
           &unk_B2BF6,
           0,
           COERCE_UNSIGNED_INT64(a2),
           HIDWORD(COERCE_UNSIGNED_INT64(a2)),
           COERCE_UNSIGNED_INT64(a3),
           HIDWORD(COERCE_UNSIGNED_INT64(a3)),
           COERCE_UNSIGNED_INT64(a4),
           HIDWORD(COERCE_UNSIGNED_INT64(a4)),
           COERCE_UNSIGNED_INT64(a5),
           HIDWORD(COERCE_UNSIGNED_INT64(a5)),
           COERCE_UNSIGNED_INT64(a6));
}


// ======================================================================
// ADDR: 0xf86ac
// SYMBOL: sub_F86AC
int __fastcall sub_F86AC(int a1, float a2, float a3, float a4, int a5)
{
  int v10; // [sp+0h] [bp-28h]
  int v11; // [sp+4h] [bp-24h]
  int v12; // [sp+8h] [bp-20h]
  int v13; // [sp+Ch] [bp-1Ch]
  int v14; // [sp+10h] [bp-18h]
  int v15; // [sp+14h] [bp-14h]
  int v16; // [sp+14h] [bp-14h]
  int v17; // [sp+18h] [bp-10h]
  int v18; // [sp+18h] [bp-10h]

  sub_107188(&unk_B2BA6, LODWORD(a2), LODWORD(a3), LODWORD(a4), v10, v11, v12, v13, v14, v15, v17);
  *(_DWORD *)(a1 + 4) = 0;
  return sub_107188(
           &unk_B2C0A,
           a5,
           COERCE_UNSIGNED_INT64(a2),
           HIDWORD(COERCE_UNSIGNED_INT64(a2)),
           COERCE_UNSIGNED_INT64(a3),
           HIDWORD(COERCE_UNSIGNED_INT64(a3)),
           COERCE_UNSIGNED_INT64(a4),
           HIDWORD(COERCE_UNSIGNED_INT64(a4)),
           a5,
           v16,
           v18);
}


// ======================================================================
