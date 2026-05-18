
// Address: 0x18c62c
// Original: j__ZN11CObjectData13SetObjectDataEiR7CObject
// Demangled: CObjectData::SetObjectData(int,CObject &)
// attributes: thunk
int __fastcall CObjectData::SetObjectData(CObjectData *this, int a2, CObject *a3)
{
  return _ZN11CObjectData13SetObjectDataEiR7CObject(this, a2, a3);
}


// ============================================================

// Address: 0x1a17a0
// Original: j__ZN11CObjectData10InitialiseEPcb
// Demangled: CObjectData::Initialise(char *,bool)
// attributes: thunk
int __fastcall CObjectData::Initialise(CObjectData *this, char *a2, bool a3)
{
  return _ZN11CObjectData10InitialiseEPcb(this, a2, a3);
}


// ============================================================

// Address: 0x456008
// Original: _ZN11CObjectData13SetObjectDataEiR7CObject
// Demangled: CObjectData::SetObjectData(int,CObject &)
void *__fastcall CObjectData::SetObjectData(CObjectData *this, int a2, CObject *a3)
{
  int v3; // r2
  int v4; // r5
  int v5; // r4
  char *v6; // r2
  unsigned int v7; // lr
  int v8; // r2
  void *result; // r0
  int v10; // r2
  float v11; // s2

  v3 = *(__int16 *)(LODWORD(CModelInfo::ms_modelInfoPtrs[(_DWORD)this]) + 38);
  if ( v3 == -1 )
  {
    *(_DWORD *)(a2 + 144) = 1203982208;
    *(_DWORD *)(a2 + 148) = 1203982208;
    result = &CObjectData::ms_aObjectInfo;
    *(_DWORD *)(a2 + 68) = *(_DWORD *)(a2 + 68) & 0xFF7FFFF1 | (unsigned int)&unk_80000C;
    *(_DWORD *)(a2 + 356) = &CObjectData::ms_aObjectInfo;
  }
  else
  {
    v4 = 5 * v3;
    v5 = 80 * v3;
    v6 = (char *)&CObjectData::ms_aObjectInfo + 80 * v3;
    *(_DWORD *)(a2 + 356) = v6;
    *(_DWORD *)(a2 + 144) = *(_DWORD *)((char *)&CObjectData::ms_aObjectInfo + v5);
    *(_DWORD *)(a2 + 148) = *((_DWORD *)v6 + 1);
    *(_DWORD *)(a2 + 156) = *((_DWORD *)v6 + 2);
    *(_DWORD *)(a2 + 160) = *((_DWORD *)v6 + 3);
    *(_DWORD *)(a2 + 164) = *((_DWORD *)v6 + 4);
    *(_BYTE *)(a2 + 328) = v6[28];
    if ( *(float *)v6 >= 99998.0 )
    {
      v7 = *(_DWORD *)(a2 + 68) & 0xFFFFFFF1;
      *(_DWORD *)(a2 + 68) = v7 | 0xC;
      if ( !v6[28] )
        *(_DWORD *)(a2 + 68) = v7 | (unsigned int)&unk_80000C;
    }
    switch ( *((_BYTE *)&CObjectData::ms_aObjectInfo + 16 * v4 + 29) )
    {
      case 6:
        v8 = *(_DWORD *)(a2 + 324);
        *(_DWORD *)(a2 + 68) |= 0x20u;
        result = (void *)(v8 & 0xFFFF3FFF);
        *(_DWORD *)(a2 + 324) = v8 & 0xFFFF3FFF;
        break;
      case 7:
        v10 = *(_DWORD *)(a2 + 324);
        *(_DWORD *)(a2 + 68) |= 0x2Cu;
        result = &stderr + 1;
        *(_DWORD *)(a2 + 324) = v10 & 0xFFFF3FFF | 0x4000;
        break;
      case 8:
        *(_DWORD *)(a2 + 68) |= 0x40u;
        v11 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[(_DWORD)this]) + 44) + 8);
        result = 0;
        *(_DWORD *)(a2 + 168) = 0;
        *(_DWORD *)(a2 + 172) = 0;
        *(float *)(a2 + 176) = v11 * 0.8;
        break;
      case 9:
        result = (void *)(*(_DWORD *)(a2 + 68) & 0xFFFFFF7D | 0x80);
        *(_DWORD *)(a2 + 68) = result;
        break;
    }
  }
  return result;
}


