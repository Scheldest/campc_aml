// ADDR: 0x17daf0
// SYMBOL: sub_17DAF0
void __fastcall sub_17DAF0(_DWORD *a1)
{
  int v2; // r5
  unsigned int v3; // r1
  int v4; // r0
  int v5; // r1
  int v6; // r3
  _DWORD *v7; // r6
  int v8; // r3
  int i; // r6
  void *v10; // r0
  int v11; // r0
  void *v12; // [sp+0h] [bp-20h] BYREF
  unsigned int v13; // [sp+4h] [bp-1Ch]
  unsigned int v14; // [sp+8h] [bp-18h]
  int v15; // [sp+Ch] [bp-14h]

  if ( *a1 )
  {
    v15 = 16;
    v2 = 0;
    v14 = 0;
    v12 = (void *)operator new[](0x40u);
    v13 = 0;
    sub_17DBC4(&v12, a1);
    v3 = v13;
    v4 = v15;
    if ( v14 < v13 )
      v2 = -v15;
    if ( v14 - v13 != v2 )
    {
      do
      {
        v5 = v3 + 1;
        v6 = v5 - v4;
        if ( v5 != v4 )
          v6 = v5;
        v13 = v6;
        if ( !v6 )
          v6 = v4;
        v7 = (_DWORD *)*((_DWORD *)v12 + v6 - 1);
        if ( v7[2] )
          sub_17DBC4(&v12, v7 + 2);
        if ( v7[3] )
          sub_17DBC4(&v12, v7 + 3);
        operator delete(v7);
        v3 = v13;
        v8 = 0;
        v4 = v15;
        if ( v14 < v13 )
          v8 = -v15;
      }
      while ( v14 - v13 != v8 );
    }
    for ( i = 0; i != 256; ++i )
    {
      v10 = (void *)a1[2 * i + 1];
      if ( v10 )
        operator delete[](v10);
    }
    v11 = v15;
    *a1 = 0;
    if ( v11 )
    {
      if ( v12 )
        operator delete[](v12);
    }
  }
}


// ======================================================================
