// ADDR: 0x10a128
// SYMBOL: sub_10A128
bool __fastcall sub_10A128(int a1)
{
  int v1; // r0
  int v2; // r4
  _BOOL4 result; // r0

  v1 = *(_DWORD *)(a1 + 12);
  result = 0;
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 1124);
    if ( v2 == sub_1082E4() )
      return 1;
  }
  return result;
}


// ======================================================================
// ADDR: 0x10a144
// SYMBOL: sub_10A144
int __fastcall sub_10A144(int a1, int a2)
{
  int result; // r0
  int v5; // r1
  char v6; // r5
  int v7; // r3
  int v8; // r2
  int v9; // [sp+0h] [bp-18h]
  int v10; // [sp+4h] [bp-14h]
  int v11; // [sp+8h] [bp-10h]
  int v12; // [sp+Ch] [bp-Ch]
  int v13; // [sp+Ch] [bp-Ch]
  int v14; // [sp+10h] [bp-8h]
  int v15; // [sp+10h] [bp-8h]
  int v16; // [sp+14h] [bp-4h]
  int v17; // [sp+14h] [bp-4h]
  int savedregs; // [sp+18h] [bp+0h]
  int savedregsa; // [sp+18h] [bp+0h]

  result = *(_DWORD *)(a1 + 12);
  if ( result )
  {
    result = sub_108354(*(_DWORD *)(a1 + 8));
    if ( result )
    {
      result = dword_23DF24 + 6716708;
      if ( **(_DWORD **)(a1 + 12) != dword_23DF24 + 6716708 )
      {
        v5 = *(_DWORD *)(a1 + 8);
        if ( a2 )
        {
          v6 = 1;
          sub_107188(word_B3E5E, v5, 1, 1, 1, 1, 1, v12, v14, v16, savedregs);
          v8 = 0;
        }
        else
        {
          v6 = 0;
          sub_107188(word_B3E5E, v5, 0, 0, 0, 0, 0, v12, v14, v16, savedregs);
          v8 = 1;
        }
        result = sub_107188(word_B3D46, *(_DWORD *)(a1 + 8), v8, v7, v9, v10, v11, v13, v15, v17, savedregsa);
        *(_BYTE *)(a1 + 32) = v6;
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x10a214
// SYMBOL: sub_10A214
int __fastcall sub_10A214(int a1, char a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 12);
  if ( result )
    *(_BYTE *)(result + 1068) = *(_BYTE *)(result + 1068) & 0xEF | (16 * (a2 & 1));
  return result;
}


// ======================================================================
// ADDR: 0x10a22a
// SYMBOL: sub_10A22A
int __fastcall sub_10A22A(int result)
{
  if ( *(_DWORD *)(result + 12) )
    return sub_108354(*(_DWORD *)(result + 8));
  return result;
}


// ======================================================================
// ADDR: 0x141580
// SYMBOL: sub_141580
int __fastcall sub_141580(int a1, unsigned int a2, int a3)
{
  int result; // r0
  float v7; // s16
  int i; // r1
  int v9; // r2
  int v10; // r8
  int v11; // r6
  unsigned __int16 *v12; // r9
  int v13; // r10
  int *v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  float *v18; // r0
  float v19; // r9
  float v20; // r10
  float v21; // r0
  float v22; // r2
  float v23; // r3
  int v24; // r0
  unsigned int v25; // r1
  int v26; // r2
  float v27; // [sp+0h] [bp-38h]
  float v28; // [sp+4h] [bp-34h]
  int v29; // [sp+8h] [bp-30h]
  unsigned __int16 *v30; // [sp+Ch] [bp-2Ch]

  if ( !dword_23DEF4 )
    return 0;
  result = 0;
  if ( a3 && a2 <= 0x7D0 && **(_DWORD **)(dword_23DEF4 + 944) )
  {
    if ( *(_DWORD *)(a3 + 12) )
    {
      if ( !sub_10A1E4(a3) && !sub_109F36(a3) )
      {
        v7 = 90.0;
        if ( COERCE_FLOAT(sub_F8E1C(a3)) <= 90.0 )
        {
          for ( i = 0; i != 7; ++i )
          {
            v9 = *(_DWORD *)(*(_DWORD *)(a3 + 12) + 1128 + 4 * i);
            if ( v9 )
            {
              if ( v9 != *(_DWORD *)(*(_DWORD *)(a1 + 28) + 92) )
                return 0;
              v24 = dword_23DEF4;
              v26 = (char)(i + 1);
              v25 = a2;
              goto LABEL_30;
            }
          }
          v10 = 0;
          v11 = **(_DWORD **)(dword_23DEF4 + 944);
          v12 = (unsigned __int16 *)(v11 + 5024);
          v13 = *(unsigned __int16 *)(v11 + 5024);
          do
          {
            if ( !sub_148EBA(v11, (unsigned __int16)v10) )
            {
              if ( *(_BYTE *)(v11 + v10 + 4020) )
              {
                v14 = *(int **)(v11 + 4 * v10 + 4);
                if ( v14 )
                {
                  v15 = *v14;
                  if ( v15 )
                  {
                    if ( *(_BYTE *)(v15 + 16) )
                    {
                      v16 = *(_DWORD *)(v15 + 296);
                      if ( v16 )
                      {
                        v17 = *(_DWORD *)(v16 + 92);
                        if ( v17 )
                        {
                          v18 = *(float **)(v17 + 20);
                          if ( v18 )
                          {
                            v30 = v12;
                            v19 = v18[13];
                            v29 = v13;
                            v20 = v18[14];
                            v27 = v18[12];
                            v21 = sub_F8DB8(a3, v27, v19, v20);
                            v22 = v19;
                            v28 = v21;
                            v23 = v20;
                            v12 = v30;
                            v13 = v29;
                            if ( sub_F8DB8(a3, v27, v22, v23) < v7 )
                            {
                              v7 = v28;
                              v13 = v10;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            ++v10;
          }
          while ( v10 != 1004 );
          if ( (unsigned __int16)v13 == *v12 )
          {
            v24 = dword_23DEF4;
            v25 = a2;
            v26 = 0;
LABEL_30:
            sub_144876(v24, v25, v26);
            return 1;
          }
        }
      }
    }
    return 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x150438
// SYMBOL: sub_150438
int __fastcall sub_150438(int a1, int a2)
{
  __int16 v2; // r4
  int result; // r0
  int v4; // r0
  _BYTE v5[278]; // [sp+20h] [bp-120h] BYREF
  _WORD v6[5]; // [sp+136h] [bp-Ah] BYREF

  v2 = a2;
  result = *(unsigned __int16 *)(*(_DWORD *)(**(_DWORD **)(dword_23DEF4 + 944) + 5052) + 24);
  if ( result == a2 )
  {
    v4 = sub_17D4A8(v5);
    v6[0] = v2;
    sub_17D628(v4, v6, 16, 1);
    (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(dword_23DEF4 + 528) + 108))(
      *(_DWORD *)(dword_23DEF4 + 528),
      &unk_23C7BC,
      v5,
      1,
      10,
      0,
      0,
      -1,
      0xFFFF,
      0xFFFF,
      0);
    return sub_17D542(v5);
  }
  return result;
}


// ======================================================================
