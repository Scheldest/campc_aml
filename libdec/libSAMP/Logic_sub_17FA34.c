// ADDR: 0x17e5e4
// SYMBOL: sub_17E5E4
int __fastcall sub_17E5E4(int a1)
{
  sub_17E5FE();
  if ( *(_DWORD *)(a1 + 8) && *(_DWORD *)a1 )
    operator delete[](*(void **)a1);
  return a1;
}


// ======================================================================
// ADDR: 0x17f990
// SYMBOL: sub_17F990
int __fastcall sub_17F990(int a1)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  bool v5; // zf

  v1 = *(_DWORD **)(a1 + 4);
  v3 = (_DWORD *)v1[2];
  *(_DWORD *)(a1 + 8) = v3;
  if ( v3 == v1 )
    goto LABEL_5;
  do
  {
    v1 = (_DWORD *)v3[2];
    operator delete(v3);
    v4 = *(_DWORD **)(a1 + 4);
    *(_DWORD *)(a1 + 8) = v1;
    v5 = v1 == v4;
    v3 = v1;
  }
  while ( !v5 );
  if ( v1 )
LABEL_5:
    operator delete(v1);
  return a1;
}


// ======================================================================
// ADDR: 0x17f9bc
// SYMBOL: sub_17F9BC
int __fastcall sub_17F9BC(int a1)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  bool v5; // zf

  v1 = *(_DWORD **)(a1 + 4);
  v3 = (_DWORD *)v1[15];
  *(_DWORD *)(a1 + 8) = v3;
  if ( v3 == v1 )
    goto LABEL_5;
  do
  {
    v1 = (_DWORD *)v3[15];
    operator delete(v3);
    v4 = *(_DWORD **)(a1 + 4);
    *(_DWORD *)(a1 + 8) = v1;
    v5 = v1 == v4;
    v3 = v1;
  }
  while ( !v5 );
  if ( v1 )
LABEL_5:
    operator delete(v1);
  return a1;
}


// ======================================================================
// ADDR: 0x17f9e8
// SYMBOL: sub_17F9E8
int __fastcall sub_17F9E8(int a1)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  bool v5; // zf

  v1 = *(_DWORD **)(a1 + 4);
  v3 = (_DWORD *)v1[72];
  *(_DWORD *)(a1 + 8) = v3;
  if ( v3 == v1 )
    goto LABEL_5;
  do
  {
    v1 = (_DWORD *)v3[72];
    operator delete(v3);
    v4 = *(_DWORD **)(a1 + 4);
    *(_DWORD *)(a1 + 8) = v1;
    v5 = v1 == v4;
    v3 = v1;
  }
  while ( !v5 );
  if ( v1 )
LABEL_5:
    operator delete(v1);
  return a1;
}


// ======================================================================
// ADDR: 0x17fa18
// SYMBOL: sub_17FA18
int __fastcall sub_17FA18(int a1)
{
  sub_1848EA(a1, 0);
  if ( *(_DWORD *)(a1 + 8) && *(_DWORD *)a1 )
    operator delete[](*(void **)a1);
  return a1;
}


// ======================================================================
// ADDR: 0x181656
// SYMBOL: sub_181656
int __fastcall sub_181656(int a1)
{
  int v1; // r8
  _DWORD *v3; // r6
  unsigned int v4; // r4
  void **v5; // r0

  v1 = a1 + 880;
  sub_18CB76(a1 + 880);
  v3 = (_DWORD *)(a1 + 884);
  if ( *(_DWORD *)(a1 + 888) )
  {
    v4 = 0;
    do
    {
      v5 = *(void ***)(*v3 + 4 * v4);
      if ( !*v5 || (operator delete[](*v5), (v5 = *(void ***)(*v3 + 4 * v4)) != 0) )
        operator delete[](v5);
      ++v4;
    }
    while ( v4 < *(_DWORD *)(a1 + 888) );
  }
  sub_1816B2(a1 + 884, 0);
  return sub_18CB7A(v1);
}


// ======================================================================
// ADDR: 0x18cb64
// SYMBOL: sub_18CB64
pthread_mutex_t *__fastcall sub_18CB64(pthread_mutex_t *a1)
{
  DeleteCriticalSection_0(a1);
  return a1;
}


// ======================================================================
// ADDR: 0x18ce94
// SYMBOL: sub_18CE94
int *sub_18CE94()
{
  int *result; // r0
  void *v1; // r0

  result = &dword_382758;
  if ( dword_382758 >= 1 && !--dword_382758 )
  {
    if ( dword_382754 )
    {
      v1 = (void *)sub_18D042();
      operator delete(v1);
    }
    result = 0;
    dword_382754 = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x18d35c
// SYMBOL: sub_18D35C
int *sub_18D35C()
{
  int *result; // r0
  void *v1; // r0

  result = &dword_382760;
  if ( dword_382760 >= 1 && !--dword_382760 )
  {
    if ( dword_38275C )
    {
      v1 = (void *)sub_18D2DA((_DWORD *)dword_38275C);
      operator delete(v1);
    }
    result = 0;
    dword_38275C = 0;
  }
  return result;
}


// ======================================================================
