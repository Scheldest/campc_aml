// ADDR: 0x8271c
// SYMBOL: sub_8271C
bool __fastcall sub_8271C(int a1)
{
  _BOOL4 v2; // r6
  int v4; // r4
  int v5; // r0
  int v6; // r5
  int v7; // t1
  int v8; // r6
  char v9; // r5
  const char *v10; // r0
  int v11; // r4
  int v12; // r1
  void *v13; // r9
  signed int v14; // r8
  unsigned int v15; // r5
  int v16; // r0
  char *v17; // r4
  char *v18; // r11
  int v19; // r11
  unsigned int *v20; // r9
  char *v21; // r11
  size_t v22; // r0
  size_t v23; // r5
  void *v24; // r4
  unsigned int v25; // r8
  int *v26; // r1
  int v27; // r0
  int v28; // r1
  int v29; // r1
  int v30; // r1
  int v31; // r1
  int v32; // r1
  int v33; // r1
  int v34; // r1
  int v35; // r1
  int v36; // r1
  int *v37; // r0
  unsigned int v38; // r1
  int v39; // r0
  bool v40; // zf
  int (__fastcall *v41)(int); // r1
  int v42; // r0
  int v43; // r1
  int v44; // r1
  int v45; // r9
  int v46; // r0
  int v47; // r9
  int v48; // r0
  unsigned int v49; // r4
  int v50; // r6
  int v51; // r1
  bool v52; // zf
  int v53; // r0
  int v55; // r2
  int v56; // r3
  int v57; // r1
  int v58; // r0
  int v59; // r5
  unsigned int v60; // r6
  int v61; // r4
  int *v62; // r0
  int v63; // r6
  char **v64; // r0
  int v65; // r1
  int v66; // r0
  _DWORD *v67; // r0
  int v68; // r1
  _BYTE *v69; // r0
  int v70; // r1
  _BYTE *v71; // r0
  int v72; // r1
  int v73; // [sp+10h] [bp-100h]
  __int64 v74; // [sp+24h] [bp-ECh] BYREF
  void *v75; // [sp+2Ch] [bp-E4h]
  _DWORD v76[4]; // [sp+30h] [bp-E0h] BYREF
  _DWORD *v77; // [sp+40h] [bp-D0h]
  _BYTE v78[16]; // [sp+48h] [bp-C8h] BYREF
  _BYTE *v79; // [sp+58h] [bp-B8h]
  _DWORD v80[4]; // [sp+60h] [bp-B0h] BYREF
  _DWORD *v81; // [sp+70h] [bp-A0h]
  _BYTE v82[16]; // [sp+78h] [bp-98h] BYREF
  _BYTE *v83; // [sp+88h] [bp-88h]
  _DWORD v84[6]; // [sp+90h] [bp-80h] BYREF
  _DWORD v85[4]; // [sp+A8h] [bp-68h] BYREF
  _DWORD *v86; // [sp+B8h] [bp-58h]
  _DWORD v87[6]; // [sp+C0h] [bp-50h] BYREF
  char *s[2]; // [sp+D8h] [bp-38h] BYREF
  unsigned int v89; // [sp+E0h] [bp-30h]
  char **v90; // [sp+E8h] [bp-28h]

  if ( byte_1A49FC || !off_1ABF28() )
    return 0;
  sub_80664("[sv:dbg:record:init] : module initializing...");
  v73 = a1;
  v4 = dword_1A4A00;
  v5 = dword_1A4A04;
  if ( dword_1A4A04 != dword_1A4A00 )
  {
    v6 = dword_1A4A04;
    do
    {
      v7 = *(unsigned __int8 *)(v6 - 12);
      v6 -= 12;
      if ( v7 << 31 )
        operator delete(*(void **)(v5 - 4));
      v5 = v6;
    }
    while ( v6 != v4 );
  }
  v8 = 0;
  dword_1A4A10 = dword_1A4A0C;
  dword_1A4A04 = v4;
  s[0] = 0;
  s[1] = 0;
  v89 = 0;
  while ( off_1ABF2C(v8, s) )
  {
    v9 = v89;
    v10 = s[0];
    v11 = v89 & 1;
    if ( !s[0] )
      v10 = "none";
    sub_80664(
      "[sv:dbg:record:init] : device detect [ id(%d) enabled(%hhu) loopback(%hhu) name(%s) type(0x%x) ]",
      v8,
      v89 & 1,
      (v89 >> 3) & 1,
      v10,
      v89 & 0xFF000000);
    if ( v11 && (v9 & 8) == 0 && s[0] )
    {
      v12 = dword_1A4A10;
      if ( dword_1A4A10 >= (unsigned int)dword_1A4A14 )
      {
        v13 = (void *)dword_1A4A0C;
        v14 = dword_1A4A10 - dword_1A4A0C;
        v15 = ((dword_1A4A10 - dword_1A4A0C) >> 2) + 1;
        if ( v15 >= 0x40000000 )
          std::__vector_base_common<true>::__throw_length_error(&dword_1A4A0C);
        v16 = dword_1A4A14 - dword_1A4A0C;
        if ( v15 <= (dword_1A4A14 - dword_1A4A0C) >> 1 )
          v15 = v16 >> 1;
        if ( (unsigned int)v16 >= 0x7FFFFFFC )
          v15 = 0x3FFFFFFF;
        if ( v15 )
        {
          if ( v15 >= 0x40000000 )
            sub_7B270((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
          v17 = (char *)operator new(4 * v15);
        }
        else
        {
          v17 = 0;
        }
        v18 = &v17[4 * (v14 >> 2)];
        *(_DWORD *)v18 = v8;
        v19 = (int)(v18 + 4);
        if ( v14 >= 1 )
          j_memcpy(v17, v13, v14);
        dword_1A4A0C = (int)v17;
        dword_1A4A10 = v19;
        dword_1A4A14 = (int)&v17[4 * v15];
        if ( v13 )
          operator delete(v13);
      }
      else
      {
        *(_DWORD *)dword_1A4A10 = v8;
        dword_1A4A10 = v12 + 4;
      }
      v20 = (unsigned int *)dword_1A4A04;
      if ( dword_1A4A04 >= (unsigned int)dword_1A4A08 )
      {
        sub_83518(&dword_1A4A00, s);
        goto LABEL_12;
      }
      v21 = s[0];
      v22 = strlen(s[0]);
      if ( v22 >= 0xFFFFFFF0 )
        std::__basic_string_common<true>::__throw_length_error(dword_1A4A04);
      v23 = v22;
      if ( v22 >= 0xB )
      {
        v25 = (v22 + 16) & 0xFFFFFFF0;
        v24 = (void *)operator new(v25);
        *v20 = v25 | 1;
        v20[1] = v23;
        v20[2] = (unsigned int)v24;
LABEL_40:
        j_memcpy(v24, v21, v23);
        goto LABEL_41;
      }
      *(_BYTE *)dword_1A4A04 = 2 * v22;
      v24 = (char *)v20 + 1;
      if ( v22 )
        goto LABEL_40;
LABEL_41:
      *((_BYTE *)v24 + v23) = 0;
      dword_1A4A04 = (int)(v20 + 3);
      ++v8;
    }
    else
    {
LABEL_12:
      ++v8;
    }
  }
  v87[4] = v87;
  v90 = s;
  v87[0] = &off_1113F4;
  s[0] = (char *)&off_1113F4;
  v26 = &dword_1A4A0C;
  if ( dword_1A4A00 == dword_1A4A04 || (v26 = (int *)dword_1A4A10, dword_1A4A0C == dword_1A4A10) )
  {
    sub_80664("[sv:inf:record:init] : failed to find microphone", v26);
LABEL_67:
    v2 = 0;
    goto LABEL_68;
  }
  v85[0] = -1;
  v27 = j_opus_encoder_create(48000, 1, 2048, v85);
  dword_1A4A18 = v27;
  if ( !v27 || v85[0] <= -1 )
  {
    sub_80664("[sv:err:record:init] : failed to create encoder (code:%d)", v85[0]);
    goto LABEL_67;
  }
  v84[4] = v84;
  v86 = v85;
  v84[0] = &off_111434;
  v85[0] = &off_111434;
  v28 = j_opus_encoder_ctl(v27, 4002, v73);
  if ( v28 <= -1 )
  {
    sub_80664("[sv:err:record:init] : failed to set bitrate for encoder (code:%d)", v28);
LABEL_83:
    v2 = 0;
    goto LABEL_84;
  }
  v29 = j_opus_encoder_ctl(dword_1A4A18, 4024, 3001);
  if ( v29 <= -1 )
  {
    sub_80664("[sv:err:record:init] : failed to set audiosignal type for encoder (code:%d)", v29);
    goto LABEL_83;
  }
  v30 = j_opus_encoder_ctl(dword_1A4A18, 4010, 10);
  if ( v30 <= -1 )
  {
    sub_80664("[sv:err:record:init] : failed to set complexity for encoder (code:%d)", v30);
    goto LABEL_83;
  }
  v31 = j_opus_encoder_ctl(dword_1A4A18, 4042, 0);
  if ( v31 <= -1 )
  {
    sub_80664("[sv:err:record:init] : failed to enable prediction for encoder (code:%d)", v31);
    goto LABEL_83;
  }
  v32 = j_opus_encoder_ctl(dword_1A4A18, 4036, 16);
  if ( v32 <= -1 )
  {
    sub_80664("[sv:err:record:init] : failed to set lsb depth for encoder (code:%d)", v32);
    goto LABEL_83;
  }
  v33 = j_opus_encoder_ctl(dword_1A4A18, 4022, 1);
  if ( v33 <= -1 )
  {
    sub_80664("[sv:err:record:init] : failed to set count channels for encoder (code:%d)", v33);
    goto LABEL_83;
  }
  v34 = j_opus_encoder_ctl(dword_1A4A18, 4016, 0);
  if ( v34 <= -1 )
  {
    sub_80664("[sv:err:record:init] : failed to set dtx for encoder (code:%d)", v34);
    goto LABEL_83;
  }
  v35 = j_opus_encoder_ctl(dword_1A4A18, 4012, 1);
  if ( v35 <= -1 )
  {
    sub_80664("[sv:err:record:init] : failed to set inband fec for encoder (code:%d)", v35);
    goto LABEL_83;
  }
  v36 = j_opus_encoder_ctl(dword_1A4A18, 4014, 10);
  if ( v36 <= -1 )
  {
    sub_80664("[sv:err:record:init] : failed to set packet loss percent for encoder (code:%d)", v36);
    goto LABEL_83;
  }
  dword_116E18 = -1;
  if ( !sub_825E4() )
    goto LABEL_64;
  v37 = sub_82674();
  v38 = *(unsigned __int8 *)v37;
  v39 = v37[1];
  if ( !(v38 << 31) )
    v39 = v38 >> 1;
  v40 = v39 == 0;
  if ( v39 )
  {
    v39 = dword_1A4A00;
    v40 = dword_1A4A04 == dword_1A4A00;
  }
  if ( v40 )
  {
LABEL_64:
    v60 = dword_116E18;
    v41 = (int (__fastcall *)(int))dword_1ABF30;
    if ( dword_116E18 != -1 )
      goto LABEL_65;
    v42 = -1;
  }
  else
  {
    v59 = 0;
    v60 = 0;
    while ( 1 )
    {
      v61 = v39 + v59;
      v62 = sub_82674();
      if ( sub_82FAC(v61, v62) )
        break;
      v59 += 12;
      ++v60;
      v39 = dword_1A4A00;
      if ( v60 >= -1431655765 * ((dword_1A4A04 - dword_1A4A00) >> 2) )
        goto LABEL_64;
    }
    dword_116E18 = v60;
    v41 = (int (__fastcall *)(int))dword_1ABF30;
LABEL_65:
    v42 = *(_DWORD *)(dword_1A4A0C + 4 * v60);
  }
  v45 = v41(v42);
  v46 = dword_116E18;
  if ( v45 )
  {
    v45 = 1;
  }
  else if ( dword_116E18 != -1 )
  {
    dword_116E18 = -1;
    v47 = ((int (__fastcall *)(int))dword_1ABF30)(-1);
    v46 = dword_116E18;
    v45 = v47 != 0;
  }
  if ( v45 )
  {
    if ( v46 == -1 )
    {
      v48 = dword_1A4A0C;
      if ( dword_1A4A10 != dword_1A4A0C )
      {
        v49 = 0;
        while ( 1 )
        {
          v50 = *(_DWORD *)(v48 + 4 * v49);
          if ( v50 == off_1ABF34() )
            break;
          ++v49;
          v48 = dword_1A4A0C;
          if ( v49 >= (dword_1A4A10 - dword_1A4A0C) >> 2 )
            goto LABEL_103;
        }
        dword_116E18 = v49;
      }
    }
  }
LABEL_103:
  v81 = v80;
  v80[0] = &off_111474;
  sub_82F58(v82, v80);
  if ( v80 == v81 )
  {
    v51 = 4;
LABEL_107:
    (*(void (**)(void))(*v81 + 4 * v51))();
  }
  else if ( v81 )
  {
    v51 = 5;
    goto LABEL_107;
  }
  v52 = v45 == 0;
  if ( v45 )
    v52 = dword_116E18 == -1;
  if ( v52 )
  {
    v53 = off_1ABF0C();
    sub_80664("[sv:err:record:init] : failed to init device (code:%d)", v53);
LABEL_121:
    v2 = 0;
    goto LABEL_153;
  }
  if ( !sub_825E4() )
  {
    std::string::basic_string(&v74, dword_1A4A00 + 12 * dword_116E18, v55, v56);
    sub_826C8(&v74);
    if ( (unsigned __int8)v74 << 31 )
      operator delete(v75);
  }
  dword_1A4A1C = off_1ABF3C(48000, 1, 0x8000, 0, 0);
  if ( !dword_1A4A1C )
  {
    v58 = off_1ABF0C();
    sub_80664("[sv:err:record:init] : failed to create record stream (code:%d)", v58);
    goto LABEL_121;
  }
  v77 = v76;
  v76[0] = &off_1114B4;
  sub_82F58(v78, v76);
  if ( v76 == v77 )
  {
    v57 = 4;
LABEL_126:
    (*(void (**)(void))(*v77 + 4 * v57))();
  }
  else if ( v77 )
  {
    v57 = 5;
    goto LABEL_126;
  }
  v63 = off_1ABEF0(48000, 1, 0, -1, 0);
  dword_1A4A20 = v63;
  if ( v63 )
  {
    off_1ABF40(v63, 2, 1082130432);
    if ( !sub_825E4() )
    {
      sub_82614(1);
      sub_826B0(1);
      sub_826BC(75);
    }
    v64 = v90;
    v90 = 0;
    if ( s == v64 )
    {
      v65 = 4;
LABEL_135:
      (*(void (**)(void))&(*v64)[4 * v65])();
    }
    else if ( v64 )
    {
      v65 = 5;
      goto LABEL_135;
    }
    v67 = v86;
    v86 = 0;
    if ( v85 == v67 )
    {
      v68 = 4;
LABEL_140:
      (*(void (**)(void))(*v67 + 4 * v68))();
    }
    else if ( v67 )
    {
      v68 = 5;
      goto LABEL_140;
    }
    v69 = v83;
    v83 = 0;
    if ( v82 == v69 )
    {
      v70 = 4;
LABEL_145:
      (*(void (**)(void))(*(_DWORD *)v69 + 4 * v70))();
    }
    else if ( v69 )
    {
      v70 = 5;
      goto LABEL_145;
    }
    v71 = v79;
    v79 = 0;
    if ( v78 == v71 )
    {
      v72 = 4;
LABEL_150:
      (*(void (**)(void))(*(_DWORD *)v71 + 4 * v72))();
    }
    else if ( v71 )
    {
      v72 = 5;
      goto LABEL_150;
    }
    sub_80664("[sv:dbg:record:init] : module initialized");
    byte_1A49FC = 1;
    sub_8303C();
  }
  else
  {
    v66 = off_1ABF0C();
    sub_80664("[sv:err:record:init] : failed to create check stream (code:%d)", v66);
  }
  sub_830E8(v78);
  v2 = v63 != 0;
LABEL_153:
  sub_830E8(v82);
LABEL_84:
  if ( v86 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v86 + 24))(v86);
    if ( v85 == v86 )
    {
      v44 = 4;
LABEL_89:
      (*(void (**)(void))(*v86 + 4 * v44))();
    }
    else if ( v86 )
    {
      v44 = 5;
      goto LABEL_89;
    }
  }
LABEL_68:
  if ( v90 )
  {
    (*((void (__fastcall **)(char **))*v90 + 6))(v90);
    if ( s == v90 )
    {
      v43 = 4;
LABEL_73:
      (*(void (**)(void))&(*v90)[4 * v43])();
    }
    else if ( v90 )
    {
      v43 = 5;
      goto LABEL_73;
    }
  }
  return v2;
}


// ======================================================================
