// ADDR: 0xebf60
// SYMBOL: sub_EBF60
unsigned __int8 *__fastcall sub_EBF60(
        _DWORD *a1,
        unsigned __int8 *a2,
        unsigned __int8 **a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  unsigned __int8 *v5; // r8
  unsigned __int8 *v6; // r11
  int *v9; // r1
  unsigned __int8 *v10; // r4
  unsigned __int8 *v11; // r0
  int v12; // r1
  int *v13; // r2
  int **v14; // t1
  int v15; // r0
  int v16; // r1
  unsigned __int8 *v17; // t1

  v5 = (unsigned __int8 *)(a1 + 1);
  v6 = a2;
  if ( a1 + 1 != (_DWORD *)a2 && !sub_EA270((int)(a1 + 2), a5, a2 + 16) )
  {
    if ( sub_EA270((int)(a1 + 2), v6 + 16, a5) )
    {
      v11 = (unsigned __int8 *)*((_DWORD *)v6 + 1);
      if ( v11 )
      {
        do
        {
          a4 = v11;
          v11 = *(unsigned __int8 **)v11;
        }
        while ( v11 );
      }
      else
      {
        v15 = (int)(v6 + 8);
        a4 = (unsigned __int8 *)*((_DWORD *)v6 + 2);
        if ( *(unsigned __int8 **)a4 != v6 )
        {
          do
          {
            v16 = *(_DWORD *)v15;
            v17 = *(unsigned __int8 **)(*(_DWORD *)v15 + 8);
            v15 = *(_DWORD *)v15 + 8;
            a4 = v17;
          }
          while ( *(_DWORD *)v17 != v16 );
        }
      }
      if ( a4 != v5 && !sub_EA270((int)(a1 + 2), a5, a4 + 16) )
        return (unsigned __int8 *)sub_EA184((int)a1, a3, (int)a5);
      if ( !*((_DWORD *)v6 + 1) )
      {
        *a3 = v6;
        v6 += 4;
        return v6;
      }
      *a3 = a4;
    }
    else
    {
      *a3 = v6;
      *(_DWORD *)a4 = v6;
    }
    return a4;
  }
  if ( (unsigned __int8 *)*a1 == v6 )
  {
    v10 = v6;
LABEL_16:
    if ( *(_DWORD *)v6 )
    {
      v6 = v10 + 4;
      *a3 = v10;
    }
    else
    {
      *a3 = v6;
    }
    return v6;
  }
  v9 = *(int **)v6;
  if ( *(_DWORD *)v6 )
  {
    do
    {
      v10 = (unsigned __int8 *)v9;
      v9 = (int *)v9[1];
    }
    while ( v9 );
  }
  else
  {
    v12 = (int)(v6 + 8);
    if ( **((unsigned __int8 ***)v6 + 2) == v6 )
    {
      do
      {
        v13 = *(int **)v12;
        v14 = *(int ***)(*(_DWORD *)v12 + 8);
        v12 = *(_DWORD *)v12 + 8;
      }
      while ( *v14 == v13 );
    }
    v10 = *(unsigned __int8 **)v12;
  }
  if ( sub_EA270((int)(a1 + 2), v10 + 16, a5) )
    goto LABEL_16;
  return (unsigned __int8 *)sub_EA184((int)a1, a3, (int)a5);
}


// ======================================================================
// ADDR: 0xec07a
// SYMBOL: sub_EC07A
int __fastcall sub_EC07A(int a1, int a2, int a3)
{
  int v6; // r0
  int result; // r0

  v6 = operator new(0x30u);
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)a1 = v6;
  *(_DWORD *)(a1 + 4) = a2 + 4;
  sub_EC0C2(v6 + 16, a3);
  result = 1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}


// ======================================================================
