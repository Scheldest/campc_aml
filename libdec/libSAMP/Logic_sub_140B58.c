// ADDR: 0x1486da
// SYMBOL: sub_1486DA
int __fastcall sub_1486DA(int a1, float a2, float *a3, __int64 *a4)
{
  int v5; // r4
  __int64 v7; // kr00_8
  int v8; // lr
  int v9; // r3
  int v10; // r8
  int v11; // r6
  float v12; // r5
  float v13; // s18
  unsigned int v14; // r0
  int v15; // r0
  int v16; // r5
  int v17; // r0
  bool v18; // zf
  int v19; // r0
  int v21; // [sp+0h] [bp-68h]
  __int64 v22; // [sp+10h] [bp-58h] BYREF
  int v23; // [sp+18h] [bp-50h]
  int v24; // [sp+1Ch] [bp-4Ch]
  __int64 v25; // [sp+24h] [bp-44h] BYREF
  int v26; // [sp+2Ch] [bp-3Ch]
  int v27; // [sp+30h] [bp-38h]

  v25 = *(_QWORD *)a3;
  v5 = a1 + 1004;
  v7 = *a4;
  v8 = *((_DWORD *)a4 + 2);
  v9 = *((_DWORD *)a3 + 2);
  v10 = 0;
  v27 = 1048576000;
  v26 = v9;
  v22 = v7;
  v23 = v8;
  v24 = 1048576000;
  v21 = 0xFFFF;
  do
  {
    if ( *(_BYTE *)(v5 + v10 - 1000) )
    {
      v11 = *(_DWORD *)(v5 + 4 * v10);
      if ( v11 )
      {
        v12 = sub_F8DB8(*(_DWORD *)(v5 + 4 * v10), *a3, a3[1], a3[2]);
        if ( sub_10227C(v11) && sub_F8A2C(v11) != 19300 )
        {
          v13 = v12;
          if ( v12 < a2 )
          {
            v14 = sub_F8A2C(v11);
            v15 = sub_108538(v14);
            if ( v15 )
            {
              v16 = v15;
              if ( sub_F8EF0(v11) && *(_DWORD *)(v16 + 44) )
              {
                v17 = sub_F909C(v11, (int)&v25, (int)&v22);
                v18 = v17 == 0;
                if ( v17 )
                  a2 = v13;
                v19 = v21;
                if ( !v18 )
                  v19 = v10;
                v21 = v19;
              }
              else
              {
                sub_F907C(v11);
              }
            }
          }
        }
      }
    }
    ++v10;
  }
  while ( v10 != 1000 );
  return (unsigned __int16)v21;
}


// ======================================================================
