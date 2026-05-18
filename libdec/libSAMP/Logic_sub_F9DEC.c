// ADDR: 0x103c40
// SYMBOL: sub_103C40
int __fastcall sub_103C40(int a1, int a2, int a3, float a4, float a5, float a6, float a7)
{
  int v10; // r0
  double v11; // d14
  int v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r0
  int v16; // r3
  int v17; // r3
  int v18; // r3
  int v19; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r3
  int v25; // [sp+0h] [bp-D8h]
  int v26; // [sp+0h] [bp-D8h]
  int v27; // [sp+0h] [bp-D8h]
  int v28; // [sp+0h] [bp-D8h]
  int v29; // [sp+0h] [bp-D8h]
  int v30; // [sp+4h] [bp-D4h]
  int v31; // [sp+4h] [bp-D4h]
  int v32; // [sp+4h] [bp-D4h]
  int v33; // [sp+4h] [bp-D4h]
  int v34; // [sp+4h] [bp-D4h]
  int v35; // [sp+8h] [bp-D0h]
  int v36; // [sp+8h] [bp-D0h]
  int v37; // [sp+8h] [bp-D0h]
  int v38; // [sp+8h] [bp-D0h]
  int v39; // [sp+8h] [bp-D0h]
  int v40; // [sp+Ch] [bp-CCh]
  int v41; // [sp+Ch] [bp-CCh]
  int v42; // [sp+Ch] [bp-CCh]
  int v43; // [sp+Ch] [bp-CCh]
  int v44; // [sp+Ch] [bp-CCh]
  int v45; // [sp+Ch] [bp-CCh]
  int v46; // [sp+10h] [bp-C8h]
  int v47; // [sp+10h] [bp-C8h]
  int v48; // [sp+10h] [bp-C8h]
  int v49; // [sp+10h] [bp-C8h]
  int v50; // [sp+10h] [bp-C8h]
  int v51; // [sp+10h] [bp-C8h]
  int v52; // [sp+14h] [bp-C4h]
  int v53; // [sp+14h] [bp-C4h]
  int v54; // [sp+14h] [bp-C4h]
  int v55; // [sp+14h] [bp-C4h]
  int v56; // [sp+14h] [bp-C4h]
  int v57; // [sp+14h] [bp-C4h]
  int v58; // [sp+14h] [bp-C4h]
  int v59; // [sp+18h] [bp-C0h]
  int v60; // [sp+18h] [bp-C0h]
  int v61; // [sp+18h] [bp-C0h]
  int v62; // [sp+18h] [bp-C0h]
  int v63; // [sp+18h] [bp-C0h]
  int v64; // [sp+18h] [bp-C0h]
  int v65; // [sp+18h] [bp-C0h]
  int v66[4]; // [sp+38h] [bp-A0h] BYREF
  arg6_F894A v67; // [sp+48h] [bp-90h]
  int v68; // [sp+50h] [bp-88h]
  int v69; // [sp+54h] [bp-84h]
  arg9_F894A v70; // [sp+58h] [bp-80h]
  int v71; // [sp+60h] [bp-78h]
  int v72; // [sp+64h] [bp-74h]
  float v73; // [sp+68h] [bp-70h]
  float v74; // [sp+6Ch] [bp-6Ch]
  float v75; // [sp+70h] [bp-68h]
  int v76; // [sp+78h] [bp-60h] BYREF
  unsigned __int8 v77[92]; // [sp+7Ch] [bp-5Ch] BYREF

  *(_DWORD *)a1 = &off_22B0F0;
  v10 = a1 + 72;
  *(_BYTE *)(a1 + 56) = -1;
  *(_DWORD *)(a1 + 108) = -1;
  *(_DWORD *)(a1 + 112) = -1;
  *(_DWORD *)(a1 + 61) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 57) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)v77 = a2;
  v11 = a4;
  *(_QWORD *)v10 = 0LL;
  *(_QWORD *)(v10 + 8) = 0LL;
  *(_DWORD *)(v10 + 16) = 0;
  _android_log_print(4, "AXL", "Creating PlayerPed(%d %d %.1f %.1f %.1f %.1f)", a2, a3, a4, a5, a6, a7);
  sub_107188(
    &unk_B364A,
    v77,
    LODWORD(v11),
    HIDWORD(v11),
    COERCE_UNSIGNED_INT64(a5),
    HIDWORD(COERCE_UNSIGNED_INT64(a5)),
    COERCE_UNSIGNED_INT64(a6),
    HIDWORD(COERCE_UNSIGNED_INT64(a6)),
    &v76,
    v52,
    v59);
  sub_107188(&unk_B365E, v77, &v76, v12, v25, v30, v35, v40, v46, v53, v60);
  v13 = v76;
  *(_DWORD *)(a1 + 8) = v76;
  v14 = sub_1082F4(v13);
  v15 = v77[0];
  *(_DWORD *)(a1 + 92) = v14;
  *(_DWORD *)(a1 + 4) = v14;
  *(_BYTE *)(a1 + 96) = v15;
  sub_108D34(v15, v14);
  sub_107188("~\bii", *(_DWORD *)(a1 + 8), 1, v16, v26, v31, v36, v41, v47, v54, v61);
  sub_107188(&unk_B3672, *(_DWORD *)(a1 + 8), 0, 0, 1, 0, 0, v42, v48, v55, v62);
  sub_107188(&unk_B3636, *(_DWORD *)(a1 + 8), 0, v17, v27, v32, v37, v43, v49, v56, v63);
  if ( dword_23DEF4 )
  {
    sub_107188(&unk_B3686, *(_DWORD *)(a1 + 8), 0, v18, v28, v33, v38, v44, v50, v57, v64);
    sub_107188(
      &unk_B3686,
      *(_DWORD *)(a1 + 8),
      *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 524) + 4),
      v19,
      v29,
      v34,
      v39,
      v45,
      v51,
      v58,
      v65);
  }
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  sub_103E90(a1, a3);
  if ( *(_DWORD *)(a1 + 92) && sub_1082F4(*(_DWORD *)(a1 + 8)) )
  {
    *(_DWORD *)(*(_DWORD *)(a1 + 92) + 1376) = sub_108728(LODWORD(a7));
    *(_DWORD *)(*(_DWORD *)(a1 + 92) + 1372) = sub_108728(LODWORD(a7));
  }
  sub_F8910(a1, v66);
  v74 = a5;
  v73 = a4;
  v75 = a6 + 0.15;
  sub_F894A(
    a1,
    v66[0],
    v66[1],
    v66[2],
    v66[3],
    v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    (arg12_F894A)__PAIR64__(LODWORD(a5), LODWORD(a4)),
    COERCE_INT(a6 + 0.15));
  v20 = 32;
  v21 = 0;
  do
  {
    *(_BYTE *)(a1 + v21 + 116) = 0;
    v22 = a1 + 4 * v20;
    *(_QWORD *)v22 = 0LL;
    *(_QWORD *)(v22 + 8) = 0LL;
    v22 += 16;
    v20 += 13;
    *(_QWORD *)v22 = 0LL;
    *(_QWORD *)(v22 + 8) = 0LL;
    v22 += 16;
    *(_QWORD *)v22 = 0LL;
    *(_QWORD *)(v22 + 8) = 0LL;
    *(_DWORD *)(v22 + 16) = 0;
    v23 = a1 + 4 * v21++;
    *(_DWORD *)(v23 + 648) = 0;
  }
  while ( v20 != 162 );
  *(_BYTE *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  return a1;
}


// ======================================================================
