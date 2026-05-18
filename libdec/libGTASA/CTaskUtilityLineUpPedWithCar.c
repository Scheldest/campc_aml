
// Address: 0x191244
// Original: j__ZN28CTaskUtilityLineUpPedWithCar10ProcessPedEP4CPedP8CVehicleP21CAnimBlendAssociation
// Demangled: CTaskUtilityLineUpPedWithCar::ProcessPed(CPed *,CVehicle *,CAnimBlendAssociation *)
// attributes: thunk
int __fastcall CTaskUtilityLineUpPedWithCar::ProcessPed(
        CTaskUtilityLineUpPedWithCar *this,
        CPed *a2,
        CVehicle *a3,
        CAnimBlendAssociation *a4)
{
  return _ZN28CTaskUtilityLineUpPedWithCar10ProcessPedEP4CPedP8CVehicleP21CAnimBlendAssociation(this, a2, a3, a4);
}


// ============================================================

// Address: 0x195f20
// Original: j__ZN28CTaskUtilityLineUpPedWithCarC2ERK7CVectoriii
// Demangled: CTaskUtilityLineUpPedWithCar::CTaskUtilityLineUpPedWithCar(CVector const&,int,int,int)
// attributes: thunk
void __fastcall CTaskUtilityLineUpPedWithCar::CTaskUtilityLineUpPedWithCar(
        CTaskUtilityLineUpPedWithCar *this,
        const CVector *a2,
        int a3,
        int a4,
        int a5)
{
  _ZN28CTaskUtilityLineUpPedWithCarC2ERK7CVectoriii(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x19af64
// Original: j__ZN28CTaskUtilityLineUpPedWithCarD2Ev
// Demangled: CTaskUtilityLineUpPedWithCar::~CTaskUtilityLineUpPedWithCar()
// attributes: thunk
void __fastcall CTaskUtilityLineUpPedWithCar::~CTaskUtilityLineUpPedWithCar(CTaskUtilityLineUpPedWithCar *this)
{
  _ZN28CTaskUtilityLineUpPedWithCarD2Ev(this);
}


// ============================================================

// Address: 0x19e57c
// Original: j__ZN28CTaskUtilityLineUpPedWithCar29GetLocalPositionToOpenCarDoorEP8CVehiclefP21CAnimBlendAssociation
// Demangled: CTaskUtilityLineUpPedWithCar::GetLocalPositionToOpenCarDoor(CVehicle *,float,CAnimBlendAssociation *)
// attributes: thunk
int __fastcall CTaskUtilityLineUpPedWithCar::GetLocalPositionToOpenCarDoor(
        CTaskUtilityLineUpPedWithCar *this,
        CVehicle *a2,
        float a3,
        CAnimBlendAssociation *a4)
{
  return _ZN28CTaskUtilityLineUpPedWithCar29GetLocalPositionToOpenCarDoorEP8CVehiclefP21CAnimBlendAssociation(
           this,
           a2,
           a3,
           a4);
}


// ============================================================

// Address: 0x509484
// Original: _ZN28CTaskUtilityLineUpPedWithCarC2ERK7CVectoriii
// Demangled: CTaskUtilityLineUpPedWithCar::CTaskUtilityLineUpPedWithCar(CVector const&,int,int,int)
void __fastcall CTaskUtilityLineUpPedWithCar::CTaskUtilityLineUpPedWithCar(
        CTaskUtilityLineUpPedWithCar *this,
        const CVector *a2,
        int a3,
        int a4,
        int a5)
{
  __int64 v5; // d16
  int v6; // r1

  v5 = *(_QWORD *)a2;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = -998637732;
  *(_QWORD *)this = v5;
  v6 = CTimer::m_snTimeInMilliseconds;
  *((_DWORD *)this + 5) = a4;
  *((_DWORD *)this + 6) = a5;
  *((_DWORD *)this + 4) = v6 + a3;
}


// ============================================================

// Address: 0x5094c0
// Original: _ZN28CTaskUtilityLineUpPedWithCarD2Ev
// Demangled: CTaskUtilityLineUpPedWithCar::~CTaskUtilityLineUpPedWithCar()
void __fastcall CTaskUtilityLineUpPedWithCar::~CTaskUtilityLineUpPedWithCar(CTaskUtilityLineUpPedWithCar *this)
{
  ;
}


// ============================================================

// Address: 0x5094c8
// Original: _ZN28CTaskUtilityLineUpPedWithCar10ProcessPedEP4CPedP8CVehicleP21CAnimBlendAssociation
// Demangled: CTaskUtilityLineUpPedWithCar::ProcessPed(CPed *,CVehicle *,CAnimBlendAssociation *)
int __fastcall CTaskUtilityLineUpPedWithCar::ProcessPed(
        CTaskUtilityLineUpPedWithCar *this,
        CPed *a2,
        CVehicle *a3,
        CAnimBlendAssociation *a4)
{
  int v8; // r0
  int v9; // r1
  float v10; // s18
  unsigned int v11; // r4
  float v12; // s0
  float v13; // s0
  float v14; // s20
  int v15; // r4
  float v16; // s22
  float v17; // s22
  float v18; // s24
  CVehicleAnimGroup *v19; // r5
  float v20; // r0
  float v21; // s0
  float v22; // s2
  float v23; // s4
  float v24; // s20
  float v25; // s22
  CVehicleAnimGroup *v26; // r10
  float v27; // r0
  float v28; // s2
  float v29; // s4
  float v30; // s6
  CVehicleAnimGroup *v31; // r10
  float v32; // r0
  float v33; // s4
  float v34; // s0
  float v35; // s2
  CVehicleAnimGroup *v36; // r10
  int v37; // r0
  float *v38; // r1
  float v39; // r5
  float v40; // r10
  float v41; // r0
  int v42; // r0
  float *v43; // r1
  float v44; // s2
  float v45; // s4
  int v46; // r0
  bool v47; // zf
  int v48; // r0
  float *v49; // r1
  float v50; // s2
  float v51; // s4
  float *v52; // r0
  float *v53; // r1
  float v54; // s24
  float v55; // s28
  float v56; // s30
  float v57; // s2
  float v58; // s4
  float v59; // s0
  float v60; // r4
  float v61; // s26
  CVector *v62; // r1
  float v63; // s0
  int v64; // r0
  float v65; // s26
  float v66; // s24
  float v67; // s28
  float v68; // r4
  float v69; // r0
  float v70; // s0
  int v71; // r2
  float *v72; // r1
  float v73; // s2
  float v74; // r4
  float v75; // s2
  int v76; // r0
  float v77; // s2
  int v78; // r1
  float *v79; // r2
  float v80; // s24
  float v81; // r1
  float v82; // s4
  float v83; // s2
  float v84; // s0
  float v85; // s8
  float v86; // s6
  float v87; // s6
  float v88; // s8
  float v89; // s12
  int v90; // r0
  float v91; // s16
  float v92; // s18
  const float *v93; // r0
  int v94; // r0
  bool v95; // zf
  int v96; // r0
  float *v97; // r0
  CMatrix *v98; // r0
  float v99; // s16
  float v100; // s18
  const float *v101; // r0
  float *v102; // r0
  float v103; // s16
  float v104; // s18
  float v105; // s20
  float *v106; // r0
  float v107; // s2
  float v108; // s4
  CMatrix *v109; // r0
  float v111; // [sp+14h] [bp-244h]
  int v112; // [sp+78h] [bp-1E0h] BYREF
  int v113; // [sp+7Ch] [bp-1DCh]
  double v114; // [sp+E0h] [bp-178h]
  float v115; // [sp+E8h] [bp-170h]
  double v116; // [sp+120h] [bp-138h] BYREF
  float v117; // [sp+128h] [bp-130h]
  float v118; // [sp+150h] [bp-108h]
  float v119; // [sp+154h] [bp-104h]
  float v120; // [sp+158h] [bp-100h]
  int v121; // [sp+160h] [bp-F8h]
  int v122; // [sp+164h] [bp-F4h]
  double v123; // [sp+168h] [bp-F0h] BYREF
  float v124; // [sp+170h] [bp-E8h]
  _BYTE v125[48]; // [sp+1B0h] [bp-A8h] BYREF
  float v126; // [sp+1E0h] [bp-78h]
  float v127; // [sp+1E4h] [bp-74h]
  float v128; // [sp+1E8h] [bp-70h]

  if ( !*((_DWORD *)this + 5) )
  {
    *((_DWORD *)a2 + 18) = 0;
    *((_DWORD *)a2 + 19) = 0;
    *((_DWORD *)a2 + 20) = 0;
  }
  v8 = *((_DWORD *)a3 + 5);
  v9 = *((_DWORD *)this + 6);
  v10 = *(float *)(v8 + 40);
  if ( v10 > -0.8 )
  {
    if ( v9 == 18 )
    {
      if ( v8 )
        v13 = atan2f(COERCE_FLOAT(*(_DWORD *)(v8 + 16) ^ 0x80000000), *(float *)(v8 + 20));
      else
        v13 = *((float *)a3 + 4);
      v12 = v13 + 3.1416;
    }
    else
    {
      if ( *((_DWORD *)this + 5) == 2 )
        goto LABEL_19;
      if ( v8 )
        v12 = atan2f(COERCE_FLOAT(*(_DWORD *)(v8 + 16) ^ 0x80000000), *(float *)(v8 + 20));
      else
        v12 = *((float *)a3 + 4);
    }
  }
  else
  {
    v11 = v9 & 0xFFFFFFFE;
    if ( v8 )
      v12 = atan2f(COERCE_FLOAT(*(_DWORD *)(v8 + 16) ^ 0x80000000), *(float *)(v8 + 20));
    else
      v12 = *((float *)a3 + 4);
    if ( v11 == 8 )
      v12 = v12 + -3.1416;
  }
  *((float *)a2 + 344) = v12;
LABEL_19:
  v14 = 0.0;
  if ( a4 )
  {
    v15 = *((__int16 *)a4 + 22);
    v16 = 0.0;
    switch ( *((_WORD *)a4 + 22) )
    {
      case 0x6C:
      case 0x6D:
        v21 = *((float *)a4 + 8) / *(float *)(*((_DWORD *)a4 + 5) + 16);
        goto LABEL_46;
      case 0x6E:
      case 0x6F:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7A:
      case 0x7B:
      case 0x7C:
      case 0x7D:
      case 0x7E:
      case 0x7F:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8A:
      case 0x8B:
      case 0x8C:
      case 0x8D:
      case 0x8E:
      case 0x8F:
      case 0x90:
      case 0x91:
      case 0x92:
      case 0x93:
      case 0x94:
      case 0x95:
      case 0x96:
      case 0x97:
      case 0x98:
      case 0x99:
      case 0x9A:
      case 0x9B:
      case 0x9C:
      case 0x9D:
      case 0x9E:
      case 0x9F:
      case 0xA0:
      case 0xA1:
      case 0xA2:
      case 0xA3:
      case 0xA4:
      case 0xA5:
      case 0xA6:
      case 0xA7:
      case 0xA8:
      case 0xA9:
      case 0xAA:
      case 0xAB:
      case 0xAC:
      case 0xAD:
      case 0xAE:
      case 0xAF:
      case 0xB0:
      case 0xB1:
      case 0xB2:
      case 0xB3:
      case 0xB4:
      case 0xB5:
      case 0xB6:
      case 0xB7:
      case 0xB8:
      case 0xB9:
      case 0xBA:
      case 0xBB:
      case 0xBC:
      case 0xBD:
      case 0xBE:
      case 0xBF:
      case 0xC0:
      case 0xC1:
      case 0xC2:
      case 0xC3:
      case 0xC4:
      case 0xC5:
      case 0xC6:
      case 0xC7:
      case 0xC8:
      case 0xC9:
      case 0xCA:
      case 0xCB:
      case 0xCC:
      case 0xCD:
      case 0xCE:
      case 0xCF:
      case 0xD0:
      case 0xD1:
      case 0xD2:
      case 0xD3:
      case 0xD4:
      case 0xD5:
      case 0xD6:
      case 0xD7:
      case 0xD8:
      case 0xD9:
      case 0xDA:
      case 0xDB:
      case 0xDC:
      case 0xDD:
      case 0xDE:
      case 0xDF:
      case 0xE0:
      case 0xE1:
      case 0xE2:
      case 0xE3:
      case 0xE4:
      case 0xE5:
      case 0xE6:
      case 0xE7:
      case 0xE8:
      case 0xE9:
      case 0xEA:
      case 0xEB:
      case 0xEC:
      case 0xED:
      case 0xEE:
      case 0xEF:
      case 0xF0:
      case 0xF1:
      case 0xF2:
      case 0xF3:
      case 0xF4:
      case 0xF5:
      case 0xF6:
      case 0xF7:
      case 0xF8:
      case 0xF9:
      case 0xFA:
      case 0xFB:
      case 0xFC:
      case 0xFD:
      case 0xFE:
      case 0xFF:
      case 0x100:
      case 0x101:
      case 0x102:
      case 0x103:
      case 0x104:
      case 0x105:
      case 0x106:
      case 0x107:
      case 0x108:
      case 0x109:
      case 0x10A:
      case 0x10B:
      case 0x10C:
      case 0x10D:
      case 0x10E:
      case 0x10F:
      case 0x110:
      case 0x111:
      case 0x112:
      case 0x113:
      case 0x114:
      case 0x115:
      case 0x116:
      case 0x117:
      case 0x118:
      case 0x119:
      case 0x11A:
      case 0x11B:
      case 0x11C:
      case 0x11D:
      case 0x11E:
      case 0x11F:
      case 0x120:
      case 0x121:
      case 0x122:
      case 0x123:
      case 0x124:
      case 0x125:
      case 0x126:
      case 0x127:
      case 0x128:
      case 0x129:
      case 0x12A:
      case 0x12B:
      case 0x12C:
      case 0x12D:
      case 0x12E:
      case 0x12F:
      case 0x130:
      case 0x131:
      case 0x132:
      case 0x133:
      case 0x134:
      case 0x135:
      case 0x136:
      case 0x137:
      case 0x138:
      case 0x139:
      case 0x13A:
      case 0x13B:
      case 0x13C:
      case 0x13D:
      case 0x13E:
      case 0x13F:
      case 0x140:
      case 0x141:
      case 0x142:
      case 0x143:
      case 0x144:
      case 0x145:
      case 0x146:
      case 0x147:
      case 0x148:
      case 0x149:
      case 0x14A:
      case 0x14B:
      case 0x14C:
      case 0x14D:
      case 0x14E:
      case 0x14F:
      case 0x150:
      case 0x151:
      case 0x152:
      case 0x153:
      case 0x154:
      case 0x155:
      case 0x156:
      case 0x157:
      case 0x158:
      case 0x159:
      case 0x15A:
      case 0x15B:
      case 0x15C:
      case 0x15D:
      case 0x15E:
      case 0x179:
        break;
      case 0x15F:
      case 0x160:
      case 0x161:
      case 0x162:
        v31 = (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                             * *(unsigned __int8 *)(*((_DWORD *)a3 + 226)
                                                                                                  + 222)];
        CVehicleAnimGroup::GetGroup(v31, *((__int16 *)a4 + 22));
        v32 = COERCE_FLOAT(CVehicleAnimGroup::ComputeCriticalBlendTime(v31, v15));
        v16 = 0.0;
        v33 = fabsf(v32);
        if ( v33 < 10.0 )
          goto LABEL_53;
        v34 = *((float *)a4 + 8) / *(float *)(*((_DWORD *)a4 + 5) + 16);
        v35 = v33 + -11.0;
        if ( (float)(v32 + -11.0) <= 0.0 )
        {
          if ( v34 < v35 )
            goto LABEL_53;
          v34 = v34 - v35;
          v35 = 1.0 - v35;
        }
        else if ( v34 >= v35 )
        {
          v16 = 1.0;
          goto LABEL_53;
        }
        v16 = v34 / v35;
LABEL_53:
        v14 = 1.0;
LABEL_54:
        if ( *((_WORD *)a3 + 19) == 577 )
          v16 = v14;
        break;
      case 0x163:
      case 0x164:
      case 0x165:
      case 0x166:
        v36 = (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                             * *(unsigned __int8 *)(*((_DWORD *)a3 + 226)
                                                                                                  + 222)];
        CVehicleAnimGroup::GetGroup(v36, *((__int16 *)a4 + 22));
        v14 = 1.0;
        v16 = 1.0;
        if ( COERCE_FLOAT(CVehicleAnimGroup::ComputeCriticalBlendTime(v36, v15) & 0x7FFFFFFF) < 10.0 )
          v16 = 0.0;
        goto LABEL_54;
      case 0x167:
      case 0x168:
      case 0x169:
      case 0x16A:
      case 0x16B:
        v24 = *((float *)a4 + 8);
        v25 = *(float *)(*((_DWORD *)a4 + 5) + 16);
        v26 = (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                             * *(unsigned __int8 *)(*((_DWORD *)a3 + 226)
                                                                                                  + 222)];
        CVehicleAnimGroup::GetGroup(v26, *((__int16 *)a4 + 22));
        v27 = COERCE_FLOAT(CVehicleAnimGroup::ComputeCriticalBlendTime(v26, v15));
        v28 = v24 / v25;
        v29 = fabsf(v27);
        v16 = 1.0;
        if ( v29 >= 10.0 )
          goto LABEL_59;
        v30 = *((float *)a4 + 8) / *(float *)(*((_DWORD *)a4 + 5) + 16);
        if ( v27 <= 0.0 )
        {
          if ( v30 < v29 )
          {
            v16 = 0.0;
            goto LABEL_59;
          }
          v30 = v30 - v29;
          v29 = 1.0 - v29;
        }
        else
        {
          v16 = 1.0;
          if ( v30 >= v29 )
            goto LABEL_59;
        }
        v16 = v30 / v29;
LABEL_59:
        v14 = 1.0 - v28;
        if ( *((_WORD *)a3 + 19) == 577 )
          v16 = 1.0;
        break;
      case 0x16C:
      case 0x16D:
      case 0x16E:
      case 0x17C:
      case 0x17D:
      case 0x17E:
      case 0x17F:
        v21 = 1.0;
        goto LABEL_46;
      case 0x16F:
      case 0x170:
      case 0x171:
      case 0x172:
      case 0x173:
      case 0x174:
      case 0x182:
        v16 = 1.0;
        break;
      case 0x175:
      case 0x176:
      case 0x177:
      case 0x178:
      case 0x17A:
      case 0x17B:
      case 0x180:
      case 0x181:
      case 0x183:
      case 0x184:
        v17 = *((float *)a4 + 8);
        v18 = *(float *)(*((_DWORD *)a4 + 5) + 16);
        v19 = (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                             * *(unsigned __int8 *)(*((_DWORD *)a3 + 226)
                                                                                                  + 222)];
        CVehicleAnimGroup::GetGroup(v19, *((__int16 *)a4 + 22));
        v20 = COERCE_FLOAT(CVehicleAnimGroup::ComputeCriticalBlendTime(v19, v15));
        v21 = v17 / v18;
        v22 = *((float *)a4 + 8) / *(float *)(*((_DWORD *)a4 + 5) + 16);
        v23 = fabsf(v20);
        if ( v20 <= 0.0 )
        {
          if ( v22 >= v23 )
            v16 = 1.0 - (float)((float)(v22 - v23) / (float)(1.0 - v23));
          else
            v16 = 1.0;
        }
        else if ( v22 >= v23 )
        {
LABEL_46:
          v16 = 0.0;
        }
        else
        {
          v16 = 1.0 - (float)(v22 / v23);
        }
        v14 = v21;
        break;
      case 0x185:
      case 0x186:
        v14 = 1.0;
        v16 = 0.0;
        if ( (CVehicleAnimGroupData::m_vehicleAnimGroups[74 * *(unsigned __int8 *)(*((_DWORD *)a3 + 226) + 222) + 4] & 0x20) != 0 )
          v16 = 1.0;
        break;
      default:
        goto LABEL_24;
    }
  }
  else
  {
LABEL_24:
    v16 = 0.0;
  }
  if ( *((_DWORD *)this + 5) == 2 )
  {
    v37 = *((_DWORD *)a2 + 5);
    v38 = (float *)(v37 + 48);
    if ( !v37 )
      v38 = (float *)((char *)a2 + 4);
    v40 = v38[1];
    v39 = *v38;
    v41 = v38[2];
  }
  else
  {
    CMatrix::CMatrix((CMatrix *)v125, *((const CMatrix **)a3 + 5));
    CTaskUtilityLineUpPedWithCar::GetLocalPositionToOpenCarDoor(
      (CTaskUtilityLineUpPedWithCar *)&v123,
      this,
      *(float *)&a3,
      (CAnimBlendAssociation *)LODWORD(v14));
    Multiply3x3((const CMatrix *)&v123, (const CVector *)v125);
    v117 = v124;
    v116 = v123;
    v42 = *((_DWORD *)a3 + 5);
    v43 = (float *)(v42 + 48);
    if ( !v42 )
      v43 = (float *)((char *)a3 + 4);
    v44 = v43[1] + *((float *)&v123 + 1);
    v45 = v43[2] + v124;
    *(float *)&v116 = *v43 + *(float *)&v123;
    *((float *)&v116 + 1) = v44;
    CMatrix::~CMatrix((CMatrix *)v125);
    v40 = v44;
    v39 = *(float *)&v116;
    v41 = v45;
  }
  v111 = v41;
  *(_QWORD *)&v116 = __PAIR64__(LODWORD(v40), LODWORD(v39));
  v117 = v41;
  v46 = *((_DWORD *)a3 + 360);
  v47 = v46 == 9;
  if ( v46 != 9 )
    v47 = *((_DWORD *)this + 5) == 2;
  if ( !v47 )
  {
    CMatrix::CMatrix((CMatrix *)v125, *((const CMatrix **)a3 + 5));
    CTaskUtilityLineUpPedWithCar::GetLocalPositionToOpenCarDoor(
      (CTaskUtilityLineUpPedWithCar *)&v123,
      this,
      *(float *)&a3,
      (CAnimBlendAssociation *)0x3F800000);
    Multiply3x3((const CMatrix *)&v123, (const CVector *)v125);
    v115 = v124;
    v114 = v123;
    v48 = *((_DWORD *)a3 + 5);
    v49 = (float *)(v48 + 48);
    if ( !v48 )
      v49 = (float *)((char *)a3 + 4);
    v50 = v49[1] + *((float *)&v123 + 1);
    v51 = v49[2] + v124;
    *(float *)&v114 = *v49 + *(float *)&v123;
    *((float *)&v114 + 1) = v50;
    v115 = v51;
    CMatrix::~CMatrix((CMatrix *)v125);
    v117 = v51;
    v116 = v114;
  }
  if ( *((unsigned __int8 *)a3 + 69) << 31 )
  {
    if ( *((_DWORD *)a3 + 360) == 5 && CVehicle::IsUpsideDown(a3) )
      v117 = v117 + 1.0;
  }
  else
  {
    v52 = (float *)*((_DWORD *)a3 + 5);
    v53 = v52 + 12;
    if ( !v52 )
      v53 = (float *)((char *)a3 + 4);
    v54 = v53[2];
    v55 = *(float *)&v116 - *v53;
    v56 = *((float *)&v116 + 1) - v53[1];
    if ( v52 )
    {
      v57 = *v52;
      v58 = v52[1];
      v59 = v52[2];
    }
    else
    {
      v60 = *((float *)a3 + 4);
      v57 = cosf(v60);
      v58 = sinf(v60);
      v59 = 0.0;
    }
    v61 = (float)(v117 - v54) * v59;
    v63 = COERCE_FLOAT((*(int (__fastcall **)(CVehicle *))(*(_DWORD *)a3 + 216))(a3));
    v64 = *((_DWORD *)a3 + 5);
    v65 = (float)((float)(v55 * v57) + (float)(v56 * v58)) + v61;
    v66 = v54 - v63;
    if ( v64 )
      v67 = *(float *)(v64 + 8);
    else
      v67 = 0.0;
    v68 = v117;
    CPedPlacement::FindZCoorForPed((CPedPlacement *)&v116, v62);
    if ( v117 < (float)((float)((float)(v66 + (float)(v65 * v67)) + 1.0) + -0.5) )
      v117 = v68;
  }
  v69 = v117;
  *((float *)this + 3) = v117;
  if ( (unsigned int)(*((_DWORD *)this + 5) - 1) > 1 )
  {
    v74 = v111;
  }
  else
  {
    v70 = v69;
    v71 = *((_DWORD *)a2 + 5);
    v72 = (float *)(v71 + 48);
    if ( !v71 )
      v72 = (float *)((char *)a2 + 4);
    v73 = *((float *)a2 + 20) + (float)(*(float *)&CTimer::ms_fTimeStep * -0.008);
    if ( (float)(v72[2] + v73) < v69 )
    {
      v74 = v69;
      *((_DWORD *)a2 + 18) = 0;
      *((_DWORD *)a2 + 19) = 0;
      *((_DWORD *)a2 + 20) = 0;
      goto LABEL_97;
    }
    *((float *)a2 + 20) = v73;
    v74 = v72[2];
  }
  v70 = v74;
LABEL_97:
  v75 = *((float *)this + 3);
  if ( v75 <= v70 )
  {
    if ( *((_DWORD *)this + 5) )
      goto LABEL_111;
    goto LABEL_110;
  }
  if ( a4 && *((_DWORD *)a3 + 360) == 9 )
  {
    v76 = *((__int16 *)a4 + 22);
    if ( (unsigned int)(v76 - 359) < 4 )
    {
      v16 = 1.0;
      v77 = *(float *)(*((_DWORD *)a4 + 5) + 16);
      if ( (float)((float)(*((float *)a4 + 8) + *((float *)a4 + 8)) / v77) <= 1.0 )
        v16 = (float)(*((float *)a4 + 8) + *((float *)a4 + 8)) / v77;
      goto LABEL_107;
    }
    if ( (unsigned int)(v76 - 373) < 4 )
    {
      v16 = 1.0 - v14;
LABEL_107:
      v78 = *((_DWORD *)a3 + 5);
      v79 = (float *)(v78 + 48);
      if ( !v78 )
        v79 = (float *)((char *)a3 + 4);
      v80 = v79[2];
      v70 = (float)(v80 - (*(float (__fastcall **)(CVehicle *))(*(_DWORD *)a3 + 216))(a3)) + 1.0;
      v75 = *((float *)this + 3);
      goto LABEL_110;
    }
    if ( v76 != 363 )
    {
      v16 = 0.0;
      goto LABEL_107;
    }
  }
LABEL_110:
  v74 = v75 + (float)((float)(v70 - v75) * v16);
LABEL_111:
  v81 = *((float *)this + 4);
  if ( (unsigned int)CTimer::m_snTimeInMilliseconds >= LODWORD(v81) )
  {
    *((_DWORD *)a2 + 343) = *((_DWORD *)a2 + 344);
    if ( !a4 )
      goto LABEL_132;
    goto LABEL_123;
  }
  v82 = COERCE_FLOAT(CGeneral::LimitRadianAngle(*((CGeneral **)a2 + 344), v81));
  v83 = (float)(unsigned int)(*((_DWORD *)this + 4) - CTimer::m_snTimeInMilliseconds) / 600.0;
  v84 = *((float *)a2 + 343);
  if ( v83 <= 0.0 )
  {
    v86 = 0.0;
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 1) = 0;
    v85 = 0.0;
  }
  else
  {
    v85 = *(float *)this;
    v86 = *((float *)this + 1);
  }
  *((_DWORD *)this + 2) = 0;
  v87 = v40 - (float)(v83 * v86);
  v88 = v39 - (float)(v83 * v85);
  if ( (float)(v84 + 3.1416) >= v82 )
  {
    if ( (float)(v84 + -3.1416) <= v82 )
      goto LABEL_122;
    v89 = 6.2832;
  }
  else
  {
    v89 = -6.2832;
  }
  v82 = v82 + v89;
LABEL_122:
  v40 = v87;
  v39 = v88;
  v74 = v74 - (float)(v83 * 0.0);
  *((float *)a2 + 343) = v84 - (float)((float)(1.0 - v83) * (float)(v84 - v82));
  if ( !a4 )
    goto LABEL_132;
LABEL_123:
  v90 = *((__int16 *)a4 + 22);
  if ( (unsigned int)(v90 - 373) < 5 )
  {
    CMatrix::CMatrix((CMatrix *)v125, *((const CMatrix **)a3 + 5));
    CMatrix::CopyToRwMatrix();
    RtQuatConvertFromMatrix();
    CMatrix::CMatrix((CMatrix *)&v123, *((const CMatrix **)a2 + 5));
    CMatrix::SetRotateZOnly(v98, *((float *)a2 + 343));
    CMatrix::CopyToRwMatrix();
    RtQuatConvertFromMatrix();
    v99 = *((float *)a4 + 8);
    v100 = *(float *)(*((_DWORD *)a4 + 5) + 16);
    RtQuatSetupSlerpCache();
    if ( (float)(v99 / v100) > 0.0 && (float)(v99 / v100) < 1.0 && !v113 )
    {
      v101 = (const float *)&v112;
      vld1_dup_f32(v101).n64_u64[0];
    }
    v122 = 0;
    v121 = 0;
    CMatrix::UpdateMatrix();
    v118 = v39;
    v119 = v40;
    v120 = v74;
    CPlaceable::SetMatrix(a2, (const CMatrix *)&v116);
    CMatrix::~CMatrix((CMatrix *)&v116);
    CMatrix::~CMatrix((CMatrix *)&v123);
    v109 = (CMatrix *)v125;
    goto LABEL_153;
  }
  if ( (unsigned int)(v90 - 359) <= 4 )
  {
    CMatrix::CMatrix((CMatrix *)&v123, *((const CMatrix **)a3 + 5));
    if ( *((_WORD *)a4 + 22) == 363 )
    {
      v121 = 0;
      v122 = 0;
      CMatrix::SetRotateZ((CMatrix *)&v116, 3.1416);
      operator*();
      CMatrix::operator=();
      CMatrix::~CMatrix((CMatrix *)v125);
      CMatrix::~CMatrix((CMatrix *)&v116);
    }
    CMatrix::CopyToRwMatrix();
    RtQuatConvertFromMatrix();
    CMatrix::CMatrix((CMatrix *)v125, *((const CMatrix **)a2 + 5));
    CMatrix::CopyToRwMatrix();
    RtQuatConvertFromMatrix();
    v91 = *((float *)a4 + 8);
    v92 = *(float *)(*((_DWORD *)a4 + 5) + 16);
    RtQuatSetupSlerpCache();
    if ( (float)(v91 / v92) > 0.0 && (float)(v91 / v92) < 1.0 && !v113 )
    {
      v93 = (const float *)&v112;
      vld1_dup_f32(v93).n64_u64[0];
    }
    v122 = 0;
    v121 = 0;
    CMatrix::UpdateMatrix();
    v118 = v39;
    v119 = v40;
    v120 = v74;
    CPlaceable::SetMatrix(a2, (const CMatrix *)&v116);
    CMatrix::~CMatrix((CMatrix *)&v116);
    CMatrix::~CMatrix((CMatrix *)v125);
    v109 = (CMatrix *)&v123;
    goto LABEL_153;
  }
LABEL_132:
  if ( v10 > -0.8 && v14 <= 0.2 )
  {
    v94 = *((_DWORD *)a3 + 360);
    v95 = v94 == 9;
    if ( v94 != 9 )
      v95 = *((_DWORD *)a3 + 361) == 2;
    if ( !v95 )
    {
      CMatrix::CMatrix((CMatrix *)v125, *((const CMatrix **)a3 + 5));
      CTaskUtilityLineUpPedWithCar::GetLocalPositionToOpenCarDoor(
        (CTaskUtilityLineUpPedWithCar *)&v116,
        this,
        *(float *)&a3,
        0);
      v124 = v117;
      v123 = v116;
      Multiply3x3((const CMatrix *)&v116, (const CVector *)v125);
      v126 = *(float *)&v116 + v126;
      v127 = *((float *)&v116 + 1) + v127;
      v128 = v117 + v128;
      CPlaceable::SetMatrix(a2, (const CMatrix *)v125);
      v109 = (CMatrix *)v125;
LABEL_153:
      CMatrix::~CMatrix(v109);
      return 0;
    }
  }
  v96 = *((_DWORD *)a2 + 5);
  if ( v96 )
  {
    *(float *)(v96 + 48) = v39;
    *(float *)(*((_DWORD *)a2 + 5) + 52) = v40;
    v97 = (float *)(*((_DWORD *)a2 + 5) + 56);
  }
  else
  {
    v97 = (float *)((char *)a2 + 12);
    *((float *)a2 + 1) = v39;
    *((float *)a2 + 2) = v40;
  }
  *v97 = v74;
  v102 = (float *)*((_DWORD *)a2 + 5);
  if ( v102 )
  {
    v103 = v102[12];
    v104 = v102[13];
    v105 = v102[14];
    CMatrix::SetRotate((CMatrix *)v102, 0.0, 0.0, *((float *)a2 + 343));
    v106 = (float *)*((_DWORD *)a2 + 5);
    v107 = v104 + v106[13];
    v108 = v105 + v106[14];
    v106[12] = v103 + v106[12];
    v106[13] = v107;
    v106[14] = v108;
  }
  else
  {
    *((_DWORD *)a2 + 4) = *((_DWORD *)a2 + 343);
  }
  return 0;
}


// ============================================================

// Address: 0x50a564
// Original: _ZN28CTaskUtilityLineUpPedWithCar24GetPositionToOpenCarDoorEP8CVehiclefP21CAnimBlendAssociation
// Demangled: CTaskUtilityLineUpPedWithCar::GetPositionToOpenCarDoor(CVehicle *,float,CAnimBlendAssociation *)
void __fastcall CTaskUtilityLineUpPedWithCar::GetPositionToOpenCarDoor(
        CTaskUtilityLineUpPedWithCar *this,
        CVehicle *a2,
        float a3,
        CAnimBlendAssociation *a4)
{
  double v8; // d16
  int v9; // r0
  float *v10; // r1
  float v11; // s2
  float v12; // s4
  double v13; // [sp+8h] [bp-70h] BYREF
  int v14; // [sp+10h] [bp-68h]
  _BYTE v15[96]; // [sp+18h] [bp-60h] BYREF

  CMatrix::CMatrix((CMatrix *)v15, *(const CMatrix **)(LODWORD(a3) + 20));
  CTaskUtilityLineUpPedWithCar::GetLocalPositionToOpenCarDoor((CTaskUtilityLineUpPedWithCar *)&v13, a2, a3, a4);
  *((_DWORD *)this + 2) = v14;
  *(double *)this = v13;
  Multiply3x3((const CMatrix *)&v13, (const CVector *)v15);
  v8 = v13;
  *((_DWORD *)this + 2) = v14;
  *(double *)this = v8;
  v9 = *(_DWORD *)(LODWORD(a3) + 20);
  v10 = (float *)(v9 + 48);
  if ( !v9 )
    v10 = (float *)(LODWORD(a3) + 4);
  v11 = v10[1] + *((float *)this + 1);
  v12 = v10[2] + *((float *)this + 2);
  *(float *)this = *v10 + *(float *)this;
  *((float *)this + 1) = v11;
  *((float *)this + 2) = v12;
  CMatrix::~CMatrix((CMatrix *)v15);
}


// ============================================================

// Address: 0x50a600
// Original: _ZN28CTaskUtilityLineUpPedWithCar29GetLocalPositionToOpenCarDoorEP8CVehiclefP21CAnimBlendAssociation
// Demangled: CTaskUtilityLineUpPedWithCar::GetLocalPositionToOpenCarDoor(CVehicle *,float,CAnimBlendAssociation *)
float __fastcall CTaskUtilityLineUpPedWithCar::GetLocalPositionToOpenCarDoor(
        CTaskUtilityLineUpPedWithCar *this,
        CVehicle *a2,
        float a3,
        CAnimBlendAssociation *a4,
        int a5)
{
  float v8; // r10
  float v9; // s16
  int v10; // r1
  __int16 v11; // r0
  int v12; // r2
  int v13; // r0
  double v14; // r2
  float v15; // r9
  float v16; // s0
  float v17; // s2
  float v18; // s4
  double v19; // kr00_8
  float v20; // s22
  float v21; // s24
  float v22; // s0
  float v23; // s14
  int v24; // lr
  int v25; // r1
  float v26; // s0
  float v27; // r1
  float v28; // r6
  __int64 v29; // kr08_8
  int v30; // r1
  float v31; // s0
  float v32; // r1
  float v33; // r6
  __int64 v34; // kr10_8
  float *v35; // r1
  float v36; // s2
  float v37; // s4
  float v38; // s0
  int v39; // r1
  __int64 v40; // kr18_8
  float v41; // s10
  int v42; // r1
  __int64 v43; // kr20_8
  float v44; // r12
  float *v45; // r1
  float result; // r0
  int v47; // r2
  float *v48; // r0
  float v49; // s2
  float v50; // s4
  double v51; // d16
  double v52; // [sp+10h] [bp-58h] BYREF
  float v53; // [sp+18h] [bp-50h]

  v8 = CModelInfo::ms_modelInfoPtrs[*(__int16 *)(LODWORD(a3) + 38)];
  if ( *(unsigned __int8 *)(LODWORD(a3) + 1069) << 31 && (*((_DWORD *)a2 + 6) | 2) == 0xB )
  {
    v9 = 0.0;
    if ( !a5 )
      goto LABEL_11;
  }
  else
  {
    v9 = *(float *)(*(_DWORD *)(LODWORD(a3) + 904) + 212) * *(float *)&a4;
    if ( !a5 )
      goto LABEL_11;
  }
  v10 = *(__int16 *)(a5 + 44);
  v11 = *(_WORD *)(a5 + 44);
  if ( (unsigned int)(v10 - 373) > 0xF || (v12 = 1 << (v10 - 117), (v12 & 0xC78F) == 0) && (v12 & 0x60) == 0 )
  {
    if ( (unsigned int)(v10 - 108) >= 2 )
    {
LABEL_11:
      v13 = *((_DWORD *)a2 + 6);
      if ( v13 != 9 )
      {
        if ( v13 == 18 )
        {
          if ( !a5 )
            goto LABEL_22;
LABEL_19:
          v11 = *(_WORD *)(a5 + 44);
          goto LABEL_20;
        }
        if ( v13 != 11 )
        {
          if ( !a5 )
          {
LABEL_22:
            CVehicleAnimGroup::ComputeAnimDoorOffsets(
              (CVehicleAnimGroup *)&v52,
              (int)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                             * *(unsigned __int8 *)(*(_DWORD *)(LODWORD(a3) + 904) + 222)]);
            v14 = v52;
            v15 = v53;
            v16 = v53;
            v17 = *((float *)&v52 + 1);
            v18 = *(float *)&v52;
            goto LABEL_24;
          }
          goto LABEL_19;
        }
      }
      if ( !a5 )
        goto LABEL_22;
      goto LABEL_19;
    }
  }
LABEL_20:
  if ( (unsigned int)(v11 - 389) > 1
    || (CVehicleAnimGroupData::m_vehicleAnimGroups[74 * *(unsigned __int8 *)(*(_DWORD *)(LODWORD(a3) + 904) + 222) + 4] & 0x20) == 0 )
  {
    goto LABEL_22;
  }
  CVehicleAnimGroup::ComputeAnimDoorOffsets(
    (CVehicleAnimGroup *)&v52,
    (int)&CVehicleAnimGroupData::m_vehicleAnimGroups[74 * *(unsigned __int8 *)(*(_DWORD *)(LODWORD(a3) + 904) + 222)]);
  v19 = v52;
  v20 = v53;
  v21 = *(float *)(a5 + 24);
  CVehicleAnimGroup::ComputeAnimDoorOffsets((CVehicleAnimGroup *)&v52, (int)CVehicleAnimGroupData::m_vehicleAnimGroups);
  v22 = 1.0 - *(float *)(a5 + 24);
  v23 = *(float *)&v19 * v22;
  v17 = (float)(v21 * *((float *)&v52 + 1)) + (float)(*((float *)&v19 + 1) * v22);
  v16 = (float)(v21 * v53) + (float)(v20 * v22);
  v18 = (float)(v21 * *(float *)&v52) + v23;
  *((float *)&v14 + 1) = v17;
  v15 = v16;
  *(float *)&v14 = v18;
LABEL_24:
  v24 = *((_DWORD *)a2 + 6);
  switch ( v24 )
  {
    case 8:
      v25 = *(_DWORD *)(LODWORD(v8) + 116);
      if ( *(_DWORD *)(LODWORD(v8) + 84) != 5 )
        v25 += 48;
      v26 = *(float *)v25;
      v29 = *(_QWORD *)(v25 + 4);
      v27 = *(float *)(v25 + 8);
      v28 = *(float *)&v29;
      goto LABEL_35;
    case 9:
      v39 = *(_DWORD *)(LODWORD(v8) + 116);
      v26 = *(float *)(v39 + 60);
      v40 = *(_QWORD *)(v39 + 64);
      v27 = *(float *)(v39 + 68);
      v28 = *(float *)&v40;
LABEL_35:
      v18 = v9 + v26;
      v41 = *(float *)&v14;
      v38 = v27 - v15;
      v36 = v28 - *((float *)&v14 + 1);
      goto LABEL_41;
    case 10:
      v30 = *(_DWORD *)(LODWORD(v8) + 116);
      if ( *(_DWORD *)(LODWORD(v8) + 84) != 5 )
        v30 += 48;
      v31 = *(float *)v30;
      v34 = *(_QWORD *)(v30 + 4);
      v32 = *(float *)(v30 + 8);
      v33 = *(float *)&v34;
      goto LABEL_37;
    case 11:
      v42 = *(_DWORD *)(LODWORD(v8) + 116);
      v31 = *(float *)(v42 + 60);
      v43 = *(_QWORD *)(v42 + 64);
      v32 = *(float *)(v42 + 68);
      v33 = *(float *)&v43;
LABEL_37:
      v44 = -(float)(v9 + v31);
      v38 = v32 - v15;
      v36 = v33 - *((float *)&v14 + 1);
      v37 = v44 - *(float *)&v14;
      break;
    case 18:
      v45 = *(float **)(LODWORD(v8) + 116);
      if ( *(_DWORD *)(LODWORD(v8) + 84) != 5 )
        v45 += 12;
      v41 = *v45;
      v36 = v17 + v45[1];
      v38 = v16 + v45[2];
LABEL_41:
      v37 = v18 + v41;
      break;
    default:
      v35 = *(float **)(LODWORD(v8) + 116);
      if ( *(_DWORD *)(LODWORD(v8) + 84) != 5 )
        v35 += 12;
      v36 = v35[1];
      v37 = *v35;
      v38 = v35[2];
      break;
  }
  *(float *)this = v37;
  *((float *)this + 1) = v36;
  *((float *)this + 2) = v38;
  result = *(float *)(LODWORD(a3) + 1440);
  if ( LODWORD(result) == 9 && v24 != 18 )
  {
    CBike::GetCorrectedWorldDoorPosition();
    v47 = *(_DWORD *)(LODWORD(a3) + 20);
    v48 = (float *)(v47 + 48);
    v49 = *((float *)this + 1);
    v50 = *((float *)this + 2);
    if ( !v47 )
      v48 = (float *)(LODWORD(a3) + 4);
    *(float *)this = *(float *)this - *v48;
    *((float *)this + 1) = v49 - v48[1];
    *((float *)this + 2) = v50 - v48[2];
    Multiply3x3((const CVector *)&v52, this);
    v51 = v52;
    result = v53;
    *((float *)this + 2) = v53;
    *(double *)this = v51;
  }
  return result;
}


// ============================================================
