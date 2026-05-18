// ADDR: 0x71d20
// SYMBOL: sub_71D20
bool __fastcall sub_71D20(int a1)
{
  int v2; // r0
  int v3; // r11
  const char *v4; // r3
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  _DWORD *v10; // r9
  int v11; // r0
  int v12; // r1
  int v13; // r5
  int v14; // r4
  int v15; // r5
  int v16; // r6
  const void *v17; // r10
  size_t v18; // r0
  size_t v19; // r4
  char *v20; // r5
  const char *v21; // r3
  _BOOL4 v22; // r5
  unsigned int v23; // r8
  int v24; // r0
  double v25; // d16
  char *v26; // r1
  int v27; // r5
  _DWORD *v28; // r8
  int v29; // r0
  int v30; // r4
  int i; // r6
  int v32; // r0
  const char *v33; // r3
  int v35; // [sp+Ch] [bp-C4h]
  _DWORD v36[2]; // [sp+14h] [bp-BCh] BYREF
  void *v37; // [sp+1Ch] [bp-B4h]
  double v38; // [sp+20h] [bp-B0h] BYREF
  void *v39; // [sp+28h] [bp-A8h]
  _BYTE v40[8]; // [sp+30h] [bp-A0h] BYREF
  int v41; // [sp+38h] [bp-98h]
  _BYTE v42[20]; // [sp+3Ch] [bp-94h] BYREF
  int v43; // [sp+50h] [bp-80h]
  int v44; // [sp+54h] [bp-7Ch]
  char v45; // [sp+58h] [bp-78h]
  int v46; // [sp+5Ch] [bp-74h]
  int v47; // [sp+80h] [bp-50h]

  _android_log_print(4, "SAMP_ORIG", "ImGuiWrapper::initialize");
  sub_8BC10("1.71", 5392, 940, 8, 16, 20, 2);
  v2 = sub_8BC64(0);
  v3 = sub_8C514(v2);
  *(_QWORD *)(v3 + 8) = *(_QWORD *)(a1 + 4);
  *(_DWORD *)(v3 + 156) = 1065353216;
  *(_DWORD *)(v3 + 160) = 1065353216;
  v4 = *(const char **)(a1 + 20);
  if ( !(*(unsigned __int8 *)(a1 + 12) << 31) )
    v4 = (const char *)(a1 + 13);
  _android_log_print(4, "SAMP_ORIG", "Loading font: %s", v4);
  sub_72050(v40);
  v5 = sub_9EA24(*(_DWORD *)(v3 + 140));
  sub_A3434(v40, v5);
  v6 = sub_A3428(*(_DWORD *)(v3 + 140));
  sub_A3434(v40, v6);
  v7 = sub_A33C4(*(_DWORD *)(v3 + 140));
  sub_A3434(v40, v7);
  v8 = sub_A33D0(*(_DWORD *)(v3 + 140));
  sub_A3434(v40, v8);
  v9 = sub_A33B8(*(_DWORD *)(v3 + 140));
  sub_A3434(v40, v9);
  v10 = (_DWORD *)operator new(0xCu);
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  sub_A347E(v40, v10);
  sub_9E662(v42);
  v11 = *(_DWORD *)(v3 + 140);
  v12 = *(_DWORD *)(a1 + 20);
  v13 = *(unsigned __int8 *)(a1 + 12);
  v47 = 1069547520;
  v14 = v10[2];
  v43 = 1;
  v44 = 1;
  v45 = 1;
  v46 = dword_116D5C;
  if ( !(v13 << 31) )
    v12 = a1 + 13;
  v15 = sub_9EB08(v11, v12, dword_116D58, v42, v14);
  if ( v15 )
  {
    v16 = a1;
    v17 = (const void *)(dword_1A4404 + 7170172);
    v18 = strlen((const char *)(dword_1A4404 + 7170172));
    if ( v18 >= 0xFFFFFFF0 )
      std::__basic_string_common<true>::__throw_length_error(v36);
    v19 = v18;
    v35 = v15;
    if ( v18 >= 0xB )
    {
      v23 = (v18 + 16) & 0xFFFFFFF0;
      v20 = (char *)operator new(v23);
      v36[1] = v19;
      v36[0] = v23 | 1;
      v37 = v20;
    }
    else
    {
      LOBYTE(v36[0]) = 2 * v18;
      v20 = (char *)v36 + 1;
      if ( !v18 )
        goto LABEL_15;
    }
    j_memcpy(v20, v17, v19);
LABEL_15:
    v20[v19] = 0;
    v24 = std::string::append((int)v36, "fonts/gtaweap3.ttf");
    v25 = *(double *)v24;
    v39 = *(void **)(v24 + 8);
    v38 = v25;
    *(_DWORD *)v24 = 0;
    *(_DWORD *)(v24 + 4) = 0;
    *(_DWORD *)(v24 + 8) = 0;
    if ( LOBYTE(v36[0]) << 31 )
      operator delete(v37);
    v26 = (char *)v39;
    if ( !(LOBYTE(v38) << 31) )
      v26 = (char *)&v38 + 1;
    v27 = sub_9EB08(*(_DWORD *)(v3 + 140), v26, dword_116D58, v42, v10[2]);
    *(_DWORD *)(v16 + 24) = v27;
    if ( v27 )
    {
      sub_720A0(v16);
      v28 = (_DWORD *)operator new(0xCu);
      v29 = sub_8C550();
      sub_7153C(v28, v29, v35);
      *(_DWORD *)(v16 + 28) = v28;
      v30 = dword_1ABE68;
      for ( i = dword_1ABE64; i != v30; i += 24 )
      {
        v32 = *(_DWORD *)(i + 16);
        if ( v32 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 24))(v32);
      }
    }
    else
    {
      v33 = (const char *)v39;
      if ( !(LOBYTE(v38) << 31) )
        v33 = (char *)&v38 + 1;
      _android_log_print(6, "SAMP_ORIG", "Failed to load font %s", v33);
    }
    v22 = v27 != 0;
    if ( LOBYTE(v38) << 31 )
      operator delete(v39);
    goto LABEL_30;
  }
  v21 = *(const char **)(a1 + 20);
  if ( !(*(unsigned __int8 *)(a1 + 12) << 31) )
    v21 = (const char *)(a1 + 13);
  _android_log_print(6, "SAMP_ORIG", "Failed to load font %s", v21);
  v22 = 0;
