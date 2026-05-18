// ADDR: 0xf5498
// SYMBOL: sub_F5498
int __fastcall sub_F5498(int a1, int a2, unsigned int *a3, _DWORD *a4)
{
  int *v5; // r4
  int *v6; // r6
  unsigned int v9; // r0
  unsigned int v10; // r1
  int *v11; // r1
  int v12; // r5
  int result; // r0

  v6 = (int *)(a2 + 4);
  v5 = *(int **)(a2 + 4);
  if ( v5 )
  {
    v9 = *a3;
    v6 = (int *)(a2 + 4);
    while ( 1 )
    {
      v10 = v5[4];
      if ( v9 >= v10 )
      {
        if ( v10 >= v9 )
          goto LABEL_11;
        v6 = v5 + 1;
        v11 = (int *)v5[1];
        if ( !v11 )
          goto LABEL_11;
        ++v5;
      }
      else
      {
        v11 = (int *)*v5;
        if ( !*v5 )
        {
          v6 = v5;
          goto LABEL_11;
        }
      }
      v6 = v5;
      v5 = v11;
    }
  }
  v5 = (int *)(a2 + 4);
LABEL_11:
  v12 = *v6;
  if ( *v6 )
  {
    result = 0;
  }
  else
  {
    v12 = operator new(0xF4u);
    *(_DWORD *)(v12 + 16) = *a4;
    j_memcpy((void *)(v12 + 20), a4 + 1, 0xE0u);
    sub_F5518(a2, v5, v6, v12);
    result = 1;
  }
  *(_BYTE *)(a1 + 4) = result;
  *(_DWORD *)a1 = v12;
  return result;
}


// ======================================================================
