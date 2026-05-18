// ADDR: 0x150564
// SYMBOL: sub_150564
int __fastcall sub_150564(int a1, _DWORD *a2)
{
  char v3[2055]; // [sp+1h] [bp-807h] BYREF

  sub_150F3C(v3, a2, a1, *a2);
  return sub_159B70(3, v3);
}


// ======================================================================
// ADDR: 0x151a48
// SYMBOL: sub_151A48
int __fastcall sub_151A48(int a1)
{
  int result; // r0

  if ( !*(_DWORD *)(a1 + 4) )
    return *(unsigned __int8 *)(a1 + 18) ^ 1;
  if ( *(_BYTE *)(a1 + 18) )
  {
    if ( sub_15DF00() )
      return 0;
    if ( *(_BYTE *)(a1 + 21) )
    {
      if ( *(_BYTE *)(a1 + 19) )
      {
        if ( !sub_15DF86(*(_DWORD *)(a1 + 4)) )
          return 0;
      }
      else if ( !*(_BYTE *)(a1 + 22) && !sub_15DF86(*(_DWORD *)(a1 + 4)) )
      {
        if ( !sub_15DF9A(*(_DWORD *)(a1 + 4)) )
          return 0;
        *(_BYTE *)(a1 + 22) = 1;
      }
    }
    return 4;
  }
  else
  {
    result = sub_151AA8(a1);
    if ( result )
      return 4;
  }
  return result;
}


// ======================================================================
// ADDR: 0x158d18
// SYMBOL: sub_158D18
int __fastcall sub_158D18(int a1, int a2)
{
  int v4; // r6
  int v5; // r0
  int v6; // r0
  int v7; // r6
  __int64 v8; // r0
  int result; // r0
  char *exception; // r4
  int v11; // r0
  int v12[5]; // [sp+4h] [bp-14h] BYREF

  v4 = *(_DWORD *)(a1 + 8);
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 8))(a2);
  ++*(_DWORD *)(a1 + 4);
  v6 = sub_164CB4(v4, v5);
  v12[0] = v6;
  if ( !v6 || (v7 = v6, !(*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 12))(a2, v6)) )
  {
    exception = (char *)j___cxa_allocate_exception(0x18u);
    v11 = sub_1649EC(exception);
    sub_1545C8(exception, "ApplyEffect", v11);
    j___cxa_throw(exception, (struct type_info *)&`typeinfo for'BassException, (void (*)(void *))sub_15466C);
  }
  v8 = *(_QWORD *)(a1 + 16);
  if ( (_DWORD)v8 == HIDWORD(v8) )
    return sub_158E8C(a1 + 12, v12);
  *(_DWORD *)v8 = v7;
  result = v8 + 4;
  *(_DWORD *)(a1 + 16) = result;
  return result;
}


// ======================================================================
