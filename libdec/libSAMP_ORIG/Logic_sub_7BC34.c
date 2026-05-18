// ADDR: 0x72440
// SYMBOL: sub_72440
int __fastcall sub_72440(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  __int64 v5; // r4
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  float *v10; // r0
  float v11; // s18
  float v12; // s16
  float v13; // s4
  int v14; // r0
  float v15; // s4
  float v16; // s0
  float v17; // s4
  float v18; // s2
  float v19; // s4
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  _DWORD *v25; // r5
  int v26; // r6
  int v27; // r0
  float v28; // s16
  float v29; // s18
  float v30; // s20
  float *v31; // r0
  int v32; // r0
  _DWORD *v33; // r5
  int v34; // r6
  _QWORD *v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r4
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  float v48; // [sp+Ch] [bp-54h] BYREF
  float v49; // [sp+10h] [bp-50h]
  _DWORD v50[4]; // [sp+14h] [bp-4Ch] BYREF
  int v51; // [sp+24h] [bp-3Ch] BYREF
  _DWORD v52[14]; // [sp+28h] [bp-38h] BYREF

  sub_8D060();
  if ( !dword_1A4434 )
    goto LABEL_14;
  if ( *(_BYTE *)(dword_1A4404 + 9876756) )
  {
    v2 = sub_83B30(*(unsigned __int8 *)(dword_1A4404 + 9876756));
    sub_7E42C(v2);
    if ( !byte_1A4480 )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( byte_1A448C )
  {
    v3 = sub_7E3C0();
    sub_83B10(v3);
  }
  else
  {
    v4 = sub_7E42C(0);
    sub_83B30(v4);
  }
  if ( byte_1A4480 )
LABEL_9:
    sub_68F78();
LABEL_10:
  v5 = *(_QWORD *)&dword_1ABE70;
  if ( dword_1ABE70 != dword_1ABE74 )
  {
    do
    {
      v6 = *(_DWORD *)(v5 + 16);
      if ( v6 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 24))(v6);
      LODWORD(v5) = v5 + 24;
    }
    while ( (_DWORD)v5 != HIDWORD(v5) );
  }
LABEL_14:
  if ( byte_1A41DC )
  {
    v7 = (unsigned __int8)byte_1A4498;
    __dmb(0xBu);
    if ( !(v7 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A4498) )
    {
      dword_1A4490 = 1120403456;
      dword_1A4494 = 1120403456;
      j___cxa_guard_release((__guard *)&byte_1A4498);
    }
    v8 = (unsigned __int8)byte_1A44A4;
    __dmb(0xBu);
    v9 = v8 << 31;
    if ( !v9 )
    {
      v9 = j___cxa_guard_acquire((__guard *)&byte_1A44A4);
      if ( v9 )
      {
        dword_1A449C = 0x40000000;
        dword_1A44A0 = 0x40000000;
        j___cxa_guard_release((__guard *)&byte_1A44A4);
      }
    }
    v10 = (float *)sub_8C514(v9);
    v11 = v10[2];
    v12 = v10[3];
    v13 = flt_1A44A8 + (float)(v10[4] * 0.5);
    if ( v13 > 1.0 )
      v13 = v13 + -1.0;
    flt_1A44A8 = v13;
    sub_88B28(LODWORD(v13), 1065353216, 1065353216, &v48, v52, &v51);
    v50[2] = v51;
    v50[3] = 1065353216;
    *(float *)v50 = v48;
    v50[1] = v52[0];
    v14 = (unsigned __int8)byte_1A44B4;
    __dmb(0xBu);
    if ( !(v14 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A44B4) )
    {
      dword_1A44AE = 1511918622;
      _cxa_atexit((void (*)(void *))sub_72DFE, &dword_1A44AE, &off_110560);
      j___cxa_guard_release((__guard *)&byte_1A44B4);
    }
    if ( HIBYTE(dword_1A44AE) )
    {
      HIBYTE(dword_1A44AE) ^= 0x5Au;
      LOBYTE(dword_1A44AE) = dword_1A44AE ^ 0x5A;
      BYTE1(dword_1A44AE) ^= 0x5Au;
      BYTE2(dword_1A44AE) ^= 0x5Au;
    }
    sub_899BC((int)&v48, (int)&dword_1A44AE, 0, 0, -1.0);
    v15 = v48 * 10.0;
    v16 = *(float *)&dword_1A4490;
    if ( *(float *)&dword_1A4490 < 0.0 )
    {
      dword_1A4490 = 0;
      v16 = 0.0;
      *(float *)&dword_1A449C = -*(float *)&dword_1A449C;
    }
    if ( (float)(v15 + v16) > v11 )
    {
      v16 = v11 - v15;
      *(float *)&dword_1A4490 = v11 - v15;
      *(float *)&dword_1A449C = -*(float *)&dword_1A449C;
    }
    v17 = v49 * 10.0;
    v18 = *(float *)&dword_1A4494;
    if ( *(float *)&dword_1A4494 < 0.0 )
    {
      dword_1A4494 = 0;
      v18 = 0.0;
      *(float *)&dword_1A44A0 = -*(float *)&dword_1A44A0;
    }
    if ( (float)(v17 + v18) <= v12 )
    {
      v19 = *(float *)&dword_1A44A0;
    }
    else
    {
      v18 = v12 - v17;
      v19 = -*(float *)&dword_1A44A0;
      dword_1A4494 = LODWORD(v18);
      *(float *)&dword_1A44A0 = -*(float *)&dword_1A44A0;
    }
    *(float *)&dword_1A4494 = v19 + v18;
    *(float *)&dword_1A4490 = *(float *)&dword_1A449C + v16;
    sub_96B68(0);
    v48 = 0.0;
    v49 = 0.0;
    sub_976E0(&dword_1A4490, 0, &v48);
    sub_95E08(0, v50);
    v20 = (unsigned __int8)byte_1A44BC;
    __dmb(0xBu);
    if ( !(v20 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A44BC) )
    {
      dword_1A44B8 = 1511918622;
      _cxa_atexit((void (*)(void *))sub_72DFE, &dword_1A44B8, &off_110560);
      j___cxa_guard_release((__guard *)&byte_1A44BC);
    }
    if ( HIBYTE(dword_1A44B8) )
    {
      HIBYTE(dword_1A44B8) ^= 0x5Au;
      LOBYTE(dword_1A44B8) = dword_1A44B8 ^ 0x5A;
      BYTE1(dword_1A44B8) ^= 0x5Au;
      BYTE2(dword_1A44B8) ^= 0x5Au;
    }
    sub_8FD20(&dword_1A44B8, 0, 790891);
    sub_978D0(1092616192);
    v21 = (unsigned __int8)byte_1A44C4;
    __dmb(0xBu);
    if ( !(v21 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A44C4) )
    {
      dword_1A44C0 = 1511918622;
      _cxa_atexit((void (*)(void *))sub_72DFE, &dword_1A44C0, &off_110560);
      j___cxa_guard_release((__guard *)&byte_1A44C4);
    }
    if ( HIBYTE(dword_1A44C0) )
    {
      HIBYTE(dword_1A44C0) ^= 0x5Au;
      LOBYTE(dword_1A44C0) = dword_1A44C0 ^ 0x5A;
      BYTE1(dword_1A44C0) ^= 0x5Au;
      BYTE2(dword_1A44C0) ^= 0x5Au;
    }
    sub_A61F0(&dword_1A44C0);
    v22 = sub_978D0(1065353216);
    sub_94DC0(v22);
    sub_96230(1);
    sub_68F78();
    *(_BYTE *)(*(_DWORD *)(dword_1A442C + 136) + 8) = 0;
    v23 = sub_6C808();
    sub_6C90C(*(_DWORD *)(v23 + 96), 0);
    sub_682E8(word_51958, 0);
    if ( !byte_1A44AC )
    {
      byte_1A44AC = 1;
      dword_116D04 = 10;
      ((void (__fastcall *)(int, int, int))((char *)&loc_F57EC + dword_1A4408))(
        dword_1A3A68,
        dword_1A3A6C,
        dword_1A3A70);
    }
    v24 = sub_6C844();
    v25 = *(_DWORD **)(v24 + 8);
    if ( !v25 )
    {
      v26 = v24;
      v25 = (_DWORD *)operator new(0x2F0u);
      *v25 = &off_11056C;
      ((void (__fastcall *)(_DWORD *))(dword_1A4408 + 1063817))(v25);
      *(_DWORD *)(v26 + 8) = v25;
    }
    v27 = v25[1];
    v28 = 0.05;
    v29 = 0.0;
    if ( v27 )
    {
      v30 = 0.0;
      v31 = *(float **)(v27 + 20);
      if ( v31 )
      {
        v29 = v31[12];
        v30 = v31[13];
        v28 = v31[14] + 0.05;
      }
    }
    else
    {
      v30 = 0.0;
    }
    v32 = sub_6C844();
    v33 = *(_DWORD **)(v32 + 8);
    if ( !v33 )
    {
      v34 = v32;
      v33 = (_DWORD *)operator new(0x2F0u);
      *v33 = &off_11056C;
      ((void (__fastcall *)(_DWORD *))(dword_1A4408 + 1063817))(v33);
      *(_DWORD *)(v34 + 8) = v33;
    }
    sub_66064((int)v33, v29, v30, SLODWORD(v28));
  }
  if ( byte_1A44AD )
    sub_7A410();
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1);
  v35 = sub_72230();
  v36 = sub_75EC8(v35);
  v37 = sub_74100(v36);
  sub_7A9C8(v37);
  if ( dword_1A442C )
  {
    v38 = sub_6C808();
    if ( sub_6C8B8(*(_DWORD *)(v38 + 100)) )
    {
      v39 = *(_DWORD *)(dword_1A442C + 140);
      v40 = sub_6C808();
      *(_BYTE *)(v39 + 8) = sub_6C8B8(*(_DWORD *)(v40 + 100));
    }
  }
  v41 = sub_6C808();
  v42 = sub_6C8B8(*(_DWORD *)(v41 + 100));
  if ( v42 )
  {
    v43 = sub_6C808();
    v42 = sub_6C90C(*(_DWORD *)(v43 + 100), 0);
  }
  v44 = sub_94700(v42);
  v45 = sub_95020(v44);
  v46 = sub_8C538(v45);
  sub_72B10(a1, v46);
  return v52[1];
}


