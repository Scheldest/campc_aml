// ADDR: 0x20fdb4
// SYMBOL: operator delete(void *,std::nothrow_t const&)
// attributes: thunk
void __fastcall operator delete(void *a1, const std::nothrow_t *a2)
{
  _ZdlPvRKSt9nothrow_t_0(a1, a2);
}


// ======================================================================
// ADDR: 0x20fdc0
// SYMBOL: operator delete[](void *,std::nothrow_t const&)
// attributes: thunk
void __fastcall operator delete[](void *a1, const std::nothrow_t *a2)
{
  _ZdaPvRKSt9nothrow_t_0(a1, a2);
}


// ======================================================================
// ADDR: 0x20fe84
// SYMBOL: operator delete(void *,std::align_val_t)
// attributes: thunk
int __fastcall operator delete(int a1, int a2)
{
  return opus_decoder_destroy_0(a1, a2);
}


// ======================================================================
// ADDR: 0x20fe88
// SYMBOL: operator delete(void *,std::align_val_t,std::nothrow_t const&)
// attributes: thunk
int operator delete()
{
  return _ZdlPvSt11align_val_tRKSt9nothrow_t_0();
}


// ======================================================================
// ADDR: 0x20fe92
// SYMBOL: operator delete[](void *,std::align_val_t)
// attributes: thunk
int __fastcall operator delete[](int a1, int a2)
{
  return operator delete(a1, a2);
}


// ======================================================================
// ADDR: 0x20fe96
// SYMBOL: operator delete[](void *,std::align_val_t,std::nothrow_t const&)
// attributes: thunk
int operator delete[]()
{
  return _ZdaPvSt11align_val_tRKSt9nothrow_t_0();
}


// ======================================================================
// ADDR: 0x21fd2c
// SYMBOL: operator delete(void *,std::nothrow_t const&)
// attributes: thunk
void __fastcall operator delete(void *a1, const std::nothrow_t *a2)
{
  _ZdlPvRKSt9nothrow_t_0(a1, a2);
}


// ======================================================================
// ADDR: 0x22425c
// SYMBOL: operator delete(void *,std::nothrow_t const&)
void __fastcall operator delete(void *a1, const std::nothrow_t *a2)
{
  operator delete(a1);
}


// ======================================================================
// ADDR: 0x2243b8
// SYMBOL: operator delete[](void *,std::nothrow_t const&)
void __fastcall operator delete[](void *a1, const std::nothrow_t *a2)
{
  operator delete[](a1);
}


// ======================================================================
// ADDR: 0x2248bc
// SYMBOL: operator delete(void *,std::align_val_t,std::nothrow_t const&)
int __fastcall operator delete(int a1, int a2)
{
  return operator delete(a1, a2);
}


// ======================================================================
// ADDR: 0x2248c8
// SYMBOL: operator delete[](void *,std::align_val_t,std::nothrow_t const&)
int __fastcall operator delete[](int a1, int a2)
{
  return operator delete[](a1, a2);
}


// ======================================================================
// ADDR: 0x229170
// SYMBOL: operator delete(void *,std::align_val_t)
// attributes: thunk
int __fastcall operator delete(int a1, int a2)
{
  return _ZdlPvSt11align_val_t(a1, a2);
}


// ======================================================================
// ADDR: 0x229180
// SYMBOL: operator delete[](void *,std::align_val_t)
// attributes: thunk
int __fastcall operator delete[](int a1, int a2)
{
  return _ZdaPvSt11align_val_t(a1, a2);
}


// ======================================================================
