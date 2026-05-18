
// Address: 0x18db04
// Original: j__ZN5CTasknwEj
// Demangled: CTask::operator new(uint)
// attributes: thunk
int __fastcall CTask::operator new(CTask *this, unsigned int a2)
{
  return _ZN5CTasknwEj(this, a2);
}


// ============================================================

// Address: 0x18f6e8
// Original: j__ZN5CTask10IsGoToTaskEPKS_
// Demangled: CTask::IsGoToTask(CTask const*)
// attributes: thunk
int __fastcall CTask::IsGoToTask(CTask *this, const CTask *a2)
{
  return _ZN5CTask10IsGoToTaskEPKS_(this, a2);
}


// ============================================================

// Address: 0x192938
// Original: j__ZN5CTask9IsTaskPtrEPv
// Demangled: CTask::IsTaskPtr(void *)
// attributes: thunk
int __fastcall CTask::IsTaskPtr(CTask *this, void *a2)
{
  return _ZN5CTask9IsTaskPtrEPv(this, a2);
}


// ============================================================

// Address: 0x197138
// Original: j__ZN5CTaskdlEPv
// Demangled: CTask::operator delete(void *)
// attributes: thunk
void __fastcall CTask::operator delete(void *a1)
{
  _ZN5CTaskdlEPv(a1);
}


// ============================================================

// Address: 0x19c2b4
// Original: j__ZN5CTask10CreateTaskEv
// Demangled: CTask::CreateTask(void)
// attributes: thunk
int __fastcall CTask::CreateTask(CTask *this)
{
  return _ZN5CTask10CreateTaskEv(this);
}


// ============================================================

// Address: 0x1a02cc
// Original: j__ZN5CTaskD2Ev
// Demangled: CTask::~CTask()
// attributes: thunk
void __fastcall CTask::~CTask(CTask *this)
{
  _ZN5CTaskD2Ev(this);
}


// ============================================================

// Address: 0x30770c
// Original: _ZN5CTask9StopTimerEPK6CEvent
// Demangled: CTask::StopTimer(CEvent const*)
void __fastcall CTask::StopTimer(CTask *this, const CEvent *a2)
{
  ;
}


// ============================================================

