// ADDR: 0x1449a8
// SYMBOL: sub_1449A8
int __fastcall sub_1449A8(int a1)
{
  int v2; // r4
  int v3; // r0
  _DWORD *v4; // r0
  int v5; // r6
  int v6; // r9
  char *v7; // r0
  unsigned int v8; // r3
  _DWORD *v10; // [sp+0h] [bp-30h]
  void *v11[10]; // [sp+8h] [bp-28h] BYREF

  v2 = 0;
  sub_17C2A4(dword_381BF4, 2, 0, 0);
  sub_17C814(dword_381BF4);
  do
  {
    v3 = **(_DWORD **)(a1 + 944);
    if ( *(_BYTE *)(v3 + v2 + 4020) )
    {
      v4 = *(_DWORD **)(v3 + 4 * v2 + 4);
      if ( v4 )
      {
        if ( *v4 )
        {
          v5 = sub_155FB0(dword_381A0C, (unsigned __int16)v2);
          if ( v5 != -1 )
          {
            v6 = dword_381BF4;
            v7 = (char *)sub_148E64(**(_DWORD **)(a1 + 944), (unsigned __int16)v2);
            v10 = sub_DC6DC(v11, v7);
            v8 = v5 & ~(v5 >> 31);
            if ( v8 >= 0x64 )
              v8 = 100;
            sub_17C868(v6, 0, 100, v8, v10, v2);
            if ( LOBYTE(v11[0]) << 31 )
              operator delete(v11[2]);
          }
        }
      }
    }
    ++v2;
  }
  while ( v2 != 1004 );
  return sub_17C2A4(dword_381BF4, 3, 1, 0);
}


// ======================================================================
