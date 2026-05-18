
// Address: 0x19f9bc
// Original: j__ZN22CHIDJoystickMogaPocketC2EPKc
// Demangled: CHIDJoystickMogaPocket::CHIDJoystickMogaPocket(char const*)
// attributes: thunk
void __fastcall CHIDJoystickMogaPocket::CHIDJoystickMogaPocket(CHIDJoystickMogaPocket *this, const char *a2)
{
  _ZN22CHIDJoystickMogaPocketC2EPKc(this, a2);
}


// ============================================================

// Address: 0x28e9a8
// Original: _ZN22CHIDJoystickMogaPocketC2EPKc
// Demangled: CHIDJoystickMogaPocket::CHIDJoystickMogaPocket(char const*)
void __fastcall CHIDJoystickMogaPocket::CHIDJoystickMogaPocket(CHIDJoystickMogaPocket *this, const char *a2)
{
  CHIDJoystick::CHIDJoystick(this, a2);
  *(_DWORD *)this = &off_6622CC;
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

// Address: 0x28ec58
// Original: _ZN22CHIDJoystickMogaPocket18FindUVsFromMappingEPKc10HIDMappingb
// Demangled: CHIDJoystickMogaPocket::FindUVsFromMapping(char const*,HIDMapping,bool)
float32x4_t *__fastcall CHIDJoystickMogaPocket::FindUVsFromMapping(float32x4_t *result, int a2, int a3, int a4)
{
  unsigned int v4; // r12
  unsigned int v5; // r2
  unsigned __int32 v6; // lr
  unsigned __int32 v7; // r4
  _DWORD *v8; // r1
  int32x4_t v9; // q8
  float32x4_t v10; // q9

  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 )
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = (_DWORD *)(*(_DWORD *)(a2 + 12) + 4);
    do
    {
      if ( *v8 == a4 )
      {
        switch ( *(v8 - 1) )
        {
          case 0:
          case 1:
          case 2:
          case 3:
            v6 = 1;
            v7 = *(v8 - 1);
            break;
          case 4:
            v6 = 0;
            goto LABEL_12;
          case 5:
            v7 = 0;
            v6 = 0;
            break;
          case 6:
            v6 = 2;
            v7 = 0;
            break;
          case 7:
            v6 = 2;
LABEL_12:
            v7 = 1;
            break;
          case 0x40:
          case 0x41:
            v6 = 0;
            v7 = 2;
            break;
          case 0x42:
          case 0x43:
            v6 = 0;
            v7 = 3;
            break;
          default:
            break;
        }
      }
      ++v5;
      v8 += 5;
    }
    while ( v5 < v4 );
  }
  else
  {
    v7 = 0;
    v6 = 0;
  }
  v9.n128_u32[0] = v7;
  v10.n128_f32[0] = 0.25;
  v10.n128_f32[1] = 0.25;
  v10.n128_f32[2] = 0.25;
  v10.n128_f32[3] = 0.25;
  v9.n128_u32[2] = v7 + 1;
  v9.n128_u32[1] = v6 + 1;
  v9.n128_u32[3] = v6;
  *result = vmulq_f32(vcvtq_f32_s32(v9), v10);
  return result;
}


// ============================================================

// Address: 0x28ed44
// Original: _ZN22CHIDJoystickMogaPocketD0Ev
// Demangled: CHIDJoystickMogaPocket::~CHIDJoystickMogaPocket()
void __fastcall CHIDJoystickMogaPocket::~CHIDJoystickMogaPocket(CHIDJoystickMogaPocket *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_6620EC;
  CSprite2d::~CSprite2d((CHIDJoystickMogaPocket *)((char *)this + 16));
  v2 = (void *)*((_DWORD *)this + 3);
  *((_DWORD *)this + 2) = 0;
  if ( v2 )
    free(v2);
  operator delete(this);
}


// ============================================================
