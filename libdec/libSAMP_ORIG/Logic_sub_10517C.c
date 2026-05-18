// ADDR: 0x103b60
// SYMBOL: sub_103B60
int __fastcall sub_103B60(int a1, int a2)
{
  __int64 v3; // kr00_8
  int v5; // r5
  unsigned int v6; // r11
  int result; // r0
  size_t v8; // r0
  unsigned int i; // r5
  size_t v10; // r0
  unsigned __int8 *v11; // r0

  v3 = *(_QWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = -1;
  *(_DWORD *)(a2 + 16) = -1;
  v5 = *(_DWORD *)(a2 + 4);
  sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
  v6 = *(_DWORD *)(a2 + 16);
  result = v6 + 1;
  if ( v6 == -1 )
  {
    v8 = _strlen_chk("...", 4u);
    result = sub_FFB40(a2, "...", &asc_4EAED[v8]);
  }
  else if ( v6 )
  {
    for ( i = 1; i < v6; ++i )
    {
      v10 = _strlen_chk(", ", 3u);
      sub_FFB40(a2, ", ", &asc_4FD69[v10]);
      v11 = *(unsigned __int8 **)(a1 + 8);
      *(_DWORD *)(a2 + 12) = i;
      result = sub_FE074(v11, a2);
    }
  }
  else
  {
    *(_DWORD *)(a2 + 4) = v5;
  }
  *(_QWORD *)(a2 + 12) = v3;
  return result;
}


// ======================================================================
