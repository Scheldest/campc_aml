// ADDR: 0x188a3c
// SYMBOL: sub_188A3C
int __fastcall sub_188A3C(int a1, _DWORD *a2, int a3)
{
  int *v4; // r10
  unsigned int v5; // r0
  int v6; // r0
  int v7; // r5
  int v8; // r8
  int v9; // r0
  int v10; // r1
  signed int v11; // r11
  _DWORD *v12; // r5
  unsigned int v13; // r0
  const char *v14; // r8
  int v15; // r0
  int v16; // r2
  int v17; // r0
  int v18; // r2
  const char *v19; // r0
  char *v20; // r9
  bool v21; // zf
  unsigned int v22; // r0
  const char *v23; // r4
  int v24; // r8
  bool v25; // cc
  int *v26; // r6
  _DWORD *v27; // r4
  void *v28; // r0
  int v29; // r11
  int v30; // r0
  signed int v31; // r0
  const char *v32; // r6
  int v33; // r0
  _DWORD *v34; // r4
  int v35; // r0
  int v36; // r2
  int v37; // r5
  int v38; // r3
  int v39; // r4
  __int16 v40; // r1
  __int16 v41; // r2
  int v42; // r2
  int v43; // r4
  int *v44; // r5
  _DWORD *v45; // r6
  int v46; // r0
  int v47; // r1
  void *v48; // r0
  int v50; // [sp+18h] [bp-58h] BYREF
  unsigned int v51; // [sp+1Ch] [bp-54h]
  int *v52; // [sp+20h] [bp-50h]
  const char *v53; // [sp+24h] [bp-4Ch]
  const char *v54; // [sp+28h] [bp-48h]
  const char *v55; // [sp+2Ch] [bp-44h]
  const char *v56; // [sp+30h] [bp-40h]
  int v57; // [sp+34h] [bp-3Ch]
  _DWORD *v58; // [sp+38h] [bp-38h]
  int v59; // [sp+3Ch] [bp-34h] BYREF
  int v60; // [sp+40h] [bp-30h] BYREF
  unsigned int v61; // [sp+44h] [bp-2Ch] BYREF
  int v62; // [sp+48h] [bp-28h] BYREF
  signed int v63; // [sp+4Ch] [bp-24h] BYREF

  a2[7] = 1;
  v4 = a2 + 7;
  v5 = a2[3] - 7;
  if ( v5 > 3 )
    v6 = -17;
  else
    v6 = dword_91E10[v5];
  v58 = a2;
  v7 = v6 + a3;
  v8 = a2[12];
  v9 = sub_17E0BA(a1 + 1044);
  v10 = -28;
  if ( v9 )
    v10 = -44;
  v11 = v7 + v10;
  v12 = v58;
  v13 = ((unsigned int)(v8 + 7) >> 3) - 1;
  v14 = (const char *)(v8 + 7);
  v15 = sub_220A40(v13, v11) + 1;
  v16 = *(_DWORD *)(a1 + 852) + v15;
  v58[7] = v15;
  *(_DWORD *)(a1 + 852) = v16;
  v63 = v11;
  v62 = 4 * v15;
  sub_18B26C(1, "{}: require {} bytes for {} pointers", 36, "SplitPacket", &v62, v4);
  v17 = v12[7];
  v57 = a1;
  v18 = 4 * v17;
  v51 = 4 * v17;
  if ( (unsigned int)(4 * v17) >> 20 )
  {
    v21 = v17 == (v17 & 0x3FFFFFFF);
    v22 = 4 * v17;
    if ( !v21 )
      v22 = -1;
    v20 = (char *)operator new[](v22);
    v19 = "heap";
  }
  else
  {
    v19 = "stack";
    v20 = (char *)&v50 - ((v18 + 7) & 0xFFFFFFF8);
  }
  v23 = v14;
  v61 = (unsigned int)v19;
  v62 = (int)v20;
  sub_18B34C(1, "{}: internalPacketArray = {:08X} at {}", 38, "SplitPacket", &v62, &v61);
  v24 = 0;
  v25 = *v4 < 1;
  v59 = 0;
  v52 = (int *)(v57 + 1696);
  if ( !v25 )
  {
    v55 = v23;
    v56 = "{}: Install pointer for packet {}";
    v26 = v52;
    v27 = v58;
    do
    {
      sub_18B42C(1, v56, 33, "SplitPacket", &v59);
      v28 = (void *)sub_1889FC(v26);
      v29 = v59;
      *(_DWORD *)&v20[4 * v59] = v28;
      j_memcpy(v28, v27, 0x40u);
      v30 = v27[7];
      v59 = v29 + 1;
    }
    while ( v29 + 1 < v30 );
    v11 = v63;
    v23 = v55;
  }
  v60 = 0;
  v56 = (const char *)((unsigned int)v23 >> 3);
  v55 = "{}: Allocate {} bytes to send split packet {}";
  v54 = "SplitPacket";
  v53 = "{}: Copy {} bytes to split packet {}, from internalPacket->data + {:08X} (split packet {} * max send block {})";
  do
  {
    v31 = (signed int)&v56[-(v11 * v24)];
    v62 = v11 * v24;
    if ( v31 > v11 )
      v31 = v11;
    v61 = v31;
    v32 = v54;
    sub_18B500(1, v55, 45, v54, &v61, &v60);
    v33 = operator new[](v61);
    *(_DWORD *)(*(_DWORD *)&v20[4 * v60] + 52) = v33;
    sub_18B5E0(1, v53, 110, v32, &v61, &v60, &v62, &v60, &v63);
    v34 = v58;
    j_memcpy(*(void **)(*(_DWORD *)&v20[4 * v60] + 52), (const void *)(v58[13] + v62), v61);
    v11 = v63;
    v35 = v60;
    if ( v61 == v63 )
      v36 = 8 * v61;
    else
      v36 = v34[12] - 8 * v63 * v60;
    v37 = v57;
    v38 = *(_DWORD *)&v20[4 * v60];
    v39 = *v4;
    v40 = *(_WORD *)(v57 + 732);
    *(_DWORD *)(v38 + 48) = v36;
    *(_WORD *)(v38 + 20) = v40;
    *(_DWORD *)(v38 + 24) = v35;
    *(_DWORD *)(v38 + 28) = v39;
    if ( v35 )
    {
      v41 = *(_WORD *)(v37 + 180);
      *(_WORD *)v38 = v41;
      *(_WORD *)(v37 + 180) = v41 + 1;
    }
    v42 = *v4;
    v24 = v35 + 1;
    v60 = v35 + 1;
  }
  while ( v35 + 1 < (unsigned int)v42 );
  v43 = v57;
  v44 = v52;
  v45 = v58;
  *(_WORD *)(v57 + 732) = v40 + 1;
  v59 = 0;
  if ( v42 >= 1 )
  {
    v46 = 0;
    do
    {
      sub_17E430((_DWORD *)(v43 + 16 * v45[2] + 104), (int *)&v20[4 * v46]);
      v47 = v45[7];
      v46 = v59 + 1;
      v59 = v46;
    }
    while ( v46 < v47 );
  }
  v48 = (void *)v45[13];
  if ( v48 )
    operator delete[](v48);
  sub_17E56C(v44, (int)v45);
  if ( v51 >= 0x100000 )
    operator delete[](v20);
  return sub_18B6F0(1, "{}: Done!", 9, "SplitPacket");
}


