// ADDR: 0x7b71c
// SYMBOL: sub_7B71C
bool __fastcall sub_7B71C(_DWORD *a1)
{
  _BOOL4 v2; // r11
  _WORD *v3; // r0
  int v4; // r4
  _DWORD *v5; // r4
  int v6; // r3
  int v7; // r0
  __int64 v8; // d17
  int v9; // r0
  _DWORD *v10; // r4
  int v11; // r3
  int v12; // r0
  __int64 v13; // d17
  int v14; // r0
  _DWORD *v15; // r4
  int v16; // r3
  int v17; // r0
  __int64 v18; // d17
  int v19; // r0
  _DWORD *v20; // r4
  int v21; // r3
  int v22; // r0
  __int64 v23; // d17
  int v24; // r0
  _DWORD *v25; // r4
  int v26; // r3
  int v27; // r0
  __int64 v28; // d17
  int v29; // r0
  _DWORD *v30; // r6
  int v31; // r6
  __int64 v32; // d16
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r1
  int v37; // r2
  int v38; // r10
  size_t v39; // r0
  size_t v40; // r6
  char *v41; // r4
  __int64 v42; // d16
  __int64 v43; // d17
  float v44; // s0
  _DWORD v46[2]; // [sp+Ch] [bp-15Ch] BYREF
  void *v47; // [sp+14h] [bp-154h]
  float v48[2]; // [sp+18h] [bp-150h] BYREF
  _QWORD src[32]; // [sp+20h] [bp-148h] BYREF
  __int64 v50; // [sp+120h] [bp-48h] BYREF
  _QWORD v51[2]; // [sp+128h] [bp-40h]

  v2 = sub_71D20((int)(a1 + 21));
  if ( !v2 )
    return v2;
  v3 = (_WORD *)operator new(2u);
  a1[32] = v3;
  *v3 = 0;
  v4 = operator new(0x10u);
  sub_75362(v4);
  a1[33] = v4;
  v5 = (_DWORD *)operator new(0x7Cu);
  sub_72E04(v5);
  a1[34] = v5;
  sub_7C73C(a1, v5);
  v6 = a1[34] + 20;
  v7 = unk_116D8C;
  v8 = *(_QWORD *)&dword_116D88;
  *(_QWORD *)v6 = *(_QWORD *)&dword_116D88;
  *(_QWORD *)(v6 + 8) = v8;
  v6 += 16;
  *(_DWORD *)v6 = v8;
  *(_DWORD *)(v6 + 4) = v7;
  v9 = a1[34];
  src[0] = *(_QWORD *)&dword_116D80;
  sub_7C4A6(v9, src);
  *(_BYTE *)(a1[34] + 8) = 0;
  v10 = (_DWORD *)operator new(0x78u);
  sub_7B2C0(v10);
  a1[35] = v10;
  sub_7C73C(a1, v10);
  v11 = a1[35] + 20;
  v12 = unk_116DCC;
  v13 = *(_QWORD *)&dword_116DC8;
  *(_QWORD *)v11 = *(_QWORD *)&dword_116DC8;
  *(_QWORD *)(v11 + 8) = v13;
  v11 += 16;
  *(_DWORD *)v11 = v13;
  *(_DWORD *)(v11 + 4) = v12;
  v14 = a1[35];
  src[0] = *(_QWORD *)&dword_116DC0;
  sub_7C4A6(v14, src);
  *(_BYTE *)(a1[35] + 8) = 0;
  v15 = (_DWORD *)operator new(0x78u);
  sub_78420(v15);
  a1[38] = v15;
  sub_7C73C(a1, v15);
  v16 = a1[38] + 20;
  v17 = unk_116DDC;
  v18 = *(_QWORD *)&dword_116DD8;
  *(_QWORD *)v16 = *(_QWORD *)&dword_116DD8;
  *(_QWORD *)(v16 + 8) = v18;
  v16 += 16;
  *(_DWORD *)v16 = v18;
  *(_DWORD *)(v16 + 4) = v17;
  v19 = a1[38];
  src[0] = *(_QWORD *)&dword_116DD0;
  sub_7C4A6(v19, src);
  *(_BYTE *)(a1[38] + 8) = 0;
  v20 = (_DWORD *)operator new(0x74u);
  sub_78244(v20);
  a1[37] = v20;
  sub_7C73C(a1, v20);
  v21 = a1[37] + 20;
  v22 = unk_116DEC;
  v23 = *(_QWORD *)&dword_116DE8;
  *(_QWORD *)v21 = *(_QWORD *)&dword_116DE8;
  *(_QWORD *)(v21 + 8) = v23;
  v21 += 16;
  *(_DWORD *)v21 = v23;
  *(_DWORD *)(v21 + 4) = v22;
  v24 = a1[37];
  src[0] = *(_QWORD *)&dword_116DE0;
  sub_7C4A6(v24, src);
  *(_BYTE *)(a1[37] + 8) = 0;
  v25 = (_DWORD *)operator new(0x7Cu);
  sub_786F0(v25);
  a1[39] = v25;
  sub_7C73C(a1, v25);
  v26 = a1[39] + 20;
  v27 = unk_116DFC;
  v28 = *(_QWORD *)&dword_116DF8;
  *(_QWORD *)v26 = *(_QWORD *)&dword_116DF8;
  *(_QWORD *)(v26 + 8) = v28;
  v26 += 16;
  *(_DWORD *)v26 = v28;
  *(_DWORD *)(v26 + 4) = v27;
  v29 = a1[39];
  src[0] = *(_QWORD *)&dword_116DF0;
  sub_7C4A6(v29, src);
  *(_BYTE *)(a1[39] + 8) = 0;
  v30 = (_DWORD *)operator new(0x14u);
  sub_7ACAC(v30);
  dword_1A459C = (int)v30;
  sub_73FD4();
  sub_7A994();
  v31 = operator new(0x78u);
  BYTE2(v50) = 0;
  *(float *)&v32 = 1.0;
  *((float *)&v32 + 1) = 1.0;
  *(float *)&v28 = 1.0;
  *((float *)&v28 + 1) = 1.0;
  LOWORD(v50) = 8194;
  src[0] = v32;
  src[1] = v28;
  sub_7D380(v31, (int)&v50, (int)src, 1, *(float *)&dword_116D58 / 2.5);
  v33 = (unsigned __int8)v50;
  a1[40] = v31;
  if ( v33 << 31 )
  {
    operator delete((void *)v51[0]);
    v31 = a1[40];
  }
  sub_7C73C(a1, v31);
  v34 = ((int (*)(void))(dword_1A4404 + 1930785))();
  ((void (__fastcall *)(_QWORD *, int))(dword_1A4404 + 1930709))(src, v34);
  v50 = unk_524C8;
  v51[0] = unk_524D0;
  *(_QWORD *)((char *)v51 + 5) = unk_524D5;
  v48[1] = (float)((float)SHIDWORD(src[0]) / 448.0) * 5.0;
  v48[0] = (float)((float)SLODWORD(src[0]) / 640.0) * 4.0;
  v35 = (unsigned __int8)byte_1A45B8;
  __dmb(0xBu);
  if ( !(v35 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A45B8) )
  {
    sub_6AC26(&xmmword_1A45A0, &v50);
    _cxa_atexit((void (*)(void *))sub_6AC7C, &xmmword_1A45A0, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A45B8);
  }
  sub_6AE46(&xmmword_1A45A0);
  sub_7BBEC((int)src, v36, v37, (char *)&xmmword_1A45A0);
  v38 = operator new(0x78u);
  v39 = strlen((const char *)src);
  if ( v39 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(v46);
  v40 = v39;
  if ( v39 >= 0xB )
  {
    v41 = (char *)operator new((v39 + 16) & 0xFFFFFFF0);
    v46[1] = v40;
    v46[0] = (v40 + 16) & 0xFFFFFFF0 | 1;
    v47 = v41;
  }
  else
  {
    LOBYTE(v46[0]) = 2 * v39;
    v41 = (char *)v46 + 1;
    if ( !v39 )
      goto LABEL_11;
  }
  j_memcpy(v41, src, v40);
LABEL_11:
  *(float *)&v42 = 1.0;
  *((float *)&v42 + 1) = 1.0;
  *(float *)&v43 = 1.0;
  *((float *)&v43 + 1) = 1.0;
  v44 = *(float *)&dword_116D58;
  v41[v40] = 0;
  v50 = v42;
  v51[0] = v43;
  sub_7D380(v38, (int)v46, (int)&v50, 1, v44 / 2.5);
  if ( LOBYTE(v46[0]) << 31 )
    operator delete(v47);
  sub_7C73C(a1, v38);
  sub_7C4A6(v38, v48);
  return v2;
}


// ======================================================================
