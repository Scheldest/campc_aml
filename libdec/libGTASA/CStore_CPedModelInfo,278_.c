
// Address: 0x3863e0
// Original: _ZN6CStoreI13CPedModelInfoLi278EED2Ev
// Demangled: CStore<CPedModelInfo,278>::~CStore()
int __fastcall CStore<CPedModelInfo,278>::~CStore(int a1)
{
  int v2; // r5
  int i; // r6
  CColModel *v4; // r0
  void *v5; // r0

  v2 = a1 + 25576;
  for ( i = 0; i != -25576; i -= 92 )
  {
    *(_DWORD *)(v2 + i - 88) = &off_667668;
    v4 = *(CColModel **)(v2 + i - 12);
    if ( v4 )
    {
      CColModel::~CColModel(v4);
      CColModel::operator delete(v5);
    }
  }
  return a1;
}


// ============================================================
