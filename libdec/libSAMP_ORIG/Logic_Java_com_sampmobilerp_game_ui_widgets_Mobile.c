// ADDR: 0x69984
// SYMBOL: sub_69984
int sub_69984()
{
  int v0; // r0
  int v2; // r0

  v0 = sub_68E3C();
  if ( v0 )
    return sub_69070(v0);
  v2 = (unsigned __int8)byte_1A42AC;
  __dmb(0xBu);
  if ( !(v2 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A42AC) )
  {
    byte_1A42AA = 90;
    word_1A42A8 = 11316;
    dword_1A42A4 = 1064973588;
    _cxa_atexit((void (*)(void *))sub_66E8E, &dword_1A42A4, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A42AC);
  }
  if ( byte_1A42AA )
  {
    byte_1A42AA ^= 0x5Au;
    LOBYTE(dword_1A42A4) = dword_1A42A4 ^ 0x5A;
    BYTE1(dword_1A42A4) ^= 0x5Au;
    BYTE2(dword_1A42A4) ^= 0x5Au;
    LOBYTE(word_1A42A8) = word_1A42A8 ^ 0x5A;
    HIBYTE(dword_1A42A4) ^= 0x5Au;
    HIBYTE(word_1A42A8) ^= 0x5Au;
  }
  return sub_10C158(4, "SAMP_ORIG", &dword_1A42A4);
}


