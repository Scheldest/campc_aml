// ADDR: 0x101808
// SYMBOL: sub_101808
int __fastcall sub_101808(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9, int a10)
{
  int v11; // r5
  char v13; // r0
  double v15; // kr00_8
  __int64 v16; // r0
  arg6_F894A v17; // kr08_8
  int v18; // r0
  __int64 v19; // kr10_8
  arg9_F894A v20; // kr18_8
  double v22; // [sp+0h] [bp-88h]
  int v23; // [sp+14h] [bp-74h]
  int v24; // [sp+18h] [bp-70h]
  int v25; // [sp+34h] [bp-54h]
  int v26; // [sp+38h] [bp-50h]
  int v27; // [sp+3Ch] [bp-4Ch]
  int v28; // [sp+40h] [bp-48h]
  int v29; // [sp+44h] [bp-44h]
  int v30; // [sp+48h] [bp-40h] BYREF
  _DWORD v31[15]; // [sp+4Ch] [bp-3Ch] BYREF

  v11 = a2;
  v13 = a10;
  *(_DWORD *)(a1 + 12) = -1;
  *(_BYTE *)(a1 + 40) = 1;
  if ( a10 )
    v13 = 1;
  *(_BYTE *)(a1 + 624) = v13;
  *(_QWORD *)(a1 + 784) = 1065353216LL;
  *(_QWORD *)(a1 + 792) = 0LL;
  *(_QWORD *)(a1 + 800) = 1065353216LL;
  *(_QWORD *)(a1 + 808) = 0LL;
  *(_DWORD *)a1 = &off_22B0C8;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v31[0] = a6;
  v31[1] = a7;
  *(_DWORD *)(a1 + 8) = 0;
  v15 = a3;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_BYTE *)(a1 + 625) = 0;
  word_25B200 = a2;
  v31[2] = a8;
  v22 = a4;
  if ( !sub_108420(a2) )
    v11 = 18631;
  sub_107188(
    &unk_B33F6,
    v11,
    LODWORD(v15),
    HIDWORD(v15),
    LODWORD(v22),
    HIDWORD(v22),
    COERCE_UNSIGNED_INT64(a5),
    HIDWORD(COERCE_UNSIGNED_INT64(a5)),
    &v30,
    v23,
    v24);
  LODWORD(v16) = sub_108324(v30);
  if ( (_DWORD)v16 )
  {
    HIDWORD(v16) = v30;
    if ( v30 )
    {
      *(_QWORD *)(a1 + 4) = v16;
      *(_BYTE *)(a1 + 716) = 0;
      *(_DWORD *)(a1 + 712) = 0;
      *(_BYTE *)(a1 + 708) = 0;
      *(_DWORD *)(a1 + 704) = v11;
      sub_F8910(a1, (_DWORD *)(a1 + 628));
      v29 = *(_DWORD *)(a1 + 628);
      v28 = *(_DWORD *)(a1 + 632);
      v27 = *(_DWORD *)(a1 + 636);
      v26 = *(_DWORD *)(a1 + 640);
      v17 = *(arg6_F894A *)(a1 + 644);
      v25 = *(_DWORD *)(a1 + 668);
      v18 = *(_DWORD *)(a1 + 672);
      v19 = *(_QWORD *)(a1 + 652);
      v20 = *(arg9_F894A *)(a1 + 660);
      *(float *)(a1 + 676) = a3;
      *(float *)(a1 + 680) = a4;
      *(float *)(a1 + 684) = a5;
      sub_F894A(
        a1,
        v29,
        v28,
        v27,
        v26,
        v17,
        v19,
        SHIDWORD(v19),
        v20,
        v25,
        v18,
        (arg12_F894A)__PAIR64__(LODWORD(a4), LODWORD(a3)),
        SLODWORD(a5));
      sub_1019BC(a1, v31);
    }
  }
  *(_BYTE *)(a1 + 626) = 0;
  sub_22178C(a1 + 44, 0xC1u);
  sub_22178C(a1 + 240, 0x180u);
  return a1;
}


// ======================================================================