// Address: 0x485684
// Original: _ZN5CTask10CreateTaskEv
// Demangled: CTask::CreateTask(void)
int __fastcall CTask::CreateTask(CTask *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  int Task; // r4
  char *v6; // r1
  int *v7; // r0
  char v8; // r4
  unsigned int v9; // r1
  CPools *v10; // r5
  int v11; // r1
  int *v12; // r0
  char v13; // r4
  unsigned int v14; // r1
  char v15; // r4
  unsigned int v16; // r1
  char v17; // r4
  unsigned int v18; // r1
  char v19; // r4
  unsigned int v20; // r1
  char v21; // r4
  unsigned int v22; // r1
  int v23; // r0
  char v24; // r4
  unsigned int v25; // r1
  char v26; // r4
  unsigned int v27; // r1
  char v28; // r4
  unsigned int v29; // r1
  char v30; // r4
  char *v31; // r1
  CPed *v32; // r5
  char v33; // r4
  char *v34; // r1
  CVehicle *v35; // r5
  char v36; // r4
  char *v37; // r1
  CVehicle *v38; // r5
  char v39; // r4
  char v40; // r4
  unsigned int v41; // r1
  char v42; // r4
  char *v43; // r1
  CPed *v44; // r5
  char v45; // r4
  char *v46; // r1
  CPed *v47; // r5
  char v48; // r4
  unsigned int v49; // r1
  char v50; // r4
  unsigned int v51; // r1
  char v52; // r4
  unsigned int v53; // r1
  char v54; // r4
  unsigned int v55; // r1
  char v56; // r4
  unsigned int v57; // r1
  char v58; // r4
  unsigned int v59; // r1
  char v60; // r4
  unsigned int v61; // r1
  char v62; // r4
  unsigned int v63; // r1
  CPools *v64; // r5
  char v65; // r4
  unsigned int v66; // r1
  char v67; // r4
  unsigned int v68; // r1
  char v69; // r4
  unsigned int v70; // r1
  char v71; // r4
  unsigned int v72; // r1
  char v73; // r4
  char *v74; // r1
  CVehicle *Vehicle; // r5
  char v76; // r4
  unsigned int v77; // r1
  char v79; // r4
  char *v80; // r1
  CPed *Ped; // r5
  char v82; // r4
  char *v83; // r1
  CVehicle *v84; // r5
  char v85; // r4
  char *v86; // r1
  CVehicle *v87; // r5
  char v88; // r4
  char *v89; // r1
  CVehicle *v90; // r5
  char v91; // r4
  char *v92; // r1
  CVehicle *v93; // r5
  char v94; // r4
  char *v95; // r1
  CVehicle *v96; // r5
  char v97; // r4
  char *v98; // r1
  CVehicle *v99; // r5
  char v100; // r4
  unsigned int v101; // r1
  char v102; // r4
  unsigned int v103; // r1
  int PedRef; // r0
  CTaskComplexTurnToFaceEntityOrCoord *v105; // [sp+18h] [bp-20h] BYREF
  int v106; // [sp+1Ch] [bp-1Ch] BYREF
  CPools *v107[3]; // [sp+20h] [bp-18h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v105, byte_4, a3);
  Task = 0;
  v6 = (char *)v105 - 100;
  switch ( (unsigned int)v105 )
  {
    case 0x64u:
      return CTaskComplexMedicTreatInjuredPed::CreateTask(v105);
    case 0x65u:
      return CTaskComplexTreatAccident::CreateTask(v105);
    case 0x66u:
      return CTaskSimpleGiveCPR::CreateTask(v105);
    case 0x67u:
    case 0x68u:
    case 0x69u:
    case 0x6Au:
    case 0x6Bu:
    case 0x6Cu:
    case 0x6Du:
    case 0x6Fu:
    case 0x70u:
    case 0x71u:
    case 0x72u:
    case 0x73u:
    case 0x74u:
    case 0x75u:
    case 0x76u:
    case 0x77u:
    case 0x78u:
    case 0x79u:
    case 0x7Au:
    case 0x7Bu:
    case 0x7Cu:
    case 0x7Du:
    case 0x7Eu:
    case 0x7Fu:
    case 0x80u:
    case 0x81u:
    case 0x82u:
    case 0x83u:
    case 0x84u:
    case 0x85u:
    case 0x86u:
    case 0x87u:
    case 0x88u:
    case 0x89u:
    case 0x8Au:
    case 0x8Bu:
    case 0x8Cu:
    case 0x8Du:
    case 0x8Eu:
    case 0x8Fu:
    case 0x90u:
    case 0x91u:
    case 0x92u:
    case 0x93u:
    case 0x94u:
    case 0x95u:
    case 0x96u:
    case 0x97u:
    case 0x98u:
    case 0x99u:
    case 0x9Au:
    case 0x9Bu:
    case 0x9Cu:
    case 0x9Du:
    case 0x9Eu:
    case 0x9Fu:
    case 0xA0u:
    case 0xA1u:
    case 0xA2u:
    case 0xA3u:
    case 0xA4u:
    case 0xA5u:
    case 0xA6u:
    case 0xA7u:
    case 0xA8u:
    case 0xA9u:
    case 0xAAu:
    case 0xABu:
    case 0xACu:
    case 0xADu:
    case 0xAEu:
    case 0xAFu:
    case 0xB0u:
    case 0xB1u:
    case 0xB2u:
    case 0xB3u:
    case 0xB4u:
    case 0xB5u:
    case 0xB6u:
    case 0xB7u:
    case 0xB8u:
    case 0xB9u:
    case 0xBAu:
    case 0xBBu:
    case 0xBCu:
    case 0xBDu:
    case 0xBEu:
    case 0xBFu:
    case 0xC0u:
    case 0xC1u:
    case 0xC2u:
    case 0xC3u:
    case 0xC4u:
    case 0xC5u:
    case 0xC6u:
    case 0xC7u:
    case 0xC8u:
    case 0xC9u:
    case 0xCEu:
    case 0xD4u:
    case 0xE2u:
    case 0xE8u:
    case 0xE9u:
    case 0xEAu:
    case 0xEBu:
    case 0xF4u:
    case 0xF5u:
    case 0xF6u:
    case 0xF7u:
    case 0xF8u:
    case 0xF9u:
    case 0xFBu:
    case 0xFCu:
    case 0xFDu:
    case 0x100u:
    case 0x101u:
    case 0x103u:
    case 0x104u:
    case 0x108u:
    case 0x109u:
    case 0x10Au:
    case 0x10Bu:
    case 0x110u:
    case 0x111u:
    case 0x118u:
    case 0x119u:
    case 0x11Au:
    case 0x11Bu:
    case 0x11Cu:
    case 0x11Du:
    case 0x11Eu:
    case 0x11Fu:
    case 0x120u:
    case 0x121u:
    case 0x122u:
    case 0x123u:
    case 0x124u:
    case 0x125u:
    case 0x126u:
    case 0x127u:
    case 0x128u:
    case 0x129u:
    case 0x12Au:
    case 0x12Bu:
    case 0x12Cu:
    case 0x130u:
    case 0x132u:
    case 0x133u:
    case 0x134u:
    case 0x135u:
    case 0x138u:
    case 0x139u:
    case 0x13Au:
    case 0x13Bu:
    case 0x13Cu:
    case 0x13Du:
    case 0x13Eu:
    case 0x13Fu:
    case 0x140u:
    case 0x141u:
    case 0x142u:
    case 0x143u:
    case 0x144u:
    case 0x145u:
    case 0x146u:
    case 0x147u:
    case 0x148u:
    case 0x149u:
    case 0x14Au:
    case 0x14Bu:
    case 0x14Cu:
    case 0x14Du:
    case 0x14Eu:
    case 0x14Fu:
    case 0x150u:
    case 0x151u:
    case 0x152u:
    case 0x153u:
    case 0x154u:
    case 0x155u:
    case 0x156u:
    case 0x157u:
    case 0x158u:
    case 0x159u:
    case 0x15Au:
    case 0x15Bu:
    case 0x15Cu:
    case 0x15Du:
    case 0x15Eu:
    case 0x15Fu:
    case 0x160u:
    case 0x161u:
    case 0x162u:
    case 0x163u:
    case 0x164u:
    case 0x165u:
    case 0x166u:
    case 0x167u:
    case 0x168u:
    case 0x169u:
    case 0x16Au:
    case 0x16Bu:
    case 0x16Cu:
    case 0x16Du:
    case 0x16Eu:
    case 0x16Fu:
    case 0x170u:
    case 0x171u:
    case 0x172u:
    case 0x173u:
    case 0x174u:
    case 0x175u:
    case 0x176u:
    case 0x177u:
    case 0x178u:
    case 0x179u:
    case 0x17Au:
    case 0x17Bu:
    case 0x17Cu:
    case 0x17Du:
    case 0x17Eu:
    case 0x17Fu:
    case 0x180u:
    case 0x181u:
    case 0x182u:
    case 0x183u:
    case 0x184u:
    case 0x185u:
    case 0x186u:
    case 0x187u:
    case 0x188u:
    case 0x189u:
    case 0x18Au:
    case 0x18Bu:
    case 0x18Cu:
    case 0x18Du:
    case 0x18Eu:
    case 0x18Fu:
    case 0x190u:
    case 0x192u:
    case 0x1A1u:
    case 0x1A2u:
    case 0x1A8u:
    case 0x1ABu:
    case 0x1ACu:
    case 0x1ADu:
    case 0x1AEu:
    case 0x1AFu:
    case 0x1B0u:
    case 0x1B1u:
    case 0x1B2u:
    case 0x1B3u:
    case 0x1B4u:
    case 0x1B5u:
    case 0x1B6u:
    case 0x1B7u:
    case 0x1B8u:
    case 0x1B9u:
    case 0x1BAu:
    case 0x1BBu:
    case 0x1BCu:
    case 0x1BDu:
    case 0x1BEu:
    case 0x1BFu:
    case 0x1C0u:
    case 0x1C1u:
    case 0x1C2u:
    case 0x1C3u:
    case 0x1C4u:
    case 0x1C5u:
    case 0x1C6u:
    case 0x1C7u:
    case 0x1C8u:
    case 0x1C9u:
    case 0x1CAu:
    case 0x1CBu:
    case 0x1CCu:
    case 0x1CDu:
    case 0x1CEu:
    case 0x1CFu:
    case 0x1D0u:
    case 0x1D1u:
    case 0x1D2u:
    case 0x1D3u:
    case 0x1D4u:
    case 0x1D5u:
    case 0x1D6u:
    case 0x1D7u:
    case 0x1D8u:
    case 0x1D9u:
    case 0x1DAu:
    case 0x1DBu:
    case 0x1DCu:
    case 0x1DDu:
    case 0x1DEu:
    case 0x1DFu:
    case 0x1E0u:
    case 0x1E1u:
    case 0x1E2u:
    case 0x1E3u:
    case 0x1E4u:
    case 0x1E5u:
    case 0x1E6u:
    case 0x1E7u:
    case 0x1E8u:
    case 0x1E9u:
    case 0x1EAu:
    case 0x1EBu:
    case 0x1ECu:
    case 0x1EDu:
    case 0x1EEu:
    case 0x1EFu:
    case 0x1F0u:
    case 0x1F1u:
    case 0x1F2u:
    case 0x1F3u:
    case 0x204u:
    case 0x205u:
    case 0x206u:
    case 0x207u:
    case 0x208u:
    case 0x209u:
    case 0x20Au:
    case 0x20Bu:
    case 0x20Cu:
    case 0x20Du:
    case 0x20Eu:
    case 0x20Fu:
    case 0x210u:
    case 0x211u:
    case 0x212u:
    case 0x213u:
    case 0x214u:
    case 0x215u:
    case 0x216u:
    case 0x217u:
    case 0x218u:
    case 0x219u:
    case 0x21Au:
    case 0x21Bu:
    case 0x21Cu:
    case 0x21Du:
    case 0x21Eu:
    case 0x21Fu:
    case 0x220u:
    case 0x221u:
    case 0x222u:
    case 0x223u:
    case 0x224u:
    case 0x225u:
    case 0x226u:
    case 0x227u:
    case 0x228u:
    case 0x229u:
    case 0x22Au:
    case 0x22Bu:
    case 0x22Cu:
    case 0x22Du:
    case 0x22Eu:
    case 0x22Fu:
    case 0x230u:
    case 0x231u:
    case 0x232u:
    case 0x233u:
    case 0x234u:
    case 0x235u:
    case 0x236u:
    case 0x237u:
    case 0x238u:
    case 0x239u:
    case 0x23Au:
    case 0x23Bu:
    case 0x23Cu:
    case 0x23Du:
    case 0x23Eu:
    case 0x23Fu:
    case 0x240u:
    case 0x241u:
    case 0x242u:
    case 0x243u:
    case 0x244u:
    case 0x245u:
    case 0x246u:
    case 0x247u:
    case 0x248u:
    case 0x249u:
    case 0x24Au:
    case 0x24Bu:
    case 0x24Cu:
    case 0x24Du:
    case 0x24Eu:
    case 0x24Fu:
    case 0x250u:
    case 0x251u:
    case 0x252u:
    case 0x253u:
    case 0x254u:
    case 0x255u:
    case 0x256u:
    case 0x257u:
    case 0x25Bu:
    case 0x25Du:
    case 0x25Eu:
    case 0x25Fu:
    case 0x260u:
    case 0x261u:
    case 0x262u:
    case 0x263u:
    case 0x264u:
    case 0x265u:
    case 0x266u:
    case 0x267u:
    case 0x268u:
    case 0x269u:
    case 0x26Au:
    case 0x26Bu:
    case 0x26Cu:
    case 0x26Du:
    case 0x26Eu:
    case 0x26Fu:
    case 0x270u:
    case 0x271u:
    case 0x272u:
    case 0x273u:
    case 0x274u:
    case 0x275u:
    case 0x276u:
    case 0x277u:
    case 0x278u:
    case 0x279u:
    case 0x27Au:
    case 0x27Bu:
    case 0x27Cu:
    case 0x27Du:
    case 0x27Eu:
    case 0x27Fu:
    case 0x280u:
    case 0x281u:
    case 0x282u:
    case 0x283u:
    case 0x284u:
    case 0x285u:
    case 0x286u:
    case 0x287u:
    case 0x288u:
    case 0x289u:
    case 0x28Au:
    case 0x28Bu:
    case 0x28Cu:
    case 0x28Du:
    case 0x28Eu:
    case 0x28Fu:
    case 0x290u:
    case 0x291u:
    case 0x292u:
    case 0x293u:
    case 0x294u:
    case 0x295u:
    case 0x296u:
    case 0x297u:
    case 0x298u:
    case 0x299u:
    case 0x29Au:
    case 0x29Bu:
    case 0x29Cu:
    case 0x29Du:
    case 0x29Eu:
    case 0x29Fu:
    case 0x2A0u:
    case 0x2A1u:
    case 0x2A2u:
    case 0x2A3u:
    case 0x2A4u:
    case 0x2A5u:
    case 0x2A6u:
    case 0x2A7u:
    case 0x2A8u:
    case 0x2A9u:
    case 0x2AAu:
    case 0x2ABu:
    case 0x2ACu:
    case 0x2ADu:
    case 0x2AEu:
    case 0x2AFu:
    case 0x2B0u:
    case 0x2B1u:
    case 0x2B2u:
    case 0x2B3u:
    case 0x2B4u:
    case 0x2B5u:
    case 0x2B6u:
    case 0x2B7u:
    case 0x2B8u:
    case 0x2B9u:
    case 0x2BAu:
    case 0x2BBu:
    case 0x2D7u:
    case 0x2DBu:
    case 0x2DCu:
    case 0x2DDu:
    case 0x2DEu:
    case 0x2DFu:
    case 0x2E0u:
    case 0x2E1u:
    case 0x2E2u:
    case 0x2E3u:
    case 0x2E4u:
    case 0x2E5u:
    case 0x2E6u:
    case 0x2E7u:
    case 0x2E8u:
    case 0x2E9u:
    case 0x2EAu:
    case 0x2EBu:
    case 0x2ECu:
    case 0x2EDu:
    case 0x2EEu:
    case 0x2EFu:
    case 0x2F0u:
    case 0x2F1u:
    case 0x2F2u:
    case 0x2F3u:
    case 0x2F4u:
    case 0x2F5u:
    case 0x2F6u:
    case 0x2F7u:
    case 0x2F8u:
    case 0x2F9u:
    case 0x2FAu:
    case 0x2FBu:
    case 0x2FCu:
    case 0x2FDu:
    case 0x2FEu:
    case 0x2FFu:
    case 0x300u:
    case 0x301u:
    case 0x302u:
    case 0x303u:
    case 0x304u:
    case 0x305u:
    case 0x306u:
    case 0x307u:
    case 0x308u:
    case 0x309u:
    case 0x30Au:
    case 0x30Bu:
    case 0x30Cu:
    case 0x30Du:
    case 0x30Eu:
    case 0x30Fu:
    case 0x310u:
    case 0x311u:
    case 0x312u:
    case 0x313u:
    case 0x314u:
    case 0x315u:
    case 0x316u:
    case 0x317u:
    case 0x318u:
    case 0x319u:
    case 0x31Au:
    case 0x31Bu:
    case 0x31Cu:
    case 0x31Du:
    case 0x31Eu:
    case 0x31Fu:
    case 0x321u:
    case 0x322u:
    case 0x323u:
    case 0x324u:
    case 0x325u:
    case 0x326u:
    case 0x327u:
    case 0x328u:
    case 0x329u:
    case 0x32Au:
    case 0x32Bu:
    case 0x32Cu:
    case 0x32Du:
    case 0x32Eu:
    case 0x32Fu:
    case 0x330u:
    case 0x331u:
    case 0x332u:
    case 0x333u:
    case 0x334u:
    case 0x335u:
    case 0x336u:
    case 0x337u:
    case 0x338u:
    case 0x339u:
    case 0x33Au:
    case 0x33Bu:
    case 0x33Cu:
    case 0x33Du:
    case 0x33Eu:
    case 0x33Fu:
    case 0x340u:
    case 0x341u:
    case 0x342u:
    case 0x343u:
    case 0x344u:
    case 0x345u:
    case 0x346u:
    case 0x347u:
    case 0x348u:
    case 0x349u:
    case 0x34Au:
    case 0x34Bu:
    case 0x34Cu:
    case 0x34Du:
    case 0x34Eu:
    case 0x34Fu:
    case 0x350u:
    case 0x351u:
    case 0x352u:
    case 0x353u:
    case 0x354u:
    case 0x355u:
    case 0x356u:
    case 0x357u:
    case 0x358u:
    case 0x359u:
    case 0x35Au:
    case 0x35Bu:
    case 0x35Cu:
    case 0x35Du:
    case 0x35Eu:
    case 0x35Fu:
    case 0x360u:
    case 0x361u:
    case 0x362u:
    case 0x363u:
    case 0x364u:
    case 0x365u:
    case 0x366u:
    case 0x367u:
    case 0x368u:
    case 0x369u:
    case 0x36Au:
    case 0x36Bu:
    case 0x36Cu:
    case 0x36Du:
    case 0x36Eu:
    case 0x36Fu:
    case 0x370u:
    case 0x371u:
    case 0x372u:
    case 0x373u:
    case 0x374u:
    case 0x375u:
    case 0x376u:
    case 0x377u:
    case 0x378u:
    case 0x379u:
    case 0x37Au:
    case 0x37Bu:
    case 0x37Cu:
    case 0x37Du:
    case 0x37Eu:
    case 0x37Fu:
    case 0x380u:
    case 0x381u:
    case 0x382u:
    case 0x383u:
    case 0x384u:
    case 0x38Cu:
    case 0x38Du:
    case 0x38Eu:
    case 0x390u:
    case 0x391u:
    case 0x392u:
    case 0x393u:
    case 0x394u:
    case 0x397u:
    case 0x399u:
    case 0x39Au:
    case 0x39Bu:
    case 0x39Du:
    case 0x39Eu:
    case 0x3A0u:
    case 0x3A1u:
    case 0x3A2u:
    case 0x3A4u:
    case 0x3A6u:
    case 0x3A7u:
    case 0x3A8u:
    case 0x3A9u:
    case 0x3AAu:
    case 0x3ABu:
    case 0x3ACu:
    case 0x3ADu:
    case 0x3AEu:
    case 0x3AFu:
    case 0x3B0u:
    case 0x3B1u:
    case 0x3B2u:
    case 0x3B3u:
    case 0x3B4u:
    case 0x3B5u:
    case 0x3B6u:
    case 0x3B7u:
    case 0x3B8u:
    case 0x3B9u:
    case 0x3BAu:
    case 0x3BBu:
    case 0x3BCu:
    case 0x3BDu:
    case 0x3BEu:
    case 0x3BFu:
    case 0x3C0u:
    case 0x3C1u:
    case 0x3C2u:
    case 0x3C3u:
    case 0x3C4u:
    case 0x3C5u:
    case 0x3C6u:
    case 0x3C7u:
    case 0x3C8u:
    case 0x3C9u:
    case 0x3CAu:
    case 0x3CBu:
    case 0x3CCu:
    case 0x3CDu:
    case 0x3CEu:
    case 0x3CFu:
    case 0x3D0u:
    case 0x3D1u:
    case 0x3D2u:
    case 0x3D3u:
    case 0x3D4u:
    case 0x3D5u:
    case 0x3D6u:
    case 0x3D7u:
    case 0x3D8u:
    case 0x3D9u:
    case 0x3DAu:
    case 0x3DBu:
    case 0x3DCu:
    case 0x3DDu:
    case 0x3DEu:
    case 0x3DFu:
    case 0x3E0u:
    case 0x3E1u:
    case 0x3E2u:
    case 0x3E3u:
    case 0x3E4u:
    case 0x3E5u:
    case 0x3E6u:
    case 0x3E7u:
    case 0x3E9u:
    case 0x3EAu:
    case 0x3ECu:
    case 0x3EDu:
    case 0x3EEu:
    case 0x3EFu:
    case 0x3F0u:
    case 0x3F1u:
    case 0x3F2u:
    case 0x3F3u:
    case 0x3F4u:
    case 0x3F5u:
    case 0x3F6u:
    case 0x3F7u:
    case 0x3F8u:
    case 0x3FAu:
    case 0x3FBu:
    case 0x3FDu:
    case 0x3FFu:
    case 0x400u:
    case 0x401u:
    case 0x402u:
    case 0x403u:
    case 0x404u:
    case 0x405u:
    case 0x406u:
    case 0x407u:
    case 0x408u:
    case 0x409u:
    case 0x40Au:
    case 0x40Bu:
    case 0x40Cu:
    case 0x40Du:
    case 0x40Eu:
    case 0x40Fu:
    case 0x410u:
    case 0x411u:
    case 0x412u:
    case 0x413u:
    case 0x414u:
    case 0x415u:
    case 0x416u:
    case 0x417u:
    case 0x418u:
    case 0x419u:
    case 0x41Au:
    case 0x41Bu:
    case 0x41Cu:
    case 0x41Du:
    case 0x41Eu:
    case 0x41Fu:
    case 0x420u:
    case 0x421u:
    case 0x422u:
    case 0x423u:
    case 0x424u:
    case 0x425u:
    case 0x426u:
    case 0x427u:
    case 0x428u:
    case 0x429u:
    case 0x42Au:
    case 0x42Bu:
    case 0x42Cu:
    case 0x42Du:
    case 0x42Eu:
    case 0x42Fu:
    case 0x430u:
    case 0x431u:
    case 0x432u:
    case 0x433u:
    case 0x434u:
    case 0x435u:
    case 0x436u:
    case 0x437u:
    case 0x438u:
    case 0x439u:
    case 0x43Au:
    case 0x43Bu:
    case 0x43Cu:
    case 0x43Du:
    case 0x43Eu:
    case 0x43Fu:
    case 0x440u:
    case 0x441u:
    case 0x442u:
    case 0x443u:
    case 0x444u:
    case 0x445u:
    case 0x446u:
    case 0x447u:
    case 0x448u:
    case 0x449u:
    case 0x44Au:
    case 0x44Bu:
    case 0x44Cu:
    case 0x44Du:
    case 0x44Eu:
    case 0x44Fu:
    case 0x450u:
    case 0x451u:
    case 0x452u:
    case 0x453u:
    case 0x454u:
    case 0x455u:
    case 0x456u:
    case 0x457u:
    case 0x458u:
    case 0x459u:
    case 0x45Au:
    case 0x45Bu:
    case 0x45Cu:
    case 0x45Du:
    case 0x45Eu:
    case 0x45Fu:
    case 0x460u:
    case 0x461u:
    case 0x462u:
    case 0x463u:
    case 0x464u:
    case 0x465u:
    case 0x466u:
    case 0x467u:
    case 0x468u:
    case 0x469u:
    case 0x46Au:
    case 0x46Bu:
    case 0x46Cu:
    case 0x46Du:
    case 0x46Eu:
    case 0x46Fu:
    case 0x470u:
    case 0x471u:
    case 0x472u:
    case 0x473u:
    case 0x474u:
    case 0x475u:
    case 0x476u:
    case 0x477u:
    case 0x478u:
    case 0x479u:
    case 0x47Au:
    case 0x47Bu:
    case 0x47Cu:
    case 0x47Du:
    case 0x47Eu:
    case 0x47Fu:
    case 0x480u:
    case 0x481u:
    case 0x482u:
    case 0x483u:
    case 0x484u:
    case 0x485u:
    case 0x486u:
    case 0x487u:
    case 0x488u:
    case 0x489u:
    case 0x48Au:
    case 0x48Bu:
    case 0x48Cu:
    case 0x48Du:
    case 0x48Eu:
    case 0x48Fu:
    case 0x490u:
    case 0x491u:
    case 0x492u:
    case 0x493u:
    case 0x494u:
    case 0x495u:
    case 0x496u:
    case 0x497u:
    case 0x498u:
    case 0x499u:
    case 0x49Au:
    case 0x49Bu:
    case 0x49Cu:
    case 0x49Du:
    case 0x49Eu:
    case 0x49Fu:
    case 0x4A0u:
    case 0x4A1u:
    case 0x4A2u:
    case 0x4A3u:
    case 0x4A4u:
    case 0x4A5u:
    case 0x4A6u:
    case 0x4A7u:
    case 0x4A8u:
    case 0x4A9u:
    case 0x4AAu:
    case 0x4ABu:
    case 0x4ACu:
    case 0x4ADu:
    case 0x4AEu:
    case 0x4AFu:
    case 0x4B0u:
    case 0x4B1u:
    case 0x4B2u:
    case 0x4B3u:
    case 0x4B5u:
    case 0x4B6u:
    case 0x4B7u:
    case 0x4B8u:
    case 0x4B9u:
    case 0x4BAu:
    case 0x4BBu:
    case 0x4BCu:
    case 0x4BDu:
    case 0x4BEu:
    case 0x4BFu:
    case 0x4C0u:
    case 0x4C1u:
    case 0x4C2u:
    case 0x4C4u:
    case 0x4C5u:
    case 0x4C6u:
    case 0x4C7u:
    case 0x4C8u:
    case 0x4C9u:
    case 0x4CAu:
    case 0x4CBu:
    case 0x4CCu:
    case 0x4CDu:
    case 0x4CEu:
    case 0x4CFu:
    case 0x4D0u:
    case 0x4D1u:
    case 0x4D2u:
    case 0x4D3u:
    case 0x4D4u:
    case 0x4D5u:
    case 0x4D6u:
    case 0x4D7u:
    case 0x4D8u:
    case 0x4D9u:
    case 0x4DAu:
    case 0x4DBu:
    case 0x4DCu:
    case 0x4DDu:
    case 0x4DEu:
    case 0x4DFu:
    case 0x4E0u:
    case 0x4E1u:
    case 0x4E2u:
    case 0x4E3u:
    case 0x4E4u:
    case 0x4E5u:
    case 0x4E6u:
    case 0x4E7u:
    case 0x4E8u:
    case 0x4E9u:
    case 0x4EAu:
    case 0x4EBu:
    case 0x4ECu:
    case 0x4EDu:
    case 0x4EEu:
    case 0x4EFu:
    case 0x4F0u:
    case 0x4F1u:
    case 0x4F2u:
    case 0x4F3u:
    case 0x4F4u:
    case 0x4F5u:
    case 0x4F6u:
    case 0x4F7u:
    case 0x4F8u:
    case 0x4F9u:
    case 0x4FAu:
    case 0x4FBu:
    case 0x4FCu:
    case 0x4FDu:
    case 0x4FEu:
    case 0x4FFu:
    case 0x500u:
    case 0x501u:
    case 0x502u:
    case 0x503u:
    case 0x504u:
    case 0x505u:
    case 0x506u:
    case 0x507u:
    case 0x508u:
    case 0x509u:
    case 0x50Au:
    case 0x50Bu:
    case 0x50Cu:
    case 0x50Du:
    case 0x50Eu:
    case 0x50Fu:
    case 0x510u:
    case 0x511u:
    case 0x512u:
    case 0x513u:
    case 0x514u:
    case 0x516u:
    case 0x519u:
    case 0x51Eu:
    case 0x51Fu:
    case 0x520u:
    case 0x521u:
    case 0x522u:
    case 0x523u:
    case 0x524u:
    case 0x525u:
    case 0x526u:
    case 0x527u:
    case 0x528u:
    case 0x529u:
    case 0x52Au:
    case 0x52Bu:
    case 0x52Cu:
    case 0x52Du:
    case 0x52Eu:
    case 0x52Fu:
    case 0x530u:
    case 0x531u:
    case 0x532u:
    case 0x533u:
    case 0x534u:
    case 0x535u:
    case 0x536u:
    case 0x537u:
    case 0x538u:
    case 0x539u:
    case 0x53Au:
    case 0x53Bu:
    case 0x53Cu:
    case 0x53Du:
    case 0x53Eu:
    case 0x53Fu:
    case 0x540u:
    case 0x541u:
    case 0x542u:
    case 0x543u:
    case 0x544u:
    case 0x545u:
    case 0x546u:
    case 0x547u:
    case 0x548u:
    case 0x549u:
    case 0x54Au:
    case 0x54Bu:
    case 0x54Cu:
    case 0x54Du:
    case 0x54Eu:
    case 0x54Fu:
    case 0x550u:
    case 0x551u:
    case 0x552u:
    case 0x553u:
    case 0x554u:
    case 0x555u:
    case 0x556u:
    case 0x557u:
    case 0x558u:
    case 0x559u:
    case 0x55Au:
    case 0x55Bu:
    case 0x55Cu:
    case 0x55Du:
    case 0x55Eu:
    case 0x55Fu:
    case 0x560u:
    case 0x561u:
    case 0x562u:
    case 0x563u:
    case 0x564u:
    case 0x565u:
    case 0x566u:
    case 0x567u:
    case 0x568u:
    case 0x569u:
    case 0x56Au:
    case 0x56Bu:
    case 0x56Cu:
    case 0x56Du:
    case 0x56Eu:
    case 0x56Fu:
    case 0x570u:
    case 0x571u:
    case 0x572u:
    case 0x573u:
    case 0x574u:
    case 0x575u:
    case 0x576u:
    case 0x577u:
    case 0x578u:
    case 0x579u:
    case 0x57Au:
    case 0x57Bu:
    case 0x57Cu:
    case 0x57Du:
    case 0x57Eu:
    case 0x57Fu:
    case 0x580u:
    case 0x581u:
    case 0x582u:
    case 0x583u:
    case 0x584u:
    case 0x585u:
    case 0x586u:
    case 0x587u:
    case 0x588u:
    case 0x589u:
    case 0x58Au:
    case 0x58Bu:
    case 0x58Cu:
    case 0x58Du:
    case 0x58Eu:
    case 0x58Fu:
    case 0x590u:
    case 0x591u:
    case 0x592u:
    case 0x593u:
    case 0x594u:
    case 0x595u:
    case 0x596u:
    case 0x597u:
    case 0x598u:
    case 0x599u:
    case 0x59Au:
    case 0x59Bu:
    case 0x59Cu:
    case 0x59Du:
    case 0x59Eu:
    case 0x59Fu:
    case 0x5A0u:
    case 0x5A1u:
    case 0x5A2u:
    case 0x5A3u:
    case 0x5A4u:
    case 0x5A5u:
    case 0x5A6u:
    case 0x5A7u:
    case 0x5A8u:
    case 0x5A9u:
    case 0x5AAu:
    case 0x5ABu:
    case 0x5ACu:
    case 0x5ADu:
    case 0x5AEu:
    case 0x5AFu:
    case 0x5B0u:
    case 0x5B1u:
    case 0x5B2u:
    case 0x5B3u:
    case 0x5B4u:
    case 0x5B5u:
    case 0x5B6u:
    case 0x5B7u:
    case 0x5B8u:
    case 0x5B9u:
    case 0x5BAu:
    case 0x5BBu:
    case 0x5BCu:
    case 0x5BDu:
    case 0x5BEu:
    case 0x5BFu:
    case 0x5C0u:
    case 0x5C1u:
    case 0x5C2u:
    case 0x5C3u:
    case 0x5C4u:
    case 0x5C5u:
    case 0x5C6u:
    case 0x5C7u:
    case 0x5C8u:
    case 0x5C9u:
    case 0x5CAu:
    case 0x5CBu:
    case 0x5CCu:
    case 0x5CDu:
    case 0x5CEu:
    case 0x5CFu:
    case 0x5D0u:
    case 0x5D1u:
    case 0x5D2u:
    case 0x5D3u:
    case 0x5D4u:
    case 0x5D5u:
    case 0x5D6u:
    case 0x5D7u:
    case 0x5D8u:
    case 0x5D9u:
    case 0x5DAu:
    case 0x5DBu:
    case 0x5DCu:
    case 0x5DDu:
    case 0x5DEu:
    case 0x5DFu:
    case 0x5E0u:
    case 0x5E1u:
    case 0x5E2u:
    case 0x5E3u:
    case 0x5E4u:
    case 0x5E5u:
    case 0x5E6u:
    case 0x5E7u:
    case 0x5E8u:
    case 0x5E9u:
    case 0x5EAu:
    case 0x5EBu:
    case 0x5ECu:
    case 0x5EDu:
    case 0x5EEu:
    case 0x5EFu:
    case 0x5F0u:
    case 0x5F1u:
    case 0x5F2u:
    case 0x5F3u:
    case 0x5F4u:
    case 0x5F5u:
    case 0x5F6u:
    case 0x5F7u:
    case 0x5F8u:
    case 0x5F9u:
    case 0x5FAu:
    case 0x5FBu:
    case 0x5FCu:
    case 0x5FDu:
    case 0x5FEu:
    case 0x5FFu:
    case 0x600u:
    case 0x601u:
    case 0x602u:
    case 0x603u:
    case 0x604u:
    case 0x605u:
    case 0x606u:
    case 0x607u:
    case 0x608u:
    case 0x609u:
    case 0x60Au:
    case 0x60Bu:
    case 0x60Cu:
    case 0x60Du:
    case 0x60Eu:
    case 0x60Fu:
    case 0x610u:
    case 0x611u:
    case 0x612u:
    case 0x613u:
    case 0x614u:
    case 0x615u:
    case 0x616u:
    case 0x617u:
    case 0x618u:
    case 0x619u:
    case 0x61Au:
    case 0x61Bu:
    case 0x61Cu:
    case 0x61Du:
    case 0x61Eu:
    case 0x61Fu:
    case 0x620u:
    case 0x621u:
    case 0x622u:
    case 0x623u:
    case 0x624u:
    case 0x625u:
    case 0x626u:
    case 0x627u:
    case 0x628u:
    case 0x629u:
    case 0x62Au:
    case 0x62Bu:
    case 0x62Cu:
    case 0x62Du:
    case 0x62Eu:
    case 0x62Fu:
    case 0x630u:
    case 0x631u:
    case 0x632u:
    case 0x633u:
    case 0x634u:
    case 0x635u:
    case 0x636u:
    case 0x637u:
    case 0x638u:
    case 0x639u:
    case 0x63Au:
    case 0x63Bu:
    case 0x63Cu:
    case 0x63Du:
    case 0x63Eu:
    case 0x63Fu:
    case 0x641u:
    case 0x642u:
    case 0x643u:
      return Task;
    case 0x6Eu:
      v50 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v50;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, &byte_9[3], v4);
      Task = CTask::operator new((CTask *)&off_18, v51);
      CTaskComplexExtinguishFireOnFoot::CTaskComplexExtinguishFireOnFoot(
        (CTaskComplexExtinguishFireOnFoot *)Task,
        (const CVector *)v107);
      return Task;
    case 0xCAu:
      v8 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v8;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      Task = CTask::operator new((CTask *)&off_18, v9);
      v10 = v107[0];
      CTaskSimple::CTaskSimple((CTaskSimple *)Task);
      v11 = 0;
      *(_WORD *)(Task + 16) = 0;
      v12 = (int *)&`vtable for'CTaskSimplePause;
      *(_DWORD *)(Task + 20) = v10;
      *(_DWORD *)(Task + 8) = 0;
      goto LABEL_48;
    case 0xCBu:
      Task = CTask::operator new((CTask *)&dword_20, (unsigned int)v6);
      CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)Task, 20000, 0, 0, 8.0);
      return Task;
    case 0xCCu:
      v13 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v13;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 1, v4);
      Task = CTask::operator new((CTask *)&byte_9[3], v14);
      CTaskSimpleSetStayInSamePlace::CTaskSimpleSetStayInSamePlace((CTaskSimpleSetStayInSamePlace *)Task, (bool)v107[0]);
      return Task;
    case 0xCDu:
      Task = CTask::operator new((CTask *)&word_10, (unsigned int)v6);
      CTaskSimpleGetUp::CTaskSimpleGetUp((CTaskSimpleGetUp *)Task);
      return Task;
    case 0xCFu:
      Task = CTask::operator new((CTask *)&byte_9[3], (unsigned int)v6);
      CTaskComplexGetUpAndStandStill::CTaskComplexGetUpAndStandStill((CTaskComplexGetUpAndStandStill *)Task);
      return Task;
    case 0xD0u:
      return CTaskComplexFallAndGetUp::CreateTask(v105);
    case 0xD1u:
      return CTaskComplexFallAndStayDown::CreateTask(v105);
    case 0xD2u:
      v52 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v52;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 1, v4);
      Task = CTask::operator new((CTask *)&word_2C, v53);
      CTaskSimpleJump::CTaskSimpleJump((CTaskSimpleJump *)Task, (bool)v107[0]);
      return Task;
    case 0xD3u:
      v15 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v15;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      Task = CTask::operator new((CTask *)&dword_14, v16);
      CTaskComplexJump::CTaskComplexJump((CTaskComplexJump *)Task, (int)v107[0]);
      return Task;
    case 0xD5u:
      Task = CTask::operator new((CTask *)&word_2C, (unsigned int)v6);
      CTaskSimpleDrown::CTaskSimpleDrown((CTaskSimpleDrown *)Task);
      return Task;
    case 0xD6u:
      return CTaskSimpleDieInCar::CreateTask(v105);
    case 0xD7u:
      v17 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v17;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      Task = CTask::operator new((CTask *)&dword_1C, v18);
      CTaskComplexDieInCar::CTaskComplexDieInCar();
      return Task;
    case 0xD8u:
      Task = CTask::operator new((CTask *)byte_8, (unsigned int)v6);
      CTaskSimpleDrownInCar::CTaskSimpleDrownInCar((CTaskSimpleDrownInCar *)Task);
      return Task;
    case 0xD9u:
      return CTaskComplexDie::CreateTask(v105);
    case 0xDAu:
      return CTaskSimpleDead::CreateTask(v105);
    case 0xDBu:
      v54 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v54;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      Task = CTask::operator new((CTask *)&dword_1C, v55);
      CTaskSimpleTired::CTaskSimpleTired((CTaskSimpleTired *)Task, (int)v107[0]);
      return Task;
    case 0xDCu:
      v56 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v56;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 1, v4);
      Task = CTask::operator new((CTask *)&word_10, v57);
      CTaskSimpleSitDown::CTaskSimpleSitDown((CTaskSimpleSitDown *)Task, (unsigned __int8)v107[0]);
      return Task;
    case 0xDDu:
      return CTaskSimpleSitIdle::CreateTask(v105);
    case 0xDEu:
      v19 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v19;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 1, v4);
      Task = CTask::operator new((CTask *)&word_10, v20);
      CTaskSimpleStandUp::CTaskSimpleStandUp((CTaskSimpleStandUp *)Task, (unsigned __int8)v107[0]);
      return Task;
    case 0xDFu:
      return CTaskComplexSitDownThenIdleThenStandUp::CreateTask(v105);
    case 0xE0u:
      Task = CTask::operator new((CTask *)&off_18, (unsigned int)v6);
      CTaskComplexObserveTrafficLights::CTaskComplexObserveTrafficLights((CTaskComplexObserveTrafficLights *)Task);
      return Task;
    case 0xE1u:
      return CTaskComplexObserveTrafficLightsAndAchieveHeading::CreateTask(v105);
    case 0xE3u:
      return CTaskComplexCrossRoadLookAndAchieveHeading::CreateTask(v105);
    case 0xE4u:
      Task = CTask::operator new((CTask *)&word_10, (unsigned int)v6);
      CTaskSimpleTurn180::CTaskSimpleTurn180((CTaskSimpleTurn180 *)Task);
      return Task;
    case 0xE5u:
      Task = CTask::operator new((CTask *)&dword_20, (unsigned int)v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(Task, 0, 13, 1082130432, 229, (int)"HailTaxi", 0);
      v7 = (int *)&`vtable for'CTaskSimpleHailTaxi;
      goto LABEL_208;
    case 0xE6u:
      v58 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v58;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      Task = CTask::operator new((CTask *)&word_10, v59);
      CTaskComplexHitResponse::CTaskComplexHitResponse((CTaskComplexHitResponse *)Task, (int)v107[0]);
      return Task;
    case 0xE7u:
      v21 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v21;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      Task = CTask::operator new((CTask *)&word_10, v22);
      CTaskComplexHitByGunResponse::CTaskComplexHitByGunResponse((CTaskComplexHitByGunResponse *)Task, (int)v107[0]);
      return Task;
    case 0xECu:
      Task = CTask::operator new((CTask *)&byte_9[3], (unsigned int)v6);
      CTaskComplexWaitForDryWeather::CTaskComplexWaitForDryWeather((CTaskComplexWaitForDryWeather *)Task);
      return Task;
    case 0xEDu:
      Task = CTask::operator new((CTask *)&word_10, (unsigned int)v6);
      CTaskComplexWaitForBus::CTaskComplexWaitForBus((CTaskComplexWaitForBus *)Task);
      return Task;
    case 0xEEu:
      Task = CTask::operator new((CTask *)&byte_9[3], (unsigned int)v6);
      CTaskSimpleWaitForBus::CTaskSimpleWaitForBus((CTaskSimpleWaitForBus *)Task);
      return Task;
    case 0xEFu:
      Task = CTask::operator new((CTask *)&dword_14, (unsigned int)v6);
      CTaskSimpleWaitForPizza::CTaskSimpleWaitForPizza((CTaskSimpleWaitForPizza *)Task);
      return Task;
    case 0xF0u:
      return CTaskComplexInAirAndLand::CreateTask(v105);
    case 0xF1u:
      return CTaskSimpleInAir::CreateTask(v105);
    case 0xF2u:
      v60 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v60;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      Task = CTask::operator new((CTask *)&dword_14, v61);
      CTaskSimpleLand::CTaskSimpleLand();
      return Task;
    case 0xF3u:
      return CTaskComplexBeInGroup::CreateTask(v105);
    case 0xFAu:
      Task = CTask::operator new((CTask *)&byte_9[3], (unsigned int)v6);
      CTaskComplexOnFire::CTaskComplexOnFire((CTaskComplexOnFire *)Task);
      return Task;
    case 0xFEu:
      return CTaskSimpleClimb::CreateTask(v105);
    case 0xFFu:
      Task = CTask::operator new((CTask *)&off_18, (unsigned int)v6);
      CTaskSimplePlayerOnFire::CTaskSimplePlayerOnFire((CTaskSimplePlayerOnFire *)Task);
      return Task;
    case 0x102u:
      Task = CTask::operator new((CTask *)&word_10, (unsigned int)v6);
      CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(
        (CTaskComplexUseClosestFreeScriptedAttractor *)Task,
        0);
      return Task;
    case 0x105u:
      Task = CTask::operator new((CTask *)&word_10, (unsigned int)v6);
      CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(
        (CTaskComplexUseClosestFreeScriptedAttractor *)Task,
        0);
      v11 = 6;
      v12 = (int *)&`vtable for'CTaskComplexUseClosestFreeScriptedAttractorRun;
      goto LABEL_48;
    case 0x106u:
      Task = CTask::operator new((CTask *)&word_10, (unsigned int)v6);
      CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(
        (CTaskComplexUseClosestFreeScriptedAttractor *)Task,
        0);
      v11 = 7;
      v12 = (int *)&`vtable for'CTaskComplexUseClosestFreeScriptedAttractorSprint;
LABEL_48:
      v23 = *v12;
      *(_DWORD *)(Task + 12) = v11;
      goto LABEL_209;
    case 0x107u:
      return CTaskSimpleChoking::CreateTask(v105);
    case 0x10Cu:
      Task = CTask::operator new((CTask *)&byte_9[3], (unsigned int)v6);
      CTaskComplexInWater::CTaskComplexInWater((CTaskComplexInWater *)Task);
      return Task;
    case 0x10Du:
      return CTaskSimpleTriggerLookAt::CreateTask(v105);
    case 0x10Eu:
      Task = CTask::operator new((CTask *)byte_8, (unsigned int)v6);
      CTaskSimpleClearLookAt::CTaskSimpleClearLookAt((CTaskSimpleClearLookAt *)Task);
      return Task;
    case 0x10Fu:
      v62 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v62;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      Task = CTask::operator new((CTask *)&byte_9[3], v63);
      v64 = v107[0];
      CTaskSimple::CTaskSimple((CTaskSimple *)Task);
      *(_DWORD *)(Task + 8) = v64;
      v7 = (int *)&`vtable for'CTaskSimpleSetCharDecisionMaker;
      goto LABEL_208;
    case 0x112u:
      Task = CTask::operator new((CTask *)&byte_9[3], (unsigned int)v6);
      CTaskComplex::CTaskComplex((CTaskComplex *)Task);
      v7 = (int *)&`vtable for'CTaskComplexBeStill;
      goto LABEL_208;
    case 0x113u:
      return CTaskComplexUseSequence::CreateTask(v105);
    case 0x114u:
      v24 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v24;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 1, v4);
      Task = CTask::operator new((CTask *)&byte_9[3], v25);
      CTaskSimpleSetKindaStayInSamePlace::CTaskSimpleSetKindaStayInSamePlace(
        (CTaskSimpleSetKindaStayInSamePlace *)Task,
        (bool)v107[0]);
      return Task;
    case 0x115u:
      return CTaskComplexFallToDeath::CreateTask(v105);
    case 0x116u:
      return CTaskSimpleWaitUntilLeaderAreaCodesMatch::CreateTask(v105);
    case 0x117u:
      v26 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v26;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      Task = CTask::operator new((CTask *)&dword_34, v27);
      CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
        Task,
        0,
        13,
        1082130432,
        -4.0,
        (int)v107[0],
        279,
        (int)"HailTaxiAndPause",
        0);
      v7 = (int *)&`vtable for'CTaskSimpleHailTaxiAndPause;
      goto LABEL_208;
    case 0x12Du:
      return CTaskSimpleSay::CreateTask(v105);
    case 0x12Eu:
      Task = CTask::operator new((CTask *)&word_10, (unsigned int)v6);
      CTaskSimpleShakeFist::CTaskSimpleShakeFist((CTaskSimpleShakeFist *)Task);
      return Task;
    case 0x12Fu:
      return CTaskSimpleFacial::CreateTask(v105);
    case 0x131u:
      Task = CTask::operator new((CTask *)&dword_20, (unsigned int)v6);
      CTaskComplexFacial::CTaskComplexFacial((CTaskComplexFacial *)Task);
      return Task;
    case 0x136u:
      return CTaskComplexGoPickUpEntity::CreateTask(v105);
    case 0x137u:
      v65 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v65;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
      Task = CTask::operator new((CTask *)&word_28, v66);
      CTaskSimpleDuckWhileShotsWhizzing::CTaskSimpleDuckWhileShotsWhizzing(
        (CTaskSimpleDuckWhileShotsWhizzing *)Task,
        (unsigned __int16)v107[0]);
      return Task;
    case 0x191u:
      return CTaskSimpleRunNamedAnim::CreateTask(v105);
    case 0x193u:
      Task = CTask::operator new((CTask *)&dword_20, (unsigned int)v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(Task, 0, 34, 1082130432, 403, (int)"HitFromBack", 0);
      v7 = (int *)&`vtable for'CTaskSimpleHitFromBack;
      goto LABEL_208;
    case 0x194u:
      Task = CTask::operator new((CTask *)&dword_20, (unsigned int)v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(Task, 0, 32, 1082130432, 404, (int)"HitFromFront", 0);
      v7 = (int *)&`vtable for'CTaskSimpleHitFromFront;
      goto LABEL_208;
    case 0x195u:
      Task = CTask::operator new((CTask *)&dword_20, (unsigned int)v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(Task, 0, 33, 1082130432, 405, (int)"HitFromLeft", 0);
      v7 = (int *)&`vtable for'CTaskSimpleHitFromLeft;
      goto LABEL_208;
    case 0x196u:
      Task = CTask::operator new((CTask *)&dword_20, (unsigned int)v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(Task, 0, 35, 1082130432, 406, (int)"HitFromRight", 0);
      v7 = (int *)&`vtable for'CTaskSimpleHitFromRight;
      goto LABEL_208;
    case 0x197u:
      Task = CTask::operator new((CTask *)&dword_20, (unsigned int)v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(Task, 0, 30, 1082130432, 407, (int)"HitByGunFromRear", 0);
      v7 = (int *)&`vtable for'CTaskSimpleHitByGunFromRear;
      goto LABEL_208;
    case 0x198u:
      Task = CTask::operator new((CTask *)&dword_20, (unsigned int)v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(Task, 0, 28, 1082130432, 408, (int)"HitByGunFromFront", 0);
      v7 = (int *)&`vtable for'CTaskSimpleHitByGunFromFront;
      goto LABEL_208;
    case 0x199u:
      Task = CTask::operator new((CTask *)&dword_20, (unsigned int)v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(Task, 0, 29, 1082130432, 409, (int)"HitByGunFromLeft", 0);
      v7 = (int *)&`vtable for'CTaskSimpleHitByGunFromLeft;
      goto LABEL_208;
    case 0x19Au:
      Task = CTask::operator new((CTask *)&dword_20, (unsigned int)v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(Task, 0, 31, 1082130432, 410, (int)"HitByGunFromRight", 0);
      v7 = (int *)&`vtable for'CTaskSimpleHitByGunFromRight;
      goto LABEL_208;
    case 0x19Bu:
      Task = CTask::operator new((CTask *)&dword_20, (unsigned int)v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(Task, 0, 38, 1082130432, 411, (int)"HitWall", 0);
      v7 = (int *)&`vtable for'CTaskSimpleHitWall;
      goto LABEL_208;
    case 0x19Cu:
      Task = CTask::operator new((CTask *)&dword_20, (unsigned int)v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(Task, 0, 143, 1082130432, 412, (int)"Cower", 0);
      v7 = (int *)&`vtable for'CTaskSimpleCower;
      goto LABEL_208;
    case 0x19Du:
      v67 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v67;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      Task = CTask::operator new((CTask *)&dword_34, v68);
      CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
        Task,
        0,
        142,
        1082130432,
        -4.0,
        (int)v107[0],
        413,
        (int)"HandsUp",
        0);
      v7 = (int *)&`vtable for'CTaskSimpleHandsUp;
      goto LABEL_208;
    case 0x19Eu:
      Task = CTask::operator new((CTask *)&dword_20, (unsigned int)v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(Task, 0, 40, 1082130432, 414, (int)"HitFromBehind", 0);
      v7 = (int *)&`vtable for'CTaskSimpleHitFromBehind;
      goto LABEL_208;
    case 0x19Fu:
      return CTaskSimpleDuck::CreateTask(v105);
    case 0x1A0u:
      v69 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v69;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      Task = CTask::operator new((CTask *)&dword_34, v70);
      CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(Task, 0, 12, 1082130432, -4.0, (int)v107[0], 416, (int)"Chat", 0);
      v7 = (int *)&`vtable for'CTaskSimpleChat;
      goto LABEL_208;
    case 0x1A3u:
      v28 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v28;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      Task = CTask::operator new((CTask *)&dword_34, v29);
      CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
        Task,
        0,
        48,
        1082130432,
        -4.0,
        (int)v107[0],
        419,
        (int)"Detonate",
        0);
      v7 = (int *)&`vtable for'CTaskSimpleDetonate;
      goto LABEL_208;
    case 0x1A4u:
      Task = CTask::operator new((CTask *)&dword_20, (unsigned int)v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(Task, 0, 151, 1082130432, 420, (int)"UseAtm", 0);
      v7 = (int *)&`vtable for'CTaskSimpleUseAtm;
      goto LABEL_208;
    case 0x1A5u:
      Task = CTask::operator new((CTask *)&dword_20, (unsigned int)v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(Task, 0, 135, 1082130432, 421, (int)"ScratchHead", 0);
      v7 = (int *)&`vtable for'CTaskSimpleScratchHead;
      goto LABEL_208;
    case 0x1A6u:
      v71 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v71;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      Task = CTask::operator new((CTask *)&dword_34, v72);
      CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
        Task,
        0,
        9,
        1082130432,
        -4.0,
        (int)v107[0],
        422,
        (int)"LookAbout",
        0);
      v7 = (int *)&`vtable for'CTaskSimpleLookAbout;
      goto LABEL_208;
    case 0x1A7u:
      Task = CTask::operator new((CTask *)&dword_20, (unsigned int)v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(Task, 0, 152, 1082130432, 423, (int)"Abseil", 0);
      v7 = (int *)&`vtable for'CTaskSimpleAbseil;
      goto LABEL_208;
    case 0x1A9u:
      return CTaskSimplePlayHandSignalAnim::CreateTask(v105);
    case 0x1AAu:
      return CTaskComplexPlayHandSignalAnim::CreateTask(v105);
    case 0x1F4u:
      Task = CTask::operator new((CTask *)&word_10, (unsigned int)v6);
      CTaskSimpleHitHead::CTaskSimpleHitHead((CTaskSimpleHitHead *)Task);
      return Task;
    case 0x1F5u:
      return CTaskSimpleEvasiveStep::CreateTask(v105);
    case 0x1F6u:
      return CTaskComplexEvasiveStep::CreateTask(v105);
    case 0x1F7u:
      v73 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v73;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      v74 = (char *)v107[0] + 1;
      if ( v107[0] == (CPools *)-1 )
        Vehicle = 0;
      else
        Vehicle = (CVehicle *)CPools::GetVehicle(v107[0], (int)v74);
      Task = CTask::operator new((CTask *)&dword_14, (unsigned int)v74);
      CTaskSimpleEvasiveDive::CTaskSimpleEvasiveDive((CTaskSimpleEvasiveDive *)Task, Vehicle);
      return Task;
    case 0x1F8u:
      return CTaskComplexEvasiveDiveAndGetUp::CreateTask(v105);
    case 0x1F9u:
      return CTaskComplexHitPedWithCar::CreateTask(v105);
    case 0x1FAu:
      return CTaskSimpleKillPedWithCar::CreateTask(v105);
    case 0x1FBu:
      return CTaskSimpleHurtPedWithCar::CreateTask(v105);
    case 0x1FCu:
      return CTaskComplexWalkRoundCar::CreateTask(v105);
    case 0x1FDu:
      return CTaskComplexWalkRoundBuildingAttempt::CreateTask(v105);
    case 0x1FEu:
      return CTaskComplexWalkRoundObject::CreateTask(v105);
    case 0x1FFu:
      Task = CTask::operator new((CTask *)&byte_9[3], (unsigned int)v6);
      CTaskComplexMoveBackAndJump::CTaskComplexMoveBackAndJump((CTaskComplexMoveBackAndJump *)Task);
      return Task;
    case 0x200u:
      return CTaskComplexEvasiveCower::CreateTask(v105);
    case 0x201u:
      v76 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v76;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v106, byte_4, v4);
      Task = CTask::operator new((CTask *)&dword_24, v77);
      memset(v107, 0, sizeof(v107));
      CTaskComplexEvasiveDiveAndGetUp::CTaskComplexEvasiveDiveAndGetUp(
        (CTaskComplexEvasiveDiveAndGetUp *)Task,
        0,
        v106,
        (const CVector *)v107,
        1);
      v7 = (int *)&`vtable for'CTaskComplexDiveFromAttachedEntityAndGetUp;
      goto LABEL_208;
    case 0x202u:
      return CTaskComplexWalkRoundFire::CreateTask(v105);
    case 0x203u:
      Task = CTask::operator new((CTask *)&byte_9[3], (unsigned int)v6);
      CTaskComplexStuckInAir::CTaskComplexStuckInAir((CTaskComplexStuckInAir *)Task);
      return Task;
    case 0x258u:
      v79 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v79;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      v80 = (char *)v107[0] + 1;
      if ( v107[0] == (CPools *)-1 )
        Ped = 0;
      else
        Ped = (CPed *)CPools::GetPed(v107[0], (int)v80);
      Task = CTask::operator new((CTask *)&off_3C, (unsigned int)v80);
      CTaskComplexInvestigateDeadPed::CTaskComplexInvestigateDeadPed((CTaskComplexInvestigateDeadPed *)Task, Ped);
      return Task;
    case 0x259u:
      v30 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v30;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      v31 = (char *)v107[0] + 1;
      if ( v107[0] == (CPools *)-1 )
        v32 = 0;
      else
        v32 = (CPed *)CPools::GetPed(v107[0], (int)v31);
      Task = CTask::operator new((CTask *)&dword_1C, (unsigned int)v31);
      CTaskComplexReactToGunAimedAt::CTaskComplexReactToGunAimedAt((CTaskComplexReactToGunAimedAt *)Task, v32);
      return Task;
    case 0x25Au:
      return CTaskComplexWaitForBackup::CreateTask(v105);
    case 0x25Cu:
      Task = CTask::operator new((CTask *)&word_10, (unsigned int)v6);
      CTaskComplexExtinguishFires::CTaskComplexExtinguishFires((CTaskComplexExtinguishFires *)Task);
      return Task;
    case 0x2BCu:
      return CTaskComplexEnterCarAsPassenger::CreateTask(v105);
    case 0x2BDu:
      v33 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v33;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      v34 = (char *)v107[0] + 1;
      if ( v107[0] == (CPools *)-1 )
        v35 = 0;
      else
        v35 = (CVehicle *)CPools::GetVehicle(v107[0], (int)v34);
      Task = CTask::operator new((CTask *)&dword_50, (unsigned int)v34);
      CTaskComplexEnterCarAsDriver::CTaskComplexEnterCarAsDriver((CTaskComplexEnterCarAsDriver *)Task, v35);
      return Task;
    case 0x2BEu:
      v82 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v82;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      v83 = (char *)v107[0] + 1;
      if ( v107[0] == (CPools *)-1 )
        v84 = 0;
      else
        v84 = (CVehicle *)CPools::GetVehicle(v107[0], (int)v83);
      Task = CTask::operator new((CTask *)&dword_20, (unsigned int)v83);
      CTaskComplexStealCar::CTaskComplexStealCar((CTaskComplexStealCar *)Task, v84);
      return Task;
    case 0x2BFu:
      return CTaskComplexDragPedFromCar::CreateTask(v105);
    case 0x2C0u:
      return CTaskComplexLeaveCar::CreateTask(v105);
    case 0x2C1u:
      return CTaskComplexLeaveCarAndDie::CreateTask(v105);
    case 0x2C2u:
      return CTaskComplexLeaveCarAndFlee::CreateTask(v105);
    case 0x2C3u:
      return CTaskComplexLeaveCarAndWander::CreateTask(v105);
    case 0x2C4u:
      return CTaskComplexScreamInCarThenLeave::CreateTask(v105);
    case 0x2C5u:
      v85 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v85;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      v86 = (char *)v107[0] + 1;
      if ( v107[0] == (CPools *)-1 )
        v87 = 0;
      else
        v87 = (CVehicle *)CPools::GetVehicle(v107[0], (int)v86);
      Task = CTask::operator new((CTask *)&dword_60, (unsigned int)v86);
      CTaskSimpleCarDrive::CTaskSimpleCarDrive((CTaskSimpleCarDrive *)Task, v87, 0, 0);
      return Task;
    case 0x2C6u:
      return CTaskComplexDriveToPoint::CreateTask(v105);
    case 0x2C7u:
      return CTaskComplexCarDriveWander::CreateTask(v105);
    case 0x2C8u:
      return CTaskComplexEnterCarAsPassengerTimed::CreateTask(v105);
    case 0x2C9u:
      v36 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v36;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      v37 = (char *)v107[0] + 1;
      if ( v107[0] == (CPools *)-1 )
        v38 = 0;
      else
        v38 = (CVehicle *)CPools::GetVehicle(v107[0], (int)v37);
      Task = CTask::operator new((CTask *)&dword_24, (unsigned int)v37);
      CTaskComplexEnterCarAsDriverTimed::CTaskComplexEnterCarAsDriverTimed(
        (CTaskComplexEnterCarAsDriverTimed *)Task,
        v38,
        20000);
      *(_DWORD *)(Task + 20) = CPedIntelligence::ms_iDesiredMoveState;
      CPedIntelligence::ms_iDesiredMoveState = (int)byte_6;
      if ( loadingPed )
      {
        PedRef = CPools::GetPedRef((CPools *)loadingPed, (CPed *)byte_6);
        CRunningScript::GivePedScriptedTask((CRunningScript *)missionScript, PedRef, (CTask *)Task, 1483);
        return 0;
      }
      return Task;
    case 0x2CAu:
      return CTaskComplexLeaveAnyCar::CreateTask(v105);
    case 0x2CBu:
      v88 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v88;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      v89 = (char *)v107[0] + 1;
      if ( v107[0] == (CPools *)-1 )
        v90 = 0;
      else
        v90 = (CVehicle *)CPools::GetVehicle(v107[0], (int)v89);
      Task = CTask::operator new((CTask *)&word_10, (unsigned int)v89);
      CTaskComplexEnterBoatAsDriver::CTaskComplexEnterBoatAsDriver((CTaskComplexEnterBoatAsDriver *)Task, v90);
      return Task;
    case 0x2CCu:
      return CTaskComplexLeaveBoat::CreateTask(v105);
    case 0x2CDu:
      Task = CTask::operator new((CTask *)&byte_9[3], (unsigned int)v6);
      CTaskComplexEnterAnyCarAsDriver::CTaskComplexEnterAnyCarAsDriver((CTaskComplexEnterAnyCarAsDriver *)Task);
      return Task;
    case 0x2CEu:
      return CTaskComplexEnterCarAsPassengerWait::CreateTask(v105);
    case 0x2CFu:
      return CTaskSimpleCarDriveTimed::CreateTask(v105);
    case 0x2D0u:
      v91 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v91;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      v92 = (char *)v107[0] + 1;
      if ( v107[0] == (CPools *)-1 )
        v93 = 0;
      else
        v93 = (CVehicle *)CPools::GetVehicle(v107[0], (int)v92);
      Task = CTask::operator new((CTask *)&word_2C, (unsigned int)v92);
      CTaskComplexShuffleSeats::CTaskComplexShuffleSeats((CTaskComplexShuffleSeats *)Task, v93);
      return Task;
    case 0x2D1u:
      return CTaskComplexDrivePointRoute::CreateTask(v105);
    case 0x2D2u:
      v94 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v94;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      v95 = (char *)v107[0] + 1;
      if ( v107[0] == (CPools *)-1 )
        v96 = 0;
      else
        v96 = (CVehicle *)CPools::GetVehicle(v107[0], (int)v95);
      Task = CTask::operator new((CTask *)&dword_50, (unsigned int)v95);
      CTaskComplexOpenDriverDoor::CTaskComplexOpenDriverDoor((CTaskComplexOpenDriverDoor *)Task, v96);
      return Task;
    case 0x2D3u:
      return CTaskSimpleCarSetTempAction::CreateTask(v105);
    case 0x2D4u:
      return CTaskComplexCarDriveMission::CreateTask(v105);
    case 0x2D5u:
      return CTaskComplexCarDrive::CreateTask(v105);
    case 0x2D6u:
      return CTaskComplexCarDriveMissionFleeScene::CreateTask(v105);
    case 0x2D8u:
      return CTaskComplexOpenPassengerDoor::CreateTask(v105);
    case 0x2D9u:
      return CTaskComplexCarDriveMissionKillPed::CreateTask(v105);
    case 0x2DAu:
      v97 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v97;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      v98 = (char *)v107[0] + 1;
      if ( v107[0] == (CPools *)-1 )
        v99 = 0;
      else
        v99 = (CVehicle *)CPools::GetVehicle(v107[0], (int)v98);
      Task = CTask::operator new((CTask *)&word_10, (unsigned int)v98);
      CTaskComplexLeaveCarAsPassengerWait::CTaskComplexLeaveCarAsPassengerWait(
        (CTaskComplexLeaveCarAsPassengerWait *)Task,
        v99);
      return Task;
    case 0x320u:
      return CTaskComplexGoToCarDoorAndStandStill::CreateTask(v105);
    case 0x385u:
      return CTaskComplexGoToPointShooting::CreateTask(v105);
    case 0x386u:
      return CTaskSimpleAchieveHeading::CreateTask(v105);
    case 0x387u:
      return CTaskComplexGoToPointAndStandStill::CreateTask(v105);
    case 0x388u:
      return CTaskComplexGoToPointAndStandStillAndAchieveHeading::CreateTask(v105);
    case 0x389u:
      return CTaskComplexFollowPointRoute::CreateTask(v105);
    case 0x38Au:
      return CTaskComplexFollowNodeRoute::CreateTask(v105);
    case 0x38Bu:
      v39 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v39;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      switch ( (unsigned int)v107[0] )
      {
        case 0u:
          Task = CTaskComplexSeekEntity<CEntitySeekPosCalculator>::CreateTask();
          break;
        case 1u:
          Task = CTaskComplexSeekEntity<CEntitySeekPosCalculatorStandard>::CreateTask();
          break;
        case 2u:
          Task = CTaskComplexSeekEntity<CEntitySeekPosCalculatorRadiusAngleOffset>::CreateTask();
          break;
        case 3u:
          Task = CTaskComplexSeekEntity<CEntitySeekPosCalculatorXYOffset>::CreateTask();
          break;
        case 4u:
          Task = CTaskComplexSeekEntity<CEntitySeekPosCalculatorEntitySurface>::CreateTask();
          break;
        case 5u:
          Task = CTaskComplexSeekEntity<CEntitySeekPosCalculatorVehicleId>::CreateTask();
          break;
        case 6u:
          Task = CTaskComplexSeekEntity<CEntitySeekPosCalculatorDriving>::CreateTask();
          break;
        case 7u:
          Task = CTaskComplexSeekEntity<CEntitySeekPosCalculatorFixedPos>::CreateTask();
          break;
        default:
          Task = 0;
          break;
      }
      return Task;
    case 0x38Fu:
      return CTaskComplexSmartFleeEntity::CreateTask(v105);
    case 0x395u:
      return CTaskComplexAvoidOtherPedWhileWandering::CreateTask(v105);
    case 0x396u:
      return CTaskComplexGoToPointAnyMeans::CreateTask(v105);
    case 0x398u:
      return CTaskComplexTurnToFaceEntityOrCoord::CreateTask(v105);
    case 0x39Cu:
      return CTaskComplexGoToPointAiming::CreateTask(v105);
    case 0x39Fu:
      return CTaskComplexFleeAnyMeans::CreateTask(v105);
    case 0x3A3u:
      return CTaskComplexFollowPatrolRoute::CreateTask(v105);
    case 0x3A5u:
      return CTaskComplexSeekEntityAiming::CreateTask(v105);
    case 0x3E8u:
      return CTaskComplexKillPedOnFoot::CreateTask(v105);
    case 0x3EBu:
      return CTaskComplexDestroyCar::CreateTask(v105);
    case 0x3F9u:
      return CTaskSimpleUseGun::CreateTask(v105);
    case 0x3FCu:
      return CTaskSimpleGunControl::CreateTask(v105);
    case 0x3FEu:
      return CTaskSimpleGangDriveBy::CreateTask(v105);
    case 0x4B4u:
      return CTaskComplexPartnerChat::CreateTask(v105);
    case 0x4C3u:
      v40 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v40;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 1, v4);
      Task = CTask::operator new((CTask *)&dword_14, v41);
      CTaskComplexGangJoinRespond::CTaskComplexGangJoinRespond(
        (CTaskComplexGangJoinRespond *)Task,
        (unsigned __int8)v107[0]);
      return Task;
    case 0x515u:
      return CTaskSimpleTogglePedThreatScanner::CreateTask(v105);
    case 0x517u:
      return CTaskSimpleJetPack::CreateTask(v105);
    case 0x518u:
      return CTaskSimpleSwim::CreateTask(v105);
    case 0x51Au:
      v100 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v100;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      Task = CTask::operator new((CTask *)&byte_9[3], v101);
      CTaskSimpleDuckToggle::CTaskSimpleDuckToggle((CTaskSimpleDuckToggle *)Task, (int)v107[0]);
      return Task;
    case 0x51Bu:
      v42 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v42;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      v43 = (char *)v107[0] + 1;
      if ( v107[0] == (CPools *)-1 )
        v44 = 0;
      else
        v44 = (CPed *)CPools::GetPed(v107[0], (int)v43);
      Task = CTask::operator new((CTask *)&dword_24, (unsigned int)v43);
      CTaskSimpleWaitUntilAreaCodesMatch::CTaskSimpleWaitUntilAreaCodesMatch(
        (CTaskSimpleWaitUntilAreaCodesMatch *)Task,
        v44);
      return Task;
    case 0x51Cu:
      Task = CTask::operator new((CTask *)&dword_20, (unsigned int)v6);
      CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)Task, 0, 1, 0, 8.0);
      v7 = (int *)&`vtable for'CTaskSimpleOnEscalator;
      goto LABEL_208;
    case 0x51Du:
      v45 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v45;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      v46 = (char *)v107[0] + 1;
      if ( v107[0] == (CPools *)-1 )
        v47 = 0;
      else
        v47 = (CPed *)CPools::GetPed(v107[0], (int)v46);
      Task = CTask::operator new((CTask *)&word_30, (unsigned int)v46);
      CTaskComplexProstituteSolicit::CTaskComplexProstituteSolicit((CTaskComplexProstituteSolicit *)Task, v47);
      return Task;
    case 0x640u:
      v48 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
        UseDataFence = v48;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_4, v4);
      Task = CTask::operator new((CTask *)&dword_20, v49);
      CTaskComplexUseMobilePhone::CTaskComplexUseMobilePhone((CTaskComplexUseMobilePhone *)Task, (int)v107[0]);
      return Task;
    case 0x644u:
      Task = CTask::operator new((CTask *)&byte_9[3], (unsigned int)v6);
      CTaskComplexUseGoggles::CTaskComplexUseGoggles((CTaskComplexUseGoggles *)Task);
      return Task;
    default:
      if ( v105 == (CTaskComplexTurnToFaceEntityOrCoord *)&elf_hash_bucket[387] )
      {
        v102 = UseDataFence;
        if ( UseDataFence )
        {
          UseDataFence = 0;
          CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, (char *)&stderr + 2, v4);
          UseDataFence = v102;
        }
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v107, byte_8, v4);
        Task = CTask::operator new((CTask *)&dword_1C, v103);
        CTaskComplexUseScriptedBrain::CTaskComplexUseScriptedBrain(
          (CTaskComplexUseScriptedBrain *)Task,
          (const char *)v107);
      }
      else if ( v105 == (CTaskComplexTurnToFaceEntityOrCoord *)((char *)&elf_hash_bucket[387] + 1) )
      {
        Task = CTask::operator new((CTask *)byte_8, 0x709u);
        CTaskSimple::CTaskSimple((CTaskSimple *)Task);
        v7 = (int *)&`vtable for'CTaskSimpleFinishBrain;
LABEL_208:
        v23 = *v7;
LABEL_209:
        *(_DWORD *)Task = v23 + 8;
      }
      return Task;
  }
}


// ============================================================

// Address: 0x48fec0
// Original: _ZN5CTask9SerializeEv
// Demangled: CTask::Serialize(void)
void __fastcall CTask::Serialize(CTask *this)
{
  int v1; // r8
  char v2; // r6
  __int16 v3; // r2
  __int16 v4; // r4
  CGenericGameStorage *v5; // r5
  int v6; // r2
  CGenericGameStorage *v7; // r5
  int v8; // r2

  v1 = (*(int (__fastcall **)(CTask *))(*(_DWORD *)this + 20))(this);
  v2 = UseDataFence;
  if ( UseDataFence )
  {
    v3 = currentSaveFenceCount;
    UseDataFence = 0;
    ++currentSaveFenceCount;
    v4 = v3 + DataFence;
    v5 = (CGenericGameStorage *)malloc(2u);
    *(_WORD *)v5 = v4;
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, (char *)&stderr + 2, v6);
    free(v5);
    UseDataFence = v2;
  }
  v7 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v7 = v1;
  CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
  j_free(v7);
}


