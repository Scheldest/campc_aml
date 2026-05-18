
// Address: 0x197f30
// Original: j__ZN14CEntityScanner22ScanForEntitiesInRangeEiRK4CPed
// Demangled: CEntityScanner::ScanForEntitiesInRange(int,CPed const&)
// attributes: thunk
int __fastcall CEntityScanner::ScanForEntitiesInRange(CEntity **this, int a2, const CPed *a3)
{
  return _ZN14CEntityScanner22ScanForEntitiesInRangeEiRK4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x4ba630
// Original: _ZN14CEntityScannerC2Ev
// Demangled: CEntityScanner::CEntityScanner(void)
void __fastcall CEntityScanner::CEntityScanner(CEntityScanner *this)
{
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 60) = 0LL;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *(_DWORD *)this = &off_669080;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *((_DWORD *)this + 2) = 16;
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
}


// ============================================================

// Address: 0x4ba66c
// Original: _ZN14CEntityScanner5ClearEv
// Demangled: CEntityScanner::Clear(void)
CEntity *__fastcall CEntityScanner::Clear(CEntity **this)
{
  CEntity **v2; // r6
  int i; // r4
  CEntity *v4; // r0
  CEntity *result; // r0
  CEntity **v6; // r8
  CEntity *v7; // t1

  v2 = this + 3;
  for ( i = 0; i != 16; ++i )
  {
    v4 = v2[i];
    if ( v4 )
    {
      CEntity::CleanUpOldReference(v4, &v2[i]);
      v2[i] = 0;
    }
  }
  v7 = this[19];
  v6 = this + 19;
  result = v7;
  if ( v7 )
  {
    CEntity::CleanUpOldReference(result, v6);
    result = 0;
    *v6 = 0;
  }
  return result;
}


// ============================================================