// ======================================================================
// ADDR: 0x7bffc
// SYMBOL: sub_7BFFC
_BYTE *__fastcall sub_7BFFC(_BYTE *result, _BYTE *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  result[7] = a2[7];
  result[8] = a2[8];
  result[9] = a2[9];
  result[10] = a2[10];
  result[11] = a2[11];
  result[12] = a2[12];
  result[13] = a2[13];
  result[14] = a2[14];
  result[15] = a2[15];
  result[16] = a2[16];
  result[17] = a2[17];
  result[18] = a2[18];
  result[19] = a2[19];
  result[20] = a2[20];
  result[21] = a2[21];
  result[22] = a2[22];
  result[23] = a2[23];
  result[24] = a2[24];
  result[25] = a2[25];
  result[26] = a2[26];
  result[27] = a2[27];
  result[28] = a2[28];
  result[29] = a2[29];
  result[30] = a2[30];
  result[31] = a2[31];
  result[32] = a2[32];
  result[33] = a2[33];
  result[34] = a2[34];
  return result;
}


// ======================================================================
// ADDR: 0x7c0ac
// SYMBOL: sub_7C0AC
int64x2_t *__fastcall sub_7C0AC(int64x2_t *result)
{
  int64x2_t v1; // q8
  unsigned __int8 *v2; // r2
  int64x2_t *v3; // r0
  unsigned __int8 *v4; // r3
  unsigned __int8 v5; // r1
  unsigned __int8 v6; // r12
  unsigned __int8 v7; // r1

  if ( result[2].n128_u8[2] )
  {
    v1.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
    v1.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
    v2 = &result[2].n128_u8[2];
    *result = veorq_s64(*result, v1);
    v3 = result + 1;
    v4 = &v3[1].n128_u8[1];
    v5 = *v2;
    v6 = v3[1].n128_u8[1];
    *v3 = veorq_s64(*v3, v1);
    result = v3 + 1;
    *v2 = v5 ^ 0x5A;
    v7 = result->n128_u8[0];
    *v4 = v6 ^ 0x5A;
    result->n128_u8[0] = v7 ^ 0x5A;
  }
  return result;
}


// ======================================================================
// ADDR: 0x7d40c
// SYMBOL: sub_7D40C
int __fastcall sub_7D40C(int *a1, char a2)
{
  int v2; // r2

  v2 = *a1;
  *((_BYTE *)a1 + 112) = a2;
  return (*(int (**)(void))(v2 + 8))();
}


// ======================================================================
