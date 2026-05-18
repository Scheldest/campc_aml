
// Address: 0x18a1b0
// Original: j__ZN22KeyboardControlsScreenC2Ev
// Demangled: KeyboardControlsScreen::KeyboardControlsScreen(void)
// attributes: thunk
void __fastcall KeyboardControlsScreen::KeyboardControlsScreen(KeyboardControlsScreen *this)
{
  _ZN22KeyboardControlsScreenC2Ev(this);
}


// ============================================================

// Address: 0x18c6f4
// Original: j__ZN22KeyboardControlsScreen19IsConflictedControlEPKc
// Demangled: KeyboardControlsScreen::IsConflictedControl(char const*)
// attributes: thunk
int __fastcall KeyboardControlsScreen::IsConflictedControl(KeyboardControlsScreen *this, const char *a2)
{
  return _ZN22KeyboardControlsScreen19IsConflictedControlEPKc(this, a2);
}


// ============================================================

// Address: 0x18e504
// Original: j__ZN22KeyboardControlsScreen8RemapKeyE13OSKeyboardKey12MouseButtons
// Demangled: KeyboardControlsScreen::RemapKey(OSKeyboardKey,MouseButtons)
// attributes: thunk
int KeyboardControlsScreen::RemapKey(void)
{
  return _ZN22KeyboardControlsScreen8RemapKeyE13OSKeyboardKey12MouseButtons();
}


// ============================================================

// Address: 0x191778
// Original: j__ZN22KeyboardControlsScreen15ManageScrollingEf
// Demangled: KeyboardControlsScreen::ManageScrolling(float)
// attributes: thunk
int __fastcall KeyboardControlsScreen::ManageScrolling(KeyboardControlsScreen *this, float a2)
{
  return _ZN22KeyboardControlsScreen15ManageScrollingEf(this, a2);
}


// ============================================================

// Address: 0x191a18
// Original: j__ZN22KeyboardControlsScreen16DoOnFootMappingsEv
// Demangled: KeyboardControlsScreen::DoOnFootMappings(void)
// attributes: thunk
int __fastcall KeyboardControlsScreen::DoOnFootMappings(KeyboardControlsScreen *this)
{
  return _ZN22KeyboardControlsScreen16DoOnFootMappingsEv(this);
}


// ============================================================

// Address: 0x195248
// Original: j__ZN22KeyboardControlsScreen17DoVehicleMappingsEv
// Demangled: KeyboardControlsScreen::DoVehicleMappings(void)
// attributes: thunk
int __fastcall KeyboardControlsScreen::DoVehicleMappings(KeyboardControlsScreen *this)
{
  return _ZN22KeyboardControlsScreen17DoVehicleMappingsEv(this);
}


// ============================================================

// Address: 0x19e174
// Original: j__ZN22KeyboardControlsScreen12WhitelistAddE10HIDMappingS0_
// Demangled: KeyboardControlsScreen::WhitelistAdd(HIDMapping,HIDMapping)
// attributes: thunk
int KeyboardControlsScreen::WhitelistAdd()
{
  return _ZN22KeyboardControlsScreen12WhitelistAddE10HIDMappingS0_();
}


// ============================================================

// Address: 0x19f288
// Original: j__ZN22KeyboardControlsScreen17GetMappingFromTagEPKc
// Demangled: KeyboardControlsScreen::GetMappingFromTag(char const*)
// attributes: thunk
int __fastcall KeyboardControlsScreen::GetMappingFromTag(KeyboardControlsScreen *this, const char *a2)
{
  return _ZN22KeyboardControlsScreen17GetMappingFromTagEPKc(this, a2);
}


// ============================================================

// Address: 0x29f850
// Original: _ZN22KeyboardControlsScreenC2Ev
// Demangled: KeyboardControlsScreen::KeyboardControlsScreen(void)
void __fastcall KeyboardControlsScreen::KeyboardControlsScreen(KeyboardControlsScreen *this)
{
  int Texture; // r0

  *((_BYTE *)this + 12) = 1;
  *(_DWORD *)this = &off_6625A0;
  Texture = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_selector", (const char *)&off_6625A0);
  ++*(_DWORD *)(Texture + 84);
  *(_QWORD *)((char *)this + 33) = 0LL;
  *(_QWORD *)((char *)this + 41) = 0LL;
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_QWORD *)this + 9) = 0xC974240049742400LL;
  *((_QWORD *)this + 10) = 0x49742400C9742400LL;
  *((_QWORD *)this + 13) = 0xC974240049742400LL;
  *((_QWORD *)this + 14) = 0x49742400C9742400LL;
  *((_DWORD *)this + 4) = &byte_61CD7E;
  *(_DWORD *)this = &off_662794;
  *((_DWORD *)this + 1) = Texture;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 11) = 0xC974240049742400LL;
  *((_DWORD *)this + 24) = -915135488;
  *((_DWORD *)this + 25) = 1232348160;
  byte_6E01A8 = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 32) = -1;
  *((_BYTE *)this + 120) = 0;
  *((_BYTE *)this + 401) = 0;
  *(_DWORD *)((char *)this + 142) = 0;
  *(_DWORD *)((char *)this + 138) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 0;
  if ( FindPlayerPed(-1) && *(_DWORD *)(FindPlayerPed(-1) + 1100) == 50 )
  {
    *((_DWORD *)this + 31) = 2;
    KeyboardControlsScreen::DoVehicleMappings(this);
  }
  else
  {
    *((_DWORD *)this + 31) = 1;
    KeyboardControlsScreen::DoOnFootMappings(this);
  }
}


// ============================================================

