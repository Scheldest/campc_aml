
// Address: 0x1a03e8
// Original: j__ZN15ButtonContainerILi100EE6UpdateEb
// Demangled: ButtonContainer<100>::Update(bool)
// attributes: thunk
int ButtonContainer<100>::Update()
{
  return _ZN15ButtonContainerILi100EE6UpdateEb();
}


// ============================================================

// Address: 0x27cb3a
// Original: _ZN15ButtonContainerILi100EED2Ev
// Demangled: ButtonContainer<100>::~ButtonContainer()
_DWORD *__fastcall ButtonContainer<100>::~ButtonContainer(_DWORD *a1)
{
  void *v2; // r0
  _DWORD *result; // r0

  v2 = (void *)a1[108];
  a1[107] = 0;
  if ( v2 )
  {
    free(v2);
    a1[108] = 0;
  }
  result = a1;
  a1[106] = 0;
  return result;
}


// ============================================================

// Address: 0x27cd4c
// Original: _ZN15ButtonContainerILi100EE6UpdateEb
// Demangled: ButtonContainer<100>::Update(bool)
int __fastcall ButtonContainer<100>::Update(unsigned int a1, int a2)
{
  int v3; // r2
  int i; // r2
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int j; // r2
  unsigned int v9; // r3
  int v10; // r2
  unsigned int v11; // r11
  char *v12; // r0
  char *v13; // r1
  int v14; // r9
  int v15; // r6
  int v16; // r4
  bool v17; // zf
  double v18; // d16
  double *v19; // r0
  float v20; // s0
  unsigned int v21; // r4
  int v22; // r6
  _DWORD *v23; // r1
  int v24; // r4
  int v25; // r0
  int v26; // r1
  int v27; // r2

  v3 = *(_DWORD *)(a1 + 2144);
  *(_DWORD *)(a1 + 2144) = 0;
  *(_DWORD *)(a1 + 2148) = v3;
  for ( i = 0; i != 100; ++i )
  {
    v5 = *(_DWORD *)(a1 + 4 * i);
    if ( (unsigned int)(v5 + 1) >= 2 )
    {
      if ( v5 != 2 )
        goto LABEL_7;
      v6 = 3;
    }
    else
    {
      v6 = 1;
    }
    *(_DWORD *)(a1 + 4 * i) = v6;
LABEL_7:
    v7 = a1 + i;
    if ( *(_BYTE *)(v7 + 440) )
      *(_BYTE *)(v7 + 440) = 0;
  }
  if ( a2 )
  {
    *(_DWORD *)(a1 + 428) = 0;
    if ( a1 + 440 >= a1 + 400 || a1 + 540 < a1 )
    {
      *(_DWORD *)(a1 + 440) = 0;
      *(_QWORD *)a1 = 0x100000001LL;
      *(_QWORD *)(a1 + 8) = 0x100000001LL;
      *(_DWORD *)(a1 + 444) = 0;
      *(_QWORD *)(a1 + 16) = 0x100000001LL;
      *(_QWORD *)(a1 + 24) = 0x100000001LL;
      *(_DWORD *)(a1 + 448) = 0;
      *(_DWORD *)(a1 + 452) = 0;
      *(_DWORD *)(a1 + 456) = 0;
      *(_DWORD *)(a1 + 460) = 0;
      *(_DWORD *)(a1 + 464) = 0;
      *(_DWORD *)(a1 + 468) = 0;
      *(_DWORD *)(a1 + 472) = 0;
      *(_DWORD *)(a1 + 476) = 0;
      *(_DWORD *)(a1 + 480) = 0;
      *(_QWORD *)(a1 + 32) = 0x100000001LL;
      *(_QWORD *)(a1 + 40) = 0x100000001LL;
      *(_QWORD *)(a1 + 48) = 0x100000001LL;
      *(_QWORD *)(a1 + 56) = 0x100000001LL;
      *(_QWORD *)(a1 + 64) = 0x100000001LL;
      *(_QWORD *)(a1 + 72) = 0x100000001LL;
      *(_QWORD *)(a1 + 80) = 0x100000001LL;
      *(_QWORD *)(a1 + 88) = 0x100000001LL;
      *(_QWORD *)(a1 + 96) = 0x100000001LL;
      *(_QWORD *)(a1 + 104) = 0x100000001LL;
      *(_QWORD *)(a1 + 112) = 0x100000001LL;
      *(_QWORD *)(a1 + 120) = 0x100000001LL;
      *(_QWORD *)(a1 + 128) = 0x100000001LL;
      *(_QWORD *)(a1 + 136) = 0x100000001LL;
      *(_QWORD *)(a1 + 144) = 0x100000001LL;
      *(_QWORD *)(a1 + 152) = 0x100000001LL;
      *(_DWORD *)(a1 + 484) = 0;
      *(_QWORD *)(a1 + 160) = 0x100000001LL;
      *(_QWORD *)(a1 + 168) = 0x100000001LL;
      *(_DWORD *)(a1 + 488) = 0;
      *(_QWORD *)(a1 + 176) = 0x100000001LL;
      *(_QWORD *)(a1 + 184) = 0x100000001LL;
      *(_DWORD *)(a1 + 492) = 0;
      *(_QWORD *)(a1 + 192) = 0x100000001LL;
      *(_QWORD *)(a1 + 200) = 0x100000001LL;
      *(_DWORD *)(a1 + 496) = 0;
      *(_QWORD *)(a1 + 208) = 0x100000001LL;
      *(_QWORD *)(a1 + 216) = 0x100000001LL;
      *(_DWORD *)(a1 + 500) = 0;
      *(_QWORD *)(a1 + 224) = 0x100000001LL;
      *(_QWORD *)(a1 + 232) = 0x100000001LL;
      *(_DWORD *)(a1 + 504) = 0;
      *(_QWORD *)(a1 + 240) = 0x100000001LL;
      *(_QWORD *)(a1 + 248) = 0x100000001LL;
      *(_DWORD *)(a1 + 508) = 0;
      *(_QWORD *)(a1 + 256) = 0x100000001LL;
      *(_QWORD *)(a1 + 264) = 0x100000001LL;
      *(_DWORD *)(a1 + 512) = 0;
      *(_QWORD *)(a1 + 272) = 0x100000001LL;
      *(_QWORD *)(a1 + 280) = 0x100000001LL;
      *(_DWORD *)(a1 + 516) = 0;
      *(_QWORD *)(a1 + 288) = 0x100000001LL;
      *(_QWORD *)(a1 + 296) = 0x100000001LL;
      *(_DWORD *)(a1 + 520) = 0;
      *(_QWORD *)(a1 + 304) = 0x100000001LL;
      *(_QWORD *)(a1 + 312) = 0x100000001LL;
      *(_DWORD *)(a1 + 524) = 0;
      *(_QWORD *)(a1 + 320) = 0x100000001LL;
      *(_QWORD *)(a1 + 328) = 0x100000001LL;
      *(_DWORD *)(a1 + 528) = 0;
      *(_QWORD *)(a1 + 336) = 0x100000001LL;
      *(_QWORD *)(a1 + 344) = 0x100000001LL;
      *(_DWORD *)(a1 + 532) = 0;
      *(_QWORD *)(a1 + 352) = 0x100000001LL;
      *(_QWORD *)(a1 + 360) = 0x100000001LL;
      *(_DWORD *)(a1 + 536) = 0;
      *(_QWORD *)(a1 + 368) = 0x100000001LL;
      *(_QWORD *)(a1 + 376) = 0x100000001LL;
      *(_QWORD *)(a1 + 384) = 0x100000001LL;
      *(_QWORD *)(a1 + 392) = 0x100000001LL;
    }
    else
    {
      for ( j = 0; j != 100; ++j )
      {
        *(_BYTE *)(a1 + j + 440) = 0;
        *(_DWORD *)(a1 + 4 * j) = 1;
      }
    }
  }
  v9 = *(_DWORD *)(a1 + 428);
  if ( !v9 )
  {
LABEL_40:
    v25 = *(_DWORD *)(a1 + 412);
    v26 = *(_DWORD *)(a1 + 416);
    v27 = *(_DWORD *)(a1 + 420);
    *(_DWORD *)(a1 + 428) = 0;
    *(_DWORD *)(a1 + 400) = v25;
    *(_DWORD *)(a1 + 404) = v26;
    *(_DWORD *)(a1 + 408) = v27;
    return 1;
  }
  v10 = 0;
  v11 = 0;
  while ( 2 )
  {
    v12 = *(char **)(a1 + 432);
    v13 = &v12[v10];
    v14 = *(_DWORD *)&v12[v10];
    v15 = *(_DWORD *)&v12[v10 + 4];
    v16 = *(_DWORD *)(a1 + 4 * v14);
    if ( v16 == v15 )
      goto LABEL_39;
    v17 = v16 == 1;
    if ( v16 == 1 )
      v17 = v15 == 0;
    if ( v17 )
    {
LABEL_39:
      v9 = *(_DWORD *)(a1 + 428);
      ++v11;
      v10 += 32;
      if ( v11 >= v9 )
        goto LABEL_40;
      continue;
    }
    break;
  }
  if ( v16 == 3 )
  {
    if ( v15 == 2 )
      goto LABEL_39;
    goto LABEL_28;
  }
  if ( (unsigned int)(v16 + 1) >= 2 && v16 != 2 )
  {
LABEL_28:
    *(_DWORD *)(a1 + 4 * v14) = v15;
    if ( !v15 )
    {
      v18 = *(double *)(*(_DWORD *)(a1 + 432) + v10 + 16);
      v19 = (double *)(a1 + 8 * v14 + 544);
      v20 = v18 - *v19;
      if ( *(float *)(a1 + 436) <= v20 )
      {
        v23 = (_DWORD *)(a1 + 4 * v14 + 1344);
      }
      else
      {
        v21 = a1 + 4 * v14;
        v22 = *(_DWORD *)(a1 + 400) - *(_DWORD *)(v21 + 1344);
        if ( v22 < 0 )
          v22 = *(_DWORD *)(v21 + 1344) - *(_DWORD *)(a1 + 400);
        v23 = (_DWORD *)(v21 + 1344);
        if ( v22 < (int)windowSize / 10 )
        {
          v24 = *(_DWORD *)(a1 + 404) - *(_DWORD *)(v21 + 1744);
          if ( v24 < 0 )
            v24 = -v24;
          if ( v24 < (int)windowSize / 10 )
          {
            *(_BYTE *)(a1 + v14 + 440) = 1;
            v18 = *(double *)(*(_DWORD *)(a1 + 432) + v10 + 16);
          }
        }
      }
      *v19 = v18;
      *v23 = *(_DWORD *)(a1 + 400);
      *(_DWORD *)(a1 + 4 * v14 + 1744) = *(_DWORD *)(a1 + 404);
    }
    goto LABEL_39;
  }
  *(_DWORD *)(a1 + 400) = *((_DWORD *)v13 - 6);
  *(_DWORD *)(a1 + 404) = *((_DWORD *)v13 - 5);
  *(_DWORD *)(a1 + 408) = *((_DWORD *)v13 - 2);
  memmove(v12, v13, 32 * (v9 - v11));
  *(_DWORD *)(a1 + 428) -= v11;
  return 0;
}


// ============================================================
