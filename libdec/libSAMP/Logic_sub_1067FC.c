// ADDR: 0x1043b8
// SYMBOL: sub_1043B8
int __fastcall sub_1043B8(int a1)
{
  int v2; // r0
  int v3; // r3
  int v4; // r1
  int v5; // r0
  int v6; // r0
  unsigned int v7; // r1
  int v8; // r2
  int v9; // r6
  unsigned int v10; // r5
  unsigned int v11; // r0
  int *v12; // r1
  float v13; // s16
  int v15; // [sp+0h] [bp-20h]
  int v16; // [sp+4h] [bp-1Ch]
  int v17; // [sp+8h] [bp-18h]
  int v18; // [sp+Ch] [bp-14h]
  int v19; // [sp+10h] [bp-10h]
  int v20; // [sp+14h] [bp-Ch]
  int v21; // [sp+18h] [bp-8h]

  v2 = *(_DWORD *)(a1 + 92);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 1157) & 0x10) == 0 && sub_F8C70(a1) && !*(_BYTE *)(a1 + 96) )
    {
      v4 = *(_DWORD *)(a1 + 92);
      v5 = *(_DWORD *)(v4 + 1424);
      if ( !v5
        || !(*(unsigned __int8 *)(v4 + 1157) << 31)
        || *(_DWORD *)(v5 + 1124) == v4 && (unsigned int)*(unsigned __int16 *)(v5 + 38) - 569 >= 2 )
      {
        v6 = *(_DWORD *)(a1 + 72);
        if ( v6 )
        {
          *(_DWORD *)(a1 + 72) = v6 - 1;
          v7 = (unsigned int)(float)((float)(unsigned int)(v6 - 1) * 0.02);
          v8 = v7;
          if ( v7 < 5 )
            v8 = 0;
          if ( v7 > 0xFA )
            v8 = 250;
          sub_107188(&unk_B36FE, 0, v8, v3, v15, v16, v17, v18, v19, v20, v21);
          if ( *(_DWORD *)(a1 + 72) > 0x7D0u )
          {
            v9 = *(_DWORD *)(*(_DWORD *)(a1 + 92) + 1424);
            if ( v9 )
            {
              v10 = sub_F0B30();
              if ( *(_DWORD *)(a1 + 76) + 200 < v10 )
              {
                v11 = (unsigned __int8)(lrand48() % 40);
                if ( v11 < 0x14 )
                {
                  v13 = 0.0;
                }
                else if ( *(_DWORD *)(a1 + 72) < 0x1388u )
                {
                  v13 = 0.012;
                }
                else
                {
                  v12 = dword_10453C;
                  if ( v11 > 0x1D )
                    v12 = &dword_10453C[1];
                  v13 = *(float *)v12;
                }
                if ( sub_108700(*(_DWORD *)(v9 + 72), 0) > 0.050000001
                  || sub_108700(*(_DWORD *)(v9 + 76), 0) > 0.050000001 )
                {
                  *(float *)(v9 + 92) = v13 + *(float *)(v9 + 92);
                }
                *(_DWORD *)(a1 + 76) = v10;
              }
            }
          }
        }
      }
    }
  }
  return sub_F97A8(dword_23DEF0, *(_DWORD *)(a1 + 72) < 0x1389u);
}


// ======================================================================
