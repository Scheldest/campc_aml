
// Address: 0x194308
// Original: j__ZN12CHIDJoystick11GetButtonIDE10HIDMapping
// Demangled: CHIDJoystick::GetButtonID(HIDMapping)
// attributes: thunk
int CHIDJoystick::GetButtonID()
{
  return _ZN12CHIDJoystick11GetButtonIDE10HIDMapping();
}


// ============================================================

// Address: 0x19bfbc
// Original: j__ZN12CHIDJoystick10AddMappingEi10HIDMapping
// Demangled: CHIDJoystick::AddMapping(int,HIDMapping)
// attributes: thunk
int CHIDJoystick::AddMapping()
{
  return _ZN12CHIDJoystick10AddMappingEi10HIDMapping();
}


// ============================================================

// Address: 0x19e838
// Original: j__ZN12CHIDJoystickC2EPKc
// Demangled: CHIDJoystick::CHIDJoystick(char const*)
// attributes: thunk
void __fastcall CHIDJoystick::CHIDJoystick(CHIDJoystick *this, const char *a2)
{
  _ZN12CHIDJoystickC2EPKc(this, a2);
}


// ============================================================

// Address: 0x28cc78
// Original: _ZN12CHIDJoystickC2EPKc
// Demangled: CHIDJoystick::CHIDJoystick(char const*)
void __fastcall CHIDJoystick::CHIDJoystick(CHIDJoystick *this, char *a2)
{
  CTouchInterface *TextureDB; // r8
  TextureDatabaseRuntime *v5; // r1

  CHID::CHID(this);
  *(_DWORD *)this = &off_6620EC;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  CSprite2d::CSprite2d((CHIDJoystick *)((char *)this + 16));
  CHIDJoystick::m_bInstanceEverCreated = 1;
  if ( a2 )
  {
    TextureDB = (CTouchInterface *)CTouchInterface::LoadTextureDB((CTouchInterface *)&CHIDJoystick::m_bInstanceEverCreated);
    CSprite2d::SetTexture((CHIDJoystick *)((char *)this + 16), a2);
    CTouchInterface::UnloadTextureDB(TextureDB, v5);
  }
  *((_BYTE *)this + 20) = 0;
}


// ============================================================

// Address: 0x28cce0
// Original: _ZN12CHIDJoystick20InternalDrawHelpIconEPKc10HIDMappingfffib
// Demangled: CHIDJoystick::InternalDrawHelpIcon(char const*,HIDMapping,float,float,float,int,bool)
int __fastcall CHIDJoystick::InternalDrawHelpIcon(
        _DWORD *a1,
        int a2,
        int a3,
        float a4,
        float a5,
        float a6,
        unsigned __int8 a7,
        int a8)
{
  int result; // r0
  int v12; // r4
  _BYTE v14[4]; // [sp+1Ch] [bp-4Ch] BYREF
  float v15[4]; // [sp+20h] [bp-48h] BYREF
  int v16; // [sp+30h] [bp-38h] BYREF
  float v17; // [sp+34h] [bp-34h]
  float v18; // [sp+38h] [bp-30h]
  float v19; // [sp+3Ch] [bp-2Ch]

  v12 = (int)(a1 + 4);
  result = a1[4];
  if ( result )
  {
    (*(void (__fastcall **)(int *, _DWORD *, int, int, int))(*a1 + 84))(&v16, a1, a2, a3, a8);
    v15[3] = a5;
    v15[0] = a4;
    v15[2] = a4 + a6;
    v15[1] = a5 + a6;
    CRGBA::CRGBA((CRGBA *)v14, 0xC0u, 0xC0u, 0xC0u, a7);
    return CSprite2d::Draw(v12, (int)v15, (int)v14, v16, v19, v18, v19, *(float *)&v16, v17, v18, v17);
  }
  return result;
}


// ============================================================