// Address: 0x29f964
// Original: _ZN22KeyboardControlsScreen16DoOnFootMappingsEv
// Demangled: KeyboardControlsScreen::DoOnFootMappings(void)
int __fastcall KeyboardControlsScreen::DoOnFootMappings(KeyboardControlsScreen *this)
{
  int v2; // r4
  unsigned int v3; // r6
  int v4; // r9
  void *v5; // r0
  char *v6; // r5
  int v7; // r0
  void *v8; // r0
  int v9; // r8
  unsigned int v10; // r10
  char *v11; // r0
  void *v12; // r6
  char *v13; // r5
  int v14; // r6
  unsigned int v15; // r10
  char *v16; // r0
  void *v17; // r8
  char *v18; // r5
  int v19; // r6
  unsigned int v20; // r10
  char *v21; // r0
  void *v22; // r8
  char *v23; // r5
  int v24; // r6
  unsigned int v25; // r10
  char *v26; // r0
  void *v27; // r8
  char *v28; // r5
  int v29; // r6
  unsigned int v30; // r10
  char *v31; // r0
  void *v32; // r8
  char *v33; // r5
  int v34; // r6
  unsigned int v35; // r10
  char *v36; // r0
  void *v37; // r8
  char *v38; // r5
  int v39; // r6
  unsigned int v40; // r10
  char *v41; // r0
  void *v42; // r8
  char *v43; // r5
  int v44; // r6
  unsigned int v45; // r10
  char *v46; // r0
  void *v47; // r8
  char *v48; // r5
  int v49; // r6
  unsigned int v50; // r10
  char *v51; // r0
  void *v52; // r8
  char *v53; // r5
  int v54; // r6
  unsigned int v55; // r10
  char *v56; // r0
  void *v57; // r8
  char *v58; // r5
  int v59; // r6
  unsigned int v60; // r10
  char *v61; // r0
  void *v62; // r8
  char *v63; // r5
  int v64; // r6
  unsigned int v65; // r10
  char *v66; // r0
  void *v67; // r8
  char *v68; // r5
  int v69; // r6
  unsigned int v70; // r10
  char *v71; // r0
  void *v72; // r8
  char *v73; // r5
  int v74; // r6
  unsigned int v75; // r10
  char *v76; // r0
  void *v77; // r8
  char *v78; // r5
  int v79; // r6
  unsigned int v80; // r10
  char *v81; // r0
  void *v82; // r8
  char *v83; // r5
  int v84; // r6
  unsigned int v85; // r10
  char *v86; // r0
  void *v87; // r8
  char *v88; // r5
  int v89; // r6
  unsigned int v90; // r10
  char *v91; // r0
  void *v92; // r8
  char *v93; // r5
  int v94; // r6
  unsigned int v95; // r10
  char *v96; // r0
  void *v97; // r8
  char *v98; // r5
  int v99; // r6
  unsigned int v100; // r10
  char *v101; // r0
  void *v102; // r8
  char *v103; // r5
  int v104; // r6
  unsigned int v105; // r10
  char *v106; // r0
  void *v107; // r8
  char *v108; // r5
  int v109; // r6
  unsigned int v110; // r10
  char *v111; // r0
  void *v112; // r8
  char *v113; // r5
  int v114; // r5
  unsigned int v115; // r6
  SelectScreen::MenuSelection *v116; // r1
  int v117; // r0
  int v119; // [sp+8h] [bp-238h] BYREF
  char *v120; // [sp+Ch] [bp-234h]
  int v121; // [sp+108h] [bp-138h]
  __int16 *v122; // [sp+10Ch] [bp-134h]
  int v123; // [sp+208h] [bp-38h]
  char v124; // [sp+20Ch] [bp-34h]
  int v125; // [sp+210h] [bp-30h]
  int v126; // [sp+214h] [bp-2Ch]
  void *p; // [sp+218h] [bp-28h]
  int v128; // [sp+220h] [bp-20h]

  if ( *((_DWORD *)this + 14) )
  {
    v2 = 520;
    v3 = 0;
    do
    {
      v4 = *((_DWORD *)this + 15);
      v5 = *(void **)(v4 + v2 + 8);
      *(_DWORD *)(v4 + v2 + 4) = 0;
      if ( v5 )
      {
        free(v5);
        *(_DWORD *)(v4 + v2 + 8) = 0;
      }
      *(_DWORD *)(v4 + v2) = 0;
      v2 += 532;
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 14) );
  }
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 14) = 0;
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 31;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_504D48 + 3;
  v122 = (__int16 *)&loc_373558;
  v124 = 1;
  if ( *((_DWORD *)this + 13) )
  {
    v6 = (char *)*((_DWORD *)this + 15);
    v7 = 0;
  }
  else
  {
    v6 = (char *)malloc(0x850u);
    v8 = (void *)*((_DWORD *)this + 15);
    if ( v8 )
    {
      free(v8);
      v7 = *((_DWORD *)this + 14);
    }
    else
    {
      v7 = 0;
    }
    *((_DWORD *)this + 15) = v6;
    *((_DWORD *)this + 13) = 4;
  }
  memcpy_0(&v6[532 * v7], &v119, 0x205u);
  OSArray<int>::OSArray();
  v9 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v9;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v9 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 30;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_4C4D48 + 3;
  v122 = (__int16 *)((char *)&loc_353556 + 2);
  v124 = 1;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v9 + 1) )
  {
    v13 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v10 = 4 * (v9 + 1) / 3u + 3;
    v11 = (char *)malloc(532 * v10);
    v12 = (void *)*((_DWORD *)this + 15);
    v13 = v11;
    if ( v12 )
    {
      memcpy_0(v11, *((const void **)this + 15), 532 * v9);
      free(v12);
      v9 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v13;
    *((_DWORD *)this + 13) = v10;
  }
  memcpy_0(&v13[532 * v9], &v119, 0x205u);
  OSArray<int>::OSArray();
  v14 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v14;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v14 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 31;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_424D48 + 3;
  v122 = (__int16 *)((char *)&loc_383556 + 2);
  v124 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v14 + 1) )
  {
    v18 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v15 = 4 * (v14 + 1) / 3u + 3;
    v16 = (char *)malloc(532 * v15);
    v17 = (void *)*((_DWORD *)this + 15);
    v18 = v16;
    if ( v17 )
    {
      memcpy_0(v16, *((const void **)this + 15), 532 * v14);
      free(v17);
      v14 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v18;
    *((_DWORD *)this + 13) = v15;
  }
  memcpy_0(&v18[532 * v14], &v119, 0x205u);
  OSArray<int>::OSArray();
  v19 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v19;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v19 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 30;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_524D4A;
  v122 = (__int16 *)&loc_363558;
  v124 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v19 + 1) )
  {
    v23 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v20 = 4 * (v19 + 1) / 3u + 3;
    v21 = (char *)malloc(532 * v20);
    v22 = (void *)*((_DWORD *)this + 15);
    v23 = v21;
    if ( v22 )
    {
      memcpy_0(v21, *((const void **)this + 15), 532 * v19);
      free(v22);
      v19 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v23;
    *((_DWORD *)this + 13) = v20;
  }
  memcpy_0(&v23[532 * v19], &v119, 0x205u);
  OSArray<int>::OSArray();
  v24 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v24;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v24 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 1;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_54414A;
  v122 = (__int16 *)&loc_303058;
  v124 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v24 + 1) )
  {
    v28 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v25 = 4 * (v24 + 1) / 3u + 3;
    v26 = (char *)malloc(532 * v25);
    v27 = (void *)*((_DWORD *)this + 15);
    v28 = v26;
    if ( v27 )
    {
      memcpy_0(v26, *((const void **)this + 15), 532 * v24);
      free(v27);
      v24 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v28;
    *((_DWORD *)this + 13) = v25;
  }
  memcpy_0(&v28[532 * v24], &v119, 0x205u);
  OSArray<int>::OSArray();
  v29 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v29;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v29 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 5;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_434548 + 3;
  v122 = (__int16 *)&loc_313058;
  v124 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v29 + 1) )
  {
    v33 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v30 = 4 * (v29 + 1) / 3u + 3;
    v31 = (char *)malloc(532 * v30);
    v32 = (void *)*((_DWORD *)this + 15);
    v33 = v31;
    if ( v32 )
    {
      memcpy_0(v31, *((const void **)this + 15), 532 * v29);
      free(v32);
      v29 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v33;
    *((_DWORD *)this + 13) = v30;
  }
  memcpy_0(&v33[532 * v29], &v119, 0x205u);
  OSArray<int>::OSArray();
  v34 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v34;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v34 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 2;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_50534A;
  v122 = (__int16 *)&loc_323058;
  v124 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v34 + 1) )
  {
    v38 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v35 = 4 * (v34 + 1) / 3u + 3;
    v36 = (char *)malloc(532 * v35);
    v37 = (void *)*((_DWORD *)this + 15);
    v38 = v36;
    if ( v37 )
    {
      memcpy_0(v36, *((const void **)this + 15), 532 * v34);
      free(v37);
      v34 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v38;
    *((_DWORD *)this + 13) = v35;
  }
  memcpy_0(&v38[532 * v34], &v119, 0x205u);
  OSArray<int>::OSArray();
  v39 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v39;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v39 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 3;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_303058 + (_DWORD)&loc_2519F0 + 3;
  v122 = (__int16 *)&loc_333058;
  v124 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v39 + 1) )
  {
    v43 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v40 = 4 * (v39 + 1) / 3u + 3;
    v41 = (char *)malloc(532 * v40);
    v42 = (void *)*((_DWORD *)this + 15);
    v43 = v41;
    if ( v42 )
    {
      memcpy_0(v41, *((const void **)this + 15), 532 * v39);
      free(v42);
      v39 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v43;
    *((_DWORD *)this + 13) = v40;
  }
  memcpy_0(&v43[532 * v39], &v119, 0x205u);
  OSArray<int>::OSArray();
  v44 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v44;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v44 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 16;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_575048 + 3;
  v122 = (__int16 *)&loc_343058;
  v124 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v44 + 1) )
  {
    v48 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v45 = 4 * (v44 + 1) / 3u + 3;
    v46 = (char *)malloc(532 * v45);
    v47 = (void *)*((_DWORD *)this + 15);
    v48 = v46;
    if ( v47 )
    {
      memcpy_0(v46, *((const void **)this + 15), 532 * v44);
      free(v47);
      v44 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v48;
    *((_DWORD *)this + 13) = v45;
  }
  memcpy_0(&v48[532 * v44], &v119, 0x205u);
  OSArray<int>::OSArray();
  v49 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v49;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v49 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 15;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_574E4A;
  v122 = &word_353058;
  v124 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v49 + 1) )
  {
    v53 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v50 = 4 * (v49 + 1) / 3u + 3;
    v51 = (char *)malloc(532 * v50);
    v52 = (void *)*((_DWORD *)this + 15);
    v53 = v51;
    if ( v52 )
    {
      memcpy_0(v51, *((const void **)this + 15), 532 * v49);
      free(v52);
      v49 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v53;
    *((_DWORD *)this + 13) = v50;
  }
  memcpy_0(&v53[532 * v49], &v119, 0x205u);
  OSArray<int>::OSArray();
  v54 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v54;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v54 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 4;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_524348 + 3;
  v122 = (__int16 *)&loc_363058;
  v124 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v54 + 1) )
  {
    v58 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v55 = 4 * (v54 + 1) / 3u + 3;
    v56 = (char *)malloc(532 * v55);
    v57 = (void *)*((_DWORD *)this + 15);
    v58 = v56;
    if ( v57 )
    {
      memcpy_0(v56, *((const void **)this + 15), 532 * v54);
      free(v57);
      v54 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v58;
    *((_DWORD *)this + 13) = v55;
  }
  memcpy_0(&v58[532 * v54], &v119, 0x205u);
  OSArray<int>::OSArray();
  v59 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v59;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v59 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 9;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_43434A;
  v122 = &word_373058;
  v124 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v59 + 1) )
  {
    v63 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v60 = 4 * (v59 + 1) / 3u + 3;
    v61 = (char *)malloc(532 * v60);
    v62 = (void *)*((_DWORD *)this + 15);
    v63 = v61;
    if ( v62 )
    {
      memcpy_0(v61, *((const void **)this + 15), 532 * v59);
      free(v62);
      v59 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v63;
    *((_DWORD *)this + 13) = v60;
  }
  memcpy_0(&v63[532 * v59], &v119, 0x205u);
  OSArray<int>::OSArray();
  v64 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v64;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v64 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 10;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&dword_464348 + 3;
  v122 = (__int16 *)&loc_383058;
  v124 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v64 + 1) )
  {
    v68 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v65 = 4 * (v64 + 1) / 3u + 3;
    v66 = (char *)malloc(532 * v65);
    v67 = (void *)*((_DWORD *)this + 15);
    v68 = v66;
    if ( v67 )
    {
      memcpy_0(v66, *((const void **)this + 15), 532 * v64);
      free(v67);
      v64 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v68;
    *((_DWORD *)this + 13) = v65;
  }
  memcpy_0(&v68[532 * v64], &v119, 0x205u);
  OSArray<int>::OSArray();
  v69 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v69;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v69 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 14;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_54534A;
  v122 = (__int16 *)((char *)&loc_393056 + 2);
  v124 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v69 + 1) )
  {
    v73 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v70 = 4 * (v69 + 1) / 3u + 3;
    v71 = (char *)malloc(532 * v70);
    v72 = (void *)*((_DWORD *)this + 15);
    v73 = v71;
    if ( v72 )
    {
      memcpy_0(v71, *((const void **)this + 15), 532 * v69);
      free(v72);
      v69 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v73;
    *((_DWORD *)this + 13) = v70;
  }
  memcpy_0(&v73[532 * v69], &v119, 0x205u);
  OSArray<int>::OSArray();
  v74 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v74;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v74 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 18;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_424C4A;
  v122 = (__int16 *)&loc_303158;
  v124 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v74 + 1) )
  {
    v78 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v75 = 4 * (v74 + 1) / 3u + 3;
    v76 = (char *)malloc(532 * v75);
    v77 = (void *)*((_DWORD *)this + 15);
    v78 = v76;
    if ( v77 )
    {
      memcpy_0(v76, *((const void **)this + 15), 532 * v74);
      free(v77);
      v74 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v78;
    *((_DWORD *)this + 13) = v75;
  }
  memcpy_0(&v78[532 * v74], &v119, 0x205u);
  OSArray<int>::OSArray();
  v79 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v79;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v79 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 36;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_41544A;
  v122 = (__int16 *)&loc_313158;
  v124 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v79 + 1) )
  {
    v83 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v80 = 4 * (v79 + 1) / 3u + 3;
    v81 = (char *)malloc(532 * v80);
    v82 = (void *)*((_DWORD *)this + 15);
    v83 = v81;
    if ( v82 )
    {
      memcpy_0(v81, *((const void **)this + 15), 532 * v79);
      free(v82);
      v79 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v83;
    *((_DWORD *)this + 13) = v80;
  }
  memcpy_0(&v83[532 * v79], &v119, 0x205u);
  OSArray<int>::OSArray();
  v84 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v84;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v84 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 34;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_495A4A;
  v122 = (__int16 *)&off_323158;
  v124 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v84 + 1) )
  {
    v88 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v85 = 4 * (v84 + 1) / 3u + 3;
    v86 = (char *)malloc(532 * v85);
    v87 = (void *)*((_DWORD *)this + 15);
    v88 = v86;
    if ( v87 )
    {
      memcpy_0(v86, *((const void **)this + 15), 532 * v84);
      free(v87);
      v84 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v88;
    *((_DWORD *)this + 13) = v85;
  }
  memcpy_0(&v88[532 * v84], &v119, 0x205u);
  OSArray<int>::OSArray();
  v89 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v89;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v89 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 35;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_4F5A4A;
  v122 = (__int16 *)((char *)&loc_333156 + 2);
  v124 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v89 + 1) )
  {
    v93 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v90 = 4 * (v89 + 1) / 3u + 3;
    v91 = (char *)malloc(532 * v90);
    v92 = (void *)*((_DWORD *)this + 15);
    v93 = v91;
    if ( v92 )
    {
      memcpy_0(v91, *((const void **)this + 15), 532 * v89);
      free(v92);
      v89 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v93;
    *((_DWORD *)this + 13) = v90;
  }
  memcpy_0(&v93[532 * v89], &v119, 0x205u);
  OSArray<int>::OSArray();
  v94 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v94;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v94 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 52;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_48504A;
  v122 = (__int16 *)&loc_343158;
  v124 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v94 + 1) )
  {
    v98 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v95 = 4 * (v94 + 1) / 3u + 3;
    v96 = (char *)malloc(532 * v95);
    v97 = (void *)*((_DWORD *)this + 15);
    v98 = v96;
    if ( v97 )
    {
      memcpy_0(v96, *((const void **)this + 15), 532 * v94);
      free(v97);
      v94 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v98;
    *((_DWORD *)this + 13) = v95;
  }
  memcpy_0(&v98[532 * v94], &v119, 0x205u);
  OSArray<int>::OSArray();
  v99 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v99;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v99 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 22;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_534D4A;
  v122 = (__int16 *)&loc_353158;
  v124 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v99 + 1) )
  {
    v103 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v100 = 4 * (v99 + 1) / 3u + 3;
    v101 = (char *)malloc(532 * v100);
    v102 = (void *)*((_DWORD *)this + 15);
    v103 = v101;
    if ( v102 )
    {
      memcpy_0(v101, *((const void **)this + 15), 532 * v99);
      free(v102);
      v99 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v103;
    *((_DWORD *)this + 13) = v100;
  }
  memcpy_0(&v103[532 * v99], &v119, 0x205u);
  OSArray<int>::OSArray();
  v104 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v104;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v104 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 42;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_52474A;
  v122 = (__int16 *)&loc_393158;
  v124 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v104 + 1) )
  {
    v108 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v105 = 4 * (v104 + 1) / 3u + 3;
    v106 = (char *)malloc(532 * v105);
    v107 = (void *)*((_DWORD *)this + 15);
    v108 = v106;
    if ( v107 )
    {
      memcpy_0(v106, *((const void **)this + 15), 532 * v104);
      free(v107);
      v104 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v108;
    *((_DWORD *)this + 13) = v105;
  }
  memcpy_0(&v108[532 * v104], &v119, 0x205u);
  OSArray<int>::OSArray();
  v109 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v109;
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v109 = *((_DWORD *)this + 14);
  }
  p = 0;
  v125 = 0;
  v126 = 0;
  v123 = 43;
  v121 = 1598181197;
  v119 = 1598181197;
  v120 = (char *)&loc_49474A;
  v122 = (__int16 *)&loc_303258;
  v124 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v109 + 1) )
  {
    v113 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v110 = 4 * (v109 + 1) / 3u + 3;
    v111 = (char *)malloc(532 * v110);
    v112 = (void *)*((_DWORD *)this + 15);
    v113 = v111;
    if ( v112 )
    {
      memcpy_0(v111, *((const void **)this + 15), 532 * v109);
      free(v112);
      v109 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v113;
    *((_DWORD *)this + 13) = v110;
  }
  memcpy_0(&v113[532 * v109], &v119, 0x205u);
  OSArray<int>::OSArray();
  ++*((_DWORD *)this + 14);
  v126 = 0;
  if ( p )
  {
    free(p);
    p = 0;
  }
  KeyboardControlsScreen::WhitelistAdd();
  KeyboardControlsScreen::WhitelistAdd();
  KeyboardControlsScreen::WhitelistAdd();
  KeyboardControlsScreen::WhitelistAdd();
  if ( *((_DWORD *)this + 14) )
  {
    v114 = 0;
    v115 = 0;
    do
    {
      v116 = (SelectScreen::MenuSelection *)operator new(0x10u);
      v117 = *((_DWORD *)this + 15) + v114;
      *(_DWORD *)v116 = &off_6627F0;
      *((_DWORD *)v116 + 1) = v117;
      *((_DWORD *)v116 + 2) = sub_29B6CC;
      *((_DWORD *)v116 + 3) = 0;
      SelectScreen::AddItem(this, v116);
      ++v115;
      v114 += 532;
    }
    while ( v115 < *((_DWORD *)this + 14) );
  }
  return _stack_chk_guard - v128;
}


// ============================================================

