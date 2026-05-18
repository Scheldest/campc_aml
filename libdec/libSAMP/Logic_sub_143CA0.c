// ADDR: 0x12f8d4
// SYMBOL: sub_12F8D4
int __fastcall sub_12F8D4(int a1)
{
  int result; // r0
  _BYTE *v3; // r5
  unsigned __int8 *v4; // r5
  int v5; // r1

  result = *(unsigned __int8 *)(*(_DWORD *)(dword_23DEEC + 116) + 80);
  if ( !*(_BYTE *)(*(_DWORD *)(dword_23DEEC + 116) + 80) )
  {
    result = *(_DWORD *)(a1 + 136);
    if ( result )
    {
      v3 = *(_BYTE **)(a1 + 92);
      if ( v3 )
      {
        if ( v3[80] )
          (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v3 + 36))(*(_DWORD *)(a1 + 92), 0);
        v3[80] = 0;
      }
      v4 = *(unsigned __int8 **)(a1 + 132);
      *(_DWORD *)(a1 + 100) = *(_DWORD *)(a1 + 112);
      v5 = v4[80];
      *(_DWORD *)(a1 + 92) = v4;
      if ( v5 != 1 )
        (*(void (__fastcall **)(unsigned __int8 *, int))(*(_DWORD *)v4 + 36))(v4, 1);
      v4[80] = 1;
      if ( *(_BYTE *)(a1 + 80) != 1 )
        (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 36))(a1, 1);
      *(_BYTE *)(a1 + 80) = 1;
      *(_DWORD *)(a1 + 136) = 0;
      result = dword_23DEF0;
      *(_BYTE *)(dword_23DEF0 + 84) = 0;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x17c2a4
// SYMBOL: sub_17C2A4
int __fastcall sub_17C2A4(int result, unsigned int a2, int a3)
{
  int v3; // r6
  int v4; // r0
  int v5; // r5

  v3 = result;
  if ( a2 == 4 )
    goto LABEL_8;
  if ( a2 >= 0x1C )
  {
    if ( !a3 )
      return result;
    goto LABEL_8;
  }
  result = *(unsigned __int8 *)(result + a2 + 104);
  if ( *(_BYTE *)(v3 + a2 + 104) )
    result = 1;
  if ( result != a3 )
  {
LABEL_8:
    v4 = sub_17C080();
    if ( v4 )
    {
      v5 = v4;
      sub_17C1B8(v4);
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 912))(v5);
      if ( result )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 64))(v5);
        return (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 68))(v5);
      }
    }
    else
    {
      return sub_2242C8(4, "AXL", "Env not loaded. (SetUIElementVisible)");
    }
  }
  return result;
}


// ======================================================================
