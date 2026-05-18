
// Address: 0x196cbc
// Original: j__ZN8CPedPath19AddBuildingBlockadeEP7CEntityPA40_12CPedPathNodeP7CVector
// Demangled: CPedPath::AddBuildingBlockade(CEntity *,CPedPathNode (*)[40],CVector *)
// attributes: thunk
int __fastcall CPedPath::AddBuildingBlockade(CEntity *this)
{
  return _ZN8CPedPath19AddBuildingBlockadeEP7CEntityPA40_12CPedPathNodeP7CVector(this);
}


// ============================================================

// Address: 0x19b3d4
// Original: j__ZN8CPedPath11AddBlockadeEP7CEntityPA40_12CPedPathNodeP7CVector
// Demangled: CPedPath::AddBlockade(CEntity *,CPedPathNode (*)[40],CVector *)
// attributes: thunk
int CPedPath::AddBlockade()
{
  return _ZN8CPedPath11AddBlockadeEP7CEntityPA40_12CPedPathNodeP7CVector();
}


// ============================================================

// Address: 0x31b5a8
// Original: _ZN8CPedPath12CalcPedRouteEh7CVectorS0_PS0_Pss
// Demangled: CPedPath::CalcPedRoute(uchar,CVector,CVector,CVector*,short *,short)
int __fastcall CPedPath::CalcPedRoute(
        int a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        int a8,
        __int16 *a9,
        int a10)
{
  int result; // r0
  float v14; // s20
  float v15; // s18
  int v16; // r11
  int v17; // lr
  bool v18; // zf
  _OWORD *v19; // r2
  int v20; // r12
  char v21; // r6
  int v22; // r5
  int v23; // r4
  _OWORD *v24; // r3
  __int16 v25; // r8
  float v26; // r5
  float v27; // r6
  float v28; // s18
  float v29; // r0
  int v30; // s0
  int v31; // r1
  int v32; // r0
  int v33; // r1
  int v34; // r1
  int v35; // r10
  __int64 *v36; // r9
  __int64 v37; // kr00_8
  int v38; // r2
  bool v39; // zf
  __int64 *v40; // r4
  __int64 v41; // kr08_8
  int v42; // r2
  bool v43; // zf
  bool v44; // cc
  int i; // r0
  _BYTE *v46; // r1
  _OWORD *v47; // r10
  _OWORD *v48; // lr
  __int16 v49; // r8
  __int16 v50; // r9
  _BYTE *v51; // r5
  _BYTE *v52; // r11
  int v53; // r0
  _OWORD *v54; // r4
  char *v55; // r1
  _DWORD *v56; // r0
  int v57; // r0
  _BYTE *v58; // r6
  int v59; // r2
  _OWORD *v60; // r4
  char *v61; // r1
  _DWORD *v62; // r0
  int v63; // r2
  _OWORD *v64; // r4
  char *v65; // r0
  _DWORD *v66; // r2
  int v67; // r0
  _OWORD *v68; // r1
  _DWORD *v69; // r0
  int v70; // r2
  int v71; // r0
  int v72; // r2
  _OWORD *v73; // r1
  _DWORD *v74; // r0
  int v75; // r2
  int v76; // r0
  _OWORD *v77; // r1
  _DWORD *v78; // r0
  int v79; // r2
  int v80; // r0
  _OWORD *v81; // r4
  int v82; // r1
  _DWORD *v83; // r0
  int v84; // r1
  _OWORD *v85; // r4
  int v86; // r0
  _DWORD *v87; // r0
  int v88; // r1
  int v89; // r1
  int v90; // r2
  int v91; // r3
  int v92; // r0
  _OWORD *v93; // r3
  int v94; // r6
  int v95; // r1
  int v96; // r1
  __int64 v97; // d16
  int v98; // r1
  __int16 v99; // r0
  int v100; // [sp+8h] [bp-7E90h]
  int v101; // [sp+Ch] [bp-7E8Ch]
  int v102; // [sp+14h] [bp-7E84h]
  int v103; // [sp+18h] [bp-7E80h]
  int v104; // [sp+1Ch] [bp-7E7Ch]
  _OWORD *v105; // [sp+20h] [bp-7E78h]
  int v106; // [sp+24h] [bp-7E74h]
  int v107; // [sp+28h] [bp-7E70h]
  _BYTE *v108; // [sp+28h] [bp-7E70h]
  int v109; // [sp+2Ch] [bp-7E6Ch]
  _BYTE *v110; // [sp+2Ch] [bp-7E6Ch]
  _BYTE v111[8]; // [sp+30h] [bp-7E68h] BYREF
  _OWORD *v112; // [sp+38h] [bp-7E60h]
  __int64 v113; // [sp+1A30h] [bp-6468h]
  float v114; // [sp+1A38h] [bp-6460h]
  _OWORD v115[1605]; // [sp+1A40h] [bp-6458h] BYREF

  result = 0;
  *a9 = 0;
  if ( fabsf(a5 - a2) <= 23.8 )
  {
    if ( fabsf(a6 - a3) > 23.8 || fabsf(a7 - a4) > 23.8 )
      return 0;
    v14 = (float)((float)(a2 + a5) * 0.5) + -14.0;
    v15 = (float)((float)(a3 + a6) * 0.5) + -14.0;
    v114 = (float)(a4 + a7) * 0.5;
    *((float *)&v113 + 1) = v15;
    *(float *)&v113 = v14;
    result = 0;
    v16 = (int)(float)((float)(a5 - v14) / 0.7);
    v17 = (int)(float)((float)(a2 - v14) / 0.7);
    v18 = v17 == v16;
    if ( v17 == v16 )
      v18 = COERCE_INT((float)(a3 - v15) / 0.7) == COERCE_INT((float)(a6 - v15) / 0.7);
    if ( !v18 )
    {
      v19 = v115;
      v20 = 0;
      v21 = 0;
      do
      {
        v22 = 0;
        v23 = 0;
        do
        {
          v24 = &v19[v22];
          LOBYTE(v19[v22++]) = 0;
          *((_WORD *)v24 + 2) = 0x7FFF;
          *((_BYTE *)v24 + 1) = v21;
          *((_BYTE *)v24 + 2) = v23++;
        }
        while ( v22 != 40 );
        ++v20;
        v19 += 40;
        ++v21;
      }
      while ( v20 != 40 );
      v101 = (int)(float)((float)(a3 - v15) / 0.7);
      v100 = (int)(float)((float)(a6 - v15) / 0.7);
      if ( (unsigned __int16)CWorld::ms_nCurrentScanCode == 0xFFFF )
      {
        CWorld::ClearScanCodes((CWorld *)((char *)&elf_hash_bucket[16320] + 3));
        v25 = 1;
      }
      else
      {
        v25 = CWorld::ms_nCurrentScanCode + 1;
      }
      v26 = floorf((float)(v14 / 50.0) + 60.0);
      v27 = floorf((float)(v15 / 50.0) + 60.0);
      v28 = floorf((float)((float)(v15 + 28.0) / 50.0) + 60.0);
      v29 = floorf((float)((float)(v14 + 28.0) / 50.0) + 60.0);
      CWorld::ms_nCurrentScanCode = v25;
      v30 = (int)v29;
      v31 = 119;
      v32 = (int)v28;
      if ( (int)v28 >= 119 )
        v32 = 119;
      v102 = v32;
      if ( v30 < 119 )
        v31 = v30;
      v109 = v31;
      v33 = (int)v27;
      if ( (int)v27 <= 0 )
        v33 = 0;
      v104 = v33;
      v34 = (int)v26;
      if ( (int)v26 <= 0 )
        v34 = 0;
      v103 = v34;
      if ( a1 != 1 && v104 <= v32 )
      {
        do
        {
          if ( v103 <= v109 )
          {
            v35 = v103;
            v107 = (unsigned __int8)(16 * v104);
            do
            {
              v36 = (__int64 *)CWorld::ms_aRepeatSectors[3 * (v35 & 0xF | v107)];
              while ( v36 )
              {
                v37 = *v36;
                v36 = (__int64 *)*((_DWORD *)v36 + 1);
                v38 = *(unsigned __int16 *)(v37 + 48);
                v39 = v38 == (unsigned __int16)CWorld::ms_nCurrentScanCode;
                if ( v38 != (unsigned __int16)CWorld::ms_nCurrentScanCode )
                  v39 = *(unsigned __int8 *)(v37 + 28) << 31 == 0;
                if ( !v39 )
                {
                  *(_WORD *)(v37 + 48) = CWorld::ms_nCurrentScanCode;
                  CPedPath::AddBlockade();
                }
              }
              v40 = (__int64 *)CWorld::ms_aRepeatSectors[3 * (v35 & 0xF | v107) + 2];
              while ( v40 )
              {
                v41 = *v40;
                v40 = (__int64 *)*((_DWORD *)v40 + 1);
                v42 = *(unsigned __int16 *)(v41 + 48);
                v43 = v42 == (unsigned __int16)CWorld::ms_nCurrentScanCode;
                if ( v42 != (unsigned __int16)CWorld::ms_nCurrentScanCode )
                  v43 = *(unsigned __int8 *)(v41 + 28) << 31 == 0;
                if ( !v43 )
                {
                  *(_WORD *)(v41 + 48) = CWorld::ms_nCurrentScanCode;
                  CPedPath::AddBlockade();
                }
              }
              v44 = v35++ < v109;
            }
            while ( v44 );
          }
          v44 = v104++ < v102;
        }
        while ( v44 );
      }
      for ( i = 0; i != 6656; i += 16 )
      {
        v46 = &v111[i];
        *((_DWORD *)v46 + 2) = 0;
        *((_DWORD *)v46 + 3) = 0;
      }
      v47 = &v115[40 * v16 + v100];
      v112 = v47;
      *(_BYTE *)v47 = 0;
      *((_WORD *)v47 + 2) = 0;
      v106 = 0;
      *((_DWORD *)v47 + 2) = 0;
      *((_DWORD *)v47 + 3) = v111;
      v105 = v47;
      v48 = &v115[40 * (int)(float)((float)(a2 - v14) / 0.7) + v101];
      if ( !v47 )
      {
LABEL_130:
        do
        {
          v89 = v106;
          if ( v106 == 414 )
            return 0;
          ++v106;
          v47 = *(_OWORD **)&v111[16 * v89 + 24];
        }
        while ( !v47 );
      }
      v49 = v106 + 7;
      v50 = v106 + 5;
      v108 = &v111[(v106 + 7) << 16 >> 12];
      v51 = v108 + 8;
      v110 = &v111[(v106 + 5) << 16 >> 12];
      v52 = v110 + 8;
      while ( v47 != v48 )
      {
        if ( *((char *)v47 + 1) < 1 )
          goto LABEL_170;
        if ( !*((_BYTE *)v47 - 640) )
        {
          v53 = *((__int16 *)v47 - 318);
          if ( v53 > v50 )
          {
            v54 = v47 - 40;
            v55 = (char *)v47 - 632;
            if ( v53 == 0x7FFF )
            {
              v56 = (_DWORD *)v47 - 157;
            }
            else
            {
              *(_DWORD *)(*((_DWORD *)v47 - 157) + 8) = *(_DWORD *)v55;
              v56 = (_DWORD *)v47 - 157;
              if ( *(_DWORD *)v55 )
                *(_DWORD *)(*(_DWORD *)v55 + 12) = *v56;
            }
            *(_DWORD *)v55 = *(_DWORD *)v52;
            *v56 = v110;
            if ( *(_DWORD *)v52 )
              *(_DWORD *)(*(_DWORD *)v52 + 12) = v54;
            *(_DWORD *)v52 = v54;
            *((_WORD *)v47 - 318) = v50;
          }
        }
        v58 = (char *)v47 + 2;
        v57 = *((char *)v47 + 2);
        if ( v57 < 1 )
          goto LABEL_172;
        if ( !*((_BYTE *)v47 - 656) )
        {
          v59 = *((__int16 *)v47 - 326);
          if ( v59 > v49 )
          {
            v60 = v47 - 41;
            v61 = (char *)v47 - 648;
            if ( v59 == 0x7FFF )
            {
              v62 = (_DWORD *)v47 - 161;
            }
            else
            {
              *(_DWORD *)(*((_DWORD *)v47 - 161) + 8) = *(_DWORD *)v61;
              v62 = (_DWORD *)v47 - 161;
              if ( *(_DWORD *)v61 )
                *(_DWORD *)(*(_DWORD *)v61 + 12) = *v62;
            }
            *(_DWORD *)v61 = *(_DWORD *)v51;
            *v62 = v108;
            if ( *(_DWORD *)v51 )
              *(_DWORD *)(*(_DWORD *)v51 + 12) = v60;
            *(_DWORD *)v51 = v60;
            *((_WORD *)v47 - 326) = v49;
            LOBYTE(v57) = *v58;
          }
        }
        if ( (char)v57 <= 38 )
        {
LABEL_172:
          if ( !*((_BYTE *)v47 - 624) )
          {
            v63 = *((__int16 *)v47 - 310);
            if ( v63 > v49 )
            {
              v64 = v47 - 39;
              v65 = (char *)v47 - 616;
              if ( v63 == 0x7FFF )
              {
                v66 = (_DWORD *)v47 - 153;
              }
              else
              {
                *(_DWORD *)(*((_DWORD *)v47 - 153) + 8) = *(_DWORD *)v65;
                v66 = (_DWORD *)v47 - 153;
                if ( *(_DWORD *)v65 )
                  *(_DWORD *)(*(_DWORD *)v65 + 12) = *v66;
              }
              *(_DWORD *)v65 = *(_DWORD *)v51;
              *v66 = v108;
              if ( *(_DWORD *)v51 )
                *(_DWORD *)(*(_DWORD *)v51 + 12) = v64;
              *(_DWORD *)v51 = v64;
              *((_WORD *)v47 - 310) = v49;
            }
          }
        }
        if ( *((char *)v47 + 1) <= 38 )
        {
LABEL_170:
          if ( !*((_BYTE *)v47 + 640) )
          {
            v67 = *((__int16 *)v47 + 322);
            if ( v67 > v50 )
            {
              v68 = v47 + 40;
              if ( v67 == 0x7FFF )
              {
                v69 = (_DWORD *)v47 + 163;
              }
              else
              {
                *(_DWORD *)(*((_DWORD *)v47 + 163) + 8) = *((_DWORD *)v47 + 162);
                v69 = (_DWORD *)v47 + 163;
                v70 = *((_DWORD *)v47 + 162);
                if ( v70 )
                  *(_DWORD *)(v70 + 12) = *v69;
              }
              *((_DWORD *)v47 + 162) = *(_DWORD *)v52;
              *v69 = v110;
              if ( *(_DWORD *)v52 )
                *(_DWORD *)(*(_DWORD *)v52 + 12) = v68;
              *(_DWORD *)v52 = v68;
              *((_WORD *)v47 + 322) = v50;
            }
          }
          v58 = (char *)v47 + 2;
          v71 = *((char *)v47 + 2);
          if ( v71 < 1 )
            goto LABEL_171;
          if ( !*((_BYTE *)v47 + 624) )
          {
            v72 = *((__int16 *)v47 + 314);
            if ( v72 > v49 )
            {
              v73 = v47 + 39;
              if ( v72 == 0x7FFF )
              {
                v74 = (_DWORD *)v47 + 159;
              }
              else
              {
                *(_DWORD *)(*((_DWORD *)v47 + 159) + 8) = *((_DWORD *)v47 + 158);
                v74 = (_DWORD *)v47 + 159;
                v75 = *((_DWORD *)v47 + 158);
                if ( v75 )
                  *(_DWORD *)(v75 + 12) = *v74;
              }
              *((_DWORD *)v47 + 158) = *(_DWORD *)v51;
              *v74 = v108;
              if ( *(_DWORD *)v51 )
                *(_DWORD *)(*(_DWORD *)v51 + 12) = v73;
              *(_DWORD *)v51 = v73;
              LOBYTE(v71) = *((_BYTE *)v47 + 2);
              *((_WORD *)v47 + 314) = v49;
            }
          }
          if ( (char)v71 <= 38 )
          {
LABEL_171:
            if ( !*((_BYTE *)v47 + 656) )
            {
              v76 = *((__int16 *)v47 + 330);
              if ( v76 > v49 )
              {
                v77 = v47 + 41;
                if ( v76 == 0x7FFF )
                {
                  v78 = (_DWORD *)v47 + 167;
                }
                else
                {
                  *(_DWORD *)(*((_DWORD *)v47 + 167) + 8) = *((_DWORD *)v47 + 166);
                  v78 = (_DWORD *)v47 + 167;
                  v79 = *((_DWORD *)v47 + 166);
                  if ( v79 )
                    *(_DWORD *)(v79 + 12) = *v78;
                }
                *((_DWORD *)v47 + 166) = *(_DWORD *)v51;
                *v78 = v108;
                if ( *(_DWORD *)v51 )
                  *(_DWORD *)(*(_DWORD *)v51 + 12) = v77;
                *(_DWORD *)v51 = v77;
                *((_WORD *)v47 + 330) = v49;
              }
            }
          }
        }
        v80 = (char)*v58;
        if ( v80 < 1 )
          goto LABEL_120;
        v81 = v47 - 1;
        if ( !*((_BYTE *)v47 - 16) )
        {
          v82 = *((__int16 *)v47 - 6);
          if ( v82 > v50 )
          {
            if ( v82 == 0x7FFF )
            {
              v83 = (_DWORD *)v47 - 1;
            }
            else
            {
              v83 = (_DWORD *)v47 - 1;
              *(_DWORD *)(*((_DWORD *)v47 - 1) + 8) = *((_DWORD *)v47 - 2);
              v84 = *((_DWORD *)v47 - 2);
              if ( v84 )
                *(_DWORD *)(v84 + 12) = *v83;
            }
            *((_DWORD *)v47 - 2) = *(_DWORD *)v52;
            *v83 = v110;
            if ( *(_DWORD *)v52 )
              *(_DWORD *)(*(_DWORD *)v52 + 12) = v81;
            *(_DWORD *)v52 = v81;
            *((_WORD *)v47 - 6) = v50;
            LOBYTE(v80) = *v58;
          }
        }
        if ( (char)v80 <= 38 )
        {
LABEL_120:
          v85 = v47 + 1;
          if ( !*((_BYTE *)v47 + 16) )
          {
            v86 = *((__int16 *)v47 + 10);
            if ( v86 > v50 )
            {
              if ( v86 == 0x7FFF )
              {
                v87 = (_DWORD *)v47 + 7;
              }
              else
              {
                v87 = (_DWORD *)v47 + 7;
                *(_DWORD *)(*((_DWORD *)v47 + 7) + 8) = *((_DWORD *)v47 + 6);
                v88 = *((_DWORD *)v47 + 6);
                if ( v88 )
                  *(_DWORD *)(v88 + 12) = *v87;
              }
              *((_DWORD *)v47 + 6) = *(_DWORD *)v52;
              *v87 = v110;
              if ( *(_DWORD *)v52 )
                *(_DWORD *)(*(_DWORD *)v52 + 12) = v85;
              *(_DWORD *)v52 = v85;
              *((_WORD *)v47 + 10) = v50;
            }
          }
        }
        v47 = (_OWORD *)*((_DWORD *)v47 + 2);
        if ( !v47 )
          goto LABEL_130;
      }
      *a9 = 0;
      result = 1;
      if ( a10 >= 1 && v48 != v105 )
      {
        LOWORD(v90) = 0;
        while ( 1 )
        {
          v91 = *((char *)v48 + 1);
          if ( v91 <= 0 )
          {
            LOWORD(v92) = *((_WORD *)v48 + 2);
          }
          else
          {
            v92 = *((__int16 *)v48 + 2);
            if ( *((__int16 *)v48 - 318) + 5 == v92 )
            {
              v93 = v48 - 40;
              goto LABEL_166;
            }
            if ( v91 > 38 )
              goto LABEL_142;
          }
          if ( *((__int16 *)v48 + 322) + 5 == (__int16)v92 )
          {
            v93 = v48 + 40;
            goto LABEL_166;
          }
LABEL_142:
          v94 = *((char *)v48 + 2);
          if ( v94 <= 0 )
          {
            v95 = (__int16)v92;
          }
          else
          {
            v95 = (__int16)v92;
            if ( *((__int16 *)v48 - 6) + 5 == (__int16)v92 )
            {
              v93 = v48 - 1;
              goto LABEL_166;
            }
            if ( v94 > 38 )
              goto LABEL_149;
          }
          if ( *((__int16 *)v48 + 10) + 5 == v95 )
          {
            v93 = v48 + 1;
            goto LABEL_166;
          }
LABEL_149:
          if ( v91 >= 1 )
          {
            if ( v94 <= 0 )
            {
              v96 = (__int16)v92;
LABEL_155:
              if ( *((__int16 *)v48 - 310) + 7 == v96 )
              {
                v93 = v48 - 39;
                goto LABEL_166;
              }
            }
            else
            {
              v96 = (__int16)v92;
              if ( *((__int16 *)v48 - 326) + 7 == (__int16)v92 )
              {
                v93 = v48 - 41;
                goto LABEL_166;
              }
              if ( v94 <= 38 )
                goto LABEL_155;
            }
            if ( v91 > 38 )
              goto LABEL_165;
          }
          if ( v94 < 1 )
            goto LABEL_162;
          if ( *((__int16 *)v48 + 314) + 7 == (__int16)v92 )
          {
            v93 = v48 + 39;
            goto LABEL_166;
          }
          if ( v94 <= 38 )
          {
LABEL_162:
            v93 = 0;
            if ( *((__int16 *)v48 + 330) + 7 == (__int16)v92 )
              v93 = v48 + 41;
            goto LABEL_166;
          }
LABEL_165:
          v93 = 0;
LABEL_166:
          v97 = v113;
          v98 = a8 + 12 * (__int16)v90;
          *(float *)(v98 + 8) = v114;
          *(_QWORD *)v98 = v97;
          *(float *)(a8 + 12 * *a9) = *(float *)(a8 + 12 * *a9) + (float)((float)*((char *)v93 + 1) * 0.7);
          *(float *)(a8 + 12 * *a9 + 4) = *(float *)(a8 + 12 * *a9 + 4) + (float)((float)*((char *)v93 + 2) * 0.7);
          v99 = *a9 + 1;
          *a9 = v99;
          v90 = v99;
          result = 1;
          if ( v90 < a10 )
          {
            v48 = v93;
            if ( v93 != v105 )
              continue;
          }
          return result;
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x31be7c
// Original: _ZN8CPedPath21AddBlockadeSectorListER8CPtrListPA40_12CPedPathNodeP7CVector
// Demangled: CPedPath::AddBlockadeSectorList(CPtrList &,CPedPathNode (*)[40],CVector *)
__int64 **__fastcall CPedPath::AddBlockadeSectorList(__int64 **result)
{
  __int64 *i; // r6
  __int64 v2; // kr00_8
  int v3; // r2
  bool v4; // zf

  for ( i = *result; i; result = (__int64 **)CPedPath::AddBlockade() )
  {
    while ( 1 )
    {
      v2 = *i;
      i = (__int64 *)*((_DWORD *)i + 1);
      result = (__int64 **)v2;
      v3 = *(unsigned __int16 *)(v2 + 48);
      v4 = v3 == (unsigned __int16)CWorld::ms_nCurrentScanCode;
      if ( v3 != (unsigned __int16)CWorld::ms_nCurrentScanCode )
        v4 = *(unsigned __int8 *)(v2 + 28) << 31 == 0;
      if ( !v4 )
        break;
      if ( !i )
        return result;
    }
    *(_WORD *)(v2 + 48) = CWorld::ms_nCurrentScanCode;
  }
  return result;
}


// ============================================================

// Address: 0x31bec4
// Original: _ZN8CPedPath11AddBlockadeEP7CEntityPA40_12CPedPathNodeP7CVector
// Demangled: CPedPath::AddBlockade(CEntity *,CPedPathNode (*)[40],CVector *)
int __fastcall CPedPath::AddBlockade(int a1, _BYTE *a2, float *a3)
{
  float v6; // s16
  float v7; // s18
  float v8; // s22
  float *v9; // r0
  float v10; // r9
  float v11; // r10
  float v12; // s20
  float v13; // s26
  float v14; // s24
  float *v15; // r11
  float v16; // s28
  float v17; // s26
  float v18; // s30
  int result; // r0
  _BYTE *v20; // r3
  int v21; // r2
  float v22; // s1
  float v23; // s14
  float v24; // s1
  float v25; // s3
  float v26; // s3
  float v27[3]; // [sp+0h] [bp-90h] BYREF
  float v28[3]; // [sp+Ch] [bp-84h] BYREF
  _BYTE v29[4]; // [sp+18h] [bp-78h] BYREF
  float v30; // [sp+1Ch] [bp-74h]
  float v31[27]; // [sp+24h] [bp-6Ch] BYREF

  v6 = *(float *)(CEntity::GetColModel((CEntity *)a1) + 16);
  v7 = *(float *)(CEntity::GetColModel((CEntity *)a1) + 4);
  v8 = *(float *)(CEntity::GetColModel((CEntity *)a1) + 12);
  v9 = *(float **)(a1 + 20);
  if ( v9 )
  {
    v10 = v9[4];
LABEL_4:
    v11 = v9[5];
LABEL_5:
    v12 = *v9;
LABEL_6:
    v13 = *a3;
    v14 = v9[1];
LABEL_7:
    v15 = a3 + 1;
    v16 = a3[1];
    v17 = v13 - v9[12];
    goto LABEL_8;
  }
  CPlaceable::AllocateMatrix((CPlaceable *)a1);
  CSimpleTransform::UpdateMatrix((CSimpleTransform *)(a1 + 4), *(CMatrix **)(a1 + 20));
  v9 = *(float **)(a1 + 20);
  v10 = v9[4];
  if ( v9 )
    goto LABEL_4;
  CPlaceable::AllocateMatrix((CPlaceable *)a1);
  CSimpleTransform::UpdateMatrix((CSimpleTransform *)(a1 + 4), *(CMatrix **)(a1 + 20));
  v9 = *(float **)(a1 + 20);
  v11 = v9[5];
  if ( v9 )
    goto LABEL_5;
  CPlaceable::AllocateMatrix((CPlaceable *)a1);
  CSimpleTransform::UpdateMatrix((CSimpleTransform *)(a1 + 4), *(CMatrix **)(a1 + 20));
  v9 = *(float **)(a1 + 20);
  v12 = *v9;
  if ( v9 )
    goto LABEL_6;
  CPlaceable::AllocateMatrix((CPlaceable *)a1);
  CSimpleTransform::UpdateMatrix((CSimpleTransform *)(a1 + 4), *(CMatrix **)(a1 + 20));
  v9 = *(float **)(a1 + 20);
  v13 = *a3;
  v14 = v9[1];
  if ( v9 )
    goto LABEL_7;
  CPlaceable::AllocateMatrix((CPlaceable *)a1);
  CSimpleTransform::UpdateMatrix((CSimpleTransform *)(a1 + 4), *(CMatrix **)(a1 + 20));
  v9 = *(float **)(a1 + 20);
  v15 = a3 + 1;
  v16 = a3[1];
  v17 = v13 - v9[12];
  if ( !v9 )
  {
    CPlaceable::AllocateMatrix((CPlaceable *)a1);
    CSimpleTransform::UpdateMatrix((CSimpleTransform *)(a1 + 4), *(CMatrix **)(a1 + 20));
    v9 = *(float **)(a1 + 20);
  }
LABEL_8:
  v18 = v9[13];
  CEntity::GetBoundCentre((CEntity *)v31);
  result = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(a1 + 38)]) + 44);
  if ( (float)(v31[0] + *(float *)(result + 36)) >= *a3 )
  {
    CEntity::GetBoundCentre((CEntity *)v29);
    result = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(a1 + 38)]) + 44);
    if ( (float)(v30 + *(float *)(result + 36)) >= *v15 )
    {
      CEntity::GetBoundCentre((CEntity *)v28);
      result = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(a1 + 38)]) + 44);
      if ( (float)(v28[0] - *(float *)(result + 36)) <= (float)(*a3 + 28.0) )
      {
        CEntity::GetBoundCentre((CEntity *)v27);
        result = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(a1 + 38)]) + 44);
        if ( (float)(v27[1] - *(float *)(result + 36)) <= (float)(*v15 + 28.0) )
        {
          for ( result = 0; result != 40; ++result )
          {
            v20 = a2;
            v21 = 0;
            v22 = v17 + (float)((float)(__int16)result * 0.7);
            v23 = v22 * v10;
            v24 = v12 * v22;
            do
            {
              if ( !*v20 )
              {
                v25 = (float)(v16 - v18) + (float)((float)(__int16)v21 * 0.7);
                if ( fabsf(v24 + (float)(v14 * v25)) < (float)(v8 + 0.3) )
                {
                  v26 = v23 + (float)(v25 * v11);
                  if ( v26 < (float)(v6 + 0.3) && v26 > (float)(v7 + -0.3) )
                    *v20 = 1;
                }
              }
              ++v21;
              v20 += 16;
            }
            while ( v21 != 40 );
            a2 += 640;
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x31c170
// Original: _ZN8CPedPath19AddBuildingBlockadeEP7CEntityPA40_12CPedPathNodeP7CVector
// Demangled: CPedPath::AddBuildingBlockade(CEntity *,CPedPathNode (*)[40],CVector *)
int __fastcall CPedPath::AddBuildingBlockade(CEntity *this, _BYTE *a2, float *a3)
{
  int result; // r0
  float v7; // s16
  float v8; // s18
  float v9; // s22
  float *v10; // r0
  float v11; // r9
  float v12; // r10
  float v13; // s20
  float v14; // s26
  float v15; // s24
  float *v16; // r11
  float v17; // s28
  float v18; // s26
  float v19; // s30
  _BYTE *v20; // r3
  int v21; // r2
  float v22; // s1
  float v23; // s14
  float v24; // s1
  float v25; // s3
  float v26; // s3
  float v27[3]; // [sp+0h] [bp-90h] BYREF
  float v28[3]; // [sp+Ch] [bp-84h] BYREF
  _BYTE v29[4]; // [sp+18h] [bp-78h] BYREF
  float v30; // [sp+1Ch] [bp-74h]
  float v31[27]; // [sp+24h] [bp-6Ch] BYREF

  result = *((_BYTE *)this + 58) & 7;
  if ( result != 1 )
    return result;
  v7 = *(float *)(CEntity::GetColModel(this) + 16);
  v8 = *(float *)(CEntity::GetColModel(this) + 4);
  v9 = *(float *)(CEntity::GetColModel(this) + 12);
  v10 = (float *)*((_DWORD *)this + 5);
  if ( v10 )
  {
    v11 = v10[4];
LABEL_5:
    v12 = v10[5];
LABEL_6:
    v13 = *v10;
LABEL_7:
    v14 = *a3;
    v15 = v10[1];
    goto LABEL_8;
  }
  CPlaceable::AllocateMatrix(this);
  CSimpleTransform::UpdateMatrix((CEntity *)((char *)this + 4), *((CMatrix **)this + 5));
  v10 = (float *)*((_DWORD *)this + 5);
  v11 = v10[4];
  if ( v10 )
    goto LABEL_5;
  CPlaceable::AllocateMatrix(this);
  CSimpleTransform::UpdateMatrix((CEntity *)((char *)this + 4), *((CMatrix **)this + 5));
  v10 = (float *)*((_DWORD *)this + 5);
  v12 = v10[5];
  if ( v10 )
    goto LABEL_6;
  CPlaceable::AllocateMatrix(this);
  CSimpleTransform::UpdateMatrix((CEntity *)((char *)this + 4), *((CMatrix **)this + 5));
  v10 = (float *)*((_DWORD *)this + 5);
  v13 = *v10;
  if ( v10 )
    goto LABEL_7;
  CPlaceable::AllocateMatrix(this);
  CSimpleTransform::UpdateMatrix((CEntity *)((char *)this + 4), *((CMatrix **)this + 5));
  v10 = (float *)*((_DWORD *)this + 5);
  v14 = *a3;
  v15 = v10[1];
  if ( !v10 )
  {
    CPlaceable::AllocateMatrix(this);
    CSimpleTransform::UpdateMatrix((CEntity *)((char *)this + 4), *((CMatrix **)this + 5));
    v10 = (float *)*((_DWORD *)this + 5);
    v16 = a3 + 1;
    v17 = a3[1];
    v18 = v14 - v10[12];
    if ( !v10 )
    {
      CPlaceable::AllocateMatrix(this);
      CSimpleTransform::UpdateMatrix((CEntity *)((char *)this + 4), *((CMatrix **)this + 5));
      v10 = (float *)*((_DWORD *)this + 5);
    }
    goto LABEL_9;
  }
LABEL_8:
  v16 = a3 + 1;
  v17 = a3[1];
  v18 = v14 - v10[12];
LABEL_9:
  v19 = v10[13];
  CEntity::GetBoundCentre((CEntity *)v31);
  result = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)]) + 44);
  if ( (float)(v31[0] + *(float *)(result + 36)) >= *a3 )
  {
    CEntity::GetBoundCentre((CEntity *)v29);
    result = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)]) + 44);
    if ( (float)(v30 + *(float *)(result + 36)) >= *v16 )
    {
      CEntity::GetBoundCentre((CEntity *)v28);
      result = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)]) + 44);
      if ( (float)(v28[0] - *(float *)(result + 36)) <= (float)(*a3 + 28.0) )
      {
        CEntity::GetBoundCentre((CEntity *)v27);
        result = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)]) + 44);
        if ( (float)(v27[1] - *(float *)(result + 36)) <= (float)(*v16 + 28.0) )
        {
          for ( result = 0; result != 40; ++result )
          {
            v20 = a2;
            v21 = 0;
            v22 = v18 + (float)((float)(__int16)result * 0.7);
            v23 = v22 * v11;
            v24 = v13 * v22;
            do
            {
              if ( !*v20 )
              {
                v25 = (float)(v17 - v19) + (float)((float)(__int16)v21 * 0.7);
                if ( fabsf(v24 + (float)(v15 * v25)) < (float)(v9 + 0.3) )
                {
                  v26 = v23 + (float)(v25 * v12);
                  if ( v26 < (float)(v7 + 0.3) && v26 > (float)(v8 + -0.3) )
                    *v20 = 1;
                }
              }
              ++v21;
              v20 += 16;
            }
            while ( v21 != 40 );
            a2 += 640;
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x31c42c
// Original: _ZN8CPedPath29AddBuildingBlockadeSectorListER8CPtrListPA40_12CPedPathNodeP7CVector
// Demangled: CPedPath::AddBuildingBlockadeSectorList(CPtrList &,CPedPathNode (*)[40],CVector *)
__int64 **__fastcall CPedPath::AddBuildingBlockadeSectorList(__int64 **result)
{
  __int64 *i; // r6
  __int64 v2; // kr00_8
  int v3; // r2
  bool v4; // zf

  for ( i = *result; i; result = (__int64 **)CPedPath::AddBuildingBlockade((CEntity *)v2) )
  {
    while ( 1 )
    {
      v2 = *i;
      i = (__int64 *)*((_DWORD *)i + 1);
      result = (__int64 **)v2;
      v3 = *(unsigned __int16 *)(v2 + 48);
      v4 = v3 == (unsigned __int16)CWorld::ms_nCurrentScanCode;
      if ( v3 != (unsigned __int16)CWorld::ms_nCurrentScanCode )
        v4 = *(unsigned __int8 *)(v2 + 28) << 31 == 0;
      if ( !v4 )
        break;
      if ( !i )
        return result;
    }
    *(_WORD *)(v2 + 48) = CWorld::ms_nCurrentScanCode;
  }
  return result;
}


// ============================================================