// Address: 0x4ba6b0
// Original: _ZN14CEntityScanner22ScanForEntitiesInRangeEiRK4CPed
// Demangled: CEntityScanner::ScanForEntitiesInRange(int,CPed const&)
int __fastcall CEntityScanner::ScanForEntitiesInRange(CEntity **this, int a2, const CPed *a3)
{
  float32x2_t v3; // d0
  float32x2_t v4; // d1
  CEntity **v5; // r4
  bool v8; // cc
  __int64 v9; // r0
  CEntity **v10; // r10
  int i; // r5
  CEntity *v12; // r0
  CEntity *v13; // r0
  int v14; // r0
  int v15; // r1
  float v16; // s16
  float *v17; // r8
  float v18; // s18
  float v19; // s20
  float v20; // r6
  float v21; // r0
  int v22; // r5
  int v23; // r1
  int v24; // r0
  int v25; // r6
  int v26; // s0
  unsigned __int16 v27; // r0
  CEntity **v28; // r3
  _BOOL4 v29; // r4
  float32x2_t *v30; // r12
  _DWORD *v31; // lr
  _DWORD *v32; // r11
  int v33; // r6
  int v34; // r2
  int v35; // r2
  __int64 **v36; // r2
  __int64 *v37; // r9
  __int64 v38; // kr00_8
  bool v39; // zf
  int v40; // r3
  int v41; // r5
  float32x2_t v42; // d16
  float32x2_t v43; // d3
  float v44; // s4
  CEntity **v45; // r4
  int v46; // r5
  float v47; // r12
  __int64 *v48; // r8
  int v49; // r5
  float v50; // r3
  int v51; // r3
  _DWORD *v52; // r11
  _DWORD *v53; // r10
  CEntity **v54; // lr
  int v55; // t1
  CEntity **v57; // [sp+0h] [bp-140h]
  int v58; // [sp+20h] [bp-120h]
  int v59; // [sp+24h] [bp-11Ch]
  int v60; // [sp+48h] [bp-F8h]
  int v61; // [sp+58h] [bp-E8h]
  int v62; // [sp+60h] [bp-E0h]
  _DWORD *v63; // [sp+64h] [bp-DCh]
  _DWORD *v64; // [sp+68h] [bp-D8h]
  float32x2_t *v65; // [sp+6Ch] [bp-D4h]
  float *v66; // [sp+70h] [bp-D0h]
  CEntity **v67; // [sp+74h] [bp-CCh]
  _DWORD *v68; // [sp+78h] [bp-C8h]
  _DWORD *v69; // [sp+7Ch] [bp-C4h]
  _DWORD *v70; // [sp+80h] [bp-C0h]
  _DWORD *v71; // [sp+84h] [bp-BCh]
  _DWORD *v72; // [sp+88h] [bp-B8h]
  int v73; // [sp+8Ch] [bp-B4h]
  _DWORD *v74; // [sp+90h] [bp-B0h]
  _DWORD *v75; // [sp+94h] [bp-ACh]
  _DWORD *v76; // [sp+98h] [bp-A8h]
  _DWORD *v77; // [sp+9Ch] [bp-A4h]
  _DWORD *v78; // [sp+A0h] [bp-A0h]
  _DWORD *v79; // [sp+A4h] [bp-9Ch]
  _DWORD *v80; // [sp+A8h] [bp-98h]
  _BOOL4 v81; // [sp+ACh] [bp-94h]
  const CPed *PlayerPed; // [sp+B0h] [bp-90h]
  CEntity **v83; // [sp+B0h] [bp-90h]
  float v84; // [sp+B4h] [bp-8Ch]
  __int64 v85; // [sp+B8h] [bp-88h] BYREF
  __int64 v86; // [sp+C0h] [bp-80h] BYREF
  __int64 v87; // [sp+C8h] [bp-78h] BYREF
  __int64 v88; // [sp+D0h] [bp-70h] BYREF
  __int64 v89; // [sp+D8h] [bp-68h] BYREF
  __int64 v90; // [sp+E0h] [bp-60h] BYREF
  __int64 v91; // [sp+E8h] [bp-58h] BYREF
  _QWORD v92[10]; // [sp+F0h] [bp-50h] BYREF

  v5 = this;
  v9 = *(_QWORD *)(this + 1);
  v8 = (int)v9 < SHIDWORD(v9);
  HIDWORD(v9) = 0;
  if ( v8 )
    HIDWORD(v9) = v9 + 1;
  v5[1] = (CEntity *)HIDWORD(v9);
  if ( !(_DWORD)v9 )
  {
    v10 = v5 + 3;
    for ( i = 0; i != 16; ++i )
    {
      v12 = v10[i];
      if ( v12 )
      {
        CEntity::CleanUpOldReference(v12, &v10[i]);
        v10[i] = 0;
      }
    }
    v13 = v5[19];
    if ( v13 )
    {
      CEntity::CleanUpOldReference(v13, v5 + 19);
      v5[19] = 0;
    }
    v57 = v5 + 19;
    PlayerPed = (const CPed *)FindPlayerPed(-1);
    v14 = *((_DWORD *)a3 + 272);
    v3.n64_u32[0] = *(_DWORD *)(v14 + 188);
    v4.n64_u32[0] = *(_DWORD *)(v14 + 192);
    v15 = *((_DWORD *)a3 + 5);
    LODWORD(v16) = vmax_f32(v3, v4).n64_u32[0];
    v89 = 0x7F7FFFFF7F7FFFFFLL;
    v90 = 0x7F7FFFFF7F7FFFFFLL;
    v17 = (float *)(v15 + 48);
    v91 = 0x7F7FFFFF7F7FFFFFLL;
    v92[0] = 0x7F7FFFFF7F7FFFFFLL;
    v85 = 0x7F7FFFFF7F7FFFFFLL;
    v86 = 0x7F7FFFFF7F7FFFFFLL;
    v87 = 0x7F7FFFFF7F7FFFFFLL;
    v88 = 0x7F7FFFFF7F7FFFFFLL;
    if ( !v15 )
      v17 = (float *)((char *)a3 + 4);
    v18 = *v17;
    v19 = v17[1];
    v84 = floorf((float)((float)(*v17 - v16) / 50.0) + 60.0);
    v20 = floorf((float)((float)(v19 - v16) / 50.0) + 60.0);
    v21 = floorf((float)((float)(v16 + v19) / 50.0) + 60.0);
    v22 = 119;
    v23 = 0;
    v24 = (int)v21;
    if ( v24 >= 119 )
      v24 = 119;
    v59 = v24;
    v25 = (int)v20;
    if ( v25 <= 0 )
      v25 = 0;
    if ( (int)v84 > 0 )
      v23 = (int)v84;
    v58 = v23;
    v26 = (int)floorf((float)((float)(v16 + v18) / 50.0) + 60.0);
    if ( v26 < 119 )
      v22 = v26;
    v62 = v22;
    if ( (unsigned __int16)CWorld::ms_nCurrentScanCode == 0xFFFF )
    {
      CWorld::ClearScanCodes((CWorld *)((char *)&elf_hash_bucket[16320] + 3));
      v27 = 1;
    }
    else
    {
      v27 = CWorld::ms_nCurrentScanCode + 1;
    }
    CWorld::ms_nCurrentScanCode = v27;
    *((_WORD *)a3 + 24) = v27;
    if ( v25 <= v59 )
    {
      v60 = v25;
      v28 = v5;
      v4.n64_u32[0] = 15.0;
      v29 = a2 != 1 || PlayerPed == a3;
      v68 = v28 + 18;
      v69 = v28 + 17;
      v70 = v28 + 16;
      v71 = v28 + 15;
      v72 = v28 + 14;
      v74 = v28 + 13;
      v75 = v28 + 12;
      v76 = v28 + 9;
      v30 = (float32x2_t *)(v17 + 1);
      v77 = v28 + 8;
      v78 = v28 + 7;
      v79 = v28 + 6;
      v80 = v28 + 5;
      LODWORD(v84) = v28 + 4;
      v31 = v28 + 11;
      v32 = v28 + 10;
      v33 = 0;
      v83 = v28;
      v67 = v10;
      v61 = a2;
      v65 = (float32x2_t *)(v17 + 1);
      v66 = v17;
      v81 = v29;
      v63 = v28 + 10;
      v64 = v28 + 11;
      while ( 1 )
      {
        if ( v58 > v62 )
          goto LABEL_114;
        v34 = v58;
        do
        {
          v73 = v34;
          v35 = v34 & 0xF | (unsigned __int8)(16 * v60);
          if ( a2 == 2 )
          {
            v36 = (__int64 **)&CWorld::ms_aRepeatSectors[3 * v35 + 2];
          }
          else if ( a2 == 1 )
          {
            v36 = (__int64 **)&CWorld::ms_aRepeatSectors[3 * v35 + 1];
          }
          else if ( a2 )
          {
            v36 = 0;
          }
          else
          {
            v36 = (__int64 **)&CWorld::ms_aRepeatSectors[3 * v35];
          }
          v37 = *v36;
          while ( v37 )
          {
            v38 = *v37;
            v37 = (__int64 *)*((_DWORD *)v37 + 1);
            if ( *(unsigned __int16 *)(v38 + 48) != v27 )
            {
              *(_WORD *)(v38 + 48) = v27;
              v39 = !v29;
              if ( !v29 )
                v39 = *(_DWORD *)(v38 + 1100) == 55;
              if ( !v39 )
              {
                v40 = *(_DWORD *)(v38 + 20);
                v41 = v40 + 48;
                if ( !v40 )
                  v41 = v38 + 4;
                v42.n64_u64[0] = vsub_f32(*(float32x2_t *)(v41 + 4), (float32x2_t)v30->n64_u64[0]).n64_u64[0];
                v43.n64_u64[0] = vmul_f32(v42, v42).n64_u64[0];
                v44 = (float)((float)((float)(*(float *)v41 - *v17) * (float)(*(float *)v41 - *v17)) + v43.n64_f32[0])
                    + v43.n64_f32[1];
                if ( v44 < (float)(v16 * v16) )
                {
                  if ( !*v10 )
                  {
                    v49 = 0;
                    v50 = *(float *)&v10;
                    goto LABEL_35;
                  }
                  if ( v44 < *(float *)&v85 )
                  {
                    v48 = &v85;
                    v46 = 0;
                    v47 = *(float *)&v10;
                    goto LABEL_107;
                  }
                  if ( !*(_DWORD *)LODWORD(v84) )
                  {
                    v49 = 1;
                    v50 = v84;
                    goto LABEL_35;
                  }
                  v45 = v83;
                  if ( v44 < *((float *)&v85 + 1) )
                  {
                    v46 = 1;
                    v47 = v84;
                    v48 = (__int64 *)((char *)&v85 + 4);
                    goto LABEL_108;
                  }
                  if ( !*v80 )
                  {
                    v49 = 2;
                    v50 = *(float *)&v80;
                    v29 = v81;
                    goto LABEL_35;
                  }
                  if ( v44 < *(float *)&v86 )
                  {
                    v46 = 2;
                    v47 = *(float *)&v80;
                    v48 = &v86;
                    goto LABEL_108;
                  }
                  if ( !*v79 )
                  {
                    v49 = 3;
                    v50 = *(float *)&v79;
                    v29 = v81;
                    goto LABEL_35;
                  }
                  if ( v44 < *((float *)&v86 + 1) )
                  {
                    v46 = 3;
                    v47 = *(float *)&v79;
                    v48 = (__int64 *)((char *)&v86 + 4);
                    goto LABEL_108;
                  }
                  if ( !*v78 )
                  {
                    v49 = 4;
                    v50 = *(float *)&v78;
                    v29 = v81;
                    goto LABEL_35;
                  }
                  if ( v44 < *(float *)&v87 )
                  {
                    v46 = 4;
                    v47 = *(float *)&v78;
                    v48 = &v87;
                    goto LABEL_108;
                  }
                  if ( !*v77 )
                  {
                    v49 = 5;
                    v50 = *(float *)&v77;
                    v29 = v81;
                    goto LABEL_35;
                  }
                  if ( v44 < *((float *)&v87 + 1) )
                  {
                    v46 = 5;
                    v47 = *(float *)&v77;
                    v48 = (__int64 *)((char *)&v87 + 4);
                    goto LABEL_108;
                  }
                  if ( !*v76 )
                  {
                    v49 = 6;
                    v50 = *(float *)&v76;
                    v29 = v81;
                    goto LABEL_35;
                  }
                  if ( v44 < *(float *)&v88 )
                  {
                    v46 = 6;
                    v47 = *(float *)&v76;
                    v48 = &v88;
                    goto LABEL_108;
                  }
                  if ( !*v32 )
                  {
                    v49 = 7;
                    v50 = *(float *)&v32;
                    v29 = v81;
                    goto LABEL_35;
                  }
                  if ( v44 < *((float *)&v88 + 1) )
                  {
                    v46 = 7;
                    v47 = *(float *)&v32;
                    v48 = (__int64 *)((char *)&v88 + 4);
                    goto LABEL_108;
                  }
                  if ( !*v31 )
                  {
                    v49 = 8;
                    v50 = *(float *)&v31;
                    v29 = v81;
                    goto LABEL_35;
                  }
                  if ( v44 < *(float *)&v89 )
                  {
                    v46 = 8;
                    v47 = *(float *)&v31;
                    v48 = &v89;
                    goto LABEL_108;
                  }
                  if ( !*v75 )
                  {
                    v49 = 9;
                    v50 = *(float *)&v75;
                    v29 = v81;
                    goto LABEL_35;
                  }
                  if ( v44 < *((float *)&v89 + 1) )
                  {
                    v46 = 9;
                    v47 = *(float *)&v75;
                    v48 = (__int64 *)((char *)&v89 + 4);
                    goto LABEL_108;
                  }
                  if ( !*v74 )
                  {
                    v49 = 10;
                    v50 = *(float *)&v74;
                    v29 = v81;
                    goto LABEL_35;
                  }
                  if ( v44 < *(float *)&v90 )
                  {
                    v46 = 10;
                    v47 = *(float *)&v74;
                    v48 = &v90;
                    goto LABEL_108;
                  }
                  if ( !*v72 )
                  {
                    v49 = 11;
                    v50 = *(float *)&v72;
                    v29 = v81;
                    goto LABEL_35;
                  }
                  if ( v44 < *((float *)&v90 + 1) )
                  {
                    v46 = 11;
                    v47 = *(float *)&v72;
                    v48 = (__int64 *)((char *)&v90 + 4);
                    goto LABEL_108;
                  }
                  if ( !*v71 )
                  {
                    v49 = 12;
                    v50 = *(float *)&v71;
                    v29 = v81;
                    goto LABEL_35;
                  }
                  if ( v44 < *(float *)&v91 )
                  {
                    v46 = 12;
                    v47 = *(float *)&v71;
                    v48 = &v91;
                    goto LABEL_108;
                  }
                  if ( !*v70 )
                  {
                    v49 = 13;
                    v50 = *(float *)&v70;
                    v29 = v81;
                    goto LABEL_35;
                  }
                  if ( v44 < *((float *)&v91 + 1) )
                  {
                    v46 = 13;
                    v47 = *(float *)&v70;
                    v48 = (__int64 *)((char *)&v91 + 4);
                    goto LABEL_108;
                  }
                  if ( !*v69 )
                  {
                    v49 = 14;
                    v50 = *(float *)&v69;
                    v29 = v81;
                    goto LABEL_35;
                  }
                  v29 = v81;
                  if ( v44 < *(float *)v92 )
                  {
                    v46 = 14;
                    v47 = *(float *)&v69;
                    v48 = v92;
                    goto LABEL_107;
                  }
                  if ( *v68 )
                  {
                    if ( v44 < *((float *)v92 + 1) )
                    {
                      v46 = 15;
                      v47 = *(float *)&v68;
                      v48 = (_QWORD *)((char *)v92 + 4);
LABEL_107:
                      v45 = v83;
LABEL_108:
                      v43.n64_f32[0] = (float)v33;
                      v51 = (int)vmin_f32(v43, v4).n64_f32[0];
                      if ( v46 < v51 )
                      {
                        v52 = (_DWORD *)&v85 + v51;
                        v53 = v52;
                        do
                        {
                          v54 = &v45[v51--];
                          v54[3] = v54[2];
                          v55 = *--v53;
                          *v52 = v55;
                          v52 = v53;
                        }
                        while ( v51 > v46 );
                      }
                      *(_DWORD *)LODWORD(v47) = v38;
                      *(float *)v48 = v44;
                      v10 = v67;
                      v30 = v65;
                      v17 = v66;
                      v33 += v33 < 16;
                      v29 = v81;
                      v32 = v63;
                      v31 = v64;
                    }
                  }
                  else
                  {
                    v49 = 15;
                    v50 = *(float *)&v68;
LABEL_35:
                    *(_DWORD *)LODWORD(v50) = v38;
                    *((float *)&v85 + v49) = v44;
                    ++v33;
                  }
                }
              }
            }
          }
          a2 = v61;
          v34 = v73 + 1;
        }
        while ( v73 < v62 );
LABEL_114:
        v8 = v60++ < v59;
        if ( !v8 )
        {
          v5 = v83;
          if ( v33 >= 1 )
          {
            do
            {
              if ( *v10 )
                CEntity::RegisterReference(*v10, v10);
              ++v10;
              --v33;
            }
            while ( v33 );
          }
          break;
        }
      }
    }
    LODWORD(v9) = v5[3];
    if ( (_DWORD)v9 )
    {
      *v57 = (CEntity *)v9;
      LODWORD(v9) = CEntity::RegisterReference((CEntity *)v9, v57);
    }
  }
  return v9;
}


// ============================================================

// Address: 0x4c026c
// Original: _ZN14CEntityScannerD2Ev
// Demangled: CEntityScanner::~CEntityScanner()
void __fastcall CEntityScanner::~CEntityScanner(CEntity **this)
{
  int v2; // r5
  CEntity *v3; // r0
  CEntity *v4; // r0

  v2 = 3;
  *this = (CEntity *)&off_669080;
  do
  {
    v3 = this[v2];
    if ( v3 )
    {
      CEntity::CleanUpOldReference(v3, &this[v2]);
      this[v2] = 0;
    }
    ++v2;
  }
  while ( v2 != 19 );
  v4 = this[19];
  if ( v4 )
  {
    CEntity::CleanUpOldReference(v4, this + 19);
    this[19] = 0;
  }
}


// ============================================================
