// ADDR: 0xf813c
// SYMBOL: operator new(uint,std::nothrow_t const&)
int __fastcall operator new(unsigned int a1, const std::nothrow_t *a2)
{
  return operator new(a1);
}


// ======================================================================
// ADDR: 0xf818c
// SYMBOL: operator new(uint,std::align_val_t)
void *__fastcall operator new(size_t a1, unsigned int a2)
{
  size_t v2; // r5
  size_t v3; // r4
  void (*new_handler)(void); // r0
  std::bad_alloc *exception; // r0
  void *v7; // r0
  void *v8; // [sp+0h] [bp-18h] BYREF

  v2 = a1;
  v3 = a2;
  if ( a2 <= 4 )
    v3 = 4;
  if ( !a1 )
    v2 = 1;
  while ( posix_memalign(&v8, v3, v2) )
  {
    new_handler = (void (*)(void))std::get_new_handler();
    if ( !new_handler )
    {
      exception = (std::bad_alloc *)j___cxa_allocate_exception(4u);
      v7 = (void *)std::bad_alloc::bad_alloc(exception);
      j___cxa_throw(v7, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))std::exception::~exception);
    }
    new_handler();
  }
  return v8;
}


// ======================================================================
// ADDR: 0xf8210
// SYMBOL: operator new(uint,std::align_val_t,std::nothrow_t const&)
void *__fastcall operator new(size_t a1, unsigned int a2)
{
  return operator new(a1, a2);
}


// ======================================================================
// ADDR: 0x10ef90
// SYMBOL: operator new(uint,std::align_val_t)
// attributes: thunk
void *__fastcall operator new(size_t a1, unsigned int a2)
{
  return _ZnwjSt11align_val_t(a1, a2);
}


// ======================================================================