// Address: 0x2a0c3c
// Original: _ZN22KeyboardControlsScreen17DoVehicleMappingsEv
// Demangled: KeyboardControlsScreen::DoVehicleMappings(void)
int __fastcall KeyboardControlsScreen::DoVehicleMappings(KeyboardControlsScreen *this)
{
  int v2; // r4
  unsigned int v3; // r6
  int v4; // r9
  void *v5; // r0
  char *v6; // r5
  int v7; // r0
  void *v8; // r0
  int v9; // r8
  unsigned int v10; // r10
  char *v11; // r0
  void *v12; // r6
  char *v13; // r5
  int v14; // r6
  unsigned int v15; // r10
  char *v16; // r0
  void *v17; // r8
  char *v18; // r5
  int v19; // r6
  unsigned int v20; // r10
  char *v21; // r0
  void *v22; // r8
  char *v23; // r5
  int v24; // r6
  unsigned int v25; // r10
  char *v26; // r0
  void *v27; // r8
  char *v28; // r5
  int v29; // r6
  unsigned int v30; // r10
  char *v31; // r0
  void *v32; // r8
  char *v33; // r5
  int v34; // r6
  unsigned int v35; // r10
  char *v36; // r0
  void *v37; // r8
  char *v38; // r5
  int v39; // r6
  unsigned int v40; // r10
  char *v41; // r0
  void *v42; // r8
  char *v43; // r5
  int v44; // r6
  unsigned int v45; // r10
  char *v46; // r0
  void *v47; // r8
  char *v48; // r5
  int v49; // r6
  unsigned int v50; // r10
  char *v51; // r0
  void *v52; // r8
  char *v53; // r5
  int v54; // r6
  unsigned int v55; // r10
  char *v56; // r0
  void *v57; // r8
  char *v58; // r5
  int v59; // r6
  unsigned int v60; // r10
  char *v61; // r0
  void *v62; // r8
  char *v63; // r5
  int v64; // r6
  unsigned int v65; // r10
  char *v66; // r0
  void *v67; // r8
  char *v68; // r5
  int v69; // r6
  unsigned int v70; // r10
  char *v71; // r0
  void *v72; // r8
  char *v73; // r5
  int v74; // r6
  unsigned int v75; // r10
  char *v76; // r0
  void *v77; // r8
  char *v78; // r5
  int v79; // r6
  unsigned int v80; // r10
  char *v81; // r0
  void *v82; // r8
  char *v83; // r5
  int v84; // r6
  unsigned int v85; // r10
  char *v86; // r0
  void *v87; // r8
  char *v88; // r5
  int v89; // r6
  unsigned int v90; // r10
  char *v91; // r0
  void *v92; // r8
  char *v93; // r5
  int v94; // r6
  unsigned int v95; // r10
  char *v96; // r0
  void *v97; // r8
  char *v98; // r5
  int v99; // r6
  unsigned int v100; // r10
  char *v101; // r0
  void *v102; // r8
  char *v103; // r5
  int v104; // r6
  unsigned int v105; // r10
  char *v106; // r0
  void *v107; // r8
  char *v108; // r5
  int v109; // r6
  unsigned int v110; // r10
  char *v111; // r0
  void *v112; // r8
  char *v113; // r5
  int v114; // r6
  unsigned int v115; // r10
  char *v116; // r0
  void *v117; // r8
  char *v118; // r5
  int v119; // r6
  unsigned int v120; // r10
  char *v121; // r0
  void *v122; // r8
  char *v123; // r5
  int v124; // r6
  unsigned int v125; // r10
  char *v126; // r0
  void *v127; // r8
  char *v128; // r5
  int v129; // r6
  unsigned int v130; // r10
  char *v131; // r0
  void *v132; // r8
  char *v133; // r5
  int v134; // r6
  unsigned int v135; // r10
  char *v136; // r0
  void *v137; // r8
  char *v138; // r5
  int v139; // r6
  unsigned int v140; // r10
  char *v141; // r0
  void *v142; // r8
  char *v143; // r5
  int v144; // r6
  unsigned int v145; // r10
  char *v146; // r0
  void *v147; // r8
  char *v148; // r5
  int v149; // r6
  unsigned int v150; // r10
  char *v151; // r0
  void *v152; // r8
  char *v153; // r5
  int v154; // r5
  unsigned int v155; // r6
  SelectScreen::MenuSelection *v156; // r1
  int v157; // r0
  int v159; // [sp+8h] [bp-238h] BYREF
  char *v160; // [sp+Ch] [bp-234h]
  int v161; // [sp+108h] [bp-138h]
  int ***v162; // [sp+10Ch] [bp-134h]
  int v163; // [sp+208h] [bp-38h]
  char v164; // [sp+20Ch] [bp-34h]
  int v165; // [sp+210h] [bp-30h]
  int v166; // [sp+214h] [bp-2Ch]
  void *p; // [sp+218h] [bp-28h]
  int v168; // [sp+220h] [bp-20h]

  if ( *((_DWORD *)this + 14) )
  {
    v2 = 520;
    v3 = 0;
    do
    {
      v4 = *((_DWORD *)this + 15);
      v5 = *(void **)(v4 + v2 + 8);
      *(_DWORD *)(v4 + v2 + 4) = 0;
      if ( v5 )
      {
        free(v5);
        *(_DWORD *)(v4 + v2 + 8) = 0;
      }
      *(_DWORD *)(v4 + v2) = 0;
      v2 += 532;
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 14) );
  }
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 14) = 0;
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 8;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_43414A;
  v162 = (int ***)&loc_313658;
  v164 = 0;
  if ( *((_DWORD *)this + 13) )
  {
    v6 = (char *)*((_DWORD *)this + 15);
    v7 = 0;
  }
  else
  {
    v6 = (char *)malloc(0x850u);
    v8 = (void *)*((_DWORD *)this + 15);
    if ( v8 )
    {
      free(v8);
      v7 = *((_DWORD *)this + 14);
    }
    else
    {
      v7 = 0;
    }
    *((_DWORD *)this + 15) = v6;
    *((_DWORD *)this + 13) = 4;
  }
  memcpy_0(&v6[532 * v7], &v159, 0x205u);
  OSArray<int>::OSArray();
  v9 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v9;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v9 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 24;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&flt_4C5348 + 3;
  v162 = (int ***)&loc_393558;
  v164 = 1;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v9 + 1) )
  {
    v13 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v10 = 4 * (v9 + 1) / 3u + 3;
    v11 = (char *)malloc(532 * v10);
    v12 = (void *)*((_DWORD *)this + 15);
    v13 = v11;
    if ( v12 )
    {
      memcpy_0(v11, *((const void **)this + 15), 532 * v9);
      free(v12);
      v9 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v13;
    *((_DWORD *)this + 13) = v10;
  }
  memcpy_0(&v13[532 * v9], &v159, 0x205u);
  OSArray<int>::OSArray();
  v14 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v14;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v14 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 6;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_52424A;
  v162 = (int ***)&loc_323658;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v14 + 1) )
  {
    v18 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v15 = 4 * (v14 + 1) / 3u + 3;
    v16 = (char *)malloc(532 * v15);
    v17 = (void *)*((_DWORD *)this + 15);
    v18 = v16;
    if ( v17 )
    {
      memcpy_0(v16, *((const void **)this + 15), 532 * v14);
      free(v17);
      v14 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v18;
    *((_DWORD *)this + 13) = v15;
  }
  memcpy_0(&v18[532 * v14], &v159, 0x205u);
  OSArray<int>::OSArray();
  v19 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v19;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v19 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 24;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_525348 + 3;
  v162 = (int ***)&loc_303658;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v19 + 1) )
  {
    v23 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v20 = 4 * (v19 + 1) / 3u + 3;
    v21 = (char *)malloc(532 * v20);
    v22 = (void *)*((_DWORD *)this + 15);
    v23 = v21;
    if ( v22 )
    {
      memcpy_0(v21, *((const void **)this + 15), 532 * v19);
      free(v22);
      v19 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v23;
    *((_DWORD *)this + 13) = v20;
  }
  memcpy_0(&v23[532 * v19], &v159, 0x205u);
  OSArray<int>::OSArray();
  v24 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v24;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v24 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 5;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_434548 + 3;
  v162 = (int ***)&loc_353258;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v24 + 1) )
  {
    v28 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v25 = 4 * (v24 + 1) / 3u + 3;
    v26 = (char *)malloc(532 * v25);
    v27 = (void *)*((_DWORD *)this + 15);
    v28 = v26;
    if ( v27 )
    {
      memcpy_0(v26, *((const void **)this + 15), 532 * v24);
      free(v27);
      v24 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v28;
    *((_DWORD *)this + 13) = v25;
  }
  memcpy_0(&v28[532 * v24], &v159, 0x205u);
  OSArray<int>::OSArray();
  v29 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v29;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v29 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 9;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_43434A;
  v162 = (int ***)&loc_363258;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v29 + 1) )
  {
    v33 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v30 = 4 * (v29 + 1) / 3u + 3;
    v31 = (char *)malloc(532 * v30);
    v32 = (void *)*((_DWORD *)this + 15);
    v33 = v31;
    if ( v32 )
    {
      memcpy_0(v31, *((const void **)this + 15), 532 * v29);
      free(v32);
      v29 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v33;
    *((_DWORD *)this + 13) = v30;
  }
  memcpy_0(&v33[532 * v29], &v159, 0x205u);
  OSArray<int>::OSArray();
  v34 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v34;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v34 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 10;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&dword_464348 + 3;
  v162 = (int ***)&loc_373258;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v34 + 1) )
  {
    v38 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v35 = 4 * (v34 + 1) / 3u + 3;
    v36 = (char *)malloc(532 * v35);
    v37 = (void *)*((_DWORD *)this + 15);
    v38 = v36;
    if ( v37 )
    {
      memcpy_0(v36, *((const void **)this + 15), 532 * v34);
      free(v37);
      v34 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v38;
    *((_DWORD *)this + 13) = v35;
  }
  memcpy_0(&v38[532 * v34], &v159, 0x205u);
  OSArray<int>::OSArray();
  v39 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v39;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v39 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 12;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&locret_50524A;
  v162 = (int ***)&loc_383258;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v39 + 1) )
  {
    v43 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v40 = 4 * (v39 + 1) / 3u + 3;
    v41 = (char *)malloc(532 * v40);
    v42 = (void *)*((_DWORD *)this + 15);
    v43 = v41;
    if ( v42 )
    {
      memcpy_0(v41, *((const void **)this + 15), 532 * v39);
      free(v42);
      v39 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v43;
    *((_DWORD *)this + 13) = v40;
  }
  memcpy_0(&v43[532 * v39], &v159, 0x205u);
  OSArray<int>::OSArray();
  v44 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v44;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v44 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 13;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_4E524A;
  v162 = (int ***)((char *)&loc_393256 + 2);
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v44 + 1) )
  {
    v48 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v45 = 4 * (v44 + 1) / 3u + 3;
    v46 = (char *)malloc(532 * v45);
    v47 = (void *)*((_DWORD *)this + 15);
    v48 = v46;
    if ( v47 )
    {
      memcpy_0(v46, *((const void **)this + 15), 532 * v44);
      free(v47);
      v44 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v48;
    *((_DWORD *)this + 13) = v45;
  }
  memcpy_0(&v48[532 * v44], &v159, 0x205u);
  OSArray<int>::OSArray();
  v49 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v49;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v49 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 14;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_54534A;
  v162 = (int ***)&loc_303358;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v49 + 1) )
  {
    v53 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v50 = 4 * (v49 + 1) / 3u + 3;
    v51 = (char *)malloc(532 * v50);
    v52 = (void *)*((_DWORD *)this + 15);
    v53 = v51;
    if ( v52 )
    {
      memcpy_0(v51, *((const void **)this + 15), 532 * v49);
      free(v52);
      v49 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v53;
    *((_DWORD *)this + 13) = v50;
  }
  memcpy_0(&v53[532 * v49], &v159, 0x205u);
  OSArray<int>::OSArray();
  v54 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v54;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v54 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 7;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_424848 + 3;
  v162 = (int ***)&loc_313358;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v54 + 1) )
  {
    v58 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v55 = 4 * (v54 + 1) / 3u + 3;
    v56 = (char *)malloc(532 * v55);
    v57 = (void *)*((_DWORD *)this + 15);
    v58 = v56;
    if ( v57 )
    {
      memcpy_0(v56, *((const void **)this + 15), 532 * v54);
      free(v57);
      v54 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v58;
    *((_DWORD *)this + 13) = v55;
  }
  memcpy_0(&v58[532 * v54], &v159, 0x205u);
  OSArray<int>::OSArray();
  v59 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v59;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v59 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 11;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_4E484A;
  v162 = (int ***)&loc_323358;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v59 + 1) )
  {
    v63 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v60 = 4 * (v59 + 1) / 3u + 3;
    v61 = (char *)malloc(532 * v60);
    v62 = (void *)*((_DWORD *)this + 15);
    v63 = v61;
    if ( v62 )
    {
      memcpy_0(v61, *((const void **)this + 15), 532 * v59);
      free(v62);
      v59 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v63;
    *((_DWORD *)this + 13) = v60;
  }
  memcpy_0(&v63[532 * v59], &v159, 0x205u);
  OSArray<int>::OSArray();
  v64 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v64;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v64 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 19;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_4C4C4A;
  v162 = &off_333358;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v64 + 1) )
  {
    v68 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v65 = 4 * (v64 + 1) / 3u + 3;
    v66 = (char *)malloc(532 * v65);
    v67 = (void *)*((_DWORD *)this + 15);
    v68 = v66;
    if ( v67 )
    {
      memcpy_0(v66, *((const void **)this + 15), 532 * v64);
      free(v67);
      v64 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v68;
    *((_DWORD *)this + 13) = v65;
  }
  memcpy_0(&v68[532 * v64], &v159, 0x205u);
  OSArray<int>::OSArray();
  v69 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v69;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v69 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 20;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_524C48 + 3;
  v162 = (int ***)&loc_343358;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v69 + 1) )
  {
    v73 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v70 = 4 * (v69 + 1) / 3u + 3;
    v71 = (char *)malloc(532 * v70);
    v72 = (void *)*((_DWORD *)this + 15);
    v73 = v71;
    if ( v72 )
    {
      memcpy_0(v71, *((const void **)this + 15), 532 * v69);
      free(v72);
      v69 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v73;
    *((_DWORD *)this + 13) = v70;
  }
  memcpy_0(&v73[532 * v69], &v159, 0x205u);
  OSArray<int>::OSArray();
  v74 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v74;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v74 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 21;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_425648 + 3;
  v162 = (int ***)&loc_353358;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v74 + 1) )
  {
    v78 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v75 = 4 * (v74 + 1) / 3u + 3;
    v76 = (char *)malloc(532 * v75);
    v77 = (void *)*((_DWORD *)this + 15);
    v78 = v76;
    if ( v77 )
    {
      memcpy_0(v76, *((const void **)this + 15), 532 * v74);
      free(v77);
      v74 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v78;
    *((_DWORD *)this + 13) = v75;
  }
  memcpy_0(&v78[532 * v74], &v159, 0x205u);
  OSArray<int>::OSArray();
  v79 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v79;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v79 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 32;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_51454A;
  v162 = (int ***)&loc_363358;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v79 + 1) )
  {
    v83 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v80 = 4 * (v79 + 1) / 3u + 3;
    v81 = (char *)malloc(532 * v80);
    v82 = (void *)*((_DWORD *)this + 15);
    v83 = v81;
    if ( v82 )
    {
      memcpy_0(v81, *((const void **)this + 15), 532 * v79);
      free(v82);
      v79 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v83;
    *((_DWORD *)this + 13) = v80;
  }
  memcpy_0(&v83[532 * v79], &v159, 0x205u);
  OSArray<int>::OSArray();
  v84 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v84;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v84 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 23;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_4D564A;
  v162 = (int ***)&loc_373358;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v84 + 1) )
  {
    v88 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v85 = 4 * (v84 + 1) / 3u + 3;
    v86 = (char *)malloc(532 * v85);
    v87 = (void *)*((_DWORD *)this + 15);
    v88 = v86;
    if ( v87 )
    {
      memcpy_0(v86, *((const void **)this + 15), 532 * v84);
      free(v87);
      v84 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v88;
    *((_DWORD *)this + 13) = v85;
  }
  memcpy_0(&v88[532 * v84], &v159, 0x205u);
  OSArray<int>::OSArray();
  v89 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v89;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v89 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 86;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_41464A;
  v162 = (int ***)&loc_383358;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v89 + 1) )
  {
    v93 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v90 = 4 * (v89 + 1) / 3u + 3;
    v91 = (char *)malloc(532 * v90);
    v92 = (void *)*((_DWORD *)this + 15);
    v93 = v91;
    if ( v92 )
    {
      memcpy_0(v91, *((const void **)this + 15), 532 * v89);
      free(v92);
      v89 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v93;
    *((_DWORD *)this + 13) = v90;
  }
  memcpy_0(&v93[532 * v89], &v159, 0x205u);
  OSArray<int>::OSArray();
  v94 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v94;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v94 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 87;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_44464A;
  v162 = (int ***)&loc_393358;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v94 + 1) )
  {
    v98 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v95 = 4 * (v94 + 1) / 3u + 3;
    v96 = (char *)malloc(532 * v95);
    v97 = (void *)*((_DWORD *)this + 15);
    v98 = v96;
    if ( v97 )
    {
      memcpy_0(v96, *((const void **)this + 15), 532 * v94);
      free(v97);
      v94 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v98;
    *((_DWORD *)this + 13) = v95;
  }
  memcpy_0(&v98[532 * v94], &v159, 0x205u);
  OSArray<int>::OSArray();
  v99 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v99;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v99 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 88;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_50464A;
  v162 = (int ***)((char *)&loc_303456 + 2);
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v99 + 1) )
  {
    v103 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v100 = 4 * (v99 + 1) / 3u + 3;
    v101 = (char *)malloc(532 * v100);
    v102 = (void *)*((_DWORD *)this + 15);
    v103 = v101;
    if ( v102 )
    {
      memcpy_0(v101, *((const void **)this + 15), 532 * v99);
      free(v102);
      v99 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v103;
    *((_DWORD *)this + 13) = v100;
  }
  memcpy_0(&v103[532 * v99], &v159, 0x205u);
  OSArray<int>::OSArray();
  v104 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v104;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v104 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 89;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_534648 + 3;
  v162 = (int ***)((char *)&loc_313456 + 2);
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v104 + 1) )
  {
    v108 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v105 = 4 * (v104 + 1) / 3u + 3;
    v106 = (char *)malloc(532 * v105);
    v107 = (void *)*((_DWORD *)this + 15);
    v108 = v106;
    if ( v107 )
    {
      memcpy_0(v106, *((const void **)this + 15), 532 * v104);
      free(v107);
      v104 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v108;
    *((_DWORD *)this + 13) = v105;
  }
  memcpy_0(&v108[532 * v104], &v159, 0x205u);
  OSArray<int>::OSArray();
  v109 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v109;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v109 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 53;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_494E4A;
  v162 = (int ***)&loc_343458;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v109 + 1) )
  {
    v113 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v110 = 4 * (v109 + 1) / 3u + 3;
    v111 = (char *)malloc(532 * v110);
    v112 = (void *)*((_DWORD *)this + 15);
    v113 = v111;
    if ( v112 )
    {
      memcpy_0(v111, *((const void **)this + 15), 532 * v109);
      free(v112);
      v109 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v113;
    *((_DWORD *)this + 13) = v110;
  }
  memcpy_0(&v113[532 * v109], &v159, 0x205u);
  OSArray<int>::OSArray();
  v114 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v114;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v114 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 85;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_484C4A;
  v162 = (int ***)&loc_353458;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v114 + 1) )
  {
    v118 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v115 = 4 * (v114 + 1) / 3u + 3;
    v116 = (char *)malloc(532 * v115);
    v117 = (void *)*((_DWORD *)this + 15);
    v118 = v116;
    if ( v117 )
    {
      memcpy_0(v116, *((const void **)this + 15), 532 * v114);
      free(v117);
      v114 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v118;
    *((_DWORD *)this + 13) = v115;
  }
  memcpy_0(&v118[532 * v114], &v159, 0x205u);
  OSArray<int>::OSArray();
  v119 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v119;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v119 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 54;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_55434A;
  v162 = (int ***)((char *)&loc_373456 + 2);
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v119 + 1) )
  {
    v123 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v120 = 4 * (v119 + 1) / 3u + 3;
    v121 = (char *)malloc(532 * v120);
    v122 = (void *)*((_DWORD *)this + 15);
    v123 = v121;
    if ( v122 )
    {
      memcpy_0(v121, *((const void **)this + 15), 532 * v119);
      free(v122);
      v119 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v123;
    *((_DWORD *)this + 13) = v120;
  }
  memcpy_0(&v123[532 * v119], &v159, 0x205u);
  OSArray<int>::OSArray();
  v124 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v124;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v124 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 55;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_44434A;
  v162 = (int ***)((char *)&loc_383456 + 2);
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v124 + 1) )
  {
    v128 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v125 = 4 * (v124 + 1) / 3u + 3;
    v126 = (char *)malloc(532 * v125);
    v127 = (void *)*((_DWORD *)this + 15);
    v128 = v126;
    if ( v127 )
    {
      memcpy_0(v126, *((const void **)this + 15), 532 * v124);
      free(v127);
      v124 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v128;
    *((_DWORD *)this + 13) = v125;
  }
  memcpy_0(&v128[532 * v124], &v159, 0x205u);
  OSArray<int>::OSArray();
  v129 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v129;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v129 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 50;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_43444A;
  v162 = (int ***)((char *)&loc_393456 + 2);
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v129 + 1) )
  {
    v133 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v130 = 4 * (v129 + 1) / 3u + 3;
    v131 = (char *)malloc(532 * v130);
    v132 = (void *)*((_DWORD *)this + 15);
    v133 = v131;
    if ( v132 )
    {
      memcpy_0(v131, *((const void **)this + 15), 532 * v129);
      free(v132);
      v129 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v133;
    *((_DWORD *)this + 13) = v130;
  }
  memcpy_0(&v133[532 * v129], &v159, 0x205u);
  OSArray<int>::OSArray();
  v134 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v134;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v134 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 90;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_4C504A;
  v162 = (int ***)((char *)&loc_333656 + 2);
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v134 + 1) )
  {
    v138 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v135 = 4 * (v134 + 1) / 3u + 3;
    v136 = (char *)malloc(532 * v135);
    v137 = (void *)*((_DWORD *)this + 15);
    v138 = v136;
    if ( v137 )
    {
      memcpy_0(v136, *((const void **)this + 15), 532 * v134);
      free(v137);
      v134 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v138;
    *((_DWORD *)this + 13) = v135;
  }
  memcpy_0(&v138[532 * v134], &v159, 0x205u);
  OSArray<int>::OSArray();
  v139 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v139;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v139 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 91;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_525048 + 3;
  v162 = (int ***)&loc_343658;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v139 + 1) )
  {
    v143 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v140 = 4 * (v139 + 1) / 3u + 3;
    v141 = (char *)malloc(532 * v140);
    v142 = (void *)*((_DWORD *)this + 15);
    v143 = v141;
    if ( v142 )
    {
      memcpy_0(v141, *((const void **)this + 15), 532 * v139);
      free(v142);
      v139 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v143;
    *((_DWORD *)this + 13) = v140;
  }
  memcpy_0(&v143[532 * v139], &v159, 0x205u);
  OSArray<int>::OSArray();
  v144 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v144;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v144 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 92;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_55504A;
  v162 = (int ***)&loc_353658;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v144 + 1) )
  {
    v148 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v145 = 4 * (v144 + 1) / 3u + 3;
    v146 = (char *)malloc(532 * v145);
    v147 = (void *)*((_DWORD *)this + 15);
    v148 = v146;
    if ( v147 )
    {
      memcpy_0(v146, *((const void **)this + 15), 532 * v144);
      free(v147);
      v144 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v148;
    *((_DWORD *)this + 13) = v145;
  }
  memcpy_0(&v148[532 * v144], &v159, 0x205u);
  OSArray<int>::OSArray();
  v149 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v149;
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
    v149 = *((_DWORD *)this + 14);
  }
  p = 0;
  v165 = 0;
  v166 = 0;
  v163 = 93;
  v161 = 1598181197;
  v159 = 1598181197;
  v160 = (char *)&loc_44504A;
  v162 = (int ***)off_363658;
  v164 = 0;
  if ( *((_DWORD *)this + 13) >= (unsigned int)(v149 + 1) )
  {
    v153 = (char *)*((_DWORD *)this + 15);
  }
  else
  {
    v150 = 4 * (v149 + 1) / 3u + 3;
    v151 = (char *)malloc(532 * v150);
    v152 = (void *)*((_DWORD *)this + 15);
    v153 = v151;
    if ( v152 )
    {
      memcpy_0(v151, *((const void **)this + 15), 532 * v149);
      free(v152);
      v149 = *((_DWORD *)this + 14);
    }
    *((_DWORD *)this + 15) = v153;
    *((_DWORD *)this + 13) = v150;
  }
  memcpy_0(&v153[532 * v149], &v159, 0x205u);
  OSArray<int>::OSArray();
  ++*((_DWORD *)this + 14);
  v166 = 0;
  if ( p )
  {
    free(p);
    p = 0;
  }
  KeyboardControlsScreen::WhitelistAdd();
  KeyboardControlsScreen::WhitelistAdd();
  KeyboardControlsScreen::WhitelistAdd();
  KeyboardControlsScreen::WhitelistAdd();
  KeyboardControlsScreen::WhitelistAdd();
  KeyboardControlsScreen::WhitelistAdd();
  if ( *((_DWORD *)this + 14) )
  {
    v154 = 0;
    v155 = 0;
    do
    {
      v156 = (SelectScreen::MenuSelection *)operator new(0x10u);
      v157 = *((_DWORD *)this + 15) + v154;
      *(_DWORD *)v156 = &off_6627F0;
      *((_DWORD *)v156 + 1) = v157;
      *((_DWORD *)v156 + 2) = sub_29B6CC;
      *((_DWORD *)v156 + 3) = 0;
      SelectScreen::AddItem(this, v156);
      ++v155;
      v154 += 532;
    }
    while ( v155 < *((_DWORD *)this + 14) );
  }
  return _stack_chk_guard - v168;
}


