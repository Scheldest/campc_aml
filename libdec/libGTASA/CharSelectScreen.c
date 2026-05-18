
// Address: 0x191da4
// Original: j__ZN16CharSelectScreenC2EPKcb
// Demangled: CharSelectScreen::CharSelectScreen(char const*,bool)
// attributes: thunk
void __fastcall CharSelectScreen::CharSelectScreen(CharSelectScreen *this, const char *a2, bool a3)
{
  _ZN16CharSelectScreenC2EPKcb(this, a2, a3);
}


// ============================================================

// Address: 0x19a9ec
// Original: j__ZN16CharSelectScreen6RenderEi
// Demangled: CharSelectScreen::Render(int)
// attributes: thunk
int __fastcall CharSelectScreen::Render(CharSelectScreen *this, int a2)
{
  return _ZN16CharSelectScreen6RenderEi(this, a2);
}


// ============================================================

// Address: 0x19f1e4
// Original: j__ZN16CharSelectScreen6UpdateEf
// Demangled: CharSelectScreen::Update(float)
// attributes: thunk
int __fastcall CharSelectScreen::Update(CharSelectScreen *this, float a2)
{
  return _ZN16CharSelectScreen6UpdateEf(this, a2);
}


// ============================================================

// Address: 0x29e73c
// Original: _ZN16CharSelectScreenC2EPKcb
// Demangled: CharSelectScreen::CharSelectScreen(char const*,bool)
void __fastcall CharSelectScreen::CharSelectScreen(CharSelectScreen *this, const char *a2, bool a3)
{
  int Texture; // r0
  int v6; // r0
  const char *v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r0
  const char *v11; // r1
  int v12; // r1
  _BYTE v13[256]; // [sp+4h] [bp-114h] BYREF

  *((_BYTE *)this + 12) = a3;
  *(_DWORD *)this = &off_6625A0;
  Texture = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_selector", (const char *)&off_6625A0);
  ++*(_DWORD *)(Texture + 84);
  *(_QWORD *)((char *)this + 33) = 0LL;
  *(_QWORD *)((char *)this + 41) = 0LL;
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 4) = a2;
  *(_DWORD *)this = &off_6626DC;
  *((_DWORD *)this + 1) = Texture;
  *((_DWORD *)this + 2) = 0;
  v6 = rand();
  sub_5E6BC0(v13, "menu_char%d", v6 % 8);
  v8 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)v13, v7);
  ++*(_DWORD *)(v8 + 84);
  *((_DWORD *)this + 13) = v8;
  *((_DWORD *)this + 14) = 0;
  v9 = 0;
  do
  {
    if ( v9 )
    {
      RwTextureDestroy(v9);
      *((_DWORD *)this + 14) = 0;
    }
    v10 = rand();
    sub_5E6BC0(v13, "menu_char%d", v10 % 8);
    v9 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)v13, v11);
    ++*(_DWORD *)(v9 + 84);
    v12 = *((_DWORD *)this + 13);
    *((_DWORD *)this + 14) = v9;
  }
  while ( v9 == v12 );
  *((_DWORD *)this + 15) = 1084227584;
  *((_DWORD *)this + 16) = rand() % 3;
}


// ============================================================

// Address: 0x29ea18
// Original: _ZN16CharSelectScreen6UpdateEf
// Demangled: CharSelectScreen::Update(float)
int __fastcall CharSelectScreen::Update(CharSelectScreen *this, float a2)
{
  float v4; // s0
  int v5; // r1
  int v6; // r0
  int Texture; // r0
  int v8; // r0
  const char *v9; // r1
  int v10; // r1
  _BYTE v12[256]; // [sp+4h] [bp-11Ch] BYREF
  int v13; // [sp+104h] [bp-1Ch]

  v4 = *((float *)this + 15) + (float)(a2 * -0.5);
  *((float *)this + 15) = v4;
  if ( v4 < 0.0 )
  {
    v5 = rand();
    v6 = *((_DWORD *)this + 13);
    *((_DWORD *)this + 15) = 1084227584;
    *((_DWORD *)this + 16) = v5 % 3;
    if ( v6 )
    {
      RwTextureDestroy(v6);
      *((_DWORD *)this + 13) = 0;
    }
    *((_DWORD *)this + 13) = *((_DWORD *)this + 14);
    *((_DWORD *)this + 14) = 0;
    Texture = 0;
    do
    {
      if ( Texture )
      {
        RwTextureDestroy(Texture);
        *((_DWORD *)this + 14) = 0;
      }
      v8 = rand();
      sub_5E6BC0(v12, "menu_char%d", v8 % 8);
      Texture = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)v12, v9);
      ++*(_DWORD *)(Texture + 84);
      v10 = *((_DWORD *)this + 13);
      *((_DWORD *)this + 14) = Texture;
    }
    while ( Texture == v10 );
  }
  SelectScreen::Update(this, a2);
  return _stack_chk_guard - v13;
}


// ============================================================

