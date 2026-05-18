// ADDR: 0x148858
// SYMBOL: sub_148858
int __fastcall sub_148858(int a1)
{
  int v2; // r2
  int v3; // r3
  int v4; // r6
  int v5; // r4
  int i; // r8
  int result; // r0
  int v8; // r1
  int v9; // r10
  int v10; // [sp+0h] [bp-160h]
  int v11; // [sp+4h] [bp-15Ch]
  int v12; // [sp+8h] [bp-158h]
  int v13; // [sp+Ch] [bp-154h]
  int v14; // [sp+10h] [bp-150h]
  int v15; // [sp+14h] [bp-14Ch]
  int v16; // [sp+18h] [bp-148h]
  _BYTE v17[276]; // [sp+2Ch] [bp-134h] BYREF
  _DWORD v18[8]; // [sp+140h] [bp-20h] BYREF

  sub_1489AC();
  v4 = 61448;
  v5 = a1 + 32772;
  for ( i = 0; i != 4096; ++i )
  {
    result = a1 + 4 * i;
    v8 = *(_DWORD *)(result + 4);
    if ( v8 )
    {
      v9 = v5 + 3 * i;
      if ( *(_BYTE *)(v9 + 0x4000) || *(_DWORD *)(a1 + v4) == 14 )
      {
        result = sub_107188(word_B9550, v8, v2, v3, v10, v11, v12, v13, v14, v15, v16);
        if ( result )
        {
          sub_17D4A8(v17);
          if ( *(_BYTE *)(v9 + 0x4000) )
          {
            LOWORD(v18[0]) = *(_WORD *)(a1 + 49157 + 3 * i);
            sub_17D628(v17, v18, 16, 1);
          }
          else
          {
            v18[0] = i;
            sub_17D628(v17, v18, 32, 1);
          }
          v10 = 10;
          v13 = -1;
          v14 = 0xFFFF;
          v15 = 0xFFFF;
          v11 = 0;
          v12 = 0;
          v16 = 0;
          (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int))(**(_DWORD **)(dword_23DEF4 + 528) + 108))(
            *(_DWORD *)(dword_23DEF4 + 528),
            &unk_23C7B8,
            v17,
            1);
          result = sub_17D542(v17);
          v5 = a1 + 32772;
        }
      }
      else
      {
        result = *(_DWORD *)(v5 + 4 * i);
        if ( result >= 1 )
          *(_DWORD *)(v5 + 4 * i) = --result;
      }
    }
    v4 += 20;
  }
  return result;
}


// ======================================================================
// ADDR: 0x148d6a
// SYMBOL: sub_148D6A
int __fastcall sub_148D6A(int a1)
{
  int v1; // r5
  int i; // r6
  int result; // r0

  v1 = a1 + 4020;
  for ( i = 0; i != 1004; ++i )
  {
    if ( *(_BYTE *)(v1 + i) )
      sub_14933C(**(_DWORD **)(v1 + 4 * i - 4016));
  }
  result = *(_DWORD *)(a1 + 5052);
  if ( result )
    return sub_13E9BC(result);
  return result;
}


// ======================================================================
// ADDR: 0x150224
// SYMBOL: sub_150224
int __fastcall sub_150224(int a1)
{
  int *v2; // r4
  int result; // r0
  int *v4; // r11
  int v5; // r9
  int v6; // r5
  _DWORD *v7; // r6
  _BOOL4 v8; // r0
  float v9; // r0
  _BYTE *v10; // r5
  float v11; // r5
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r1
  int v16; // r0
  int v17; // r0
  int v18; // r5
  char v19; // r1
  int v20; // [sp+0h] [bp-48h]
  int v21; // [sp+4h] [bp-44h]
  int v22; // [sp+Ch] [bp-3Ch]

  v22 = sub_F0B30();
  v2 = *(int **)(a1 + 60000);
  result = a1 + 60000;
  v4 = *(int **)(a1 + 60004);
  if ( v2 != v4 )
  {
    v20 = *(_DWORD *)(**(_DWORD **)(dword_23DEF4 + 944) + 5052);
    v21 = 0;
    do
    {
      v5 = *v2;
      v6 = a1 + *v2;
      result = *(unsigned __int8 *)(v6 + 40000);
      if ( *(_BYTE *)(v6 + 40000) )
      {
        if ( *(_BYTE *)(v6 + 42000) && (unsigned int)(v22 - *(_DWORD *)(a1 + 4 * v5 + 44000)) >= 0x3A99 )
        {
          result = sub_14FEB6(a1, (unsigned __int16)v5);
        }
        else
        {
          v7 = *(_DWORD **)(a1 + 4 * v5);
          v8 = sub_10A128((int)v7);
          sub_10A144((int)v7, !v8);
          v9 = COERCE_FLOAT(sub_109AB4((int)v7));
          if ( v9 == 0.0 )
          {
            v10 = (_BYTE *)(v6 + 42000);
            sub_150438(LODWORD(v9), (unsigned __int16)v5);
            result = (unsigned __int8)*v10;
            if ( !*v10 )
            {
              *v10 = 1;
              result = sub_F0B30();
              *(_DWORD *)(a1 + 4 * v5 + 44000) = result;
            }
          }
          else
          {
            v11 = COERCE_FLOAT(sub_F8E1C((int)v7));
            v12 = sub_109864((int)v7);
            if ( v11 >= 200.0 || v12 == 4 || (v13 = sub_10A1C0(v7)) == 0 )
            {
              if ( !sub_109F36((int)v7) )
              {
                v17 = sub_109F60((int)v7);
                if ( v11 <= 90.0 && !v17 && v21 <= 2 )
                {
                  v18 = a1 + 4 * v5;
                  if ( (unsigned int)(sub_F0B30() - *(_DWORD *)(v18 + 52000)) >= 0x65 )
                  {
                    if ( sub_141580(v20, (unsigned __int16)v5, (int)v7) )
                    {
                      *(_DWORD *)(v18 + 52000) = sub_F0B30();
                      ++v21;
                    }
                  }
                }
              }
              v14 = v7[6];
              if ( *(_BYTE *)(*(_DWORD *)(dword_23DEF4 + 524) + 36) )
              {
                sub_10A214((int)v7, v14 > 0);
                goto LABEL_17;
              }
              if ( v14 == 1 )
              {
                v19 = 1;
              }
              else
              {
                if ( v14 )
                {
                  if ( v14 == -1 )
                  {
                    v19 = sub_10A1E4((int)v7);
                    goto LABEL_35;
                  }
LABEL_36:
                  if ( v7[7] <= 1u )
LABEL_17:
                    sub_10A22A((int)v7);
                  v15 = a1 + 4 * v5;
                  v16 = v7[3];
                  if ( v16 != *(_DWORD *)(v15 + 8000) )
                    *(_DWORD *)(v15 + 8000) = v16;
                  result = sub_10A23C(v7);
                  goto LABEL_21;
                }
                v19 = 0;
              }
LABEL_35:
              sub_10A214((int)v7, v19);
              goto LABEL_36;
            }
            result = sub_150438(v13, (unsigned __int16)v5);
          }
        }
      }
LABEL_21:
      ++v2;
    }
    while ( v2 != v4 );
  }
  return result;
}


// ======================================================================