LABEL_30:
  if ( v41 )
    sub_88614();
  return v22;
}


// ======================================================================
// ADDR: 0x72e04
// SYMBOL: sub_72E04
_DWORD *__fastcall sub_72E04(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r5
  int v7; // r0
  _DWORD *v8; // r5
  _DWORD *v9; // r8
  _DWORD *v10; // r9
  _DWORD *v11; // r10
  _DWORD *v12; // r11
  int v13; // r1
  int v14; // r1
  int v15; // r1
  int v16; // r1
  int v17; // r1
  int v18; // r1
  int v19; // r1
  int v20; // r1
  int v21; // r0
  int v22; // r1
  int v23; // r1
  int v24; // r1
  int v25; // r1
  int v26; // r0
  int v27; // r1
  int v28; // r1
  int v29; // r1
  int v30; // r1
  int v31; // r1
  int v32; // r1
  int v33; // r1
  int v34; // r1
  int v35; // r1
  int v36; // r1
  int v37; // r1
  int v38; // r1
  int v40; // [sp+4h] [bp-74h]
  int v41; // [sp+8h] [bp-70h]
  _DWORD *v42; // [sp+Ch] [bp-6Ch]
  _DWORD *v43; // [sp+10h] [bp-68h]
  _DWORD *v44; // [sp+14h] [bp-64h]
  _UNKNOWN **v45; // [sp+18h] [bp-60h] BYREF
  _DWORD *v46; // [sp+1Ch] [bp-5Ch]
  _DWORD *v47; // [sp+28h] [bp-50h]
  __int64 v48; // [sp+30h] [bp-48h] BYREF
  void *v49; // [sp+38h] [bp-40h]
  __int64 *v50; // [sp+40h] [bp-38h]

  sub_7D794(a1, 0);
  *a1 = &off_1105EC;
  LOBYTE(v48) = 6;
  *(_DWORD *)((char *)&v48 + 1) = 4342100;
  v42 = (_DWORD *)operator new(0x90u);
  sub_7CCAC(v42, &v48, *(float *)&dword_116D58 * 0.5);
  if ( (unsigned __int8)v48 << 31 )
    operator delete(v49);
  v2 = operator new(0x90u);
  BYTE3(v48) = 0;
  *(_WORD *)((char *)&v48 + 1) = 15934;
  LOBYTE(v48) = 4;
  v40 = v2;
  sub_7CF5C(v2, &v48, *(float *)&dword_116D58 * 0.5);
  if ( (unsigned __int8)v48 << 31 )
    operator delete(v49);
  v3 = operator new(0x90u);
  BYTE3(v48) = 0;
  *(_WORD *)((char *)&v48 + 1) = 15420;
  LOBYTE(v48) = 4;
  v41 = v3;
  sub_7CCAC(v3, &v48, *(float *)&dword_116D58 * 0.5);
  if ( (unsigned __int8)v48 << 31 )
    operator delete(v49);
  v44 = (_DWORD *)operator new(0x90u);
  LOBYTE(v48) = 6;
  *(_DWORD *)((char *)&v48 + 1) = 4412229;
  sub_7CCAC(v44, &v48, *(float *)&dword_116D58 * 0.5);
  if ( (unsigned __int8)v48 << 31 )
    operator delete(v49);
  v4 = operator new(0x90u);
  LOBYTE(v48) = 6;
  *(_DWORD *)((char *)&v48 + 1) = 5524545;
  sub_7CCAC(v4, &v48, *(float *)&dword_116D58 * 0.5);
  v5 = (unsigned __int8)v48;
  a1[28] = v4;
  if ( v5 << 31 )
    operator delete(v49);
  v43 = (_DWORD *)operator new(0x90u);
  LOBYTE(v48) = 6;
  *(_DWORD *)((char *)&v48 + 1) = 4411475;
  sub_7CCAC(v43, &v48, *(float *)&dword_116D58 * 0.5);
  if ( (unsigned __int8)v48 << 31 )
    operator delete(v49);
  v6 = operator new(0x90u);
  BYTE2(v48) = 0;
  LOWORD(v48) = 18434;
  sub_7CCAC(v6, &v48, *(float *)&dword_116D58 * 0.5);
  v7 = (unsigned __int8)v48;
  a1[27] = v6;
  if ( v7 << 31 )
    operator delete(v49);
  v8 = (_DWORD *)operator new(0x90u);
  BYTE2(v48) = 0;
  LOWORD(v48) = 22786;
  sub_7CCAC(v8, &v48, *(float *)&dword_116D58 * 0.5);
  if ( (unsigned __int8)v48 << 31 )
    operator delete(v49);
  v9 = (_DWORD *)operator new(0x90u);
  BYTE2(v48) = 0;
  LOWORD(v48) = 19970;
  sub_7CCAC(v9, &v48, *(float *)&dword_116D58 * 0.5);
  if ( (unsigned __int8)v48 << 31 )
    operator delete(v49);
  v10 = (_DWORD *)operator new(0x90u);
  BYTE2(v48) = 0;
  LOWORD(v48) = 17922;
  sub_7CCAC(v10, &v48, *(float *)&dword_116D58 * 0.5);
  if ( (unsigned __int8)v48 << 31 )
    operator delete(v49);
  v11 = (_DWORD *)operator new(0x90u);
  BYTE2(v48) = 0;
  LOWORD(v48) = 12802;
  sub_7CCAC(v11, &v48, *(float *)&dword_116D58 * 0.5);
  if ( (unsigned __int8)v48 << 31 )
    operator delete(v49);
  v12 = (_DWORD *)operator new(0x90u);
  BYTE2(v48) = 0;
  LOWORD(v48) = 18178;
  sub_7CCAC(v12, &v48, *(float *)&dword_116D58 * 0.5);
  if ( (unsigned __int8)v48 << 31 )
    operator delete(v49);
  v46 = v42;
  v45 = &off_11062C;
  LODWORD(v48) = &off_11062C;
  HIDWORD(v48) = v42;
  v47 = &v45;
  v50 = &v48;
  sub_737F4(&v48, v42 + 22);
  if ( &v48 == v50 )
  {
    v13 = 4;
  }
  else
  {
    if ( !v50 )
      goto LABEL_30;
    v13 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v50 + 4 * v13))();
