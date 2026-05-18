// ADDR: 0x1193ec
// SYMBOL: sub_1193EC
int __fastcall sub_1193EC(int a1)
{
  int *v2; // r4
  int v3; // r5
  char *v4; // r0
  unsigned __int32 *p_r_info; // r1
  char *v6; // r3
  int v7; // r1
  int v8; // r6
  int v9; // r0
  int v10; // r1
  int v11; // r1
  int v12; // r6
  int v13; // r0
  int v14; // r1
  int v15; // r1
  int v16; // r10
  int v17; // r0
  int v18; // r9
  int v19; // r0
  int v20; // r1
  int v21; // r1
  int v22; // r1
  int v23; // r6
  int v24; // r0
  int v25; // r1
  int v26; // r1
  int v27; // r6
  int v28; // r0
  int v29; // r1
  int v30; // r1
  int v31; // r6
  int v32; // r0
  int v33; // r1
  int v34; // r1
  int v35; // r6
  int v36; // r0
  int v37; // r1
  int v38; // r1
  int v39; // r6
  int v40; // r0
  int v41; // r1
  int v42; // r1
  int v43; // r6
  int v44; // r0
  int v45; // r1
  int v46; // r1
  int v47; // r6
  int v48; // r0
  int v49; // r1
  int v50; // r1
  _DWORD v52[4]; // [sp+28h] [bp-140h] BYREF
  _DWORD *v53; // [sp+38h] [bp-130h]
  _DWORD v54[4]; // [sp+40h] [bp-128h] BYREF
  _DWORD *v55; // [sp+50h] [bp-118h]
  _DWORD v56[4]; // [sp+58h] [bp-110h] BYREF
  _DWORD *v57; // [sp+68h] [bp-100h]
  _DWORD v58[4]; // [sp+70h] [bp-F8h] BYREF
  _DWORD *v59; // [sp+80h] [bp-E8h]
  _DWORD v60[4]; // [sp+88h] [bp-E0h] BYREF
  _DWORD *v61; // [sp+98h] [bp-D0h]
  _DWORD v62[4]; // [sp+A0h] [bp-C8h] BYREF
  _DWORD *v63; // [sp+B0h] [bp-B8h]
  _DWORD v64[4]; // [sp+B8h] [bp-B0h] BYREF
  _DWORD *v65; // [sp+C8h] [bp-A0h]
  _BYTE v66[16]; // [sp+D0h] [bp-98h] BYREF
  _BYTE *v67; // [sp+E0h] [bp-88h]
  _DWORD v68[4]; // [sp+E8h] [bp-80h] BYREF
  _DWORD *v69; // [sp+F8h] [bp-70h]
  _DWORD v70[4]; // [sp+100h] [bp-68h] BYREF
  _DWORD *v71; // [sp+110h] [bp-58h]
  _BYTE v72[16]; // [sp+118h] [bp-50h] BYREF
  _BYTE *v73; // [sp+128h] [bp-40h]
  _BYTE v74[16]; // [sp+130h] [bp-38h] BYREF
  _BYTE *v75; // [sp+140h] [bp-28h]

  sub_22178C(a1, 0x50u);
  if ( dword_238E8C == 2 )
  {
    v2 = (int *)(a1 + 64);
    _android_log_print(3, "AXL", "Enable modloader for models");
    v3 = operator new((unsigned int)&unk_73A5C);
    sub_22178C(v3, (size_t)&unk_73A5C);
    v4 = "dwait";
    p_r_info = &stru_4D18C.r_info;
    do
    {
      v6 = (char *)p_r_info + v3;
      *(unsigned __int32 *)((char *)p_r_info + v3) = 0;
      p_r_info = (unsigned __int32 *)((char *)p_r_info + 6);
      v4 -= 6;
      v6[4] = 0;
    }
    while ( v4 );
    v7 = *v2;
    *v2 = v3;
    if ( v7 )
      sub_11A8A4(a1 + 64, v7, 0);
    v71 = v70;
    v70[1] = a1;
    v70[0] = &off_22BFB4;
    ((void (*)(void))sub_11A8E8)();
    v8 = dword_263540;
    if ( !dword_263540 )
    {
      v9 = sub_11A940(v74, v70);
      sub_11A8E8(v9);
      sub_11A96C(&unk_263530, v74);
      if ( v74 == v75 )
      {
        v10 = 4;
      }
      else
      {
        if ( !v75 )
          goto LABEL_12;
        v10 = 5;
      }
      (*(void (**)(void))(*(_DWORD *)v75 + 4 * v10))();
    }
LABEL_12:
    if ( v70 == v71 )
    {
      v11 = 4;
    }
    else
    {
      if ( !v71 )
        goto LABEL_17;
      v11 = 5;
    }
    (*(void (**)(void))(*v71 + 4 * v11))();
LABEL_17:
    if ( v8 )
      _android_log_print(5, "AXL", "modloader: Can't hook load_cd_directory, because wrapper already used!");
    else
      sub_164196(dword_23DF24 + 6744172, sub_119C28, a1);
    v69 = v68;
    v68[1] = a1;
    v68[0] = &off_22BFFC;
    ((void (*)(void))sub_11AA44)();
    v12 = dword_263560;
    if ( !dword_263560 )
    {
      v13 = sub_11AA9C(v74, v68);
      sub_11AA44(v13);
      sub_11AAC8(&unk_263550, v74);
      if ( v74 == v75 )
      {
        v14 = 4;
      }
      else
      {
        if ( !v75 )
          goto LABEL_26;
        v14 = 5;
      }
      (*(void (**)(void))(*(_DWORD *)v75 + 4 * v14))();
    }
LABEL_26:
    if ( v68 == v69 )
    {
      v15 = 4;
    }
    else
    {
      if ( !v69 )
        goto LABEL_31;
      v15 = 5;
    }
    (*(void (**)(void))(*v69 + 4 * v15))();
LABEL_31:
    if ( v12 )
      _android_log_print(5, "AXL", "modloader: Can't hook set_cd_posn_and_size, because wrapper already used!");
    else
      sub_164196(dword_23DF24 + 6751520, sub_119C48, a1 + 4);
    v16 = dword_23DF24;
    sub_119C88(v66, sub_119C74, 0, a1);
    v17 = sub_10CD74((int)v72, (int)v66);
    sub_11ABD0(v17);
    v18 = dword_263580;
    if ( !dword_263580 )
    {
      v19 = sub_10CD74((int)v74, (int)v72);
      sub_11ABD0(v19);
      sub_10CDA0(dword_263570, (int)v74);
      if ( v74 == v75 )
      {
        v20 = 4;
      }
      else
      {
        if ( !v75 )
          goto LABEL_40;
        v20 = 5;
      }
      (*(void (**)(void))(*(_DWORD *)v75 + 4 * v20))();
    }
LABEL_40:
    if ( v72 == v73 )
    {
      v21 = 4;
    }
    else
    {
      if ( !v73 )
        goto LABEL_45;
      v21 = 5;
    }
    (*(void (**)(void))(*(_DWORD *)v73 + 4 * v21))();
LABEL_45:
    if ( !v18 )
      sub_164196(v16 + 6750416, sub_11ABAC, a1 + 36);
    if ( v66 == v67 )
    {
      v22 = 4;
    }
    else
    {
      if ( !v67 )
        goto LABEL_52;
      v22 = 5;
    }
    (*(void (**)(void))(*(_DWORD *)v67 + 4 * v22))();
LABEL_52:
    if ( v18 )
      _android_log_print(5, "AXL", "modloader: Can't hook init2, because wrapper already used!");
    v65 = v64;
    v64[1] = a1;
    v64[0] = &off_22C084;
    ((void (*)(void))sub_11ACF8)();
    v23 = dword_2635A0;
    if ( !dword_2635A0 )
    {
      v24 = sub_11AD50(v74, v64);
      sub_11ACF8(v24);
      sub_11AD7C(&unk_263590, v74);
      if ( v74 == v75 )
      {
        v25 = 4;
      }
      else
      {
        if ( !v75 )
          goto LABEL_60;
        v25 = 5;
      }
      (*(void (**)(void))(*(_DWORD *)v75 + 4 * v25))();
    }
LABEL_60:
    if ( v64 == v65 )
    {
      v26 = 4;
    }
    else
    {
      if ( !v65 )
        goto LABEL_65;
      v26 = 5;
    }
    (*(void (**)(void))(*v65 + 4 * v26))();
LABEL_65:
    if ( v23 )
      _android_log_print(5, "AXL", "modloader: Can't hook get_entry, because wrapper already used!");
    else
      sub_164196(dword_23DF24 + 6762704, sub_119CC4, a1 + 8);
    v63 = v62;
    v62[1] = a1;
    v62[0] = &off_22C0CC;
    ((void (*)(void))sub_11AE8C)();
    v27 = dword_2635C0;
    if ( !dword_2635C0 )
    {
      v28 = sub_11AEE4(v74, v62);
      sub_11AE8C(v28);
      sub_11AF10(&unk_2635B0, v74);
      if ( v74 == v75 )
      {
        v29 = 4;
      }
      else
      {
        if ( !v75 )
          goto LABEL_74;
        v29 = 5;
      }
      (*(void (**)(void))(*(_DWORD *)v75 + 4 * v29))();
    }
LABEL_74:
    if ( v62 == v63 )
    {
      v30 = 4;
    }
    else
    {
      if ( !v63 )
        goto LABEL_79;
      v30 = 5;
    }
    (*(void (**)(void))(*v63 + 4 * v30))();
LABEL_79:
    if ( v27 )
      _android_log_print(5, "AXL", "modloader: Can't hook find_col_slot, because wrapper already used!");
    else
      sub_164196(dword_23DF24 + 6743852, sub_119CF8, a1 + 12);
    v61 = v60;
    v60[1] = a1;
    v60[0] = &off_22C114;
    ((void (*)(void))sub_11AFD8)();
    v31 = dword_2635E0;
    if ( !dword_2635E0 )
    {
      v32 = sub_11AEE4(v74, v60);
      sub_11AFD8(v32);
      sub_11AF10(&unk_2635D0, v74);
      if ( v74 == v75 )
      {
        v33 = 4;
      }
      else
      {
        if ( !v75 )
          goto LABEL_88;
        v33 = 5;
      }
      (*(void (**)(void))(*(_DWORD *)v75 + 4 * v33))();
    }
LABEL_88:
    if ( v60 == v61 )
    {
      v34 = 4;
    }
    else
    {
      if ( !v61 )
        goto LABEL_93;
      v34 = 5;
    }
    (*(void (**)(void))(*v61 + 4 * v34))();
LABEL_93:
    if ( v31 )
      _android_log_print(5, "AXL", "modloader: Can't hook find_ipl_slot, because wrapper already used!");
    else
      sub_164196(dword_23DF24 + 6771536, sub_119D24, a1 + 16);
    v59 = v58;
    v58[1] = a1;
    v58[0] = &off_22C154;
    ((void (*)(void))sub_11B0AC)();
    v35 = dword_263600;
    if ( !dword_263600 )
    {
      v36 = sub_11AEE4(v74, v58);
      sub_11B0AC(v36);
      sub_11AF10(&unk_2635F0, v74);
      if ( v74 == v75 )
      {
        v37 = 4;
      }
      else
      {
        if ( !v75 )
          goto LABEL_102;
        v37 = 5;
      }
      (*(void (**)(void))(*(_DWORD *)v75 + 4 * v37))();
    }
LABEL_102:
    if ( v58 == v59 )
    {
      v38 = 4;
    }
    else
    {
      if ( !v59 )
        goto LABEL_107;
      v38 = 5;
    }
    (*(void (**)(void))(*v59 + 4 * v38))();
LABEL_107:
    if ( v35 )
      _android_log_print(5, "AXL", "modloader: Can't hook register_anim_block_slot, because wrapper already used!");
    else
      sub_164196(dword_23DF24 + 6768704, sub_119D50, a1 + 20);
    v57 = v56;
    v56[1] = a1;
    v56[0] = &off_22C194;
    ((void (*)(void))sub_11B180)();
    v39 = dword_263620;
    if ( !dword_263620 )
    {
      v40 = sub_11B1D8(v74, v56);
      sub_11B180(v40);
      sub_11B204(&unk_263610, v74);
      if ( v74 == v75 )
      {
        v41 = 4;
      }
      else
      {
        if ( !v75 )
          goto LABEL_116;
        v41 = 5;
      }
      (*(void (**)(void))(*(_DWORD *)v75 + 4 * v41))();
    }
LABEL_116:
    if ( v56 == v57 )
    {
      v42 = 4;
    }
    else
    {
      if ( !v57 )
        goto LABEL_121;
      v42 = 5;
    }
    (*(void (**)(void))(*v57 + 4 * v42))();
LABEL_121:
    if ( v39 )
      _android_log_print(5, "AXL", "modloader: Can't hook register_script_slot, because wrapper already used!");
    else
      sub_164196(dword_23DF24 + 6747940, sub_119D7C, a1 + 24);
    v55 = v54;
    v54[1] = a1;
    v54[0] = &off_22C1DC;
    ((void (*)(void))sub_11B2F8)();
    v43 = dword_263640;
    if ( !dword_263640 )
    {
      v44 = sub_11B350(v74, v54);
      sub_11B2F8(v44);
      sub_11B37C(&unk_263630, v74);
      if ( v74 == v75 )
      {
        v45 = 4;
      }
      else
      {
        if ( !v75 )
          goto LABEL_130;
        v45 = 5;
      }
      (*(void (**)(void))(*(_DWORD *)v75 + 4 * v45))();
    }
LABEL_130:
    if ( v54 == v55 )
    {
      v46 = 4;
    }
    else
    {
      if ( !v55 )
        goto LABEL_135;
      v46 = 5;
    }
    (*(void (**)(void))(*v55 + 4 * v46))();
LABEL_135:
    if ( v43 )
      _android_log_print(5, "AXL", "modloader: Can't hook stream_resource, because wrapper already used!");
    else
      sub_164196(dword_23DF24 + 6763128, sub_119D9C, a1 + 28);
    v53 = v52;
    v52[1] = a1;
    v52[0] = &off_22C224;
    ((void (*)(void))sub_11B454)();
    v47 = dword_263660;
    if ( !dword_263660 )
    {
      v48 = sub_11B4AC(v74, v52);
      sub_11B454(v48);
      sub_11B4D8(&unk_263650, v74);
      if ( v74 == v75 )
      {
        v49 = 4;
      }
      else
      {
        if ( !v75 )
          goto LABEL_144;
        v49 = 5;
      }
      (*(void (**)(void))(*(_DWORD *)v75 + 4 * v49))();
    }
LABEL_144:
    if ( v52 == v53 )
    {
      v50 = 4;
    }
    else
    {
      if ( !v53 )
        goto LABEL_149;
      v50 = 5;
    }
    (*(void (**)(void))(*v53 + 4 * v50))();
LABEL_149:
    if ( v47 )
      _android_log_print(5, "AXL", "modloader: Can't hook stream_texturedb, because wrapper already used!");
    else
      sub_164196(dword_23DF24 + 6763088, sub_119DBC, a1 + 32);
  }
  return a1;
}


// ======================================================================
