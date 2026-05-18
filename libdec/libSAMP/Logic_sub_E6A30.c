// ADDR: 0xe7374
// SYMBOL: sub_E7374
void __fastcall sub_E7374(int a1)
{
  _BYTE *v1; // r1
  unsigned int v2; // r12
  int v3; // r3
  char v4; // [sp+7h] [bp-9h] BYREF

  if ( *(unsigned __int8 *)(a1 + 44) << 31 )
  {
    **(_BYTE **)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 48) = 0;
  }
  else
  {
    *(_WORD *)(a1 + 44) = 0;
  }
  v1 = *(_BYTE **)(a1 + 32);
  v2 = *(_DWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 36) = v1;
  v4 = v3;
  if ( (unsigned int)v1 >= v2 )
  {
    sub_E72A2((int *)(a1 + 32), &v4);
  }
  else
  {
    *v1 = v3;
    *(_DWORD *)(a1 + 36) = v1 + 1;
  }
}


// ======================================================================
// ADDR: 0xe73c0
// SYMBOL: sub_E73C0
int __fastcall sub_E73C0(int a1)
{
  int v2; // r4
  int v3; // r5
  int v4; // r6
  int v5; // r0
  int v6; // r1
  _QWORD v8[5]; // [sp+0h] [bp-28h]

  v2 = 0;
  LOBYTE(v3) = 12;
  v4 = 4;
  v8[0] = 0x80000000CLL;
  v8[1] = 4LL;
  while ( 1 )
  {
    sub_E71D0(a1);
    v5 = *(_DWORD *)(a1 + 12);
    v6 = v5 - 48;
    if ( (unsigned int)(v5 - 48) < 0xA )
      goto LABEL_7;
    if ( (unsigned int)(v5 - 65) <= 5 )
    {
      v6 = v5 - 55;
      goto LABEL_7;
    }
    if ( (unsigned int)(v5 - 97) > 5 )
      return -1;
    v6 = v5 - 87;
LABEL_7:
    v2 += v6 << v3;
    if ( v4 == 16 )
      return v2;
    v3 = *(_DWORD *)((char *)v8 + v4);
    v4 += 4;
  }
}


// ======================================================================
// ADDR: 0xe7440
// SYMBOL: sub_E7440
int __fastcall sub_E7440(int a1, _DWORD *a2, int a3)
{
  int v4; // r9
  _DWORD *v7; // r6
  int v8; // r0
  bool v9; // cc

  v4 = a1 + 44;
  std::string::push_back(a1 + 44, *(unsigned __int8 *)(a1 + 12));
  if ( !a3 )
    return 1;
  v7 = &a2[a3];
  while ( 1 )
  {
    sub_E71D0(a1);
    v8 = *(_DWORD *)(a1 + 12);
    v9 = *a2 <= v8;
    if ( *a2 <= v8 )
      v9 = v8 <= a2[1];
    if ( !v9 )
      break;
    std::string::push_back(v4, (unsigned __int8)v8);
    a2 += 2;
    if ( a2 == v7 )
      return 1;
  }
  *(_DWORD *)(a1 + 56) = "invalid string: ill-formed UTF-8 byte";
  return 0;
}


// ======================================================================