LABEL_30:
  if ( &v45 == v47 )
  {
    v14 = 4;
  }
  else
  {
    if ( !v47 )
      goto LABEL_35;
    v14 = 5;
  }
  (*(void (**)(void))(*v47 + 4 * v14))();
LABEL_35:
  v47 = &v45;
  v50 = &v48;
  v45 = &off_110674;
  LODWORD(v48) = &off_110674;
  sub_737F4(&v48, v40 + 88);
  if ( &v48 == v50 )
  {
    v15 = 4;
  }
  else
  {
    if ( !v50 )
      goto LABEL_40;
    v15 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v50 + 4 * v15))();
LABEL_40:
  if ( &v45 == v47 )
  {
    v16 = 4;
  }
  else
  {
    if ( !v47 )
      goto LABEL_45;
    v16 = 5;
  }
  (*(void (**)(void))(*v47 + 4 * v16))();
LABEL_45:
  v47 = &v45;
  v50 = &v48;
  v45 = &off_1106B4;
  LODWORD(v48) = &off_1106B4;
  sub_737F4(&v48, v41 + 88);
  if ( &v48 == v50 )
  {
    v17 = 4;
  }
  else
  {
    if ( !v50 )
      goto LABEL_50;
    v17 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v50 + 4 * v17))();
LABEL_50:
  if ( &v45 == v47 )
  {
    v18 = 4;
  }
  else
  {
    if ( !v47 )
      goto LABEL_55;
    v18 = 5;
  }
  (*(void (**)(void))(*v47 + 4 * v18))();
LABEL_55:
  v46 = v44;
  v45 = &off_1106F4;
  LODWORD(v48) = &off_1106F4;
  HIDWORD(v48) = v44;
  v47 = &v45;
  v50 = &v48;
  sub_737F4(&v48, v44 + 22);
  if ( &v48 == v50 )
  {
    v19 = 4;
  }
  else
  {
    if ( !v50 )
      goto LABEL_60;
    v19 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v50 + 4 * v19))();
LABEL_60:
  if ( &v45 == v47 )
  {
    v20 = 4;
  }
  else
  {
    if ( !v47 )
      goto LABEL_65;
    v20 = 5;
  }
  (*(void (**)(void))(*v47 + 4 * v20))();
LABEL_65:
  v21 = a1[28];
  v47 = &v45;
  v46 = a1;
  v45 = &off_110734;
  LODWORD(v48) = &off_110734;
  HIDWORD(v48) = a1;
  v50 = &v48;
  sub_737F4(&v48, v21 + 88);
  if ( &v48 == v50 )
  {
    v22 = 4;
  }
  else
  {
    if ( !v50 )
      goto LABEL_70;
    v22 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v50 + 4 * v22))();
LABEL_70:
  if ( &v45 == v47 )
  {
    v23 = 4;
  }
  else
  {
    if ( !v47 )
      goto LABEL_75;
    v23 = 5;
  }
  (*(void (**)(void))(*v47 + 4 * v23))();
LABEL_75:
  v46 = v43;
  v45 = &off_110774;
  LODWORD(v48) = &off_110774;
  HIDWORD(v48) = v43;
  v47 = &v45;
  v50 = &v48;
  sub_737F4(&v48, v43 + 22);
  if ( &v48 == v50 )
  {
    v24 = 4;
  }
  else
  {
    if ( !v50 )
      goto LABEL_80;
    v24 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v50 + 4 * v24))();
