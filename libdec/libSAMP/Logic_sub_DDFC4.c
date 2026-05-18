// ADDR: 0xde078
// SYMBOL: sub_DE078
int __fastcall sub_DE078(int a1, unsigned __int8 **a2, int a3, int a4)
{
  unsigned int v4; // r5
  int v6; // r0
  unsigned int v7; // r2
  int v8; // r1
  int v9; // r2
  bool v10; // zf
  unsigned int v11; // r2
  char *v12; // r1
  unsigned int v13; // r2
  unsigned int v14; // r2
  int v15; // r0
  int v16; // r1
  int v17; // r2
  unsigned __int8 *v19; // r0
  unsigned __int8 *v20; // r6
  int v21; // r5
  unsigned int v22; // t1
  unsigned int v23; // [sp+18h] [bp-28h] BYREF
  int v24; // [sp+1Ch] [bp-24h]

  v4 = (unsigned int)a2[2];
  if ( (int)v4 > 33 )
  {
    v10 = v4 == 34;
    if ( v4 != 34 )
      v10 = v4 == 39;
    if ( v10 || v4 == 92 )
    {
      v11 = *(_DWORD *)(a1 + 12);
      v6 = *(_DWORD *)(a1 + 8);
      v8 = v6 + 1;
      if ( v11 < v6 + 1 )
      {
        (**(void (__fastcall ***)(int))a1)(a1);
        v6 = *(_DWORD *)(a1 + 8);
        v8 = v6 + 1;
      }
      v9 = *(_DWORD *)(a1 + 4);
      goto LABEL_24;
    }
  }
  else
  {
    switch ( v4 )
    {
      case 9u:
        v13 = *(_DWORD *)(a1 + 12);
        v6 = *(_DWORD *)(a1 + 8);
        v8 = v6 + 1;
        if ( v13 < v6 + 1 )
        {
          (**(void (__fastcall ***)(int))a1)(a1);
          v6 = *(_DWORD *)(a1 + 8);
          v8 = v6 + 1;
        }
        v9 = *(_DWORD *)(a1 + 4);
        LOBYTE(v4) = 116;
        goto LABEL_24;
      case 0xAu:
        v14 = *(_DWORD *)(a1 + 12);
        v6 = *(_DWORD *)(a1 + 8);
        v8 = v6 + 1;
        if ( v14 < v6 + 1 )
        {
          (**(void (__fastcall ***)(int))a1)(a1);
          v6 = *(_DWORD *)(a1 + 8);
          v8 = v6 + 1;
        }
        v9 = *(_DWORD *)(a1 + 4);
        LOBYTE(v4) = 110;
        goto LABEL_24;
      case 0xDu:
        v7 = *(_DWORD *)(a1 + 12);
        v6 = *(_DWORD *)(a1 + 8);
        v8 = v6 + 1;
        if ( v7 < v6 + 1 )
        {
          (**(void (__fastcall ***)(int))a1)(a1);
          v6 = *(_DWORD *)(a1 + 8);
          v8 = v6 + 1;
        }
        v9 = *(_DWORD *)(a1 + 4);
        LOBYTE(v4) = 114;
LABEL_24:
        *(_DWORD *)(a1 + 8) = v8;
        *(_BYTE *)(v6 + v9) = 92;
        v15 = *(_DWORD *)(a1 + 8);
        v16 = v15 + 1;
        if ( *(_DWORD *)(a1 + 12) < (unsigned int)(v15 + 1) )
        {
          (**(void (__fastcall ***)(int))a1)(a1);
          v15 = *(_DWORD *)(a1 + 8);
          v16 = v15 + 1;
        }
        v17 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)(a1 + 8) = v16;
        *(_BYTE *)(v17 + v15) = v4;
        return a1;
    }
  }
  if ( v4 <= 0xFF )
  {
    v12 = "\\x{:02x}";
LABEL_30:
    v24 = 0;
    v23 = v4;
    sub_DCAC4(a1, v12, 8, 2, 2, 0, (int)&v23, 0, 0);
    return a1;
  }
  if ( !HIWORD(v4) )
  {
    v12 = "\\u{:04x}";
    goto LABEL_30;
  }
  if ( HIWORD(v4) <= 0x10u )
  {
    v12 = "\\U{:08x}";
    goto LABEL_30;
  }
  v19 = a2[1];
  v20 = *a2;
  v21 = v19 - *a2;
  if ( v19 != *a2 )
  {
    do
    {
      v22 = *v20++;
      v23 = v22;
      v24 = 0;
      sub_DCAC4(a1, "\\x{:02x}", 8, a4, 2, 0, (int)&v23, 0, 0);
      --v21;
    }
    while ( v21 );
  }
  return a1;
}


// ======================================================================
