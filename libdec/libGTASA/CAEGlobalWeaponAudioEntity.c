
// Address: 0x1903fc
// Original: j__ZN26CAEGlobalWeaponAudioEntity13AddAudioEventEi11eWeaponTypeP9CPhysical
// Demangled: CAEGlobalWeaponAudioEntity::AddAudioEvent(int,eWeaponType,CPhysical *)
// attributes: thunk
int CAEGlobalWeaponAudioEntity::AddAudioEvent(void)
{
  return _ZN26CAEGlobalWeaponAudioEntity13AddAudioEventEi11eWeaponTypeP9CPhysical();
}


// ============================================================

// Address: 0x1992c4
// Original: j__ZN26CAEGlobalWeaponAudioEntity21ServiceAmbientGunFireEv
// Demangled: CAEGlobalWeaponAudioEntity::ServiceAmbientGunFire(void)
// attributes: thunk
int __fastcall CAEGlobalWeaponAudioEntity::ServiceAmbientGunFire(CAEGlobalWeaponAudioEntity *this)
{
  return _ZN26CAEGlobalWeaponAudioEntity21ServiceAmbientGunFireEv(this);
}


// ============================================================

// Address: 0x39742c
// Original: _ZN26CAEGlobalWeaponAudioEntity13AddAudioEventEi11eWeaponTypeP9CPhysical
// Demangled: CAEGlobalWeaponAudioEntity::AddAudioEvent(int,eWeaponType,CPhysical *)
CAEWeaponAudioEntity *__fastcall CAEGlobalWeaponAudioEntity::AddAudioEvent(
        CAEWeaponAudioEntity *result,
        int a2,
        int a3,
        CPhysical *a4)
{
  if ( a4 )
  {
    switch ( a2 )
    {
      case 145:
      case 149:
        result = (CAEWeaponAudioEntity *)sub_18B954(result, a3, a4, a2);
        break;
      case 146:
      case 147:
        result = (CAEWeaponAudioEntity *)sub_19B8F4();
        break;
      case 148:
        result = (CAEWeaponAudioEntity *)CAEGlobalWeaponAudioEntity::ProjectileFire(result, a3, a4, 148);
        break;
    }
  }
  return result;
}


// ============================================================

// Address: 0x397474
// Original: _ZN26CAEGlobalWeaponAudioEntity14ProjectileFireE11eWeaponTypeP9CPhysicali
// Demangled: CAEGlobalWeaponAudioEntity::ProjectileFire(eWeaponType,CPhysical *,int)
int __fastcall CAEGlobalWeaponAudioEntity::ProjectileFire(int a1, int a2, CEntity *a3)
{
  int result; // r0
  unsigned __int16 v6; // r1
  __int16 v7; // r2

  result = a2 - 19;
  if ( (unsigned int)(a2 - 19) <= 1 )
  {
    *(_BYTE *)(a1 + 164) = (*(char *)(a1 + 164) + 1) % 3;
    if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x8Fu, 5) )
    {
      CAESound::Initialise();
      CAESound::RegisterWithPhysicalEntity((CEntity **)(a1 + 8), a3);
      CAESoundManager::RequestNewSound((CAESoundManager *)&AESoundManager, (CAESound *)(a1 + 8));
      if ( CAEAudioHardware::IsSoundBankLoaded((CAEAudioHardware *)AEAudioHardware, 0x8Au, 19) )
      {
        CAESound::Initialise();
        CAESound::RegisterWithPhysicalEntity((CEntity **)(a1 + 8), a3);
        return sub_19F824((CAESoundManager *)&AESoundManager, (CAESound *)(a1 + 8));
      }
      v6 = 138;
      v7 = 19;
      return sub_18B078((CAEAudioHardware *)AEAudioHardware, v6, v7);
    }
    result = CAudioEngine::IsLoadingTuneActive((CAudioEngine *)&AudioEngine);
    if ( !result )
    {
      v6 = 143;
      v7 = 5;
      return sub_18B078((CAEAudioHardware *)AEAudioHardware, v6, v7);
    }
  }
  return result;
}


// ============================================================

// Address: 0x397650
// Original: _ZN26CAEGlobalWeaponAudioEntity16UpdateParametersEP8CAESounds
// Demangled: CAEGlobalWeaponAudioEntity::UpdateParameters(CAESound *,short)
int *__fastcall CAEGlobalWeaponAudioEntity::UpdateParameters(CAEGlobalWeaponAudioEntity *this, CAESound *a2, int a3)
{
  int *result; // r0

  result = (int *)(a3 + 1);
  if ( a3 == -1 )
  {
    if ( (CAESound *)pFogHorn == a2 )
    {
      result = &pFogHorn;
    }
    else
    {
      result = &pWaterfall;
      if ( (CAESound *)pWaterfall != a2 )
      {
        result = &dword_944588;
        if ( (CAESound *)dword_944588 != a2 )
        {
          result = &dword_94458C;
          if ( (CAESound *)dword_94458C != a2 )
            return result;
        }
      }
    }
    *result = 0;
  }
  return result;
}


// ============================================================

// Address: 0x3976ac
// Original: _ZN26CAEGlobalWeaponAudioEntity21ServiceAmbientGunFireEv
// Demangled: CAEGlobalWeaponAudioEntity::ServiceAmbientGunFire(void)
int __fastcall CAEGlobalWeaponAudioEntity::ServiceAmbientGunFire(CAEGlobalWeaponAudioEntity *this)
{
  return 0;
}


// ============================================================

// Address: 0x398200
// Original: _ZN26CAEGlobalWeaponAudioEntity18PickAmbientGunFireERiR11eWeaponTypeS0_
// Demangled: CAEGlobalWeaponAudioEntity::PickAmbientGunFire(int &,eWeaponType &,int &)
int __fastcall CAEGlobalWeaponAudioEntity::PickAmbientGunFire(int a1, int *a2, _DWORD *a3, int *a4)
{
  int result; // r0
  int v8; // r2
  int v9; // r2
  CAEAudioUtility *v10; // r0
  int v11; // r1

  result = CAEAudioUtility::GetRandomNumberInRange(0, 1, (int)a3);
  if ( result == 1 )
  {
    *a2 = CAEAudioUtility::GetRandomNumberInRange((CAEAudioUtility *)((char *)&stderr + 2), 4, v8);
    *a3 = 22;
    v10 = (CAEAudioUtility *)&elf_hash_bucket[62];
    v11 = 1200;
  }
  else
  {
    if ( result )
      return result;
    *a2 = CAEAudioUtility::GetRandomNumberInRange((CAEAudioUtility *)&byte_4, 14, v8);
    *a3 = 30;
    v10 = (CAEAudioUtility *)(&dword_58 + 2);
    v11 = 350;
  }
  result = CAEAudioUtility::GetRandomNumberInRange(v10, v11, v9);
  *a4 = result;
  return result;
}


// ============================================================
