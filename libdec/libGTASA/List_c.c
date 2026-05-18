
// Address: 0x18a6c4
// Original: j__ZN6List_c11GetNumItemsEv
// Demangled: List_c::GetNumItems(void)
// attributes: thunk
int __fastcall List_c::GetNumItems(List_c *this)
{
  return _ZN6List_c11GetNumItemsEv(this);
}


// ============================================================

// Address: 0x1904a8
// Original: j__ZN6List_c10RemoveHeadEv
// Demangled: List_c::RemoveHead(void)
// attributes: thunk
int __fastcall List_c::RemoveHead(List_c *this)
{
  return _ZN6List_c10RemoveHeadEv(this);
}


// ============================================================

// Address: 0x1929c8
// Original: j__ZN6List_c10RemoveItemEP10ListItem_c
// Demangled: List_c::RemoveItem(ListItem_c *)
// attributes: thunk
int __fastcall List_c::RemoveItem(List_c *this, ListItem_c *a2)
{
  return _ZN6List_c10RemoveItemEP10ListItem_c(this, a2);
}


// ============================================================

// Address: 0x192c40
// Original: j__ZN6List_cD2Ev
// Demangled: List_c::~List_c()
// attributes: thunk
void __fastcall List_c::~List_c(List_c *this)
{
  _ZN6List_cD2Ev(this);
}


// ============================================================

// Address: 0x194074
// Original: j__ZN6List_c13GetItemOffsetEhi
// Demangled: List_c::GetItemOffset(uchar,int)
// attributes: thunk
int __fastcall List_c::GetItemOffset(List_c *this, unsigned __int8 a2, int a3)
{
  return _ZN6List_c13GetItemOffsetEhi(this, a2, a3);
}


// ============================================================

// Address: 0x1955c0
// Original: j__ZN6List_c7AddItemEP10ListItem_c
// Demangled: List_c::AddItem(ListItem_c *)
// attributes: thunk
int __fastcall List_c::AddItem(List_c *this, ListItem_c *a2)
{
  return _ZN6List_c7AddItemEP10ListItem_c(this, a2);
}


// ============================================================

// Address: 0x19cbfc
// Original: j__ZN6List_c9RemoveAllEv
// Demangled: List_c::RemoveAll(void)
// attributes: thunk
int __fastcall List_c::RemoveAll(List_c *this)
{
  return _ZN6List_c9RemoveAllEv(this);
}


// ============================================================

// Address: 0x1a1634
// Original: j__ZN6List_cC2Ev
// Demangled: List_c::List_c(void)
// attributes: thunk
void __fastcall List_c::List_c(List_c *this)
{
  _ZN6List_cC2Ev(this);
}


// ============================================================

// Address: 0x36ccae
// Original: _ZN6List_cC2Ev
// Demangled: List_c::List_c(void)
void __fastcall List_c::List_c(List_c *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
}


// ============================================================

// Address: 0x36ccb8
// Original: _ZN6List_cD2Ev
// Demangled: List_c::~List_c()
void __fastcall List_c::~List_c(List_c *this)
{
  ;
}


// ============================================================

// Address: 0x36ccba
// Original: _ZN6List_c7AddItemEP10ListItem_c
// Demangled: List_c::AddItem(ListItem_c *)
int __fastcall List_c::AddItem(List_c *this, ListItem_c *a2)
{
  _DWORD *v2; // r2
  int v3; // r1

  v2 = *(_DWORD **)this;
  *(_DWORD *)this = a2;
  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = v2;
  if ( !v2 )
    v2 = (_DWORD *)((char *)this + 4);
  *v2 = a2;
  v3 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 2) = v3 + 1;
  return v3;
}


// ============================================================

// Address: 0x36ccd6
// Original: _ZN6List_c10RemoveItemEP10ListItem_c
// Demangled: List_c::RemoveItem(ListItem_c *)
int __fastcall List_c::RemoveItem(List_c *this, ListItem_c *a2)
{
  __int64 v2; // kr00_8
  _DWORD *v3; // r3
  int v4; // r1

  v2 = *(_QWORD *)a2;
  v3 = (_DWORD *)*((_DWORD *)a2 + 1);
  if ( !v3 )
    v3 = (_DWORD *)((char *)this + 4);
  *v3 = v2;
  if ( (_DWORD)v2 )
    *(_DWORD *)(v2 + 4) = HIDWORD(v2);
  else
    *(_DWORD *)this = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 2) = v4 - 1;
  return v4;
}


// ============================================================

// Address: 0x36ccfe
// Original: _ZN6List_c10RemoveHeadEv
// Demangled: List_c::RemoveHead(void)
int __fastcall List_c::RemoveHead(List_c *this)
{
  int result; // r0
  List_c *v3; // r2

  result = *(_DWORD *)this;
  if ( !result )
    return 0;
  if ( result == *((_DWORD *)this + 1) )
  {
    *((_DWORD *)this + 1) = 0;
    v3 = this;
  }
  else
  {
    v3 = *(List_c **)(result + 4);
    *(_DWORD *)this = v3;
    if ( !v3 )
      goto LABEL_8;
  }
  *(_DWORD *)v3 = 0;
LABEL_8:
  --*((_DWORD *)this + 2);
  return result;
}


// ============================================================

// Address: 0x36cd2a
// Original: _ZN6List_c9RemoveAllEv
// Demangled: List_c::RemoveAll(void)
int __fastcall List_c::RemoveAll(List_c *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  return 0;
}


// ============================================================