// ============================================================

// Address: 0x2a25c8
// Original: _ZN22KeyboardControlsScreenD2Ev
// Demangled: KeyboardControlsScreen::~KeyboardControlsScreen()
void __fastcall KeyboardControlsScreen::~KeyboardControlsScreen(KeyboardControlsScreen *this)
{
  int v2; // r1
  int v3; // r6
  unsigned int v4; // r5
  int v5; // r10
  void *v6; // r0
  void *v7; // r0

  v2 = *((_DWORD *)this + 14);
  *(_DWORD *)this = &off_662794;
  if ( v2 )
  {
    v3 = 520;
    v4 = 0;
    do
    {
      v5 = *((_DWORD *)this + 15);
      v6 = *(void **)(v5 + v3 + 8);
      *(_DWORD *)(v5 + v3 + 4) = 0;
      if ( v6 )
      {
        free(v6);
        *(_DWORD *)(v5 + v3 + 8) = 0;
      }
      *(_DWORD *)(v5 + v3) = 0;
      v3 += 532;
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 14) );
  }
  v7 = (void *)*((_DWORD *)this + 15);
  *((_DWORD *)this + 14) = 0;
  if ( v7 )
  {
    free(v7);
    *((_DWORD *)this + 15) = 0;
  }
  *((_DWORD *)this + 13) = 0;
  j_SelectScreen::~SelectScreen(this);
}


