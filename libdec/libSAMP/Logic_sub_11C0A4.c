// ADDR: 0x11c184
// SYMBOL: sub_11C184
_DWORD *__fastcall sub_11C184(_DWORD *result, int a2)
{
  _DWORD *v2; // r5
  int v4; // r1
  int v5; // r0
  _DWORD v6[8]; // [sp+0h] [bp-20h] BYREF

  if ( (_DWORD *)a2 != result )
  {
    v2 = result;
    result = (_DWORD *)result[4];
    if ( result == v2 )
    {
      if ( *(_DWORD *)(a2 + 16) == a2 )
      {
        (*(void (__fastcall **)(_DWORD *, _DWORD *))(*result + 12))(result, v6);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v2[4] + 16))(v2[4]);
        v2[4] = 0;
        (*(void (__fastcall **)(_DWORD, _DWORD *))(**(_DWORD **)(a2 + 16) + 12))(*(_DWORD *)(a2 + 16), v2);
        (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a2 + 16) + 16))(*(_DWORD *)(a2 + 16));
        v5 = v6[0];
        *(_DWORD *)(a2 + 16) = 0;
        v2[4] = v2;
        (*(void (__fastcall **)(_DWORD *, int))(v5 + 12))(v6, a2);
        result = (_DWORD *)(*(int (__fastcall **)(_DWORD *))(v6[0] + 16))(v6);
      }
      else
      {
        (*(void (__fastcall **)(_DWORD *, int))(*result + 12))(result, a2);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v2[4] + 16))(v2[4]);
        result = *(_DWORD **)(a2 + 16);
        v2[4] = result;
      }
      *(_DWORD *)(a2 + 16) = a2;
    }
    else
    {
      v4 = *(_DWORD *)(a2 + 16);
      if ( a2 == v4 )
      {
        (*(void (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)v4 + 12))(*(_DWORD *)(a2 + 16), v2);
        (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a2 + 16) + 16))(*(_DWORD *)(a2 + 16));
        result = (_DWORD *)v2[4];
        *(_DWORD *)(a2 + 16) = result;
        v2[4] = v2;
      }
      else
      {
        v2[4] = v4;
        *(_DWORD *)(a2 + 16) = result;
      }
    }
  }
  return result;
}


// ======================================================================
