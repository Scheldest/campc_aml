// ADDR: 0xf8a54
// SYMBOL: sub_F8A54
int __fastcall sub_F8A54(int a1, int a2)
{
  int result; // r0
  int v5; // r0
  int *v6; // r0
  int v7; // r1

  result = *(_DWORD *)(a1 + 4);
  if ( result )
  {
    if ( sub_F9C94(a2) || sub_108564(a2) || (v5 = sub_F9CBC(a2), sub_F9CCC(v5), sub_F9CD8(a2, 200)) )
    {
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 36))(*(_DWORD *)(a1 + 4));
      v6 = *(int **)(a1 + 4);
      v7 = *v6;
      *((_WORD *)v6 + 19) = a2;
      return (*(int (__fastcall **)(int *, int))(v7 + 24))(v6, a2);
    }
    else
    {
      _android_log_print(5, "AXL", "Model %u wouldn't load in time!", a2);
      result = dword_23DEEC;
      if ( dword_23DEEC )
        return sub_12D520(*(_DWORD *)(dword_23DEEC + 96), "Warning: model %u wouldn't load in time!");
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x108480
// SYMBOL: sub_108480
bool __fastcall sub_108480(unsigned int a1)
{
  _DWORD *v1; // r1

  if ( a1 <= 0x4E20 )
  {
    v1 = *(_DWORD **)(*(_DWORD *)(dword_23DF24 + 6788820) + 4 * a1);
    if ( v1 )
      return *v1 - dword_23DF24 == 6714984;
    _android_log_print(5, "AXL", "Can't get model info for skin %d", a1);
  }
  return 0;
}


// ======================================================================
