// ADDR: 0xa75dc
// SYMBOL: sub_A75DC
int __fastcall sub_A75DC(int a1)
{
  int v1; // r1
  int v2; // r5
  _BYTE *v4; // r6
  float v5; // s0
  float v6; // s16
  float v7; // s18
  int v8; // r9
  int v9; // r8
  float v10; // s2
  float v11; // s4
  float v12; // s6
  _DWORD *v13; // r4
  unsigned int v14; // r0
  float v15; // s2
  _DWORD *v16; // r4
  unsigned int v17; // r0
  float v18[2]; // [sp+4h] [bp-4Ch] BYREF
  float v19; // [sp+Ch] [bp-44h] BYREF
  float v20; // [sp+10h] [bp-40h]
  float v21; // [sp+14h] [bp-3Ch] BYREF
  float v22; // [sp+18h] [bp-38h]
  float v23; // [sp+1Ch] [bp-34h]
  float v24; // [sp+20h] [bp-30h]
  int v25; // [sp+24h] [bp-2Ch]

  v1 = dword_1ACF68;
  v2 = *(_DWORD *)(dword_1ACF68 + 6572);
  *(_BYTE *)(v2 + 124) = 1;
  if ( !*(_BYTE *)(v2 + 127) )
  {
    v4 = (_BYTE *)(v1 + 11552);
    if ( (a1 & 2) != 0 )
    {
      v10 = *(float *)(v2 + 200);
      v11 = *(float *)(v2 + 204);
      v12 = *(float *)(v2 + 236);
      v19 = 0.0;
      v20 = 0.0;
      v22 = v11;
      v21 = v10;
      v24 = v11 + v12;
      v23 = v10 + 1.0;
      sub_8B104((unsigned int)&v19);
      if ( sub_8B314(&v21, 0, 0) )
      {
        v20 = v22;
        v18[1] = v24;
        v13 = *(_DWORD **)(v2 + 636);
        v19 = v21;
        v18[0] = v21;
        v14 = sub_88C10(27, 1.0);
        sub_9D43C(v13, &v19, v18, v14, 1.0);
        if ( *v4 )
          sub_99FEC(" |");
      }
    }
    else if ( a1 << 31 )
    {
      v5 = *(float *)(v2 + 12);
      v6 = v5;
      v7 = v5 + *(float *)(v2 + 20);
      if ( *(_DWORD *)(v2 + 412) )
        v6 = v5 + *(float *)(v2 + 436);
      if ( (a1 & 4) != 0 )
      {
        v9 = *(_DWORD *)(v2 + 448);
        if ( v9 )
        {
          sub_99784();
          v8 = 0;
        }
        else
        {
          v9 = 0;
          v8 = 1;
        }
      }
      else
      {
        v8 = 1;
        v9 = 0;
      }
      v15 = *(float *)(v2 + 204);
      v23 = v7;
      v21 = v6;
      v22 = v15;
      v19 = 0.0;
      v20 = 0.0;
      v24 = v15 + 1.0;
      sub_8B104((unsigned int)&v19);
      if ( sub_8B314(&v21, 0, 0) )
      {
        v16 = *(_DWORD **)(v2 + 636);
        v19 = v23;
        v20 = v22;
        v17 = sub_88C10(27, 1.0);
        sub_9D43C(v16, &v21, &v19, v17, 1.0);
        if ( *v4 )
          sub_892E0((int)&v21, "--------------------------------", 0);
        if ( !v8 )
        {
          sub_997F0();
          *(_DWORD *)(v9 + 28) = *(_DWORD *)(v2 + 204);
        }
      }
      else if ( !v8 )
      {
        sub_997F0();
      }
    }
  }
  return v25;
}


// ======================================================================
