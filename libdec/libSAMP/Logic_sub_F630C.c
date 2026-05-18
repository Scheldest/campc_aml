// ADDR: 0x15e950
// SYMBOL: sub_15E950
int __fastcall sub_15E950(int *a1, int a2, int a3)
{
  int result; // r0
  int v6; // r0
  _DWORD v7[3]; // [sp+Ch] [bp-1Ch] BYREF
  _DWORD v8[4]; // [sp+18h] [bp-10h] BYREF

  result = *a1;
  v7[0] = a3;
  if ( result )
  {
    v8[0] = a2;
    result = sub_15FAE4(result, v8);
    if ( result )
    {
      v6 = sub_15E798(a1, a2);
      v7[2] = v7;
      sub_15F6EC(v8, v6 + 20);
      result = v8[0];
      *(_BYTE *)(v8[0] + 96) = 0;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x15ea00
// SYMBOL: sub_15EA00
int __fastcall sub_15EA00(int *a1, int a2, int a3)
{
  int result; // r0
  int v6; // r0
  _DWORD v7[3]; // [sp+Ch] [bp-1Ch] BYREF
  _DWORD v8[4]; // [sp+18h] [bp-10h] BYREF

  result = *a1;
  v7[0] = a3;
  if ( result )
  {
    v8[0] = a2;
    result = sub_15FAE4(result, v8);
    if ( result )
    {
      v6 = sub_15E798(a1, a2);
      v7[2] = v7;
      sub_15F6EC(v8, v6 + 20);
      result = v8[0];
      *(_BYTE *)(v8[0] + 80) = 0;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x15eae0
// SYMBOL: sub_15EAE0
int __fastcall sub_15EAE0(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a2 + 24);
  if ( result )
    return ((int (__fastcall *)(_DWORD, _DWORD))(dword_23DF24 + 1934921))(*(_DWORD *)(result + 4), sub_15E74C);
  return result;
}


// ======================================================================
