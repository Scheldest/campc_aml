// ADDR: 0x20fd96
// SYMBOL: operator new[](uint,std::nothrow_t const&)
int __fastcall operator new[](unsigned int a1, const std::nothrow_t *a2)
{
  return operator new[](a1);
}


// ======================================================================
// ADDR: 0x20fe66
// SYMBOL: operator new[](uint,std::align_val_t)
// attributes: thunk
int operator new[]()
{
  return _ZnajSt11align_val_t_0();
}


// ======================================================================
// ADDR: 0x20fe6a
// SYMBOL: operator new[](uint,std::align_val_t,std::nothrow_t const&)
int operator new[]()
{
  return operator new[]();
}


// ======================================================================
// ADDR: 0x2248b0
// SYMBOL: operator new[](uint,std::align_val_t)
void *__fastcall operator new[](size_t a1, unsigned int a2)
{
  return operator new(a1, a2);
}


// ======================================================================
// ADDR: 0x229160
// SYMBOL: operator new[](uint,std::align_val_t)
// attributes: thunk
int operator new[]()
{
  return _ZnajSt11align_val_t();
}


// ======================================================================
