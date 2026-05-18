
// Address: 0x18b3b0
// Original: j__ZN18FurnitureManager_c12GetFurnitureEiish
// Demangled: FurnitureManager_c::GetFurniture(int,int,short,uchar)
// attributes: thunk
int __fastcall FurnitureManager_c::GetFurniture(
        FurnitureManager_c *this,
        int a2,
        int a3,
        __int16 a4,
        unsigned __int8 a5)
{
  return _ZN18FurnitureManager_c12GetFurnitureEiish(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x1903d4
// Original: j__ZN18FurnitureManager_c13GetSubGroupIdEPc
// Demangled: FurnitureManager_c::GetSubGroupId(char *)
// attributes: thunk
int __fastcall FurnitureManager_c::GetSubGroupId(FurnitureManager_c *this, char *a2)
{
  return _ZN18FurnitureManager_c13GetSubGroupIdEPc(this, a2);
}


// ============================================================

// Address: 0x19680c
// Original: j__ZN18FurnitureManager_cC2Ev
// Demangled: FurnitureManager_c::FurnitureManager_c(void)
// attributes: thunk
void __fastcall FurnitureManager_c::FurnitureManager_c(FurnitureManager_c *this)
{
  _ZN18FurnitureManager_cC2Ev(this);
}


// ============================================================

// Address: 0x196ad4
// Original: j__ZN18FurnitureManager_c13LoadFurnitureEv
// Demangled: FurnitureManager_c::LoadFurniture(void)
// attributes: thunk
int __fastcall FurnitureManager_c::LoadFurniture(FurnitureManager_c *this)
{
  return _ZN18FurnitureManager_c13LoadFurnitureEv(this);
}


// ============================================================

// Address: 0x197e74
// Original: j__ZN18FurnitureManager_c4InitEv
// Demangled: FurnitureManager_c::Init(void)
// attributes: thunk
int __fastcall FurnitureManager_c::Init(FurnitureManager_c *this)
{
  return _ZN18FurnitureManager_c4InitEv(this);
}


// ============================================================

// Address: 0x19b11c
// Original: j__ZN18FurnitureManager_c10GetGroupIdEPc
// Demangled: FurnitureManager_c::GetGroupId(char *)
// attributes: thunk
int __fastcall FurnitureManager_c::GetGroupId(FurnitureManager_c *this, char *a2)
{
  return _ZN18FurnitureManager_c10GetGroupIdEPc(this, a2);
}


// ============================================================

// Address: 0x19ca6c
// Original: j__ZN18FurnitureManager_c4ExitEv
// Demangled: FurnitureManager_c::Exit(void)
// attributes: thunk
int __fastcall FurnitureManager_c::Exit(FurnitureManager_c *this)
{
  return _ZN18FurnitureManager_c4ExitEv(this);
}


// ============================================================

// Address: 0x19cdc0
// Original: j__ZN18FurnitureManager_c11GetRandomIdEiih
// Demangled: FurnitureManager_c::GetRandomId(int,int,uchar)
// attributes: thunk
int __fastcall FurnitureManager_c::GetRandomId(FurnitureManager_c *this, int a2, int a3, unsigned __int8 a4)
{
  return _ZN18FurnitureManager_c11GetRandomIdEiih(this, a2, a3, a4);
}


// ============================================================

// Address: 0x4447be
// Original: _ZN18FurnitureManager_c4ExitEv
// Demangled: FurnitureManager_c::Exit(void)
int __fastcall FurnitureManager_c::Exit(FurnitureManager_c *this)
{
  int i; // r5
  int j; // r6
  int k; // r6
  int m; // r6
  int n; // r6
  int ii; // r6
  int jj; // r6
  int kk; // r6
  List_c *v10; // r4
  int mm; // r5
  int v12; // t1

  List_c::RemoveAll((FurnitureManager_c *)((char *)this + 8300));
  for ( i = *(_DWORD *)this; i; i = *(_DWORD *)(i + 4) )
    List_c::RemoveAll((List_c *)(i + 12));
  List_c::RemoveAll(this);
  for ( j = *((_DWORD *)this + 3); j; j = *(_DWORD *)(j + 4) )
    List_c::RemoveAll((List_c *)(j + 12));
  List_c::RemoveAll((FurnitureManager_c *)((char *)this + 12));
  for ( k = *((_DWORD *)this + 6); k; k = *(_DWORD *)(k + 4) )
    List_c::RemoveAll((List_c *)(k + 12));
  List_c::RemoveAll((FurnitureManager_c *)((char *)this + 24));
  for ( m = *((_DWORD *)this + 9); m; m = *(_DWORD *)(m + 4) )
    List_c::RemoveAll((List_c *)(m + 12));
  List_c::RemoveAll((FurnitureManager_c *)((char *)this + 36));
  for ( n = *((_DWORD *)this + 12); n; n = *(_DWORD *)(n + 4) )
    List_c::RemoveAll((List_c *)(n + 12));
  List_c::RemoveAll((FurnitureManager_c *)((char *)this + 48));
  for ( ii = *((_DWORD *)this + 15); ii; ii = *(_DWORD *)(ii + 4) )
    List_c::RemoveAll((List_c *)(ii + 12));
  List_c::RemoveAll((FurnitureManager_c *)((char *)this + 60));
  for ( jj = *((_DWORD *)this + 18); jj; jj = *(_DWORD *)(jj + 4) )
    List_c::RemoveAll((List_c *)(jj + 12));
  List_c::RemoveAll((FurnitureManager_c *)((char *)this + 72));
  for ( kk = *((_DWORD *)this + 21); kk; kk = *(_DWORD *)(kk + 4) )
    List_c::RemoveAll((List_c *)(kk + 12));
  List_c::RemoveAll((FurnitureManager_c *)((char *)this + 84));
  v12 = *((_DWORD *)this + 24);
  v10 = (FurnitureManager_c *)((char *)this + 96);
  for ( mm = v12; mm; mm = *(_DWORD *)(mm + 4) )
    List_c::RemoveAll((List_c *)(mm + 12));
  return sub_19CBF8(v10);
}


// ============================================================

// Address: 0x4448d0
// Original: _ZN18FurnitureManager_c12GetFurnitureEiish
// Demangled: FurnitureManager_c::GetFurniture(int,int,short,uchar)
int __fastcall FurnitureManager_c::GetFurniture(FurnitureManager_c *this, int a2, int a3, __int16 a4, unsigned int a5)
{
  FurnitureSubGroup_c *v5; // r0

  v5 = (FurnitureSubGroup_c *)*((_DWORD *)this + 3 * a2);
  if ( !v5 )
    return 0;
  while ( *((_DWORD *)v5 + 2) != a3 )
  {
    v5 = (FurnitureSubGroup_c *)*((_DWORD *)v5 + 1);
    if ( !v5 )
      return 0;
  }
  return FurnitureSubGroup_c::GetFurniture(v5, a4, a5);
}


// ============================================================

// Address: 0x4448f4
// Original: _ZN18FurnitureManager_c11GetRandomIdEiih
// Demangled: FurnitureManager_c::GetRandomId(int,int,uchar)
int __fastcall FurnitureManager_c::GetRandomId(FurnitureManager_c *this, int a2, int a3, unsigned __int8 a4)
{
  FurnitureSubGroup_c *i; // r0

  for ( i = (FurnitureSubGroup_c *)*((_DWORD *)this + 3 * a2); ; i = (FurnitureSubGroup_c *)*((_DWORD *)i + 1) )
  {
    if ( !i )
      return -1;
    if ( *((_DWORD *)i + 2) == a3 )
      break;
  }
  return FurnitureSubGroup_c::GetRandomId(i, a4);
}


// ============================================================

// Address: 0x444914
// Original: _ZN18FurnitureManager_cC2Ev
// Demangled: FurnitureManager_c::FurnitureManager_c(void)
void __fastcall FurnitureManager_c::FurnitureManager_c(FurnitureManager_c *this)
{
  int i; // r5

  List_c::List_c(this);
  List_c::List_c((FurnitureManager_c *)((char *)this + 12));
  List_c::List_c((FurnitureManager_c *)((char *)this + 24));
  List_c::List_c((FurnitureManager_c *)((char *)this + 36));
  List_c::List_c((FurnitureManager_c *)((char *)this + 48));
  List_c::List_c((FurnitureManager_c *)((char *)this + 60));
  List_c::List_c((FurnitureManager_c *)((char *)this + 72));
  List_c::List_c((FurnitureManager_c *)((char *)this + 84));
  List_c::List_c((FurnitureManager_c *)((char *)this + 96));
  for ( i = 0; i != 0x2000; i += 16 )
    ListItem_c::ListItem_c((FurnitureManager_c *)((char *)this + i + 108));
  List_c::List_c((FurnitureManager_c *)((char *)this + 8300));
}


// ============================================================

// Address: 0x44497e
// Original: _ZN18FurnitureManager_cD2Ev
// Demangled: FurnitureManager_c::~FurnitureManager_c()
void __fastcall FurnitureManager_c::~FurnitureManager_c(FurnitureManager_c *this)
{
  int i; // r5

  List_c::~List_c((FurnitureManager_c *)((char *)this + 8300));
  for ( i = 8284; i != 92; i -= 16 )
    ListItem_c::~ListItem_c((FurnitureManager_c *)((char *)this + i));
  List_c::~List_c((FurnitureManager_c *)((char *)this + 96));
  List_c::~List_c((FurnitureManager_c *)((char *)this + 84));
  List_c::~List_c((FurnitureManager_c *)((char *)this + 72));
  List_c::~List_c((FurnitureManager_c *)((char *)this + 60));
  List_c::~List_c((FurnitureManager_c *)((char *)this + 48));
  List_c::~List_c((FurnitureManager_c *)((char *)this + 36));
  List_c::~List_c((FurnitureManager_c *)((char *)this + 24));
  List_c::~List_c((FurnitureManager_c *)((char *)this + 12));
  j_List_c::~List_c(this);
}


// ============================================================

// Address: 0x4753a4
// Original: _ZN18FurnitureManager_c4InitEv
// Demangled: FurnitureManager_c::Init(void)
int __fastcall FurnitureManager_c::Init(FurnitureManager_c *this)
{
  List_c *v2; // r5
  int v3; // r6

  v2 = (FurnitureManager_c *)((char *)this + 8300);
  v3 = 108;
  g_currSubGroupId = 0;
  g_currFurnitureId = 0;
  do
  {
    List_c::AddItem(v2, (FurnitureManager_c *)((char *)this + v3));
    v3 += 16;
  }
  while ( v3 != 8300 );
  FurnitureGroup_c::Init(this);
  FurnitureGroup_c::Init((FurnitureManager_c *)((char *)this + 12));
  FurnitureGroup_c::Init((FurnitureManager_c *)((char *)this + 24));
  FurnitureGroup_c::Init((FurnitureManager_c *)((char *)this + 36));
  FurnitureGroup_c::Init((FurnitureManager_c *)((char *)this + 48));
  FurnitureGroup_c::Init((FurnitureManager_c *)((char *)this + 60));
  FurnitureGroup_c::Init((FurnitureManager_c *)((char *)this + 72));
  FurnitureGroup_c::Init((FurnitureManager_c *)((char *)this + 84));
  FurnitureGroup_c::Init((FurnitureManager_c *)((char *)this + 96));
  FurnitureManager_c::LoadFurniture(this);
  return 1;
}


// ============================================================

// Address: 0x475434
// Original: _ZN18FurnitureManager_c13LoadFurnitureEv
// Demangled: FurnitureManager_c::LoadFurniture(void)
int __fastcall FurnitureManager_c::LoadFurniture(FurnitureManager_c *this, int a2, const char *a3)
{
  CFileLoader *v4; // r5
  unsigned int v5; // r1
  __int64 v6; // r0
  const char *Line; // r9
  int GroupId; // r8
  int *v9; // r2
  FurnitureSubGroup_c *v10; // r4
  unsigned __int8 v11; // r6
  unsigned __int8 v12; // r8
  __int16 v13; // r11
  unsigned __int8 v14; // r9
  unsigned __int16 v15; // r10
  FurnitureManager_c *v16; // r0
  FurnitureManager_c *v17; // r0
  int v18; // r0
  bool v19; // zf
  int v21; // [sp+1Ch] [bp-124h]
  FurnitureManager_c *v22; // [sp+20h] [bp-120h]
  int SubGroupId; // [sp+24h] [bp-11Ch]
  unsigned __int8 v24; // [sp+28h] [bp-118h] BYREF
  char v25[4]; // [sp+2Ch] [bp-114h] BYREF
  int v26; // [sp+30h] [bp-110h] BYREF
  int v27; // [sp+34h] [bp-10Ch] BYREF
  int v28; // [sp+38h] [bp-108h] BYREF
  int v29; // [sp+3Ch] [bp-104h] BYREF
  char v30[128]; // [sp+40h] [bp-100h] BYREF
  int v31[16]; // [sp+C0h] [bp-80h] BYREF
  char v32[32]; // [sp+100h] [bp-40h] BYREF
  int v33; // [sp+120h] [bp-20h]

  v4 = (CFileLoader *)CFileMgr::OpenFile((CFileMgr *)"data\\furnitur.dat", "rb", a3);
  Line = (const char *)CFileLoader::LoadLine(v4, v5);
  if ( Line )
  {
    GroupId = -1;
    SubGroupId = -1;
    do
    {
      v18 = *(unsigned __int8 *)Line;
      v19 = v18 == 35;
      if ( v18 != 35 )
        v19 = v18 == 0;
      if ( !v19 )
      {
        sscanf(Line, "%s", v32);
        if ( !strcmp(v32, "GROUP:") )
        {
          v16 = (FurnitureManager_c *)sscanf(Line, "%s %s", v32, v30);
          GroupId = FurnitureManager_c::GetGroupId(v16, v30);
        }
        else if ( !strcmp(v32, "SUBGROUP:") )
        {
          v17 = (FurnitureManager_c *)sscanf(
                                        Line,
                                        "%s %s %d %d %d %d %d %d %d",
                                        v32,
                                        v30,
                                        v31,
                                        &v28,
                                        &v29,
                                        &v27,
                                        &v26,
                                        v25,
                                        &v24);
          SubGroupId = FurnitureManager_c::GetSubGroupId(v17, v30);
          FurnitureGroup_c::AddSubGroup(
            (FurnitureManager_c *)((char *)this + 12 * GroupId),
            SubGroupId,
            v31[0],
            v28,
            v29,
            v27,
            v26,
            v25[0],
            v24);
        }
        else if ( !strcmp(v32, "ITEM:") )
        {
          sscanf(Line, "%s %s %d %d %d %d", v32, v31, &v29, &v28, &v27, &v26);
          v21 = GroupId;
          v22 = this;
          if ( CModelInfo::GetModelInfo((CModelInfo *)v31, v25, v9) )
          {
            v10 = (FurnitureSubGroup_c *)*((_DWORD *)this + 3 * GroupId);
            if ( v10 )
            {
              v11 = v27;
              v12 = v28;
              v13 = v29;
              v15 = *(_WORD *)v25;
              v14 = v26;
              do
              {
                HIDWORD(v6) = SubGroupId;
                if ( *((_DWORD *)v10 + 2) == SubGroupId )
                  FurnitureSubGroup_c::AddFurniture(v10, v15, v13, v12, v11, v14);
                v10 = (FurnitureSubGroup_c *)*((_DWORD *)v10 + 1);
              }
              while ( v10 );
            }
          }
          else
          {
            v6 = sub_5E6BC0(v30, "Cannot find model %s", (const char *)v31);
          }
          GroupId = v21;
          this = v22;
        }
      }
      Line = (const char *)CFileLoader::LoadLine(v4, HIDWORD(v6));
    }
    while ( Line );
  }
  CFileMgr::CloseFile(v4, HIDWORD(v6));
  return _stack_chk_guard - v33;
}


// ============================================================

// Address: 0x47568c
// Original: _ZN18FurnitureManager_c10GetGroupIdEPc
// Demangled: FurnitureManager_c::GetGroupId(char *)
int __fastcall FurnitureManager_c::GetGroupId(FurnitureManager_c *this, char *a2)
{
  int v3; // r1
  int result; // r0

  if ( !strcmp(a2, "IT_SHOP") )
    return 0;
  if ( !strcmp(a2, "IT_OFFICE") )
    return 1;
  if ( !strcmp(a2, "IT_LOUNGE") )
    return 2;
  if ( !strcmp(a2, "IT_BEDROOM") )
    return 3;
  if ( !strcmp(a2, "IT_KITCHEN") )
    return 4;
  v3 = strcmp(a2, "IT_MISC");
  result = -1;
  if ( !v3 )
    return 8;
  return result;
}


// ============================================================

// Address: 0x475730
// Original: _ZN18FurnitureManager_c13GetSubGroupIdEPc
// Demangled: FurnitureManager_c::GetSubGroupId(char *)
int __fastcall FurnitureManager_c::GetSubGroupId(FurnitureManager_c *this, char *a2)
{
  int v3; // r1
  int result; // r0

  if ( !strcmp(a2, "SHOP_UNIT1_L") )
    return 0;
  if ( !strcmp(a2, "SHOP_UNIT1_R") )
    return 1;
  if ( !strcmp(a2, "SHOP_UNIT1_M") )
    return 2;
  if ( !strcmp(a2, "SHOP_UNIT2_L") )
    return 3;
  if ( !strcmp(a2, "SHOP_UNIT2_R") )
    return 4;
  if ( !strcmp(a2, "SHOP_UNIT2_M") )
    return 5;
  if ( !strcmp(a2, "SHOP_UNIT3_L") )
    return 6;
  if ( !strcmp(a2, "SHOP_UNIT3_R") )
    return 7;
  if ( !strcmp(a2, "SHOP_UNIT3_M") )
    return 8;
  if ( !strcmp(a2, "SHOP_UNIT4_L") )
    return 9;
  if ( !strcmp(a2, "SHOP_UNIT4_R") )
    return 10;
  if ( !strcmp(a2, "SHOP_UNIT4_M") )
    return 11;
  if ( !strcmp(a2, "SHOP_CHECKOUTS") )
    return 12;
  if ( !strcmp(a2, "SHOP_BASKETS") )
    return 13;
  if ( !strcmp(a2, "SHOP_LIGHTS") )
    return 14;
  if ( !strcmp(a2, "OFFICE_DESKS") )
    return 0;
  if ( !strcmp(a2, "OFFICE_CHAIRS") )
    return 1;
  if ( !strcmp(a2, "OFFICE_WATERCOOLERS") )
    return 2;
  if ( !strcmp(a2, "OFFICE_FILINGCABS") )
    return 3;
  if ( !strcmp(a2, "LOUNGE_SOFAS") )
    return 0;
  if ( !strcmp(a2, "LOUNGE_CHAIRS") )
    return 1;
  if ( !strcmp(a2, "LOUNGE_TVSTANDS") )
    return 2;
  if ( !strcmp(a2, "LOUNGE_TVS") )
    return 3;
  if ( !strcmp(a2, "LOUNGE_TABLES") )
    return 4;
  if ( !strcmp(a2, "LOUNGE_LAMPS") )
    return 5;
  if ( !strcmp(a2, "LOUNGE_HIFI_TABLES") )
    return 6;
  if ( !strcmp(a2, "LOUNGE_VIDEOS") )
    return 7;
  if ( !strcmp(a2, "LOUNGE_HIFIS") )
    return 8;
  if ( !strcmp(a2, "LOUNGE_CONSOLES") )
    return 9;
  if ( !strcmp(a2, "BEDROOM_BEDS") )
    return 0;
  if ( !strcmp(a2, "BEDROOM_TABLES") )
    return 1;
  if ( !strcmp(a2, "BEDROOM_DRAWERS") )
    return 2;
  if ( !strcmp(a2, "BEDROOM_WARDROBES") )
    return 3;
  if ( !strcmp(a2, "KITCHEN_UNIT_L") )
    return 0;
  if ( !strcmp(a2, "KITCHEN_UNIT_M") )
    return 1;
  if ( !strcmp(a2, "KITCHEN_UNIT_R") )
    return 2;
  if ( !strcmp(a2, "KITCHEN_UNIT_SINKS") )
    return 3;
  if ( !strcmp(a2, "KITCHEN_UNIT_FRIDGES") )
    return 4;
  if ( !strcmp(a2, "KITCHEN_UNIT_OVENS") )
    return 5;
  if ( !strcmp(a2, "KITCHEN_UNIT_WASHERS") )
    return 6;
  if ( !strcmp(a2, "KITCHEN_UNIT_CORNERS") )
    return 7;
  if ( !strcmp(a2, "KITCHEN_MICROWAVES") )
    return 8;
  if ( !strcmp(a2, "KITCHEN_TOASTERS") )
    return 9;
  if ( !strcmp(a2, "KITCHEN_TVS") )
    return 10;
  if ( !strcmp(a2, "MISC_PLANTS") )
    return 0;
  if ( !strcmp(a2, "MISC_LIGHTS") )
    return 1;
  if ( !strcmp(a2, "MISC_RUGS") )
    return 2;
  if ( !strcmp(a2, "MISC_PLATES") )
    return 3;
  if ( !strcmp(a2, "MISC_FOOD") )
    return 4;
  if ( !strcmp(a2, "MISC_MAGAZINES") )
    return 5;
  v3 = strcmp(a2, "MISC_CLOTHES");
  result = -1;
  if ( !v3 )
    return 6;
  return result;
}


// ============================================================
