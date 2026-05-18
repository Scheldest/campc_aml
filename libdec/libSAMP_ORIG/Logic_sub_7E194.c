// ADDR: 0x7e094
// SYMBOL: sub_7E094
int __fastcall sub_7E094(int a1)
{
  int v2; // r1
  _DWORD *v3; // r5
  _DWORD *v4; // r6
  void *v5; // r0
  int v6; // r1
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  _DWORD *v9; // r6
  void *v10; // r0
  int v11; // r1
  _DWORD *v12; // r0
  _DWORD *v13; // r5
  _DWORD *v14; // r6
  int v15; // r0
  int v16; // t1
  void *v17; // r0
  void *v18; // r0

  v2 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)a1 = &off_111534;
  sub_7E1A4(a1 + 76, v2);
  sub_7E1DA(a1 + 64, *(_DWORD *)(a1 + 68));
  v3 = *(_DWORD **)(a1 + 52);
  if ( v3 )
  {
    v4 = *(_DWORD **)(a1 + 56);
    v5 = *(void **)(a1 + 52);
    if ( v4 == v3 )
    {
LABEL_11:
      *(_DWORD *)(a1 + 56) = v3;
      operator delete(v5);
      goto LABEL_12;
    }
    while ( 1 )
    {
      v7 = (_DWORD *)*(v4 - 2);
      v4 -= 6;
      if ( v4 == v7 )
      {
        v6 = 4;
      }
      else
      {
        if ( !v7 )
          goto LABEL_6;
        v6 = 5;
      }
      (*(void (**)(void))(*v7 + 4 * v6))();
LABEL_6:
      if ( v4 == v3 )
      {
        v5 = *(void **)(a1 + 52);
        goto LABEL_11;
      }
    }
  }
LABEL_12:
  v8 = *(_DWORD **)(a1 + 40);
  if ( !v8 )
    goto LABEL_23;
  v9 = *(_DWORD **)(a1 + 44);
  v10 = *(void **)(a1 + 40);
  if ( v9 != v8 )
  {
    while ( 1 )
    {
      v12 = (_DWORD *)*(v9 - 2);
      v9 -= 6;
      if ( v9 == v12 )
      {
        v11 = 4;
      }
      else
      {
        if ( !v12 )
          goto LABEL_17;
        v11 = 5;
      }
      (*(void (**)(void))(*v12 + 4 * v11))();
LABEL_17:
      if ( v9 == v8 )
      {
        v10 = *(void **)(a1 + 40);
        break;
      }
    }
  }
  *(_DWORD *)(a1 + 44) = v8;
  operator delete(v10);
LABEL_23:
  v13 = *(_DWORD **)(a1 + 28);
  if ( v13 )
  {
    v14 = *(_DWORD **)(a1 + 32);
    if ( v14 == v13 )
    {
      v18 = *(void **)(a1 + 28);
    }
    else
    {
      do
      {
        v16 = *--v14;
        v15 = v16;
        *v14 = 0;
        if ( v16 )
        {
          v17 = (void *)sub_7DACC(v15);
          operator delete(v17);
        }
      }
      while ( v14 != v13 );
      v18 = *(void **)(a1 + 28);
    }
    *(_DWORD *)(a1 + 32) = v13;
    operator delete(v18);
  }
  if ( *(unsigned __int8 *)(a1 + 16) << 31 )
    operator delete(*(void **)(a1 + 24));
  return a1;
}


// ======================================================================
