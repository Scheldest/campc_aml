// ADDR: 0x15f12c
// SYMBOL: sub_15F12C
void __fastcall sub_15F12C(int a1, unsigned int a2)
{
  int v4; // r1
  void *v5; // r0
  int v6; // r1
  _DWORD *v7; // r11
  unsigned int v8; // r8
  unsigned int v9; // r0
  unsigned int v10; // r9
  void *v11; // r0
  unsigned int v12; // r1
  _DWORD *v13; // r6
  unsigned int v14; // r12
  unsigned int v15; // r0
  unsigned int v16; // r5
  unsigned int v17; // r1
  _DWORD *v18; // r2
  _DWORD *v19; // r1

  if ( a2 )
  {
    if ( a2 >= 0x40000000 )
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    v4 = operator new(4 * a2);
    v5 = *(void **)a1;
    *(_DWORD *)a1 = v4;
    if ( v5 )
      operator delete(v5);
    v6 = 0;
    *(_DWORD *)(a1 + 4) = a2;
    do
      *(_DWORD *)(*(_DWORD *)a1 + 4 * v6++) = 0;
    while ( a2 != v6 );
    v7 = *(_DWORD **)(a1 + 8);
    if ( v7 )
    {
      v8 = v7[1];
      v9 = ((a2 - ((a2 >> 1) & 0x55555555)) & 0x33333333) + (((a2 - ((a2 >> 1) & 0x55555555)) >> 2) & 0x33333333);
      v10 = (16843009 * ((v9 + (v9 >> 4)) & 0xF0F0F0F)) >> 24;
      if ( v10 > 1 )
      {
        if ( v8 >= a2 )
        {
          sub_221798(v7[1], a2);
          v8 = v12;
        }
      }
      else
      {
        v8 &= a2 - 1;
      }
      *(_DWORD *)(*(_DWORD *)a1 + 4 * v8) = a1 + 8;
      v13 = (_DWORD *)*v7;
      if ( *v7 )
      {
        v14 = a2 - 1;
        do
        {
          v15 = v13[1];
          if ( v10 > 1 )
          {
            if ( v15 >= a2 )
            {
              v16 = v14;
              sub_221798(v15, a2);
              v14 = v16;
              v15 = v17;
            }
          }
          else
          {
            v15 &= v14;
          }
          if ( v15 == v8 )
          {
            v7 = v13;
          }
          else
          {
            v18 = v13;
            if ( *(_DWORD *)(*(_DWORD *)a1 + 4 * v15) )
            {
              do
              {
                v19 = v18;
                v18 = (_DWORD *)*v18;
              }
              while ( v18 && v13[2] == v18[2] );
              *v7 = v18;
              *v19 = **(_DWORD **)(*(_DWORD *)a1 + 4 * v15);
              **(_DWORD **)(*(_DWORD *)a1 + 4 * v15) = v13;
            }
            else
            {
              *(_DWORD *)(*(_DWORD *)a1 + 4 * v15) = v7;
              v7 = v13;
              v8 = v15;
            }
          }
          v13 = (_DWORD *)*v7;
        }
        while ( *v7 );
      }
    }
  }
  else
  {
    v11 = *(void **)a1;
    *(_DWORD *)a1 = 0;
    if ( v11 )
      operator delete(v11);
    *(_DWORD *)(a1 + 4) = 0;
  }
}


// ======================================================================
