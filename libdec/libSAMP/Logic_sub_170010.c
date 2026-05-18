// ADDR: 0x1655a8
// SYMBOL: sub_1655A8
int sub_1655A8(char *a1, signed int a2, const char *a3, ...)
{
  int result; // r0
  int v6; // r2
  va_list va; // [sp+14h] [bp+8h] BYREF

  va_start(va, a3);
  result = vsnprintf(a1, a2, a3, va);
  if ( a1 )
  {
    v6 = a2 - 1;
    if ( result < a2 )
      v6 = result;
    if ( result == -1 )
      v6 = a2 - 1;
    a1[v6] = 0;
    return v6;
  }
  return result;
}


// ======================================================================
// ADDR: 0x1700c4
// SYMBOL: sub_1700C4
int __fastcall sub_1700C4(int a1, int a2)
{
  int v4; // r6
  unsigned int v5; // r0
  int v6; // r0
  _DWORD *v7; // r1
  int v8; // r6
  char v10[40]; // [sp+0h] [bp-28h] BYREF

  v4 = dword_381B58;
  sub_1655A8(v10, 16, "##Tooltip_%02d", *(_DWORD *)(dword_381B58 + 11472));
  if ( a2 )
  {
    v5 = sub_16560C(v10, 0, 0);
    v6 = sub_1658B8((unsigned int *)(dword_381B58 + 6556), v5);
    if ( v6 )
    {
      if ( *(_BYTE *)(v6 + 122) )
      {
        v7 = (_DWORD *)(v4 + 11472);
        v8 = *(_DWORD *)(v4 + 11472);
        *(_DWORD *)(v6 + 164) = 1;
        *(_BYTE *)(v6 + 129) = 1;
        *v7 = v8 + 1;
        sub_1655A8(v10, 16, "##Tooltip_%02d", v8 + 1);
      }
    }
  }
  return sub_16A980(v10, 0, a1 | 0x20C0347);
}


// ======================================================================
