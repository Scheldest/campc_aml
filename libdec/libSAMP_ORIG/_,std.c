// ADDR: 0x60be0
// SYMBOL: operator delete(void *,std::nothrow_t const&)
// attributes: thunk
void __fastcall operator delete(void *a1, const std::nothrow_t *a2)
{
  _ZdlPvRKSt9nothrow_t_0(a1, a2);
}


// ======================================================================
// ADDR: 0xf8178
// SYMBOL: operator delete(void *,std::nothrow_t const&)
// attributes: thunk
void __fastcall operator delete(void *a1, const std::nothrow_t *a2)
{
  _ZdlPvRKSt9nothrow_t_0(a1, a2);
}


// ======================================================================
// ADDR: 0xf8184
// SYMBOL: operator delete[](void *,std::nothrow_t const&)
// attributes: thunk
void __fastcall operator delete[](void *a1, const std::nothrow_t *a2)
{
  _ZdaPvRKSt9nothrow_t_0(a1, a2);
}


// ======================================================================
// ADDR: 0xf8248
// SYMBOL: operator delete(void *,std::align_val_t)
// attributes: thunk
int __fastcall operator delete(int a1, int a2)
{
  return opus_decoder_destroy_0(a1, a2);
}


// ======================================================================
// ADDR: 0xf824c
// SYMBOL: operator delete(void *,std::align_val_t,std::nothrow_t const&)
// attributes: thunk
int operator delete()
{
  return _ZdlPvSt11align_val_tRKSt9nothrow_t_0();
}


// ======================================================================
// ADDR: 0xf8256
// SYMBOL: operator delete[](void *,std::align_val_t)
// attributes: thunk
int __fastcall operator delete[](int a1, int a2)
{
  return operator delete(a1, a2);
}


// ======================================================================
// ADDR: 0xf825a
// SYMBOL: operator delete[](void *,std::align_val_t,std::nothrow_t const&)
// attributes: thunk
int operator delete[]()
{
  return _ZdaPvSt11align_val_tRKSt9nothrow_t_0();
}


// ======================================================================
// ADDR: 0x10c140
// SYMBOL: operator delete(void *,std::nothrow_t const&)
void __fastcall operator delete(void *a1, const std::nothrow_t *a2)
{
  operator delete(a1);
}


// ======================================================================
// ADDR: 0x10c1a0
// SYMBOL: operator delete[](void *,std::nothrow_t const&)
void __fastcall operator delete[](void *a1, const std::nothrow_t *a2)
{
  operator delete[](a1);
}


// ======================================================================
// ADDR: 0x10c518
// SYMBOL: operator delete(void *,std::align_val_t,std::nothrow_t const&)
int __fastcall operator delete(int a1, int a2)
{
  return operator delete(a1, a2);
}


// ======================================================================
// ADDR: 0x10c524
// SYMBOL: operator delete[](void *,std::align_val_t,std::nothrow_t const&)
int __fastcall operator delete[](int a1, int a2)
{
  return operator delete[](a1, a2);
}


// ======================================================================
// ADDR: 0x10efc0
// SYMBOL: operator delete(void *,std::align_val_t)
// attributes: thunk
int __fastcall operator delete(int a1, int a2)
{
  return _ZdlPvSt11align_val_t(a1, a2);
}


// ======================================================================
// ADDR: 0x10efd0
// SYMBOL: operator delete[](void *,std::align_val_t)
// attributes: thunk
int __fastcall operator delete[](int a1, int a2)
{
  return _ZdaPvSt11align_val_t(a1, a2);
}


// ======================================================================
