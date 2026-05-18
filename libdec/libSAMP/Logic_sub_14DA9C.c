// ADDR: 0xf9ed4
// SYMBOL: sub_F9ED4
int __fastcall sub_F9ED4(int a1, float a2, float a3, float a4)
{
  _DWORD v5[3]; // [sp+14h] [bp-Ch] BYREF

  sub_107188(
    &unk_B2E1C,
    COERCE_UNSIGNED_INT64(a2),
    COERCE_UNSIGNED_INT64(a2),
    HIDWORD(COERCE_UNSIGNED_INT64(a2)),
    COERCE_UNSIGNED_INT64(a3),
    HIDWORD(COERCE_UNSIGNED_INT64(a3)),
    COERCE_UNSIGNED_INT64(a4),
    HIDWORD(COERCE_UNSIGNED_INT64(a4)),
    v5,
    v5[0],
    v5[1]);
  return v5[0];
}


// ======================================================================
