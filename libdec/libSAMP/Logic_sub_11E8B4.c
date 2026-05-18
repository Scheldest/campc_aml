// ADDR: 0x11ec54
// SYMBOL: sub_11EC54
int __fastcall sub_11EC54(int a1, int a2, int a3, int a4)
{
  _DWORD v6[5]; // [sp+4h] [bp-14h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  v6[2] = a3;
  v6[0] = a4;
  v6[1] = a2;
  sub_11F0AC(a1, v6);
  return a1;
}


// ======================================================================
// ADDR: 0x11ed20
// SYMBOL: sub_11ED20
int __fastcall sub_11ED20(int a1, int a2, int a3, int a4)
{
  _DWORD v6[5]; // [sp+4h] [bp-14h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  v6[2] = a3;
  v6[0] = a4;
  v6[1] = a2;
  sub_11F274(a1, v6);
  return a1;
}


// ======================================================================
// ADDR: 0x11edc8
// SYMBOL: sub_11EDC8
int __fastcall sub_11EDC8(int a1, int a2, int a3)
{
  _DWORD *v6; // r6
  int i; // r5
  int v8; // r5
  int v9; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r3
  int v13; // r0
  int result; // r0

  v6 = (_DWORD *)operator new(0x8C4u);
  for ( i = 0; i != 136; i += 17 )
    sub_22178C((int)&v6[i], 0x41u);
  v8 = 153;
  v6[136] = 0;
  do
  {
    sub_22178C((int)&v6[v8], 0x41u);
    v8 += 17;
  }
  while ( v8 != 561 );
  v9 = dword_23DF24;
  v10 = dword_23DF24 + a1;
  v11 = *(_DWORD *)(dword_23DF24 + a1 + 4);
  *v6 = *(_DWORD *)(dword_23DF24 + a1);
  v6[1] = v11;
  v12 = *(_DWORD *)(v9 + 6791440);
  v6[136] = *(_DWORD *)(v10 + 544);
  if ( v12 == v10 )
    *(_DWORD *)(v9 + 6791440) = v6;
  sub_1641C4(v9 + a3);
  v13 = dword_23DF24;
  *(_DWORD *)(dword_23DF24 + a3) = v6;
  sub_1641C4(v13 + a2);
  result = dword_23DF24;
  *(_DWORD *)(dword_23DF24 + a2) = v6;
  return result;
}


// ======================================================================
// ADDR: 0x11f054
// SYMBOL: sub_11F054
int sub_11F054()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_263860;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_263860);
    if ( result )
    {
      dword_263858 = 0;
      _cxa_atexit((void (*)(void *))sub_10CC6C, dword_263848, &off_22A540);
      return sub_2242B0(&byte_263860);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x11f1a8
// SYMBOL: sub_11F1A8
int sub_11F1A8()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_263880;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_263880);
    if ( result )
    {
      dword_263878 = 0;
      _cxa_atexit((void (*)(void *))sub_11EF88, &unk_263868, &off_22A540);
      return sub_2242B0(&byte_263880);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x11f200
// SYMBOL: sub_11F200
int __fastcall sub_11F200(int a1, int a2)
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
// ADDR: 0x11f22c
// SYMBOL: sub_11F22C
_DWORD *__fastcall sub_11F22C(_DWORD *a1, int a2)
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
// ADDR: 0x11f418
// SYMBOL: sub_11F418
int sub_11F418()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_2638A0;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_2638A0);
    if ( result )
    {
      dword_263898 = 0;
      _cxa_atexit((void (*)(void *))sub_10CC6C, dword_263888, &off_22A540);
      return sub_2242B0(&byte_2638A0);
    }
  }
  return result;
}


// ======================================================================