// ============================================================

// Address: 0x2a2648
// Original: _ZN22KeyboardControlsScreenD0Ev
// Demangled: KeyboardControlsScreen::~KeyboardControlsScreen()
void __fastcall KeyboardControlsScreen::~KeyboardControlsScreen(KeyboardControlsScreen *this)
{
  int v2; // r1
  int v3; // r6
  unsigned int v4; // r5
  int v5; // r10
  void *v6; // r0
  void *v7; // r0
  void *v8; // r0

  v2 = *((_DWORD *)this + 14);
  *(_DWORD *)this = &off_662794;
  if ( v2 )
  {
    v3 = 520;
    v4 = 0;
    do
    {
      v5 = *((_DWORD *)this + 15);
      v6 = *(void **)(v5 + v3 + 8);
      *(_DWORD *)(v5 + v3 + 4) = 0;
      if ( v6 )
      {
        free(v6);
        *(_DWORD *)(v5 + v3 + 8) = 0;
      }
      *(_DWORD *)(v5 + v3) = 0;
      v3 += 532;
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 14) );
  }
  v7 = (void *)*((_DWORD *)this + 15);
  *((_DWORD *)this + 14) = 0;
  if ( v7 )
  {
    free(v7);
    *((_DWORD *)this + 15) = 0;
  }
  *((_DWORD *)this + 13) = 0;
  SelectScreen::~SelectScreen(this);
  operator delete(v8);
}


// ============================================================

// Address: 0x2a26cc
// Original: _ZN22KeyboardControlsScreen6UpdateEf
// Demangled: KeyboardControlsScreen::Update(float)
int __fastcall KeyboardControlsScreen::Update(KeyboardControlsScreen *this, float a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d2
  float32x2_t v5; // d3
  int v8; // r0
  int v9; // r1
  float v10; // s16
  float32x2_t v11; // d1
  int v12; // r0
  int v13; // r5
  int v14; // r0
  float v16; // r8
  float v17; // r6
  __int64 v18; // r2
  __int64 v19; // r0
  int v20; // r0
  int result; // r0
  int v22; // r0
  CHID *v23; // r0
  float v24; // s2
  float v25; // s2
  int v26; // [sp+8h] [bp-20h] BYREF
  int v27[7]; // [sp+Ch] [bp-1Ch] BYREF

  v8 = *((_DWORD *)this + 11);
  if ( KeyboardControlsScreen::Update(float)::LastSelectedItem != (float)v8 )
  {
    strcpy((char *)this + 401, (const char *)this + 145);
    v8 = *((_DWORD *)this + 11);
    v9 = *((_DWORD *)this + 33);
    *((_DWORD *)this + 33) = 0;
    *((_DWORD *)this + 34) = v9;
    KeyboardControlsScreen::Update(float)::LastSelectedItem = (float)v8;
  }
  v10 = a2;
  if ( v8 == -1 )
  {
    v4.n64_u32[0] = 0;
    v2.n64_f32[0] = a2 * 3.0;
    v3.n64_f32[0] = *((float *)this + 33) - (float)(a2 * 3.0);
    v11.n64_u64[0] = vmax_f32(v3, v4).n64_u64[0];
  }
  else
  {
    strcpy((char *)this + 145, (const char *)(*((_DWORD *)this + 15) + 532 * v8 + 256));
    v4.n64_u32[0] = 1.0;
    v2.n64_f32[0] = a2 * 3.0;
    v3.n64_f32[0] = (float)(a2 * 3.0) + *((float *)this + 33);
    v11.n64_u64[0] = vmin_f32(v3, v4).n64_u64[0];
  }
  v12 = *((unsigned __int8 *)this + 144);
  v4.n64_u32[0] = *((_DWORD *)this + 35);
  *((_DWORD *)this + 33) = v11.n64_u32[0];
  if ( v12 )
  {
    v11.n64_u32[0] = 1.0;
    v4.n64_f32[0] = v2.n64_f32[0] + v4.n64_f32[0];
    v11.n64_u32[0] = vmin_f32(v4, v11).n64_u32[0];
  }
  else
  {
    v4.n64_f32[0] = v4.n64_f32[0] - v2.n64_f32[0];
    v11.n64_u32[0] = 0;
    v11.n64_u32[0] = vmax_f32(v4, v11).n64_u32[0];
  }
  v5.n64_u32[0] = 0;
  v2.n64_f32[0] = *((float *)this + 34) - v2.n64_f32[0];
  *((_DWORD *)this + 34) = vmax_f32(v2, v5).n64_u32[0];
  *((_DWORD *)this + 35) = v11.n64_u32[0];
  if ( byte_6E01A8 == 1 )
  {
    v13 = 0;
    do
    {
      v14 = LIB_KeyboardState();
      if ( v13 && !v14 || !LIB_PointerGetButton(0, 0) || !LIB_PointerGetButton(0, 1) || !LIB_PointerGetButton(0, 2) )
        return j_KeyboardControlsScreen::RemapKey();
    }
    while ( v13++ < 99 );
    if ( COERCE_FLOAT(LIB_PointerGetWheel(0)) != 0.0 )
      return j_KeyboardControlsScreen::RemapKey();
    if ( *((_BYTE *)this + 12) && BackPressed() == 1 )
    {
      (*(void (__fastcall **)(KeyboardControlsScreen *))(*(_DWORD *)this + 36))(this);
      result = NeedsAmazonDownload();
      if ( !result )
        return j_CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 2, 0.0, 1.0);
      return result;
    }
    v24 = *((float *)this + 2);
    if ( v24 < 1.0 )
    {
      v25 = (float)(v10 * 5.0) + v24;
      *((float *)this + 2) = v25;
      if ( v25 > 1.0 )
        *((_DWORD *)this + 2) = 1065353216;
    }
  }
  else
  {
    KeyboardControlsScreen::ManageScrolling(this, a2);
    SelectScreen::Update(this, a2);
  }
  v27[0] = 0;
  v26 = 0;
  LIB_PointerGetCoordinates(lastDevice, v27, &v26, 0);
  v16 = (float)v26;
  v17 = (float)v27[0];
  if ( *((_DWORD *)&gMobileMenu + lastDevice + 36) == 2 && !byte_6E01A8 )
  {
    v18 = *((_QWORD *)this + 13);
    v19 = *((_QWORD *)this + 14);
    *((_DWORD *)this + 32) = -1;
    if ( CWidget::IsInsideRect(SLODWORD(v17), SLODWORD(v16), v18, SHIDWORD(v18), v19, SHIDWORD(v19)) )
    {
      v20 = 2;
    }
    else if ( CWidget::IsInsideRect(
                SLODWORD(v17),
                SLODWORD(v16),
                *((_DWORD *)this + 18),
                *((_DWORD *)this + 19),
                *((_DWORD *)this + 20),
                *((_DWORD *)this + 21)) == 1 )
    {
      v20 = 0;
    }
    else
    {
      if ( CWidget::IsInsideRect(
             SLODWORD(v17),
             SLODWORD(v16),
             *((_DWORD *)this + 22),
             *((_DWORD *)this + 23),
             *((_DWORD *)this + 24),
             *((_DWORD *)this + 25)) != 1 )
        goto LABEL_34;
      v20 = 1;
    }
    *((_DWORD *)this + 32) = v20;
  }
LABEL_34:
  result = *((_DWORD *)&gMobileMenu + lastDevice + 36);
  if ( result )
    return result;
  v22 = *((_DWORD *)this + 32);
  if ( v22 != 2 )
  {
LABEL_44:
    if ( v22
      || CWidget::IsInsideRect(
           SLODWORD(v17),
           SLODWORD(v16),
           *((_DWORD *)this + 18),
           *((_DWORD *)this + 19),
           *((_DWORD *)this + 20),
           *((_DWORD *)this + 21)) != 1
      || *((_DWORD *)this + 31) == 1 )
    {
      result = *((_DWORD *)this + 32);
      if ( result != 1 )
        return result;
      result = CWidget::IsInsideRect(
                 SLODWORD(v17),
                 SLODWORD(v16),
                 *((_DWORD *)this + 22),
                 *((_DWORD *)this + 23),
                 *((_DWORD *)this + 24),
                 *((_DWORD *)this + 25));
      if ( result != 1 )
        return result;
      result = *((_DWORD *)this + 31);
      if ( result == 2 )
        return result;
      if ( !NeedsAmazonDownload() )
        CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 3, 0.0, 1.0);
      KeyboardControlsScreen::DoVehicleMappings(this);
      *((_DWORD *)this + 17) = 0;
      result = 2;
    }
    else
    {
      if ( !NeedsAmazonDownload() )
        CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 3, 0.0, 1.0);
      KeyboardControlsScreen::DoOnFootMappings(this);
      *((_DWORD *)this + 17) = 0;
      result = 1;
    }
    *((_DWORD *)this + 31) = result;
    return result;
  }
  if ( CWidget::IsInsideRect(
         SLODWORD(v17),
         SLODWORD(v16),
         *((_DWORD *)this + 26),
         *((_DWORD *)this + 27),
         *((_DWORD *)this + 28),
         *((_DWORD *)this + 29)) != 1 )
  {
    v22 = *((_DWORD *)this + 32);
    goto LABEL_44;
  }
  CHIDKeyboard::RestoreDefaultMappings((CHIDKeyboard *)((char *)&stderr + 1));
  v23 = (CHID *)CHID::m_pInstance[CHID::currentInstanceIndex];
  if ( v23 && CHID::GetInputType(v23) == 2 )
    CHIDKeyboard::SaveMappingsToDisk((CHIDKeyboard *)CHID::m_pInstance[CHID::currentInstanceIndex]);
  result = NeedsAmazonDownload();
  if ( !result )
    return CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 1, 0.0, 1.0);
  return result;
}


// ============================================================

