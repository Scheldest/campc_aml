// ADDR: 0x20e690
// SYMBOL: sub_20E690
int __fastcall sub_20E690(int a1, unsigned int a2)
{
  if ( a2 >= 0x40000000 )
    sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
  return operator new[](4 * a2);
}


// ======================================================================
