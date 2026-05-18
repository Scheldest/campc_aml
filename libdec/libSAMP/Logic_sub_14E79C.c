// ADDR: 0x102530
// SYMBOL: sub_102530
int __fastcall sub_102530(int a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8)
{
  int v12; // r1
  unsigned int v13; // s0
  unsigned int v14; // s2
  int v15; // s4
  int v16; // r0
  char v17; // r1
  int v18; // r0
  int v19; // r1
  float v20; // r0
  int v21; // r1
  float v22; // r0
  int v23; // r1
  int v24; // r0
  int result; // r0
  _DWORD v26[16]; // [sp+54h] [bp-D4h] BYREF
  int v27; // [sp+94h] [bp-94h] BYREF
  int v28; // [sp+98h] [bp-90h] BYREF
  int v29; // [sp+9Ch] [bp-8Ch] BYREF
  int v30; // [sp+A0h] [bp-88h] BYREF
  int v31; // [sp+A4h] [bp-84h]
  int v32; // [sp+A8h] [bp-80h]
  int v33; // [sp+ACh] [bp-7Ch]
  unsigned int v34; // [sp+B0h] [bp-78h]
  unsigned int v35; // [sp+B4h] [bp-74h]
  int v36; // [sp+B8h] [bp-70h]
  int v37; // [sp+BCh] [bp-6Ch]
  unsigned int v38; // [sp+C0h] [bp-68h]
  unsigned int v39; // [sp+C4h] [bp-64h]
  int v40; // [sp+C8h] [bp-60h]
  int v41; // [sp+CCh] [bp-5Ch]
  unsigned int v42; // [sp+D0h] [bp-58h]
  unsigned int v43; // [sp+D4h] [bp-54h]
  int v44; // [sp+D8h] [bp-50h]

  sub_F8910(a1, &v30);
  if ( *(unsigned __int8 *)(a1 + 708) << 31 )
  {
    sub_F89BC(a1, 0, 0, 0);
    sub_F8A08(a1, 0, 0, 0);
    v12 = *(unsigned __int8 *)(a1 + 716);
    v13 = *(_DWORD *)(a1 + 768);
    v14 = *(_DWORD *)(a1 + 772);
    v15 = *(_DWORD *)(a1 + 776);
    *(_BYTE *)(a1 + 708) &= ~1u;
    v42 = v13;
    v43 = v14;
    v44 = v15;
    if ( v12 )
    {
      sub_17D238(a1 + 800, &v30);
      sub_F8F58(a1, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44);
    }
    else
    {
      sub_F8F58(a1, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v13, v14, v15);
    }
  }
  v16 = sub_F0B30();
  v17 = *(_BYTE *)(a1 + 708);
  *(_DWORD *)(a1 + 844) = v16;
  *(float *)(a1 + 768) = a2;
  *(float *)(a1 + 772) = a3;
  *(float *)(a1 + 776) = a4;
  *(float *)(a1 + 712) = a5;
  *(_BYTE *)(a1 + 708) = v17 | 1;
  if ( a6 <= -999.0 || a8 <= -999.0 )
  {
    *(_BYTE *)(a1 + 716) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 716) = 1;
    sub_1021F0(a1, (float *)&v27, (float *)&v28, (float *)&v29);
    *(_DWORD *)(a1 + 816) = sub_1087C8(LODWORD(a6));
    *(_DWORD *)(a1 + 820) = sub_1087C8(LODWORD(a7));
    v18 = sub_1087C8(LODWORD(a8));
    v19 = v27;
    *(_DWORD *)(a1 + 824) = v18;
    v20 = sub_108818(v19, LODWORD(a6));
    v21 = v28;
    *(float *)(a1 + 828) = v20;
    v22 = sub_108818(v21, LODWORD(a7));
    v23 = v29;
    *(float *)(a1 + 832) = v22;
    *(float *)(a1 + 836) = sub_108818(v23, LODWORD(a8));
    sub_1022AC((float *)a1, a6, a7, a8);
    sub_F8910(a1, v26);
    sub_17D12C(
      a1 + 784,
      v26[0],
      v26[1],
      v26[2],
      v26[3],
      v26[4],
      v26[5],
      v26[6],
      v26[7],
      v26[8],
      v26[9],
      v26[10],
      v26[11],
      v26[12],
      v26[13],
      v26[14]);
    sub_17D12C(
      a1 + 800,
      *(_DWORD *)(a1 + 720),
      *(_DWORD *)(a1 + 724),
      *(_DWORD *)(a1 + 728),
      *(_DWORD *)(a1 + 732),
      *(_DWORD *)(a1 + 736),
      *(_DWORD *)(a1 + 740),
      *(_DWORD *)(a1 + 744),
      *(_DWORD *)(a1 + 748),
      *(_DWORD *)(a1 + 752),
      *(_DWORD *)(a1 + 756),
      *(_DWORD *)(a1 + 760),
      *(_DWORD *)(a1 + 764),
      *(_DWORD *)(a1 + 768),
      *(_DWORD *)(a1 + 772),
      *(_DWORD *)(a1 + 776));
    sub_17D2F2(a1 + 784);
    sub_17D2F2(a1 + 800);
    a2 = *(float *)(a1 + 768);
    a3 = *(float *)(a1 + 772);
    a4 = *(float *)(a1 + 776);
  }
  *(float *)(a1 + 840) = sub_F8DB8(a1, a2, a3, a4);
  if ( dword_23DEF4 )
  {
    v24 = **(_DWORD **)(dword_23DEF4 + 944);
    if ( v24 )
      sub_13FE54(*(_DWORD *)(v24 + 5052));
  }
  result = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(result + 68) &= ~8u;
  return result;
}


// ======================================================================
