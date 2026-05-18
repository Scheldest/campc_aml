// ADDR: 0x7dd96
// SYMBOL: sub_7DD96
_DWORD *__fastcall sub_7DD96(_DWORD *a1, int a2, int a3, const void *a4, int a5)
{
  int v7; // r0
  int v8; // r5
  void *v9; // r6

  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  *a1 = a2;
  a1[1] = a3;
  if ( a5 )
  {
    if ( a5 <= -1 )
      std::__vector_base_common<true>::__throw_length_error(a1 + 2);
    v7 = operator new(a5);
    v8 = v7 + a5;
    v9 = (void *)v7;
    a1[4] = v7 + a5;
    a1[2] = v7;
    sub_10967C(v7, a5);
    a1[3] = v8;
  }
  else
  {
    v9 = 0;
  }
  a1[6] = 0;
  a1[5] = a1 + 6;
  a1[7] = 0;
  j_memcpy(v9, a4, a5);
  return a1;
}


// ======================================================================
// ADDR: 0x7ded0
// SYMBOL: sub_7DED0
unsigned int __fastcall sub_7DED0(int a1, int a2)
{
  int (__fastcall *v4)(int, _DWORD); // r4
  int v5; // r0
  int v6; // r0
  int v7; // r8
  unsigned int result; // r0
  unsigned int v9; // r6
  int **v10; // r4
  int **v11; // r5
  int v12; // r0
  int v13; // r0
  int (__fastcall *v14)(int, int); // r4
  int v15; // r0
  int *v16; // r10
  _DWORD *v17; // r1
  int *v18; // r1

  v4 = (int (__fastcall *)(int, _DWORD))off_1ABF1C;
  v5 = sub_7DB44(a2);
  v6 = v4(v5, *(_DWORD *)a1);
  if ( !v6 )
  {
    v12 = off_1ABF0C();
    return sub_80664("[sv:err:effect:apply] : failed to create effect (code:%d)", v12);
  }
  v7 = v6;
  if ( !off_1ABF24(v6, *(_DWORD *)(a1 + 8)) )
  {
    v13 = off_1ABF0C();
    sub_80664("[sv:err:effect:apply] : failed to set parameters (code:%d)", v13);
    v14 = off_1ABF20;
    v15 = sub_7DB44(a2);
    return v14(v15, v7);
  }
  result = sub_7DB44(a2);
  v9 = result;
  v11 = (int **)(a1 + 24);
  v10 = *(int ***)(a1 + 24);
  if ( !v10 )
  {
    v10 = (int **)(a1 + 24);
    goto LABEL_15;
  }
  v11 = (int **)(a1 + 24);
  while ( 1 )
  {
    result = (unsigned int)v10[4];
    if ( v9 < result )
      break;
    if ( result >= v9 )
      goto LABEL_15;
    v11 = v10 + 1;
    result = (unsigned int)v10[1];
    if ( !result )
      goto LABEL_15;
    ++v10;
LABEL_6:
    v11 = v10;
    v10 = (int **)result;
  }
  result = (unsigned int)*v10;
  if ( *v10 )
    goto LABEL_6;
  v11 = v10;
LABEL_15:
  v16 = *v11;
  if ( !*v11 )
  {
    v16 = (int *)operator new(0x18u);
    *v16 = 0;
    v16[1] = 0;
    v16[2] = (int)v10;
    *v11 = v16;
    v17 = *(_DWORD **)(a1 + 20);
    v16[5] = 0;
    v16[4] = v9;
    if ( *v17 )
    {
      *(_DWORD *)(a1 + 20) = *v17;
      v18 = *v11;
    }
    else
    {
      v18 = v16;
    }
    sub_77D8A(*(int **)(a1 + 24), v18);
    result = *(_DWORD *)(a1 + 28) + 1;
    *(_DWORD *)(a1 + 28) = result;
  }
  v16[5] = v7;
  return result;
}


// ======================================================================
