// ADDR: 0xf71c4
// SYMBOL: sub_F71C4
int __fastcall sub_F71C4(_DWORD *a1, int a2)
{
  _DWORD *v3; // r6
  int v5; // r5
  int result; // r0
  int v7; // r2
  _BYTE v8[8]; // [sp+4h] [bp-24h] BYREF
  int v9; // [sp+Ch] [bp-1Ch]

  v3 = a1 + 2;
  v5 = a1[1];
  if ( v5 == a1[2] )
  {
    v7 = -1227133513 * ((v5 - *a1) >> 2);
    if ( (unsigned int)(v7 + 1) > 0x9249249 )
      std::__vector_base_common<true>::__throw_length_error(a1);
    sub_F7AF4(v8);
    sub_F7AC2(v3, v9, a2);
    v9 += 28;
    sub_F7B4C(a1, v8);
    return sub_F7BC4(v8);
  }
  else
  {
    sub_F7AC2(a1 + 2, a1[1], a2);
    result = v5 + 28;
    a1[1] = v5 + 28;
  }
  return result;
}


// ======================================================================
// ADDR: 0xf74d0
// SYMBOL: sub_F74D0
int __fastcall sub_F74D0(unsigned __int8 *a1, unsigned __int8 *a2)
{
  unsigned int v2; // r4
  size_t v5; // r2
  unsigned int v6; // r0
  unsigned int v7; // r1
  bool v8; // zf
  unsigned __int8 *v9; // r1
  unsigned __int8 *v10; // r3
  unsigned int v11; // r0
  unsigned int v12; // r12
  unsigned int v13; // r0
  size_t v14; // r2
  unsigned int v15; // r1
  unsigned __int8 *v16; // r1
  unsigned __int8 *v17; // r3
  unsigned int v18; // r0

  v2 = *a1;
  v5 = *((_DWORD *)a1 + 1);
  v6 = *((_DWORD *)a2 + 1);
  v7 = *a2;
  if ( (v2 & 1) == 0 )
    v5 = v2 >> 1;
  if ( (v7 & 1) == 0 )
    v6 = v7 >> 1;
  if ( v5 != v6 )
    return 0;
  v8 = (v7 & 1) == 0;
  v9 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
  v10 = a1 + 1;
  if ( v8 )
    v9 = a2 + 1;
  if ( (v2 & 1) != 0 )
  {
    if ( v5 && memcmp(*((const void **)a1 + 2), v9, v5) )
      return 0;
LABEL_16:
    v12 = a1[12];
    v13 = a2[12];
    v14 = *((_DWORD *)a1 + 4);
    v15 = *((_DWORD *)a2 + 4);
    if ( (v12 & 1) == 0 )
      v14 = v12 >> 1;
    if ( (v13 & 1) == 0 )
      v15 = v13 >> 1;
    if ( v14 != v15 )
      return 0;
    v16 = (unsigned __int8 *)*((_DWORD *)a2 + 5);
    v17 = a1 + 13;
    if ( (v13 & 1) == 0 )
      v16 = a2 + 13;
    if ( (v12 & 1) != 0 )
    {
      if ( v14 && memcmp(*((const void **)a1 + 5), v16, v14) )
        return 0;
    }
    else if ( v14 )
    {
      v18 = v12 >> 1;
      while ( *v17 == *v16 )
      {
        ++v16;
        ++v17;
        if ( !--v18 )
          goto LABEL_31;
      }
      return 0;
    }
LABEL_31:
    *((_DWORD *)a1 + 6) = *((_DWORD *)a2 + 6);
    return 0;
  }
  if ( !v5 )
    goto LABEL_16;
  v11 = v2 >> 1;
  while ( *v10 == *v9 )
  {
    ++v9;
    ++v10;
    if ( !--v11 )
      goto LABEL_16;
  }
  return 0;
}


// ======================================================================
// ADDR: 0xf7bfa
// SYMBOL: sub_F7BFA
int *__fastcall sub_F7BFA(int a1, int **a2, int a3, int a4, int a5, int a6)
{
  int **v9; // r6
  int *result; // r0
  char v11; // r1
  int *v12; // [sp+8h] [bp-20h] BYREF
  int v13[5]; // [sp+14h] [bp-14h] BYREF

  v9 = (int **)sub_F7806((int)a2, v13, a3);
  result = *v9;
  if ( *v9 )
  {
    v11 = 0;
  }
  else
  {
    sub_F7C48(&v12, a2, a4, a5, a6);
    sub_F78C4(a2, v13[0], v9, v12);
    result = v12;
    v11 = 1;
  }
  *(_BYTE *)(a1 + 4) = v11;
  *(_DWORD *)a1 = result;
  return result;
}


// ======================================================================
// ADDR: 0x15e87c
// SYMBOL: sub_15E87C
int __fastcall sub_15E87C(int *a1, int a2, int a3, int a4, int a5)
{
  int v6; // r0
  int result; // r0
  _DWORD v8[3]; // [sp+Ch] [bp-1Ch] BYREF
  _DWORD v9[4]; // [sp+18h] [bp-10h] BYREF

  v8[0] = a3;
  v6 = sub_15E798(a1, a2);
  v8[2] = v8;
  sub_15F2EE(v9, v6);
  result = v9[0];
  *(_DWORD *)(v9[0] + 12) = a5;
  *(_DWORD *)(result + 24) = a4;
  *(_BYTE *)(result + 20) = 1;
  return result;
}


// ======================================================================
// ADDR: 0x15e8b8
// SYMBOL: sub_15E8B8
int __fastcall sub_15E8B8(int *a1, int a2, int a3, int a4)
{
  int v5; // r0
  int result; // r0
  _DWORD v7[3]; // [sp+Ch] [bp-1Ch] BYREF
  _DWORD v8[4]; // [sp+18h] [bp-10h] BYREF

  v7[0] = a3;
  v5 = sub_15E798(a1, a2);
  v7[2] = v7;
  sub_15F2EE(v8, v5);
  result = v8[0];
  *(_DWORD *)(v8[0] + 16) = a4;
  *(_BYTE *)(result + 21) = 1;
  return result;
}


// ======================================================================
