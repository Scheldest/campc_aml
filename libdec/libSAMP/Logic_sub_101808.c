// ADDR: 0x1019bc
// SYMBOL: sub_1019BC
int __fastcall sub_1019BC(_DWORD *a1, float *a2)
{
  int result; // r0
  int v5; // [sp+10h] [bp-8h]
  int v6; // [sp+14h] [bp-4h]
  int savedregs; // [sp+18h] [bp+0h]

  result = a1[1];
  if ( result )
  {
    result = sub_108324(a1[2]);
    if ( result )
    {
      sub_107188(
        &unk_B341E,
        a1[2],
        COERCE_UNSIGNED_INT64(*a2),
        HIDWORD(COERCE_UNSIGNED_INT64(*a2)),
        COERCE_UNSIGNED_INT64(a2[1]),
        HIDWORD(COERCE_UNSIGNED_INT64(a2[1])),
        COERCE_UNSIGNED_INT64(a2[2]),
        HIDWORD(COERCE_UNSIGNED_INT64(a2[2])),
        v5,
        v6,
        savedregs);
      a1[173] = *(_DWORD *)a2;
      a1[174] = *((_DWORD *)a2 + 1);
      result = *((_DWORD *)a2 + 2);
      a1[175] = result;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x108324
// SYMBOL: sub_108324
int sub_108324()
{
  return ((int (*)(void))(dword_23DF24 + 4734307))();
}


// ======================================================================
