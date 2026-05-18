
// Address: 0x19d65c
// Original: j__ZN25CPostEffectsSaveStructure10CopyValuesEb
// Demangled: CPostEffectsSaveStructure::CopyValues(bool)
// attributes: thunk
int __fastcall CPostEffectsSaveStructure::CopyValues(CPostEffectsSaveStructure *this, bool a2)
{
  return _ZN25CPostEffectsSaveStructure10CopyValuesEb(this, a2);
}


// ============================================================

// Address: 0x48ff9c
// Original: _ZN25CPostEffectsSaveStructure10CopyValuesEb
// Demangled: CPostEffectsSaveStructure::CopyValues(bool)
unsigned int __fastcall CPostEffectsSaveStructure::CopyValues(unsigned int this, int a2)
{
  int v2; // r2
  int v3; // r5
  __int64 v4; // kr00_8
  int v5; // r2
  int v6; // r3
  int v7; // r2
  int v8; // r4
  __int64 v9; // kr08_8
  __int64 v10; // d17
  int v11; // r3
  int v12; // r4
  __int64 v13; // kr10_8
  __int64 v14; // kr18_8
  unsigned __int64 v15; // kr20_8
  __int64 v16; // d17
  int v17; // r2

  if ( a2 == 1 )
  {
    CPostEffects::m_colour1Multiplier = *(_DWORD *)this;
    CPostEffects::m_colour2Multiplier = *(_DWORD *)(this + 4);
    CPostEffects::SCREEN_EXTRA_MULT_CHANGE_RATE = *(_DWORD *)(this + 12);
    CPostEffects::SCREEN_EXTRA_MULT_BASE_CAP = *(_DWORD *)(this + 16);
    CPostEffects::SCREEN_EXTRA_MULT_BASE_MULT = *(_DWORD *)(this + 20);
    CPostEffects::m_colourLeftUOffset = *(_DWORD *)(this + 24);
    CPostEffects::m_colourRightUOffset = *(_DWORD *)(this + 28);
    CPostEffects::m_colourTopVOffset = *(_DWORD *)(this + 32);
    CPostEffects::m_colourBottomVOffset = *(_DWORD *)(this + 36);
    CPostEffects::m_bSeamRemover = *(_BYTE *)(this + 40);
    CPostEffects::m_bSeamRemoverSeamSearchMode = *(_BYTE *)(this + 41);
    CPostEffects::m_bSeamRemoverDebugMode = *(_BYTE *)(this + 42);
    v2 = *(_DWORD *)(this + 48);
    v3 = *(_DWORD *)(this + 52);
    CPostEffects::m_SeamRemoverMode = *(_DWORD *)(this + 44);
    CPostEffects::m_SeamRemoverShiftTopLeft = v2;
    CPostEffects::m_SeamRemoverShiftBottomRight = v3;
    CPostEffects::m_smokeyEnable = *(_BYTE *)(this + 56);
    v4 = *(_QWORD *)(this + 60);
    CPostEffects::m_smokeyStrength = *(_DWORD *)(this + 60);
    CPostEffects::m_smokeyDistance = HIDWORD(v4);
    CPostEffects::m_waterEnable = *(_BYTE *)(this + 68);
    CPostEffects::m_VisionFXDayNightBalance = *(_DWORD *)(this + 72);
    CPostEffects::m_bHeatHazeFX = *(_BYTE *)(this + 76);
    CPostEffects::m_bHeatHazeMaskModeTest = *(_BYTE *)(this + 77);
    CPostEffects::m_HeatHazeFXHourOfDayStart = *(_DWORD *)(this + 80);
    CPostEffects::m_HeatHazeFXHourOfDayEnd = *(_DWORD *)(this + 84);
    CPostEffects::m_fHeatHazeFXFadeSpeed = *(_DWORD *)(this + 88);
    CPostEffects::m_fHeatHazeFXInsideBuildingFadeSpeed = *(_DWORD *)(this + 92);
    CPostEffects::m_HeatHazeFXType = *(_DWORD *)(this + 96);
    CPostEffects::m_HeatHazeFXTypeLast = *(_DWORD *)(this + 100);
    CPostEffects::m_HeatHazeFXIntensity = *(_DWORD *)(this + 104);
    CPostEffects::m_HeatHazeFXRandomShift = *(_DWORD *)(this + 108);
    CPostEffects::m_HeatHazeFXSpeedMin = *(_DWORD *)(this + 112);
    CPostEffects::m_HeatHazeFXSpeedMax = *(_DWORD *)(this + 116);
    CPostEffects::m_HeatHazeFXScanSizeX = *(_DWORD *)(this + 120);
    CPostEffects::m_HeatHazeFXScanSizeY = *(_DWORD *)(this + 124);
    CPostEffects::m_HeatHazeFXRenderSizeX = *(_DWORD *)(this + 128);
    CPostEffects::m_HeatHazeFXRenderSizeY = *(_DWORD *)(this + 132);
    CPostEffects::m_bDarknessFilter = *(_BYTE *)(this + 136);
    v5 = *(_DWORD *)(this + 144);
    v6 = *(_DWORD *)(this + 148);
    CPostEffects::m_DarknessFilterAlpha = *(_DWORD *)(this + 140);
    CPostEffects::m_DarknessFilterAlphaDefault = v5;
    CPostEffects::m_DarknessFilterRadiosityIntensityLimit = v6;
    CPostEffects::m_bCCTV = *(_BYTE *)(this + 152);
    CPostEffects::m_CCTVcol = *(_BYTE *)(this + 153);
    byte_A4782A = *(_BYTE *)(this + 154);
    byte_A4782B = *(_BYTE *)(this + 155);
    byte_A4782C = *(_BYTE *)(this + 156);
    CPostEffects::m_bFog = *(_BYTE *)(this + 157);
    CPostEffects::m_bSpeedFX = *(_BYTE *)(this + 158);
    CPostEffects::m_bSpeedFXTestMode = *(_BYTE *)(this + 159);
    CPostEffects::m_SpeedFXAlpha = *(_DWORD *)(this + 160);
    CPostEffects::m_bSpeedFXUserFlag = *(_BYTE *)(this + 164);
    CPostEffects::m_bSpeedFXUserFlagCurrentFrame = *(_BYTE *)(this + 165);
    CPostEffects::m_fSpeedFXManualSpeedCurrentFrame = *(_DWORD *)(this + 168);
    CPostEffects::m_bInCutscene = *(_BYTE *)(this + 172);
    CPostEffects::m_bNightVision = *(_BYTE *)(this + 173);
    CPostEffects::m_NightVisionGrainStrength = *(_DWORD *)(this + 176);
    CPostEffects::m_NightVisionMainCol = *(_BYTE *)(this + 180);
    byte_A477EE = *(_BYTE *)(this + 181);
    byte_A477EF = *(_BYTE *)(this + 182);
    byte_A477F0 = *(_BYTE *)(this + 183);
    v7 = *(_DWORD *)(this + 188);
    v8 = *(_DWORD *)(this + 192);
    CPostEffects::m_fNightVisionSwitchOnFXTime = *(_DWORD *)(this + 184);
    CPostEffects::m_fNightVisionSwitchOnFXCount = v7;
    CPostEffects::m_fInfraredVisionSwitchOnFXCount = v8;
    CPostEffects::m_bInfraredVision = *(_BYTE *)(this + 196);
    v9 = *(_QWORD *)(this + 200);
    CPostEffects::m_InfraredVisionGrainStrength = *(_DWORD *)(this + 200);
    CPostEffects::m_fInfraredVisionFilterRadius = HIDWORD(v9);
    v10 = *(_QWORD *)(this + 216);
    CPostEffects::m_fInfraredVisionHeatObjectCol = *(_QWORD *)(this + 208);
    flt_6B21A8 = v10;
    CPostEffects::m_InfraredVisionCol = *(_DWORD *)(this + 224);
    CPostEffects::m_InfraredVisionMainCol = *(_DWORD *)(this + 228);
    CPostEffects::m_bRadiosity = *(_BYTE *)(this + 232);
    CPostEffects::m_bRadiosityLinearFilter = *(_BYTE *)(this + 233);
    CPostEffects::m_bRadiosityStripCopyMode = *(_BYTE *)(this + 234);
    CPostEffects::m_RadiosityPixelsX = *(_DWORD *)(this + 236);
    CPostEffects::m_RadiosityPixelsY = *(_DWORD *)(this + 240);
    CPostEffects::m_RadiosityFilterPasses = *(_DWORD *)(this + 244);
    CPostEffects::m_RadiosityRenderPasses = *(_DWORD *)(this + 248);
    CPostEffects::m_RadiosityIntensityLimit = *(_DWORD *)(this + 252);
    CPostEffects::m_RadiosityIntensity = *(_DWORD *)(this + 256);
    CPostEffects::m_RadiosityFilterUCorrection = *(_DWORD *)(this + 260);
    CPostEffects::m_RadiosityFilterVCorrection = *(_DWORD *)(this + 264);
    CPostEffects::m_bRadiosityDebug = *(_BYTE *)(this + 268);
    CPostEffects::m_bRadiosityBypassTimeCycleIntensityLimit = *(_BYTE *)(this + 269);
    CPostEffects::m_bDisableAllPostEffect = *(_BYTE *)(this + 270);
    CPostEffects::m_bSavePhotoFromScript = *(_BYTE *)(this + 271);
    CPostEffects::m_bGrainEnable = *(_BYTE *)(this + 272);
    CPostEffects::m_grainStrength = *(_DWORD *)(this + 276);
    CPostEffects::m_bHilightEnable = *(_BYTE *)(this + 280);
    v11 = *(_DWORD *)(this + 288);
    v12 = *(_DWORD *)(this + 292);
    CPostEffects::m_hilightStrength = *(_DWORD *)(this + 284);
    CPostEffects::m_hilightScale = v11;
    CPostEffects::m_hilightOffset = v12;
    CPostEffects::m_hilightMblur = *(_BYTE *)(this + 296);
    CPostEffects::m_waterStrength = *(_DWORD *)(this + 300);
    CPostEffects::m_xoffset = *(_DWORD *)(this + 304);
    CPostEffects::m_yoffset = *(_DWORD *)(this + 308);
    CPostEffects::m_waterSpeed = *(_DWORD *)(this + 312);
    CPostEffects::m_waterFreq = *(_DWORD *)(this + 316);
    CPostEffects::m_waterCol = *(_BYTE *)(this + 320);
    byte_A47848 = *(_BYTE *)(this + 321);
    byte_A47849 = *(_BYTE *)(this + 322);
    byte_A4784A = *(_BYTE *)(this + 323);
    CPostEffects::m_bWaterDepthDarkness = *(_BYTE *)(this + 324);
    v13 = *(_QWORD *)(this + 328);
    CPostEffects::m_fWaterFullDarknessDepth = *(_DWORD *)(this + 328);
    CPostEffects::m_fWaterFXStartUnderWaterness = HIDWORD(v13);
    CPostEffects::m_bRainEnable = *(_BYTE *)(this + 336);
    CPostEffects::m_bColorEnable = *(_BYTE *)(this + 337);
    v14 = *(_QWORD *)(this + 340);
    this = *(_DWORD *)(this + 344);
    v15 = __PAIR64__(this, v14);
    CPostEffects::m_defScreenYPosn = HIDWORD(v15);
    CPostEffects::m_defScreenXPosn = v15;
  }
  else
  {
    *(_DWORD *)this = CPostEffects::m_colour1Multiplier;
    *(_DWORD *)(this + 4) = CPostEffects::m_colour2Multiplier;
    *(_DWORD *)(this + 12) = CPostEffects::SCREEN_EXTRA_MULT_CHANGE_RATE;
    *(_DWORD *)(this + 16) = CPostEffects::SCREEN_EXTRA_MULT_BASE_CAP;
    *(_DWORD *)(this + 20) = CPostEffects::SCREEN_EXTRA_MULT_BASE_MULT;
    *(_DWORD *)(this + 24) = CPostEffects::m_colourLeftUOffset;
    *(_DWORD *)(this + 28) = CPostEffects::m_colourRightUOffset;
    *(_DWORD *)(this + 32) = CPostEffects::m_colourTopVOffset;
    *(_DWORD *)(this + 36) = CPostEffects::m_colourBottomVOffset;
    *(_BYTE *)(this + 40) = CPostEffects::m_bSeamRemover;
    *(_BYTE *)(this + 41) = CPostEffects::m_bSeamRemoverSeamSearchMode;
    *(_BYTE *)(this + 42) = CPostEffects::m_bSeamRemoverDebugMode;
    *(_DWORD *)(this + 44) = CPostEffects::m_SeamRemoverMode;
    *(_DWORD *)(this + 48) = CPostEffects::m_SeamRemoverShiftTopLeft;
    *(_DWORD *)(this + 52) = CPostEffects::m_SeamRemoverShiftBottomRight;
    *(_BYTE *)(this + 56) = CPostEffects::m_smokeyEnable;
    *(_DWORD *)(this + 60) = CPostEffects::m_smokeyStrength;
    *(_DWORD *)(this + 64) = CPostEffects::m_smokeyDistance;
    *(_BYTE *)(this + 68) = CPostEffects::m_waterEnable;
    *(_DWORD *)(this + 72) = CPostEffects::m_VisionFXDayNightBalance;
    *(_BYTE *)(this + 76) = CPostEffects::m_bHeatHazeFX;
    *(_BYTE *)(this + 77) = CPostEffects::m_bHeatHazeMaskModeTest;
    *(_DWORD *)(this + 80) = CPostEffects::m_HeatHazeFXHourOfDayStart;
    *(_DWORD *)(this + 84) = CPostEffects::m_HeatHazeFXHourOfDayEnd;
    *(_DWORD *)(this + 88) = CPostEffects::m_fHeatHazeFXFadeSpeed;
    *(_DWORD *)(this + 92) = CPostEffects::m_fHeatHazeFXInsideBuildingFadeSpeed;
    *(_DWORD *)(this + 96) = CPostEffects::m_HeatHazeFXType;
    *(_DWORD *)(this + 100) = CPostEffects::m_HeatHazeFXTypeLast;
    *(_DWORD *)(this + 104) = CPostEffects::m_HeatHazeFXIntensity;
    *(_DWORD *)(this + 108) = CPostEffects::m_HeatHazeFXRandomShift;
    *(_DWORD *)(this + 112) = CPostEffects::m_HeatHazeFXSpeedMin;
    *(_DWORD *)(this + 116) = CPostEffects::m_HeatHazeFXSpeedMax;
    *(_DWORD *)(this + 120) = CPostEffects::m_HeatHazeFXScanSizeX;
    *(_DWORD *)(this + 124) = CPostEffects::m_HeatHazeFXScanSizeY;
    *(_DWORD *)(this + 128) = CPostEffects::m_HeatHazeFXRenderSizeX;
    *(_DWORD *)(this + 132) = CPostEffects::m_HeatHazeFXRenderSizeY;
    *(_BYTE *)(this + 136) = CPostEffects::m_bDarknessFilter;
    *(_DWORD *)(this + 140) = CPostEffects::m_DarknessFilterAlpha;
    *(_DWORD *)(this + 144) = CPostEffects::m_DarknessFilterAlphaDefault;
    *(_DWORD *)(this + 148) = CPostEffects::m_DarknessFilterRadiosityIntensityLimit;
    *(_BYTE *)(this + 152) = CPostEffects::m_bCCTV;
    *(_BYTE *)(this + 153) = CPostEffects::m_CCTVcol;
    *(_BYTE *)(this + 154) = byte_A4782A;
    *(_BYTE *)(this + 155) = byte_A4782B;
    *(_BYTE *)(this + 156) = byte_A4782C;
    *(_BYTE *)(this + 157) = CPostEffects::m_bFog;
    *(_BYTE *)(this + 158) = CPostEffects::m_bSpeedFX;
    *(_BYTE *)(this + 159) = CPostEffects::m_bSpeedFXTestMode;
    *(_DWORD *)(this + 160) = CPostEffects::m_SpeedFXAlpha;
    *(_BYTE *)(this + 164) = CPostEffects::m_bSpeedFXUserFlag;
    *(_BYTE *)(this + 165) = CPostEffects::m_bSpeedFXUserFlagCurrentFrame;
    *(_DWORD *)(this + 168) = CPostEffects::m_fSpeedFXManualSpeedCurrentFrame;
    *(_BYTE *)(this + 172) = CPostEffects::m_bInCutscene;
    *(_BYTE *)(this + 173) = CPostEffects::m_bNightVision;
    *(_DWORD *)(this + 176) = CPostEffects::m_NightVisionGrainStrength;
    *(_BYTE *)(this + 180) = CPostEffects::m_NightVisionMainCol;
    *(_BYTE *)(this + 181) = byte_A477EE;
    *(_BYTE *)(this + 182) = byte_A477EF;
    *(_BYTE *)(this + 183) = byte_A477F0;
    *(_DWORD *)(this + 184) = CPostEffects::m_fNightVisionSwitchOnFXTime;
    *(_DWORD *)(this + 188) = CPostEffects::m_fNightVisionSwitchOnFXCount;
    *(_DWORD *)(this + 192) = CPostEffects::m_fInfraredVisionSwitchOnFXCount;
    *(_BYTE *)(this + 196) = CPostEffects::m_bInfraredVision;
    *(_DWORD *)(this + 200) = CPostEffects::m_InfraredVisionGrainStrength;
    *(_DWORD *)(this + 204) = CPostEffects::m_fInfraredVisionFilterRadius;
    v16 = flt_6B21A8;
    *(_QWORD *)(this + 208) = CPostEffects::m_fInfraredVisionHeatObjectCol;
    *(_QWORD *)(this + 216) = v16;
    *(_DWORD *)(this + 224) = CPostEffects::m_InfraredVisionCol;
    *(_DWORD *)(this + 228) = CPostEffects::m_InfraredVisionMainCol;
    *(_BYTE *)(this + 232) = CPostEffects::m_bRadiosity;
    *(_BYTE *)(this + 233) = CPostEffects::m_bRadiosityLinearFilter;
    *(_BYTE *)(this + 234) = CPostEffects::m_bRadiosityStripCopyMode;
    *(_DWORD *)(this + 236) = CPostEffects::m_RadiosityPixelsX;
    *(_DWORD *)(this + 240) = CPostEffects::m_RadiosityPixelsY;
    *(_DWORD *)(this + 244) = CPostEffects::m_RadiosityFilterPasses;
    *(_DWORD *)(this + 248) = CPostEffects::m_RadiosityRenderPasses;
    *(_DWORD *)(this + 252) = CPostEffects::m_RadiosityIntensityLimit;
    *(_DWORD *)(this + 256) = CPostEffects::m_RadiosityIntensity;
    *(_DWORD *)(this + 260) = CPostEffects::m_RadiosityFilterUCorrection;
    *(_DWORD *)(this + 264) = CPostEffects::m_RadiosityFilterVCorrection;
    *(_BYTE *)(this + 268) = CPostEffects::m_bRadiosityDebug;
    *(_BYTE *)(this + 269) = CPostEffects::m_bRadiosityBypassTimeCycleIntensityLimit;
    *(_BYTE *)(this + 270) = CPostEffects::m_bDisableAllPostEffect;
    *(_BYTE *)(this + 271) = CPostEffects::m_bSavePhotoFromScript;
    *(_BYTE *)(this + 272) = CPostEffects::m_bGrainEnable;
    *(_DWORD *)(this + 276) = CPostEffects::m_grainStrength;
    *(_BYTE *)(this + 280) = CPostEffects::m_bHilightEnable;
    *(_DWORD *)(this + 284) = CPostEffects::m_hilightStrength;
    *(_DWORD *)(this + 288) = CPostEffects::m_hilightScale;
    *(_DWORD *)(this + 292) = CPostEffects::m_hilightOffset;
    *(_BYTE *)(this + 296) = CPostEffects::m_hilightMblur;
    *(_DWORD *)(this + 300) = CPostEffects::m_waterStrength;
    *(_DWORD *)(this + 304) = CPostEffects::m_xoffset;
    *(_DWORD *)(this + 308) = CPostEffects::m_yoffset;
    *(_DWORD *)(this + 312) = CPostEffects::m_waterSpeed;
    *(_DWORD *)(this + 316) = CPostEffects::m_waterFreq;
    *(_BYTE *)(this + 320) = CPostEffects::m_waterCol;
    *(_BYTE *)(this + 321) = byte_A47848;
    *(_BYTE *)(this + 322) = byte_A47849;
    *(_BYTE *)(this + 323) = byte_A4784A;
    *(_BYTE *)(this + 324) = CPostEffects::m_bWaterDepthDarkness;
    *(_DWORD *)(this + 328) = CPostEffects::m_fWaterFullDarknessDepth;
    *(_DWORD *)(this + 332) = CPostEffects::m_fWaterFXStartUnderWaterness;
    *(_BYTE *)(this + 336) = CPostEffects::m_bRainEnable;
    *(_BYTE *)(this + 337) = CPostEffects::m_bColorEnable;
    v17 = CPostEffects::m_defScreenYPosn;
    *(_DWORD *)(this + 340) = CPostEffects::m_defScreenXPosn;
    *(_DWORD *)(this + 344) = v17;
  }
  return this;
}


// ============================================================