// Address: 0x36cd36
// Original: _ZN6List_c11GetNumItemsEv
// Demangled: List_c::GetNumItems(void)
int __fastcall List_c::GetNumItems(List_c *this)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x36cd3a
// Original: _ZN6List_c10AppendItemEP10ListItem_c
// Demangled: List_c::AppendItem(ListItem_c *)
int __fastcall List_c::AppendItem(List_c *this, ListItem_c *a2)
{
  unsigned int v2; // r2
  List_c *v3; // r3
  int v4; // r1

  v2 = *((_DWORD *)this + 1);
  *((_DWORD *)this + 1) = a2;
  *(_QWORD *)a2 = v2;
  v3 = this;
  if ( v2 )
    v3 = (List_c *)(v2 + 4);
  *(_DWORD *)v3 = a2;
  v4 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 2) = v4 + 1;
  return v4;
}


// ============================================================

// Address: 0x36cd58
// Original: _ZN6List_c15InsertAfterItemEP10ListItem_cS1_
// Demangled: List_c::InsertAfterItem(ListItem_c *,ListItem_c *)
int __fastcall List_c::InsertAfterItem(List_c *this, ListItem_c *a2, ListItem_c *a3)
{
  List_c *v3; // r12
  ListItem_c *v4; // r3
  bool v5; // zf
  _DWORD *v6; // r2
  int v7; // r1

  v3 = this;
  do
  {
    v4 = *(ListItem_c **)v3;
    v5 = *(_DWORD *)v3 == (_DWORD)a3;
    if ( *(ListItem_c **)v3 != a3 )
    {
      v3 = (ListItem_c *)((char *)v4 + 4);
      v5 = v4 == 0;
    }
  }
  while ( !v5 );
  if ( v4 )
  {
    v6 = (_DWORD *)*((_DWORD *)v4 + 1);
    *((_DWORD *)v4 + 1) = a2;
    *(_DWORD *)a2 = v4;
    *((_DWORD *)a2 + 1) = v6;
    if ( !v6 )
      v6 = (_DWORD *)((char *)this + 4);
    *v6 = a2;
  }
  v7 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 2) = v7 + 1;
  return v7;
}


// ============================================================

// Address: 0x36cd86
// Original: _ZN6List_c16InsertBeforeItemEP10ListItem_cS1_
// Demangled: List_c::InsertBeforeItem(ListItem_c *,ListItem_c *)
int __fastcall List_c::InsertBeforeItem(List_c *this, ListItem_c *a2, ListItem_c *a3)
{
  List_c *v3; // r12
  __int64 v4; // r2
  bool v5; // zf
  int v7; // r1

  v3 = this;
  do
  {
    HIDWORD(v4) = *(_DWORD *)v3;
    v5 = *(_DWORD *)v3 == (_DWORD)a3;
    if ( *(ListItem_c **)v3 != a3 )
    {
      v3 = (List_c *)(HIDWORD(v4) + 4);
      v5 = HIDWORD(v4) == 0;
    }
  }
  while ( !v5 );
  if ( HIDWORD(v4) )
  {
    LODWORD(v4) = *(_DWORD *)HIDWORD(v4);
    *(_DWORD *)HIDWORD(v4) = a2;
    *(_QWORD *)a2 = v4;
    HIDWORD(v4) = this;
    if ( (_DWORD)v4 )
      HIDWORD(v4) = v4 + 4;
    *(_DWORD *)HIDWORD(v4) = a2;
  }
  v7 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 2) = v7 + 1;
  return v7;
}


// ============================================================

// Address: 0x36cdb6
// Original: _ZN6List_c10RemoveTailEv
// Demangled: List_c::RemoveTail(void)
int *__fastcall List_c::RemoveTail(List_c *this)
{
  int *result; // r0
  int *v3; // r2
  int v4; // r3

  result = 0;
  v3 = (int *)*((_DWORD *)this + 1);
  if ( v3 )
  {
    v4 = *v3;
    *((_DWORD *)this + 1) = *v3;
    *(_DWORD *)(v4 + 4) = 0;
    --*((_DWORD *)this + 2);
    return v3;
  }
  return result;
}


// ============================================================

// Address: 0x36cdd2
// Original: _ZN6List_c7GetTailEv
// Demangled: List_c::GetTail(void)
int __fastcall List_c::GetTail(List_c *this)
{
  return *((_DWORD *)this + 1);
}


// ============================================================

// Address: 0x36cdd6
// Original: _ZN6List_c7GetPrevEP10ListItem_c
// Demangled: List_c::GetPrev(ListItem_c *)
int __fastcall List_c::GetPrev(List_c *this, ListItem_c *a2)
{
  return *(_DWORD *)a2;
}


// ============================================================

// Address: 0x36cdda
// Original: _ZN6List_c13GetItemOffsetEhi
// Demangled: List_c::GetItemOffset(uchar,int)
_DWORD *__fastcall List_c::GetItemOffset(List_c *this, int a2, int a3)
{
  _DWORD *result; // r0
  int v4; // r1
  int v5; // r1

  if ( !a2 )
  {
    result = (_DWORD *)*((_DWORD *)this + 1);
    if ( a3 < 1 )
      return result;
    v5 = 0;
    while ( result )
    {
      result = (_DWORD *)*result;
      if ( ++v5 >= a3 )
        return result;
    }
    return 0;
  }
  result = *(_DWORD **)this;
  if ( a3 >= 1 )
  {
    v4 = 0;
    while ( result )
    {
      result = (_DWORD *)result[1];
      if ( ++v4 >= a3 )
        return result;
    }
    return 0;
  }
  return result;
}


// ============================================================
