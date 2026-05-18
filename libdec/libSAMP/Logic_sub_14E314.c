// ADDR: 0xf7ef0
// SYMBOL: sub_F7EF0
int __fastcall sub_F7EF0(__int64 a1, const char *a2, float a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // r5
  int result; // r0
  __int64 v12; // kr00_8

  v8 = a1;
  result = *(_DWORD *)(a1 + 12);
  if ( result )
  {
    LODWORD(a1) = a6;
    v12 = a1;
    result = sub_1082F4(*(_DWORD *)(v8 + 8));
    if ( result )
    {
      result = strcasecmp(a2, "SEX");
      if ( result )
      {
        if ( sub_F9748(dword_23DEF0, a2) )
          return sub_107188(
                   &unk_92DAA,
                   *(_DWORD *)(v8 + 8),
                   HIDWORD(v12),
                   a2,
                   COERCE_UNSIGNED_INT64(a3),
                   HIDWORD(COERCE_UNSIGNED_INT64(a3)),
                   a4,
                   a5,
                   v12,
                   a7,
                   a8);
        else
          return sub_F9EC8(dword_23DEF0, a2);
      }
    }
  }
  return result;
}


// ======================================================================