LABEL_80:
  if ( &v45 == v47 )
  {
    v25 = 4;
  }
  else
  {
    if ( !v47 )
      goto LABEL_85;
    v25 = 5;
  }
  (*(void (**)(void))(*v47 + 4 * v25))();
LABEL_85:
  v26 = a1[27];
  v47 = &v45;
  v46 = a1;
  v45 = &off_1107B4;
  LODWORD(v48) = &off_1107B4;
  HIDWORD(v48) = a1;
  v50 = &v48;
  sub_737F4(&v48, v26 + 88);
  if ( &v48 == v50 )
  {
    v27 = 4;
  }
  else
  {
    if ( !v50 )
      goto LABEL_90;
    v27 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v50 + 4 * v27))();
LABEL_90:
  if ( &v45 == v47 )
  {
    v28 = 4;
  }
  else
  {
    if ( !v47 )
      goto LABEL_95;
    v28 = 5;
  }
  (*(void (**)(void))(*v47 + 4 * v28))();
LABEL_95:
  v46 = v8;
  v45 = &off_1107F4;
  LODWORD(v48) = &off_1107F4;
  HIDWORD(v48) = v8;
  v47 = &v45;
  v50 = &v48;
  sub_737F4(&v48, v8 + 22);
  if ( &v48 == v50 )
  {
    v29 = 4;
  }
  else
  {
    if ( !v50 )
      goto LABEL_100;
    v29 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v50 + 4 * v29))();
LABEL_100:
  if ( &v45 == v47 )
  {
    v30 = 4;
  }
  else
  {
    if ( !v47 )
      goto LABEL_105;
    v30 = 5;
  }
  (*(void (**)(void))(*v47 + 4 * v30))();
LABEL_105:
  v47 = &v45;
  v46 = v9;
  v45 = &off_110834;
  LODWORD(v48) = &off_110834;
  HIDWORD(v48) = v9;
  v50 = &v48;
  sub_737F4(&v48, v9 + 22);
  if ( &v48 == v50 )
  {
    v31 = 4;
  }
  else
  {
    if ( !v50 )
      goto LABEL_110;
    v31 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v50 + 4 * v31))();
LABEL_110:
  if ( &v45 == v47 )
  {
    v32 = 4;
  }
  else
  {
    if ( !v47 )
      goto LABEL_115;
    v32 = 5;
  }
  (*(void (**)(void))(*v47 + 4 * v32))();
LABEL_115:
  v47 = &v45;
  v46 = v10;
  v45 = &off_110874;
  LODWORD(v48) = &off_110874;
  HIDWORD(v48) = v10;
  v50 = &v48;
  sub_737F4(&v48, v10 + 22);
  if ( &v48 == v50 )
  {
    v33 = 4;
  }
  else
  {
    if ( !v50 )
      goto LABEL_120;
    v33 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v50 + 4 * v33))();
LABEL_120:
  if ( &v45 == v47 )
  {
    v34 = 4;
  }
  else
  {
    if ( !v47 )
      goto LABEL_125;
    v34 = 5;
  }
  (*(void (**)(void))(*v47 + 4 * v34))();
LABEL_125:
  v47 = &v45;
  v46 = v11;
  v45 = &off_1108B4;
  LODWORD(v48) = &off_1108B4;
  HIDWORD(v48) = v11;
  v50 = &v48;
  sub_737F4(&v48, v11 + 22);
  if ( &v48 == v50 )
  {
    v35 = 4;
  }
  else
  {
    if ( !v50 )
      goto LABEL_130;
    v35 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v50 + 4 * v35))();
LABEL_130:
  if ( &v45 == v47 )
  {
    v36 = 4;
  }
  else
  {
    if ( !v47 )
      goto LABEL_135;
    v36 = 5;
  }
  (*(void (**)(void))(*v47 + 4 * v36))();
LABEL_135:
  v47 = &v45;
  v46 = v12;
  v45 = &off_1108F4;
  LODWORD(v48) = &off_1108F4;
  HIDWORD(v48) = v12;
  v50 = &v48;
  sub_737F4(&v48, v12 + 22);
  if ( &v48 == v50 )
  {
    v37 = 4;
  }
  else
  {
    if ( !v50 )
      goto LABEL_140;
    v37 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v50 + 4 * v37))();
LABEL_140:
  if ( &v45 == v47 )
  {
    v38 = 4;
    goto LABEL_144;
  }
  if ( v47 )
  {
    v38 = 5;
LABEL_144:
    (*(void (**)(void))(*v47 + 4 * v38))();
  }
  sub_7C73C(a1, v41);
  sub_7C73C(a1, v44);
  sub_7C73C(a1, v42);
  sub_7C73C(a1, a1[28]);
  sub_7C73C(a1, v43);
  sub_7C73C(a1, v10);
  sub_7C73C(a1, a1[27]);
  sub_7C73C(a1, v11);
  sub_7C73C(a1, v8);
  sub_7C73C(a1, v9);
  sub_7C73C(a1, v12);
  sub_7C73C(a1, v40);
  return a1;
}


// ======================================================================
// ADDR: 0x73fd4
// SYMBOL: sub_73FD4
int sub_73FD4()
{
  int result; // r0
  float v1; // s2
  float v2; // s0

  _android_log_print(4, "SAMP_ORIG", "Initializing scorebord..");
  result = 0;
  v1 = (float)(*(float *)(dword_1A442C + 88) * 1024.0) * 0.00052083;
  v2 = (float)(*(float *)(dword_1A442C + 92) * 768.0) * 0.00092593;
  dword_1A44DC = 0;
  dword_1A44E0 = 0;
  byte_1A44E5 = 0;
  byte_1A44E4 = 0;
  unk_1A44E8 = LODWORD(v1);
  unk_1A44EC = LODWORD(v2);
  return result;
}


