// ADDR: 0xdd93c
// SYMBOL: sub_DD93C
int __fastcall sub_DD93C(unsigned __int8 *a1, int a2)
{
  unsigned int v2; // lr
  unsigned __int8 *v3; // r2
  unsigned int v4; // r3
  unsigned __int8 *v5; // r12
  int result; // r0

  if ( !a1[12] )
    return 0x7FFFFFFF;
  v2 = *a1;
  v3 = (unsigned __int8 *)*((_DWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 1);
  v5 = *(unsigned __int8 **)a2;
  if ( (v2 & 1) == 0 )
  {
    v4 = v2 >> 1;
    v3 = a1 + 1;
  }
  if ( v5 == &v3[v4] )
  {
    result = v3[v4 - 1] + *(_DWORD *)(a2 + 4);
    goto LABEL_10;
  }
  result = 0x7FFFFFFF;
  if ( *v5 && *v5 != 255 )
  {
    *(_DWORD *)a2 = v5 + 1;
    result = *(_DWORD *)(a2 + 4) + *v5;
LABEL_10:
    *(_DWORD *)(a2 + 4) = result;
  }
  return result;
}


// ======================================================================
