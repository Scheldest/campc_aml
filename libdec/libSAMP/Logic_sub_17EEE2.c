// ADDR: 0x17eb84
// SYMBOL: sub_17EB84
int __fastcall sub_17EB84(int *a1)
{
  int v2; // r0
  int v3; // r9
  _BYTE *v4; // r1
  int v5; // r5
  int v6; // r4
  int v7; // r5
  int v8; // r4
  _BYTE *v9; // r0
  __int16 v10; // r0
  int v11; // r0
  int v12; // r3
  int v13; // r1
  int *v14; // r0
  __int16 v15; // r2
  unsigned __int8 *v16; // r5
  int v18; // [sp+10h] [bp-258h] BYREF
  int v19; // [sp+14h] [bp-254h] BYREF
  char v20; // [sp+1Bh] [bp-24Dh] BYREF
  __int64 v21; // [sp+1Ch] [bp-24Ch] BYREF
  _QWORD v22[34]; // [sp+24h] [bp-244h] BYREF
  _DWORD v23[2]; // [sp+138h] [bp-130h] BYREF
  int v24; // [sp+140h] [bp-128h]
  int v25; // [sp+144h] [bp-124h]

  v2 = sub_180978();
  if ( !v2 )
    return 0;
  v3 = v2;
  sub_17D4F2((int)v23, *(void **)(v2 + 20), *(_DWORD *)(v2 + 12), 0);
  v4 = *(_BYTE **)(v3 + 20);
  switch ( *v4 )
  {
    case '"':
      sub_17D4F2((int)v22, v4, *(_DWORD *)(v3 + 12), 0);
      sub_17DA96((int)v22, 8);
      sub_17DA96((int)v22, 16);
      sub_17DA96((int)v22, 32);
      sub_17DA96((int)v22, 16);
      sub_17D786(v22, &v21, 16, 1);
      v10 = v21;
      *((_WORD *)a1 + 6074) = v21;
      *(_WORD *)v3 = v10;
      goto LABEL_22;
    case '(':
      if ( *(_DWORD *)(v3 + 12) == 14 )
      {
        sub_17D4F2((int)v22, v4, 0xEu, 0);
        sub_17DA96((int)v22, 8);
        sub_17D786(v22, &v21, 32, 1);
        sub_17D786(v22, &v20, 8, 1);
        if ( v20 == 19 )
        {
          sub_17D786(v22, &v19, 32, 1);
          sub_17D786(v22, &v18, 32, 1);
          v11 = v18;
          v12 = *a1;
          v13 = v21 + 9000;
          a1[3034] = v19;
          a1[3035] = v11;
          a1[3036] = v13;
          (*(void (__fastcall **)(int *, int))(v12 + 64))(a1, v3);
          v3 = 0;
        }
LABEL_22:
        sub_17D542((int)v22);
      }
      goto LABEL_25;
    case '*':
    case '+':
    case ',':
    case '-':
      sub_17DA96((int)v23, 8);
      sub_17D786(v23, (_BYTE *)(v3 + 4), 32, 1);
      sub_17D786(v23, (_BYTE *)(v3 + 8), 16, 1);
      if ( sub_17D786(v23, (_BYTE *)v3, 16, 1) )
      {
        if ( (**(_BYTE **)(v3 + 20) & 0xFE) != 0x2A )
          goto LABEL_25;
        v5 = (int)(a1 + 698);
        v6 = 32;
        v22[0] = *(_QWORD *)(v3 + 4);
        while ( !sub_17E580(v5, (int)v22) )
        {
          --v6;
          v5 += 292;
          if ( !v6 )
            goto LABEL_25;
        }
        *(_BYTE *)(v5 + 288) = 0;
      }
      else
      {
        (*(void (__fastcall **)(int *, int))(*a1 + 64))(a1, v3);
        v3 = 0;
      }
      goto LABEL_25;
    case '.':
      sub_17DA96((int)v23, 8);
      sub_17D786(v23, (_BYTE *)(v3 + 4), 32, 1);
      sub_17D786(v23, (_BYTE *)(v3 + 8), 16, 1);
      sub_17D786(v23, (_BYTE *)v3, 16, 1);
      v7 = (int)(a1 + 698);
      v8 = 0;
      v22[0] = *(_QWORD *)(v3 + 4);
      break;
    default:
      goto LABEL_25;
  }
  while ( !sub_17E580(v7, (int)v22) )
  {
    ++v8;
    v7 += 292;
    if ( v8 == 32 )
    {
      v9 = a1 + 770;
      v8 = 0;
      while ( *v9 )
      {
        ++v8;
        v9 += 292;
        if ( v8 == 32 )
          goto LABEL_25;
      }
      break;
    }
  }
  v14 = &a1[73 * v8];
  v15 = *(_WORD *)(v3 + 8);
  v16 = (unsigned __int8 *)(v14 + 701);
  v14[698] = *(_DWORD *)(v3 + 4);
  *((_WORD *)v14 + 1398) = v15;
  *((_BYTE *)v14 + 3080) = 1;
  sub_17D55E(v14 + 701);
  sub_17D566(v16, (const void *)(v25 + ((v24 + 7) >> 3)), ((v23[0] + 7) >> 3) - ((v24 + 7) >> 3));
LABEL_25:
  sub_17D542((int)v23);
  return v3;
}


// ======================================================================
