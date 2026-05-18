
// Address: 0x19bbb0
// Original: j__ZN27CRegisteredMotionBlurStreak6RenderEv
// Demangled: CRegisteredMotionBlurStreak::Render(void)
// attributes: thunk
int __fastcall CRegisteredMotionBlurStreak::Render(CRegisteredMotionBlurStreak *this)
{
  return _ZN27CRegisteredMotionBlurStreak6RenderEv(this);
}


// ============================================================

// Address: 0x5c22c8
// Original: _ZN27CRegisteredMotionBlurStreak6UpdateEv
// Demangled: CRegisteredMotionBlurStreak::Update(void)
int __fastcall CRegisteredMotionBlurStreak::Update(int this)
{
  __int64 v1; // d16
  __int64 v2; // d17
  __int64 v3; // d18
  int v4; // r2
  int v5; // r3
  int v6; // r1
  __int64 v7; // d16
  int v8; // r2

  v1 = *(_QWORD *)(this + 8);
  v2 = *(_QWORD *)(this + 20);
  v3 = *(_QWORD *)(this + 56);
  v4 = *(_DWORD *)(this + 64);
  v5 = *(unsigned __int8 *)(this + 81);
  v6 = *(_DWORD *)(this + 16);
  *(_DWORD *)(this + 40) = *(_DWORD *)(this + 28);
  *(_DWORD *)(this + 76) = v4;
  *(_BYTE *)(this + 82) = v5;
  *(_DWORD *)(this + 28) = v6;
  *(_QWORD *)(this + 32) = v2;
  *(_QWORD *)(this + 68) = v3;
  *(_QWORD *)(this + 20) = v1;
  v7 = *(_QWORD *)(this + 44);
  *(_DWORD *)(this + 64) = *(_DWORD *)(this + 52);
  *(_QWORD *)(this + 56) = v7;
  v8 = *(unsigned __int8 *)(this + 80);
  *(_BYTE *)(this + 81) = v8;
  *(_BYTE *)(this + 80) = 0;
  if ( !((v8 | v5) << 24) )
    *(_DWORD *)this = 0;
  return this;
}


// ============================================================

// Address: 0x5c231c
// Original: _ZN27CRegisteredMotionBlurStreak6RenderEv
// Demangled: CRegisteredMotionBlurStreak::Render(void)
int __fastcall CRegisteredMotionBlurStreak::Render(CRegisteredMotionBlurStreak *this)
{
  int v2; // r6
  unsigned int v3; // r5
  int v4; // r11
  int result; // r0
  bool v6; // zf
  int v7; // r0
  int v8; // r1
  int v9; // s0
  int v10; // r2
  int v11; // r3
  int v12; // r2
  int v13; // r3
  int v14; // r2
  int v15; // r3
  int v16; // r0

  v2 = 0;
  v3 = 255;
  v4 = 0;
  do
  {
    result = (int)this + v4++;
    v6 = *(_BYTE *)(result + 80) == 0;
    if ( *(_BYTE *)(result + 80) )
    {
      result = *(unsigned __int8 *)(result + 81);
      v6 = result == 0;
    }
    if ( !v6 )
    {
      v7 = *((unsigned __int8 *)this + 7);
      v8 = (int)(float)((float)(int)(v3 / 3 * v7) / 255.0);
      dword_A59EB4 = *((unsigned __int8 *)this + 4) | (*((unsigned __int8 *)this + 5) << 8) | (*((unsigned __int8 *)this
                                                                                               + 6) << 16) | (v8 << 24);
      dword_A59ED8 = *((unsigned __int8 *)this + 4) | (v8 << 24) | (*((unsigned __int8 *)this + 5) << 8) | (*((unsigned __int8 *)this + 6) << 16);
      v9 = (int)(float)((float)(int)(v7 * ((v3 - 85) / 3)) / 255.0);
      dword_A59EFC = *((unsigned __int8 *)this + 4) | (v9 << 24) | (*((unsigned __int8 *)this + 5) << 8) | (*((unsigned __int8 *)this + 6) << 16);
      dword_A59F20 = *((unsigned __int8 *)this + 4) | (v9 << 24) | (*((unsigned __int8 *)this + 5) << 8) | (*((unsigned __int8 *)this + 6) << 16);
      v10 = *(_DWORD *)((char *)this + v2 + 12);
      v11 = *(_DWORD *)((char *)this + v2 + 16);
      unk_A59E9C = *(_DWORD *)((char *)this + v2 + 8);
      unk_A59EA0 = v10;
      unk_A59EA4 = v11;
      v12 = *(_DWORD *)((char *)this + v2 + 48);
      v13 = *(_DWORD *)((char *)this + v2 + 52);
      unk_A59EC0 = *(_DWORD *)((char *)this + v2 + 44);
      unk_A59EC4 = v12;
      unk_A59EC8 = v13;
      v14 = *(_DWORD *)((char *)this + v2 + 24);
      v15 = *(_DWORD *)((char *)this + v2 + 28);
      unk_A59EE4 = *(_DWORD *)((char *)this + v2 + 20);
      unk_A59EE8 = v14;
      unk_A59EEC = v15;
      v16 = *(_DWORD *)((char *)this + v2 + 64);
      *(_QWORD *)&dword_A59F08 = *(_QWORD *)((char *)this + v2 + 56);
      dword_A59F10 = v16;
      LittleTest();
      result = RwIm3DTransform();
      if ( result )
      {
        RwIm3DRenderIndexedPrimitive();
        result = RwIm3DEnd();
      }
    }
    v2 += 12;
    v3 -= 85;
  }
  while ( v2 != 24 );
  return result;
}


// ============================================================
