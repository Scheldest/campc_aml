
// Address: 0x18d728
// Original: j__ZN16cHandlingDataMgr13FindExactWordEPcS0_ii
// Demangled: cHandlingDataMgr::FindExactWord(char *,char *,int,int)
// attributes: thunk
int __fastcall cHandlingDataMgr::FindExactWord(cHandlingDataMgr *this, char *a2, char *a3, int a4, int a5)
{
  return _ZN16cHandlingDataMgr13FindExactWordEPcS0_ii(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x18ff88
// Original: j__ZN16cHandlingDataMgr16LoadHandlingDataEv
// Demangled: cHandlingDataMgr::LoadHandlingData(void)
// attributes: thunk
int __fastcall cHandlingDataMgr::LoadHandlingData(cHandlingDataMgr *this)
{
  return _ZN16cHandlingDataMgr16LoadHandlingDataEv(this);
}


// ============================================================

// Address: 0x192a8c
// Original: j__ZN16cHandlingDataMgr22ConvertDataToGameUnitsEP13tHandlingData
// Demangled: cHandlingDataMgr::ConvertDataToGameUnits(tHandlingData *)
// attributes: thunk
int cHandlingDataMgr::ConvertDataToGameUnits()
{
  return _ZN16cHandlingDataMgr22ConvertDataToGameUnitsEP13tHandlingData();
}


// ============================================================

// Address: 0x199178
// Original: j__ZN16cHandlingDataMgr13GetHandlingIdEPKc
// Demangled: cHandlingDataMgr::GetHandlingId(char const*)
// attributes: thunk
int __fastcall cHandlingDataMgr::GetHandlingId(cHandlingDataMgr *this, const char *a2)
{
  return _ZN16cHandlingDataMgr13GetHandlingIdEPKc(this, a2);
}


// ============================================================

// Address: 0x19c024
// Original: j__ZN16cHandlingDataMgr14GetBoatPointerEh
// Demangled: cHandlingDataMgr::GetBoatPointer(uchar)
// attributes: thunk
int __fastcall cHandlingDataMgr::GetBoatPointer(cHandlingDataMgr *this, unsigned __int8 a2)
{
  return _ZN16cHandlingDataMgr14GetBoatPointerEh(this, a2);
}


// ============================================================

// Address: 0x19d1fc
// Original: j__ZN16cHandlingDataMgr26ConvertBikeDataToGameUnitsEP17tBikeHandlingData
// Demangled: cHandlingDataMgr::ConvertBikeDataToGameUnits(tBikeHandlingData *)
// attributes: thunk
int cHandlingDataMgr::ConvertBikeDataToGameUnits()
{
  return _ZN16cHandlingDataMgr26ConvertBikeDataToGameUnitsEP17tBikeHandlingData();
}


// ============================================================

// Address: 0x19decc
// Original: j__ZN16cHandlingDataMgr16GetFlyingPointerEh
// Demangled: cHandlingDataMgr::GetFlyingPointer(uchar)
// attributes: thunk
int __fastcall cHandlingDataMgr::GetFlyingPointer(cHandlingDataMgr *this, unsigned __int8 a2)
{
  return _ZN16cHandlingDataMgr16GetFlyingPointerEh(this, a2);
}


// ============================================================

// Address: 0x470d60
// Original: _ZN16cHandlingDataMgr10InitialiseEv
// Demangled: cHandlingDataMgr::Initialise(void)
int __fastcall cHandlingDataMgr::Initialise(cHandlingDataMgr *this)
{
  int result; // r0

  cHandlingDataMgr::LoadHandlingData(this);
  result = 1065017672;
  *(_QWORD *)this = 0x3F6666663DCCCCCDLL;
  *((_QWORD *)this + 1) = 0x3F4CCCCD3F800000LL;
  *((_DWORD *)this + 4) = 1065017672;
  return result;
}


// ============================================================

// Address: 0x4731d8
// Original: _ZN16cHandlingDataMgr16LoadHandlingDataEv
// Demangled: cHandlingDataMgr::LoadHandlingData(void)
int __fastcall cHandlingDataMgr::LoadHandlingData(cHandlingDataMgr *this, const char *a2)
{
  const char *v2; // r2
  CFileLoader *v3; // r8
  const char *v4; // r1
  unsigned int v5; // r1
  const char *v6; // r4
  char *v7; // r11
  int v8; // r9
  char *v9; // r10
  int v10; // r0
  char *v11; // r11
  float v12; // s0
  float v13; // s0
  float v14; // s0
  float v15; // s0
  float v16; // s0
  float v17; // s0
  float v18; // s0
  float v19; // s0
  float v20; // s0
  float v21; // s0
  float v22; // s0
  float v23; // s0
  float v24; // s0
  float v25; // s0
  float v26; // s0
  float v27; // s0
  float v28; // s0
  float v29; // s0
  float v30; // s0
  float v31; // s0
  float v32; // s0
  float v33; // s0
  float v34; // s0
  float v35; // s0
  char v36; // r4
  char *v37; // r3
  const char *v38; // r9
  int ExactWord; // r4
  int BoatPointer; // r6
  float v41; // s0
  float v42; // s0
  float v43; // s0
  float v44; // s0
  float v45; // s0
  float v46; // s0
  float v47; // s0
  float v48; // s0
  float v49; // s0
  float v50; // s0
  float v51; // s0
  float v52; // s0
  float v53; // s0
  float v54; // s0
  char v55; // r10
  const char *Line; // r0
  unsigned int v57; // r1
  char *v58; // r9
  char *v59; // r0
  char v60; // r4
  char *v61; // r0
  int v62; // r9
  int v63; // r11
  char **v64; // s0
  char **v65; // s0
  char **v66; // s0
  char **v67; // s0
  char **v68; // s0
  char **v69; // s0
  char **v70; // s0
  char **v71; // s0
  char **v72; // s0
  char **v73; // s0
  char **v74; // s0
  char **v75; // s0
  char **v76; // s0
  char *v78; // [sp+8h] [bp-90h]
  char v79; // [sp+10h] [bp-88h]
  char v80; // [sp+14h] [bp-84h]
  int v81; // [sp+18h] [bp-80h]
  char **v82; // [sp+1Ch] [bp-7Ch]
  char **v83; // [sp+20h] [bp-78h]
  char **v84; // [sp+24h] [bp-74h]
  char **v85; // [sp+28h] [bp-70h]
  char **v86; // [sp+2Ch] [bp-6Ch]
  char **v87; // [sp+30h] [bp-68h]
  char **v88; // [sp+34h] [bp-64h]
  char **v89; // [sp+38h] [bp-60h]
  char **v90; // [sp+3Ch] [bp-5Ch]
  char **v91; // [sp+40h] [bp-58h]
  char **v92; // [sp+44h] [bp-54h]
  char **v93; // [sp+48h] [bp-50h]
  char **v94; // [sp+4Ch] [bp-4Ch]
  int v95; // [sp+54h] [bp-44h]
  char *v96; // [sp+58h] [bp-40h]
  int v97; // [sp+5Ch] [bp-3Ch]
  char v99[4]; // [sp+68h] [bp-30h] BYREF
  char v100[4]; // [sp+6Ch] [bp-2Ch] BYREF
  char v101[4]; // [sp+70h] [bp-28h] BYREF

  CFileMgr::SetDir((CFileMgr *)"DATA", a2);
  v3 = (CFileLoader *)CFileMgr::OpenFile((CFileMgr *)"HANDLING.CFG", "rb", v2);
  CFileMgr::SetDir((CFileMgr *)&byte_61CD7E, v4);
  v6 = ";the end";
  v7 = 0;
  v8 = 0;
  v9 = VehicleNames;
  v94 = &VehicleNames_ptr;
  v93 = &VehicleNames_ptr;
  v92 = &VehicleNames_ptr;
  v91 = &VehicleNames_ptr;
  v90 = &VehicleNames_ptr;
  v89 = &VehicleNames_ptr;
  v88 = &VehicleNames_ptr;
  v87 = &VehicleNames_ptr;
  v86 = &VehicleNames_ptr;
  v85 = &VehicleNames_ptr;
  v84 = &VehicleNames_ptr;
  v83 = &VehicleNames_ptr;
  v82 = &VehicleNames_ptr;
  v95 = 0;
  v81 = 0;
  v80 = 0;
  v79 = 0;
LABEL_41:
  v96 = v7;
  v97 = v8;
  while ( 2 )
  {
    Line = (const char *)CFileLoader::LoadLine(v3, v5);
    v58 = (char *)Line;
    if ( Line && strcmp(Line, v6) )
    {
      v5 = (unsigned __int8)*v58;
      switch ( *v58 )
      {
        case '!':
        case '$':
          v6 = ";the end";
          v9 = v78;
          continue;
        case '"':
        case '#':
        case '&':
        case '\'':
        case '(':
        case ')':
        case '*':
        case '+':
        case ',':
        case '-':
        case '.':
        case '/':
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case ':':
          goto LABEL_65;
        case '%':
          v78 = v9;
          v55 = 0;
          strcpy(v101, " \t");
          BoatPointer = v95;
          v5 = (unsigned int)strtok(v58, v101);
          do
          {
            switch ( v55 )
            {
              case 1:
                v38 = v6;
                ExactWord = cHandlingDataMgr::FindExactWord(this, (char *)v5, v78, 14, 210);
                BoatPointer = cHandlingDataMgr::GetBoatPointer(this, ExactWord);
                *(_DWORD *)BoatPointer = ExactWord;
                v6 = v38;
                break;
              case 2:
                v41 = atof((const char *)v5);
                *(float *)(BoatPointer + 4) = v41;
                break;
              case 3:
                v42 = atof((const char *)v5);
                *(float *)(BoatPointer + 8) = v42;
                break;
              case 4:
                v43 = atof((const char *)v5);
                *(float *)(BoatPointer + 12) = v43;
                break;
              case 5:
                v44 = atof((const char *)v5);
                *(float *)(BoatPointer + 16) = v44;
                break;
              case 6:
                v45 = atof((const char *)v5);
                *(float *)(BoatPointer + 20) = v45;
                break;
              case 7:
                v46 = atof((const char *)v5);
                *(float *)(BoatPointer + 24) = v46;
                break;
              case 8:
                v47 = atof((const char *)v5);
                *(float *)(BoatPointer + 28) = v47;
                break;
              case 9:
                v48 = atof((const char *)v5);
                *(float *)(BoatPointer + 36) = v48;
                break;
              case 10:
                v49 = atof((const char *)v5);
                *(float *)(BoatPointer + 40) = v49;
                break;
              case 11:
                v50 = atof((const char *)v5);
                *(float *)(BoatPointer + 44) = v50;
                break;
              case 12:
                v51 = atof((const char *)v5);
                *(float *)(BoatPointer + 48) = v51;
                break;
              case 13:
                v52 = atof((const char *)v5);
                *(float *)(BoatPointer + 52) = v52;
                break;
              case 14:
                v53 = atof((const char *)v5);
                *(float *)(BoatPointer + 56) = v53;
                break;
              case 15:
                v54 = atof((const char *)v5);
                *(float *)(BoatPointer + 32) = v54;
                break;
              default:
                break;
            }
            ++v55;
            v5 = (unsigned int)strtok(0, v101);
          }
          while ( v5 );
          v95 = BoatPointer;
          v9 = v78;
          continue;
        case ';':
          continue;
        default:
          if ( v5 == 94 )
          {
            v60 = 0;
            strcpy(v100, " \t");
            v61 = strtok(v58, v100);
            v62 = 0;
            v63 = 0;
            do
            {
              switch ( v60 )
              {
                case 1:
                  v81 = atoi(v61);
                  break;
                case 2:
                  v80 = atoi(v61);
                  break;
                case 3:
                  v79 = atoi(v61);
                  break;
                case 4:
                  if ( atoi(v61) )
                    v62 |= 1u;
                  break;
                case 5:
                  if ( atoi(v61) )
                    v62 |= 2u;
                  break;
                case 6:
                  if ( atoi(v61) )
                    v62 |= 4u;
                  break;
                case 7:
                  if ( atoi(v61) )
                    v62 |= 8u;
                  break;
                case 8:
                  if ( atoi(v61) )
                    v62 |= 0x10u;
                  break;
                case 9:
                  if ( atoi(v61) )
                    v62 |= 0x20u;
                  break;
                case 10:
                  if ( atoi(v61) )
                    v62 |= 0x40u;
                  break;
                case 11:
                  if ( atoi(v61) )
                    v62 |= 0x80u;
                  break;
                case 12:
                  if ( atoi(v61) )
                    v62 |= 0x100u;
                  break;
                case 13:
                  if ( atoi(v61) )
                    v62 |= 0x200u;
                  break;
                case 14:
                  if ( atoi(v61) )
                    v62 |= 0x400u;
                  break;
                case 15:
                  if ( atoi(v61) )
                    v62 |= 0x800u;
                  break;
                case 16:
                  if ( atoi(v61) )
                    v62 |= 0x1000u;
                  break;
                case 17:
                  if ( atoi(v61) )
                    v62 |= 0x2000u;
                  break;
                case 18:
                  if ( atoi(v61) )
                    v62 |= 0x4000u;
                  break;
                case 19:
                  if ( atoi(v61) )
                    v62 |= 0x8000u;
                  break;
                case 20:
                  if ( atoi(v61) )
                    v62 |= 0x10000u;
                  break;
                case 21:
                  if ( atoi(v61) )
                    v62 |= 0x20000u;
                  break;
                case 22:
                  *(float *)&v64 = atof(v61);
                  v86 = v64;
                  break;
                case 23:
                  *(float *)&v65 = atof(v61);
                  v85 = v65;
                  break;
                case 24:
                  *(float *)&v66 = atof(v61);
                  v84 = v66;
                  break;
                case 25:
                  *(float *)&v67 = atof(v61);
                  v83 = v67;
                  break;
                case 26:
                  *(float *)&v68 = atof(v61);
                  v82 = v68;
                  break;
                case 27:
                  *(float *)&v69 = atof(v61);
                  v90 = v69;
                  break;
                case 28:
                  *(float *)&v70 = atof(v61);
                  v94 = v70;
                  break;
                case 29:
                  *(float *)&v71 = atof(v61);
                  v89 = v71;
                  break;
                case 30:
                  *(float *)&v72 = atof(v61);
                  v93 = v72;
                  break;
                case 31:
                  *(float *)&v73 = atof(v61);
                  v88 = v73;
                  break;
                case 32:
                  *(float *)&v74 = atof(v61);
                  v92 = v74;
                  break;
                case 33:
                  *(float *)&v75 = atof(v61);
                  v87 = v75;
                  break;
                case 34:
                  *(float *)&v76 = atof(v61);
                  v91 = v76;
                  break;
                case 35:
                  v63 = atoi(v61);
                  break;
                default:
                  break;
              }
              v61 = strtok(0, v100);
              ++v60;
            }
            while ( v61 );
            v6 = ";the end";
            v5 = (unsigned int)&CVehicleAnimGroupData::m_vehicleAnimGroups[74 * v81];
            *(_BYTE *)v5 = v80 + 88;
            *(_BYTE *)(v5 + 1) = v79 + 88;
            *(_DWORD *)(v5 + 4) = v62;
            *(_DWORD *)(v5 + 8) = v63;
            *(_DWORD *)(v5 + 12) = v86;
            *(_DWORD *)(v5 + 16) = v85;
            *(_DWORD *)(v5 + 20) = v84;
            *(_DWORD *)(v5 + 24) = v83;
            *(_DWORD *)(v5 + 28) = v82;
            *(_DWORD *)(v5 + 32) = v90;
            *(_DWORD *)(v5 + 36) = v89;
            *(_DWORD *)(v5 + 40) = v88;
            *(_DWORD *)(v5 + 44) = v87;
            *(_DWORD *)(v5 + 48) = v94;
            *(_DWORD *)(v5 + 52) = v93;
            *(_DWORD *)(v5 + 56) = v92;
            *(_DWORD *)(v5 + 60) = v91;
            v7 = v96;
            v8 = v97;
          }
          else
          {
LABEL_65:
            v36 = 0;
            v78 = v9;
            strcpy(v99, " \t");
            v59 = strtok(v58, v99);
            v8 = v97;
            v37 = v59;
            do
            {
              switch ( v36 )
              {
                case 0:
                  v10 = cHandlingDataMgr::FindExactWord(this, v37, VehicleNames, 14, 210);
                  v11 = (char *)this + 224 * v10;
                  *((_DWORD *)v11 + 5) = v10;
                  v7 = v11 + 20;
                  break;
                case 1:
                  v12 = atof(v37);
                  *((float *)v7 + 1) = v12;
                  break;
                case 2:
                  v13 = atof(v37);
                  *((float *)v7 + 3) = v13;
                  break;
                case 3:
                  v14 = atof(v37);
                  *((float *)v7 + 4) = v14;
                  break;
                case 4:
                  v15 = atof(v37);
                  *((float *)v7 + 5) = v15;
                  break;
                case 5:
                  v16 = atof(v37);
                  *((float *)v7 + 6) = v16;
                  break;
                case 6:
                  v17 = atof(v37);
                  *((float *)v7 + 7) = v17;
                  break;
                case 7:
                  v7[32] = atoi(v37);
                  break;
                case 8:
                  v18 = atof(v37);
                  *((float *)v7 + 10) = v18;
                  break;
                case 9:
                  v19 = atof(v37);
                  *((float *)v7 + 41) = v19;
                  break;
                case 10:
                  v20 = atof(v37);
                  *((float *)v7 + 42) = v20;
                  break;
                case 11:
                  v7[118] = atoi(v37);
                  break;
                case 12:
                  v21 = atof(v37);
                  *((float *)v7 + 33) = v21;
                  break;
                case 13:
                  v22 = atof(v37) * 0.4;
                  *((float *)v7 + 31) = v22;
                  break;
                case 14:
                  v23 = atof(v37);
                  *((float *)v7 + 32) = v23;
                  break;
                case 15:
                  v7[116] = *v37;
                  break;
                case 16:
                  v7[117] = *v37;
                  break;
                case 17:
                  v24 = atof(v37);
                  *((float *)v7 + 37) = v24;
                  break;
                case 18:
                  v25 = atof(v37);
                  *((float *)v7 + 38) = v25;
                  break;
                case 19:
                  v7[156] = atoi(v37) != 0;
                  break;
                case 20:
                  v26 = atof(v37);
                  *((float *)v7 + 40) = v26;
                  break;
                case 21:
                  v27 = atof(v37);
                  *((float *)v7 + 43) = v27;
                  break;
                case 22:
                  v28 = atof(v37);
                  *((float *)v7 + 44) = v28;
                  break;
                case 23:
                  v29 = atof(v37);
                  *((float *)v7 + 45) = v29;
                  break;
                case 24:
                  v30 = atof(v37);
                  *((float *)v7 + 46) = v30;
                  break;
                case 25:
                  v31 = atof(v37);
                  *((float *)v7 + 47) = v31;
                  break;
                case 26:
                  v32 = atof(v37);
                  *((float *)v7 + 48) = v32;
                  break;
                case 27:
                  v33 = atof(v37);
                  *((float *)v7 + 49) = v33;
                  break;
                case 28:
                  v34 = atof(v37);
                  *((float *)v7 + 53) = v34;
                  break;
                case 29:
                  v35 = atof(v37);
                  *((float *)v7 + 50) = v35;
                  break;
                case 30:
                  *((_DWORD *)v7 + 54) = atoi(v37);
                  break;
                case 31:
                  sscanf(v37, (const char *)&dword_473F38, v7 + 204);
                  break;
                case 32:
                  sscanf(v37, (const char *)&dword_473F38, v7 + 208);
                  *((_DWORD *)v7 + 30) = *((_DWORD *)v7 + 52);
                  break;
                case 33:
                  v7[220] = atoi(v37);
                  break;
                case 34:
                  v7[221] = atoi(v37);
                  break;
                case 35:
                  v7[222] = atoi(v37);
                  break;
                default:
                  break;
              }
              ++v36;
              v37 = strtok(0, v99);
            }
            while ( v37 );
            cHandlingDataMgr::ConvertDataToGameUnits();
            v6 = ";the end";
          }
          goto LABEL_41;
      }
    }
    return j_CFileMgr::CloseFile(v3, v57);
  }
}


// ============================================================

// Address: 0x570c00
// Original: _ZN16cHandlingDataMgr13FindExactWordEPcS0_ii
// Demangled: cHandlingDataMgr::FindExactWord(char *,char *,int,int)
int __fastcall cHandlingDataMgr::FindExactWord(cHandlingDataMgr *this, char *a2, char *a3, int a4, int a5)
{
  int v5; // r9
  int v8; // r4
  int v9; // r8
  size_t v10; // r5
  int v11; // r0
  char v14[20]; // [sp+4h] [bp-34h] BYREF

  v5 = a5;
  v8 = 0;
  v9 = 0;
  do
  {
    v10 = strlen(a3);
    strncpy(v14, a3, v10);
    v11 = strncmp(a2, v14, v10);
    v8 |= v11 == 0;
    if ( (v8 & 1) == 0 )
      a3 += a4;
    v9 += v11 != 0;
  }
  while ( v9 < a5 && !(v8 << 31) );
  if ( v8 << 31 )
    return v9;
  return v5;
}


// ============================================================

// Address: 0x570c94
// Original: _ZN16cHandlingDataMgrC2Ev
// Demangled: cHandlingDataMgr::cHandlingDataMgr(void)
void __fastcall cHandlingDataMgr::cHandlingDataMgr(cHandlingDataMgr *this)
{
  int i; // r5

  for ( i = 64; i != 47104; i += 224 )
    cTransmission::cTransmission((cHandlingDataMgr *)((char *)this + i));
  memset(this, 0, 0xC624u);
}


// ============================================================

// Address: 0x570cb8
// Original: _ZN16cHandlingDataMgr13GetHandlingIdEPKc
// Demangled: cHandlingDataMgr::GetHandlingId(char const*)
int __fastcall cHandlingDataMgr::GetHandlingId(cHandlingDataMgr *this, const char *a2)
{
  int v3; // r6
  const char *v4; // r5

  v3 = -1;
  v4 = VehicleNames;
  do
  {
    if ( !strncmp(a2, v4, 0xEu) )
      break;
    ++v3;
    v4 += 14;
  }
  while ( v3 < 209 );
  return v3 + 1;
}


// ============================================================

// Address: 0x570cec
// Original: _ZN16cHandlingDataMgr23ConvertDataToWorldUnitsEP13tHandlingData
// Demangled: cHandlingDataMgr::ConvertDataToWorldUnits(tHandlingData *)
int __fastcall cHandlingDataMgr::ConvertDataToWorldUnits(int a1, int a2)
{
  float v2; // s10
  float v3; // s4
  int result; // r0
  float v5; // s8
  float v6; // s2

  v2 = 0.5;
  v3 = *(float *)(a2 + 124) / 0.0004;
  result = *(unsigned __int8 *)(a2 + 116);
  v5 = *(float *)(a2 + 148);
  v6 = *(float *)(a2 + 200) * *(float *)(a2 + 4);
  if ( result == 52 )
    v2 = 0.25;
  *(float *)(a2 + 132) = *(float *)(a2 + 132) / 0.0055556;
  *(float *)(a2 + 148) = v5 / 0.0004;
  *(float *)(a2 + 200) = v6 / 2000.0;
  *(float *)(a2 + 124) = v3 / v2;
  return result;
}


// ============================================================

// Address: 0x570d58
// Original: _ZN16cHandlingDataMgr22ConvertDataToGameUnitsEP13tHandlingData
// Demangled: cHandlingDataMgr::ConvertDataToGameUnits(tHandlingData *)
int __fastcall cHandlingDataMgr::ConvertDataToGameUnits(int a1, int a2)
{
  float v2; // s2
  float v3; // s3
  float v4; // s12
  float v5; // s8
  float v6; // s10
  float v7; // s0
  float v8; // s2
  float v9; // s8
  float v10; // s12
  float v11; // s6
  float v12; // s3

  v2 = *(float *)(a2 + 4);
  v3 = *(float *)(a2 + 148);
  v4 = 1.0 / v2;
  v5 = (float)(*(float *)(a2 + 200) * 2000.0) / v2;
  v6 = (float)((float)(v2 * 0.008) * 100.0) / (float)*(unsigned __int8 *)(a2 + 32);
  v7 = *(float *)(a2 + 124) * 0.0004;
  v8 = *(float *)(a2 + 132) * 0.0055556;
  *(float *)(a2 + 124) = v7;
  *(float *)(a2 + 132) = v8;
  *(float *)(a2 + 148) = v3 * 0.0004;
  *(float *)(a2 + 8) = v4;
  *(float *)(a2 + 200) = v5;
  *(float *)(a2 + 36) = v6;
  if ( v8 > 0.0 )
  {
    v9 = *(float *)(a2 + 16);
    v11 = v8;
    do
    {
      v11 = v11 + -0.01;
      if ( v9 >= 0.01 )
        v12 = (float)(v11 * v11) * (float)((float)(v9 * 0.5) / 1000.0);
      else
        v12 = -(float)((float)((float)(1.0 / (float)((float)((float)(v9 * v11) * v11) + 1.0)) + -1.0) * v11);
      v10 = v7 * 0.166666667;
    }
    while ( v12 > v10 );
  }
  if ( *(_DWORD *)a2 == 38 )
  {
    *(float *)(a2 + 136) = v8;
    JUMPOUT(0x570EC0);
  }
  if ( *(unsigned __int8 *)(a2 + 211) << 31 )
    JUMPOUT(0x570E92);
  return sub_3F65F0((CHud *)(a2 + 44), a2);
}


// ============================================================

// Address: 0x570f24
// Original: _ZN16cHandlingDataMgr27ConvertBikeDataToWorldUnitsEP17tBikeHandlingData
// Demangled: cHandlingDataMgr::ConvertBikeDataToWorldUnits(tBikeHandlingData *)
float __fastcall cHandlingDataMgr::ConvertBikeDataToWorldUnits(int a1, float *a2)
{
  float v3; // s0
  float v4; // r0
  float v5; // s2
  float v6; // s0
  float v7; // r0
  float result; // r0

  v3 = asinf(a2[5]) * 180.0;
  v4 = a2[11];
  v5 = (float)(a2[6] * 180.0) / 3.1416;
  a2[5] = v3 / 3.1416;
  a2[6] = v5;
  v6 = asinf(v4);
  v7 = a2[12];
  a2[11] = (float)(v6 * 180.0) / 3.1416;
  result = asinf(v7);
  a2[12] = (float)(result * 180.0) / 3.1416;
  return result;
}


// ============================================================

// Address: 0x570f98
// Original: _ZN16cHandlingDataMgr26ConvertBikeDataToGameUnitsEP17tBikeHandlingData
// Demangled: cHandlingDataMgr::ConvertBikeDataToGameUnits(tBikeHandlingData *)
float __fastcall cHandlingDataMgr::ConvertBikeDataToGameUnits(int a1, float *a2)
{
  float v3; // s4
  float v4; // s6
  float v5; // r0
  float result; // r0

  v3 = (float)(a2[11] * 3.1416) / 180.0;
  v4 = (float)(a2[12] * 3.1416) / 180.0;
  v5 = (float)(a2[5] * 3.1416) / 180.0;
  a2[6] = (float)(a2[6] * 3.1416) / 180.0;
  a2[5] = sinf(v5);
  a2[11] = sinf(v3);
  result = sinf(v4);
  a2[12] = result;
  return result;
}


// ============================================================

// Address: 0x571010
// Original: _ZN16cHandlingDataMgr16GetFlyingPointerEh
// Demangled: cHandlingDataMgr::GetFlyingPointer(uchar)
char *__fastcall cHandlingDataMgr::GetFlyingPointer(cHandlingDataMgr *this, int a2)
{
  int v2; // r3

  v2 = 0;
  if ( (unsigned __int8)(a2 + 70) < 0x18u )
    v2 = a2 - 186;
  return (char *)this + 88 * v2 + 47892;
}


// ============================================================

// Address: 0x57102e
// Original: _ZN16cHandlingDataMgr14GetBoatPointerEh
// Demangled: cHandlingDataMgr::GetBoatPointer(uchar)
char *__fastcall cHandlingDataMgr::GetBoatPointer(cHandlingDataMgr *this, int a2)
{
  int v2; // r3

  v2 = 0;
  if ( (unsigned __int8)(a2 + 81) < 0xCu )
    v2 = a2 - 175;
  return (char *)this + 60 * v2 + 50004;
}


// ============================================================
