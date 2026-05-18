
// Address: 0x191b6c
// Original: j__ZN18CHIDJoystickAmazonC2EPKc
// Demangled: CHIDJoystickAmazon::CHIDJoystickAmazon(char const*)
// attributes: thunk
void __fastcall CHIDJoystickAmazon::CHIDJoystickAmazon(CHIDJoystickAmazon *this, const char *a2)
{
  _ZN18CHIDJoystickAmazonC2EPKc(this, a2);
}


// ============================================================

// Address: 0x28d534
// Original: _ZN18CHIDJoystickAmazonC2EPKc
// Demangled: CHIDJoystickAmazon::CHIDJoystickAmazon(char const*)
void __fastcall CHIDJoystickAmazon::CHIDJoystickAmazon(CHIDJoystickAmazon *this, const char *a2)
{
  CHIDJoystick::CHIDJoystick(this, a2);
  *(_DWORD *)this = &off_66214C;
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
  CHIDJoystick::AddMapping();
}


// ============================================================

// Address: 0x28d8c0
// Original: _ZN18CHIDJoystickAmazon18FindUVsFromMappingEPKc10HIDMappingb
// Demangled: CHIDJoystickAmazon::FindUVsFromMapping(char const*,HIDMapping,bool)
unsigned __int32 __fastcall CHIDJoystickAmazon::FindUVsFromMapping(float32x4_t *a1, int a2, char *haystack, int a4)
{
  unsigned int v5; // r0
  unsigned int v7; // r2
  int v8; // r10
  unsigned __int32 v9; // r5
  _DWORD *v10; // r1
  unsigned __int32 v11; // r6
  int32x4_t v12; // q8
  float32x4_t v13; // q9
  unsigned __int32 result; // r0

  v5 = *(_DWORD *)(a2 + 8);
  if ( !v5 )
  {
    v9 = 0;
    v8 = 0;
    if ( haystack )
      goto LABEL_22;
LABEL_25:
    v11 = v8;
    goto LABEL_28;
  }
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = (_DWORD *)(*(_DWORD *)(a2 + 12) + 4);
  do
  {
    if ( *v10 == a4 )
    {
      switch ( *(v10 - 1) )
      {
        case 0:
        case 1:
        case 2:
        case 3:
          v8 = 1;
          v9 = *(v10 - 1);
          break;
        case 4:
          v8 = 0;
          goto LABEL_19;
        case 6:
          v9 = 2;
          v8 = 2;
          break;
        case 7:
          v8 = 2;
          v9 = 3;
          break;
        case 8:
          v8 = 3;
          v9 = 4;
          break;
        case 9:
          v8 = 3;
          goto LABEL_19;
        case 0xA:
          v8 = 3;
          v9 = 2;
          break;
        case 0xB:
          v9 = 3;
          v8 = 3;
          break;
        case 0xC:
          v8 = 5;
          v9 = 0;
          break;
        case 0xD:
          v8 = 6;
          v9 = 0;
          break;
        case 0x40:
        case 0x41:
          v8 = 3;
          v9 = 0;
          break;
        case 0x42:
        case 0x43:
          v8 = 4;
          v9 = 0;
          break;
        case 0x44:
          v8 = 2;
          v9 = 0;
          break;
        case 0x45:
          v8 = 2;
LABEL_19:
          v9 = 1;
          break;
        default:
          break;
      }
    }
    ++v7;
    v10 += 5;
  }
  while ( v7 < v5 );
  if ( !haystack )
    goto LABEL_25;
LABEL_22:
  if ( strstr(haystack, "widget_ped_move_left") )
  {
LABEL_23:
    v11 = 5;
    v9 = 2;
    goto LABEL_28;
  }
  if ( strstr(haystack, "widget_ped_move_right") )
    goto LABEL_27;
  if ( strstr(haystack, "widget_vehicle_steer_left") )
    goto LABEL_23;
  if ( strstr(haystack, "widget_vehicle_steer_right") )
  {
LABEL_27:
    v11 = 5;
    v9 = 3;
    goto LABEL_28;
  }
  v11 = 5;
  if ( strstr(haystack, "widget_ped_move_up") )
  {
    v9 = 4;
  }
  else if ( strstr(haystack, "widget_ped_move_down") )
  {
    v9 = 1;
  }
  else
  {
    v11 = v8;
  }
LABEL_28:
  v12.n128_u32[0] = v9;
  v13.n128_u64[0] = 0x3E0000003E000000LL;
  v13.n128_u64[1] = 0x3E0000003E000000LL;
  v12.n128_u32[2] = v9 + 1;
  result = v11 + 1;
  v12.n128_u32[1] = v11 + 1;
  v12.n128_u32[3] = v11;
  *a1 = vmulq_f32(vcvtq_f32_s32(v12), v13);
  return result;
}


// ============================================================

// Address: 0x28dadc
// Original: _ZN18CHIDJoystickAmazonD0Ev
// Demangled: CHIDJoystickAmazon::~CHIDJoystickAmazon()
void __fastcall CHIDJoystickAmazon::~CHIDJoystickAmazon(CHIDJoystickAmazon *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_6620EC;
  CSprite2d::~CSprite2d((CHIDJoystickAmazon *)((char *)this + 16));
  v2 = (void *)*((_DWORD *)this + 3);
  *((_DWORD *)this + 2) = 0;
  if ( v2 )
    free(v2);
  operator delete(this);
}


// ============================================================
