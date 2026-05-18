// ADDR: 0xf8e0e
// SYMBOL: sub_F8E0E
int __fastcall sub_F8E0E(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return *(_DWORD *)(v1 + 24);
  else
    return 0;
}


// ======================================================================
// ADDR: 0x100cde
// SYMBOL: sub_100CDE
void __fastcall sub_100CDE(int a1, _DWORD *a2)
{
  const std::nothrow_t *v4; // r1

  if ( a2 )
  {
    sub_100CDE(a1, *a2);
    sub_100CDE(a1, a2[1]);
    sub_100D0C(a2 + 5, a2[6]);
    operator delete(a2, v4);
  }
}


// ======================================================================
// ADDR: 0x100d30
// SYMBOL: sub_100D30
unsigned int __fastcall sub_100D30(unsigned int result, int a2, unsigned int *a3, int a4, _DWORD **a5)
{
  int *v6; // r4
  int *v7; // r6
  unsigned int v8; // r8
  unsigned int v9; // r1
  int *v10; // r1
  int v11; // r5
  char v12; // r10
  _DWORD *v13; // r0
  __int64 v14; // r0

  v7 = (int *)(a2 + 4);
  v6 = *(int **)(a2 + 4);
  v8 = result;
  if ( v6 )
  {
    result = *a3;
    v7 = (int *)(a2 + 4);
    while ( 1 )
    {
      v9 = v6[4];
      if ( result >= v9 )
      {
        if ( v9 >= result )
          goto LABEL_11;
        v7 = v6 + 1;
        v10 = (int *)v6[1];
        if ( !v10 )
          goto LABEL_11;
        ++v6;
      }
      else
      {
        v10 = (int *)*v6;
        if ( !*v6 )
        {
          v7 = v6;
          goto LABEL_11;
        }
      }
      v7 = v6;
      v6 = v10;
    }
  }
  v6 = (int *)(a2 + 4);
LABEL_11:
  v11 = *v7;
  v12 = 0;
  if ( !*v7 )
  {
    v11 = operator new(0x20u);
    v13 = *a5;
    *(_DWORD *)(v11 + 24) = 0;
    HIDWORD(v14) = v11 + 24;
    LODWORD(v14) = *v13;
    *(_QWORD *)(v11 + 16) = v14;
    *(_DWORD *)(v11 + 28) = 0;
    result = sub_100DBA(a2, v6, v7, v11);
    v12 = 1;
  }
  *(_BYTE *)(v8 + 4) = v12;
  *(_DWORD *)v8 = v11;
  return result;
}


// ======================================================================
// ADDR: 0x100de4
// SYMBOL: sub_100DE4
int __fastcall sub_100DE4(int a1, int a2, int *a3, int a4, _DWORD **a5)
{
  int *v6; // r4
  int *v7; // r6
  int v9; // r0
  int v10; // r1
  int *v11; // r1
  int v12; // r5
  int result; // r0

  v7 = (int *)(a2 + 4);
  v6 = *(int **)(a2 + 4);
  if ( v6 )
  {
    v9 = *a3;
    v7 = (int *)(a2 + 4);
    while ( 1 )
    {
      v10 = v6[4];
      if ( v9 >= v10 )
      {
        if ( v10 >= v9 )
          goto LABEL_11;
        v7 = v6 + 1;
        v11 = (int *)v6[1];
        if ( !v11 )
          goto LABEL_11;
        ++v6;
      }
      else
      {
        v11 = (int *)*v6;
        if ( !*v6 )
        {
          v7 = v6;
          goto LABEL_11;
        }
      }
      v7 = v6;
      v6 = v11;
    }
  }
  v6 = (int *)(a2 + 4);
LABEL_11:
  v12 = *v7;
  if ( *v7 )
  {
    result = 0;
  }
  else
  {
    v12 = operator new(0x30u);
    *(_DWORD *)(v12 + 16) = **a5;
    *(_QWORD *)(v12 + 20) = 0LL;
    *(_QWORD *)(v12 + 28) = 0LL;
    *(_QWORD *)(v12 + 32) = 0LL;
    *(_QWORD *)(v12 + 40) = 0LL;
    sub_100E6E(a2, v6, v7, v12);
    result = 1;
  }
  *(_BYTE *)(a1 + 4) = result;
  *(_DWORD *)a1 = v12;
  return result;
}


// ======================================================================
// ADDR: 0x148664
// SYMBOL: sub_148664
int __fastcall sub_148664(int a1, int a2)
{
  int v2; // r12
  int v3; // r3
  int result; // r0

  v2 = a1 + 1004;
  v3 = 0;
  while ( 1 )
  {
    result = *(_DWORD *)(v2 + 4 * v3);
    if ( result )
    {
      if ( *(_DWORD *)(result + 4) == a2 )
        break;
    }
    if ( ++v3 == 1000 )
      return 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x149182
// SYMBOL: sub_149182
int __fastcall sub_149182(int a1, int a2)
{
  int v2; // r2
  int v3; // r2
  int v4; // lr
  int v5; // r3
  int v6; // r2
  int v7; // lr
  int *v8; // r2
  int v9; // r2
  int v10; // r2
  int v11; // r3
  int v12; // r4

  v2 = *(_DWORD *)(a1 + 5052);
  if ( v2 && (v3 = *(_DWORD *)(v2 + 28)) != 0 )
  {
    v4 = v3 + 648;
    v5 = 0;
    while ( 1 )
    {
      if ( *(_BYTE *)(v4 + v5 - 532) )
      {
        v6 = *(_DWORD *)(v4 + 4 * v5);
        if ( v6 )
        {
          if ( *(_DWORD *)(v6 + 4) == a2 )
            break;
        }
      }
      if ( ++v5 == 10 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v7 = 0;
    while ( 1 )
    {
      if ( *(_BYTE *)(a1 + v7 + 4020) )
      {
        v8 = *(int **)(a1 + 4 * v7 + 4);
        if ( v8 )
        {
          v9 = *v8;
          if ( v9 )
          {
            v10 = *(_DWORD *)(v9 + 296);
            if ( v10 )
              break;
          }
        }
      }
LABEL_18:
      if ( ++v7 == 1004 )
        return 0;
    }
    v11 = v10 + 648;
    v12 = 0;
    while ( 1 )
    {
      if ( *(_BYTE *)(v11 + v12 - 532) )
      {
        v6 = *(_DWORD *)(v11 + 4 * v12);
        if ( v6 )
        {
          if ( *(_DWORD *)(v6 + 4) == a2 )
            break;
        }
      }
      if ( ++v12 == 10 )
        goto LABEL_18;
    }
  }
  return v6;
}


// ======================================================================
