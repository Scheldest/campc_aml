// ADDR: 0x21ffb4
// SYMBOL: sub_21FFB4
int __fastcall sub_21FFB4(int a1, _DWORD *a2, unsigned int a3, unsigned int a4, _DWORD *a5)
{
  int v5; // r6
  _DWORD *v7; // r2
  unsigned int v8; // r5
  _DWORD *v9; // r9
  int v10; // r8
  unsigned int v11; // r10
  unsigned int v12; // r1
  size_t v13; // r11
  size_t v14; // r9
  int v15; // r0
  bool v16; // cf
  int v17; // r0
  int v19; // r6
  unsigned int v20; // r1
  int v21; // r0
  unsigned int v23; // [sp+8h] [bp-30h]
  void *v25; // [sp+10h] [bp-28h]
  char src[4]; // [sp+14h] [bp-24h] BYREF

  v5 = a1;
  v7 = &unk_384170;
  if ( a5 )
    v7 = a5;
  if ( *v7 )
  {
    sub_21FF78(v7);
    return -1;
  }
  v9 = a2;
  v25 = v7;
  if ( !a1 )
  {
    v19 = 0;
    v8 = 0;
    while ( 1 )
    {
      if ( a3 == v19 )
        return v8;
      v20 = *(_DWORD *)(*v9 + 4 * v19);
      if ( v20 > 0x7F )
      {
        v21 = sub_21FFA0((int)src, v20, v25);
        if ( v21 == -1 )
          return -1;
      }
      else
      {
        if ( !v20 )
          return v8;
        v21 = 1;
      }
      v8 += v21;
      ++v19;
    }
  }
  v10 = 0;
  v11 = 0;
  v8 = 0;
  v23 = a4;
  while ( 1 )
  {
    v16 = v11 >= a3;
    if ( v11 < a3 )
      v16 = v8 >= a4;
    if ( v16 )
      goto LABEL_22;
    v12 = *(_DWORD *)(*v9 + v10);
    if ( v12 <= 0x7F )
      break;
    v14 = a4 - v8;
    if ( a4 - v8 < 4 )
    {
      v13 = sub_21FFA0((int)src, v12, v7);
      if ( v13 == -1 )
      {
        v8 = -1;
LABEL_34:
        v9 = a2;
LABEL_22:
        v17 = *v9 + v10;
        goto LABEL_23;
      }
      if ( v13 > v14 )
        goto LABEL_34;
      v5 = a1;
      j_memcpy((void *)(a1 + v8), src, v13);
      v7 = v25;
      a4 = v23;
      v9 = a2;
    }
    else
    {
      v15 = sub_21FFA0(v5 + v8, v12, v25);
      v5 = a1;
      v13 = v15;
      v7 = v25;
      a4 = v23;
      v9 = a2;
      if ( v15 == -1 )
      {
        v8 = -1;
        goto LABEL_22;
      }
    }
LABEL_17:
    v8 += v13;
    v10 += 4;
    ++v11;
  }
  *(_BYTE *)(v5 + v8) = v12;
  if ( v12 )
  {
    v13 = 1;
    goto LABEL_17;
  }
  v17 = 0;
LABEL_23:
  *v9 = v17;
  return v8;
}


// ======================================================================