// ============================================================

// Address: 0x4d6968
// Original: _ZN5CTaskC2Ev
// Demangled: CTask::CTask(void)
void __fastcall CTask::CTask(CTask *this)
{
  *(_DWORD *)this = &off_6693FC;
  *((_DWORD *)this + 1) = 0;
}


// ============================================================

// Address: 0x4d697c
// Original: _ZN5CTaskD2Ev
// Demangled: CTask::~CTask()
void __fastcall CTask::~CTask(CTask *this)
{
  ;
}


// ============================================================

// Address: 0x4d697e
// Original: _ZN5CTaskD0Ev
// Demangled: CTask::~CTask()
void __fastcall __noreturn CTask::~CTask(CTask *this)
{
  __debugbreak();
}


// ============================================================

// Address: 0x4d6980
// Original: _ZN5CTask9IsTaskPtrEPv
// Demangled: CTask::IsTaskPtr(void *)
int __fastcall CTask::IsTaskPtr(CTask *this, void *a2)
{
  int v2; // r2
  CTask *i; // r1

  v2 = *(_DWORD *)(CPools::ms_pTaskPool + 8);
  if ( !v2 )
    return 0;
  for ( i = (CTask *)((v2 << 7) - 128);
        *(char *)(*(_DWORD *)(CPools::ms_pTaskPool + 4) + v2 - 1) < 0
     || !(CTask *)((char *)i + *(_DWORD *)CPools::ms_pTaskPool)
     || (CTask *)((char *)this - *(_DWORD *)CPools::ms_pTaskPool) != i;
        i = (CTask *)((char *)i - 128) )
  {
    if ( !--v2 )
      return 0;
  }
  return 1;
}