// Address: 0x28cd8a
// Original: _ZN12CHIDJoystick21InternalGetHelpSpriteEPKc10HIDMappingP9CVector2DS4_
// Demangled: CHIDJoystick::InternalGetHelpSprite(char const*,HIDMapping,CVector2D *,CVector2D *)
int __fastcall CHIDJoystick::InternalGetHelpSprite(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int v7; // r2
  int v8; // r1
  _DWORD v10[6]; // [sp+8h] [bp-18h] BYREF

  (*(void (__fastcall **)(_DWORD *, int, int, int, _DWORD))(*(_DWORD *)a1 + 84))(v10, a1, a2, a3, 0);
  if ( a4 )
  {
    v7 = v10[3];
    *a4 = v10[0];
    a4[1] = v7;
  }
  if ( a5 )
  {
    v8 = v10[1];
    *a5 = v10[2];
    a5[1] = v8;
  }
  return a1 + 16;
}


// ============================================================

// Address: 0x28cdca
// Original: _ZN12CHIDJoystick18InternalImplementsE10HIDMapping
// Demangled: CHIDJoystick::InternalImplements(HIDMapping)
int __fastcall CHIDJoystick::InternalImplements(int a1, int a2)
{
  unsigned int v2; // r12
  unsigned int v4; // r3
  _DWORD *v5; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( !v2 )
    return 0;
  v4 = 0;
  v5 = (_DWORD *)(*(_DWORD *)(a1 + 12) + 4);
  do
  {
    if ( *v5 == a2 )
      return 1;
    ++v4;
    v5 += 5;
  }
  while ( v4 < v2 );
  return 0;
}


// ============================================================

// Address: 0x28cdf8
// Original: _ZN12CHIDJoystick16InternalReplacesE10HIDMapping
// Demangled: CHIDJoystick::InternalReplaces(HIDMapping)
int __fastcall CHIDJoystick::InternalReplaces(int (__fastcall ***a1)(_DWORD), int a2)
{
  int result; // r0

  if ( CCheat::m_bShowMappings )
    return 0;
  switch ( a2 )
  {
    case 12:
    case 13:
    case 14:
    case 15:
    case 17:
    case 22:
    case 34:
    case 35:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 50:
    case 56:
    case 57:
    case 58:
    case 59:
    case 62:
    case 63:
    case 64:
    case 65:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 83:
    case 84:
      return 0;
    default:
      result = (**a1)(a1);
      break;
  }
  return result;
}


// ============================================================

// Address: 0x28ce6c
// Original: _ZN12CHIDJoystick25InternalCacheAnalogValuesEj
// Demangled: CHIDJoystick::InternalCacheAnalogValues(uint)
unsigned int __fastcall CHIDJoystick::InternalCacheAnalogValues(CHIDJoystick *this, unsigned int a2)
{
  unsigned int result; // r0
  int v5; // r6
  unsigned int i; // r4
  int v7; // r1
  double v8; // r0
  float v9; // s0
  int v10; // r0
  int v11; // r0
  double v12; // r0
  float v13; // s0
  int v14; // r0

  result = *((_DWORD *)this + 2);
  if ( result )
  {
    v5 = 0;
    for ( i = 0; i < result; ++i )
    {
      v7 = *(_DWORD *)(*((_DWORD *)this + 3) + v5);
      if ( v7 <= 15 && !LIB_GamepadState(a2, v7) )
      {
        LODWORD(v8) = OS_TimeAccurate();
        v9 = v8;
        *(float *)(*((_DWORD *)this + 3) + v5 + 16) = v9;
      }
      v10 = *((_DWORD *)this + 3);
      if ( *(int *)(v10 + v5) >= 16 )
      {
        *(_BYTE *)(v10 + v5 + 8) = 0;
        *(_BYTE *)(*((_DWORD *)this + 3) + v5 + 9) = 0;
        v11 = *((_DWORD *)this + 3);
        if ( *(float *)(v11 + v5 + 12) > 0.5 && COERCE_FLOAT(OS_GamepadAxis(a2, *(_DWORD *)(v11 + v5))) < 0.5 )
        {
          LODWORD(v12) = OS_TimeAccurate();
          v13 = v12;
          *(float *)(*((_DWORD *)this + 3) + v5 + 16) = v13;
          *(_BYTE *)(*((_DWORD *)this + 3) + v5 + 9) = 1;
        }
        v14 = *((_DWORD *)this + 3);
        if ( *(float *)(v14 + v5 + 12) < 0.5 && COERCE_FLOAT(OS_GamepadAxis(a2, *(_DWORD *)(v14 + v5))) > 0.5 )
          *(_BYTE *)(*((_DWORD *)this + 3) + v5 + 8) = 1;
        *(_DWORD *)(*((_DWORD *)this + 3) + v5 + 12) = OS_GamepadAxis(a2, *(_DWORD *)(*((_DWORD *)this + 3) + v5));
      }
      result = *((_DWORD *)this + 2);
      v5 += 20;
    }
  }
  return result;
}


