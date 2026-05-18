
// Address: 0x18b6b8
// Original: j__ZN21CWidgetButtonEnterCar22SetEnterCarVehicleTypeEiibRK7CVectori
// Demangled: CWidgetButtonEnterCar::SetEnterCarVehicleType(int,int,bool,CVector const&,int)
// attributes: thunk
int __fastcall CWidgetButtonEnterCar::SetEnterCarVehicleType(
        CWidgetButtonEnterCar *this,
        int a2,
        int a3,
        bool a4,
        const CVector *a5,
        int a6)
{
  return _ZN21CWidgetButtonEnterCar22SetEnterCarVehicleTypeEiibRK7CVectori(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x19acac
// Original: j__ZN21CWidgetButtonEnterCarC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonEnterCar::CWidgetButtonEnterCar(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetButtonEnterCar::CWidgetButtonEnterCar()
{
  return _ZN21CWidgetButtonEnterCarC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2b6010
// Original: _ZN21CWidgetButtonEnterCarC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonEnterCar::CWidgetButtonEnterCar(char const*,WidgetPosition const&)
int __fastcall CWidgetButtonEnterCar::CWidgetButtonEnterCar(int a1, int a2, int a3)
{
  _DWORD v5[7]; // [sp+Ch] [bp-1Ch] BYREF

  CWidgetButton::CWidgetButton(a1, a2, a3, 1, 0, 5);
  *(_QWORD *)(a1 + 172) = 0xC974240049742400LL;
  *(_QWORD *)(a1 + 180) = 0x49742400C9742400LL;
  *(_DWORD *)a1 = &off_6637BC;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 188));
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_DWORD *)(a1 + 184) = 0;
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 188), "hud_arrow", 1);
  memset(v5, 0, 12);
  CWidgetButtonEnterCar::SetEnterCarVehicleType((CWidgetButtonEnterCar *)a1, 0, 0, 0, (const CVector *)v5, -1);
  return a1;
}


// ============================================================

