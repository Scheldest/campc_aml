// ADDR: 0xde834
// SYMBOL: sub_DE834
int __fastcall sub_DE834(int a1, int a2, char *a3)
{
  int v5; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r2
  char v9; // r3

  if ( a2 >= 1 )
  {
    v5 = a2;
    do
    {
      v6 = *(_DWORD *)(a1 + 8);
      v7 = v6 + 1;
      if ( *(_DWORD *)(a1 + 12) < (unsigned int)(v6 + 1) )
      {
        (**(void (__fastcall ***)(int))a1)(a1);
        v6 = *(_DWORD *)(a1 + 8);
        v7 = v6 + 1;
      }
      v8 = *(_DWORD *)(a1 + 4);
      --v5;
      v9 = *a3;
      *(_DWORD *)(a1 + 8) = v7;
      *(_BYTE *)(v8 + v6) = v9;
    }
    while ( v5 );
  }
  return a1;
}


// ======================================================================
// ADDR: 0xde870
// SYMBOL: sub_DE870
int __fastcall sub_DE870(unsigned int a1, int a2)
{
  int v3; // r0
  unsigned int v4; // r2
  unsigned int v6; // r1
  int v7; // r2
  char v8; // r1
  char *v9; // r9
  int v10; // r0
  char v11; // r10
  int v12; // r1
  int v13; // r2
  int v14; // r0
  char v15; // r9
  int v16; // r1
  int v17; // r0
  char *v18; // r6
  char v19; // r5
  int v20; // r1
  int v21; // r2
  int v22; // r0
  char v23; // r5
  int v24; // r1
  int v25; // r2

  v4 = *(_DWORD *)(a2 + 12);
  v3 = *(_DWORD *)(a2 + 8);
  v6 = v3 + 1;
  if ( (int)a1 <= -1 )
  {
    if ( v4 < v6 )
    {
      (**(void (__fastcall ***)(int))a2)(a2);
      v3 = *(_DWORD *)(a2 + 8);
      v6 = v3 + 1;
    }
    v7 = *(_DWORD *)(a2 + 4);
    a1 = -a1;
    *(_DWORD *)(a2 + 8) = v6;
    v8 = 45;
  }
  else
  {
    if ( v4 < v6 )
    {
      (**(void (__fastcall ***)(int))a2)(a2);
      v3 = *(_DWORD *)(a2 + 8);
      v6 = v3 + 1;
    }
    v7 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 8) = v6;
    v8 = 43;
  }
  *(_BYTE *)(v7 + v3) = v8;
  if ( a1 >= 0x64 )
  {
    v9 = &a00010203040506[2 * (a1 / 0x64)];
    if ( a1 >= 0x3E8 )
    {
      v10 = *(_DWORD *)(a2 + 8);
      v11 = *v9;
      v12 = v10 + 1;
      if ( *(_DWORD *)(a2 + 12) < (unsigned int)(v10 + 1) )
      {
        (**(void (__fastcall ***)(int))a2)(a2);
        v10 = *(_DWORD *)(a2 + 8);
        v12 = v10 + 1;
      }
      v13 = *(_DWORD *)(a2 + 4);
      *(_DWORD *)(a2 + 8) = v12;
      *(_BYTE *)(v13 + v10) = v11;
    }
    v14 = *(_DWORD *)(a2 + 8);
    v15 = v9[1];
    v16 = v14 + 1;
    if ( *(_DWORD *)(a2 + 12) < (unsigned int)(v14 + 1) )
    {
      (**(void (__fastcall ***)(int))a2)(a2);
      v14 = *(_DWORD *)(a2 + 8);
      v16 = v14 + 1;
    }
    *(_DWORD *)(a2 + 8) = v16;
    a1 %= 0x64u;
    *(_BYTE *)(*(_DWORD *)(a2 + 4) + v14) = v15;
  }
  v17 = *(_DWORD *)(a2 + 8);
  v18 = &a00010203040506[2 * a1];
  v19 = *v18;
  v20 = v17 + 1;
  if ( *(_DWORD *)(a2 + 12) < (unsigned int)(v17 + 1) )
  {
    (**(void (__fastcall ***)(int))a2)(a2);
    v17 = *(_DWORD *)(a2 + 8);
    v20 = v17 + 1;
  }
  v21 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 8) = v20;
  *(_BYTE *)(v21 + v17) = v19;
  v22 = *(_DWORD *)(a2 + 8);
  v23 = v18[1];
  v24 = v22 + 1;
  if ( *(_DWORD *)(a2 + 12) < (unsigned int)(v22 + 1) )
  {
    (**(void (__fastcall ***)(int))a2)(a2);
    v22 = *(_DWORD *)(a2 + 8);
    v24 = v22 + 1;
  }
  v25 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 8) = v24;
  *(_BYTE *)(v25 + v22) = v23;
  return a2;
}


// ======================================================================
