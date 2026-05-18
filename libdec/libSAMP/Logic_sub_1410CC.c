// ADDR: 0x105378
// SYMBOL: sub_105378
int __fastcall sub_105378(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r4
  int v8; // r2
  int v9; // r3
  int v10; // r4
  int v11; // r1
  void *v12; // r0
  int v13; // r2
  int v14; // r3
  int v15; // [sp+0h] [bp-18h]
  int v16; // [sp+4h] [bp-14h]
  int v17; // [sp+8h] [bp-10h]
  int v18; // [sp+Ch] [bp-Ch]
  int v19; // [sp+10h] [bp-8h]
  int v20; // [sp+14h] [bp-4h]
  int savedregs; // [sp+18h] [bp+0h]

  result = *(_DWORD *)(a1 + 92);
  if ( result )
  {
    result = sub_108354(a2);
    if ( result )
    {
      v7 = result;
      result = sub_1082F4(*(_DWORD *)(a1 + 8));
      if ( result )
      {
        byte_25C9D4 = 1;
        if ( sub_104648(a1, 1) == 46 )
          sub_10479C(a1, 0, 0);
        if ( a3 )
        {
          if ( *(_WORD *)(v7 + 38) == 570 )
          {
            v10 = *(_DWORD *)(a1 + 92);
            if ( v10 == sub_1082E4(570, 570, v8, v9) )
            {
              v13 = a2;
              v11 = *(_DWORD *)(a1 + 8);
              v14 = -1;
              v12 = &unk_B382A;
              return sub_107188(v12, v11, v13, v14, v15, v16, v17, v18, v19, v20, savedregs);
            }
          }
          v11 = *(_DWORD *)(a1 + 8);
          v15 = -1;
          v12 = &unk_B3866;
        }
        else
        {
          v11 = *(_DWORD *)(a1 + 8);
          v12 = &unk_B387A;
        }
        v13 = a2;
        v14 = 3000;
        return sub_107188(v12, v11, v13, v14, v15, v16, v17, v18, v19, v20, savedregs);
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1501bc
// SYMBOL: sub_1501BC
int __fastcall sub_1501BC(int a1)
{
  int *v2; // r5
  unsigned __int16 v3; // r8
  int *v4; // r10
  float v5; // s16
  int v6; // r6
  float v7; // r0

  v2 = *(int **)(a1 + 60000);
  v3 = -1;
  v4 = *(int **)(a1 + 60004);
  if ( v2 != v4 )
  {
    v5 = 10000.0;
    do
    {
      v6 = *v2;
      if ( *(_BYTE *)(a1 + *v2 + 40000) )
      {
        v7 = COERCE_FLOAT(sub_F8E1C(*(_DWORD *)(a1 + 4 * v6)));
        if ( v7 < v5 )
        {
          v3 = v6;
          v5 = v7;
        }
      }
      ++v2;
    }
    while ( v2 != v4 );
  }
  return v3;
}


// ======================================================================
