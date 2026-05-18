// ADDR: 0x184948
// SYMBOL: sub_184948
int __fastcall sub_184948(__int64 *a1, int a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r4
  unsigned int v6; // r1
  unsigned int v7; // r0
  __int64 v9; // d17
  int v10; // r1
  unsigned int v11; // r2
  int v13; // r1
  int v14; // r6
  int i; // r3
  unsigned int v16; // r5
  __int64 v17; // d16
  __int64 v18; // d17
  int result; // r0
  int v20; // r0
  int j; // r5
  int v22; // r5
  int v23; // r3
  int v24; // [sp+0h] [bp-C8h]
  int v25; // [sp+4h] [bp-C4h]
  _QWORD v26[2]; // [sp+8h] [bp-C0h] BYREF
  _DWORD v27[4]; // [sp+18h] [bp-B0h] BYREF
  _QWORD v28[4]; // [sp+28h] [bp-A0h] BYREF
  _QWORD v29[4]; // [sp+48h] [bp-80h] BYREF
  _DWORD s2[4]; // [sp+68h] [bp-60h] BYREF
  _QWORD v31[2]; // [sp+78h] [bp-50h] BYREF
  __int64 v32; // [sp+88h] [bp-40h] BYREF
  __int64 v33; // [sp+90h] [bp-38h]
  int v34; // [sp+9Ch] [bp-2Ch] BYREF
  _DWORD v35[10]; // [sp+A0h] [bp-28h] BYREF

  v4 = 0;
  do
  {
    v5 = v4;
    v34 = word_BE94C[v4];
    memset(v35, 0, 12);
    sub_184AD4(a1, &v34, &v34);
    if ( !v34 )
    {
      v6 = 0;
      do
      {
        v7 = v6;
        if ( v6 == 3 )
          break;
      }
      while ( !v35[v6++] );
      if ( v7 >= 3 )
        return 0;
    }
    v4 = v5 + 2;
  }
  while ( v5 <= 0xFD );
  v9 = a1[1];
  v10 = 0;
  v32 = *a1;
  v33 = v9;
  do
  {
    v11 = *((_DWORD *)&v32 + v10);
    *((_DWORD *)&v32 + v10) = v11 - 1;
    if ( v11 - 1 < v11 )
      break;
  }
  while ( v10++ != 3 );
  v31[0] = v32;
  v31[1] = v33;
  v13 = 0;
  if ( !((unsigned __int8)v32 << 31) )
  {
    v13 = 0;
    do
    {
      v14 = 0;
      for ( i = 3; i != -1; --i )
      {
        v16 = *((_DWORD *)v31 + i);
        *((_DWORD *)v31 + i) = v14 | (v16 >> 1);
        v14 = v16 << 31;
      }
      ++v13;
    }
    while ( !(LOBYTE(v31[0]) << 31) );
  }
  v17 = *a1;
  v18 = a1[1];
  result = 1;
  memset(&s2[1], 0, 12);
  v28[0] = v17;
  v28[1] = v18;
  s2[0] = 1;
  memset(&v28[2], 0, 16);
  if ( a2 )
  {
    v20 = v13 + 1;
    v25 = v13 + 1;
    while ( 1 )
    {
      for ( j = 0; j != 4; v27[j++] = v20 )
        v20 = sub_187150(v20);
      sub_184AD4(v27, &v32, v27);
      sub_184C5E(v27, v31, a1, v26);
      v20 = memcmp(v26, s2, 0x10u);
      if ( v20 )
      {
        v20 = memcmp(v26, &v32, 0x10u);
        if ( v20 )
        {
          v22 = v25;
          while ( (unsigned int)--v22 >= 2 && memcmp(v26, &v32, 0x10u) )
          {
            ((void (__fastcall *)(_QWORD *, _QWORD *, _QWORD *, int, int, int))sub_184D2E)(v26, v26, v29, v23, v24, v25);
            sub_184D9C(v29, v28, v29);
            v26[0] = v29[0];
            v26[1] = v29[1];
            if ( !memcmp(v26, s2, 0x10u) )
              return 0;
          }
          v20 = memcmp(v26, &v32, 0x10u);
          if ( v20 )
            break;
        }
      }
      if ( !--a2 )
        return 1;
    }
    return 0;
  }
  return result;
}


// ======================================================================