// ============================================================

// Address: 0x28cf68
// Original: _ZN12CHIDJoystick22InternalIsDoubleTappedE10HIDMapping
// Demangled: CHIDJoystick::InternalIsDoubleTapped(HIDMapping)
int __fastcall CHIDJoystick::InternalIsDoubleTapped(int a1, int a2)
{
  int v4; // r6
  unsigned int v5; // r4
  int v6; // r2
  int v7; // r1
  double v8; // r0
  signed int v9; // r1
  double v10; // r0

  if ( !*(_DWORD *)(a1 + 8) )
    return 0;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)(a1 + 12);
    if ( *(_DWORD *)(v6 + v4 + 4) == a2 )
    {
      v7 = *(_DWORD *)(v6 + v4);
      if ( v7 <= 15 )
      {
        if ( LIB_GamepadState(CHID::currentInstanceIndex, v7) )
        {
          v6 = *(_DWORD *)(a1 + 12);
        }
        else
        {
          LODWORD(v8) = OS_TimeAccurate();
          v6 = *(_DWORD *)(a1 + 12);
          if ( v8 - *(float *)(v6 + v4 + 16) < 0.330000013 )
            return 1;
        }
      }
      v9 = *(_DWORD *)(v6 + v4);
      if ( v9 >= 16
        && *(float *)(v6 + v4 + 12) > 0.5
        && COERCE_FLOAT(OS_GamepadAxis(CHID::currentInstanceIndex, v9)) < 0.5 )
      {
        LODWORD(v10) = OS_TimeAccurate();
        if ( v10 - *(float *)(*(_DWORD *)(a1 + 12) + v4 + 16) < 0.330000013 )
          break;
      }
    }
    ++v5;
    v4 += 20;
    if ( v5 >= *(_DWORD *)(a1 + 8) )
      return 0;
  }
  return 1;
}


// ============================================================

// Address: 0x28d058
// Original: _ZN12CHIDJoystick21InternalIsJustPressedE10HIDMapping
// Demangled: CHIDJoystick::InternalIsJustPressed(HIDMapping)
int __fastcall CHIDJoystick::InternalIsJustPressed(int a1, int a2)
{
  unsigned int v4; // r0
  int v5; // r6
  unsigned int v6; // r4
  int v7; // r1
  int v8; // r2
  int v9; // r1
  int v10; // r0
  int v11; // r1

  v4 = *(_DWORD *)(a1 + 8);
  if ( !v4 )
  {
LABEL_8:
    v10 = 1;
    v11 = 0;
    return v10 & v11;
  }
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_DWORD *)(a1 + 12);
    v8 = v7 + v5;
    if ( *(_DWORD *)(v7 + v5 + 4) != a2 )
      goto LABEL_7;
    v9 = *(_DWORD *)(v7 + v5);
    if ( v9 > 15 )
      break;
    if ( LIB_GamepadState(CHID::currentInstanceIndex, v9) == 2 )
    {
      v11 = 1;
      v10 = 1;
      return v10 & v11;
    }
    v4 = *(_DWORD *)(a1 + 8);
LABEL_7:
    ++v6;
    v5 += 20;
    if ( v6 >= v4 )
      goto LABEL_8;
  }
  v10 = *(unsigned __int8 *)(v8 + 8);
  v11 = 1;
  if ( *(_BYTE *)(v8 + 8) )
    v10 = 1;
  return v10 & v11;
}


// ============================================================

