// ADDR: 0x84758
// SYMBOL: sub_84758
int __fastcall sub_84758(_DWORD *a1, int *a2)
{
  unsigned int v3; // r5
  int v4; // r10
  unsigned int v5; // r1
  unsigned int v6; // r6
  unsigned int v7; // r0
  unsigned int v8; // r11
  unsigned int v9; // r9
  unsigned int v10; // r1
  _DWORD *v11; // r0
  _DWORD *v12; // r4
  unsigned int v13; // r0
  unsigned int v14; // r1
  int v16; // r4
  bool v17; // zf
  _DWORD *v18; // [sp+0h] [bp-30h]
  int v19; // [sp+4h] [bp-2Ch] BYREF
  char v20; // [sp+Ch] [bp-24h]

  v3 = a1[1];
  if ( !v3 )
    return 0;
  v4 = *a2;
  v5 = (1540483477 * ((1540483477 * *a2) ^ ((unsigned int)(1540483477 * *a2) >> 24))) ^ 0x6F47A654;
  v6 = (1540483477 * (v5 ^ (v5 >> 13))) ^ ((1540483477 * (v5 ^ (v5 >> 13))) >> 15);
  v7 = ((v3 - ((v3 >> 1) & 0x55555555)) & 0x33333333) + (((v3 - ((v3 >> 1) & 0x55555555)) >> 2) & 0x33333333);
  v8 = (16843009 * ((v7 + (v7 >> 4)) & 0xF0F0F0F)) >> 24;
  if ( v8 > 1 )
  {
    if ( v6 >= v3 )
    {
      sub_109688(v6, a1[1]);
      v9 = v10;
    }
    else
    {
      v9 = (1540483477 * (v5 ^ (v5 >> 13))) ^ ((1540483477 * (v5 ^ (v5 >> 13))) >> 15);
    }
  }
  else
  {
    v9 = v6 & (v3 - 1);
  }
  v11 = *(_DWORD **)(*a1 + 4 * v9);
  if ( !v11 )
    return 0;
  v18 = a1;
  v12 = (_DWORD *)*v11;
  if ( !*v11 )
    return 0;
  while ( 1 )
  {
    v13 = v12[1];
    if ( v13 == v6 )
      break;
    if ( v8 > 1 )
    {
      if ( v13 >= v3 )
      {
        sub_109688(v13, v3);
        v13 = v14;
      }
    }
    else
    {
      v13 &= v3 - 1;
    }
    if ( v13 != v9 )
      return 0;
LABEL_11:
    v12 = (_DWORD *)*v12;
    if ( !v12 )
      return 0;
  }
  if ( v12[2] != v4 )
    goto LABEL_11;
  sub_8487C(&v19, v18, v12);
  v16 = v19;
  v19 = 0;
  if ( v16 )
  {
    v17 = v20 == 0;
    if ( v20 )
      v17 = *(unsigned __int8 *)(v16 + 20) << 31 == 0;
    if ( !v17 )
      operator delete(*(void **)(v16 + 28));
    operator delete((void *)v16);
  }
  return 1;
}


// ======================================================================