// ============================================================

// Address: 0x4d69d0
// Original: _ZN5CTask10IsGoToTaskEPKS_
// Demangled: CTask::IsGoToTask(CTask const*)
bool __fastcall CTask::IsGoToTask(CTask *this, const CTask *a2)
{
  return (*(int (__fastcall **)(CTask *))(*(_DWORD *)this + 20))(this) == 900
      || (*(int (__fastcall **)(CTask *))(*(_DWORD *)this + 20))(this) == 926;
}


// ============================================================

// Address: 0x4d6a00
// Original: _ZN5CTasknwEj
// Demangled: CTask::operator new(uint)
int __fastcall CTask::operator new(CTask *this, unsigned int a2)
{
  int v2; // lr
  _DWORD *v3; // r1
  int result; // r0
  int v5; // r12
  int v6; // r2
  int v7; // r3

  v2 = 0;
  v3 = (_DWORD *)CPools::ms_pTaskPool;
  result = *(_DWORD *)(CPools::ms_pTaskPool + 12);
  v5 = *(_DWORD *)(CPools::ms_pTaskPool + 8);
  do
  {
    v3[3] = ++result;
    if ( result == v5 )
    {
      result = 0;
      v3[3] = 0;
      if ( v2 << 31 )
        return result;
      v2 = 1;
    }
    v6 = v3[1];
    v7 = *(char *)(v6 + result);
  }
  while ( v7 > -1 );
  *(_BYTE *)(v6 + result) = v7 & 0x7F;
  *(_BYTE *)(v3[1] + v3[3]) = (*(_BYTE *)(v3[1] + v3[3]) + 1) & 0x7F | *(_BYTE *)(v3[1] + v3[3]) & 0x80;
  return *v3 + (v3[3] << 7);
}


// ============================================================

// Address: 0x4d6a60
// Original: _ZN5CTaskdlEPv
// Demangled: CTask::operator delete(void *)
void __fastcall CTask::operator delete(int a1)
{
  int v1; // r1
  int v2; // r0

  v1 = CPools::ms_pTaskPool;
  v2 = (a1 - *(_DWORD *)CPools::ms_pTaskPool) >> 7;
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pTaskPool + 4) + v2) |= 0x80u;
  if ( v2 < *(_DWORD *)(v1 + 12) )
    *(_DWORD *)(v1 + 12) = v2;
}


// ============================================================
