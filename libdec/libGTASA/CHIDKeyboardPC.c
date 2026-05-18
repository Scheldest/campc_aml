
// Address: 0x195f44
// Original: j__ZN14CHIDKeyboardPCC2EPKc
// Demangled: CHIDKeyboardPC::CHIDKeyboardPC(char const*)
// attributes: thunk
void __fastcall CHIDKeyboardPC::CHIDKeyboardPC(CHIDKeyboardPC *this, const char *a2)
{
  _ZN14CHIDKeyboardPCC2EPKc(this, a2);
}


// ============================================================

// Address: 0x19c6e4
// Original: j__ZN14CHIDKeyboardPC17DoDefaultMappingsEv
// Demangled: CHIDKeyboardPC::DoDefaultMappings(void)
// attributes: thunk
int __fastcall CHIDKeyboardPC::DoDefaultMappings(CHIDKeyboardPC *this)
{
  return _ZN14CHIDKeyboardPC17DoDefaultMappingsEv(this);
}


// ============================================================

// Address: 0x295c30
// Original: _ZN14CHIDKeyboardPCC2EPKc
// Demangled: CHIDKeyboardPC::CHIDKeyboardPC(char const*)
void __fastcall CHIDKeyboardPC::CHIDKeyboardPC(CHIDKeyboardPC *this, const char *a2)
{
  CHIDKeyboard::CHIDKeyboard(this, a2);
  *(_DWORD *)this = &off_66253C;
  CHIDKeyboardPC::DoDefaultMappings(this);
  CHIDKeyboard::LoadMappingsFromDisk(this, 1);
}


// ============================================================

// Address: 0x295c5c
// Original: _ZN14CHIDKeyboardPC17DoDefaultMappingsEv
// Demangled: CHIDKeyboardPC::DoDefaultMappings(void)
int __fastcall CHIDKeyboardPC::DoDefaultMappings(CHIDKeyboardPC *this)
{
  *((_DWORD *)this + 2) = 0;
  CHIDKeyboard::AddMapping((int)this, 54, 2, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 29, 8, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 100, 1, 0, 0);
  CHIDKeyboard::AddMapping((int)this, 68, 3, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 43, 6, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 27, 5, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 100, 9, 0, 3);
  CHIDKeyboard::AddMapping((int)this, 100, 10, 0, 4);
  CHIDKeyboard::AddMapping((int)this, 17, 12, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 18, 13, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 100, 13, 0, 2);
  CHIDKeyboard::AddMapping((int)this, 66, 14, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 15, 16, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 16, 15, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 100, 15, 0, 1);
  CHIDKeyboard::AddMapping((int)this, 100, 7, 0, 1);
  CHIDKeyboard::AddMapping((int)this, 57, 4, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 58, 11, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 100, 18, 0, 2);
  CHIDKeyboard::AddMapping((int)this, 28, 19, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 30, 20, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 68, 21, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 31, 22, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 31, 23, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 57, 32, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 30, 33, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 100, 34, 0, 3);
  CHIDKeyboard::AddMapping((int)this, 100, 35, 0, 4);
  CHIDKeyboard::AddMapping((int)this, 28, 36, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 31, 37, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 42, 24, 1, -1);
  CHIDKeyboard::AddMapping((int)this, 44, 24, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 42, 26, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 44, 27, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 42, 30, 1, -1);
  CHIDKeyboard::AddMapping((int)this, 44, 30, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 43, 31, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 29, 31, 1, -1);
  CHIDKeyboard::AddMapping((int)this, 30, 40, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 68, 41, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 53, 41, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 30, 42, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 31, 43, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 30, 44, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 31, 45, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 79, 46, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 80, 47, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 81, 48, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 82, 49, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 30, 50, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 30, 51, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 30, 52, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 56, 53, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 57, 54, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 55, 55, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 68, 56, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 53, 56, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 0, 57, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 31, 58, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 31, 59, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 43, 60, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 80, 60, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 29, 61, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 79, 61, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 42, 62, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 81, 62, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 44, 63, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 82, 63, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 68, 64, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 53, 64, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 0, 65, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 26, 65, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 30, 71, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 55, 72, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 57, 73, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 29, 74, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 44, 75, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 42, 76, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 43, 77, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 57, 78, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 55, 79, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 57, 83, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 55, 84, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 54, 85, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 65, 85, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 100, 86, 0, 0);
  CHIDKeyboard::AddMapping((int)this, 100, 87, 0, 1);
  CHIDKeyboard::AddMapping((int)this, 30, 88, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 28, 89, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 81, 90, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 82, 91, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 79, 92, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 80, 93, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 42, 100, 0, -1);
  CHIDKeyboard::AddMapping((int)this, 44, 101, 0, -1);
  return CHIDKeyboard::AddMapping((int)this, 31, 103, 0, -1);
}


// ============================================================

// Address: 0x2961e0
// Original: _ZN14CHIDKeyboardPC18FindUVsFromMappingEPKc10HIDMappingb
// Demangled: CHIDKeyboardPC::FindUVsFromMapping(char const*,HIDMapping,bool)
float32x4_t *__fastcall CHIDKeyboardPC::FindUVsFromMapping(float32x4_t *result, int a2, int a3, int a4)
{
  unsigned int v4; // lr
  unsigned int v5; // r2
  int *v6; // r1
  int v7; // r12
  int v8; // r4
  int v9; // r5
  int32x4_t v10; // q8
  float32x4_t v11; // q9

  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 )
  {
    v5 = 0;
    v6 = (int *)(*(_DWORD *)(a2 + 12) + 12);
    v7 = 0;
    v8 = 0;
    do
    {
      if ( *(v6 - 2) == a4 )
      {
        v9 = *v6;
        if ( (unsigned int)*v6 <= 4 )
        {
          v7 = dword_296270[v9];
          v8 = dword_296284[v9];
        }
      }
      ++v5;
      v6 += 5;
    }
    while ( v5 < v4 );
  }
  else
  {
    v8 = 0;
    v7 = 0;
  }
  v10.n128_u32[0] = v8;
  v10.n128_u32[2] = v8 + 1;
  v10.n128_u32[1] = v7 + 1;
  v10.n128_u32[3] = v7;
  v11.n128_u64[0] = 0x3EAAAA3B3EAAAA3BLL;
  v11.n128_u64[1] = 0x3EAAAA3B3EAAAA3BLL;
  *result = vmulq_f32(vcvtq_f32_s32(v10), v11);
  return result;
}


// ============================================================

// Address: 0x296298
// Original: _ZN14CHIDKeyboardPCD0Ev
// Demangled: CHIDKeyboardPC::~CHIDKeyboardPC()
void __fastcall CHIDKeyboardPC::~CHIDKeyboardPC(CHIDKeyboardPC *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_6624B8;
  CSprite2d::~CSprite2d((CHIDKeyboardPC *)((char *)this + 16));
  v2 = (void *)*((_DWORD *)this + 3);
  *((_DWORD *)this + 2) = 0;
  if ( v2 )
    free(v2);
  operator delete(this);
}


// ============================================================