// ============================================================

// Address: 0x468590
// Original: _ZN11CObjectData10InitialiseEPcb
// Demangled: CObjectData::Initialise(char *,bool)
int __fastcall CObjectData::Initialise(CObjectData *this, char *a2, bool a3)
{
  const char *v4; // r2
  CFileLoader *v5; // r4
  unsigned int v6; // r1
  const char *Line; // r0
  unsigned int v8; // r1
  unsigned int v9; // r9
  char *v10; // r6
  char *v11; // r6
  int *v12; // r2
  int v13; // r0
  char *v14; // r8
  char v15; // r0
  int ModelInfo; // r0
  _BYTE *v17; // r11
  float v18; // s0
  unsigned __int8 *v19; // r2
  unsigned __int8 *v20; // r3
  float v21; // s2
  int v22; // r6
  bool v23; // zf
  float *v24; // r5
  int v25; // r12
  char *i; // lr
  bool v27; // zf
  _DWORD *v29; // [sp+5Ch] [bp-2C4h]
  float *v30; // [sp+60h] [bp-2C0h]
  float *v31; // [sp+64h] [bp-2BCh]
  float *v32; // [sp+68h] [bp-2B8h]
  float *v33; // [sp+6Ch] [bp-2B4h]
  float *v34; // [sp+70h] [bp-2B0h]
  _DWORD *v35; // [sp+74h] [bp-2ACh]
  float *v36; // [sp+78h] [bp-2A8h]
  float *v37; // [sp+7Ch] [bp-2A4h]
  float *v38; // [sp+80h] [bp-2A0h]
  unsigned __int8 *v39; // [sp+84h] [bp-29Ch]
  char *v40; // [sp+88h] [bp-298h]
  float *v41; // [sp+90h] [bp-290h]
  float *v42; // [sp+94h] [bp-28Ch]
  float *v43; // [sp+98h] [bp-288h]
  float *v44; // [sp+B8h] [bp-268h]
  float *v45; // [sp+BCh] [bp-264h]
  int v46; // [sp+C0h] [bp-260h] BYREF
  int v47; // [sp+C4h] [bp-25Ch] BYREF
  int v48; // [sp+C8h] [bp-258h] BYREF
  int v49; // [sp+CCh] [bp-254h] BYREF
  float v50; // [sp+D0h] [bp-250h] BYREF
  int v51; // [sp+D4h] [bp-24Ch] BYREF
  int v52; // [sp+D8h] [bp-248h] BYREF
  char v53[256]; // [sp+DCh] [bp-244h] BYREF
  char v54[256]; // [sp+1DCh] [bp-144h] BYREF
  int v55; // [sp+2DCh] [bp-44h]

  dword_99ED50 = 0;
  flt_99ED54 = 1.0;
  word_99ED58 = 0;
  byte_99ED5A = 2;
  CObjectData::ms_aObjectInfo = 0x47C34F8047C34F80LL;
  unk_99ED44 = 0x3DCCCCCD3F7D70A4LL;
  dword_99ED4C = 1153957758;
  memcpy_0(&unk_99ED8C, &CObjectData::ms_aObjectInfo, 0x50u);
  byte_99EDAA = 0;
  memcpy_0(&unk_99EDDC, &CObjectData::ms_aObjectInfo, 0x50u);
  byte_99EDF9 = 4;
  memcpy_0(&unk_99EE2C, &CObjectData::ms_aObjectInfo, 0x50u);
  word_99EE49 = 4;
  memcpy_0(&unk_99EE7C, &CObjectData::ms_aObjectInfo, 0x50u);
  byte_99EE99 = (unsigned __int8)&byte_5;
  CFileMgr::SetDir((CFileMgr *)&byte_61CD7E, &byte_5);
  v5 = (CFileLoader *)CFileMgr::OpenFile(this, (const char *)&dword_468ACC, v4);
  Line = (const char *)CFileLoader::LoadLine(v5, v6);
  if ( Line )
  {
    v9 = 5;
    v10 = (char *)&CObjectData::ms_aObjectInfo;
    do
    {
      v8 = *(unsigned __int8 *)Line;
      v27 = v8 == 0;
      if ( *Line )
        v27 = v8 == 59;
      if ( v27 )
        goto LABEL_55;
      if ( v8 == 42 )
        break;
      v40 = v10;
      v11 = &v10[80 * v9];
      v39 = (unsigned __int8 *)(v11 + 32);
      *((_QWORD *)v11 + 8) = 0LL;
      *((_QWORD *)v11 + 9) = 0LL;
      *((_QWORD *)v11 + 6) = 0LL;
      *((_QWORD *)v11 + 7) = 0LL;
      *((_QWORD *)v11 + 4) = 0LL;
      *((_QWORD *)v11 + 5) = 0LL;
      *(_QWORD *)v11 = 0LL;
      *((_QWORD *)v11 + 1) = 0LL;
      *((_QWORD *)v11 + 2) = 0LL;
      *((_QWORD *)v11 + 3) = 0LL;
      v29 = v11 + 72;
      v46 = 0;
      v30 = (float *)(v11 + 68);
      v31 = (float *)(v11 + 64);
      v32 = (float *)(v11 + 60);
      v33 = (float *)(v11 + 56);
      v34 = (float *)(v11 + 52);
      v36 = (float *)(v11 + 44);
      v37 = (float *)(v11 + 40);
      v38 = (float *)(v11 + 36);
      v41 = (float *)(v11 + 24);
      v42 = (float *)(v11 + 20);
      v43 = (float *)(v11 + 12);
      v44 = (float *)(v11 + 8);
      v45 = (float *)(v11 + 4);
      sscanf(
        Line,
        "%s %f %f %f %f %f %f %f %d %d %d %d %d %f %f %f %s %f %f %f %f %f %d %d",
        v54,
        v11,
        v11 + 4,
        v11 + 8,
        v11 + 12,
        &v50,
        v11 + 20,
        v11 + 24,
        &v49,
        &v48,
        &v47,
        &v51,
        &v52,
        v11 + 36,
        v11 + 40,
        v11 + 44,
        v53,
        v11 + 52,
        v11 + 56,
        v11 + 60,
        v11 + 64,
        v11 + 68,
        v11 + 72,
        &v46);
      v13 = v52;
      *((_DWORD *)v11 + 12) = 0;
      v11[32] = v13;
      if ( v13 >= 1 )
        *((_DWORD *)v11 + 12) = FxManager_c::FindFxSystemBP((FxManager_c *)&g_fxMan, (CKeyGen *)v53);
      v35 = v11 + 48;
      v14 = (char *)&CObjectData::ms_aObjectInfo + 80 * v9;
      v15 = v49;
      *((float *)v14 + 4) = (float)(*(float *)v11 * 0.008) * (float)(100.0 / v50);
      v14[28] = v15;
      v14[29] = v48;
      v14[30] = v47;
      v14[31] = v51;
      v14[76] = v46;
      ModelInfo = CModelInfo::GetModelInfo((CModelInfo *)v54, 0, v12);
      if ( ModelInfo )
      {
        v8 = (unsigned int)&CObjectData::ms_aObjectInfo;
        v17 = v14 + 30;
        v18 = *(float *)v11;
        v19 = (unsigned __int8 *)(v14 + 29);
        v20 = (unsigned __int8 *)(v14 + 28);
        v21 = CObjectData::ms_aObjectInfo;
        if ( *(float *)v11 == CObjectData::ms_aObjectInfo )
        {
          v8 = (unsigned int)&CObjectData::ms_aObjectInfo;
          if ( *v41 == flt_99ED54 )
          {
            v8 = (unsigned int)&CObjectData::ms_aObjectInfo;
            if ( *v20 == (unsigned __int8)word_99ED58 )
            {
              v8 = (unsigned int)&CObjectData::ms_aObjectInfo;
              v22 = *v19;
              v23 = v22 == HIBYTE(word_99ED58);
              if ( v22 != HIBYTE(word_99ED58) )
              {
                v8 = (unsigned __int8)byte_99EDF9;
                v23 = v22 == (unsigned __int8)byte_99EDF9;
              }
              if ( v23 )
              {
                v8 = (unsigned __int8)*v17;
                if ( v22 == HIBYTE(word_99ED58) )
                {
                  v10 = v40;
                  if ( *v17 )
                  {
                    *(_WORD *)(ModelInfo + 38) = 0;
                  }
                  else
                  {
                    v8 = 1;
                    *(_WORD *)(ModelInfo + 38) = 1;
                  }
                }
                else
                {
                  v10 = v40;
                  if ( *v17 )
                  {
                    *(_WORD *)(ModelInfo + 38) = 2;
                  }
                  else
                  {
                    v8 = 3;
                    *(_WORD *)(ModelInfo + 38) = 3;
                  }
                }
                goto LABEL_55;
              }
            }
          }
        }
        v24 = v43;
        if ( v9 )
        {
          v8 = (unsigned int)&CObjectData::ms_aObjectInfo;
          v25 = 0;
          for ( i = (char *)&unk_99ED64; ; i += 80 )
          {
            if ( v18 == v21 )
            {
              v8 = (unsigned int)v45;
              if ( *v45 == *((float *)i - 9) )
              {
                v8 = (unsigned int)v44;
                if ( *v44 == *((float *)i - 8) && *v24 == *((float *)i - 7) && *((float *)v14 + 4) == *((float *)i - 6) )
                {
                  v8 = (unsigned int)v42;
                  if ( *v42 == *((float *)i - 5) )
                  {
                    v8 = (unsigned int)v41;
                    if ( *v41 == *((float *)i - 4) )
                    {
                      v8 = (unsigned __int8)*(i - 12);
                      v24 = v43;
                      if ( *v20 == v8 )
                      {
                        v8 = (unsigned __int8)*(i - 11);
                        v24 = v43;
                        if ( *v19 == v8 )
                        {
                          v8 = (unsigned __int8)*(i - 10);
                          v24 = v43;
                          if ( (unsigned __int8)*v17 == v8 )
                          {
                            v8 = (unsigned __int8)*(i - 9);
                            v24 = v43;
                            if ( (unsigned __int8)v14[31] == v8 )
                            {
                              v8 = (unsigned __int8)*(i - 8);
                              v24 = v43;
                              if ( *v39 == v8 )
                              {
                                v8 = (unsigned int)v38;
                                if ( *v38 == *((float *)i - 1) )
                                {
                                  v8 = (unsigned int)v37;
                                  if ( *v37 == *(float *)i )
                                  {
                                    v8 = (unsigned int)v36;
                                    if ( *v36 == *((float *)i + 1) )
                                    {
                                      v8 = *((_DWORD *)i + 2);
                                      v24 = v43;
                                      if ( *v35 == v8 )
                                      {
                                        v8 = (unsigned int)v34;
                                        if ( *v34 == *((float *)i + 3) )
                                        {
                                          v8 = (unsigned int)v33;
                                          if ( *v33 == *((float *)i + 4) )
                                          {
                                            v8 = (unsigned int)v32;
                                            if ( *v32 == *((float *)i + 5) )
                                            {
                                              v8 = (unsigned int)v31;
                                              if ( *v31 == *((float *)i + 6) )
                                              {
                                                v8 = (unsigned int)v30;
                                                if ( *v30 == *((float *)i + 7) )
                                                {
                                                  v8 = *((_DWORD *)i + 8);
                                                  v24 = v43;
                                                  if ( *v29 == v8 )
                                                  {
                                                    v8 = (unsigned __int8)i[36];
                                                    v24 = v43;
                                                    if ( (unsigned __int8)v14[76] == v8 )
                                                      break;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if ( ++v25 >= v9 )
              goto LABEL_45;
            v21 = *((float *)i + 10);
          }
          *(_WORD *)(ModelInfo + 38) = v25;
        }
        else
        {
LABEL_45:
          *(_WORD *)(ModelInfo + 38) = v9++;
        }
      }
      v10 = v40;
LABEL_55:
      Line = (const char *)CFileLoader::LoadLine(v5, v8);
    }
    while ( Line );
  }
  CFileMgr::CloseFile(v5, v8);
  return _stack_chk_guard - v55;
}


// ============================================================
