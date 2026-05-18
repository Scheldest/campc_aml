// ADDR: 0x119c88
// SYMBOL: sub_119C88
int __fastcall sub_119C88(int a1, int a2, int a3, int a4)
{
  _DWORD v6[5]; // [sp+4h] [bp-14h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  v6[2] = a3;
  v6[0] = a4;
  v6[1] = a2;
  sub_11AC28(a1, v6);
  return a1;
}


// ======================================================================
// ADDR: 0x11a8a4
// SYMBOL: sub_11A8A4
void __fastcall sub_11A8A4(int a1, void **a2)
{
  int v2; // r6
  void **v3; // r5

  if ( a2 )
  {
    v2 = -315792;
    v3 = a2 + 78947;
    do
    {
      if ( *((unsigned __int8 *)v3 - 8) << 31 )
        operator delete(*v3);
      v2 += 12;
      v3 -= 3;
    }
    while ( v2 );
    operator delete(a2, (const std::nothrow_t *)a2);
  }
}


// ======================================================================
// ADDR: 0x11a8e8
// SYMBOL: sub_11A8E8
int sub_11A8E8()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_263548;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_263548);
    if ( result )
    {
      dword_263540 = 0;
      _cxa_atexit((void (*)(void *))sub_11A748, &unk_263530, &off_22A540);
      return sub_2242B0(&byte_263548);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x11a940
// SYMBOL: sub_11A940
int __fastcall sub_11A940(int a1, int a2)
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
// ADDR: 0x11a96c
// SYMBOL: sub_11A96C
_DWORD *__fastcall sub_11A96C(_DWORD *a1, int a2)
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
// ADDR: 0x11aa44
// SYMBOL: sub_11AA44
int sub_11AA44()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_263568;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_263568);
    if ( result )
    {
      dword_263560 = 0;
      _cxa_atexit((void (*)(void *))sub_11A768, &unk_263550, &off_22A540);
      return sub_2242B0(&byte_263568);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x11aa9c
// SYMBOL: sub_11AA9C
int __fastcall sub_11AA9C(int a1, int a2)
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
// ADDR: 0x11aac8
// SYMBOL: sub_11AAC8
_DWORD *__fastcall sub_11AAC8(_DWORD *a1, int a2)
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
// ADDR: 0x11abd0
// SYMBOL: sub_11ABD0
int sub_11ABD0()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_263588;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_263588);
    if ( result )
    {
      dword_263580 = 0;
      _cxa_atexit((void (*)(void *))sub_10CC6C, dword_263570, &off_22A540);
      return sub_2242B0(&byte_263588);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x11acf8
// SYMBOL: sub_11ACF8
int sub_11ACF8()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_2635A8;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_2635A8);
    if ( result )
    {
      dword_2635A0 = 0;
      _cxa_atexit((void (*)(void *))sub_11A788, &unk_263590, &off_22A540);
      return sub_2242B0(&byte_2635A8);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x11ad50
// SYMBOL: sub_11AD50
int __fastcall sub_11AD50(int a1, int a2)
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
// ADDR: 0x11ad7c
// SYMBOL: sub_11AD7C
_DWORD *__fastcall sub_11AD7C(_DWORD *a1, int a2)
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
// ADDR: 0x11ae8c
// SYMBOL: sub_11AE8C
int sub_11AE8C()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_2635C8;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_2635C8);
    if ( result )
    {
      dword_2635C0 = 0;
      _cxa_atexit((void (*)(void *))sub_11A7A8, &unk_2635B0, &off_22A540);
      return sub_2242B0(&byte_2635C8);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x11aee4
// SYMBOL: sub_11AEE4
int __fastcall sub_11AEE4(int a1, int a2)
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
// ADDR: 0x11af10
// SYMBOL: sub_11AF10
_DWORD *__fastcall sub_11AF10(_DWORD *a1, int a2)
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
// ADDR: 0x11afd8
// SYMBOL: sub_11AFD8
int sub_11AFD8()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_2635E8;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_2635E8);
    if ( result )
    {
      dword_2635E0 = 0;
      _cxa_atexit((void (*)(void *))sub_11A7A8, &unk_2635D0, &off_22A540);
      return sub_2242B0(&byte_2635E8);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x11b0ac
// SYMBOL: sub_11B0AC
int sub_11B0AC()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_263608;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_263608);
    if ( result )
    {
      dword_263600 = 0;
      _cxa_atexit((void (*)(void *))sub_11A7A8, &unk_2635F0, &off_22A540);
      return sub_2242B0(&byte_263608);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x11b180
// SYMBOL: sub_11B180
int sub_11B180()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_263628;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_263628);
    if ( result )
    {
      dword_263620 = 0;
      _cxa_atexit((void (*)(void *))sub_11A7C8, &unk_263610, &off_22A540);
      return sub_2242B0(&byte_263628);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x11b1d8
// SYMBOL: sub_11B1D8
int __fastcall sub_11B1D8(int a1, int a2)
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
// ADDR: 0x11b204
// SYMBOL: sub_11B204
_DWORD *__fastcall sub_11B204(_DWORD *a1, int a2)
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
// ADDR: 0x11b2f8
// SYMBOL: sub_11B2F8
int sub_11B2F8()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_263648;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_263648);
    if ( result )
    {
      dword_263640 = 0;
      _cxa_atexit((void (*)(void *))sub_11A7E8, &unk_263630, &off_22A540);
      return sub_2242B0(&byte_263648);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x11b350
// SYMBOL: sub_11B350
int __fastcall sub_11B350(int a1, int a2)
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
// ADDR: 0x11b37c
// SYMBOL: sub_11B37C
_DWORD *__fastcall sub_11B37C(_DWORD *a1, int a2)
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
// ADDR: 0x11b454
// SYMBOL: sub_11B454
int sub_11B454()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_263668;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_263668);
    if ( result )
    {
      dword_263660 = 0;
      _cxa_atexit((void (*)(void *))sub_11A808, &unk_263650, &off_22A540);
      return sub_2242B0(&byte_263668);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x11b4ac
// SYMBOL: sub_11B4AC
int __fastcall sub_11B4AC(int a1, int a2)
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
// ADDR: 0x11b4d8
// SYMBOL: sub_11B4D8
_DWORD *__fastcall sub_11B4D8(_DWORD *a1, int a2)
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
