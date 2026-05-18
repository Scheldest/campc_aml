// ADDR: 0xf7068
// SYMBOL: sub_F7068
int __fastcall sub_F7068(std::__ndk1 *a1, char **a2)
{
  double v4; // r0
  double v5; // d8
  float v6; // s0

  std::__cloc(a1);
  v4 = strtod((const char *)a1, a2);
  v5 = v4;
  if ( COERCE_DOUBLE(*(_QWORD *)&v4 & 0x7FFFFFFFFFFFFFFFLL) != INFINITY
    && COERCE_DOUBLE(*(_QWORD *)&v4 & 0x7FFFFFFFFFFFFFFFLL) > 3.40282347e38 )
  {
    *(_DWORD *)_errno() = 34;
    v5 = COERCE_DOUBLE(vbsl_s64(vshld_n_s64(0x8000000080000000LL, 0x20u), *(__int64 *)&v5, 0x7FF0000000000000LL));
  }
  v6 = v5;
  return LODWORD(v6);
}


// ======================================================================
