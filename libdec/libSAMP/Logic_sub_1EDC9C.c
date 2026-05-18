// ADDR: 0x1eec44
// SYMBOL: sub_1EEC44
__int64 __fastcall sub_1EEC44(int a1, int a2, unsigned __int8 *a3)
{
  __int64 v4; // r0

  LODWORD(v4) = sub_1EE59C(a2, a3);
  HIDWORD(v4) = *(_DWORD *)(v4 + 8);
  *(_QWORD *)a1 = *(_QWORD *)v4;
  *(_DWORD *)(a1 + 8) = HIDWORD(v4);
  return sub_1EE5C6(v4);
}


// ======================================================================
// ADDR: 0x1eec64
// SYMBOL: sub_1EEC64
int sub_1EEC64(__int64 a1, ...)
{
  unsigned int v2; // r0
  unsigned int v3; // r6
  int v4; // r0
  _BYTE v6[256]; // [sp+14h] [bp-114h] BYREF
  int v7; // [sp+114h] [bp-14h]
  va_list va; // [sp+130h] [bp+8h] BYREF

  va_start(va, a1);
  sub_1EE5C6(a1);
  v2 = _vsnprintf_chk(v6, 256, 0, 256, (const char *)HIDWORD(a1), va);
  v3 = v2;
  if ( v2 )
  {
    if ( v2 > 0xFF )
    {
      sub_1EED24(a1, v2);
      v4 = *(_DWORD *)(a1 + 8);
      if ( !(*(unsigned __int8 *)a1 << 31) )
        v4 = a1 + 1;
      _vsnprintf_chk(v4, v3 + 1, 0, -1, (const char *)HIDWORD(a1), va);
    }
    else
    {
      std::string::assign(a1, v6, v2);
    }
  }
  return v7;
}


// ======================================================================