// Address: 0x2a2af4
// Original: _ZN22KeyboardControlsScreen6RenderEi
// Demangled: KeyboardControlsScreen::Render(int)
int __fastcall KeyboardControlsScreen::Render(KeyboardControlsScreen *this, int a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  float v6; // s2
  float v7; // s18
  float v8; // s20
  int v9; // r6
  int v10; // r5
  float v11; // s0
  float v12; // s2
  float v13; // s10
  float v14; // s6
  float v15; // s2
  float v16; // s4
  float v17; // s0
  float v18; // s12
  float v19; // s8
  float v20; // s10
  float v21; // s1
  float v22; // s6
  char *v23; // r9
  int v24; // r0
  float v25; // s18
  float v26; // s20
  unsigned __int8 v27; // r2
  unsigned __int8 v28; // r1
  float v29; // s18
  float v30; // r1
  unsigned __int8 v31; // r1
  signed __int8 v32; // r1
  unsigned __int8 v33; // r1
  float v34; // r1
  float v35; // s16
  float v36; // r1
  CFont *v37; // r0
  unsigned __int8 v38; // r3
  float v39; // r0
  float v40; // r1
  CFont *v41; // r0
  unsigned __int8 v42; // r3
  float v43; // r0
  float v44; // r1
  CFont *v45; // r0
  _BOOL4 v46; // r1
  unsigned __int8 v47; // r3
  float v48; // r0
  float v49; // s18
  float v50; // s20
  float v51; // s22
  float v52; // s0
  CFont *v53; // r0
  unsigned __int16 *v54; // r3
  CFont *v55; // r0
  float v56; // s18
  float v57; // s20
  float v58; // s22
  bool v59; // r1
  float v60; // s0
  CFont *v61; // r0
  unsigned __int16 *v62; // r3
  CFont *v63; // r0
  float v64; // s18
  float v65; // s20
  float v66; // s22
  bool v67; // r1
  float v68; // s0
  CFont *v69; // r0
  unsigned __int16 *v70; // r3
  CFont *v71; // r0
  _BYTE v73[4]; // [sp+24h] [bp-7Ch] BYREF
  _BYTE v74[4]; // [sp+28h] [bp-78h] BYREF
  _BYTE v75[4]; // [sp+2Ch] [bp-74h] BYREF
  int v76; // [sp+30h] [bp-70h] BYREF
  _DWORD v77[2]; // [sp+34h] [bp-6Ch] BYREF
  int v78; // [sp+3Ch] [bp-64h] BYREF
  int v79; // [sp+40h] [bp-60h] BYREF
  int v80; // [sp+44h] [bp-5Ch] BYREF
  int v81; // [sp+48h] [bp-58h] BYREF
  int v82; // [sp+4Ch] [bp-54h] BYREF
  int v83; // [sp+50h] [bp-50h] BYREF
  int v84; // [sp+54h] [bp-4Ch] BYREF
  int v85; // [sp+58h] [bp-48h] BYREF
  _DWORD v86[17]; // [sp+5Ch] [bp-44h] BYREF

  *((_BYTE *)this + 144) = 0;
  SelectScreen::Render(this, a2);
  CRGBA::CRGBA(
    (CRGBA *)&v85,
    0xF0u,
    0xF0u,
    0xF0u,
    (unsigned int)(float)((float)(*((float *)this + 2) * 255.0) * *((float *)this + 34)));
  v3 = CText::Get((CText *)TheText, (KeyboardControlsScreen *)((char *)this + 401));
  v77[0] = v85;
  MenuScreen::DrawTextDirect(
    (int)&v79,
    (int)this,
    v3,
    0,
    2,
    (int)v77,
    1,
    1106247680,
    1139146752,
    1140129792,
    1094713344,
    0,
    0);
  CRGBA::CRGBA(
    (CRGBA *)&v84,
    0xF0u,
    0xF0u,
    0xF0u,
    (unsigned int)(float)((float)(*((float *)this + 2) * 255.0) * *((float *)this + 33)));
  v4 = CText::Get((CText *)TheText, (KeyboardControlsScreen *)((char *)this + 145));
  v77[0] = v84;
  MenuScreen::DrawTextDirect(
    (int)&v79,
    (int)this,
    v4,
    0,
    2,
    (int)v77,
    1,
    1106247680,
    1139146752,
    1140129792,
    1094713344,
    0,
    0);
  CRGBA::CRGBA(
    (CRGBA *)&v83,
    0xFFu,
    0,
    0,
    (unsigned int)(float)((float)(*((float *)this + 2) * 255.0) * *((float *)this + 35)));
  v5 = CText::Get((CText *)TheText, (CKeyGen *)"MOB_X98");
  v77[0] = v83;
  MenuScreen::DrawTextDirect(
    (int)&v79,
    (int)this,
    v5,
    0,
    2,
    (int)v77,
    1,
    1106247680,
    1138655232,
    1140129792,
    1094713344,
    0,
    0);
  if ( byte_6E01A8 == 1 )
  {
    CRGBA::CRGBA((CRGBA *)&v79, 0, 0, 0, 0x80u);
    CRGBA::CRGBA((CRGBA *)&v80, 0, 0, 0, 0x80u);
    CRGBA::CRGBA((CRGBA *)&v81, 0x80u, 0x80u, 0x80u, 0xC0u);
    CRGBA::CRGBA((CRGBA *)&v82, 0x80u, 0x80u, 0x80u, 0xC0u);
    v6 = *((float *)this + 2);
    HIBYTE(v79) = (unsigned int)(float)(v6 * (float)HIBYTE(v79));
    v7 = (float)dword_9FC900;
    v8 = (float)dword_9FC904;
    HIBYTE(v80) = (unsigned int)(float)(v6 * (float)HIBYTE(v80));
    HIBYTE(v81) = (unsigned int)(float)(v6 * (float)HIBYTE(v81));
    HIBYTE(v82) = (unsigned int)(float)(v6 * (float)HIBYTE(v82));
    RwRenderStateSet(1, 0);
    dword_6E0148 = v79;
    dword_6E0140 = 1065353216;
    dword_6E0144 = 1065353216;
    qword_6E014C = 0LL;
    dword_6E015C = 1065353216;
    dword_6E0160 = 1065353216;
    qword_6E0168 = 1065353216LL;
    *(float *)maVertices = (float)(v7 * 0.5) + (float)((float)(v8 * -120.0) / 480.0);
    *(float *)&dword_6E013C = (float)(v8 * 174.0) / 480.0;
    *(float *)&qword_6E0154 = (float)(v7 * 0.5) + (float)((float)(v8 * 120.0) / 480.0);
    *((float *)&qword_6E0154 + 1) = (float)(v8 * 174.0) / 480.0;
    dword_6E0164 = v80;
    dword_6E0178 = 1065353216;
    dword_6E017C = 1065353216;
    qword_6E0184 = 0x3F80000000000000LL;
    *(float *)&qword_6E0170 = *(float *)maVertices;
    *((float *)&qword_6E0170 + 1) = (float)(v8 * 274.0) / 480.0;
    dword_6E0180 = v81;
    dword_6E0194 = 1065353216;
    dword_6E0198 = 1065353216;
    qword_6E01A0 = 0x3F8000003F800000LL;
    *(float *)&qword_6E018C = *(float *)&qword_6E0154;
    *((float *)&qword_6E018C + 1) = (float)(v8 * 274.0) / 480.0;
    dword_6E019C = v82;
    RwIm2DRenderPrimitive_BUGFIX(4, maVertices, 4);
    v9 = CText::Get((CText *)TheText, (CKeyGen *)"MOB_DLG");
    CRGBA::CRGBA((CRGBA *)&v78, 0xF0u, 0xF0u, 0xF0u, 0xFFu);
    v86[0] = v78;
    MenuScreen::DrawTextDirect(
      (int)v77,
      (int)this,
      v9,
      0,
      1,
      (int)v86,
      1,
      1129447424,
      1127481344,
      1130102784,
      1099956224,
      1,
      0);
    v10 = CText::Get((CText *)TheText, (CKeyGen *)"MOB_ESC");
    CRGBA::CRGBA((CRGBA *)&v76, 0xF0u, 0xF0u, 0xF0u, 0xFFu);
    v86[0] = v76;
    MenuScreen::DrawTextDirect(
      (int)v77,
      (int)this,
      v10,
      0,
      1,
      (int)v86,
      1,
      1129447424,
      1131413504,
      1130102784,
      1099956224,
      1,
      0);
  }
  v11 = (float)dword_9FC900 / 640.0;
  v12 = (float)dword_9FC904 / 448.0;
  v13 = v11 * 70.0;
  v14 = v12 * 70.0;
  v15 = v12 * 30.0;
  v16 = v11 * 18.0;
  v17 = v11 * 320.0;
  v18 = v13 * 0.1;
  v19 = v13 * 3.1;
  v20 = v13 * 1.5;
  v21 = v16 + v14;
  v22 = v14 - v16;
  *((float *)this + 18) = v17 - v19;
  *((float *)this + 19) = v21;
  *((float *)this + 20) = v17 - v18;
  *((float *)this + 21) = v22;
  *((float *)this + 22) = v18 + v17;
  *((float *)this + 23) = v21;
  *((float *)this + 24) = v19 + v17;
  *((float *)this + 25) = v22;
  *((float *)this + 26) = v17 - v20;
  *((float *)this + 27) = v16 + v15;
  *((float *)this + 28) = v20 + v17;
  *((float *)this + 29) = v15 - v16;
  if ( *((_DWORD *)this + 31) == 1 )
    v23 = (char *)this + 72;
  else
    v23 = (char *)this + 88;
  CRGBA::CRGBA((CRGBA *)&v79, 0xF0u, 0xF0u, 0xF0u, (unsigned int)(float)(*((float *)this + 2) * 102.0));
  CRGBA::CRGBA((CRGBA *)v77, 0x99u, 0xCCu, 0x99u, (unsigned int)(float)(*((float *)this + 2) * 102.0));
  CRGBA::CRGBA((CRGBA *)v86, 0x99u, 0xCCu, 0x99u, (unsigned int)(float)(*((float *)this + 2) * 50.8));
  CRGBA::CRGBA((CRGBA *)v75, 0x99u, 0xCCu, 0x99u, (unsigned int)(float)(*((float *)this + 2) * 50.8));
  CSprite2d::DrawRect((int)v23, (int)&v79, (int)v77, (int)v86, v24);
  v25 = *((float *)this + 18);
  v26 = *((float *)this + 20);
  CFont::SetBackground(0, 0, v27);
  CFont::SetOrientation(0, v28);
  v29 = fabsf(v26 - v25) * 0.95;
  CFont::SetCentreSize((CFont *)LODWORD(v29), v30);
  CFont::SetProportional((CFont *)((char *)&stderr + 1), v31);
  CFont::SetEdge((CFont *)((char *)&stderr + 1), v32);
  CFont::SetFontStyle((CFont *)((char *)&stderr + 2), v33);
  CFont::SetWrapx(COERCE_CFONT_((float)dword_9FC900), v34);
  CRGBA::CRGBA((CRGBA *)v74, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)(*((float *)this + 2) * 255.0));
  CFont::SetColor();
  CRGBA::CRGBA((CRGBA *)v73, 0, 0, 0, (unsigned int)(float)(*((float *)this + 2) * 255.0));
  CFont::SetDropColor();
  v35 = fabsf(*((float *)this + 19) - *((float *)this + 21)) * 0.03;
  CFont::SetScale((CFont *)LODWORD(v35), v36);
  v37 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"HUD_FOT");
  if ( v37 )
  {
    v39 = COERCE_FLOAT(CFont::GetStringWidth(v37, (unsigned __int16 *)((char *)&stderr + 1), 0, v38));
    if ( v39 > v29 )
    {
      v35 = v35 * (float)(v29 / v39);
      CFont::SetScale((CFont *)LODWORD(v35), v40);
    }
  }
  v41 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"HUD_VEH");
  if ( v41 )
  {
    v43 = COERCE_FLOAT(CFont::GetStringWidth(v41, (unsigned __int16 *)((char *)&stderr + 1), 0, v42));
    if ( v43 > v29 )
    {
      v35 = v35 * (float)(v29 / v43);
      CFont::SetScale((CFont *)LODWORD(v35), v44);
    }
  }
  v45 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"HUD_DEF");
  if ( v45 )
  {
    v48 = COERCE_FLOAT(CFont::GetStringWidth(v45, (unsigned __int16 *)((char *)&stderr + 1), 0, v47));
    if ( v48 > v29 )
      CFont::SetScale(COERCE_CFONT_(v35 * (float)(v29 / v48)), *(float *)&v46);
  }
  v49 = *((float *)this + 18);
  v50 = *((float *)this + 20);
  v51 = *((float *)this + 19) + *((float *)this + 21);
  v52 = COERCE_FLOAT(CFont::GetHeight(0, v46)) * 0.5;
  v53 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"HUD_FOT");
  v55 = (CFont *)CFont::PrintString(COERCE_CFONT_((float)(v49 + v50) * 0.5), (float)(v51 * 0.5) - v52, v53, v54);
  CFont::RenderFontBuffer(v55);
  v56 = *((float *)this + 22);
  v57 = *((float *)this + 24);
  v58 = *((float *)this + 23) + *((float *)this + 25);
  v60 = COERCE_FLOAT(CFont::GetHeight(0, v59));
  v61 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"HUD_VEH");
  v63 = (CFont *)CFont::PrintString(
                   COERCE_CFONT_((float)(v56 + v57) * 0.5),
                   (float)(v58 * 0.5) - (float)(v60 * 0.5),
                   v61,
                   v62);
  CFont::RenderFontBuffer(v63);
  v64 = *((float *)this + 26);
  v65 = *((float *)this + 28);
  v66 = *((float *)this + 27) + *((float *)this + 29);
  v68 = COERCE_FLOAT(CFont::GetHeight(0, v67));
  v69 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"HUD_DEF");
  v71 = (CFont *)CFont::PrintString(
                   COERCE_CFONT_((float)(v64 + v65) * 0.5),
                   (float)(v66 * 0.5) - (float)(v68 * 0.5),
                   v69,
                   v70);
  return CFont::RenderFontBuffer(v71);
}


// ============================================================

// Address: 0x2a3360
// Original: _ZN22KeyboardControlsScreen6OnBackEv
// Demangled: KeyboardControlsScreen::OnBack(void)
char *__fastcall KeyboardControlsScreen::OnBack(KeyboardControlsScreen *this)
{
  char *result; // r0

  if ( byte_6E01A8 )
  {
    result = &byte_6E01A8;
    byte_6E01A8 = 0;
  }
  else
  {
    if ( (unsigned int)dword_6E0090 >= 2 )
      (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_6E0094 + 4 * dword_6E0090 - 8) + 20))(
        *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 8),
        *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
    return (char *)j_MobileMenu::RemoveTopScreen((MobileMenu *)&gMobileMenu, 0, 0);
  }
  return result;
}


// ============================================================

// Address: 0x2a33c0
// Original: _ZN22KeyboardControlsScreen11GetMenuLeftEv
// Demangled: KeyboardControlsScreen::GetMenuLeft(void)
int __fastcall KeyboardControlsScreen::GetMenuLeft(KeyboardControlsScreen *this)
{
  return 1101004800;
}


// ============================================================

// Address: 0x2a33c8
// Original: _ZN22KeyboardControlsScreen14LoopSelectionsEv
// Demangled: KeyboardControlsScreen::LoopSelections(void)
int __fastcall KeyboardControlsScreen::LoopSelections(KeyboardControlsScreen *this)
{
  return 0;
}


// ============================================================

// Address: 0x2a33cc
// Original: _ZN22KeyboardControlsScreen10GetScrollYEv
// Demangled: KeyboardControlsScreen::GetScrollY(void)
int __fastcall KeyboardControlsScreen::GetScrollY(KeyboardControlsScreen *this)
{
  return *((_DWORD *)this + 17);
}


// ============================================================

// Address: 0x2a33d0
// Original: _ZN22KeyboardControlsScreen9GetStartYEv
// Demangled: KeyboardControlsScreen::GetStartY(void)
int __fastcall KeyboardControlsScreen::GetStartY(KeyboardControlsScreen *this)
{
  return 1123024896;
}


// ============================================================

