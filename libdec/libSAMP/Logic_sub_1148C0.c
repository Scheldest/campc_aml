// ADDR: 0x114e18
// SYMBOL: sub_114E18
int __fastcall sub_114E18(int a1)
{
  _DWORD *v2; // r0
  int result; // r0

  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_22B9F0;
  v2 = (_DWORD *)operator new(0x10u);
  v2[2] = 0;
  v2[3] = 0;
  *v2 = 1;
  v2[1] = 0;
  *(_DWORD *)(a1 + 8) = v2;
  result = a1;
  *(_BYTE *)(a1 + 12) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x114f7e
// SYMBOL: sub_114F7E
int __fastcall sub_114F7E(int a1, int a2, int a3, int a4)
{
  _DWORD v6[5]; // [sp+4h] [bp-14h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  v6[2] = a3;
  v6[0] = a4;
  v6[1] = a2;
  sub_115B90(a1, v6);
  return a1;
}


// ======================================================================
// ADDR: 0x11568c
// SYMBOL: sub_11568C
int sub_11568C()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_263490;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_263490);
    if ( result )
    {
      dword_263488 = 0;
      _cxa_atexit((void (*)(void *))sub_1152E8, &unk_263478, &off_22A540);
      return sub_2242B0(&byte_263490);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1156e4
// SYMBOL: sub_1156E4
int __fastcall sub_1156E4(int a1, int a2)
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
// ADDR: 0x115710
// SYMBOL: sub_115710
_DWORD *__fastcall sub_115710(_DWORD *a1, int a2)
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
// ADDR: 0x1157c8
// SYMBOL: sub_1157C8
int sub_1157C8()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_2634B0;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_2634B0);
    if ( result )
    {
      dword_2634A8 = 0;
      _cxa_atexit((void (*)(void *))sub_115308, &unk_263498, &off_22A540);
      return sub_2242B0(&byte_2634B0);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x115820
// SYMBOL: sub_115820
int __fastcall sub_115820(int a1, int a2)
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
// ADDR: 0x11584c
// SYMBOL: sub_11584C
_DWORD *__fastcall sub_11584C(_DWORD *a1, int a2)
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
// ADDR: 0x115930
// SYMBOL: sub_115930
int sub_115930()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_2634D0;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_2634D0);
    if ( result )
    {
      dword_2634C8 = 0;
      _cxa_atexit((void (*)(void *))sub_115328, &unk_2634B8, &off_22A540);
      return sub_2242B0(&byte_2634D0);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x115988
// SYMBOL: sub_115988
int __fastcall sub_115988(int a1, int a2)
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
// ADDR: 0x1159b4
// SYMBOL: sub_1159B4
_DWORD *__fastcall sub_1159B4(_DWORD *a1, int a2)
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
// ADDR: 0x115ac4
// SYMBOL: sub_115AC4
int sub_115AC4()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_2634F0;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_2634F0);
    if ( result )
    {
      dword_2634E8 = 0;
      _cxa_atexit((void (*)(void *))sub_115348, &unk_2634D8, &off_22A540);
      return sub_2242B0(&byte_2634F0);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x115b1c
// SYMBOL: sub_115B1C
int __fastcall sub_115B1C(int a1, int a2)
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
// ADDR: 0x115b48
// SYMBOL: sub_115B48
_DWORD *__fastcall sub_115B48(_DWORD *a1, int a2)
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
// ADDR: 0x115d3c
// SYMBOL: sub_115D3C
int sub_115D3C()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_263510;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_263510);
    if ( result )
    {
      dword_263508 = 0;
      _cxa_atexit((void (*)(void *))sub_115348, &unk_2634F8, &off_22A540);
      return sub_2242B0(&byte_263510);
    }
  }
  return result;
}


// ======================================================================
