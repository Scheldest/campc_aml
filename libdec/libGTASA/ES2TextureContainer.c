
// Address: 0x1d131c
// Original: _ZN19ES2TextureContainer14DeleteResourceEj
// Demangled: ES2TextureContainer::DeleteResource(uint)
void __fastcall ES2TextureContainer::DeleteResource(ES2TextureContainer *this, GLuint a2)
{
  GLuint textures; // [sp+4h] [bp-Ch] BYREF

  textures = a2;
  glDeleteTextures(1, &textures);
}


// ============================================================