// Address: 0x2a33d8
// Original: _ZN22KeyboardControlsScreen8GetYSizeEi
// Demangled: KeyboardControlsScreen::GetYSize(int)
float __fastcall KeyboardControlsScreen::GetYSize(KeyboardControlsScreen *this, int a2)
{
  float v3; // s16

  v3 = COERCE_FLOAT((*(int (__fastcall **)(KeyboardControlsScreen *))(*(_DWORD *)this + 72))(this));
  return (float)(v3 - (*(float (__fastcall **)(KeyboardControlsScreen *))(*(_DWORD *)this + 64))(this)) / 10.5;
}


// ============================================================

// Address: 0x2a3410
// Original: _ZN22KeyboardControlsScreen7GetEndYEv
// Demangled: KeyboardControlsScreen::GetEndY(void)
int __fastcall KeyboardControlsScreen::GetEndY(KeyboardControlsScreen *this)
{
  return 1137508352;
}


// ============================================================

// Address: 0x2a3418
// Original: _ZN22KeyboardControlsScreen14GetScissorRectEv
// Demangled: KeyboardControlsScreen::GetScissorRect(void)
int __fastcall KeyboardControlsScreen::GetScissorRect(KeyboardControlsScreen *this, int a2)
{
  float v4; // r6
  int Height; // r8
  float v6; // s16
  float v7; // s18
  float v8; // s16
  float v9; // s18
  int Width; // s0
  int result; // r0

  v4 = COERCE_FLOAT((*(int (__fastcall **)(int))(*(_DWORD *)a2 + 64))(a2));
  Height = OS_ScreenGetHeight();
  v6 = COERCE_FLOAT((*(int (__fastcall **)(int))(*(_DWORD *)a2 + 72))(a2));
  v7 = (float)(v6 - (*(float (__fastcall **)(int))(*(_DWORD *)a2 + 64))(a2)) / 480.0;
  v8 = (float)(v4 / 480.0) * (float)(unsigned int)Height;
  v9 = v7 * (float)(unsigned int)OS_ScreenGetHeight();
  Width = OS_ScreenGetWidth();
  result = 0;
  *(_DWORD *)this = 0;
  *((float *)this + 1) = v8 + v9;
  *((float *)this + 2) = (float)(unsigned int)Width;
  *((float *)this + 3) = v8;
  return result;
}


// ============================================================

// Address: 0x2a34b0
// Original: _ZN22KeyboardControlsScreen11IsScrollingEv
// Demangled: KeyboardControlsScreen::IsScrolling(void)
bool __fastcall KeyboardControlsScreen::IsScrolling(KeyboardControlsScreen *this)
{
  float v1; // s16
  int v2; // r4

  v1 = *((float *)this + 16);
  v2 = 0;
  if ( v1 != 0.0 )
    return fabsf(*((float *)&gMobileMenu + 2 * lastDevice + 29) - v1) > (float)((*(float (__fastcall **)(KeyboardControlsScreen *, _DWORD))(*(_DWORD *)this + 68))(
                                                                                  this,
                                                                                  0)
                                                                              * 0.5);
  return v2;
}


// ============================================================

// Address: 0x2a3518
// Original: _ZN22KeyboardControlsScreen12WhitelistAddE10HIDMappingS0_
// Demangled: KeyboardControlsScreen::WhitelistAdd(HIDMapping,HIDMapping)
int __fastcall KeyboardControlsScreen::WhitelistAdd(int result, int a2, int a3)
{
  int v3; // r10
  unsigned int v4; // r12
  int v5; // r5
  unsigned int v6; // r4
  int v7; // r6
  int *v8; // r3
  int v9; // r0
  bool v10; // zf
  unsigned int *v11; // r4
  unsigned int v12; // r11
  _DWORD *v13; // r2
  _DWORD *v14; // r0
  void *v15; // r8
  _DWORD *v16; // r4
  _DWORD *v17; // r9
  _DWORD *v18; // r4
  int v19; // r5
  int *v20; // r8
  unsigned int v21; // r11
  _DWORD *v22; // r0
  void *v23; // r9
  _DWORD *v24; // r4
  _DWORD *v25; // r10
  unsigned int v26; // [sp+0h] [bp-28h]
  unsigned int *v27; // [sp+4h] [bp-24h]
  _DWORD *v28; // [sp+8h] [bp-20h]
  unsigned int *v29; // [sp+8h] [bp-20h]

  v3 = result;
  v4 = *(_DWORD *)(result + 56);
  if ( v4 )
  {
    v5 = -1;
    v6 = 0;
    v7 = -1;
    v8 = (int *)(*(_DWORD *)(result + 60) + 512);
    do
    {
      v9 = *v8;
      v8 += 133;
      if ( v9 == a3 )
        v5 = v6;
      if ( v9 == a2 )
        v7 = v6;
      ++v6;
    }
    while ( v6 < v4 );
    result = v7 + 1;
    v10 = v7 == -1;
    if ( v7 != -1 )
    {
      result = v5 + 1;
      v10 = v5 == -1;
    }
    if ( !v10 )
    {
      v11 = (unsigned int *)(*(_DWORD *)(v3 + 60) + 532 * v7);
      v12 = v11[131];
      v13 = v11 + 131;
      if ( v11[130] >= v12 + 1 )
      {
        v17 = (_DWORD *)v11[132];
      }
      else
      {
        v27 = v11 + 130;
        v28 = v11 + 131;
        v26 = 4 * (v12 + 1) / 3 + 3;
        v14 = malloc(4 * v26);
        v15 = (void *)v11[132];
        v16 = v11 + 132;
        v17 = v14;
        if ( v15 )
        {
          memcpy_0(v14, v15, 4 * v12);
          free(v15);
          v13 = v28;
          v12 = *v28;
        }
        else
        {
          v13 = v28;
        }
        *v27 = v26;
        *v16 = v17;
      }
      v17[v12] = v5;
      ++*v13;
      v18 = (_DWORD *)(*(_DWORD *)(v3 + 60) + 532 * v5);
      v19 = v18[131];
      v20 = v18 + 131;
      if ( v18[130] >= (unsigned int)(v19 + 1) )
      {
        v25 = (_DWORD *)v18[132];
      }
      else
      {
        v29 = v18 + 130;
        v21 = 4 * (v19 + 1) / 3u + 3;
        v22 = malloc(4 * v21);
        v23 = (void *)v18[132];
        v24 = v18 + 132;
        v25 = v22;
        if ( v23 )
        {
          memcpy_0(v22, v23, 4 * v19);
          free(v23);
          v19 = *v20;
        }
        *v29 = v21;
        *v24 = v25;
      }
      v25[v19] = v7;
      result = *v20 + 1;
      *v20 = result;
    }
  }
  return result;
}


// ============================================================

// Address: 0x2a372e
// Original: _ZN22KeyboardControlsScreen24KeyboardMappingSelectionD0Ev
// Demangled: KeyboardControlsScreen::KeyboardMappingSelection::~KeyboardMappingSelection()
// attributes: thunk
void __fastcall KeyboardControlsScreen::KeyboardMappingSelection::~KeyboardMappingSelection(
        KeyboardControlsScreen::KeyboardMappingSelection *this)
{
  operator delete(this);
}


// ============================================================

