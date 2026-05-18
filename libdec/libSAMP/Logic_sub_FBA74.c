// ADDR: 0xf0b60
// SYMBOL: sub_F0B60
void sub_F0B60()
{
  sub_F0830();
  if ( dword_23DEEC )
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_23DEEC + 56))(dword_23DEEC);
  if ( dword_23DEF4 )
  {
    sub_141D3C();
    if ( *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 24) )
      sub_14F44C();
    if ( dword_23DF0C )
      sub_148198();
  }
  if ( dword_23DF04 )
    nullsub_6();
}


// ======================================================================
// ADDR: 0xfba98
// SYMBOL: sub_FBA98
int __fastcall sub_FBA98(int result)
{
  int v1; // r1
  __int64 i; // r4
  int v3; // r1
  int v4; // r1

  v1 = *(unsigned __int8 *)(result + 20);
  __dmb(0xBu);
  if ( !(v1 << 31) )
  {
    for ( i = *(_QWORD *)(result + 8); (_DWORD)i != HIDWORD(i); LODWORD(i) = i + 8 )
    {
      result = *(_DWORD *)i;
      v3 = *(unsigned __int8 *)(*(_DWORD *)i + 8);
      __dmb(0xBu);
      if ( v3 << 31 )
      {
        v4 = *(unsigned __int8 *)(result + 9);
        __dmb(0xBu);
        if ( !(v4 << 31) )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 16))(result);
      }
    }
  }
  return result;
}


// ======================================================================