// Address: 0x28d0bc
// Original: _ZN12CHIDJoystick17InternalIsPressedE10HIDMappingPf
// Demangled: CHIDJoystick::InternalIsPressed(HIDMapping,float *)
bool __fastcall CHIDJoystick::InternalIsPressed(int a1, int a2, int *a3)
{
  unsigned int v5; // r0
  int v7; // r6
  unsigned int i; // r5
  int v9; // r1
  int v10; // r1
  int v11; // r0
  float v12; // s0
  int v13; // r5
  unsigned int v15; // r0
  int v16; // r2
  _DWORD *j; // r1

  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 )
  {
    v7 = 0;
    for ( i = 0; i < v5; ++i )
    {
      v9 = *(_DWORD *)(a1 + 12);
      if ( *(_DWORD *)(v9 + v7 + 4) == a2 )
      {
        v10 = *(_DWORD *)(v9 + v7);
        if ( v10 > 15 )
        {
          if ( a3 )
          {
            *a3 = OS_GamepadAxis(CHID::currentInstanceIndex, v10);
            v10 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + v7);
          }
          return COERCE_FLOAT(OS_GamepadAxis(CHID::currentInstanceIndex, v10) & 0x7FFFFFFF) > 0.1;
        }
        v11 = LIB_GamepadState(CHID::currentInstanceIndex, v10) | 1;
        if ( a3 )
        {
          v12 = 0.0;
          if ( v11 == 3 )
            v12 = 1.0;
          *(float *)a3 = v12;
        }
        if ( v11 == 3 )
          return 1;
        v5 = *(_DWORD *)(a1 + 8);
      }
      v7 += 20;
    }
  }
  if ( OS_GetDeviceInfo(1) )
    return 0;
  v15 = *(_DWORD *)(a1 + 8);
  if ( !v15 )
    return 0;
  v16 = 0;
  for ( j = (_DWORD *)(*(_DWORD *)(a1 + 12) + 4); *j != a2; j += 5 )
  {
    if ( ++v16 >= v15 )
      return 0;
  }
  if ( *(j - 1) != 4 )
    return 0;
  v13 = 1;
  if ( !LIB_KeyboardIsDown() )
    return 0;
  *(_BYTE *)(a1 + 20) = 1;
  return v13;
}


// ============================================================

// Address: 0x28d1cc
// Original: _ZN12CHIDJoystick11GetButtonIDE10HIDMapping
// Demangled: CHIDJoystick::GetButtonID(HIDMapping)
int __fastcall CHIDJoystick::GetButtonID(int a1, int a2)
{
  unsigned int v2; // r12
  unsigned int v4; // r3
  _DWORD *v5; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( !v2 )
    return -1;
  v4 = 0;
  v5 = (_DWORD *)(*(_DWORD *)(a1 + 12) + 4);
  do
  {
    if ( *v5 == a2 )
      return *(v5 - 1);
    ++v4;
    v5 += 5;
  }
  while ( v4 < v2 );
  return -1;
}


// ============================================================

// Address: 0x28d200
// Original: _ZN12CHIDJoystick18InternalIsReleasedE10HIDMapping
// Demangled: CHIDJoystick::InternalIsReleased(HIDMapping)
int __fastcall CHIDJoystick::InternalIsReleased(int a1, int a2)
{
  unsigned int v4; // r0
  int v5; // r6
  unsigned int i; // r5
  int v7; // r1
  int v8; // r2
  int v9; // r1
  int result; // r0
  unsigned int v11; // r0
  int v12; // r2
  _DWORD *j; // r1

  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 )
  {
    v5 = 0;
    for ( i = 0; i < v4; ++i )
    {
      v7 = *(_DWORD *)(a1 + 12);
      v8 = v7 + v5;
      if ( *(_DWORD *)(v7 + v5 + 4) == a2 )
      {
        v9 = *(_DWORD *)(v7 + v5);
        if ( v9 > 15 )
        {
          result = *(unsigned __int8 *)(v8 + 9);
          if ( *(_BYTE *)(v8 + 9) )
            return 1;
          return result;
        }
        if ( !LIB_GamepadState(CHID::currentInstanceIndex, v9) )
          return 1;
        v4 = *(_DWORD *)(a1 + 8);
      }
      v5 += 20;
    }
  }
  if ( OS_GetDeviceInfo(1) )
    return 0;
  v11 = *(_DWORD *)(a1 + 8);
  if ( !v11 )
    return 0;
  v12 = 0;
  for ( j = (_DWORD *)(*(_DWORD *)(a1 + 12) + 4); *j != a2; j += 5 )
  {
    if ( ++v12 >= v11 )
      return 0;
  }
  if ( *(j - 1) != 4 || LIB_KeyboardIsDown() )
    return 0;
  result = 0;
  if ( *(_BYTE *)(a1 + 20) )
  {
    *(_BYTE *)(a1 + 20) = 0;
    return 1;
  }
  return result;
}