// ======================================================================
// ADDR: 0x18a52c
// SYMBOL: sub_18A52C
int __fastcall sub_18A52C(int a1, void *a2, int a3, int *a4, _DWORD *a5)
{
  int *v9; // r4
  int v10; // r3
  int v11; // r1
  unsigned int v12; // r2
  int v13; // r1
  unsigned int v14; // r0
  char *v15; // r1
  int v16; // r2
  int v18; // [sp+4h] [bp-4Ch]
  int v19; // [sp+1Ch] [bp-34h] BYREF
  _BYTE v20[4]; // [sp+24h] [bp-2Ch] BYREF
  _DWORD v21[10]; // [sp+28h] [bp-28h] BYREF

  sub_F06B2((int)v20);
  v9 = sub_F0734();
  if ( !(*(unsigned __int8 *)v9 << 31) )
  {
    *(_WORD *)v9 = 0;
LABEL_4:
    v12 = 9;
    goto LABEL_6;
  }
  *(_BYTE *)v9[2] = 0;
  v10 = *(unsigned __int8 *)v9;
  v11 = *v9;
  v9[1] = 0;
  if ( !(v10 << 31) )
    goto LABEL_4;
  v12 = (v11 - 2) & 0xFFFFFFFE;
LABEL_6:
  v13 = *a4;
  v21[2] = *a5;
  v21[3] = 0;
  v21[0] = v13;
  v21[1] = 0;
  sub_DCA40(&v19, (int)v9, v12, a2, a3, v18, 17, 0, (int)v21, 0);
  v14 = *(unsigned __int8 *)v9;
  v15 = (char *)v9[2];
  v16 = v9[1];
  if ( (v14 & 1) == 0 )
  {
    v15 = (char *)v9 + 1;
    v16 = v14 >> 1;
  }
  sub_ED4F8(a1, v15, v16);
  return sub_F0720((int)v20);
}


// ======================================================================
