
// Address: 0x18b834
// Original: j__ZN14MobileSettings13IsFreeAimModeEv
// Demangled: MobileSettings::IsFreeAimMode(void)
// attributes: thunk
int __fastcall MobileSettings::IsFreeAimMode(MobileSettings *this)
{
  return _ZN14MobileSettings13IsFreeAimModeEv(this);
}


// ============================================================

// Address: 0x18f354
// Original: j__ZN14MobileSettings12IsLockOnModeEv
// Demangled: MobileSettings::IsLockOnMode(void)
// attributes: thunk
int __fastcall MobileSettings::IsLockOnMode(MobileSettings *this)
{
  return _ZN14MobileSettings12IsLockOnModeEv(this);
}


// ============================================================

// Address: 0x1982a0
// Original: j__ZN14MobileSettings14GetMaxResWidthEv
// Demangled: MobileSettings::GetMaxResWidth(void)
// attributes: thunk
int __fastcall MobileSettings::GetMaxResWidth(MobileSettings *this)
{
  return _ZN14MobileSettings14GetMaxResWidthEv();
}


// ============================================================

// Address: 0x19bb1c
// Original: j__ZN14MobileSettings10InitializeEv
// Demangled: MobileSettings::Initialize(void)
// attributes: thunk
int __fastcall MobileSettings::Initialize(MobileSettings *this)
{
  return _ZN14MobileSettings10InitializeEv(this);
}


// ============================================================

// Address: 0x19bdd4
// Original: j__ZN14MobileSettings12LoadFromFileEj
// Demangled: MobileSettings::LoadFromFile(uint)
// attributes: thunk
int __fastcall MobileSettings::LoadFromFile(MobileSettings *this, unsigned int a2)
{
  return _ZN14MobileSettings12LoadFromFileEj(this, a2);
}


// ============================================================

// Address: 0x19d010
// Original: j__ZN14MobileSettings19SetRendererDefaultsEv
// Demangled: MobileSettings::SetRendererDefaults(void)
// attributes: thunk
int __fastcall MobileSettings::SetRendererDefaults(MobileSettings *this)
{
  return _ZN14MobileSettings19SetRendererDefaultsEv(this);
}


// ============================================================

// Address: 0x19dbb0
// Original: j__ZN14MobileSettings10SaveToFileEj
// Demangled: MobileSettings::SaveToFile(uint)
// attributes: thunk
int __fastcall MobileSettings::SaveToFile(MobileSettings *this, unsigned int a2)
{
  return _ZN14MobileSettings10SaveToFileEj(this, a2);
}


// ============================================================

// Address: 0x2abe34
// Original: _ZN14MobileSettings10InitializeEv
// Demangled: MobileSettings::Initialize(void)
int __fastcall MobileSettings::Initialize(MobileSettings *this)
{
  char *v1; // r1
  int *v2; // r0
  int v3; // r2
  int *v4; // r5
  int v5; // r4
  char **v6; // r4
  int v7; // r0
  int v8; // r1
  int v9; // r4
  int v10; // r1
  int v11; // r2
  int v12; // r0
  int v13; // r2
  int v14; // r0
  int v15; // r2
  int v16; // r1
  int v17; // r2
  int v18; // r0
  int result; // r0
  int *v20; // r2

  v1 = defaultName[0];
  v2 = &dword_685918;
  v3 = 0;
  do
  {
    v4 = &MobileSettings::settings[v3];
    v4[2] = *(v2 - 3);
    v4[4] = *(v2 - 2);
    v4[5] = *(v2 - 1);
    v4[7] = *v2;
    v5 = v2[1];
    if ( !v5 )
      v5 = (int)v1;
    MobileSettings::settings[v3] = v5;
    v3 += 8;
    v6 = (char **)v2[2];
    v2 += 7;
    *((_BYTE *)v4 + 24) = 1;
    if ( !v6 )
      v6 = defaultValues;
    v4[1] = (int)v6;
  }
  while ( v3 != 296 );
  switch ( OS_SystemChip() )
  {
    case 0:
    case 1:
      v10 = 0;
      v11 = 20;
      dword_6E041C = 0;
      goto LABEL_28;
    case 2:
      v12 = OS_SystemForm();
      v13 = 80;
      dword_6E041C = 75;
      dword_6E03FC = 1;
      if ( v12 == 1 )
        v13 = 65;
      dword_6E043C = v13;
      dword_6E049C = 1;
      dword_6E04DC = 1;
      break;
    case 3:
      dword_6E041C = 60;
      dword_6E03FC = 2;
      dword_6E043C = 100;
      v10 = 1;
      goto LABEL_29;
    case 4:
      v14 = OS_SystemDevice();
      v15 = 100;
      if ( v14 == 9 )
        v15 = 75;
      v16 = 100;
      dword_6E041C = v15;
      v17 = 2;
      if ( v14 == 9 )
        v17 = 1;
      dword_6E03FC = v17;
      if ( v14 == 9 )
        v16 = 65;
      dword_6E043C = v16;
      dword_6E049C = v17;
      dword_6E04DC = v17;
      break;
    case 5:
      dword_6E041C = 80;
      dword_6E03FC = 3;
      dword_6E043C = 100;
      v10 = 2;
      goto LABEL_29;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 18:
      dword_6E03FC = 3;
      v7 = OS_SystemForm();
      dword_6E043C = 100;
      v8 = 80;
      if ( v7 == 1 )
        v8 = 100;
      dword_6E041C = v8;
      dword_6E049C = 2;
      dword_6E04DC = 3;
      break;
    case 12:
      v9 = 16000;
      goto LABEL_31;
    case 13:
      v9 = 48000;
      dword_6E041C = 80;
      dword_6E03FC = 2;
      dword_6E043C = 80;
      dword_6E049C = 1;
      dword_6E04DC = 2;
      goto LABEL_32;
    case 14:
    case 15:
    case 16:
      v9 = 64000;
      dword_6E041C = 100;
      dword_6E03FC = 2;
      dword_6E043C = 60;
      dword_6E049C = 2;
      dword_6E04DC = 3;
      goto LABEL_32;
    case 17:
      v11 = 55;
      dword_6E041C = 50;
      v10 = 1;
LABEL_28:
      dword_6E03FC = v10;
      dword_6E043C = v11;
LABEL_29:
      dword_6E049C = v10;
      dword_6E04DC = v10;
      break;
    case 19:
      v9 = 32000;
LABEL_31:
      dword_6E041C = 70;
      dword_6E03FC = 2;
      dword_6E043C = 55;
      dword_6E049C = 1;
LABEL_32:
      v18 = v9 / (OS_ScreenGetWidth() - 640);
      if ( v18 <= 0 )
        v18 = 0;
      if ( v18 >= 100 )
        v18 = 100;
      dword_6E041C = v18;
      break;
    default:
      break;
  }
  for ( result = 0; result != 296; result += 8 )
  {
    v20 = &MobileSettings::settings[result];
    v20[3] = v20[2];
  }
  return result * 4;
}


