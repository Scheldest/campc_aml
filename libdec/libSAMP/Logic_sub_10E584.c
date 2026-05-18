// ADDR: 0x10eb3c
// SYMBOL: sub_10EB3C
int __fastcall sub_10EB3C(int a1, int a2, int a3, int a4)
{
  _DWORD v6[5]; // [sp+4h] [bp-14h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  v6[2] = a3;
  v6[0] = a4;
  v6[1] = a2;
  sub_10F7EC(a1, v6);
  return a1;
}


// ======================================================================
// ADDR: 0x10f720
// SYMBOL: sub_10F720
int sub_10F720()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_2632C0;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_2632C0);
    if ( result )
    {
      dword_2632B8 = 0;
      _cxa_atexit((void (*)(void *))sub_10F688, &unk_2632A8, &off_22A540);
      return sub_2242B0(&byte_2632C0);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x10f778
// SYMBOL: sub_10F778
int __fastcall sub_10F778(int a1, int a2)
{
  int v3; // r0
  int v4; // r0

  v3 = *(_DWORD *)(a2 + 16);
  if ( v3 )
  {
    if ( a2 == v3 )
    {
      *(_DWORD *)(a1 + 16) = a1;
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a2 + 16) + 12))(*(_DWORD *)(a2 + 16), a1);
      return a1;
    }
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
  }
  else
  {
    v4 = 0;
  }
  *(_DWORD *)(a1 + 16) = v4;
  return a1;
}


// ======================================================================
// ADDR: 0x10f7a4
// SYMBOL: sub_10F7A4
_DWORD *__fastcall sub_10F7A4(_DWORD *a1, int a2)
{
  _DWORD *v3; // r0
  int v5; // r1
  int v6; // r0

  v3 = (_DWORD *)a1[4];
  a1[4] = 0;
  if ( a1 == v3 )
  {
    v5 = 4;
  }
  else
  {
    if ( !v3 )
      goto LABEL_6;
    v5 = 5;
  }
  (*(void (**)(void))(*v3 + 4 * v5))();
LABEL_6:
  v6 = *(_DWORD *)(a2 + 16);
  if ( v6 )
  {
    if ( a2 == v6 )
    {
      a1[4] = a1;
      (*(void (__fastcall **)(_DWORD, _DWORD *))(**(_DWORD **)(a2 + 16) + 12))(*(_DWORD *)(a2 + 16), a1);
    }
    else
    {
      a1[4] = v6;
      *(_DWORD *)(a2 + 16) = 0;
    }
  }
  else
  {
    a1[4] = 0;
  }
  return a1;
}


// ======================================================================
// ADDR: 0x10f998
// SYMBOL: sub_10F998
int sub_10F998()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_2632E0;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_2632E0);
    if ( result )
    {
      dword_2632D8 = 0;
      _cxa_atexit((void (*)(void *))sub_10F688, &unk_2632C8, &off_22A540);
      return sub_2242B0(&byte_2632E0);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x10fa1c
// SYMBOL: sub_10FA1C
int sub_10FA1C()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_263300;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_263300);
    if ( result )
    {
      dword_2632F8 = 0;
      _cxa_atexit((void (*)(void *))sub_10F688, &unk_2632E8, &off_22A540);
      return sub_2242B0(&byte_263300);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x10faa0
// SYMBOL: sub_10FAA0
int sub_10FAA0()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_263320;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_263320);
    if ( result )
    {
      dword_263318 = 0;
      _cxa_atexit((void (*)(void *))sub_10F688, &unk_263308, &off_22A540);
      return sub_2242B0(&byte_263320);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x10fb24
// SYMBOL: sub_10FB24
int sub_10FB24()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_263340;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_263340);
    if ( result )
    {
      dword_263338 = 0;
      _cxa_atexit((void (*)(void *))sub_10F688, &unk_263328, &off_22A540);
      return sub_2242B0(&byte_263340);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x10fba8
// SYMBOL: sub_10FBA8
int sub_10FBA8()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_263360;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_263360);
    if ( result )
    {
      dword_263358 = 0;
      _cxa_atexit((void (*)(void *))sub_10F688, &unk_263348, &off_22A540);
      return sub_2242B0(&byte_263360);
    }
  }
  return result;
}


// ======================================================================