// ============================================================

// Address: 0x28d2a0
// Original: _ZN12CHIDJoystick14InternalUpdateEv
// Demangled: CHIDJoystick::InternalUpdate(void)
void __fastcall CHIDJoystick::InternalUpdate(CHIDJoystick *this)
{
  ;
}


// ============================================================

// Address: 0x28d2a4
// Original: _ZN12CHIDJoystick26InternalIsReleasedNegativeE10HIDMapping
// Demangled: CHIDJoystick::InternalIsReleasedNegative(HIDMapping)
bool __fastcall CHIDJoystick::InternalIsReleasedNegative(int a1, int a2)
{
  unsigned int v2; // r3
  int v3; // r4
  float *i; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( !v2 )
    return 0;
  v3 = 0;
  for ( i = (float *)(*(_DWORD *)(a1 + 12) + 12); *((_DWORD *)i - 2) != a2 || *((int *)i - 3) < 16; i += 5 )
  {
    if ( ++v3 >= v2 )
      return 0;
  }
  return *i < -0.5 && COERCE_FLOAT(OS_GamepadAxis(CHID::currentInstanceIndex, *((_DWORD *)i - 3)) & 0x7FFFFFFF) < 0.5;
}


// ============================================================

// Address: 0x28d314
// Original: _ZN12CHIDJoystick26InternalIsReleasedPositiveE10HIDMapping
// Demangled: CHIDJoystick::InternalIsReleasedPositive(HIDMapping)
bool __fastcall CHIDJoystick::InternalIsReleasedPositive(int a1, int a2)
{
  unsigned int v2; // r3
  int v3; // r4
  float *i; // r0
  int v5; // r4

  v2 = *(_DWORD *)(a1 + 8);
  if ( !v2 )
    return 0;
  v3 = 0;
  for ( i = (float *)(*(_DWORD *)(a1 + 12) + 12); *((_DWORD *)i - 2) != a2 || *((int *)i - 3) < 16; i += 5 )
  {
    if ( ++v3 >= v2 )
      return 0;
  }
  v5 = 0;
  if ( *i > 0.5 )
    return COERCE_FLOAT(OS_GamepadAxis(CHID::currentInstanceIndex, *((_DWORD *)i - 3)) & 0x7FFFFFFF) < 0.5;
  return v5;
}


// ============================================================

// Address: 0x28d384
// Original: _ZN12CHIDJoystick25InternalIsPressedPositiveE10HIDMapping
// Demangled: CHIDJoystick::InternalIsPressedPositive(HIDMapping)
bool __fastcall CHIDJoystick::InternalIsPressedPositive(int a1, int a2)
{
  unsigned int v2; // r12
  int v4; // r3
  float *i; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( !v2 )
    return 0;
  v4 = 0;
  for ( i = (float *)(*(_DWORD *)(a1 + 12) + 12); *((_DWORD *)i - 2) != a2 || *((int *)i - 3) <= 15; i += 5 )
  {
    if ( ++v4 >= v2 )
      return 0;
  }
  return *i > 0.5;
}


// ============================================================

// Address: 0x28d3ce
// Original: _ZN12CHIDJoystick25InternalIsPressedNegativeE10HIDMapping
// Demangled: CHIDJoystick::InternalIsPressedNegative(HIDMapping)
bool __fastcall CHIDJoystick::InternalIsPressedNegative(int a1, int a2)
{
  unsigned int v2; // r12
  int v4; // r3
  float *i; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( !v2 )
    return 0;
  v4 = 0;
  for ( i = (float *)(*(_DWORD *)(a1 + 12) + 12); *((_DWORD *)i - 2) != a2 || *((int *)i - 3) <= 15; i += 5 )
  {
    if ( ++v4 >= v2 )
      return 0;
  }
  return *i < -0.5;
}


// ============================================================

