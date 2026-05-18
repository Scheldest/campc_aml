// ADDR: 0xf8250
// SYMBOL: operator delete(void *,uint,std::align_val_t)
int __fastcall operator delete(int a1, int a2, int a3)
{
  return operator delete(a1, a3);
}


// ======================================================================
// ADDR: 0xf825e
// SYMBOL: operator delete[](void *,uint,std::align_val_t)
int __fastcall operator delete[](int a1, int a2, int a3)
{
  return operator delete[](a1, a3);
}


// ======================================================================
