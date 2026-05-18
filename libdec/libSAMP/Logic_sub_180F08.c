// ADDR: 0x17d822
// SYMBOL: sub_17D822
_DWORD *__fastcall sub_17D822(_DWORD *result)
{
  *result = 0;
  return result;
}


// ======================================================================
// ADDR: 0x17d912
// SYMBOL: sub_17D912
int __fastcall sub_17D912(int *a1, _BYTE *a2, int a3, int a4)
{
  int v5; // r6
  int v6; // r10
  _BYTE *v8; // r4
  int v9; // r0
  int v10; // r8
  _BYTE *v11; // r4
  int v12; // r5
  int v13; // r0
  int v14; // r2
  int v15; // r0
  _BYTE *v16; // r1
  unsigned int v17; // r0

  v5 = 255;
  v6 = (a3 >> 3) - 1;
  if ( a4 )
    v5 = 0;
  v8 = a2;
  if ( a3 < 16 )
    goto LABEL_14;
  v9 = (unsigned __int8)a2[v6];
  if ( v6 >= 1 )
    v6 = 1;
  v10 = a3 >> 3;
  if ( v5 == v9 )
  {
    --v6;
    v11 = a2 - 2;
    while ( 1 )
    {
      sub_17D84A(a1);
      v12 = v10 - 1;
      if ( v10 - 1 <= 1 )
        break;
      v13 = (unsigned __int8)v11[v10--];
      if ( v5 != v13 )
        goto LABEL_12;
    }
    v8 = a2;
LABEL_14:
    v17 = (unsigned __int8)v8[v6];
    if ( a4 )
    {
      if ( v17 >= 0x10 )
      {
LABEL_16:
        sub_17D828(a1);
        v16 = &v8[v6];
        v15 = (int)a1;
        v14 = 8;
        return sub_17D628(v15, v16, v14, 1);
      }
    }
    else if ( v17 < 0xF0 )
    {
      goto LABEL_16;
    }
    sub_17D84A(a1);
    v16 = &v8[v6];
    v15 = (int)a1;
    v14 = 4;
    return sub_17D628(v15, v16, v14, 1);
  }
  v12 = a3 >> 3;
LABEL_12:
  sub_17D828(a1);
  v14 = 8 * v12;
  v15 = (int)a1;
  v16 = a2;
  return sub_17D628(v15, v16, v14, 1);
}


// ======================================================================
// ADDR: 0x1811b4
// SYMBOL: sub_1811B4
int __fastcall sub_1811B4(int a1, int a2, int a3, int a4)
{
  unsigned int v6; // r5
  _DWORD *v8; // r4
  int v9; // r0
  unsigned int v10; // r0
  int v11; // r6
  int v12; // r1
  char v13; // [sp+7h] [bp-19h] BYREF
  _DWORD v14[6]; // [sp+8h] [bp-18h] BYREF

  v14[0] = a2;
  v14[1] = a3;
  if ( !sub_17E580((int)v14, (int)&unk_BE944) )
  {
    if ( a4 )
    {
      v8 = (_DWORD *)(a1 + 836);
      v9 = sub_182454(v8, v14, &v13);
      if ( v13 )
        return *(_DWORD *)(*v8 + 12 * v9 + 8);
    }
    else
    {
      v10 = *(unsigned __int16 *)(a1 + 8);
      if ( *(_WORD *)(a1 + 8) )
      {
        v11 = 0;
        v6 = 0;
        do
        {
          v12 = *(_DWORD *)(a1 + 832);
          if ( *(_BYTE *)(v12 + v11) )
          {
            if ( sub_17E580(v12 + v11 + 4, (int)v14) )
              return v6;
            v10 = *(unsigned __int16 *)(a1 + 8);
          }
          ++v6;
          v11 += 2112;
        }
        while ( v6 < v10 );
      }
    }
  }
  return -1;
}


// ======================================================================
// ADDR: 0x181240
// SYMBOL: sub_181240
int __fastcall sub_181240(int a1, int a2, int a3, int a4)
{
  int v5; // r0
  int v7; // r6
  unsigned int v8; // r4
  int v9; // r0
  int v10; // r0
  int v11; // r0
  _DWORD v14[8]; // [sp+0h] [bp-20h] BYREF

  v5 = *(unsigned __int16 *)(a1 + 8);
  v14[0] = a2;
  v14[1] = a3;
  if ( !v5 )
    return 0;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = *(_DWORD *)(a1 + 832);
    if ( *(_BYTE *)(v9 + v7) )
    {
      v10 = v9 + v7;
      if ( *(_DWORD *)(v10 + 2108) == 8 )
      {
        v11 = v10 + 4;
        if ( a4 ? sub_17E596(v11, (int)v14) : sub_17E580(v11, (int)v14) )
          break;
      }
    }
    ++v8;
    v7 += 2112;
    if ( v8 >= *(unsigned __int16 *)(a1 + 8) )
      return 0;
  }
  return 1;
}


// ======================================================================