// ======================================================================
// ADDR: 0x75362
// SYMBOL: sub_75362
int __fastcall sub_75362(int result)
{
  *(_DWORD *)result = result;
  *(_DWORD *)(result + 4) = result;
  *(_BYTE *)(result + 12) = 1;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x78244
// SYMBOL: sub_78244
_DWORD *__fastcall sub_78244(_DWORD *a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r6
  int v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r1
  int v9; // r0
  int v10; // r1
  int v11; // r1
  _UNKNOWN **v13; // [sp+0h] [bp-50h] BYREF
  _DWORD *v14; // [sp+4h] [bp-4Ch]
  _DWORD *v15; // [sp+10h] [bp-40h]
  _DWORD v16[2]; // [sp+18h] [bp-38h] BYREF
  void *v17; // [sp+20h] [bp-30h]
  _DWORD *v18; // [sp+28h] [bp-28h]

  sub_7D794(a1, 1);
  *a1 = &off_110B98;
  v2 = operator new(0x90u);
  strcpy((char *)v16 + 1, "Save");
  LOBYTE(v16[0]) = 8;
  sub_7C9B0(v2, v16, *(float *)&dword_116D58 * 0.5);
  v3 = LOBYTE(v16[0]);
  a1[27] = v2;
  if ( v3 << 31 )
    operator delete(v17);
  v4 = operator new(0x90u);
  strcpy((char *)v16 + 1, "Cancel");
  LOBYTE(v16[0]) = 12;
  sub_7C9B0(v4, v16, *(float *)&dword_116D58 * 0.5);
  v5 = LOBYTE(v16[0]);
  a1[28] = v4;
  if ( v5 << 31 )
    operator delete(v17);
  sub_7C73C(a1, a1[27]);
  sub_7C73C(a1, a1[28]);
  v6 = a1[27];
  v15 = &v13;
  v14 = a1;
  v13 = &off_110C58;
  v16[0] = &off_110C58;
  v16[1] = a1;
  v18 = v16;
  sub_737F4((int)v16, v6 + 88);
  if ( v16 == v18 )
  {
    v7 = 4;
  }
  else
  {
    if ( !v18 )
      goto LABEL_10;
    v7 = 5;
  }
  (*(void (**)(void))(*v18 + 4 * v7))();
LABEL_10:
  if ( &v13 == v15 )
  {
    v8 = 4;
  }
  else
  {
    if ( !v15 )
      goto LABEL_15;
    v8 = 5;
  }
  (*(void (**)(void))(*v15 + 4 * v8))();
LABEL_15:
  v9 = a1[28];
  v15 = &v13;
  v14 = a1;
  v13 = &off_110C98;
  v16[0] = &off_110C98;
  v16[1] = a1;
  v18 = v16;
  sub_737F4((int)v16, v9 + 88);
  if ( v16 == v18 )
  {
    v10 = 4;
  }
  else
  {
    if ( !v18 )
      goto LABEL_20;
    v10 = 5;
  }
  (*(void (**)(void))(*v18 + 4 * v10))();
LABEL_20:
  if ( &v13 == v15 )
  {
    v11 = 4;
    goto LABEL_24;
  }
  if ( v15 )
  {
    v11 = 5;
LABEL_24:
    (*(void (**)(void))(*v15 + 4 * v11))();
  }
  return a1;
}


// ======================================================================
// ADDR: 0x78420
// SYMBOL: sub_78420
_DWORD *__fastcall sub_78420(_DWORD *a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r6
  int v7; // r0
  int v8; // r0
  __int64 v9; // d16
  __int64 v10; // d17
  _QWORD *v11; // r1
  _QWORD *v12; // r1
  _QWORD *v13; // r1
  _QWORD *v14; // r0
  int v15; // r0
  int v16; // r1
  int v17; // r1
  int v18; // r0
  int v19; // r1
  int v20; // r1
  int v21; // r0
  int v22; // r1
  int v23; // r1
  _UNKNOWN **v25; // [sp+0h] [bp-58h] BYREF
  _DWORD *v26; // [sp+4h] [bp-54h]
  _DWORD *v27; // [sp+10h] [bp-48h]
  _DWORD v28[4]; // [sp+18h] [bp-40h] BYREF
  _DWORD *v29; // [sp+28h] [bp-30h]

  sub_7D794(a1, 0);
  *a1 = &off_110BCC;
  v2 = operator new(0x90u);
  strcpy((char *)v28 + 1, "Position");
  LOBYTE(v28[0]) = 16;
  sub_7C9B0(v2, v28, *(float *)&dword_116D58 * 0.5);
  v3 = LOBYTE(v28[0]);
  a1[27] = v2;
  if ( v3 << 31 )
    operator delete((void *)v28[2]);
  v4 = operator new(0x90u);
  strcpy((char *)v28 + 1, "Rotation");
  LOBYTE(v28[0]) = 16;
  sub_7C9B0(v4, v28, *(float *)&dword_116D58 * 0.5);
  v5 = LOBYTE(v28[0]);
  a1[28] = v4;
  if ( v5 << 31 )
    operator delete((void *)v28[2]);
  v6 = operator new(0x90u);
  strcpy((char *)v28, "\nScale");
  sub_7C9B0(v6, v28, *(float *)&dword_116D58 * 0.5);
  v7 = LOBYTE(v28[0]);
  a1[29] = v6;
  if ( v7 << 31 )
    operator delete((void *)v28[2]);
  sub_7C73C(a1, a1[27]);
  sub_7C73C(a1, a1[28]);
  sub_7C73C(a1, a1[29]);
  v8 = a1[27];
  *(float *)&v9 = 1.0;
  *((float *)&v9 + 1) = 1.0;
  *(float *)&v10 = 1.0;
  *((float *)&v10 + 1) = 1.0;
  v11 = (_QWORD *)(*(_DWORD *)(v8 + 84) + 96);
  *v11 = v9;
  v11[1] = v10;
  v12 = (_QWORD *)(*(_DWORD *)(a1[28] + 84) + 96);
  *v12 = v9;
  v12[1] = v10;
  v13 = (_QWORD *)(*(_DWORD *)(a1[29] + 84) + 96);
  *v13 = v9;
  v13[1] = v10;
  v14 = (_QWORD *)(*(_DWORD *)(v8 + 84) + 96);
  *v14 = 0x3DC0C0C23F800000LL;
  v14[1] = 0x3F48C8CA00000000LL;
  v15 = a1[27];
  v27 = &v25;
  v26 = a1;
  v25 = &off_110CD8;
  v28[0] = &off_110CD8;
  v28[1] = a1;
  v29 = v28;
  sub_737F4((int)v28, v15 + 88);
  if ( v28 == v29 )
  {
    v16 = 4;
  }
  else
  {
    if ( !v29 )
      goto LABEL_12;
    v16 = 5;
  }
  (*(void (**)(void))(*v29 + 4 * v16))();
LABEL_12:
  if ( &v25 == v27 )
  {
    v17 = 4;
  }
  else
  {
    if ( !v27 )
      goto LABEL_17;
    v17 = 5;
  }
  (*(void (**)(void))(*v27 + 4 * v17))();
LABEL_17:
  v18 = a1[28];
  v27 = &v25;
  v26 = a1;
  v25 = &off_110D18;
  v28[0] = &off_110D18;
  v28[1] = a1;
  v29 = v28;
  sub_737F4((int)v28, v18 + 88);
  if ( v28 == v29 )
  {
    v19 = 4;
  }
  else
  {
    if ( !v29 )
      goto LABEL_22;
    v19 = 5;
  }
  (*(void (**)(void))(*v29 + 4 * v19))();
LABEL_22:
  if ( &v25 == v27 )
  {
    v20 = 4;
  }
  else
  {
    if ( !v27 )
      goto LABEL_27;
    v20 = 5;
  }
  (*(void (**)(void))(*v27 + 4 * v20))();
LABEL_27:
  v21 = a1[29];
  v27 = &v25;
  v26 = a1;
  v25 = &off_110D58;
  v28[0] = &off_110D58;
  v28[1] = a1;
  v29 = v28;
  sub_737F4((int)v28, v21 + 88);
  if ( v28 == v29 )
  {
    v22 = 4;
  }
  else
  {
    if ( !v29 )
      goto LABEL_32;
    v22 = 5;
  }
  (*(void (**)(void))(*v29 + 4 * v22))();
LABEL_32:
  if ( &v25 == v27 )
  {
    v23 = 4;
    goto LABEL_36;
  }
  if ( v27 )
  {
    v23 = 5;
LABEL_36:
    (*(void (**)(void))(*v27 + 4 * v23))();
  }
  return a1;
}


// ======================================================================
// ADDR: 0x786f0
// SYMBOL: sub_786F0
_DWORD *__fastcall sub_786F0(_DWORD *a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r6
  int v9; // r0
  int v10; // r0
  __int64 v11; // d16
  __int64 v12; // d17
  _QWORD *v13; // r1
  _QWORD *v14; // r1
  _QWORD *v15; // r1
  _QWORD *v16; // r0
  int v17; // r0
  int v18; // r1
  int v19; // r1
  int v20; // r0
  int v21; // r1
  int v22; // r1
  int v23; // r0
  int v24; // r1
  int v25; // r1
  int v26; // r0
  int v27; // r1
  int v28; // r1
  _UNKNOWN **v30; // [sp+0h] [bp-50h] BYREF
  _DWORD *v31; // [sp+4h] [bp-4Ch]
  _DWORD *v32; // [sp+10h] [bp-40h]
  _DWORD v33[4]; // [sp+18h] [bp-38h] BYREF
  _DWORD *v34; // [sp+28h] [bp-28h]

  sub_7D794(a1, 1);
  *a1 = &off_110C00;
  v2 = operator new(0x90u);
  BYTE2(v33[0]) = 0;
  LOWORD(v33[0]) = 22530;
  sub_7C9B0(v2, v33, *(float *)&dword_116D58 * 0.5);
  v3 = LOBYTE(v33[0]);
  a1[27] = v2;
  if ( v3 << 31 )
    operator delete((void *)v33[2]);
  v4 = operator new(0x90u);
  BYTE2(v33[0]) = 0;
  LOWORD(v33[0]) = 22786;
  sub_7C9B0(v4, v33, *(float *)&dword_116D58 * 0.5);
  v5 = LOBYTE(v33[0]);
  a1[28] = v4;
  if ( v5 << 31 )
    operator delete((void *)v33[2]);
  v6 = operator new(0x90u);
  BYTE2(v33[0]) = 0;
  LOWORD(v33[0]) = 23042;
  sub_7C9B0(v6, v33, *(float *)&dword_116D58 * 0.5);
  v7 = LOBYTE(v33[0]);
  a1[29] = v6;
  if ( v7 << 31 )
    operator delete((void *)v33[2]);
  v8 = operator new(0x90u);
  strcpy((char *)v33 + 1, "Increase");
  LOBYTE(v33[0]) = 16;
  sub_7C9B0(v8, v33, *(float *)&dword_116D58 * 0.5);
  v9 = LOBYTE(v33[0]);
  a1[30] = v8;
  if ( v9 << 31 )
    operator delete((void *)v33[2]);
  sub_7C73C(a1, a1[27]);
  sub_7C73C(a1, a1[28]);
  sub_7C73C(a1, a1[29]);
  sub_7C73C(a1, a1[30]);
  v10 = a1[27];
  *(float *)&v11 = 1.0;
  *((float *)&v11 + 1) = 1.0;
  *(float *)&v12 = 1.0;
  *((float *)&v12 + 1) = 1.0;
  v13 = (_QWORD *)(*(_DWORD *)(v10 + 84) + 96);
  *v13 = v11;
  v13[1] = v12;
  v14 = (_QWORD *)(*(_DWORD *)(a1[28] + 84) + 96);
  *v14 = v11;
  v14[1] = v12;
  v15 = (_QWORD *)(*(_DWORD *)(a1[29] + 84) + 96);
  *v15 = v11;
  v15[1] = v12;
  v16 = (_QWORD *)(*(_DWORD *)(v10 + 84) + 96);
  *v16 = 0x3DC0C0C23F800000LL;
  v16[1] = 0x3F48C8CA00000000LL;
  v17 = a1[27];
  v32 = &v30;
  v31 = a1;
  v30 = &off_110D98;
  v33[0] = &off_110D98;
  v33[1] = a1;
  v34 = v33;
  sub_737F4((int)v33, v17 + 88);
  if ( v33 == v34 )
  {
    v18 = 4;
  }
  else
  {
    if ( !v34 )
      goto LABEL_14;
    v18 = 5;
  }
  (*(void (**)(void))(*v34 + 4 * v18))();
LABEL_14:
  if ( &v30 == v32 )
  {
    v19 = 4;
  }
  else
  {
    if ( !v32 )
      goto LABEL_19;
    v19 = 5;
  }
  (*(void (**)(void))(*v32 + 4 * v19))();
LABEL_19:
  v20 = a1[28];
  v32 = &v30;
  v31 = a1;
  v30 = &off_110DD8;
  v33[0] = &off_110DD8;
  v33[1] = a1;
  v34 = v33;
  sub_737F4((int)v33, v20 + 88);
  if ( v33 == v34 )
  {
    v21 = 4;
  }
  else
  {
    if ( !v34 )
      goto LABEL_24;
    v21 = 5;
  }
  (*(void (**)(void))(*v34 + 4 * v21))();
LABEL_24:
  if ( &v30 == v32 )
  {
    v22 = 4;
  }
  else
  {
    if ( !v32 )
      goto LABEL_29;
    v22 = 5;
  }
  (*(void (**)(void))(*v32 + 4 * v22))();
LABEL_29:
  v23 = a1[29];
  v32 = &v30;
  v31 = a1;
  v30 = &off_110E18;
  v33[0] = &off_110E18;
  v33[1] = a1;
  v34 = v33;
  sub_737F4((int)v33, v23 + 88);
  if ( v33 == v34 )
  {
    v24 = 4;
  }
  else
  {
    if ( !v34 )
      goto LABEL_34;
    v24 = 5;
  }
  (*(void (**)(void))(*v34 + 4 * v24))();
LABEL_34:
  if ( &v30 == v32 )
  {
    v25 = 4;
  }
  else
  {
    if ( !v32 )
      goto LABEL_39;
    v25 = 5;
  }
  (*(void (**)(void))(*v32 + 4 * v25))();
LABEL_39:
  v26 = a1[30];
  v32 = &v30;
  v31 = a1;
  v30 = &off_110E58;
  v33[0] = &off_110E58;
  v33[1] = a1;
  v34 = v33;
  sub_737F4((int)v33, v26 + 88);
  if ( v33 == v34 )
  {
    v27 = 4;
  }
  else
  {
    if ( !v34 )
      goto LABEL_44;
    v27 = 5;
  }
  (*(void (**)(void))(*v34 + 4 * v27))();
LABEL_44:
  if ( &v30 == v32 )
  {
    v28 = 4;
    goto LABEL_48;
  }
  if ( v32 )
  {
    v28 = 5;
LABEL_48:
    (*(void (**)(void))(*v32 + 4 * v28))();
  }
  return a1;
}


// ======================================================================
// ADDR: 0x7a994
// SYMBOL: sub_7A994
int sub_7A994()
{
  int result; // r0

  dword_1A4590 = sub_685F8("samp", "gtexture");
  result = sub_68858();
  dword_1A4594 = result;
  return result;
}


// ======================================================================
// ADDR: 0x7b2c0
// SYMBOL: sub_7B2C0
_DWORD *__fastcall sub_7B2C0(_DWORD *a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r6
  int v7; // r0
  int v8; // r1
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r1
  int v13; // r1
  int v14; // r1
  int v15; // r1
  int v16; // r1
  _DWORD v18[4]; // [sp+0h] [bp-50h] BYREF
  _DWORD *v19; // [sp+10h] [bp-40h]
  _DWORD v20[2]; // [sp+18h] [bp-38h] BYREF
  void *v21; // [sp+20h] [bp-30h]
  _DWORD *v22; // [sp+28h] [bp-28h]

  sub_7D794(a1, 0);
  *a1 = &off_110E98;
  v2 = operator new(0x90u);
  strcpy((char *)v20 + 1, "<<");
  LOBYTE(v20[0]) = 4;
  sub_7C9B0(v2, v20, *(float *)&dword_116D58 * 0.5);
  v3 = LOBYTE(v20[0]);
  a1[27] = v2;
  if ( v3 << 31 )
    operator delete(v21);
  v4 = operator new(0x90u);
  strcpy((char *)v20, "\nSpawn");
  sub_7C9B0(v4, v20, *(float *)&dword_116D58 * 0.5);
  v5 = LOBYTE(v20[0]);
  a1[28] = v4;
  if ( v5 << 31 )
    operator delete(v21);
  v6 = operator new(0x90u);
  strcpy((char *)v20 + 1, ">>");
  LOBYTE(v20[0]) = 4;
  sub_7C9B0(v6, v20, *(float *)&dword_116D58 * 0.5);
  v7 = LOBYTE(v20[0]);
  a1[29] = v6;
  if ( v7 << 31 )
    operator delete(v21);
  v8 = a1[27];
  v19 = v18;
  v18[0] = &off_110ED8;
  v20[0] = &off_110ED8;
  v22 = v20;
  sub_737F4((int)v20, v8 + 88);
  if ( v20 == v22 )
  {
    v9 = 4;
  }
  else
  {
    if ( !v22 )
      goto LABEL_12;
    v9 = 5;
  }
  (*(void (**)(void))(*v22 + 4 * v9))();
LABEL_12:
  if ( v18 == v19 )
  {
    v10 = 4;
  }
  else
  {
    if ( !v19 )
      goto LABEL_17;
    v10 = 5;
  }
  (*(void (**)(void))(*v19 + 4 * v10))();
LABEL_17:
  v11 = a1[28];
  v19 = v18;
  v18[0] = &off_110F18;
  v20[0] = &off_110F18;
  v22 = v20;
  sub_737F4((int)v20, v11 + 88);
  if ( v20 == v22 )
  {
    v12 = 4;
  }
  else
  {
    if ( !v22 )
      goto LABEL_22;
    v12 = 5;
  }
  (*(void (**)(void))(*v22 + 4 * v12))();
LABEL_22:
  if ( v18 == v19 )
  {
    v13 = 4;
  }
  else
  {
    if ( !v19 )
      goto LABEL_27;
    v13 = 5;
  }
  (*(void (**)(void))(*v19 + 4 * v13))();
LABEL_27:
  v14 = a1[29];
  v19 = v18;
  v18[0] = &off_110F58;
  v20[0] = &off_110F58;
  v22 = v20;
  sub_737F4((int)v20, v14 + 88);
  if ( v20 == v22 )
  {
    v15 = 4;
  }
  else
  {
    if ( !v22 )
      goto LABEL_32;
    v15 = 5;
  }
  (*(void (**)(void))(*v22 + 4 * v15))();
LABEL_32:
  if ( v18 == v19 )
  {
    v16 = 4;
    goto LABEL_36;
  }
  if ( v19 )
  {
    v16 = 5;
LABEL_36:
    (*(void (**)(void))(*v19 + 4 * v16))();
  }
  sub_7C73C(a1, a1[27]);
  sub_7C73C(a1, a1[28]);
  sub_7C73C(a1, a1[29]);
  return a1;
}


// ======================================================================
// ADDR: 0x7bbec
// SYMBOL: sub_7BBEC
int sub_7BBEC(char *a1, int a2, int a3, char *format, ...)
{
  int v5; // [sp+4h] [bp-Ch]
  va_list va; // [sp+10h] [bp+0h] BYREF

  va_start(va, format);
  vsnprintf(a1, 0x100u, format, va);
  return v5;
}


// ======================================================================
// ADDR: 0x7c4a6
// SYMBOL: sub_7C4A6
int __fastcall sub_7C4A6(int a1, _QWORD *a2)
{
  *(_QWORD *)(a1 + 12) = *a2;
  return sub_7C4B2();
}


// ======================================================================
// ADDR: 0x7d380
// SYMBOL: sub_7D380
int __fastcall sub_7D380(int a1, int a2, _QWORD *a3, char a4, float a5)
{
  __int64 v9; // d17
  int result; // r0

  sub_7C360(a1);
  *(_DWORD *)a1 = &off_111118;
  *(_QWORD *)(a1 + 84) = 0LL;
  *(_QWORD *)(a1 + 92) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  std::string::operator=(a1 + 84, a2);
  v9 = a3[1];
  *(_QWORD *)(a1 + 96) = *a3;
  *(_QWORD *)(a1 + 104) = v9;
  *(_BYTE *)(a1 + 112) = a4;
  result = a1;
  *(float *)(a1 + 116) = a5;
  return result;
}


// ======================================================================
