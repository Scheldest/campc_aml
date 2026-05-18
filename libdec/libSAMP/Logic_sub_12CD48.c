// ADDR: 0x12dc50
// SYMBOL: sub_12DC50
unsigned int __fastcall sub_12DC50(int a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v3; // r3
  int v4; // t1

  v3 = a3;
  if ( a3 >= 4 )
  {
    do
    {
      v4 = *(_DWORD *)a2;
      a2 += 4;
      a3 -= 4;
      v3 = (1540483477 * v3) ^ (1540483477 * ((1540483477 * v4) ^ ((unsigned int)(1540483477 * v4) >> 24)));
    }
    while ( a3 > 3 );
  }
  switch ( a3 )
  {
    case 1u:
      goto LABEL_8;
    case 2u:
LABEL_7:
      v3 ^= a2[1] << 8;
LABEL_8:
      v3 = 1540483477 * (*a2 ^ v3);
      return (1540483477 * (v3 ^ (v3 >> 13))) ^ ((1540483477 * (v3 ^ (v3 >> 13))) >> 15);
    case 3u:
      v3 ^= a2[2] << 16;
      goto LABEL_7;
  }
  return (1540483477 * (v3 ^ (v3 >> 13))) ^ ((1540483477 * (v3 ^ (v3 >> 13))) >> 15);
}


// ======================================================================
// ADDR: 0x12dd34
// SYMBOL: sub_12DD34
unsigned int *__fastcall sub_12DD34(_DWORD *a1, int a2, int a3)
{
  std::__shared_weak_count *v6; // r6
  unsigned int *v7; // r0
  unsigned int v8; // r1
  unsigned int v9; // r1
  char *v10; // r0
  unsigned int *v11; // r1
  unsigned int v12; // r2
  unsigned int *result; // r0
  std::__shared_weak_count *v14; // r4
  unsigned int v15; // r1
  char *v16; // [sp+0h] [bp-18h] BYREF
  unsigned int *v17; // [sp+4h] [bp-14h]

  v6 = (std::__shared_weak_count *)operator new(0x38u);
  sub_12E404(v6, a2, a3);
  v16 = (char *)v6 + 16;
  v7 = (unsigned int *)((char *)v6 + 4);
  v17 = (unsigned int *)v6;
  do
    v8 = __ldrex(v7);
  while ( __strex(v8 + 1, v7) );
  __dmb(0xBu);
  do
    v9 = __ldrex(v7);
  while ( __strex(v9 - 1, v7) );
  __dmb(0xBu);
  if ( !v9 )
  {
    (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v6 + 8))(v6);
    std::__shared_weak_count::__release_weak(v6);
  }
  v10 = v16;
  if ( v17 )
  {
    v11 = v17 + 2;
    do
      v12 = __ldrex(v11);
    while ( __strex(v12 + 1, v11) );
  }
  a1[2] = v17;
  *a1 = &off_22AE84;
  a1[1] = v10;
  result = (unsigned int *)sub_12E3BE(a2, &v16);
  v14 = (std::__shared_weak_count *)v17;
  if ( v17 )
  {
    result = v17 + 1;
    __dmb(0xBu);
    do
      v15 = __ldrex(result);
    while ( __strex(v15 - 1, result) );
    __dmb(0xBu);
    if ( !v15 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v14 + 8))(v14);
      return (unsigned int *)std::__shared_weak_count::__release_weak(v14);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x12de18
// SYMBOL: sub_12DE18
unsigned int __fastcall sub_12DE18(int a1, unsigned __int8 *a2)
{
  unsigned int v2; // r12
  unsigned __int8 *v3; // r2
  unsigned int v4; // r3
  unsigned int v5; // r1
  int v6; // t1

  v2 = *a2;
  v3 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
  v4 = *((_DWORD *)a2 + 1);
  if ( (v2 & 1) == 0 )
  {
    v4 = v2 >> 1;
    v3 = a2 + 1;
  }
  v5 = v4;
  if ( v4 >= 4 )
  {
    do
    {
      v6 = *(_DWORD *)v3;
      v3 += 4;
      v4 -= 4;
      v5 = (1540483477 * v5) ^ (1540483477 * ((1540483477 * v6) ^ ((unsigned int)(1540483477 * v6) >> 24)));
    }
    while ( v4 > 3 );
  }
  switch ( v4 )
  {
    case 1u:
      goto LABEL_10;
    case 2u:
LABEL_9:
      v5 ^= v3[1] << 8;
LABEL_10:
      v5 = 1540483477 * (*v3 ^ v5);
      return (1540483477 * (v5 ^ (v5 >> 13))) ^ ((1540483477 * (v5 ^ (v5 >> 13))) >> 15);
    case 3u:
      v5 ^= v3[2] << 16;
      goto LABEL_9;
  }
  return (1540483477 * (v5 ^ (v5 >> 13))) ^ ((1540483477 * (v5 ^ (v5 >> 13))) >> 15);
}


// ======================================================================
// ADDR: 0x12e28c
// SYMBOL: sub_12E28C
unsigned int __fastcall sub_12E28C(unsigned int result, int a2, unsigned int *a3, int a4, _DWORD **a5)
{
  int *v6; // r4
  int *v7; // r6
  unsigned int v8; // r8
  unsigned int v9; // r1
  int *v10; // r1
  int v11; // r5
  char v12; // r10
  _DWORD v13[2]; // [sp+0h] [bp-28h] BYREF
  char v14; // [sp+8h] [bp-20h]

  v7 = (int *)(a2 + 4);
  v6 = *(int **)(a2 + 4);
  v8 = result;
  if ( v6 )
  {
    result = *a3;
    v7 = (int *)(a2 + 4);
    while ( 1 )
    {
      v9 = v6[4];
      if ( result >= v9 )
      {
        if ( v9 >= result )
          goto LABEL_11;
        v7 = v6 + 1;
        v10 = (int *)v6[1];
        if ( !v10 )
          goto LABEL_11;
        ++v6;
      }
      else
      {
        v10 = (int *)*v6;
        if ( !*v6 )
        {
          v7 = v6;
          goto LABEL_11;
        }
      }
      v7 = v6;
      v6 = v10;
    }
  }
  v6 = (int *)(a2 + 4);
LABEL_11:
  v11 = *v7;
  v12 = 0;
  if ( !*v7 )
  {
    v11 = operator new(0x24u);
    *(_DWORD *)(v11 + 16) = **a5;
    v13[1] = a2 + 4;
    sub_12E354(v11 + 20);
    v14 = 1;
    sub_12E32A(a2, v6, v7, v11);
    v13[0] = 0;
    result = sub_12E39C(v13, 0);
    v12 = 1;
  }
  *(_BYTE *)(v8 + 4) = v12;
  *(_DWORD *)v8 = v11;
  return result;
}


// ======================================================================
