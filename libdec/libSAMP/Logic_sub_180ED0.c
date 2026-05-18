// ADDR: 0x17e686
// SYMBOL: sub_17E686
int __fastcall sub_17E686(int a1, _DWORD *a2, int a3, char a4)
{
  int v4; // r4
  int *v5; // r6
  int result; // r0
  _DWORD *v11; // r1
  int v12; // r1

  v4 = *(_DWORD *)(a1 + 4);
  v5 = *(int **)a1;
  if ( !v4 )
    goto LABEL_6;
  result = 0;
  while ( 1 )
  {
    v11 = (_DWORD *)v5[result];
    if ( v11 )
    {
      if ( (_DWORD *)*v11 == a2 )
        break;
    }
    if ( v4 == ++result )
      goto LABEL_6;
  }
  result = (unsigned __int8)result;
  if ( (unsigned __int8)result == 255 )
  {
LABEL_6:
    v12 = operator new(0xCu);
    *(_BYTE *)(v12 + 8) = a4;
    *(_DWORD *)v12 = *a2;
    *(_DWORD *)(v12 + 4) = a3;
    if ( v4 )
    {
      while ( 1 )
      {
        result = *v5;
        if ( !*v5 )
          break;
        --v4;
        ++v5;
        if ( !v4 )
          return sub_17E6EE(a1);
      }
      *v5 = v12;
    }
    else
    {
      return sub_17E6EE(a1);
    }
  }
  return result;
}


// ======================================================================
