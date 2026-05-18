// ADDR: 0xecde8
// SYMBOL: sub_ECDE8
int sub_ECDE8()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_23DC80;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_23DC80);
    if ( result )
    {
      qword_23DC48[0] = 0LL;
      qword_23DC48[1] = 0LL;
      qword_23DC48[2] = 0LL;
      qword_23DC48[3] = 0LL;
      qword_23DC48[4] = 0LL;
      qword_23DC48[5] = 0LL;
      dword_23DC7C = 0;
      dword_23DC78 = 0;
      _cxa_atexit((void (*)(void *))sub_ED3D4, qword_23DC48, &off_22A540);
      return sub_2242B0(&byte_23DC80);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xece5c
// SYMBOL: sub_ECE5C
unsigned int __fastcall sub_ECE5C(int a1, int a2)
{
  unsigned int v3; // r0
  __int64 v4; // r2
  unsigned int result; // r0
  _DWORD v6[3]; // [sp+4h] [bp-Ch] BYREF

  v3 = *(_DWORD *)(a1 + 52);
  v6[0] = a2;
  if ( v3 > 9 )
  {
    v4 = *(_QWORD *)(a1 + 44);
    if ( (_DWORD)v4 == HIDWORD(v4) )
    {
      sub_ED3E8(a1 + 40, v6);
      v3 = *(_DWORD *)(a1 + 52);
    }
    else
    {
      *(_DWORD *)v4 = a2;
      *(_DWORD *)(a1 + 44) = v4 + 4;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4 * v3) = a2;
  }
  result = v3 + 1;
  *(_DWORD *)(a1 + 52) = result;
  return result;
}


// ======================================================================
// ADDR: 0xece98
// SYMBOL: sub_ECE98
int sub_ECE98()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_23DCC0;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_23DCC0);
    if ( result )
    {
      qword_23DC88[0] = 0LL;
      qword_23DC88[1] = 0LL;
      qword_23DC88[2] = 0LL;
      qword_23DC88[3] = 0LL;
      qword_23DC88[4] = 0LL;
      qword_23DC88[5] = 0LL;
      dword_23DCBC = 0;
      dword_23DCB8 = 0;
      _cxa_atexit((void (*)(void *))sub_ED3D4, qword_23DC88, &off_22A540);
      return sub_2242B0(&byte_23DCC0);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xecf0c
// SYMBOL: sub_ECF0C
int sub_ECF0C()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_23DD00;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_23DD00);
    if ( result )
    {
      qword_23DCC8[0] = 0LL;
      qword_23DCC8[1] = 0LL;
      qword_23DCC8[2] = 0LL;
      qword_23DCC8[3] = 0LL;
      qword_23DCC8[4] = 0LL;
      qword_23DCC8[5] = 0LL;
      dword_23DCFC = 0;
      dword_23DCF8 = 0;
      _cxa_atexit((void (*)(void *))sub_ED3D4, qword_23DCC8, &off_22A540);
      return sub_2242B0(&byte_23DD00);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xecf80
// SYMBOL: sub_ECF80
int sub_ECF80()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_23DD40;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_23DD40);
    if ( result )
    {
      qword_23DD08[0] = 0LL;
      qword_23DD08[1] = 0LL;
      qword_23DD08[2] = 0LL;
      qword_23DD08[3] = 0LL;
      qword_23DD08[4] = 0LL;
      qword_23DD08[5] = 0LL;
      dword_23DD3C = 0;
      dword_23DD38 = 0;
      _cxa_atexit((void (*)(void *))sub_ED3D4, qword_23DD08, &off_22A540);
      return sub_2242B0(&byte_23DD40);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xecff4
// SYMBOL: sub_ECFF4
int sub_ECFF4()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_23DD80;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_23DD80);
    if ( result )
    {
      qword_23DD48[0] = 0LL;
      qword_23DD48[1] = 0LL;
      qword_23DD48[2] = 0LL;
      qword_23DD48[3] = 0LL;
      qword_23DD48[4] = 0LL;
      qword_23DD48[5] = 0LL;
      dword_23DD7C = 0;
      dword_23DD78 = 0;
      _cxa_atexit((void (*)(void *))sub_ED3D4, qword_23DD48, &off_22A540);
      return sub_2242B0(&byte_23DD80);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xed068
// SYMBOL: sub_ED068
int sub_ED068()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_23DDC0;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_23DDC0);
    if ( result )
    {
      qword_23DD88[0] = 0LL;
      qword_23DD88[1] = 0LL;
      qword_23DD88[2] = 0LL;
      qword_23DD88[3] = 0LL;
      qword_23DD88[4] = 0LL;
      qword_23DD88[5] = 0LL;
      dword_23DDBC = 0;
      dword_23DDB8 = 0;
      _cxa_atexit((void (*)(void *))sub_ED3D4, qword_23DD88, &off_22A540);
      return sub_2242B0(&byte_23DDC0);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xed0dc
// SYMBOL: sub_ED0DC
int sub_ED0DC()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_23DE00;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_23DE00);
    if ( result )
    {
      qword_23DDC8[0] = 0LL;
      qword_23DDC8[1] = 0LL;
      qword_23DDC8[2] = 0LL;
      qword_23DDC8[3] = 0LL;
      qword_23DDC8[4] = 0LL;
      qword_23DDC8[5] = 0LL;
      dword_23DDFC = 0;
      dword_23DDF8 = 0;
      _cxa_atexit((void (*)(void *))sub_ED3D4, qword_23DDC8, &off_22A540);
      return sub_2242B0(&byte_23DE00);
    }
  }
  return result;
}


// ======================================================================
