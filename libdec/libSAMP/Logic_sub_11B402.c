// ADDR: 0x11a38c
// SYMBOL: sub_11A38C
int __fastcall sub_11A38C(int a1, unsigned int a2, int a3)
{
  unsigned __int8 *v6; // r10
  unsigned int v7; // r1
  int v8; // r9
  unsigned int v9; // r0
  unsigned int *v10; // r9
  unsigned int v11; // t1
  int v12; // r1
  double v13; // d16
  const char *v14; // r3
  std::error_code *v15; // r2
  unsigned int v16; // r0
  int v17; // r1
  int v18; // r11
  const char *v19; // r6
  size_t v20; // r0
  unsigned int v21; // r1
  unsigned int v22; // r2
  int v23; // r0
  int v24; // r0
  int v25; // r2
  int v26; // r1
  int v27; // r0
  int v28; // r6
  const char *v29; // r0
  int v30; // r1
  char v31; // r0
  int v32; // r2
  __int64 v33; // kr00_8
  int v34; // r2
  unsigned __int8 *v35; // r0
  int v36; // r5
  int v37; // r0
  char *v38; // r0
  const char *v39; // r1
  int v40; // r0
  int v42; // [sp+8h] [bp-30h]
  unsigned int v43; // [sp+Ch] [bp-2Ch]
  double v44; // [sp+10h] [bp-28h] BYREF
  int v45; // [sp+18h] [bp-20h]

  if ( a2 < 0x66CD )
  {
    v6 = (unsigned __int8 *)(*(_DWORD *)(a1 + 64) + 12 * a2);
    v7 = *v6;
    v8 = *(_DWORD *)(a1 + 64) + 12 * a2;
    v11 = *(_DWORD *)(v8 + 4);
    v10 = (unsigned int *)(v8 + 4);
    v9 = v11;
    if ( !(v7 << 31) )
      v9 = v7 >> 1;
    if ( v9 )
    {
      _android_log_print(3, "AXL", "Model %d support redirect", a2);
      sub_11A2E0((int)&v44, v12, v6);
      if ( *(unsigned __int8 *)(a1 + 68) << 31 )
        operator delete(*(void **)(a1 + 76));
      v13 = v44;
      *(_DWORD *)(a1 + 76) = v45;
      *(double *)(a1 + 68) = v13;
      v14 = *(const char **)(a1 + 76);
      if ( !(*(unsigned __int8 *)(a1 + 68) << 31) )
        v14 = (const char *)(a1 + 69);
      _android_log_print(3, "AXL", "modloader: direct load resource %d from %s", a2, v14);
      v16 = std::__fs::filesystem::__file_size((std::__fs::filesystem *)(a1 + 68), 0, v15);
      v42 = v17;
      v43 = v16;
      v18 = *(_DWORD *)(dword_23DF24 + 6782424);
      v19 = (const char *)((int (*)(void))sub_1273F0)();
      v20 = strlen(v19);
      v21 = *v6;
      v22 = *v10;
      if ( !(v21 << 31) )
        v22 = v21 >> 1;
      if ( v20 != v22 || std::string::compare(v6, 0, -1, v19, v20) )
      {
        if ( *(_DWORD *)(((int (*)(void))sub_1273F0)() + 44) != -1 )
        {
          v23 = ((int (*)(void))sub_1273F0)();
          if ( dword_23DF24
            && dword_23DF24 != -2923821
            && (v23 = ((int (__fastcall *)(_DWORD))(dword_23DF24 + 2923821))(*(_DWORD *)(v23 + 44))) != 0 )
          {
            v24 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 64)
                                      + 6 * *(unsigned __int16 *)((char *)&off_73A58 + *(_DWORD *)(a1 + 64))
                                      + 315792);
            v25 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 64)
                                      + 6 * *(unsigned __int16 *)((char *)&off_73A58 + *(_DWORD *)(a1 + 64))
                                      + 315794);
            v26 = v18 + 20 * a2;
            *(_BYTE *)(v26 + 7) = *(_BYTE *)(*(_DWORD *)(a1 + 64)
                                           + 6 * *(unsigned __int16 *)((char *)&off_73A58 + *(_DWORD *)(a1 + 64))
                                           + 315796);
            *(_DWORD *)(v26 + 8) = v24;
            *(_DWORD *)(v26 + 12) = v25;
          }
          else
          {
            v27 = sub_1273F0(v23);
            v28 = *(_DWORD *)(v27 + 44);
            v29 = (const char *)sub_1273F0(v27);
            _android_log_print(6, "AXL", "modloader: Invalid stream handle %d for %s", v28, v29);
          }
        }
        v30 = v18 + 20 * a2;
        v31 = *(_BYTE *)(v30 + 7);
        if ( v31 )
        {
          v32 = *(_DWORD *)(a1 + 64);
          v33 = *(_QWORD *)(v30 + 8);
          *(_WORD *)((char *)&off_73A58 + v32) = a2;
          v34 = v32 + 6 * a2;
          *(_WORD *)(v34 + 315792) = v33;
          v34 += 315792;
          *(_BYTE *)(v34 + 4) = v31;
          *(_WORD *)(v34 + 2) = WORD2(v33);
        }
      }
      *(_BYTE *)(sub_1273F0(v43 >> 11) + 40) = 1;
      a3 = 0;
      v35 = (unsigned __int8 *)*((_DWORD *)v6 + 2);
      if ( !(*v6 << 31) )
        v35 = v6 + 1;
      v36 = sub_11A5B4(v35, 0);
      v37 = sub_1273F0(v36);
      *(_DWORD *)(v37 + 44) = v36;
      v38 = (char *)sub_1273F0(v37);
      v39 = (const char *)*((_DWORD *)v6 + 2);
      if ( !(*v6 << 31) )
        v39 = (const char *)(v6 + 1);
      strncpy(v38, v39, 0x28u);
      v40 = v18 + 20 * a2;
      *(_DWORD *)(v40 + 8) = 0;
      *(_DWORD *)(v40 + 12) = (v43 >> 11) | (v42 << 21);
      *(_BYTE *)(v40 + 7) = 0;
    }
  }
  else
  {
    _android_log_print(6, "AXL", "modloader: invalid model id %d", a2);
  }
  return a3;
}


// ======================================================================