// Address: 0x28d418
// Original: _ZN12CHIDJoystick10AddMappingEi10HIDMapping
// Demangled: CHIDJoystick::AddMapping(int,HIDMapping)
int __fastcall CHIDJoystick::AddMapping(int a1, int a2, int a3)
{
  int v5; // r6
  unsigned int v7; // r11
  _DWORD *v8; // r0
  void *v9; // r10
  _DWORD *v10; // r5
  char *v11; // r0
  int result; // r0

  v5 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 4) >= (unsigned int)(v5 + 1) )
  {
    v10 = *(_DWORD **)(a1 + 12);
  }
  else
  {
    v7 = 4 * (v5 + 1) / 3u + 3;
    v8 = malloc(20 * v7);
    v9 = *(void **)(a1 + 12);
    v10 = v8;
    if ( v9 )
    {
      memcpy_0(v8, *(const void **)(a1 + 12), 20 * v5);
      free(v9);
      v5 = *(_DWORD *)(a1 + 8);
    }
    *(_DWORD *)(a1 + 12) = v10;
    *(_DWORD *)(a1 + 4) = v7;
  }
  v10[5 * v5] = a2;
  v11 = (char *)&v10[5 * v5];
  *((_DWORD *)v11 + 1) = a3;
  *((_WORD *)v11 + 4) = 0;
  *((_DWORD *)v11 + 3) = 0;
  *((_DWORD *)v11 + 4) = 0;
  result = *(_DWORD *)(a1 + 8) + 1;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}


// ============================================================

// Address: 0x28d4a2
// Original: _ZN12CHIDJoystick18MappingHasButtonIDEi
// Demangled: CHIDJoystick::MappingHasButtonID(int)
int __fastcall CHIDJoystick::MappingHasButtonID(CHIDJoystick *this, int a2)
{
  unsigned int v2; // r12
  _DWORD *v4; // r0
  unsigned int i; // r3

  v2 = *((_DWORD *)this + 2);
  if ( !v2 )
    return 0;
  v4 = (_DWORD *)*((_DWORD *)this + 3);
  for ( i = 0; i < v2; ++i )
  {
    if ( *v4 == a2 )
      return 1;
    v4 += 5;
  }
  return 0;
}


// ============================================================

// Address: 0x28d4cc
// Original: _ZN12CHIDJoystick23InternalMappingIsAnalogE10HIDMapping
// Demangled: CHIDJoystick::InternalMappingIsAnalog(HIDMapping)
int __fastcall CHIDJoystick::InternalMappingIsAnalog(int a1, int a2)
{
  unsigned int v2; // r12
  int v3; // r3
  _DWORD *i; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( !v2 )
    return 0;
  v3 = 0;
  for ( i = (_DWORD *)(*(_DWORD *)(a1 + 12) + 4); *i != a2 || (int)*(i - 1) <= 15; i += 5 )
  {
    if ( ++v3 >= v2 )
      return 0;
  }
  return 1;
}


// ============================================================

// Address: 0x28d4fa
// Original: _ZN12CHIDJoystick20InternalGetInputTypeEv
// Demangled: CHIDJoystick::InternalGetInputType(void)
int __fastcall CHIDJoystick::InternalGetInputType(CHIDJoystick *this)
{
  return 1;
}


// ============================================================

// Address: 0x28d500
// Original: _ZN12CHIDJoystickD2Ev
// Demangled: CHIDJoystick::~CHIDJoystick()
void __fastcall CHIDJoystick::~CHIDJoystick(CHIDJoystick *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_6620EC;
  CSprite2d::~CSprite2d((CHIDJoystick *)((char *)this + 16));
  v2 = (void *)*((_DWORD *)this + 3);
  *((_DWORD *)this + 2) = 0;
  if ( v2 )
  {
    free(v2);
    *((_DWORD *)this + 3) = 0;
  }
  *((_DWORD *)this + 1) = 0;
}


// ============================================================

// Address: 0x28d530
// Original: _ZN12CHIDJoystickD0Ev
// Demangled: CHIDJoystick::~CHIDJoystick()
void __fastcall __noreturn CHIDJoystick::~CHIDJoystick(CHIDJoystick *this)
{
  __debugbreak();
}


// ============================================================
