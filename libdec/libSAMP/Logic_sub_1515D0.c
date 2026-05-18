// ADDR: 0x15160a
// SYMBOL: sub_15160A
int __fastcall sub_15160A(int a1, int *a2, int *a3)
{
  unsigned int v3; // r6
  unsigned int v7; // r10
  unsigned int v8; // r0
  unsigned int v9; // r8
  int v10; // r4
  unsigned int v11; // r1
  int v12; // r11
  int *v13; // r0
  int *v14; // r4
  _DWORD *v15; // r12
  unsigned int v16; // r0
  unsigned int v17; // r1
  unsigned int v18; // r0
  unsigned int v19; // r1
  int v20; // r11
  unsigned int v21; // r0
  unsigned int v22; // r1
  int v23; // r8
  _DWORD *v24; // r6
  unsigned int v25; // r1
  int v26; // r0
  int result; // r0
  _DWORD *v28; // [sp+4h] [bp-24h]
  int v29; // [sp+8h] [bp-20h]
  int v30; // [sp+8h] [bp-20h]

  v3 = a2[1];
  v7 = a3[1];
  v8 = ((v3 - ((v3 >> 1) & 0x55555555)) & 0x33333333) + (((v3 - ((v3 >> 1) & 0x55555555)) >> 2) & 0x33333333);
  v9 = (16843009 * ((v8 + (v8 >> 4)) & 0xF0F0F0F)) >> 24;
  if ( v9 > 1 )
  {
    if ( v7 >= v3 )
    {
      v10 = a1;
      sub_221798(a3[1], v3);
      a1 = v10;
      v7 = v11;
    }
  }
  else
  {
    v7 &= v3 - 1;
  }
  v12 = *a2;
  v13 = *(int **)(*a2 + 4 * v7);
  do
  {
    v14 = v13;
    v13 = (int *)*v13;
  }
  while ( v13 != a3 );
  v15 = a2 + 2;
  if ( v14 == a2 + 2 )
    goto LABEL_18;
  v16 = v14[1];
  if ( v9 > 1 )
  {
    if ( v16 >= v3 )
    {
      v29 = a1;
      sub_221798(v16, v3);
      v15 = a2 + 2;
      a1 = v29;
      v16 = v17;
    }
  }
  else
  {
    v16 &= v3 - 1;
  }
  if ( v16 != v7 )
  {
LABEL_18:
    if ( !*a3 )
      goto LABEL_19;
    v18 = *(_DWORD *)(*a3 + 4);
    if ( v9 > 1 )
    {
      if ( v18 >= v3 )
      {
        v28 = v15;
        v30 = a1;
        sub_221798(v18, v3);
        v15 = v28;
        a1 = v30;
        v18 = v19;
      }
    }
    else
    {
      v18 &= v3 - 1;
    }
    if ( v18 != v7 )
LABEL_19:
      *(_DWORD *)(v12 + 4 * v7) = 0;
  }
  v20 = *a3;
  if ( *a3 )
  {
    v21 = *(_DWORD *)(v20 + 4);
    if ( v9 > 1 )
    {
      if ( v21 >= v3 )
      {
        v22 = v3;
        v23 = a1;
        v24 = v15;
        sub_221798(v21, v22);
        v15 = v24;
        a1 = v23;
        v21 = v25;
      }
    }
    else
    {
      v21 &= v3 - 1;
    }
    if ( v21 != v7 )
    {
      *(_DWORD *)(*a2 + 4 * v21) = v14;
      v20 = *a3;
    }
  }
  else
  {
    v20 = 0;
  }
  *v14 = v20;
  *(_BYTE *)(a1 + 8) = 1;
  v26 = a2[3];
  *(_DWORD *)a1 = a3;
  *(_DWORD *)(a1 + 4) = v15;
  result = v26 - 1;
  *a3 = 0;
  a2[3] = result;
  return result;
}


// ======================================================================
