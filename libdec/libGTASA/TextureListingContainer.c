
// Address: 0x1949e0
// Original: j__ZNK23TextureListingContainer12CreateRasterERK20TextureDatabaseEntry
// Demangled: TextureListingContainer::CreateRaster(TextureDatabaseEntry const&)
// attributes: thunk
int __fastcall TextureListingContainer::CreateRaster(TextureListingContainer *this, const TextureDatabaseEntry *a2)
{
  return _ZNK23TextureListingContainer12CreateRasterERK20TextureDatabaseEntry(this, a2);
}


// ============================================================

// Address: 0x1958b4
// Original: j__ZN23TextureListingContainerD2Ev
// Demangled: TextureListingContainer::~TextureListingContainer()
// attributes: thunk
void __fastcall TextureListingContainer::~TextureListingContainer(TextureListingContainer *this)
{
  _ZN23TextureListingContainerD2Ev(this);
}


// ============================================================

// Address: 0x1e78e0
// Original: _ZN23TextureListingContainerD2Ev
// Demangled: TextureListingContainer::~TextureListingContainer()
void __fastcall TextureListingContainer::~TextureListingContainer(void **this)
{
  if ( *((_BYTE *)this + 16) )
    free(this[2]);
  this[3] = 0;
  this[2] = 0;
}


// ============================================================

// Address: 0x1e8d78
// Original: _ZNK23TextureListingContainer12CreateRasterERK20TextureDatabaseEntry
// Demangled: TextureListingContainer::CreateRaster(TextureDatabaseEntry const&)
int __fastcall TextureListingContainer::CreateRaster(void **this, const TextureDatabaseEntry *a2)
{
  int v3; // r3
  __int16 v4; // r2
  __int16 v6; // r4
  int v7; // r1
  int v8; // r5
  _BYTE *v9; // r10
  char v10; // r1
  __int16 v11; // r0
  int RQFormat; // r8
  unsigned int MipCount; // r11
  int v14; // r0
  void (*v15)(void); // r3
  char *v16; // r4
  int v17; // r8
  int v18; // r6
  void *v19; // r0
  __int16 v20; // r1
  unsigned int v21; // r6
  unsigned int MipSize; // r8
  unsigned int v23; // r5
  int v25; // [sp+4h] [bp-24h]
  int v26; // [sp+4h] [bp-24h]
  int v27; // [sp+8h] [bp-20h]
  const TextureDatabaseEntry *v28; // [sp+8h] [bp-20h]

  v3 = 1540;
  v4 = *((_WORD *)a2 + 4);
  v6 = *((_WORD *)a2 + 5);
  v7 = *(unsigned __int16 *)((char *)a2 + 17);
  if ( (v4 & 0xF) == 7 )
    v3 = 1284;
  if ( (v4 & 0xF0) != 0 )
    v3 = 1284;
  v8 = RwRasterCreate(*(unsigned __int16 *)((char *)a2 + 15), v7, 32, v3 | (unsigned __int16)(v6 << 15));
  v27 = RasterExtOffset;
  v9 = (_BYTE *)(v8 + RasterExtOffset);
  v10 = 1;
  if ( (*((_WORD *)a2 + 4) & 0xF0) != 0 )
    v10 = 5;
  v9[20] = v10;
  v11 = *((_WORD *)a2 + 4);
  v9[21] = 0;
  v9[22] = (v11 & 0xF0) != 0;
  RQFormat = TextureListing::GetRQFormat((TextureListing *)this);
  MipCount = TextureListing::GetMipCount((TextureListing *)this);
  v25 = RQFormat;
  v14 = RQTexture::Create();
  *(_DWORD *)(v8 + v27) = v14;
  if ( ((*((unsigned __int16 *)this + 2) + 0xFFFF) & (unsigned __int16)this[1]) != 0
    || (((*((_WORD *)this + 3) & 0x7FFF) + 0x7FFF) & *((_WORD *)this + 3) & 0x7FFF) != 0 )
  {
    v15 = *(void (**)(void))(*(_DWORD *)v14 + 12);
  }
  else
  {
    v15 = *(void (**)(void))(*(_DWORD *)v14 + 12);
  }
  v15();
  v16 = (char *)this[2];
  v28 = a2;
  if ( (*((_WORD *)a2 + 4) & 0xF) == 7 )
  {
    v17 = *((unsigned __int16 *)this + 2);
    v18 = *((_WORD *)this + 3) & 0x7FFF;
    v19 = malloc(4 * v17 * v18);
    v20 = *(_WORD *)(v8 + 48);
    *(_DWORD *)(v8 + 4) = v19;
    *(_WORD *)(v8 + 48) = v20 | 0x100;
    RQTexture::ConvertToRaw32(v19, this[2], v17, v18, v25);
  }
  v21 = 0;
  v26 = v8;
  do
  {
    MipSize = TextureListing::GetMipSize((TextureListing *)this, v21);
    (*(void (__fastcall **)(_DWORD, unsigned int, char *))(**(_DWORD **)v9 + 20))(*(_DWORD *)v9, v21, v16);
    v23 = v21 + 1;
    if ( MipSize > TextureListing::GetMipSize((TextureListing *)this, v21 + 1) )
      v16 += TextureListing::GetMipSize((TextureListing *)this, v21);
    ++v21;
  }
  while ( v23 < MipCount );
  (*(void (**)(void))(**(_DWORD **)v9 + 16))();
  *(_DWORD *)(v26 + 44) = v28;
  return v26;
}


// ============================================================
