// ADDR: 0x68984
// SYMBOL: sub_68984
int *__fastcall sub_68984(int *a1, int a2, int a3, int a4, int64x2_t *a5)
{
  int v9; // r0
  int64x2_t *v10; // r6
  bool v11; // zf
  int v13; // r0
  int (__fastcall *v14)(int, int); // r2
  int v15; // r0
  int (__fastcall *v16)(int, int64x2_t *); // r2
  int v17; // r0
  int (__fastcall *v18)(int, int); // r2
  int v19; // r0
  int v20; // r8
  int v21; // r0
  int v22; // r6
  int v23; // r0
  int (__fastcall *v24)(int, int, const char *, const char *); // r4
  int v25; // r0
  int (__fastcall *v26)(int, int, const char *, const char *); // r4
  int v27; // r0
  int (__fastcall *v28)(int, int, const char *, const char *); // r4
  int v29; // r0
  int (__fastcall *v30)(int, int, const char *); // r4
  int v31; // r0
  int (__fastcall *v32)(int, int, const char *, const char *); // r4
  int v33; // r0
  int (__fastcall *v34)(int, int, const char *, const char *); // r4
  int v35; // r0
  int (__fastcall *v36)(int, int, const char *); // r4
  int v37; // r0
  int (__fastcall *v38)(int, int, const char *, const char *); // r4
  int v39; // r0
  int (__fastcall *v40)(int, int, const char *, const char *); // r4
  int v41; // r0
  int (__fastcall *v42)(int, int, const char *, const char *); // r4
  int v43; // r0
  int (__fastcall *v44)(int, int, const char *, const char *); // r4
  int v45; // r0
  int (__fastcall *v46)(int, int, const char *, const char *); // r4
  int v47; // r0
  int (__fastcall *v48)(int, int, const char *, const char *); // r12
  int v49; // r0
  int (__fastcall *v50)(int, int, const char *, const char *); // r12
  int v51; // r0
  int (__fastcall *v52)(int, int, const char *, const char *); // r12
  int v53; // r0
  int (__fastcall *v54)(int, int, const char *, const char *); // r12
  int v55; // r0
  int (__fastcall *v56)(int, int, const char *, const char *); // r4
  int v57; // r0
  int (__fastcall *v58)(int, int, const char *, const char *); // r4
  int v59; // r0
  void (__fastcall *v60)(int, int); // r2
  int v61; // r0
  const char *v62; // r4
  int v63; // r0
  __int64 v64; // [sp+8h] [bp-38h] BYREF
  _BYTE v65[13]; // [sp+10h] [bp-30h] BYREF

  v64 = unk_50DA0;
  qmemcpy(v65, " 34=z0;,;ttZ", 12);
  v9 = (unsigned __int8)byte_1A41FC;
  __dmb(0xBu);
  if ( !(v9 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A41FC) )
  {
    sub_6ABD4(&xmmword_1A41E5, &v64);
    _cxa_atexit((void (*)(void *))sub_60BE6, &xmmword_1A41E5, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A41FC);
  }
  v10 = &xmmword_1A41E5;
  sub_60BF6(&xmmword_1A41E5);
  _android_log_print(4, "SAMP_ORIG", (const char *)&xmmword_1A41E5);
  if ( a3 )
  {
    v11 = a4 == 0;
    if ( a4 )
    {
      v10 = a5;
      v11 = a5 == 0;
    }
    if ( !v11 )
    {
      v13 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 84))(a2, a3);
      v14 = *(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 84);
      *a1 = v13;
      v15 = v14(a2, a4);
      v16 = *(int (__fastcall **)(int, int64x2_t *))(*(_DWORD *)a2 + 84);
      a1[1] = v15;
      v17 = v16(a2, v10);
      v18 = *(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 124);
      a1[2] = v17;
      v19 = v18(a2, a3);
      if ( v19 )
      {
        v20 = v19;
        v21 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 124))(a2, a4);
        if ( v21 )
        {
          v22 = v21;
          v23 = (*(int (__fastcall **)(int, int, const char *))(*(_DWORD *)a2 + 132))(a2, v21, "showVoice");
          v24 = *(int (__fastcall **)(int, int, const char *, const char *))(*(_DWORD *)a2 + 132);
          a1[4] = v23;
          v25 = v24(a2, v22, "showButtonPanel", "(Z)V");
          v26 = *(int (__fastcall **)(int, int, const char *, const char *))(*(_DWORD *)a2 + 132);
          a1[3] = v25;
          v27 = v26(a2, v22, "showKeyboard", "(Z)V");
          v28 = *(int (__fastcall **)(int, int, const char *, const char *))(*(_DWORD *)a2 + 132);
          a1[5] = v27;
          v29 = v28(a2, v22, "showWantedLevel", "(Z)V");
          v30 = *(int (__fastcall **)(int, int, const char *))(*(_DWORD *)a2 + 132);
          a1[6] = v29;
          v31 = v30(a2, v22, "setWantedLevel");
          v32 = *(int (__fastcall **)(int, int, const char *, const char *))(*(_DWORD *)a2 + 132);
          a1[7] = v31;
          v33 = v32(
                  a2,
                  v22,
                  "showDialog",
                  "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          v34 = *(int (__fastcall **)(int, int, const char *, const char *))(*(_DWORD *)a2 + 132);
          a1[8] = v33;
          v35 = v34(a2, v22, "showDialogWithoutReset", "(Z)V");
          v36 = *(int (__fastcall **)(int, int, const char *))(*(_DWORD *)a2 + 132);
          a1[9] = v35;
          v37 = v36(a2, v22, "hideLoadingScreen");
          v38 = *(int (__fastcall **)(int, int, const char *, const char *))(*(_DWORD *)a2 + 132);
          a1[10] = v37;
          v39 = v38(a2, v22, "showScoreboard", "(Z)V");
          v40 = *(int (__fastcall **)(int, int, const char *, const char *))(*(_DWORD *)a2 + 132);
          a1[11] = v39;
          v41 = v40(a2, v22, "setScoreboardStats", "(Ljava/lang/String;I)V");
          v42 = *(int (__fastcall **)(int, int, const char *, const char *))(*(_DWORD *)a2 + 132);
          a1[12] = v41;
          v43 = v42(a2, v22, "addScoreboardPlayer", "(ILjava/lang/String;IILjava/lang/String;)V");
          v44 = *(int (__fastcall **)(int, int, const char *, const char *))(*(_DWORD *)a2 + 132);
          a1[13] = v43;
          v45 = v44(a2, v22, "clearScoreboardStats", "()V");
          v46 = *(int (__fastcall **)(int, int, const char *, const char *))(*(_DWORD *)a2 + 132);
          a1[14] = v45;
          v47 = v46(a2, v22, "saveAspectRatioToPrefsFromNative", "(I)V");
          v48 = *(int (__fastcall **)(int, int, const char *, const char *))(*(_DWORD *)a2 + 132);
          a1[15] = v47;
          v49 = v48(a2, v22, "updateVoiceButtonPosition", "(II)V");
          v50 = *(int (__fastcall **)(int, int, const char *, const char *))(*(_DWORD *)a2 + 132);
          a1[16] = v49;
          v51 = v50(a2, v22, "setVoiceButtonSize", "(II)V");
          v52 = *(int (__fastcall **)(int, int, const char *, const char *))(*(_DWORD *)a2 + 132);
          a1[17] = v51;
          v53 = v52(a2, v22, "showSettingsMenu", "(Z)V");
          v54 = *(int (__fastcall **)(int, int, const char *, const char *))(*(_DWORD *)a2 + 132);
          a1[19] = v53;
          v55 = v54(a2, v22, "showCustomMenu", "(Z)V");
          v56 = *(int (__fastcall **)(int, int, const char *, const char *))(*(_DWORD *)a2 + 132);
          a1[20] = v55;
          v57 = v56(a2, v22, "setButtonPanelColor", "(Ljava/lang/String;)V");
          v58 = *(int (__fastcall **)(int, int, const char *, const char *))(*(_DWORD *)a2 + 132);
          a1[24] = v57;
          v59 = v58(a2, v22, "showeditobject", "(Z)V");
          v60 = *(void (__fastcall **)(int, int))(*(_DWORD *)a2 + 92);
          a1[22] = v59;
          v60(a2, v20);
          (*(void (__fastcall **)(int, int))(*(_DWORD *)a2 + 92))(a2, v22);
          return a1;
        }
        v64 = unk_50DD0;
        qmemcpy(v65, "z45.z<5/4>Z", 11);
        v63 = (unsigned __int8)byte_1A4230;
        __dmb(0xBu);
        if ( !(v63 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A4230) )
        {
          sub_6AC92(&unk_1A421C, &v64);
          _cxa_atexit((void (*)(void *))sub_6ACE0, &unk_1A421C, &off_110560);
          j___cxa_guard_release((__guard *)&byte_1A4230);
        }
        v62 = (const char *)&unk_1A421C;
        sub_6AE8C(&unk_1A421C);
      }
      else
      {
        v64 = unk_50DB8;
        qmemcpy(v65, "))z45.z<5/4>Z", sizeof(v65));
        v61 = (unsigned __int8)byte_1A4218;
        __dmb(0xBu);
        if ( !(v61 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A4218) )
        {
          sub_6AC26(&unk_1A4200, &v64);
          _cxa_atexit((void (*)(void *))sub_6AC7C, &unk_1A4200, &off_110560);
          j___cxa_guard_release((__guard *)&byte_1A4218);
        }
        v62 = (const char *)&unk_1A4200;
        sub_6AE46(&unk_1A4200);
      }
      _android_log_print(4, "SAMP_ORIG", v62);
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x6acfe
// SYMBOL: sub_6ACFE
_BYTE *__fastcall sub_6ACFE(_BYTE *result, _BYTE *a2)
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
  result[35] = a2[35];
  result[36] = a2[36];
  result[37] = a2[37];
  result[38] = a2[38];
  result[39] = a2[39];
  result[40] = a2[40];
  result[41] = a2[41];
  result[42] = a2[42];
  result[43] = a2[43];
  result[44] = a2[44];
  result[45] = a2[45];
  result[46] = a2[46];
  return result;
}


// ======================================================================
