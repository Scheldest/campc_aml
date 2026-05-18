// ADDR: 0x162f64
// SYMBOL: sub_162F64
int *__fastcall sub_162F64(int *a1, int a2, int a3, int a4, int a5)
{
  int v6; // r5
  int v7; // r0
  std::runtime_error *exception; // r4

  v6 = dword_23DF24 + 8521108;
  v7 = ((int (__fastcall *)(int))((char *)&unk_36D7A9 + dword_23DF24))(dword_23DF24 + 8521108);
  *a1 = v7;
  if ( !v7 )
  {
    if ( *(_DWORD *)v6 )
    {
      if ( !a5 && *(_DWORD *)(*(_DWORD *)v6 + 32) )
      {
        exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
        std::runtime_error::runtime_error(exception, "FxManager_c::CreateFxSystem return nullptr");
      }
      else
      {
        exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
        std::runtime_error::runtime_error(exception, "Effect not found");
      }
    }
    else
    {
      exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
      std::runtime_error::runtime_error(exception, "Blueprint is not present");
    }
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))std::underflow_error::~underflow_error);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x163050
// SYMBOL: sub_163050
int __fastcall sub_163050(int a1)
{
  return *(_DWORD *)a1;
}


// ======================================================================
// ADDR: 0x163054
// SYMBOL: sub_163054
int __fastcall sub_163054(_DWORD *a1)
{
  return ((int (__fastcall *)(_DWORD))((char *)&unk_36E0D1 + dword_23DF24))(*a1);
}


// ======================================================================
// ADDR: 0x163070
// SYMBOL: sub_163070
int __fastcall sub_163070(_DWORD *a1)
{
  return ((int (__fastcall *)(_DWORD))((char *)&unk_36E1A9 + dword_23DF24))(*a1);
}


// ======================================================================
// ADDR: 0x16308c
// SYMBOL: sub_16308C
int __fastcall sub_16308C(_DWORD *a1)
{
  return ((int (__fastcall *)(_DWORD))((char *)&unk_36E1E1 + dword_23DF24))(*a1);
}


// ======================================================================
