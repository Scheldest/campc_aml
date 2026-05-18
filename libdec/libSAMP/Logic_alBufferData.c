// ADDR: 0x1ce998
// SYMBOL: sub_1CE998
int __fastcall sub_1CE998(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v10; // r7
  int v11; // r0
  char *v12; // r0
  unsigned int v13; // r9
  int v14; // r6
  unsigned int v15; // r10
  unsigned int v16; // r5
  unsigned __int64 v17; // r0
  size_t v18; // r8
  int v19; // r4
  unsigned int *v20; // r6
  void *v21; // r0
  unsigned int *v22; // r0
  _DWORD *v23; // r4
  int v24; // r6
  int v25; // r5
  int v26; // r2
  int v27; // r1
  int v28; // r0
  unsigned int v29; // r1
  unsigned int v30; // r2
  unsigned int v31; // r0
  int v32; // r1
  unsigned int *v34; // [sp+Ch] [bp-34h]
  int v36; // [sp+18h] [bp-28h]
  int v38; // [sp+20h] [bp-20h]

  v10 = 40962;
  switch ( a3 )
  {
    case 4612:
      v11 = 11;
      goto LABEL_26;
    case 4613:
      v11 = 12;
      goto LABEL_26;
    case 4614:
      v11 = 13;
      goto LABEL_26;
    case 4615:
      v11 = 6;
      goto LABEL_26;
    case 4616:
      v11 = 7;
      goto LABEL_26;
    case 4617:
      v11 = 8;
      goto LABEL_26;
    case 4618:
      v11 = 14;
      goto LABEL_26;
    case 4619:
      v11 = 15;
      goto LABEL_26;
    case 4620:
      v11 = 16;
      goto LABEL_26;
    case 4621:
      v11 = 17;
      goto LABEL_26;
    case 4622:
      v11 = 18;
      goto LABEL_26;
    case 4623:
      v11 = 19;
      goto LABEL_26;
    case 4624:
      v11 = 20;
      goto LABEL_26;
    case 4625:
      v11 = 21;
      goto LABEL_26;
    case 4626:
      v11 = 22;
LABEL_26:
      v12 = (char *)&unk_C4FC4 + 12 * v11;
      if ( *((_DWORD *)v12 + 1) == a5 )
      {
        v13 = a5 - 5376;
        v14 = *((_DWORD *)v12 + 2);
        v15 = 0;
        if ( (unsigned int)(a5 - 5376) <= 6 )
          v12 = (char *)0xFFEF65AC;
        v16 = 0;
        if ( (unsigned int)(a5 - 5376) <= 6 )
          v15 = *(_DWORD *)&v12[4 * v13 + 1895300];
        if ( (unsigned int)(v14 - 5120) <= 6 )
          v16 = dword_C5150[v14 - 5120];
        v17 = a4 * (unsigned __int64)v15;
        v10 = 40965;
        v18 = v17 * v16;
        v19 = (v17 * v16) >> 32;
        if ( !((v17 * v16) >> 31) )
        {
          v36 = v14;
          v20 = (unsigned int *)(a1 + 48);
          v38 = a1;
          j_WriteLock((unsigned int *)(a1 + 48));
          if ( *(_DWORD *)(v38 + 44) )
          {
            j_WriteUnlock(v20);
            v10 = 40964;
          }
          else
          {
            v34 = v20;
            v21 = realloc(*(void **)v38, v18);
            if ( !(v18 | v19) || v21 )
            {
              v23 = (_DWORD *)v38;
              *(_DWORD *)v38 = v21;
              if ( a7 )
              {
                sub_1CF100(v21, v36);
                v23 = (_DWORD *)v38;
              }
              v23[6] = a5;
              if ( a8 )
              {
                v23[7] = a6;
                v24 = a3;
                v25 = a2;
                if ( a6 == 5132 )
                {
                  v26 = v36;
                  v27 = 0;
                  if ( v13 <= 6 )
                    v27 = dword_C5130[v13];
                  v28 = 36 * (a4 / 65) * v27;
                }
                else
                {
                  v29 = 0;
                  if ( v13 <= 6 )
                    v29 = 0xFFEF642C;
                  v30 = a6 - 5120;
                  v31 = 0;
                  if ( v13 <= 6 )
                    v29 = *(_DWORD *)(v29 + 1895684 + 4 * v13);
                  if ( v30 <= 0xB )
                    v31 = 0xFFEF63E8;
                  v32 = v29 * a4;
                  if ( v30 <= 0xB )
                    v31 = *(_DWORD *)(v31 + 1895704 + 4 * v30);
                  v26 = v36;
                  v28 = v32 * v31;
                }
              }
              else
              {
                v26 = v36;
                v23[7] = v36;
                v24 = a3;
                v28 = v15 * a4 * v16;
                v25 = a2;
              }
              v10 = 0;
              v23[1] = v25;
              v23[2] = v24;
              v23[3] = a4;
              v23[4] = a5;
              v23[5] = v26;
              v23[8] = v28;
              v22 = v34;
              v23[9] = 0;
              v23[10] = a4;
            }
            else
            {
              v22 = v20;
            }
            j_WriteUnlock(v22);
          }
        }
      }
      break;
    default:
      v11 = 0;
      switch ( a3 )
      {
        case 4352:
          goto LABEL_26;
        case 4353:
          v11 = 1;
          goto LABEL_26;
        case 4354:
          v11 = 3;
          goto LABEL_26;
        case 4355:
          v11 = 4;
          goto LABEL_26;
        default:
          switch ( a3 )
          {
            case 65540:
              v11 = 9;
              goto LABEL_26;
            case 65541:
              v11 = 10;
              goto LABEL_26;
            case 65552:
              v11 = 2;
              goto LABEL_26;
            case 65553:
              v11 = 5;
              goto LABEL_26;
            default:
              return v10;
          }
      }
  }
  return v10;
}


// ======================================================================
