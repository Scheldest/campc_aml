
// Address: 0x19175c
// Original: j__ZN19FurnitureSubGroup_c12AddFurnitureEtshhh
// Demangled: FurnitureSubGroup_c::AddFurniture(ushort,short,uchar,uchar,uchar)
// attributes: thunk
int __fastcall FurnitureSubGroup_c::AddFurniture(
        FurnitureSubGroup_c *this,
        unsigned __int16 a2,
        __int16 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  return _ZN19FurnitureSubGroup_c12AddFurnitureEtshhh(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x444558
// Original: _ZN19FurnitureSubGroup_c12GetFurnitureEsh
// Demangled: FurnitureSubGroup_c::GetFurniture(short,uchar)
int __fastcall FurnitureSubGroup_c::GetFurniture(FurnitureSubGroup_c *this, int a2, unsigned int a3)
{
  int result; // r0
  List_c *v5; // r5
  int v6; // r0
  int i; // r6
  int v8; // s0
  int v9; // r2
  int NumItems; // r4
  unsigned __int16 v11; // r0

  if ( a2 < 0 )
  {
    v5 = (FurnitureSubGroup_c *)((char *)this + 12);
    if ( a3 == 255 )
    {
      NumItems = List_c::GetNumItems((FurnitureSubGroup_c *)((char *)this + 12));
      v11 = rand();
      return List_c::GetItemOffset(v5, 1u, (int)(float)((float)((float)v11 * 0.000015259) * (float)NumItems));
    }
    v6 = *(_DWORD *)v5;
    for ( i = 0; v6; v6 = *(_DWORD *)(v6 + 4) )
    {
      if ( *(unsigned __int8 *)(v6 + 14) <= a3 && *(unsigned __int8 *)(v6 + 15) >= a3 )
        ++i;
    }
    v8 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * (float)i);
    result = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 )
    {
      v9 = 0;
      do
      {
        if ( *(unsigned __int8 *)(result + 14) <= a3 && *(unsigned __int8 *)(result + 15) >= a3 )
        {
          if ( v9 == v8 )
            return result;
          ++v9;
        }
        result = *(_DWORD *)(result + 4);
      }
      while ( result );
    }
    return 0;
  }
  result = *((_DWORD *)this + 3);
  if ( !result )
    return 0;
  while ( *(unsigned __int16 *)(result + 10) != (unsigned __int16)a2 )
  {
    result = *(_DWORD *)(result + 4);
    if ( !result )
      return 0;
  }
  return result;
}


// ============================================================

// Address: 0x444634
// Original: _ZN19FurnitureSubGroup_c11GetRandomIdEh
// Demangled: FurnitureSubGroup_c::GetRandomId(uchar)
int __fastcall FurnitureSubGroup_c::GetRandomId(FurnitureSubGroup_c *this, unsigned int a2)
{
  List_c *v2; // r5
  int v4; // r0
  int i; // r6
  int v6; // s0
  int ItemOffset; // r0
  int v8; // r2
  int NumItems; // r4
  unsigned __int16 v11; // r0

  v2 = (FurnitureSubGroup_c *)((char *)this + 12);
  if ( a2 == 255 )
  {
    NumItems = List_c::GetNumItems((FurnitureSubGroup_c *)((char *)this + 12));
    v11 = rand();
    ItemOffset = List_c::GetItemOffset(v2, 1u, (int)(float)((float)((float)v11 * 0.000015259) * (float)NumItems));
    return *(__int16 *)(ItemOffset + 10);
  }
  else
  {
    v4 = *(_DWORD *)v2;
    for ( i = 0; v4; v4 = *(_DWORD *)(v4 + 4) )
    {
      if ( *(unsigned __int8 *)(v4 + 14) <= a2 && *(unsigned __int8 *)(v4 + 15) >= a2 )
        ++i;
    }
    v6 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * (float)i);
    ItemOffset = *(_DWORD *)v2;
    if ( *(_DWORD *)v2 )
    {
      v8 = 0;
      do
      {
        if ( *(unsigned __int8 *)(ItemOffset + 14) <= a2 && *(unsigned __int8 *)(ItemOffset + 15) >= a2 )
        {
          if ( v8 == v6 )
            return *(__int16 *)(ItemOffset + 10);
          ++v8;
        }
        ItemOffset = *(_DWORD *)(ItemOffset + 4);
      }
      while ( ItemOffset );
    }
    return -1;
  }
}


// ============================================================

// Address: 0x475cc4
// Original: _ZN19FurnitureSubGroup_c12AddFurnitureEtshhh
// Demangled: FurnitureSubGroup_c::AddFurniture(ushort,short,uchar,uchar,uchar)
int __fastcall FurnitureSubGroup_c::AddFurniture(
        FurnitureSubGroup_c *this,
        int a2,
        __int16 a3,
        char a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  int v6; // r4
  char *v7; // r5
  int v8; // r1
  unsigned __int64 v9; // d0
  int v11; // r2
  ListItem_c *v12; // r1
  int v13; // r5

  if ( (unsigned __int16)g_currFurnitureId > 0xFFu )
    return 0;
  v6 = 5 * (unsigned __int16)g_currFurnitureId++;
  v7 = (char *)&g_furnitureStore + 4 * v6;
  *((_WORD *)v7 + 5) = a3;
  *((_WORD *)v7 + 4) = a2;
  v8 = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[a2]) + 44);
  if ( *((_BYTE *)this + 26) )
    v9 = vsub_f32(*(float32x2_t *)(v8 + 12), *(float32x2_t *)v8).n64_u64[0];
  else
    v9 = vadd_f32(*(float32x2_t *)(v8 + 12), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
  v11 = (int)*((float *)&v9 + 1);
  v12 = (ListItem_c *)((char *)&g_furnitureStore + 4 * v6);
  v13 = (int)*(float *)&v9;
  *((_BYTE *)v12 + 14) = a4;
  *((_BYTE *)v12 + 15) = a5;
  *((_BYTE *)v12 + 19) = a6;
  *(float *)&v9 = *(float *)&v9 - (float)(int)*(float *)&v9;
  if ( (float)(*((float *)&v9 + 1) - (float)(int)*((float *)&v9 + 1)) >= 0.02 )
    LOBYTE(v11) = v11 + 1;
  *((_BYTE *)v12 + 13) = v11;
  if ( *(float *)&v9 >= 0.02 )
    LOBYTE(v13) = v13 + 1;
  *((_BYTE *)v12 + 12) = v13;
  *((_BYTE *)v12 + 16) = *((_BYTE *)this + 24);
  *((_BYTE *)v12 + 17) = *((_BYTE *)this + 25);
  *((_BYTE *)v12 + 18) = *((_BYTE *)this + 26);
  List_c::AddItem((FurnitureSubGroup_c *)((char *)this + 12), v12);
  return 1;
}


// ============================================================
