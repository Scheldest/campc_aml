// ADDR: 0x1096c8
// SYMBOL: sub_1096C8
unsigned int *__fastcall sub_1096C8(unsigned int *a1, int *a2, int *a3, int a4)
{
  unsigned int v4; // r12
  unsigned int v5; // t1
  int v6; // lr
  bool v7; // zf
  int v8; // r3
  int v9; // r12

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    *a2 = 1;
    v5 = a1[1];
    ++a1;
    *a3 = 4 * HIBYTE(v5) + 4;
    return a1;
  }
  v6 = HIBYTE(v4) & 0xF;
  if ( !v6 )
  {
    v9 = 1;
    v8 = 4;
    goto LABEL_10;
  }
  v7 = v6 == 3;
  if ( v6 != 3 )
  {
    a4 = 0;
    v7 = v6 == 1;
  }
  if ( v7 )
  {
    v8 = 4 * BYTE2(v4) + 4;
    v9 = 2;
LABEL_10:
    *a3 = v8;
    *a2 = v9;
    return a1;
  }
  return (unsigned int *)a4;
}


// ======================================================================
// ADDR: 0x109748
// SYMBOL: sub_109748
int __fastcall sub_109748(int a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r6
  unsigned int v6; // r10
  int v8; // r2
  int v9; // r0
  int v10; // r7
  int v11; // r9
  int result; // r0
  int v13; // r2
  int v14; // r2
  int v15; // r2
  int v16; // r0
  int v17; // r1
  int v18; // r3
  unsigned int v19; // r1
  int v20; // r5
  unsigned int v21; // r6
  unsigned int v22; // r6
  int v23; // r0
  int v24; // r2
  int v25; // r2
  int v26; // r3
  int v27; // r5
  int v28; // r2
  int v29; // r3
  int v30; // r2
  int v31; // r3
  int v32; // r2
  int v33; // r3
  int v34; // r2
  int v35; // r3
  int v36; // r2
  int v37; // r3
  int v38; // r2
  int v39; // r3
  int v40; // r2
  int v41; // r3
  int v42; // r5
  int v43; // r1
  int v44; // r2
  int v45; // [sp+0h] [bp-28h]
  _DWORD v47[8]; // [sp+8h] [bp-20h] BYREF

  if ( a3 >= a4 )
    goto LABEL_61;
  v5 = a4;
  v6 = a3;
  v45 = 0;
  do
  {
    v9 = v6 ^ 3;
    v10 = v6++;
    v11 = *(unsigned __int8 *)(a2 + v9);
    if ( (v11 & 0x80) != 0 )
    {
      result = 9;
      switch ( ((v11 & 0xF0u) - 128) >> 4 )
      {
        case 0u:
          if ( v6 >= v5 )
            return result;
          v13 = (unsigned __int16)((_WORD)v11 << 12) | (16 * *(unsigned __int8 *)(a2 + (v6 ^ 3)));
          if ( !v13 )
            return result;
          sub_109E84(a1, 0, v13, 0);
          v6 = v10 + 2;
          v45 |= (unsigned __int8)(v11 & 8) >> 3;
          goto LABEL_57;
        case 1u:
          if ( (v11 & 0xD) == 0xD )
            return result;
          sub_10AB7C(a1, v11 & 0xF, v47);
          goto LABEL_15;
        case 2u:
          sub_109E84(a1, 0, ((32 << (v11 & 7)) - 16) | ((v11 & 8) << 11), 0);
          continue;
        case 3u:
          switch ( v11 )
          {
            case 176:
              goto LABEL_60;
            case 177:
              if ( v6 >= a4 )
                return result;
              v15 = *(unsigned __int8 *)(a2 + (v6 ^ 3));
              if ( !*(_BYTE *)(a2 + (v6 ^ 3)) || (v15 & 0xF0) != 0 )
                return result;
              v16 = a1;
              v17 = 0;
              v18 = 0;
LABEL_55:
              sub_109E84(v16, v17, v15, v18);
              goto LABEL_56;
            case 178:
              v5 = a4;
              v42 = 0;
              v43 = 0;
              break;
            case 179:
              v18 = 1;
              v17 = 1;
              v15 = ((*(unsigned __int8 *)(a2 + (v6 ^ 3)) | (*(unsigned __int8 *)(a2 + (v6 ^ 3)) << 12)) & 0xF000F) + 1;
              v16 = a1;
              goto LABEL_55;
            case 180:
              if ( sub_10AB7C(a1, 13, v47) )
                goto LABEL_57;
              v14 = v47[0] + 4;
              v47[0] += 4;
              goto LABEL_16;
            case 181:
            case 182:
            case 183:
              return result;
            default:
              sub_109E84(a1, 1, (char *)&off_80000 + (v11 & 7) + 1, 1);
              continue;
          }
          do
          {
            if ( v6 >= a4 )
              return result;
            v44 = v6++ ^ 3;
            LOBYTE(v44) = *(_BYTE *)(a2 + v44);
            v42 |= (v44 & 0x7F) << v43;
            v43 += 7;
          }
          while ( (v44 & 0x80) != 0 );
          sub_10AB7C(a1, 13, v47);
          v8 = v47[0] + 4 * v42 + 516;
          goto LABEL_4;
        case 4u:
          if ( (v11 & 0xFE) != 0xC8 )
            return result;
          v19 = *(unsigned __int8 *)(a2 + (v6 ^ 3));
          v20 = (v19 >> 4) | (16 * (v11 == 200));
          v21 = v20 + (v19 & 0xF);
          if ( v21 > 0x1F )
            return result;
          if ( sub_10AB7C(a1, 13, v47) )
            goto LABEL_56;
          v22 = v21 + 1;
          break;
        case 5u:
          if ( (v11 & 8) != 0 )
            return result;
          if ( !sub_10AB7C(a1, 13, v47) )
          {
            v25 = *(_DWORD *)v47[0];
            v26 = *(_DWORD *)(v47[0] + 4);
            v47[0] += 8;
            if ( !sub_10AD14(a1, 264, v25, v26) )
            {
              v27 = v11 & 7;
              if ( (v11 & 7) == 0 )
                goto LABEL_15;
              v28 = *(_DWORD *)v47[0];
              v29 = *(_DWORD *)(v47[0] + 4);
              v47[0] += 8;
              if ( !sub_10AD14(a1, 265, v28, v29) )
              {
                if ( v27 == 1 )
                  goto LABEL_15;
                v30 = *(_DWORD *)v47[0];
                v31 = *(_DWORD *)(v47[0] + 4);
                v47[0] += 8;
                if ( !sub_10AD14(a1, 266, v30, v31) )
                {
                  if ( v27 == 2 )
                    goto LABEL_15;
                  v32 = *(_DWORD *)v47[0];
                  v33 = *(_DWORD *)(v47[0] + 4);
                  v47[0] += 8;
                  if ( !sub_10AD14(a1, 267, v32, v33) )
                  {
                    if ( v27 == 3 )
                      goto LABEL_15;
                    v34 = *(_DWORD *)v47[0];
                    v35 = *(_DWORD *)(v47[0] + 4);
                    v47[0] += 8;
                    if ( !sub_10AD14(a1, 268, v34, v35) )
                    {
                      if ( v27 == 4 )
                        goto LABEL_15;
                      v36 = *(_DWORD *)v47[0];
                      v37 = *(_DWORD *)(v47[0] + 4);
                      v47[0] += 8;
                      if ( !sub_10AD14(a1, 269, v36, v37) )
                      {
                        if ( v27 == 5
                          || (v38 = *(_DWORD *)v47[0],
                              v39 = *(_DWORD *)(v47[0] + 4),
                              v47[0] += 8,
                              !sub_10AD14(a1, 270, v38, v39))
                          && (v27 == 6
                           || (v40 = *(_DWORD *)v47[0],
                               v41 = *(_DWORD *)(v47[0] + 4),
                               v47[0] += 8,
                               !sub_10AD14(a1, 271, v40, v41))) )
                        {
LABEL_15:
                          v14 = v47[0];
LABEL_16:
                          sub_10ABD4(a1, 13, v14);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_57;
        default:
          return result;
      }
      while ( 1 )
      {
        v23 = v47[0];
        v24 = *(_DWORD *)v47[0];
        v47[0] += 8;
        if ( v20 == 32 || sub_10AD14(a1, v20 + 256, v24, *(_DWORD *)(v23 + 4)) )
          break;
        if ( ++v20 >= v22 )
        {
          sub_10ABD4(a1, 13, v47[0]);
          break;
        }
      }
LABEL_56:
      v6 = v10 + 2;
LABEL_57:
      v5 = a4;
    }
    else
    {
      sub_10AB7C(a1, 13, v47);
      if ( (v11 & 0x40) != 0 )
        v8 = v47[0] - (unsigned __int8)(4 * v11) - 4;
      else
        v8 = 4 * v11 + v47[0] + 4;
LABEL_4:
      v47[0] = v8;
      sub_10ABD4(a1, 13, v8);
    }
  }
  while ( v6 < v5 );
LABEL_60:
  result = 8;
  if ( (v45 & 1) == 0 )
  {
LABEL_61:
    sub_10AB7C(a1, 14, v47);
    sub_10ABD4(a1, 15, v47[0]);
    return 8;
  }
  return result;
}


// ======================================================================
