
// Address: 0x18eae4
// Original: j__ZN14CTempColModels8ShutdownEv
// Demangled: CTempColModels::Shutdown(void)
// attributes: thunk
int __fastcall CTempColModels::Shutdown(CTempColModels *this)
{
  return _ZN14CTempColModels8ShutdownEv(this);
}


// ============================================================

// Address: 0x19fbc0
// Original: j__ZN14CTempColModels10InitialiseEv
// Demangled: CTempColModels::Initialise(void)
// attributes: thunk
int __fastcall CTempColModels::Initialise(CTempColModels *this)
{
  return _ZN14CTempColModels10InitialiseEv(this);
}


// ============================================================

// Address: 0x2e33ac
// Original: _ZN14CTempColModels8ShutdownEv
// Demangled: CTempColModels::Shutdown(void)
int __fastcall CTempColModels::Shutdown(CTempColModels *this)
{
  CColModel::RemoveCollisionVolumes((CColModel *)&CTempColModels::ms_colModelBBox);
  CColModel::RemoveCollisionVolumes((CColModel *)&CTempColModels::ms_colModelPed1);
  CColModel::RemoveCollisionVolumes((CColModel *)&CTempColModels::ms_colModelPed2);
  CColModel::RemoveCollisionVolumes((CColModel *)&CTempColModels::ms_colModelDoor1);
  CColModel::RemoveCollisionVolumes((CColModel *)&CTempColModels::ms_colModelBumper1);
  CColModel::RemoveCollisionVolumes((CColModel *)&CTempColModels::ms_colModelPanel1);
  CColModel::RemoveCollisionVolumes((CColModel *)&CTempColModels::ms_colModelBonnet1);
  CColModel::RemoveCollisionVolumes((CColModel *)&CTempColModels::ms_colModelBoot1);
  CColModel::RemoveCollisionVolumes((CColModel *)&CTempColModels::ms_colModelWheel1);
  CColModel::RemoveCollisionVolumes((CColModel *)&CTempColModels::ms_colModelBodyPart1);
  CColModel::RemoveCollisionVolumes((CColModel *)&CTempColModels::ms_colModelBodyPart2);
  CColModel::RemoveCollisionVolumes((CColModel *)&CTempColModels::ms_colModelWeapon);
  CColModel::RemoveCollisionVolumes((CColModel *)&CTempColModels::ms_colModelCutObj);
  CColModel::RemoveCollisionVolumes((CColModel *)&unk_796188);
  CColModel::RemoveCollisionVolumes((CColModel *)&unk_7961B8);
  CColModel::RemoveCollisionVolumes((CColModel *)&unk_7961E8);
  CColModel::RemoveCollisionVolumes((CColModel *)&algn_796211[7]);
  CColModel::RemoveCollisionVolumes((CColModel *)&unk_796248);
  CColModel::RemoveCollisionVolumes((CColModel *)&unk_796278);
  CColModel::RemoveCollisionVolumes((CColModel *)&unk_7962A8);
  CColModel::RemoveCollisionVolumes((CColModel *)&unk_7962D8);
  CColModel::RemoveCollisionVolumes((CColModel *)&unk_796308);
  CColModel::RemoveCollisionVolumes((CColModel *)&unk_796338);
  CColModel::RemoveCollisionVolumes((CColModel *)&unk_796368);
  CColModel::RemoveCollisionVolumes((CColModel *)&unk_796398);
  CColModel::RemoveCollisionVolumes((CColModel *)&unk_7963C8);
  CColModel::RemoveCollisionVolumes((CColModel *)&unk_7963F8);
  CColModel::RemoveCollisionVolumes((CColModel *)&unk_796428);
  CColModel::RemoveCollisionVolumes((CColModel *)&unk_796458);
  CColModel::RemoveCollisionVolumes((CColModel *)&unk_796488);
  CColModel::RemoveCollisionVolumes((CColModel *)&unk_7964B8);
  return j_CColModel::RemoveCollisionVolumes((CColModel *)&unk_7964E8);
}


