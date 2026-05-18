// ADDR: 0x10b314
// SYMBOL: sub_10B314
int sub_10B314()
{
  int v0; // r0
  int v1; // r4
  int v2; // r0

  v0 = (unsigned __int8)byte_263194;
  __dmb(0xBu);
  if ( !(v0 << 31) && j___cxa_guard_acquire((__guard *)&byte_263194) )
  {
    off_263190 = (int (__fastcall *)(_DWORD))(dword_23DF24 + 4240009);
    j___cxa_guard_release((__guard *)&byte_263194);
  }
  v1 = 0;
  v2 = off_263190(0);
  if ( v2 )
  {
    v1 = *(_DWORD *)(v2 + 20);
    if ( v1 )
      return v2;
  }
  return v1;
}


// ======================================================================
// ADDR: 0x10b380
// SYMBOL: sub_10B380
bool sub_10B380()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0

  v0 = (unsigned __int8)byte_26319C;
  __dmb(0xBu);
  if ( !(v0 << 31) && j___cxa_guard_acquire((__guard *)&byte_26319C) )
  {
    dword_263198 = dword_23DF24 + 10023185;
    j___cxa_guard_release((__guard *)&byte_26319C);
  }
  v1 = (unsigned __int8)byte_2631A4;
  __dmb(0xBu);
  if ( !(v1 << 31) && j___cxa_guard_acquire((__guard *)&byte_2631A4) )
  {
    dword_2631A0 = dword_23DF24 + 8494472;
    j___cxa_guard_release((__guard *)&byte_2631A4);
  }
  v2 = (unsigned __int8)byte_2631AC;
  __dmb(0xBu);
  if ( !(v2 << 31) && j___cxa_guard_acquire((__guard *)&byte_2631AC) )
  {
    dword_2631A8 = dword_23DF24 + 10035160;
    j___cxa_guard_release((__guard *)&byte_2631AC);
  }
  return *(_BYTE *)dword_263198 && *(_BYTE *)dword_2631A0 && *(_BYTE *)dword_2631A8 == 0;
}


// ======================================================================
// ADDR: 0x10b4a0
// SYMBOL: sub_10B4A0
int sub_10B4A0()
{
  int v1; // [sp+4h] [bp-Ch] BYREF

  sub_163D4C(0);
  sub_163CEC(0, 0);
  sub_163CA4(0);
  sub_163D1C(1);
  sub_163C8C(1);
  v1 = -1;
  sub_163C74(&v1);
  sub_163D80(1);
  return sub_163D98(0);
}


// ======================================================================
// ADDR: 0x10b4e4
// SYMBOL: sub_10B4E4
void *sub_10B4E4()
{
  char *v0; // r5
  size_t v1; // r6
  int v2; // r0
  _BYTE v4[128]; // [sp+0h] [bp-110h] BYREF
  _BYTE v5[127]; // [sp+80h] [bp-90h] BYREF
  char v6; // [sp+FFh] [bp-11h] BYREF

  sub_22178C((int)v5, 0x80u);
  sub_22178C((int)v4, 0x80u);
  sub_10B594(v5);
  v0 = &v6;
  v1 = 0;
  v2 = 0;
  do
  {
    if ( *v0 )
    {
      if ( ++v2 == 3 )
      {
        _memcpy_chk(v4, v0, v1 + 1, 128);
        j_memcpy(v0 + 1, v4, v1);
        v2 = 0;
        *v0 = 95;
      }
    }
    ++v1;
    --v0;
  }
  while ( v1 != 128 );
  sub_163C40(v5, &unk_263090);
  return &unk_263090;
}


// ======================================================================