// Address: 0x2b60b0
// Original: _ZN21CWidgetButtonEnterCar22SetEnterCarVehicleTypeEiibRK7CVectori
// Demangled: CWidgetButtonEnterCar::SetEnterCarVehicleType(int,int,bool,CVector const&,int)
int __fastcall CWidgetButtonEnterCar::SetEnterCarVehicleType(
        CWidgetButtonEnterCar *this,
        int a2,
        int a3,
        int a4,
        const CVector *a5,
        int a6)
{
  _QWORD *v10; // r8
  CSprite2d *v11; // r1
  char *v12; // r2
  CTouchInterface *v13; // r6
  int v14; // r0
  CSprite2d *v15; // r1
  char *v16; // r2
  _BOOL4 v17; // r1
  CSprite2d *v18; // r1
  char *v19; // r2
  CSprite2d *v20; // r1
  char *v21; // r2
  int PlayerPed; // r0
  int v23; // r1
  float *v24; // r3
  float v25; // s20
  float v26; // s18
  float v27; // s16
  float v28; // s4
  float v29; // s0
  float v30; // s10
  float v31; // s2
  float v32; // s6
  float v33; // r4
  float v34; // r5
  float v35; // r0
  float v36; // r4
  float v37; // r0
  float v38; // s0
  float v39; // s26
  float v40; // s4
  float v41; // s2
  float v42; // s6
  float v43; // s24
  float v44; // s16
  float v45; // s22
  float v46; // r0
  float v47; // s2
  float v48; // s0
  int TextureDB; // [sp+4h] [bp-54h]

  v10 = (_QWORD *)((char *)this + 172);
  TextureDB = CTouchInterface::LoadTextureDB(this);
  *v10 = 0LL;
  v10[1] = 0LL;
  if ( a4 == 1 )
  {
    if ( a6 == 539 )
    {
      v11 = (CWidgetButtonEnterCar *)((char *)this + 8);
      v12 = "hud_boat";
LABEL_4:
      CWidget::SetTexture(this, v11, v12, 1);
      v13 = (CTouchInterface *)TextureDB;
      if ( !a2 && (a3 & 0x20000) != 0 )
        CWidget::SetTexture(this, (CWidgetButtonEnterCar *)((char *)this + 8), "hydraulicCar", 1);
    }
    else
    {
      switch ( a2 )
      {
        case 0:
          v11 = (CWidgetButtonEnterCar *)((char *)this + 8);
          v12 = "hud_car";
          goto LABEL_4;
        case 1:
          v18 = (CWidgetButtonEnterCar *)((char *)this + 8);
          v19 = "hud_monstertruck";
          break;
        case 2:
        case 9:
          v18 = (CWidgetButtonEnterCar *)((char *)this + 8);
          v19 = "hud_bike";
          break;
        case 3:
          v18 = (CWidgetButtonEnterCar *)((char *)this + 8);
          v19 = "hud_chopper";
          break;
        case 4:
        case 8:
          v18 = (CWidgetButtonEnterCar *)((char *)this + 8);
          v19 = "hud_plane";
          break;
        case 5:
          v18 = (CWidgetButtonEnterCar *)((char *)this + 8);
          v19 = "hud_boat";
          break;
        case 6:
          v18 = (CWidgetButtonEnterCar *)((char *)this + 8);
          v19 = "hud_train";
          break;
        case 10:
          v18 = (CWidgetButtonEnterCar *)((char *)this + 8);
          v19 = "hud_bicycle";
          break;
        case 11:
          v18 = (CWidgetButtonEnterCar *)((char *)this + 8);
          v19 = "hud_trailer";
          break;
        default:
          v18 = (CWidgetButtonEnterCar *)((char *)this + 8);
          v19 = "hud_car";
          break;
      }
      CWidget::SetTexture(this, v18, v19, 1);
      v13 = (CTouchInterface *)TextureDB;
    }
    v17 = *((float *)a5 + 1) != 0.0;
    if ( *(float *)a5 != 0.0 || v17 )
    {
      PlayerPed = FindPlayerPed(-1);
      if ( PlayerPed )
      {
        v23 = *(_DWORD *)(PlayerPed + 20);
        v24 = (float *)(v23 + 48);
        if ( !v23 )
          v24 = (float *)(PlayerPed + 4);
        v25 = *v24 - *(float *)a5;
        v26 = v24[1] - *((float *)a5 + 1);
        v27 = v24[2] - *((float *)a5 + 2);
        if ( dword_951FBC )
        {
          v28 = *(float *)(dword_951FBC + 16);
          v29 = *(float *)(dword_951FBC + 20);
          v30 = v27 * *(float *)(dword_951FBC + 8);
          v31 = *(float *)(dword_951FBC + 24);
          v32 = (float)(v25 * *(float *)dword_951FBC) + (float)(v26 * *(float *)(dword_951FBC + 4));
        }
        else
        {
          v33 = *(float *)&dword_951FB8;
          v34 = cosf(*(float *)&dword_951FB8);
          v35 = sinf(v33);
          v31 = 0.0;
          v29 = v34;
          v30 = v27 * 0.0;
          v28 = -v35;
          v32 = (float)(v25 * v34) + (float)(v26 * v35);
        }
        v36 = atan2f((float)((float)(v25 * v28) + (float)(v26 * v29)) + (float)(v27 * v31), v32 + v30);
        v37 = cosf(v36);
        v38 = *((float *)this + 8);
        v39 = v37;
        v40 = *((float *)this + 10);
        v41 = *((float *)this + 9);
        v42 = *((float *)this + 11);
        v43 = v41 + v42;
        v44 = fabsf(v40 - v38);
        v45 = fabsf(v41 - v42);
        v46 = sinf(v36);
        *((float *)this + 42) = v36;
        v47 = (float)((float)((float)(v38 + v40) * 0.5) + (float)(v44 * -0.0075)) + (float)((float)(v44 * v39) * 0.51);
        v48 = (float)((float)(v43 * 0.5) + (float)(v45 * -0.005)) + (float)((float)(v46 * v45) * 0.51);
        *((float *)this + 43) = v47 - (float)(v44 * 0.11);
        *((float *)this + 44) = (float)(v44 * 0.11) + v48;
        *((float *)this + 45) = (float)(v44 * 0.11) + v47;
        *((float *)this + 46) = v48 - (float)(v44 * 0.11);
      }
    }
    return j_CTouchInterface::UnloadTextureDB(v13, (TextureDatabaseRuntime *)v17);
  }
  if ( FindPlayerPed(-1) )
  {
    v14 = FindPlayerPed(-1);
    if ( CPedIntelligence::GetTaskJetPack(*(CPedIntelligence **)(v14 + 1088)) )
    {
      v15 = (CWidgetButtonEnterCar *)((char *)this + 8);
      v16 = "hud_drop_jetpack";
LABEL_13:
      CWidget::SetTexture(this, v15, v16, 1);
      v13 = (CTouchInterface *)TextureDB;
      return j_CTouchInterface::UnloadTextureDB(v13, (TextureDatabaseRuntime *)v17);
    }
  }
  if ( FindPlayerVehicle(-1, 0) && *(_WORD *)(FindPlayerVehicle(-1, 0) + 38) == 539 )
  {
    v15 = (CWidgetButtonEnterCar *)((char *)this + 8);
    v16 = "hud_boat";
    goto LABEL_13;
  }
  v13 = (CTouchInterface *)TextureDB;
  switch ( a2 )
  {
    case -1:
    case 0:
    case 7:
      v20 = (CWidgetButtonEnterCar *)((char *)this + 8);
      v21 = "hud_car";
      break;
    case 1:
      v20 = (CWidgetButtonEnterCar *)((char *)this + 8);
      v21 = "hud_monstertruck";
      break;
    case 2:
    case 9:
      v20 = (CWidgetButtonEnterCar *)((char *)this + 8);
      v21 = "hud_bike";
      break;
    case 3:
      v20 = (CWidgetButtonEnterCar *)((char *)this + 8);
      v21 = "hud_chopper";
      break;
    case 4:
    case 8:
      v20 = (CWidgetButtonEnterCar *)((char *)this + 8);
      v21 = "hud_plane";
      break;
    case 5:
      v20 = (CWidgetButtonEnterCar *)((char *)this + 8);
      v21 = "hud_boat";
      break;
    case 6:
      v20 = (CWidgetButtonEnterCar *)((char *)this + 8);
      v21 = "hud_train";
      break;
    case 10:
      v20 = (CWidgetButtonEnterCar *)((char *)this + 8);
      v21 = "hud_bicycle";
      break;
    case 11:
      v20 = (CWidgetButtonEnterCar *)((char *)this + 8);
      v21 = "hud_trailer";
      break;
    default:
      v15 = (CWidgetButtonEnterCar *)((char *)this + 8);
      v16 = "hud_car";
      goto LABEL_13;
  }
  CWidget::SetTexture(this, v20, v21, 1);
  return j_CTouchInterface::UnloadTextureDB(v13, (TextureDatabaseRuntime *)v17);
}


