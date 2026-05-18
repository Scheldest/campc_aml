
// Address: 0x19859c
// Original: j__ZN20TextureDatabaseEntry12LoadInstanceERK23TextureListingContainer
// Demangled: TextureDatabaseEntry::LoadInstance(TextureListingContainer const&)
// attributes: thunk
int __fastcall TextureDatabaseEntry::LoadInstance(TextureDatabaseEntry *this, const TextureListingContainer *a2)
{
  return _ZN20TextureDatabaseEntry12LoadInstanceERK23TextureListingContainer(this, a2);
}


// ============================================================

// Address: 0x1a0be0
// Original: j__ZN20TextureDatabaseEntry7LoadPNGEPKc
// Demangled: TextureDatabaseEntry::LoadPNG(char const*)
// attributes: thunk
int __fastcall TextureDatabaseEntry::LoadPNG(TextureDatabaseEntry *this, const char *a2)
{
  return _ZN20TextureDatabaseEntry7LoadPNGEPKc(this, a2);
}


// ============================================================

// Address: 0x1e7478
// Original: _ZNK20TextureDatabaseEntryeqERKS_
// Demangled: TextureDatabaseEntry::operator==(TextureDatabaseEntry const&)
bool __fastcall TextureDatabaseEntry::operator==(int a1, int a2)
{
  int v4; // r0
  _BOOL4 result; // r0

  result = 0;
  if ( !strcmp(*(const char **)a1, *(const char **)a2)
    && !((*(unsigned __int16 *)(a1 + 8) ^ *(unsigned __int16 *)(a2 + 8)) << 20) )
  {
    v4 = *(unsigned __int16 *)(a1 + 10);
    if ( v4 == *(unsigned __int16 *)(a2 + 10)
      && *(unsigned __int16 *)(a1 + 15) == *(unsigned __int16 *)(a2 + 15)
      && *(unsigned __int16 *)(a1 + 17) == *(unsigned __int16 *)(a2 + 17)
      && ((v4 & 4) == 0 || !strcmp(*(const char **)(a1 + 19), *(const char **)(a2 + 19))) )
    {
      return 1;
    }
  }
  return result;
}


// ============================================================

// Address: 0x1e8ef8
// Original: _ZN20TextureDatabaseEntry12LoadInstanceERK23TextureListingContainer
// Demangled: TextureDatabaseEntry::LoadInstance(TextureListingContainer const&)
int __fastcall TextureDatabaseEntry::LoadInstance(TextureDatabaseEntry *this, const TextureListingContainer *a2)
{
  int Raster; // r5
  __int16 v4; // r0

  Raster = TextureListingContainer::CreateRaster(a2, this);
  if ( *(_DWORD *)((char *)this + 19) )
  {
    RwRasterDestroy();
    **(_DWORD **)((char *)this + 19) = 0;
    RwTextureSetRaster(*(_DWORD *)((char *)this + 19), Raster);
  }
  else
  {
    *(_DWORD *)((char *)this + 19) = RwTextureCreate();
    RwTextureSetName();
  }
  v4 = *((_WORD *)this + 5);
  if ( (v4 & 8) != 0 )
  {
    *(_WORD *)(Raster + 48) |= 0x80u;
    (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(Raster + RasterExtOffset) + 8))(
      *(_DWORD *)(Raster + RasterExtOffset),
      1);
    v4 = *((_WORD *)this + 5);
  }
  if ( (v4 & 0x20) != 0 && *((_BYTE *)this + 13) )
  {
    *(_WORD *)(Raster + 48) |= 0x40u;
    v4 = *((_WORD *)this + 5);
  }
  if ( (v4 & 0x40) != 0 )
  {
    *(_WORD *)(Raster + 48) |= 0x20u;
    v4 = *((_WORD *)this + 5);
  }
  if ( (v4 & 0x80) != 0 )
  {
    *(_WORD *)(Raster + 48) |= 0x10u;
    v4 = *((_WORD *)this + 5);
  }
  if ( (v4 & 0x100) != 0 )
  {
    *(_WORD *)(Raster + 48) |= 0x200u;
    v4 = *((_WORD *)this + 5);
  }
  if ( (v4 & 0x200) != 0 )
    *(_WORD *)(Raster + 48) |= 0x400u;
  return *(_DWORD *)((char *)this + 19);
}


// ============================================================

// Address: 0x1e8fb0
// Original: _ZN20TextureDatabaseEntry7LoadPNGEPKc
// Demangled: TextureDatabaseEntry::LoadPNG(char const*)
int __fastcall TextureDatabaseEntry::LoadPNG(TextureDatabaseEntry *this, const char *a2)
{
  int v3; // r5
  int v4; // r6
  int v6; // [sp+8h] [bp-20h] BYREF
  int v7; // [sp+Ch] [bp-1Ch] BYREF
  int v8; // [sp+10h] [bp-18h] BYREF
  int v9[5]; // [sp+14h] [bp-14h] BYREF

  v3 = RtPNGImageRead(a2);
  RwImageFindRasterFormat(v3, 4, (int)v9, (int)&v8, (int)&v7, (int)&v6);
  v4 = RwRasterCreate(v9[0], v8, v7, v6);
  RwRasterSetFromImage();
  *(_DWORD *)(v4 + 44) = this;
  if ( *(_DWORD *)((char *)this + 19) )
  {
    RwRasterDestroy();
    **(_DWORD **)((char *)this + 19) = 0;
    RwTextureSetRaster(*(_DWORD *)((char *)this + 19), v4);
  }
  else
  {
    *(_DWORD *)((char *)this + 19) = RwTextureCreate();
    RwTextureSetName();
  }
  RwImageDestroy(v3);
  return *(_DWORD *)((char *)this + 19);
}


// ============================================================

// Address: 0x1e9030
// Original: _ZN20TextureDatabaseEntry6DeleteEv
// Demangled: TextureDatabaseEntry::Delete(void)
int __fastcall TextureDatabaseEntry::Delete(TextureDatabaseEntry *this)
{
  int v2; // r5
  _DWORD *v3; // r0
  __int64 v4; // kr00_8

  v2 = 0;
  v3 = *(_DWORD **)((char *)this + 19);
  if ( v3[21] == 1 )
  {
    v4 = *(_QWORD *)(*(_DWORD *)(*v3 + RasterExtOffset) + 4);
    v3[21] = 0;
    TextureAnnihilate();
    *(_DWORD *)((char *)this + 19) = 0;
    return HIDWORD(v4) * v4;
  }
  return v2;
}


// ============================================================
