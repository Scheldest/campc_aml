// ADDR: 0xe3f90
// SYMBOL: sub_E3F90
int sub_E3F90()
{
  int v0; // r0

  v0 = std::string::operator=(&dword_23DBF8);
  return sub_E3FE0(v0);
}


// ======================================================================
// ADDR: 0x17be14
// SYMBOL: sub_17BE14
int *__fastcall sub_17BE14(int *a1, int *a2, int a3)
{
  _QWORD *v4; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r0
  int v10; // r6
  int v11; // r0
  int (__fastcall *v12)(int *, int, const char *); // r12
  int v13; // r0
  int (__fastcall *v14)(int *, int, const char *, const char *); // r12
  int v15; // r0
  int (__fastcall *v16)(int *, int, const char *, const char *); // r12
  int v17; // r0
  int (__fastcall *v18)(int *, int, const char *, const char *); // r12
  int v19; // r0
  int (__fastcall *v20)(int *, int, const char *, const char *); // r12
  int v21; // r0
  int (__fastcall *v22)(int *, int, const char *, const char *); // r12
  int v23; // r0
  int (__fastcall *v24)(int *, int, const char *, const char *); // r12
  int v25; // r0
  int (__fastcall *v26)(int *, int, const char *, const char *); // r12
  int v27; // r0
  int (__fastcall *v28)(int *, int, const char *, const char *); // r12
  int v29; // r0
  int (__fastcall *v30)(int *, int, const char *, const char *); // r12
  int v31; // r0
  int (__fastcall *v32)(int *, int, const char *, const char *); // r12
  int v33; // r0
  int (__fastcall *v34)(int *, int, const char *, const char *); // r12
  int v35; // r0
  int (__fastcall *v36)(int *, int, const char *, const char *); // r12
  int v37; // r0
  int v38; // r1
  int v39; // r0
  int (__fastcall *v40)(int *, int, const char *, const char *); // r12
  int v41; // r0
  int (__fastcall *v42)(int *, int, const char *); // r12
  int v43; // r0
  int v44; // r1
  int v45; // r0
  int v46; // r1

  v4 = a1 + 19;
  *v4 = 0LL;
  v4[1] = 0LL;
  v4 += 2;
  *v4 = 0LL;
  v4[1] = 0LL;
  v4 += 2;
  *v4 = 0LL;
  v4[1] = 0LL;
  v4 = (_QWORD *)((char *)v4 + 10);
  *v4 = 0LL;
  v4[1] = 0LL;
  v7 = (*(int (__fastcall **)(int *, int))(*a2 + 84))(a2, a3);
  v8 = *a2;
  *a1 = v7;
  v9 = (*(int (__fastcall **)(int *, int))(v8 + 124))(a2, a3);
  if ( v9 )
  {
    v10 = v9;
    v11 = (*(int (__fastcall **)(int *, int, const char *))(*a2 + 132))(a2, v9, "SetInputLayout");
    v12 = *(int (__fastcall **)(int *, int, const char *))(*a2 + 132);
    a1[1] = v11;
    v13 = v12(a2, v10, "InitGui");
    v14 = *(int (__fastcall **)(int *, int, const char *, const char *))(*a2 + 132);
    a1[2] = v13;
    v15 = v14(a2, v10, "setBinderName", "(I[B)V");
    v16 = *(int (__fastcall **)(int *, int, const char *, const char *))(*a2 + 132);
    a1[3] = v15;
    v17 = v16(a2, v10, "setBinderState", "(IZ)V");
    v18 = *(int (__fastcall **)(int *, int, const char *, const char *))(*a2 + 132);
    a1[4] = v17;
    v19 = v18(a2, v10, "setUIElementVisible", "(IZZ)V");
    v20 = *(int (__fastcall **)(int *, int, const char *, const char *))(*a2 + 132);
    a1[5] = v19;
    v21 = v20(a2, v10, "showPlayerDialog", "(II[B[B[B[B)V");
    v22 = *(int (__fastcall **)(int *, int, const char *, const char *))(*a2 + 132);
    a1[6] = v21;
    v23 = v22(a2, v10, "destroyDialog", "()V");
    v24 = *(int (__fastcall **)(int *, int, const char *, const char *))(*a2 + 132);
    a1[7] = v23;
    v25 = v24(a2, v10, "addSliderToAzVoiceSettings", "(III[B)I");
    v26 = *(int (__fastcall **)(int *, int, const char *, const char *))(*a2 + 132);
    a1[8] = v25;
    v27 = v26(a2, v10, "removeAllSlidersFormPlayersVoiceSettings", "()V");
    v28 = *(int (__fastcall **)(int *, int, const char *, const char *))(*a2 + 132);
    a1[9] = v27;
    v29 = v28(a2, v10, "addSliderToAzVoicePlayersSettings", "(III[BI)V");
    v30 = *(int (__fastcall **)(int *, int, const char *, const char *))(*a2 + 132);
    a1[10] = v29;
    v31 = v30(a2, v10, "removeSliderFromAzVoiceSettingsBySliderId", "(I)V");
    v32 = *(int (__fastcall **)(int *, int, const char *, const char *))(*a2 + 132);
    a1[11] = v31;
    v33 = v32(a2, v10, "sendFrontendMessage", "(IILjava/lang/String;)V");
    v34 = *(int (__fastcall **)(int *, int, const char *, const char *))(*a2 + 132);
    a1[12] = v33;
    v35 = v34(a2, v10, "exitGame", "()V");
    v36 = *(int (__fastcall **)(int *, int, const char *, const char *))(*a2 + 132);
    a1[13] = v35;
    v37 = v36(a2, v10, "addKeyboardHistory", "([B)V");
    v38 = *a2;
    a1[14] = v37;
    v39 = (*(int (__fastcall **)(int *, int, const char *, const char *))(v38 + 132))(
            a2,
            v10,
            "setChatPageSize",
            "(I)V");
    v40 = *(int (__fastcall **)(int *, int, const char *, const char *))(*a2 + 132);
    a1[15] = v39;
    v41 = v40(a2, v10, "setChatFontSize", "(F)V");
    v42 = *(int (__fastcall **)(int *, int, const char *))(*a2 + 132);
    a1[16] = v41;
    v43 = v42(a2, v10, "setChatPrintTimestamp");
    v44 = *a2;
    a1[17] = v43;
    v45 = (*(int (__fastcall **)(int *, int, const char *, const char *))(v44 + 132))(
            a2,
            v10,
            "setAutocompleteState",
            "(Z)V");
    v46 = *a2;
    a1[18] = v45;
    (*(void (__fastcall **)(int *, int))(v46 + 92))(a2, v10);
  }
  else
  {
    _android_log_print(4, "AXL", "nvEventClass null");
  }
  return a1;
}


// ======================================================================
