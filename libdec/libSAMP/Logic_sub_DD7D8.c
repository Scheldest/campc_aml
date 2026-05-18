// ADDR: 0xdd86c
// SYMBOL: sub_DD86C
int __fastcall sub_DD86C(unsigned __int8 *a1, int a2)
{
  int v3; // r0
  unsigned __int8 *v5; // r1
  int v6; // r6
  _DWORD v8[6]; // [sp+0h] [bp-18h] BYREF

  v3 = *a1;
  v5 = (unsigned __int8 *)*((_DWORD *)a1 + 2);
  v6 = -1;
  v8[1] = 0;
  if ( !(v3 << 31) )
    v5 = a1 + 1;
  v8[0] = v5;
  do
    ++v6;
  while ( sub_DD93C(a1, v8) < a2 );
  return v6;
}


// ======================================================================
// ADDR: 0xdd8a8
// SYMBOL: sub_DD8A8
int __fastcall sub_DD8A8(int a1, int a2, int a3, unsigned int a4, int **a5)
{
  int v6; // r8
  unsigned int v7; // r4
  char v8; // r0
  unsigned int v9; // r6
  unsigned int v10; // r9
  int v11; // r6
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int result; // r0

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 - a4;
  v8 = byte_91CE0[*(_WORD *)(a2 + 9) & 0xF];
  if ( *(_DWORD *)a2 < a4 )
    v7 = 0;
  v9 = v7 >> v8;
  if ( v7 >> v8 )
    a1 = sub_DD992(a1, v9, v6);
  v10 = v7 - v9;
  v11 = **a5;
  if ( v11 )
  {
    v12 = *(_DWORD *)(a1 + 8);
    v13 = v12 + 1;
    if ( *(_DWORD *)(a1 + 12) < (unsigned int)(v12 + 1) )
    {
      (**(void (__fastcall ***)(int))a1)(a1);
      v12 = *(_DWORD *)(a1 + 8);
      v13 = v12 + 1;
    }
    v14 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 8) = v13;
    *(_BYTE *)(v14 + v12) = v11;
  }
  result = sub_DDA0C(a5[1], a1, a5[2], *a5[3]);
  if ( v10 )
    return sub_DD992(result, v10, v6);
  return result;
}


// ======================================================================
