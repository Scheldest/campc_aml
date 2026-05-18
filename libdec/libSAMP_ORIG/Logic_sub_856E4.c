// ADDR: 0x84a98
// SYMBOL: sub_84A98
int __fastcall sub_84A98(_DWORD *a1)
{
  int *i; // r5
  int *v3; // r11
  int v4; // r6
  int v5; // r4
  int j; // r8
  __int16 v7; // r1
  int v8; // r0
  int k; // r4
  int v10; // r8
  __int16 v11; // r1
  int v12; // r0
  int v13; // r8
  int m; // r4
  int v15; // r6
  __int16 v16; // r1
  int v17; // r0
  __int16 v19; // [sp+2h] [bp-26h] BYREF
  __int16 v20; // [sp+4h] [bp-24h] BYREF
  __int16 v21; // [sp+6h] [bp-22h] BYREF
  int v22; // [sp+8h] [bp-20h]

  v3 = (int *)a1[8];
  for ( i = (int *)a1[7]; i != v3; ++i )
  {
    v4 = *i;
    if ( *(_BYTE *)(*i + 1) )
    {
      *(_BYTE *)(v4 + 1) = 0;
      if ( sub_7DB4C(v4) )
      {
        v5 = a1[11];
        for ( j = a1[10]; j != v5; j += 24 )
        {
          if ( *(_DWORD *)(j + 16) )
          {
            v7 = sub_7DB5A(v4);
            v8 = *(_DWORD *)(j + 16);
            v19 = v7;
            if ( !v8 )
              sub_85628();
            (*(void (__fastcall **)(int, _DWORD *, __int16 *))(*(_DWORD *)v8 + 24))(v8, a1, &v19);
          }
        }
      }
    }
    else if ( *(_BYTE *)(v4 + 2) )
    {
      *(_BYTE *)(v4 + 2) = 0;
      if ( sub_7DB4C(v4) )
      {
        v10 = a1[14];
        for ( k = a1[13]; k != v10; k += 24 )
        {
          if ( *(_DWORD *)(k + 16) )
          {
            v11 = sub_7DB5A(v4);
            v12 = *(_DWORD *)(k + 16);
            v20 = v11;
            if ( !v12 )
              sub_85628();
            (*(void (__fastcall **)(int, _DWORD *, __int16 *))(*(_DWORD *)v12 + 24))(v12, a1, &v20);
          }
        }
      }
    }
    if ( sub_7DB4C(*i) && !sub_7DB60(*i) || !sub_7DB4C(*i) && sub_7DB60(*i) )
    {
      v13 = *i;
      if ( *(_BYTE *)*i && sub_7DB4C(*i) )
      {
        v15 = a1[14];
        for ( m = a1[13]; m != v15; m += 24 )
        {
          if ( *(_DWORD *)(m + 16) )
          {
            v16 = sub_7DB5A(v13);
            v17 = *(_DWORD *)(m + 16);
            v21 = v16;
            if ( !v17 )
              sub_85628();
            (*(void (__fastcall **)(int, _DWORD *, __int16 *))(*(_DWORD *)v17 + 24))(v17, a1, &v21);
          }
        }
      }
      sub_7DB8C(*i);
    }
  }
  return v22;
}


// ======================================================================
