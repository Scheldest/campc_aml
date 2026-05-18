// ADDR: 0xdd992
// SYMBOL: sub_DD992
int __fastcall sub_DD992(int a1, int a2, int a3)
{
  int v4; // r0
  int v6; // r5
  char *v8; // r6

  v4 = *(unsigned __int8 *)(a3 + 4);
  v6 = a2;
  if ( v4 == 1 )
    return sub_DD9D2(a1, a2, a3);
  if ( a2 )
  {
    v8 = (char *)(a3 + v4);
    do
    {
      sub_DCF30(a1, (char *)a3, v8);
      --v6;
    }
    while ( v6 );
  }
  return a1;
}


// ======================================================================
// ADDR: 0xdda0c
// SYMBOL: sub_DDA0C
int __fastcall sub_DDA0C(unsigned __int8 *a1, int a2, char *a3, int a4)
{
  int v7; // r3
  unsigned __int8 *v9; // r2
  int v10; // r0
  int v11; // r6
  int v12; // r0
  int v13; // r1
  int v14; // r9
  int v15; // r0
  unsigned __int8 v16; // r6
  int v17; // r1
  int v18; // r2
  int v19; // r0
  char v20; // r6
  int v21; // r1
  int v22; // r2
  _DWORD v24[2]; // [sp+8h] [bp-808h] BYREF
  void (__fastcall **v25)(_DWORD); // [sp+10h] [bp-800h] BYREF
  void *v26; // [sp+14h] [bp-7FCh]
  int v27; // [sp+18h] [bp-7F8h]
  unsigned int v28; // [sp+1Ch] [bp-7F4h]
  _DWORD v29[508]; // [sp+20h] [bp-7F0h] BYREF

  v27 = 1;
  v7 = *a1;
  v28 = 500;
  v26 = v29;
  v9 = (unsigned __int8 *)*((_DWORD *)a1 + 2);
  v24[1] = 0;
  v25 = (void (__fastcall **)(_DWORD))&off_22A5A8;
  v29[0] = 0;
  if ( !(v7 << 31) )
    v9 = a1 + 1;
  v24[0] = v9;
  while ( 1 )
  {
    v10 = sub_DD93C(a1, (int)v24);
    v11 = v10;
    if ( !v10 || v10 >= a4 )
      break;
    v12 = v27;
    v13 = v27 + 1;
    if ( v28 < v27 + 1 )
    {
      (*v25)(&v25);
      v12 = v27;
      v13 = v27 + 1;
    }
    v27 = v13;
    *((_DWORD *)v26 + v12) = v11;
  }
  if ( a4 >= 1 )
  {
    v14 = v27 - 1;
    do
    {
      if ( a4 == *((_DWORD *)v26 + v14) )
      {
        v15 = *(_DWORD *)(a2 + 8);
        v16 = a1[12];
        v17 = v15 + 1;
        if ( *(_DWORD *)(a2 + 12) < (unsigned int)(v15 + 1) )
        {
          (**(void (__fastcall ***)(int))a2)(a2);
          v15 = *(_DWORD *)(a2 + 8);
          v17 = v15 + 1;
        }
        v18 = *(_DWORD *)(a2 + 4);
        --v14;
        *(_DWORD *)(a2 + 8) = v17;
        *(_BYTE *)(v18 + v15) = v16;
      }
      v19 = *(_DWORD *)(a2 + 8);
      v20 = *a3;
      v21 = v19 + 1;
      if ( *(_DWORD *)(a2 + 12) < (unsigned int)(v19 + 1) )
      {
        (**(void (__fastcall ***)(int))a2)(a2);
        v19 = *(_DWORD *)(a2 + 8);
        v21 = v19 + 1;
      }
      v22 = *(_DWORD *)(a2 + 4);
      ++a3;
      --a4;
      *(_DWORD *)(a2 + 8) = v21;
      *(_BYTE *)(v22 + v19) = v20;
    }
    while ( a4 );
  }
  if ( v26 != v29 )
    operator delete(v26);
  return a2;
}


// ======================================================================
