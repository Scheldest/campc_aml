// ADDR: 0x10c998
// SYMBOL: sub_10C998
int __fastcall sub_10C998(void (**a1)(void))
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  float v7; // s16
  float v8; // s20
  float v9; // s18
  float v10; // s2
  float v11; // s18
  float v12; // s16
  int result; // r0
  _BYTE v14[64]; // [sp+8h] [bp-90h] BYREF
  _BYTE v15[80]; // [sp+48h] [bp-50h] BYREF

  v2 = (unsigned __int8)byte_2631E0;
  __dmb(0xBu);
  if ( !(v2 << 31) && j___cxa_guard_acquire((__guard *)&byte_2631E0) )
  {
    dword_2631DC = dword_23DF24 + 6840224;
    j___cxa_guard_release((__guard *)&byte_2631E0);
  }
  v3 = (unsigned __int8)byte_2631E8;
  __dmb(0xBu);
  if ( !(v3 << 31) && j___cxa_guard_acquire((__guard *)&byte_2631E8) )
  {
    dword_2631E4 = dword_23DF24 + 7940980;
    j___cxa_guard_release((__guard *)&byte_2631E8);
  }
  v4 = (unsigned __int8)byte_2631F0;
  __dmb(0xBu);
  if ( !(v4 << 31) && j___cxa_guard_acquire((__guard *)&byte_2631F0) )
  {
    dword_2631EC = dword_23DF24 + 10471680;
    j___cxa_guard_release((__guard *)&byte_2631F0);
  }
  v5 = (unsigned __int8)byte_2631F8;
  __dmb(0xBu);
  if ( !(v5 << 31) && j___cxa_guard_acquire((__guard *)&byte_2631F8) )
  {
    dword_2631F4 = dword_23DF24 + 10471684;
    j___cxa_guard_release((__guard *)&byte_2631F8);
  }
  v6 = (unsigned __int8)byte_263200;
  __dmb(0xBu);
  if ( !(v6 << 31) && j___cxa_guard_acquire((__guard *)&byte_263200) )
  {
    dword_2631FC = dword_23DF24 + 10655672;
    j___cxa_guard_release((__guard *)&byte_263200);
  }
  (*a1)();
  v7 = (float)*(int *)dword_2631EC;
  v8 = (float)*(int *)dword_2631F4;
  v9 = *(float *)dword_2631FC;
  sub_10CC44(
    v15,
    *(_DWORD *)dword_2631E4,
    "MEM: %d/%dMiB",
    *(_DWORD *)dword_2631E4 >> 20,
    *(_DWORD *)dword_2631DC >> 20);
  sub_163C40(v15, v14);
  sub_163D1C(1);
  v10 = v7 / 640.0;
  v11 = v9 * 32.0;
  v12 = (float)(v8 / 355.0) * 200.0;
  sub_163D64(v10 * 4.0, v12 + v11, v14);
  result = dword_23DEF4;
  if ( dword_23DEF4 )
  {
    result = **(_DWORD **)(dword_23DEF4 + 944);
    if ( result )
    {
      sub_10CC44(v15, 5024, "ID: %d", *(unsigned __int16 *)(result + 5024));
      sub_163C40(v15, v14);
      return sub_163D64(v10 * 4.0, (float)(v11 + v11) + v12, v14);
    }
  }
  return result;
}


// ======================================================================
