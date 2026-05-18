// ADDR: 0x10c1b8
// SYMBOL: sub_10C1B8
void __fastcall sub_10C1B8(void *base, size_t nmemb, size_t size, __compar_fn_t compar)
{
  qsort(base, nmemb, size, compar);
}


// ======================================================================