// ============================================================

// Address: 0x470150
// Original: _ZN14CTempColModels10InitialiseEv
// Demangled: CTempColModels::Initialise(void)
int *__fastcall CTempColModels::Initialise(CTempColModels *this)
{
  int v1; // r4
  CColSphere *v2; // r0
  int v3; // r0
  CColSphere *v4; // r0
  CColLine *v5; // r0
  int v6; // r0
  int v7; // r10
  CColSphere *v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  CColLine *v17; // r0
  int v18; // r0
  int v19; // r5
  CColSphere *v20; // r0
  CColSphere *v21; // r0
  int v22; // r0
  int v23; // r5
  CColSphere *v24; // r0
  CColSphere *v25; // r0
  CColSphere *v26; // r0
  CColSphere *v27; // r0
  int v28; // r5
  CColSphere *v29; // r0
  CColSphere *v30; // r0
  CColSphere *v31; // r0
  CColSphere *v32; // r0
  int v33; // r5
  CColSphere *v34; // r0
  CColSphere *v35; // r0
  CColSphere *v36; // r0
  CColSphere *v37; // r0
  int v38; // r5
  CColSphere *v39; // r0
  CColSphere *v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r5
  CColSphere *v44; // r0
  CColSphere *v45; // r0
  int v46; // r5
  CColSphere *v47; // r0
  CColSphere *v48; // r0
  int v49; // r5
  CColSphere *v50; // r0
  int v51; // r0
  int *result; // r0
  int v53; // [sp+14h] [bp-34h] BYREF
  int v54; // [sp+18h] [bp-30h]
  int v55; // [sp+1Ch] [bp-2Ch]
  int v56; // [sp+20h] [bp-28h] BYREF
  int v57; // [sp+24h] [bp-24h]
  int v58; // [sp+28h] [bp-20h]

  v56 = 0;
  v57 = 0;
  v58 = 0;
  CSphere::Set((CSphere *)&unk_796140, 2.0, (const CVector *)&v56);
  v57 = -1073741824;
  v58 = -1073741824;
  v53 = 0x40000000;
  v54 = 0x40000000;
  v55 = 0x40000000;
  v56 = -1073741824;
  CBox::Set((CBox *)&CTempColModels::ms_colModelBBox, (const CVector *)&v56, (const CVector *)&v53);
  byte_796150 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  CSphere::Set((CSphere *)&unk_796170, 2.0, (const CVector *)&v56);
  v57 = -1073741824;
  v58 = -1073741824;
  v53 = 0x40000000;
  v54 = 0x40000000;
  v55 = 0x40000000;
  v56 = -1073741824;
  CBox::Set((CBox *)&CTempColModels::ms_colModelCutObj, (const CVector *)&v56, (const CVector *)&v53);
  byte_796180 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  CSphere::Set((CSphere *)&unk_7961A0, 2.0, (const CVector *)&v56);
  v57 = -1073741824;
  v58 = -1073741824;
  v53 = 0x40000000;
  v54 = 0x40000000;
  v55 = 0x40000000;
  v56 = -1073741824;
  CBox::Set((CBox *)&unk_796188, (const CVector *)&v56, (const CVector *)&v53);
  byte_7961B0 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  CSphere::Set((CSphere *)&unk_7961D0, 2.0, (const CVector *)&v56);
  v57 = -1073741824;
  v58 = -1073741824;
  v53 = 0x40000000;
  v54 = 0x40000000;
  v55 = 0x40000000;
  v56 = -1073741824;
  CBox::Set((CBox *)&unk_7961B8, (const CVector *)&v56, (const CVector *)&v53);
  byte_7961E0 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  CSphere::Set((CSphere *)&unk_796200, 2.0, (const CVector *)&v56);
  v57 = -1073741824;
  v58 = -1073741824;
  v53 = 0x40000000;
  v54 = 0x40000000;
  v55 = 0x40000000;
  v56 = -1073741824;
  CBox::Set((CBox *)&unk_7961E8, (const CVector *)&v56, (const CVector *)&v53);
  byte_796210 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  CSphere::Set((CSphere *)&algn_796211[31], 2.0, (const CVector *)&v56);
  v57 = -1073741824;
  v58 = -1073741824;
  v53 = 0x40000000;
  v54 = 0x40000000;
  v55 = 0x40000000;
  v56 = -1073741824;
  CBox::Set((CBox *)&algn_796211[7], (const CVector *)&v56, (const CVector *)&v53);
  byte_796240 = 0;
  CColModel::AllocateData((CColModel *)&CTempColModels::ms_colModelPed1, 3, 0, 2, 0, 0, 0);
  v1 = dword_796544;
  v2 = *(CColSphere **)(dword_796544 + 8);
  v56 = 0;
  v57 = 0;
  v58 = -1102263092;
  CColSphere::Set(v2, 0.35, (const CVector *)&v56, 0x3Eu, 0, 0xFFu);
  v3 = *(_DWORD *)(v1 + 8);
  v56 = 0;
  v57 = 0;
  v58 = 1045220560;
  CColSphere::Set((CColSphere *)(v3 + 20), 0.35, (const CVector *)&v56, 0x3Eu, 1u, 0xFFu);
  v4 = (CColSphere *)(*(_DWORD *)(v1 + 8) + 40);
  v56 = 0;
  v57 = 0;
  v58 = 1058642330;
  CColSphere::Set(v4, 0.35, (const CVector *)&v56, 0x3Eu, 2u, 0xFFu);
  v5 = *(CColLine **)(v1 + 16);
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v53 = 0;
  v54 = 0;
  v55 = -1082130432;
  CColLine::Set(v5, (const CVector *)&v56, (const CVector *)&v53);
  v6 = *(_DWORD *)(v1 + 16);
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 1065353216;
  CColLine::Set((CColLine *)(v6 + 32), (const CVector *)&v56, (const CVector *)&v53);
  *(_BYTE *)(v1 + 6) = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  CSphere::Set((CSphere *)&unk_796530, 1.0, (const CVector *)&v56);
  v56 = -1095552205;
  v57 = -1095552205;
  v58 = -1082130432;
  v53 = 1051931443;
  v54 = 1051931443;
  v55 = 1064514355;
  CBox::Set((CBox *)&CTempColModels::ms_colModelPed1, (const CVector *)&v56, (const CVector *)&v53);
  byte_796540 = 0;
  CColModel::AllocateData((CColModel *)&CTempColModels::ms_colModelPed2, 9, 0, 2, 0, 0, 0);
  v7 = dword_796574;
  v8 = *(CColSphere **)(dword_796574 + 8);
  v58 = -1102263092;
  v56 = 0;
  v57 = 0;
  CColSphere::Set(v8, 0.35, (const CVector *)&v56, 0x3Eu, 0, 0xFFu);
  v9 = *(_DWORD *)(v7 + 8);
  v56 = 0;
  v57 = 0;
  v58 = 1045220560;
  CColSphere::Set((CColSphere *)(v9 + 20), 0.35, (const CVector *)&v56, 0x3Eu, 1u, 0xFFu);
  v10 = *(_DWORD *)(v7 + 8);
  v56 = 0;
  v57 = 0;
  v58 = 1058642330;
  CColSphere::Set((CColSphere *)(v10 + 40), 0.35, (const CVector *)&v56, 0x3Eu, 2u, 0xFFu);
  v11 = *(_DWORD *)(v7 + 8);
  v57 = 1051931443;
  v56 = 1043878380;
  v58 = 1061158912;
  CColSphere::Set((CColSphere *)(v11 + 60), 0.13, (const CVector *)&v56, 0x3Eu, 6u, 0xFFu);
  v12 = *(_DWORD *)(v7 + 8);
  v56 = 1043878380;
  v57 = 1056964608;
  v58 = 1061158912;
  CColSphere::Set((CColSphere *)(v12 + 80), 0.13, (const CVector *)&v56, 0x3Eu, 6u, 0xFFu);
  v13 = *(_DWORD *)(v7 + 8);
  v57 = 1051931443;
  v56 = -1103605268;
  v58 = 1061158912;
  CColSphere::Set((CColSphere *)(v13 + 100), 0.13, (const CVector *)&v56, 0x3Eu, 5u, 0xFFu);
  v14 = *(_DWORD *)(v7 + 8);
  v56 = -1103605268;
  v58 = 1061158912;
  v57 = 1056964608;
  CColSphere::Set((CColSphere *)(v14 + 120), 0.13, (const CVector *)&v56, 0x3Eu, 5u, 0xFFu);
  v15 = *(_DWORD *)(v7 + 8);
  v58 = 1055286888;
  v56 = 0;
  v57 = 1056964608;
  CColSphere::Set((CColSphere *)(v15 + 140), 0.2, (const CVector *)&v56, 0x3Eu, 8u, 0xFFu);
  v16 = *(_DWORD *)(v7 + 8);
  v57 = 1057803469;
  v58 = 1045220560;
  v56 = 0;
  CColSphere::Set((CColSphere *)(v16 + 160), 0.35, (const CVector *)&v56, 0x3Eu, 4u, 0xFFu);
  v17 = *(CColLine **)(v7 + 16);
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v53 = 0;
  v54 = 0;
  v55 = -1082130432;
  CColLine::Set(v17, (const CVector *)&v56, (const CVector *)&v53);
  v18 = *(_DWORD *)(v7 + 16);
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 1065353216;
  CColLine::Set((CColLine *)(v18 + 32), (const CVector *)&v56, (const CVector *)&v53);
  *(_BYTE *)(v7 + 6) = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  CSphere::Set((CSphere *)&unk_796560, 1.0, (const CVector *)&v56);
  v58 = -1082130432;
  v56 = -1095552205;
  v57 = -1095552205;
  v55 = 1064514355;
  v53 = 1051931443;
  v54 = 1063675494;
  CBox::Set((CBox *)&CTempColModels::ms_colModelPed2, (const CVector *)&v56, (const CVector *)&v53);
  unk_796570 = 0;
  CColModel::AllocateData((CColModel *)&CTempColModels::ms_colModelDoor1, 3, 0, 0, 0, 0, 0);
  v19 = dword_7965A4;
  v20 = *(CColSphere **)(dword_7965A4 + 8);
  v56 = 0;
  v57 = -1098907648;
  v58 = -1095552205;
  CColSphere::Set(v20, 0.15, (const CVector *)&v56, 0x40u, 0, 0xFFu);
  v21 = (CColSphere *)(*(_DWORD *)(v19 + 8) + 20);
  v58 = -1095552205;
  v56 = 0;
  v57 = -1082969293;
  CColSphere::Set(v21, 0.15, (const CVector *)&v56, 0x40u, 0, 0xFFu);
  v22 = *(_DWORD *)(v19 + 8);
  v57 = -1088841318;
  v56 = 0;
  v58 = 1048576000;
  CColSphere::Set((CColSphere *)(v22 + 40), 0.25, (const CVector *)&v56, 0x40u, 0, 0xFFu);
  v56 = 0;
  v57 = -1088841318;
  v58 = 0;
  CSphere::Set((CSphere *)&unk_796590, 1.5, (const CVector *)&v56);
  v57 = 0;
  v56 = -1097229926;
  v54 = -1080452710;
  v58 = -1088841318;
  v53 = 1050253722;
  v55 = 1058642330;
  CBox::Set((CBox *)&CTempColModels::ms_colModelDoor1, (const CVector *)&v56, (const CVector *)&v53);
  byte_7965A0 = 0;
  CColModel::AllocateData((CColModel *)&CTempColModels::ms_colModelBumper1, 4, 0, 0, 0, 0, 0);
  v23 = dword_7965D4;
  v24 = *(CColSphere **)(dword_7965D4 + 8);
  v56 = 1062836634;
  v57 = -1119040307;
  v58 = 0;
  CColSphere::Set(v24, 0.15, (const CVector *)&v56, 0x40u, 0, 0xFFu);
  v25 = (CColSphere *)(*(_DWORD *)(v23 + 8) + 20);
  v57 = 1028443341;
  v56 = 1053609165;
  v58 = 0;
  CColSphere::Set(v25, 0.15, (const CVector *)&v56, 0x40u, 0, 0xFFu);
  v26 = (CColSphere *)(*(_DWORD *)(v23 + 8) + 40);
  v57 = 1028443341;
  v56 = -1093874483;
  v58 = 0;
  CColSphere::Set(v26, 0.15, (const CVector *)&v56, 0x40u, 0, 0xFFu);
  v27 = (CColSphere *)(*(_DWORD *)(v23 + 8) + 60);
  v57 = -1119040307;
  v56 = -1084647014;
  v58 = 0;
  CColSphere::Set(v27, 0.15, (const CVector *)&v56, 0x40u, 0, 0xFFu);
  v56 = 0;
  v57 = 0;
  v58 = 0;
  CSphere::Set((CSphere *)&unk_7965C0, 2.2, (const CVector *)&v56);
  v56 = -1080452710;
  v57 = -1097229926;
  v58 = -1102263091;
  v54 = 1050253722;
  v53 = 1067030938;
  v55 = 1045220557;
  CBox::Set((CBox *)&CTempColModels::ms_colModelBumper1, (const CVector *)&v56, (const CVector *)&v53);
  byte_7965D0 = 0;
  CColModel::AllocateData((CColModel *)&CTempColModels::ms_colModelPanel1, 4, 0, 0, 0, 0, 0);
  v28 = dword_796604;
  v29 = *(CColSphere **)(dword_796604 + 8);
  v56 = 1041865114;
  v57 = 1055286886;
  v58 = 0;
  CColSphere::Set(v29, 0.15, (const CVector *)&v56, 0x40u, 0, 0xFFu);
  v30 = (CColSphere *)(*(_DWORD *)(v28 + 8) + 20);
  v56 = 1041865114;
  v57 = -1092196762;
  v58 = 0;
  CColSphere::Set(v30, 0.15, (const CVector *)&v56, 0x40u, 0, 0xFFu);
  v31 = (CColSphere *)(*(_DWORD *)(v28 + 8) + 40);
  v57 = -1092196762;
  v56 = -1105618534;
  v58 = 0;
  CColSphere::Set(v31, 0.15, (const CVector *)&v56, 0x40u, 0, 0xFFu);
  v32 = (CColSphere *)(*(_DWORD *)(v28 + 8) + 60);
  v56 = -1105618534;
  v57 = 1055286886;
  v58 = 0;
  CColSphere::Set(v32, 0.15, (const CVector *)&v56, 0x40u, 0, 0xFFu);
  v56 = 0;
  v57 = 0;
  v58 = 0;
  CSphere::Set((CSphere *)&unk_7965F0, 1.4, (const CVector *)&v56);
  v58 = -1105618534;
  v57 = -1088841318;
  v56 = -1097229926;
  v54 = 1058642330;
  v53 = 1050253722;
  v55 = 1041865114;
  CBox::Set((CBox *)&CTempColModels::ms_colModelPanel1, (const CVector *)&v56, (const CVector *)&v53);
  byte_796600 = 0;
  CColModel::AllocateData((CColModel *)&CTempColModels::ms_colModelBonnet1, 4, 0, 0, 0, 0, 0);
  v33 = dword_796634;
  v34 = *(CColSphere **)(dword_796634 + 8);
  v57 = 1036831949;
  v56 = -1093874483;
  v58 = 0;
  CColSphere::Set(v34, 0.2, (const CVector *)&v56, 0x40u, 0, 0xFFu);
  v35 = (CColSphere *)(*(_DWORD *)(v33 + 8) + 20);
  v56 = -1093874483;
  v57 = 1063675494;
  v58 = 0;
  CColSphere::Set(v35, 0.2, (const CVector *)&v56, 0x40u, 0, 0xFFu);
  v36 = (CColSphere *)(*(_DWORD *)(v33 + 8) + 40);
  v57 = 1036831949;
  v56 = 1053609165;
  v58 = 0;
  CColSphere::Set(v36, 0.2, (const CVector *)&v56, 0x40u, 0, 0xFFu);
  v37 = (CColSphere *)(*(_DWORD *)(v33 + 8) + 60);
  v56 = 1053609165;
  v57 = 1063675494;
  v58 = 0;
  CColSphere::Set(v37, 0.2, (const CVector *)&v56, 0x40u, 0, 0xFFu);
  v56 = 0;
  v57 = 1056964608;
  v58 = 0;
  CSphere::Set((CSphere *)&unk_796620, 1.7, (const CVector *)&v56);
  v57 = -1102263091;
  v56 = -1087163597;
  v58 = -1097229926;
  v54 = 1067030938;
  v53 = 1060320051;
  v55 = 1050253722;
  CBox::Set((CBox *)&CTempColModels::ms_colModelBonnet1, (const CVector *)&v56, (const CVector *)&v53);
  unk_796630 = 0;
  CColModel::AllocateData((CColModel *)&CTempColModels::ms_colModelBoot1, 4, 0, 0, 0, 0, 0);
  v38 = dword_796664;
  v39 = *(CColSphere **)(dword_796664 + 8);
  v57 = -1110651699;
  v56 = -1093874483;
  v58 = 0;
  CColSphere::Set(v39, 0.2, (const CVector *)&v56, 0x40u, 0, 0xFFu);
  v40 = (CColSphere *)(*(_DWORD *)(v38 + 8) + 20);
  v56 = -1093874483;
  v57 = -1088841318;
  v58 = 0;
  CColSphere::Set(v40, 0.2, (const CVector *)&v56, 0x40u, 0, 0xFFu);
  v41 = *(_DWORD *)(v38 + 8);
  v57 = -1110651699;
  v56 = 1053609165;
  v58 = 0;
  CColSphere::Set((CColSphere *)(v41 + 40), 0.2, (const CVector *)&v56, 0x40u, 0, 0xFFu);
  v42 = *(_DWORD *)(v38 + 8);
  v56 = 1053609165;
  v57 = -1088841318;
  v58 = 0;
  CColSphere::Set((CColSphere *)(v42 + 60), 0.2, (const CVector *)&v56, 0x40u, 0, 0xFFu);
  v56 = 0;
  v57 = -1093874483;
  v58 = 0;
  CSphere::Set((CSphere *)&unk_796650, 1.4, (const CVector *)&v56);
  v57 = -1083808154;
  v54 = 1045220557;
  v53 = 1060320051;
  v56 = -1087163597;
  v58 = -1097229926;
  v55 = 1050253722;
  CBox::Set((CBox *)&CTempColModels::ms_colModelBoot1, (const CVector *)&v56, (const CVector *)&v53);
  byte_796660 = 0;
  CColModel::AllocateData((CColModel *)&CTempColModels::ms_colModelWheel1, 2, 0, 0, 0, 0, 0);
  v43 = dword_796694;
  v44 = *(CColSphere **)(dword_796694 + 8);
  v56 = -1097229926;
  v57 = 0;
  v58 = 0;
  CColSphere::Set(v44, 0.35, (const CVector *)&v56, 0x3Cu, 0, 0xFFu);
  v45 = (CColSphere *)(*(_DWORD *)(v43 + 8) + 20);
  v56 = 1050253722;
  v57 = 0;
  v58 = 0;
  CColSphere::Set(v45, 0.35, (const CVector *)&v56, 0x3Cu, 0, 0xFFu);
  v56 = 0;
  v57 = 0;
  v58 = 0;
  CSphere::Set((CSphere *)&unk_796680, 1.4, (const CVector *)&v56);
  v56 = -1087163597;
  v57 = -1093874483;
  v58 = -1093874483;
  v54 = 1053609165;
  v53 = 1060320051;
  v55 = 1053609165;
  CBox::Set((CBox *)&CTempColModels::ms_colModelWheel1, (const CVector *)&v56, (const CVector *)&v53);
  byte_796690 = 0;
  CColModel::AllocateData((CColModel *)&CTempColModels::ms_colModelBodyPart1, 2, 0, 0, 0, 0, 0);
  v46 = dword_7966C4;
  v47 = *(CColSphere **)(dword_7966C4 + 8);
  v56 = 0;
  v57 = 0;
  v58 = 0;
  CColSphere::Set(v47, 0.2, (const CVector *)&v56, 0x3Eu, 0, 0xFFu);
  v48 = (CColSphere *)(*(_DWORD *)(v46 + 8) + 20);
  v56 = 1061997773;
  v57 = 0;
  v58 = 0;
  CColSphere::Set(v48, 0.2, (const CVector *)&v56, 0x3Eu, 0, 0xFFu);
  v56 = 1053609165;
  v57 = 0;
  v58 = 0;
  CSphere::Set((CSphere *)&unk_7966B0, 0.7, (const CVector *)&v56);
  v56 = -1097229926;
  v57 = -1097229926;
  v58 = -1097229926;
  v53 = 1066192077;
  v54 = 1050253722;
  v55 = 1050253722;
  CBox::Set((CBox *)&CTempColModels::ms_colModelBodyPart1, (const CVector *)&v56, (const CVector *)&v53);
  byte_7966C0 = 0;
  CColModel::AllocateData((CColModel *)&CTempColModels::ms_colModelBodyPart2, 2, 0, 0, 0, 0, 0);
  v49 = dword_7966F4;
  v50 = *(CColSphere **)(dword_7966F4 + 8);
  v56 = 0;
  v57 = 0;
  v58 = 0;
  CColSphere::Set(v50, 0.15, (const CVector *)&v56, 0x3Eu, 0, 0xFFu);
  v51 = *(_DWORD *)(v49 + 8);
  v57 = 0;
  v56 = 1056964608;
  v58 = 0;
  CColSphere::Set((CColSphere *)(v51 + 20), 0.15, (const CVector *)&v56, 0x3Eu, 0, 0xFFu);
  v57 = 0;
  v56 = 1048576000;
  v58 = 0;
  CSphere::Set((CSphere *)&unk_7966E0, 0.5, (const CVector *)&v56);
  v57 = -1102263091;
  v58 = -1102263091;
  v53 = 1060320051;
  v54 = 1045220557;
  v55 = 1045220557;
  v56 = -1102263091;
  CBox::Set((CBox *)&CTempColModels::ms_colModelBodyPart2, (const CVector *)&v56, (const CVector *)&v53);
  byte_7966F0 = 0;
  dword_79671C = 1048576000;
  dword_79670C = 1048576000;
  CTempColModels::ms_colModelWeapon = 0xBE800000BE800000LL;
  unk_796700 = 0x3E800000BE800000LL;
  result = &dword_796708;
  dword_796708 = 1048576000;
  return result;
}


// ============================================================
