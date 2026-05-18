// ADDR: 0xf6820
// SYMBOL: sub_F6820
int __fastcall sub_F6820(int a1, unsigned int a2)
{
  if ( a2 >= 0x40000000 )
    sub_7B270((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
  return operator new[](4 * a2);
}


// ======================================================================
