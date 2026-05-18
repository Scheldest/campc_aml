// ADDR: 0x181f6e
// SYMBOL: sub_181F6E
int __fastcall sub_181F6E(unsigned __int8 *a1, void *a2)
{
  __int64 v4; // r0
  int v5; // r6

  LODWORD(v4) = (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 44))(a1);
  HIDWORD(v4) = a1[2020] == 0;
  v5 = v4 | HIDWORD(v4);
  if ( !v4 )
    j_memcpy(a2, a1 + 932, 0x400u);
  return v5 ^ 1;
}


// ======================================================================
