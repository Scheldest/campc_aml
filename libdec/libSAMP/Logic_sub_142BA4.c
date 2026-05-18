// ADDR: 0x14ac7c
// SYMBOL: sub_14AC7C
int __fastcall sub_14AC7C(int a1, unsigned __int8 *a2)
{
  int result; // r0
  __int64 v5; // d17
  __int64 v6; // d0
  __int64 v7; // d1
  float v8; // r1
  unsigned int v9; // r1
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r6
  unsigned int v14; // r8
  int v15; // r1
  int v16; // r0
  int v17; // r1
  int v18; // r1
  int v19; // r0
  int v20; // r1
  __int64 v21[4]; // [sp+0h] [bp-38h] BYREF
  float v22; // [sp+20h] [bp-18h]
  int v23; // [sp+24h] [bp-14h]

  result = *(_DWORD *)(a1 + 296);
  if ( !result )
    return result;
  result = sub_F8C70(result);
  if ( !result )
    return result;
  v5 = *(_QWORD *)(a2 + 11);
  v6 = *(_QWORD *)(a2 + 19);
  v7 = *(_QWORD *)(a2 + 27);
  v21[0] = *(_QWORD *)(a2 + 3);
  v21[1] = v5;
  result = *a2;
  v8 = *(float *)(a2 + 35);
  v21[2] = v6;
  v21[3] = v7;
  v22 = v8;
  v23 = 0;
  if ( result )
  {
    if ( *(float *)&v7 > 300.0
      || *(float *)&v7 < -300.0
      || *((float *)&v7 + 1) > 300.0
      || *((float *)&v7 + 1) < -300.0
      || v8 > 300.0
      || v8 < -300.0 )
    {
      return result;
    }
    if ( result == 2 )
    {
      v12 = *(_DWORD *)(dword_23DEF4 + 944);
      v13 = *(_DWORD *)(v12 + 4);
      if ( v13 && sub_F2396(*(_DWORD *)(v12 + 4), *(unsigned __int16 *)(a2 + 1)) )
      {
        v14 = *(unsigned __int16 *)(a2 + 1);
        sub_F2396(v13, v14);
        v11 = *(_DWORD *)(*(_DWORD *)(v13 + 4 * v14) + 12);
        goto LABEL_24;
      }
    }
    else if ( result == 1 )
    {
      result = **(_DWORD **)(dword_23DEF4 + 944);
      if ( result )
      {
        v9 = *(unsigned __int16 *)(a2 + 1);
        if ( v9 == *(unsigned __int16 *)(result + 5024) )
        {
          v10 = sub_E35A0(dword_23DEF0);
LABEL_15:
          v11 = *(_DWORD *)(v10 + 92);
LABEL_24:
          v23 = v11;
          goto LABEL_25;
        }
        if ( v9 == *(unsigned __int16 *)(a1 + 20) )
          return result;
        if ( v9 <= 0x3EC )
        {
          if ( *(_BYTE *)(result + v9 + 4020) )
          {
            v10 = *(_DWORD *)(**(_DWORD **)(result + 4 * v9 + 4) + 296);
            if ( v10 )
              goto LABEL_15;
          }
        }
      }
    }
    v11 = 0;
    goto LABEL_24;
  }
LABEL_25:
  if ( sub_F8C70(*(_DWORD *)(a1 + 296)) )
  {
    v16 = sub_104648(*(_DWORD *)(a1 + 296), v15);
    v17 = a2[39];
    if ( v16 != v17 )
    {
      sub_10479C(*(_DWORD *)(a1 + 296), v17, 1);
      v19 = sub_104648(*(_DWORD *)(a1 + 296), v18);
      v20 = a2[39];
      if ( v19 != v20 )
      {
        sub_104950(*(_DWORD *)(a1 + 296), v20, 9999);
        sub_10479C(*(_DWORD *)(a1 + 296), a2[39], 1);
      }
    }
  }
  sub_105CE0(*(_DWORD *)(a1 + 296), v21);
  return sub_105A58(*(_DWORD *)(a1 + 296));
}


// ======================================================================
