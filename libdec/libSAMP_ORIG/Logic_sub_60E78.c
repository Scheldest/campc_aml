// ADDR: 0x682e8
// SYMBOL: sub_682E8
int sub_682E8(__int16 *a1, ...)
{
  int v1; // r11
  int v2; // r9
  _BYTE *v3; // r4
  int v4; // r1
  int v5; // r0
  const char *v6; // kr00_4
  unsigned __int8 v7; // r6
  double *v8; // r0
  double v9; // d16
  float v10; // s0
  int v11; // kr04_4
  _DWORD *v12; // kr08_4
  unsigned int v13; // r2
  char *v14; // r0
  int v15; // r1
  int result; // r0
  int *v17; // r2
  int v18; // r3
  int *v19; // r1
  _DWORD *v20; // r6
  _DWORD *v21; // t1
  int v22; // t1
  int v23; // [sp+4h] [bp-30h]
  double *v24; // [sp+10h] [bp-24h]
  va_list va; // [sp+3Ch] [bp+8h] BYREF

  va_start(va, a1);
  v1 = 2;
  v2 = 0;
  v3 = a1 + 1;
  v4 = dword_1A408C;
  word_1A4090 = *a1;
  va_copy(v24, va);
  v5 = dword_1A408C + 60;
  *(_QWORD *)(dword_1A408C + 60) = 0LL;
  *(_QWORD *)(v5 + 8) = 0LL;
  v5 += 16;
  *(_QWORD *)v5 = 0LL;
  *(_QWORD *)(v5 + 8) = 0LL;
  v5 += 16;
  *(_QWORD *)v5 = 0LL;
  *(_QWORD *)(v5 + 8) = 0LL;
  v5 += 16;
  *(_QWORD *)v5 = 0LL;
  *(_QWORD *)(v5 + 8) = 0LL;
  *(_DWORD *)(v4 + 128) = 0;
  v23 = v4;
  *(_DWORD *)(v5 + 16) = 0;
  while ( 1 )
  {
    switch ( *v3 )
    {
      case 'f':
        v8 = (double *)(((unsigned int)v24 + 7) & 0xFFFFFFF8);
        v9 = *v8;
        *((_BYTE *)&word_1A4090 + v1) = 6;
        v10 = v9;
        v24 = v8 + 1;
        *(float *)((char *)&word_1A4090 + v1 + 1) = v10;
        goto LABEL_6;
      case 'g':
      case 'h':
      case 'j':
      case 'k':
      case 'l':
      case 'm':
      case 'n':
      case 'o':
      case 'p':
      case 'q':
      case 'r':
      case 't':
      case 'u':
      case 'w':
      case 'x':
      case 'y':
        return 0;
      case 'i':
        v11 = va_arg(v24, _DWORD);
        *((_BYTE *)&word_1A4090 + v1) = 1;
        *(_DWORD *)((char *)&word_1A4090 + v1 + 1) = v11;
LABEL_6:
        v1 += 5;
        ++v3;
        break;
      case 's':
        v6 = va_arg(v24, const char *);
        v7 = strlen(v6);
        *((_BYTE *)&word_1A4090 + v1) = 14;
        *((_BYTE *)&word_1A4090 + v1 + 1) = v7;
        j_memcpy((char *)&word_1A4090 + v1 + 2, v6, v7);
        v1 += 2 + v7;
        ++v3;
        continue;
      case 'v':
        v12 = va_arg(v24, _DWORD *);
        ++v3;
        *((_BYTE *)&word_1A4090 + v1) = 3;
        v13 = (unsigned int)&unk_3FFFC & (4 * v2);
        *(int *)((char *)&dword_1A4190 + v13) = (int)v12;
        *(_DWORD *)(v23 + v13 + 60) = *v12;
        v14 = (char *)&word_1A4090 + v1;
        v1 += 3;
        *(_WORD *)(v14 + 1) = v2++;
        continue;
      case 'z':
        ++v3;
        *((_BYTE *)&word_1A4090 + v1++) = 0;
        continue;
      default:
        if ( *v3 )
          return 0;
        v15 = dword_1A4404;
        *(_DWORD *)(dword_1A408C + 20) = &word_1A4090;
        ((void (*)(void))(v15 + 3323577))();
        result = *(unsigned __int8 *)(dword_1A408C + 229);
        if ( v2 << 16 )
        {
          v17 = (int *)(dword_1A408C + 60);
          v18 = (unsigned __int16)v2;
          v19 = &dword_1A4190;
          do
          {
            v21 = (_DWORD *)*v19++;
            v20 = v21;
            --v18;
            v22 = *v17++;
            *v20 = v22;
          }
          while ( v18 );
        }
        return result;
    }
  }
}


// ======================================================================
// ADDR: 0x685e0
// SYMBOL: sub_685E0
int sub_685E0()
{
  return ((int (*)(void))(dword_1A4404 + 4734281))();
}


// ======================================================================