// Address: 0x2a3734
// Original: _ZN22KeyboardControlsScreen24KeyboardMappingSelection6RenderEP12SelectScreen9CVector2DS3_f
// Demangled: KeyboardControlsScreen::KeyboardMappingSelection::Render(SelectScreen *,CVector2D,CVector2D,float)
int __fastcall KeyboardControlsScreen::KeyboardMappingSelection::Render(
        const char **a1,
        KeyboardControlsScreen *a2,
        int a3,
        float a4,
        int a5,
        float a6,
        float a7)
{
  int v10; // s16
  int IsConflictedControl; // r6
  int v12; // r2
  int MappingFromTag; // r5
  int v14; // r2
  int v16; // r2
  int v17; // [sp+28h] [bp-48h] BYREF
  int v18; // [sp+2Ch] [bp-44h] BYREF
  _DWORD v19[2]; // [sp+30h] [bp-40h] BYREF
  int v20; // [sp+38h] [bp-38h] BYREF
  _DWORD v21[13]; // [sp+3Ch] [bp-34h] BYREF

  CRGBA::CRGBA((CRGBA *)&v20, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
  *(float *)&v10 = (float)((float)((float)(a6 * 0.5) + a4) + -8.0) - a7;
  if ( byte_6E01A8 == 1 )
  {
    if ( a7 <= 0.0 )
      CRGBA::CRGBA((CRGBA *)v19, 0x80u, 0x80u, 0x80u, 0x80u);
    else
      CRGBA::CRGBA((CRGBA *)v19, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
    v20 = v19[0];
  }
  IsConflictedControl = KeyboardControlsScreen::IsConflictedControl(a2, a1[1]);
  v12 = (*((int (__fastcall **)(const char **))*a1 + 5))(a1);
  v21[0] = v20;
  if ( IsConflictedControl == 1 )
  {
    MenuScreen::DrawTextDirect(
      (int)v19,
      (int)a2,
      v12,
      0,
      2,
      (int)v21,
      1,
      1108082688,
      v10,
      1133903872,
      COERCE_INT((float)(a7 + a7) + 16.0),
      0,
      0);
    MappingFromTag = KeyboardControlsScreen::GetMappingFromTag(a2, a1[1]);
    CRGBA::CRGBA((CRGBA *)&v18, 0xFFu, 0, 0, 0xFFu);
    v21[0] = v18;
    MenuScreen::DrawTextDirect(
      (int)v19,
      (int)a2,
      MappingFromTag,
      2,
      2,
      (int)v21,
      1,
      1135378432,
      v10,
      1133248512,
      COERCE_INT((float)(a7 + a7) + 16.0),
      0,
      0);
    CRGBA::CRGBA((CRGBA *)&v17, 0xFFu, 0, 0, 0xFFu);
    v14 = CText::Get((CText *)TheText, (CKeyGen *)"MOB_X99");
    v21[0] = v17;
    return MenuScreen::DrawTextDirect(
             (int)v19,
             (int)a2,
             v14,
             0,
             2,
             (int)v21,
             1,
             1101004800,
             v10,
             1092616192,
             COERCE_INT((float)(a7 + a7) + 16.0),
             0,
             0);
  }
  else
  {
    MenuScreen::DrawTextDirect(
      (int)v19,
      (int)a2,
      v12,
      0,
      2,
      (int)v21,
      1,
      1101004800,
      v10,
      1133903872,
      COERCE_INT((float)(a7 + a7) + 16.0),
      0,
      0);
    v16 = KeyboardControlsScreen::GetMappingFromTag(a2, a1[1]);
    v21[0] = v20;
    return MenuScreen::DrawTextDirect(
             (int)v19,
             (int)a2,
             v16,
             2,
             2,
             (int)v21,
             1,
             1135378432,
             v10,
             1133248512,
             COERCE_INT((float)(a7 + a7) + 16.0),
             0,
             0);
  }
}


// ============================================================

// Address: 0x2a39d8
// Original: _ZN22KeyboardControlsScreen24KeyboardMappingSelection11HandleInputEP12SelectScreenf
// Demangled: KeyboardControlsScreen::KeyboardMappingSelection::HandleInput(SelectScreen *,float)
int __fastcall KeyboardControlsScreen::KeyboardMappingSelection::HandleInput(
        KeyboardControlsScreen::KeyboardMappingSelection *this,
        SelectScreen *a2,
        float a3)
{
  int result; // r0

  if ( CHID::Implements() == 1 && CHID::IsReleased(64) || (result = *((_DWORD *)&gMobileMenu + lastDevice + 36)) == 0 )
  {
    if ( !NeedsAmazonDownload() )
      CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 1, 0.0, 1.0);
    return (*((int (__fastcall **)(SelectScreen *, _DWORD))this + 2))(a2, *((_DWORD *)this + 3));
  }
  return result;
}


// ============================================================

// Address: 0x2a3ae6
// Original: _ZN22KeyboardControlsScreen19IsConflictedControlEPKc
// Demangled: KeyboardControlsScreen::IsConflictedControl(char const*)
int __fastcall KeyboardControlsScreen::IsConflictedControl(KeyboardControlsScreen *this, const char *a2)
{
  unsigned int v4; // r6
  int v5; // r5
  int v6; // r4
  int MappingFromTag; // r6
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r1
  int v11; // r2
  int result; // r0

  v4 = *((_DWORD *)this + 6);
  if ( !v4 )
    return 0;
  v5 = 0;
  while ( strcasecmp(*(const char **)(*(_DWORD *)(*((_DWORD *)this + 7) + 4 * v5) + 4), a2) )
  {
LABEL_14:
    if ( ++v5 >= v4 )
      return 0;
  }
  v6 = 0;
  while ( 1 )
  {
    if ( v5 != v6 )
    {
      MappingFromTag = KeyboardControlsScreen::GetMappingFromTag(this, a2);
      if ( MappingFromTag == KeyboardControlsScreen::GetMappingFromTag(
                               this,
                               (const char *)(*((_DWORD *)this + 15) + 532 * v6)) )
        break;
    }
LABEL_11:
    v4 = *((_DWORD *)this + 6);
    if ( ++v6 >= v4 )
      goto LABEL_14;
  }
  v8 = *((_DWORD *)this + 15) + 532 * v5;
  v9 = *(_DWORD *)(v8 + 524);
  if ( v9 )
  {
    v10 = *(_DWORD *)(v8 + 528);
    v11 = 0;
    while ( *(_DWORD *)(v10 + 4 * v11) != v6 )
    {
      if ( ++v11 >= v9 )
        goto LABEL_16;
    }
    goto LABEL_11;
  }
LABEL_16:
  result = 1;
  *((_BYTE *)this + 144) = 1;
  return result;
}


// ============================================================

// Address: 0x2a3b80
// Original: _ZN22KeyboardControlsScreen17GetMappingFromTagEPKc
// Demangled: KeyboardControlsScreen::GetMappingFromTag(char const*)
int __fastcall KeyboardControlsScreen::GetMappingFromTag(KeyboardControlsScreen *this, const char *a2)
{
  CHID *v4; // r0
  unsigned int v5; // r5
  int v6; // r4
  const char *i; // r6

  v4 = (CHID *)CHID::m_pInstance[CHID::currentInstanceIndex];
  if ( !v4 )
    return j_CHIDKeyboard::GetMappingString();
  if ( CHID::GetInputType(v4) != 2 )
    return j_CHIDKeyboard::GetMappingString();
  v5 = *((_DWORD *)this + 14);
  if ( !v5 )
    return j_CHIDKeyboard::GetMappingString();
  v6 = 0;
  for ( i = (const char *)*((_DWORD *)this + 15); strcasecmp(i, a2); i += 532 )
  {
    if ( ++v6 >= v5 )
      return j_CHIDKeyboard::GetMappingString();
  }
  return j_CHIDKeyboard::GetMappingString();
}


// ============================================================

// Address: 0x2a3c0c
// Original: _ZN22KeyboardControlsScreen8RemapKeyE13OSKeyboardKey12MouseButtons
// Demangled: KeyboardControlsScreen::RemapKey(OSKeyboardKey,MouseButtons)
int __fastcall KeyboardControlsScreen::RemapKey(int a1, int a2, int a3)
{
  CHID *v6; // r0
  int v7; // r2
  CHIDKeyboard *v8; // r8
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r0
  int v13; // r1
  int result; // r0

  v6 = (CHID *)CHID::m_pInstance[CHID::currentInstanceIndex];
  if ( !v6 || CHID::GetInputType(v6) != 2 )
    goto LABEL_15;
  v7 = *(_DWORD *)(a1 + 60) + 532 * *(_DWORD *)(a1 + 44);
  v8 = (CHIDKeyboard *)CHID::m_pInstance[CHID::currentInstanceIndex];
  CHIDKeyboard::ReplaceMapping((int)v8, *(_DWORD *)(v7 + 512), a2, *(unsigned __int8 *)(v7 + 516), a3);
  v9 = *(_DWORD *)(a1 + 44);
  v10 = *(_DWORD *)(a1 + 60);
  v11 = *(_DWORD *)(v10 + 532 * v9 + 512);
  if ( v11 == 52 )
  {
    CHIDKeyboard::ReplaceMapping((int)v8, 33, a2, 0, a3);
    CHIDKeyboard::ReplaceMapping((int)v8, 51, a2, 0, a3);
    v9 = *(_DWORD *)(a1 + 44);
    v10 = *(_DWORD *)(a1 + 60);
    v11 = *(_DWORD *)(v10 + 532 * v9 + 512);
    if ( v11 != 23 )
    {
LABEL_5:
      if ( v11 != 54 )
        goto LABEL_6;
      goto LABEL_19;
    }
  }
  else if ( v11 != 23 )
  {
    goto LABEL_5;
  }
  CHIDKeyboard::ReplaceMapping((int)v8, 37, a2, 0, a3);
  CHIDKeyboard::ReplaceMapping((int)v8, 59, a2, 0, a3);
  CHIDKeyboard::ReplaceMapping((int)v8, 58, a2, 0, a3);
  v9 = *(_DWORD *)(a1 + 44);
  v10 = *(_DWORD *)(a1 + 60);
  v11 = *(_DWORD *)(v10 + 532 * v9 + 512);
  if ( v11 != 54 )
  {
LABEL_6:
    if ( v11 != 55 )
      goto LABEL_7;
    goto LABEL_20;
  }
LABEL_19:
  CHIDKeyboard::ReplaceMapping((int)v8, 83, a2, 0, a3);
  v9 = *(_DWORD *)(a1 + 44);
  v10 = *(_DWORD *)(a1 + 60);
  v11 = *(_DWORD *)(v10 + 532 * v9 + 512);
  if ( v11 != 55 )
  {
LABEL_7:
    if ( v11 != 50 )
      goto LABEL_8;
    goto LABEL_21;
  }
LABEL_20:
  CHIDKeyboard::ReplaceMapping((int)v8, 84, a2, 0, a3);
  v9 = *(_DWORD *)(a1 + 44);
  v10 = *(_DWORD *)(a1 + 60);
  v11 = *(_DWORD *)(v10 + 532 * v9 + 512);
  if ( v11 != 50 )
  {
LABEL_8:
    if ( v11 != 42 )
      goto LABEL_9;
    goto LABEL_22;
  }
LABEL_21:
  CHIDKeyboard::ReplaceMapping((int)v8, 40, a2, 0, a3);
  v9 = *(_DWORD *)(a1 + 44);
  v10 = *(_DWORD *)(a1 + 60);
  v11 = *(_DWORD *)(v10 + 532 * v9 + 512);
  if ( v11 != 42 )
  {
LABEL_9:
    if ( v11 != 43 )
      goto LABEL_10;
LABEL_23:
    CHIDKeyboard::ReplaceMapping((int)v8, 45, a2, 0, a3);
    v9 = *(_DWORD *)(a1 + 44);
    v10 = *(_DWORD *)(a1 + 60);
    if ( *(_DWORD *)(v10 + 532 * v9 + 512) == 24 )
      goto LABEL_11;
    goto LABEL_14;
  }
LABEL_22:
  CHIDKeyboard::ReplaceMapping((int)v8, 44, a2, 0, a3);
  v9 = *(_DWORD *)(a1 + 44);
  v10 = *(_DWORD *)(a1 + 60);
  v11 = *(_DWORD *)(v10 + 532 * v9 + 512);
  if ( v11 == 43 )
    goto LABEL_23;
LABEL_10:
  if ( v11 == 24 )
  {
LABEL_11:
    v12 = v10 + 532 * v9;
    v13 = 27;
    if ( *(_BYTE *)(v12 + 516) )
      v13 = 26;
    CHIDKeyboard::ReplaceMapping((int)v8, v13, a2, 0, a3);
  }
LABEL_14:
  CHIDKeyboard::SaveMappingsToDisk(v8);
LABEL_15:
  byte_6E01A8 = 0;
  result = NeedsAmazonDownload();
  if ( !result )
    return j_CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 1, 0.0, 1.0);
  return result;
}


// ============================================================

// Address: 0x2a3e2c
// Original: _ZN22KeyboardControlsScreen15ManageScrollingEf
// Demangled: KeyboardControlsScreen::ManageScrolling(float)
unsigned __int64 __fastcall KeyboardControlsScreen::ManageScrolling(KeyboardControlsScreen *this, float a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d2
  float32x2_t v4; // d8
  float v7; // r6
  bool v8; // zf
  float v9; // s16
  float v10; // r8
  float v11; // r6
  float v12; // r5
  float v13; // s22
  float v14; // s20
  float v15; // r5
  float v16; // s22
  char v17; // r0
  float v18; // s18
  float v19; // s20
  float v20; // s18
  float v21; // s20
  int v22; // r0
  int v23; // r1
  float v24; // s18
  float v25; // r5
  float v26; // s22
  unsigned __int64 result; // r0
  __int64 v28; // kr00_8
  int v29; // [sp+0h] [bp-40h] BYREF
  float v30; // [sp+4h] [bp-3Ch]
  float v31; // [sp+Ch] [bp-34h]

  v7 = COERCE_FLOAT(LIB_PointerGetWheel(0));
  *((float *)this + 17) = *((float *)this + 17)
                        + (float)((float)(v7
                                        * (*(float (__fastcall **)(KeyboardControlsScreen *, _DWORD))(*(_DWORD *)this + 68))(
                                            this,
                                            0))
                                * 0.5);
  if ( DownPressed() || UpPressed() == 1 )
    *((_BYTE *)this + 120) = 1;
  if ( *((_DWORD *)&gMobileMenu + lastDevice + 36) == 2 )
    *((_BYTE *)this + 120) = 0;
  (*(void (__fastcall **)(int *, KeyboardControlsScreen *))(*(_DWORD *)this + 76))(&v29, this);
  v8 = *((_BYTE *)this + 120) == 0;
  if ( *((_BYTE *)this + 120) )
    v8 = *((_DWORD *)this + 11) == -1;
  if ( !v8 )
  {
    v9 = a2;
    v10 = COERCE_FLOAT((*(int (__fastcall **)(KeyboardControlsScreen *))(*(_DWORD *)this + 64))(this));
    v11 = COERCE_FLOAT((*(int (__fastcall **)(KeyboardControlsScreen *))(*(_DWORD *)this + 60))(this));
    v12 = COERCE_FLOAT((*(int (__fastcall **)(KeyboardControlsScreen *, _DWORD))(*(_DWORD *)this + 68))(this, 0));
    v13 = v31;
    v14 = (float)(v10 + v11) + (float)(v12 * (float)*((int *)this + 11));
    if ( v14 < (float)(v13 * (float)(480.0 / (float)(unsigned int)OS_ScreenGetHeight())) )
      *((float *)this + 17) = *((float *)this + 17)
                            + (float)((float)((*(float (__fastcall **)(KeyboardControlsScreen *, _DWORD))(*(_DWORD *)this + 68))(
                                                this,
                                                0)
                                            * v9)
                                    * 7.5);
    v15 = COERCE_FLOAT((*(int (__fastcall **)(KeyboardControlsScreen *, _DWORD))(*(_DWORD *)this + 68))(this, 0));
    v16 = v30;
    if ( (float)(v14 + v15) > (float)(v16 * (float)(480.0 / (float)(unsigned int)OS_ScreenGetHeight())) )
      *((float *)this + 17) = *((float *)this + 17)
                            + (float)((float)((*(float (__fastcall **)(KeyboardControlsScreen *, _DWORD))(*(_DWORD *)this + 68))(
                                                this,
                                                0)
                                            * v9)
                                    * -7.5);
  }
  v17 = `guard variable for'KeyboardControlsScreen::ManageScrolling(float)::lastMouseCoords;
  __dmb(0xBu);
  if ( (v17 & 1) == 0
    && j___cxa_guard_acquire((__guard *)&`guard variable for'KeyboardControlsScreen::ManageScrolling(float)::lastMouseCoords) )
  {
    *(_QWORD *)&KeyboardControlsScreen::ManageScrolling(float)::lastMouseCoords = *((_QWORD *)&gMobileMenu
                                                                                  + lastDevice
                                                                                  + 14);
    j___cxa_guard_release((__guard *)&`guard variable for'KeyboardControlsScreen::ManageScrolling(float)::lastMouseCoords);
  }
  if ( *((_DWORD *)&gMobileMenu + lastDevice + 36) == 2 )
  {
    v18 = v31;
    v19 = *((float *)&gMobileMenu + 2 * lastDevice + 29);
    if ( v19 > (float)(v18 * (float)(480.0 / (float)(unsigned int)OS_ScreenGetHeight())) )
    {
      v20 = v30;
      v21 = *((float *)&gMobileMenu + 2 * lastDevice + 29);
      if ( v21 < (float)(v20 * (float)(480.0 / (float)(unsigned int)OS_ScreenGetHeight())) )
      {
        v22 = *((_DWORD *)&gMobileMenu + 2 * lastDevice + 29);
LABEL_25:
        *((_DWORD *)this + 16) = v22;
        goto LABEL_26;
      }
    }
  }
  v23 = *((_DWORD *)&gMobileMenu + lastDevice + 36);
  if ( v23 == 1 )
  {
    v22 = 0;
    goto LABEL_25;
  }
  if ( v23 == 3 && *((float *)this + 16) != 0.0 )
    *((float *)this + 17) = *((float *)this + 17) + (float)(*((float *)&gMobileMenu + 2 * lastDevice + 29) - unk_6E01B0);
LABEL_26:
  v4.n64_u32[0] = *((_DWORD *)this + 17);
  v24 = (float)*((unsigned int *)this + 14);
  v25 = COERCE_FLOAT((*(int (__fastcall **)(KeyboardControlsScreen *, _DWORD))(*(_DWORD *)this + 68))(this, 0));
  v26 = COERCE_FLOAT((*(int (__fastcall **)(KeyboardControlsScreen *))(*(_DWORD *)this + 72))(this));
  v3.n64_u32[0] = 0;
  v2.n64_f32[0] = (float)(v26 - (*(float (__fastcall **)(KeyboardControlsScreen *))(*(_DWORD *)this + 64))(this))
                - (float)(v25 * v24);
  *((_DWORD *)this + 17) = vmax_f32(vmin_f32(v4, v3), v2).n64_u32[0];
  v28 = *((_QWORD *)&gMobileMenu + lastDevice + 14);
  result = __PAIR64__(v28, HIDWORD(v28));
  *(_QWORD *)&KeyboardControlsScreen::ManageScrolling(float)::lastMouseCoords = v28;
  return result;
}


// ============================================================
