// ADDR: 0x7db4c
// SYMBOL: sub_7DB4C
bool __fastcall sub_7DB4C(int a1)
{
  return *(unsigned __int16 *)(a1 + 8) != 0xFFFF;
}


// ======================================================================
// ADDR: 0x7db5a
// SYMBOL: sub_7DB5A
int __fastcall sub_7DB5A(int a1)
{
  return *(unsigned __int16 *)(a1 + 8);
}


// ======================================================================
// ADDR: 0x7db60
// SYMBOL: sub_7DB60
bool __fastcall sub_7DB60(int a1)
{
  return (unsigned int)(off_1ABF44(*(_DWORD *)(a1 + 4), 0, 0) - 1) < 0xFFFFFFFE;
}


// ======================================================================
// ADDR: 0x7db8c
// SYMBOL: sub_7DB8C
int __fastcall sub_7DB8C(int a1)
{
  int result; // r0

  off_1ABEF8(*(_DWORD *)(a1 + 4));
  off_1ABF50(*(_DWORD *)(a1 + 4), off_1ABF50, 0, 0, 0);
  j_opus_decoder_ctl(*(_DWORD *)(a1 + 64), 4028);
  *(_BYTE *)a1 = 0;
  *(_BYTE *)(a1 + 9672) = 0;
  *(_DWORD *)(a1 + 9668) = 0;
  result = 0xFFFF;
  *(_WORD *)(a1 + 8) = -1;
  return result;
}


// ======================================================================
// ADDR: 0x85628
// SYMBOL: sub_85628
void __noreturn sub_85628()
{
  _DWORD *exception; // r0

  exception = j___cxa_allocate_exception(4u);
  *exception = &off_111560;
  j___cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::bad_function_call,
    (void (*)(void *))std::exception::~exception);
}


// ======================================================================