// Address: 0x29eb00
// Original: _ZN16CharSelectScreen6RenderEi
// Demangled: CharSelectScreen::Render(int)
int __fastcall CharSelectScreen::Render(CharSelectScreen *this, int a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d2
  float32x2_t v5; // d8
  float *v6; // r4
  int v7; // r8
  float v8; // s8
  bool v9; // nf
  float v10; // s4
  float v11; // s10
  float v12; // s21
  float v13; // s2
  float v14; // s19
  float v15; // s23
  float v16; // s25
  float v17; // s29
  float v21; // [sp+10h] [bp-D8h] BYREF
  int v22; // [sp+14h] [bp-D4h]
  float v23; // [sp+18h] [bp-D0h]
  int v24; // [sp+1Ch] [bp-CCh]
  float v25; // [sp+20h] [bp-C8h]
  int v26; // [sp+24h] [bp-C4h]
  float v27; // [sp+28h] [bp-C0h]
  int v28; // [sp+2Ch] [bp-BCh]
  float v29; // [sp+30h] [bp-B8h] BYREF
  int v30; // [sp+34h] [bp-B4h]
  float v31; // [sp+38h] [bp-B0h]
  int v32; // [sp+3Ch] [bp-ACh]
  float v33; // [sp+40h] [bp-A8h]
  int v34; // [sp+44h] [bp-A4h]
  float v35; // [sp+48h] [bp-A0h]
  int v36; // [sp+4Ch] [bp-9Ch]
  int32x4_t v37; // [sp+50h] [bp-98h] BYREF
  unsigned int v38; // [sp+60h] [bp-88h] BYREF
  float v39[9]; // [sp+64h] [bp-84h]

  v4.n64_u32[0] = *((_DWORD *)this + 15);
  v5.n64_u32[0] = 1.0;
  v2.n64_f32[0] = v4.n64_f32[0] + -0.5;
  v6 = (float *)&unk_60CBD0;
  v3.n64_f32[0] = v4.n64_f32[0] + -1.0;
  v4.n64_f32[0] = v4.n64_f32[0] + v4.n64_f32[0];
  v7 = 0;
  v2.n64_f32[0] = v2.n64_f32[0] + v2.n64_f32[0];
  LODWORD(v8) = vmin_f32(v4, v5).n64_u32[0];
  v9 = v4.n64_f32[0] < 0.0;
  v3.n64_f32[0] = v3.n64_f32[0] + v3.n64_f32[0];
  LODWORD(v10) = vmin_f32(v2, v5).n64_u32[0];
  LODWORD(v11) = vmin_f32(v3, v5).n64_u32[0];
  if ( v9 )
    v8 = 0.0;
  if ( v2.n64_f32[0] < 0.0 )
    v10 = 0.0;
  if ( v3.n64_f32[0] < 0.0 )
    v11 = 0.0;
  v39[2] = v8;
  v39[3] = v8;
  v39[7] = v8;
  v39[1] = v10;
  v39[0] = v11;
  v39[5] = v10;
  v39[4] = v11;
  v39[6] = v11;
  v39[8] = v10;
  do
  {
    v12 = 1.0;
    v13 = v39[3 * *((_DWORD *)this + 16) + v7];
    v2.n64_f32[0] = v13 * 4.0;
    v2.n64_u64[0] = vmin_f32(v2, v5).n64_u64[0];
    if ( v13 > 0.25 )
      v12 = 1.0 - (float)((float)(v13 / 0.8) + -0.25);
    CRGBA::CRGBA((CRGBA *)&v38, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)(v2.n64_f32[0] * 255.0));
    v14 = *(v6 - 2);
    v15 = *(v6 - 1);
    v16 = *v6;
    v17 = v6[1];
    v22 = 0;
    v21 = v14;
    v30 = 1097859072;
    v23 = v15;
    v24 = 0;
    v25 = v16;
    v26 = 1065353216;
    v27 = v17;
    v37 = vdupq_n_s32(v38);
    v28 = 1065353216;
    v29 = (float)(v14 * 200.0) + 23.0;
    v32 = 1097859072;
    v31 = (float)(v15 * 200.0) + 23.0;
    v34 = 1139212288;
    v33 = (float)(v16 * 200.0) + 23.0;
    v36 = 1139212288;
    v35 = (float)(v17 * 200.0) + 23.0;
    if ( v38 >= 0x1000000 )
      MenuScreen::DrawSprite((int)this, *((_DWORD *)this + 13), (int)&v29, (int)&v21, (int)&v37, 0);
    CRGBA::CRGBA((CRGBA *)&v38, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)(v12 * 255.0));
    v30 = 1097859072;
    v29 = (float)(v14 * 200.0) + 23.0;
    v22 = 0;
    v31 = (float)(v15 * 200.0) + 23.0;
    v32 = 1097859072;
    v33 = (float)(v16 * 200.0) + 23.0;
    v34 = 1139212288;
    v35 = (float)(v17 * 200.0) + 23.0;
    v21 = v14;
    v23 = v15;
    v24 = 0;
    v25 = v16;
    v26 = 1065353216;
    v27 = v17;
    v37 = vdupq_n_s32(v38);
    v36 = 1139212288;
    v28 = 1065353216;
    if ( v38 >= 0x1000000 )
      MenuScreen::DrawSprite((int)this, *((_DWORD *)this + 14), (int)&v29, (int)&v21, (int)&v37, 0);
    ++v7;
    v6 += 4;
  }
  while ( v7 != 3 );
  return SelectScreen::Render(this, a2);
}


// ============================================================

// Address: 0x29ed68
// Original: _ZN16CharSelectScreen11GetMenuLeftEv
// Demangled: CharSelectScreen::GetMenuLeft(void)
int __fastcall CharSelectScreen::GetMenuLeft(CharSelectScreen *this)
{
  return 1131741184;
}


// ============================================================

// Address: 0x29ee48
// Original: _ZN16CharSelectScreenD0Ev
// Demangled: CharSelectScreen::~CharSelectScreen()
void __fastcall CharSelectScreen::~CharSelectScreen(CharSelectScreen *this)
{
  void *v1; // r0

  SelectScreen::~SelectScreen(this);
  operator delete(v1);
}


// ============================================================
