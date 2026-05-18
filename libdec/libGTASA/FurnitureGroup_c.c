
// Address: 0x1992b8
// Original: j__ZN16FurnitureGroup_c4InitEv
// Demangled: FurnitureGroup_c::Init(void)
// attributes: thunk
int __fastcall FurnitureGroup_c::Init(FurnitureGroup_c *this)
{
  return _ZN16FurnitureGroup_c4InitEv(this);
}


// ============================================================

// Address: 0x199670
// Original: j__ZN16FurnitureGroup_c11AddSubGroupEiiiiihhh
// Demangled: FurnitureGroup_c::AddSubGroup(int,int,int,int,int,uchar,uchar,uchar)
// attributes: thunk
int __fastcall FurnitureGroup_c::AddSubGroup(
        FurnitureGroup_c *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  return _ZN16FurnitureGroup_c11AddSubGroupEiiiiihhh(this, a2, a3, a4, a5, a6, a7, a8, a9);
}


// ============================================================

// Address: 0x4446fc
// Original: _ZN16FurnitureGroup_c4InitEv
// Demangled: FurnitureGroup_c::Init(void)
int __fastcall FurnitureGroup_c::Init(FurnitureGroup_c *this)
{
  return 1;
}


// ============================================================

// Address: 0x444700
// Original: _ZN16FurnitureGroup_c4ExitEv
// Demangled: FurnitureGroup_c::Exit(void)
int __fastcall FurnitureGroup_c::Exit(FurnitureGroup_c *this)
{
  int i; // r5

  for ( i = *(_DWORD *)this; i; i = *(_DWORD *)(i + 4) )
    List_c::RemoveAll((List_c *)(i + 12));
  return sub_19CBF8(this);
}


// ============================================================

// Address: 0x444724
// Original: _ZN16FurnitureGroup_c11AddSubGroupEiiiiihhh
// Demangled: FurnitureGroup_c::AddSubGroup(int,int,int,int,int,uchar,uchar,uchar)
int __fastcall FurnitureGroup_c::AddSubGroup(
        FurnitureGroup_c *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  __int16 v9; // r6
  char *v10; // r2

  if ( (unsigned __int16)g_currSubGroupId > 0x7Fu )
    return 0;
  v9 = g_currSubGroupId + 1;
  v10 = (char *)&g_subGroupStore + 28 * (unsigned __int16)g_currSubGroupId;
  v10[24] = a7;
  *((_DWORD *)v10 + 2) = a2;
  v10[25] = a8;
  g_currSubGroupId = v9;
  v10[26] = a9;
  List_c::AddItem(this, (ListItem_c *)v10);
  return 1;
}


// ============================================================

// Address: 0x444788
// Original: _ZN16FurnitureGroup_c12GetFurnitureEish
// Demangled: FurnitureGroup_c::GetFurniture(int,short,uchar)
int __fastcall FurnitureGroup_c::GetFurniture(FurnitureSubGroup_c **this, int a2, __int16 a3, unsigned __int8 a4)
{
  FurnitureSubGroup_c *i; // r0

  for ( i = *this; ; i = (FurnitureSubGroup_c *)*((_DWORD *)i + 1) )
  {
    if ( !i )
      return 0;
    if ( *((_DWORD *)i + 2) == a2 )
      break;
  }
  return FurnitureSubGroup_c::GetFurniture(i, a3, a4);
}


// ============================================================

// Address: 0x4447a4
// Original: _ZN16FurnitureGroup_c11GetRandomIdEih
// Demangled: FurnitureGroup_c::GetRandomId(int,uchar)
int __fastcall FurnitureGroup_c::GetRandomId(FurnitureSubGroup_c **this, int a2, unsigned __int8 a3)
{
  FurnitureSubGroup_c *i; // r0

  for ( i = *this; ; i = (FurnitureSubGroup_c *)*((_DWORD *)i + 1) )
  {
    if ( !i )
      return -1;
    if ( *((_DWORD *)i + 2) == a2 )
      break;
  }
  return FurnitureSubGroup_c::GetRandomId(i, a3);
}


// ============================================================

// Address: 0x475c80
// Original: _ZN16FurnitureGroup_c12AddFurnitureEitshhh
// Demangled: FurnitureGroup_c::AddFurniture(int,ushort,short,uchar,uchar,uchar)
int __fastcall FurnitureGroup_c::AddFurniture(
        FurnitureSubGroup_c **this,
        int a2,
        unsigned __int16 a3,
        __int16 a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        unsigned __int8 a7)
{
  FurnitureSubGroup_c *i; // r4

  for ( i = *this; i; i = (FurnitureSubGroup_c *)*((_DWORD *)i + 1) )
  {
    if ( *((_DWORD *)i + 2) == a2 )
      FurnitureSubGroup_c::AddFurniture(i, a3, a4, a5, a6, a7);
  }
  return 1;
}


// ============================================================
