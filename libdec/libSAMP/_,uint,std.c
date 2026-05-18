// ADDR: 0x20fe8c
// SYMBOL: operator delete(void *,uint,std::align_val_t)
int __fastcall operator delete(int a1, int a2, int a3)
{
  return operator delete(a1, a3);
}


// ======================================================================
// ADDR: 0x20fe9a
// SYMBOL: operator delete[](void *,uint,std::align_val_t)
int __fastcall operator delete[](int a1, int a2, int a3)
{
  return operator delete[](a1, a3);
}


// ======================================================================
