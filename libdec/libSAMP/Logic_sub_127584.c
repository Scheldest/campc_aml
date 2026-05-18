// ADDR: 0x1278f4
// SYMBOL: sub_1278F4
int __fastcall sub_1278F4(int a1, int a2, int a3, int a4)
{
  _DWORD v6[5]; // [sp+4h] [bp-14h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  v6[2] = a3;
  v6[0] = a4;
  v6[1] = a2;
  sub_127CF0(a1, v6);
  return a1;
}


// ======================================================================
// ADDR: 0x1279c0
// SYMBOL: sub_1279C0
int __fastcall sub_1279C0(int a1, int a2, int a3, int a4)
{
  _DWORD v6[5]; // [sp+4h] [bp-14h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  v6[2] = a3;
  v6[0] = a4;
  v6[1] = a2;
  sub_127ED0(a1, v6);
  return a1;
}


// ======================================================================
// ADDR: 0x127a80
// SYMBOL: sub_127A80
int __fastcall sub_127A80(int a1, int a2, int a3, int a4)
{
  _DWORD v6[5]; // [sp+4h] [bp-14h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  v6[2] = a3;
  v6[0] = a4;
  v6[1] = a2;
  sub_12817C(a1, v6);
  return a1;
}


// ======================================================================
// ADDR: 0x127c98
// SYMBOL: sub_127C98
int sub_127C98()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_3140C8;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_3140C8);
    if ( result )
    {
      dword_3140C0 = 0;
      _cxa_atexit((void (*)(void *))sub_123AD0, dword_3140B0, &off_22A540);
      return sub_2242B0(&byte_3140C8);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x127de4
// SYMBOL: sub_127DE4
int sub_127DE4()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_3140E8;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_3140E8);
    if ( result )
    {
      dword_3140E0 = 0;
      _cxa_atexit((void (*)(void *))sub_127B34, &unk_3140D0, &off_22A540);
      return sub_2242B0(&byte_3140E8);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x127e3c
// SYMBOL: sub_127E3C
int __fastcall sub_127E3C(int a1, int a2)
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
// ADDR: 0x127e68
// SYMBOL: sub_127E68
_DWORD *__fastcall sub_127E68(_DWORD *a1, int a2)
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
// ADDR: 0x128084
// SYMBOL: sub_128084
int sub_128084()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_314108;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_314108);
    if ( result )
    {
      dword_314100 = 0;
      _cxa_atexit((void (*)(void *))sub_127B54, &unk_3140F0, &off_22A540);
      return sub_2242B0(&byte_314108);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1280dc
// SYMBOL: sub_1280DC
int __fastcall sub_1280DC(int a1, int a2)
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
// ADDR: 0x128108
// SYMBOL: sub_128108
_DWORD *__fastcall sub_128108(_DWORD *a1, int a2)
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
