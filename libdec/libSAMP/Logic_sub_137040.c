// ADDR: 0x136dc8
// SYMBOL: sub_136DC8
int __fastcall sub_136DC8(int a1)
{
  int v1; // r1
  int v3; // r1
  int v4; // r1
  int v5; // r1
  int result; // r0

  v1 = *(_DWORD *)(a1 + 84);
  if ( v1 )
    sub_12BE22(a1, v1);
  v3 = *(_DWORD *)(a1 + 88);
  if ( v3 )
    sub_12BE22(a1, v3);
  v4 = *(_DWORD *)(a1 + 92);
  if ( v4 )
    sub_12BE22(a1, v4);
  v5 = *(unsigned __int8 *)(a1 + 80);
  *(_BYTE *)(dword_23DEF0 + 84) = 1;
  if ( v5 )
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 36))(a1, 0);
  result = 0;
  *(_BYTE *)(a1 + 80) = 0;
  return result;
}


// ======================================================================