// ======================================================================
// ADDR: 0x767f0
// SYMBOL: sub_767F0
int __fastcall sub_767F0(int a1, int a2, int a3)
{
  size_t v3; // r0
  size_t v4; // r4
  char *v5; // r5
  unsigned int v6; // r6
  int v7; // r2
  int v8; // r3
  double v9; // r0
  int v10; // s0
  int v11; // r3
  double v12; // r0
  int v13; // s0
  int v14; // r5
  int v15; // r3
  double v16; // r0
  int v17; // s0
  unsigned __int8 v19; // [sp+24h] [bp-2A4h] BYREF
  char v20[12]; // [sp+25h] [bp-2A3h] BYREF
  char v21[7]; // [sp+31h] [bp-297h] BYREF
  void *v22; // [sp+38h] [bp-290h]
  unsigned __int8 v23; // [sp+3Ch] [bp-28Ch] BYREF
  char v24[12]; // [sp+3Dh] [bp-28Bh] BYREF
  char v25[7]; // [sp+49h] [bp-27Fh] BYREF
  void *v26; // [sp+50h] [bp-278h]
  _DWORD v27[2]; // [sp+54h] [bp-274h] BYREF
  void *v28; // [sp+5Ch] [bp-26Ch]
  unsigned __int8 v29; // [sp+60h] [bp-268h] BYREF
  char v30[7]; // [sp+61h] [bp-267h] BYREF
  void *v31; // [sp+68h] [bp-260h]
  _DWORD v32[2]; // [sp+6Ch] [bp-25Ch] BYREF
  void *v33; // [sp+74h] [bp-254h]
  unsigned __int8 v34; // [sp+78h] [bp-250h] BYREF
  __int16 v35; // [sp+79h] [bp-24Fh]
  char v36; // [sp+7Bh] [bp-24Dh]
  void *v37; // [sp+80h] [bp-248h]
  unsigned __int8 v38; // [sp+84h] [bp-244h]
  _BYTE v39[11]; // [sp+85h] [bp-243h] BYREF
  unsigned __int8 v40; // [sp+90h] [bp-238h]
  char v41[12]; // [sp+91h] [bp-237h] BYREF
  char v42[7]; // [sp+9Dh] [bp-22Bh] BYREF
  void *v43; // [sp+A4h] [bp-224h]
  _BYTE v44[8]; // [sp+A8h] [bp-220h] BYREF
  void *v45; // [sp+B0h] [bp-218h]
  unsigned __int8 v46; // [sp+B4h] [bp-214h] BYREF
  char v47[12]; // [sp+B5h] [bp-213h] BYREF
  char v48[7]; // [sp+C1h] [bp-207h] BYREF
  void *v49; // [sp+C8h] [bp-200h]
  unsigned __int8 v50; // [sp+CCh] [bp-1FCh] BYREF
  char v51[11]; // [sp+CDh] [bp-1FBh] BYREF
  unsigned __int8 v52; // [sp+D8h] [bp-1F0h] BYREF
  char v53[7]; // [sp+D9h] [bp-1EFh] BYREF
  void *v54; // [sp+E0h] [bp-1E8h]
  unsigned __int8 v55; // [sp+E4h] [bp-1E4h] BYREF
  char v56[11]; // [sp+E5h] [bp-1E3h] BYREF
  unsigned __int8 v57; // [sp+F0h] [bp-1D8h] BYREF
  char v58[7]; // [sp+F1h] [bp-1D7h] BYREF
  void *v59; // [sp+F8h] [bp-1D0h]
  _DWORD v60[2]; // [sp+FCh] [bp-1CCh] BYREF
  void *v61; // [sp+104h] [bp-1C4h]
  unsigned __int8 v62; // [sp+108h] [bp-1C0h] BYREF
  char v63[7]; // [sp+109h] [bp-1BFh] BYREF
  void *v64; // [sp+110h] [bp-1B8h]
  unsigned __int8 v65; // [sp+114h] [bp-1B4h] BYREF
  char v66[11]; // [sp+115h] [bp-1B3h] BYREF
  unsigned __int8 v67; // [sp+120h] [bp-1A8h] BYREF
  char v68[7]; // [sp+121h] [bp-1A7h] BYREF
  void *v69; // [sp+128h] [bp-1A0h]
  unsigned __int8 v70; // [sp+12Ch] [bp-19Ch] BYREF
  char v71[11]; // [sp+12Dh] [bp-19Bh] BYREF
  unsigned __int8 v72; // [sp+138h] [bp-190h] BYREF
  char v73[7]; // [sp+139h] [bp-18Fh] BYREF
  void *v74; // [sp+140h] [bp-188h]
  _DWORD v75[2]; // [sp+144h] [bp-184h] BYREF
  void *v76; // [sp+14Ch] [bp-17Ch]
  unsigned __int8 v77; // [sp+150h] [bp-178h] BYREF
  char v78[7]; // [sp+151h] [bp-177h] BYREF
  void *v79; // [sp+158h] [bp-170h]
  _DWORD v80[2]; // [sp+15Ch] [bp-16Ch] BYREF
  void *v81; // [sp+164h] [bp-164h]
  unsigned __int8 v82; // [sp+168h] [bp-160h] BYREF
  char v83[7]; // [sp+169h] [bp-15Fh] BYREF
  void *v84; // [sp+170h] [bp-158h]
  _DWORD v85[2]; // [sp+174h] [bp-154h] BYREF
  void *v86; // [sp+17Ch] [bp-14Ch]
  _DWORD v87[10]; // [sp+180h] [bp-148h] BYREF
  char src[256]; // [sp+1A8h] [bp-120h] BYREF

  if ( dword_1A4404 == -7170172 )
  {
    _android_log_print(6, "SAMP_ORIG", "Failed to initialize settings. (game storage null)");
    std::terminate();
  }
  sub_767B0(src, 7170172, a3, "%s/SAMP/menu_settings.ini", (const char *)(dword_1A4404 + 7170172));
  v3 = strlen(src);
  if ( v3 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(v85);
  v4 = v3;
  if ( v3 >= 0xB )
  {
    v6 = (v3 + 16) & 0xFFFFFFF0;
    v5 = (char *)operator new(v6);
    v85[1] = v4;
    v86 = v5;
    v85[0] = v6 + 1;
    goto LABEL_7;
  }
  LOBYTE(v85[0]) = 2 * v3;
  v5 = (char *)v85 + 1;
  if ( v3 )
LABEL_7:
    j_memcpy(v5, src, v4);
  v5[v4] = 0;
  sub_77138(v87, v85);
  if ( LOBYTE(v85[0]) << 31 )
    operator delete(v86);
  if ( v87[0] <= -1 )
  {
    _android_log_print(4, "SAMP_ORIG", "menu_settings.ini not found. Creating new settings file.");
    dword_1A44F8 = 1145569280;
    dword_1A44FC = 1112014848;
    dword_1A4500 = 331;
    dword_1A4504 = -14;
    dword_1A4508 = 80;
    dword_1A4510 = 1;
    dword_1A450C = 80;
    dword_1A4514 = 1;
    _strncpy_chk2(byte_1A452C, "C80018", 6, 6, 7);
    dword_1A4520 = 345;
    dword_1A451C = 2000;
    dword_1A4524 = 1065353216;
    dword_1A4528 = 5;
    sub_76564(5, (int)&dword_1A4524, v7);
  }
  strcpy(v83, "ui");
  v82 = 4;
  v81 = (void *)operator new(0x10u);
  strcpy((char *)v81, "sensitivity");
  v80[1] = 11;
  v80[0] = 17;
  LODWORD(v9) = sub_771D8((int)v87, (int)&v82, (int)v80, v8, 50.0);
  *(float *)&v10 = v9;
  dword_1A44FC = v10;
  if ( LOBYTE(v80[0]) << 31 )
    operator delete(v81);
  if ( v82 << 31 )
    operator delete(v84);
  strcpy(v78, "ui");
  v77 = 4;
  v76 = (void *)operator new(0x10u);
  strcpy((char *)v76, "draw_distance");
  v75[1] = 13;
  v75[0] = 17;
  LODWORD(v12) = sub_771D8((int)v87, (int)&v77, (int)v75, v11, 800.0);
  *(float *)&v13 = v12;
  dword_1A44F8 = v13;
  if ( LOBYTE(v75[0]) << 31 )
    operator delete(v76);
  if ( v77 << 31 )
    operator delete(v79);
  strcpy(v73, "ui");
  strcpy(v71, "voice_x");
  v72 = 4;
  v70 = 14;
  dword_1A4500 = sub_772CC(v87, &v72, &v70, 331);
  if ( v70 << 31 )
    operator delete(*(void **)&v71[7]);
  if ( v72 << 31 )
    operator delete(v74);
  strcpy(v68, "ui");
  strcpy(v66, "voice_y");
  v67 = 4;
  v65 = 14;
  dword_1A4504 = sub_772CC(v87, &v67, &v65, -14);
  if ( v65 << 31 )
    operator delete(*(void **)&v66[7]);
  if ( v67 << 31 )
    operator delete(v69);
  strcpy(v63, "ui");
  v62 = 4;
  v61 = (void *)operator new(0x10u);
  v60[1] = 12;
  strcpy((char *)v61, "speaker_list");
  v60[0] = 17;
  dword_1A4510 = sub_772CC(v87, &v62, v60, 1);
  if ( LOBYTE(v60[0]) << 31 )
    operator delete(v61);
  if ( v62 << 31 )
    operator delete(v64);
  strcpy(v58, "ui");
  strcpy(v56, "voice_w");
  v57 = 4;
  v55 = 14;
  dword_1A4508 = sub_772CC(v87, &v57, &v55, 80);
  if ( v55 << 31 )
    operator delete(*(void **)&v56[7]);
  if ( v57 << 31 )
    operator delete(v59);
  strcpy(v53, "ui");
  strcpy(v51, "voice_h");
  v52 = 4;
  v50 = 14;
  dword_1A450C = sub_772CC(v87, &v52, &v50, 80);
  if ( v50 << 31 )
    operator delete(*(void **)&v51[7]);
  if ( v52 << 31 )
    operator delete(v54);
  strcpy(v48, "ui");
  strcpy(v47, "new_menu");
  v47[11] = 4;
  v46 = 16;
  dword_1A4514 = sub_772CC(v87, &v47[11], &v46, 1);
  if ( v46 << 31 )
    operator delete(*(void **)&v47[7]);
  if ( (unsigned __int8)v47[11] << 31 )
    operator delete(v49);
  strcpy(v42, "ui");
  v41[11] = 4;
  v40 = 18;
  strcpy(v41, "buttoncol");
  strcpy(v39, "C80018");
  v38 = 12;
  sub_773B8(v44, v87, &v41[11]);
  v14 = std::string::copy((int)v44, byte_1A452C);
  if ( v44[0] << 31 )
    operator delete(v45);
  if ( v38 << 31 )
    operator delete(*(void **)&v39[7]);
  if ( v40 << 31 )
    operator delete(*(void **)&v41[7]);
  if ( (unsigned __int8)v41[11] << 31 )
    operator delete(v43);
  v35 = 26997;
  byte_1A452C[v14] = 0;
  v36 = 0;
  v34 = 4;
  v33 = (void *)operator new(0x10u);
  strcpy((char *)v33, "passenger_btn_x");
  v32[1] = 15;
  v32[0] = 17;
  dword_1A451C = sub_772CC(v87, &v34, v32, 2000);
  if ( LOBYTE(v32[0]) << 31 )
    operator delete(v33);
  if ( v34 << 31 )
    operator delete(v37);
  strcpy(v30, "ui");
  v29 = 4;
  v28 = (void *)operator new(0x10u);
  strcpy((char *)v28, "passenger_btn_y");
  v27[1] = 15;
  v27[0] = 17;
  dword_1A4520 = sub_772CC(v87, &v29, v27, 345);
  if ( LOBYTE(v27[0]) << 31 )
    operator delete(v28);
  if ( v29 << 31 )
    operator delete(v31);
  strcpy(v25, "ui");
  strcpy(v24, "fontsize");
  v24[11] = 4;
  v23 = 16;
  LODWORD(v16) = sub_771D8((int)v87, (int)&v24[11], (int)&v23, v15, 1.0);
  *(float *)&v17 = v16;
  dword_1A4524 = v17;
  if ( v23 << 31 )
    operator delete(*(void **)&v24[7]);
  if ( (unsigned __int8)v24[11] << 31 )
    operator delete(v26);
  strcpy(v21, "ui");
  strcpy(v20, "pagesize");
  v20[11] = 4;
  v19 = 16;
  dword_1A4528 = sub_772CC(v87, &v20[11], &v19, 5);
  if ( v19 << 31 )
    operator delete(*(void **)&v20[7]);
  if ( (unsigned __int8)v20[11] << 31 )
    operator delete(v22);
  sub_774A4(v87);
  return 1;
}


// ======================================================================
