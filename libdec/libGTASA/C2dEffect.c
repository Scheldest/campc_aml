
// Address: 0x18be54
// Original: j__ZN9C2dEffect12PluginAttachEv
// Demangled: C2dEffect::PluginAttach(void)
// attributes: thunk
int __fastcall C2dEffect::PluginAttach(C2dEffect *this)
{
  return _ZN9C2dEffect12PluginAttachEv(this);
}


// ============================================================

// Address: 0x193ed8
// Original: j__ZN9C2dEffect30Roadsign_GetPaletteIDFromFlagsE18CRoadsignAttrFlags
// Demangled: C2dEffect::Roadsign_GetPaletteIDFromFlags(CRoadsignAttrFlags)
// attributes: thunk
int C2dEffect::Roadsign_GetPaletteIDFromFlags()
{
  return _ZN9C2dEffect30Roadsign_GetPaletteIDFromFlagsE18CRoadsignAttrFlags();
}


// ============================================================

// Address: 0x19c648
// Original: j__ZN9C2dEffect29Roadsign_GetNumLinesFromFlagsE18CRoadsignAttrFlags
// Demangled: C2dEffect::Roadsign_GetNumLinesFromFlags(CRoadsignAttrFlags)
// attributes: thunk
int C2dEffect::Roadsign_GetNumLinesFromFlags()
{
  return _ZN9C2dEffect29Roadsign_GetNumLinesFromFlagsE18CRoadsignAttrFlags();
}


// ============================================================

// Address: 0x1a1664
// Original: j__ZN9C2dEffect31Roadsign_GetNumLettersFromFlagsE18CRoadsignAttrFlags
// Demangled: C2dEffect::Roadsign_GetNumLettersFromFlags(CRoadsignAttrFlags)
// attributes: thunk
int C2dEffect::Roadsign_GetNumLettersFromFlags()
{
  return _ZN9C2dEffect31Roadsign_GetNumLettersFromFlagsE18CRoadsignAttrFlags();
}


// ============================================================

// Address: 0x59c8ec
// Original: _ZN9C2dEffect12PluginAttachEv
// Demangled: C2dEffect::PluginAttach(void)
bool __fastcall C2dEffect::PluginAttach(C2dEffect *this)
{
  g2dEffectPluginOffset = RpGeometryRegisterPlugin(
                            4,
                            0x253F2F8u,
                            (void *(*)(void *, int, int))sub_59C958,
                            (void *(*)(void *, int, int))sub_59C96C,
                            (void *(*)(void *, const void *, int, int))sub_59CA28);
  RpGeometryRegisterPluginStream();
  return g2dEffectPluginOffset != -1;
}


// ============================================================

// Address: 0x59ce98
// Original: _ZN9C2dEffect29Roadsign_GetNumLinesFromFlagsE18CRoadsignAttrFlags
// Demangled: C2dEffect::Roadsign_GetNumLinesFromFlags(CRoadsignAttrFlags)
int __fastcall C2dEffect::Roadsign_GetNumLinesFromFlags(char a1)
{
  int v1; // r0
  int result; // r0

  v1 = a1 & 3;
  switch ( v1 )
  {
    case 0:
      return 4;
    case 3:
      return 3;
    case 2:
      LOWORD(result) = 2;
      break;
    default:
      LOWORD(result) = 1;
      break;
  }
  return (unsigned __int16)result;
}


// ============================================================

// Address: 0x59ceba
// Original: _ZN9C2dEffect31Roadsign_GetNumLettersFromFlagsE18CRoadsignAttrFlags
// Demangled: C2dEffect::Roadsign_GetNumLettersFromFlags(CRoadsignAttrFlags)
int __fastcall C2dEffect::Roadsign_GetNumLettersFromFlags(unsigned int a1)
{
  int v1; // r0
  int result; // r0

  v1 = (a1 >> 2) & 3;
  switch ( v1 )
  {
    case 0:
      return 16;
    case 3:
      return 8;
    case 2:
      LOWORD(result) = 4;
      break;
    default:
      LOWORD(result) = 2;
      break;
  }
  return (unsigned __int16)result;
}


// ============================================================

// Address: 0x59cede
// Original: _ZN9C2dEffect30Roadsign_GetPaletteIDFromFlagsE18CRoadsignAttrFlags
// Demangled: C2dEffect::Roadsign_GetPaletteIDFromFlags(CRoadsignAttrFlags)
int __fastcall C2dEffect::Roadsign_GetPaletteIDFromFlags(unsigned int a1)
{
  int v1; // r0
  int result; // r0

  v1 = (a1 >> 4) & 3;
  switch ( v1 )
  {
    case 0:
      return 0;
    case 3:
      return 3;
    case 2:
      LOWORD(result) = 2;
      break;
    default:
      LOWORD(result) = 1;
      break;
  }
  return (unsigned __int16)result;
}


// ============================================================
