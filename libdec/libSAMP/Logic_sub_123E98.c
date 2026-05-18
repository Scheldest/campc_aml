// ADDR: 0x1240b8
// SYMBOL: sub_1240B8
int __fastcall sub_1240B8(int a1, int a2, int a3, int a4)
{
  _DWORD v6[5]; // [sp+4h] [bp-14h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  v6[2] = a3;
  v6[0] = a4;
  v6[1] = a2;
  sub_124258(a1, v6);
  return a1;
}


// ======================================================================
// ADDR: 0x124200
// SYMBOL: sub_124200
int sub_124200()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_263C30;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_263C30);
    if ( result )
    {
      dword_263C28 = 0;
      _cxa_atexit((void (*)(void *))sub_10CC6C, dword_263C18, &off_22A540);
      return sub_2242B0(&byte_263C30);
    }
  }
  return result;
}


// ======================================================================