// ============================================================

// Address: 0x2ac07c
// Original: _ZN14MobileSettings14GetMaxResWidthEv
// Demangled: MobileSettings::GetMaxResWidth(void)
// attributes: thunk
int MobileSettings::GetMaxResWidth(void)
{
  return sub_19F1FC();
}


// ============================================================

// Address: 0x2ac080
// Original: _ZN14MobileSettings10SaveToFileEj
// Demangled: MobileSettings::SaveToFile(uint)
int __fastcall MobileSettings::SaveToFile(MobileSettings *this, unsigned int a2, int a3, int a4)
{
  int v5; // r3
  int i; // r5
  int result; // r0
  int v8[5]; // [sp+4h] [bp-14h] BYREF

  v8[0] = 37;
  CFileMgr::Write(this, (unsigned int)v8, &byte_4, a4);
  for ( i = 2; i != 298; i += 8 )
    result = CFileMgr::Write(this, (unsigned int)&MobileSettings::settings[i], &byte_4, v5);
  return result;
}


// ============================================================

// Address: 0x2ac0c0
// Original: _ZN14MobileSettings19SetRendererDefaultsEv
// Demangled: MobileSettings::SetRendererDefaults(void)
int __fastcall MobileSettings::SetRendererDefaults(MobileSettings *this)
{
  int result; // r0
  char *v2; // r2

  if ( byte_6B8BAA )
  {
    dword_6E04A0 = 0;
    dword_6E0400 = 1;
    dword_6E04E0 = 1;
    if ( byte_6B8BA1 )
      dword_6E07C0 = 1;
  }
  else if ( OS_SystemChip() != 17 && ((unsigned __int8)byte_6B8BA1 | (unsigned __int8)byte_6B8BA0) << 24 )
  {
    dword_6E0400 = 1;
    dword_6E04A0 = 0;
  }
  result = (unsigned __int8)MobileSettings::loaded;
  if ( !MobileSettings::loaded )
  {
    for ( result = 0; result != 1184; result += 32 )
    {
      v2 = (char *)MobileSettings::settings + result;
      *((_DWORD *)v2 + 2) = *((_DWORD *)v2 + 3);
    }
  }
  return result;
}


// ============================================================

// Address: 0x2ac16c
// Original: _ZN14MobileSettings12LoadFromFileEj
// Demangled: MobileSettings::LoadFromFile(uint)
int __fastcall MobileSettings::LoadFromFile(MobileSettings *this, unsigned int a2)
{
  int result; // r0
  int v4; // r5
  char *v5; // r6
  int *v6; // r4
  int v7; // t1
  int *v8; // r0
  int v9; // [sp+0h] [bp-20h] BYREF
  int ptr[7]; // [sp+4h] [bp-1Ch] BYREF

  ptr[0] = 0;
  MobileSettings::loaded = 1;
  OS_FileRead(this, ptr, 4u);
  result = ptr[0];
  if ( ptr[0] >= 1 )
  {
    v4 = 0;
    v5 = &byte_685924;
    v6 = &dword_6E03FC;
    do
    {
      v9 = 0;
      OS_FileRead(this, &v9, 4u);
      v7 = (unsigned __int8)*v5;
      v5 += 28;
      ++v4;
      v8 = &v9;
      if ( v7 )
        v8 = v6 + 1;
      *v6 = *v8;
      v6 += 8;
      result = ptr[0];
    }
    while ( v4 < ptr[0] );
  }
  return result;
}


// ============================================================

// Address: 0x2ac1f0
// Original: _ZN14MobileSettings13IsFreeAimModeEv
// Demangled: MobileSettings::IsFreeAimMode(void)
int __fastcall MobileSettings::IsFreeAimMode(MobileSettings *this)
{
  return 1;
}


// ============================================================

// Address: 0x2ac214
// Original: _ZN14MobileSettings12IsLockOnModeEv
// Demangled: MobileSettings::IsLockOnMode(void)
int __fastcall MobileSettings::IsLockOnMode(MobileSettings *this)
{
  return 0;
}


// ============================================================