// ============================================================

// Address: 0x2b64cc
// Original: _ZN21CWidgetButtonEnterCar4DrawEv
// Demangled: CWidgetButtonEnterCar::Draw(void)
int __fastcall CWidgetButtonEnterCar::Draw(CWidgetButtonEnterCar *this)
{
  int result; // r0

  result = CWidgetButton::Draw(this);
  if ( *((float *)this + 43) != 0.0 || *((float *)this + 45) != 0.0 )
    return sub_196D94((int)this + 188, (int)this + 172, *((float *)this + 42) + -1.5708);
  return result;
}


// ============================================================

// Address: 0x2b6538
// Original: _ZN21CWidgetButtonEnterCarD2Ev
// Demangled: CWidgetButtonEnterCar::~CWidgetButtonEnterCar()
void __fastcall CWidgetButtonEnterCar::~CWidgetButtonEnterCar(CWidgetButtonEnterCar *this)
{
  *(_DWORD *)this = &off_6637BC;
  CSprite2d::~CSprite2d((CWidgetButtonEnterCar *)((char *)this + 188));
  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonEnterCar *)((char *)this + 152));
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2b6578
// Original: _ZN21CWidgetButtonEnterCarD0Ev
// Demangled: CWidgetButtonEnterCar::~CWidgetButtonEnterCar()
void __fastcall CWidgetButtonEnterCar::~CWidgetButtonEnterCar(CWidgetButtonEnterCar *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_6637BC;
  CSprite2d::~CSprite2d((CWidgetButtonEnterCar *)((char *)this + 188));
  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonEnterCar *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b65bc
// Original: _ZN21CWidgetButtonEnterCar7GetNameEv
// Demangled: CWidgetButtonEnterCar::GetName(void)
char *__fastcall CWidgetButtonEnterCar::GetName(CWidgetButtonEnterCar *this)
{
  return "BTN EC";
}


// ============================================================
