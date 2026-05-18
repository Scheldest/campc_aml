// ADDR: 0x15e8f0
// SYMBOL: sub_15E8F0
int __fastcall sub_15E8F0(int *a1, int a2, int a3, int a4)
{
  int v5; // r0
  int v6; // r5
  int result; // r0
  _DWORD v8[3]; // [sp+Ch] [bp-24h] BYREF
  _DWORD v9[6]; // [sp+18h] [bp-18h] BYREF

  v8[0] = a3;
  v5 = sub_15E798(a1, a2);
  v8[2] = v8;
  sub_15F6EC(v9, v5 + 20);
  v6 = v9[0];
  if ( !*(_BYTE *)(v9[0] + 12) )
  {
    j_memcpy((void *)(v9[0] + 16), (const void *)(v8[0] + 16), 0x40u);
    *(_BYTE *)(v6 + 12) = 1;
  }
  result = 1;
  *(_DWORD *)(v6 + 100) = a4;
  *(_BYTE *)(v6 + 96) = 1;
  return result;
}


// ======================================================================
// ADDR: 0x15e99c
// SYMBOL: sub_15E99C
int __fastcall sub_15E99C(int *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // r0
  int v8; // r5
  int result; // r0
  _DWORD v10[3]; // [sp+Ch] [bp-24h] BYREF
  _DWORD v11[6]; // [sp+18h] [bp-18h] BYREF

  v10[0] = a3;
  v7 = sub_15E798(a1, a2);
  v10[2] = v10;
  sub_15F6EC(v11, v7 + 20);
  v8 = v11[0];
  if ( !*(_BYTE *)(v11[0] + 12) )
  {
    j_memcpy((void *)(v11[0] + 16), (const void *)(v10[0] + 16), 0x40u);
    *(_BYTE *)(v8 + 12) = 1;
  }
  *(_BYTE *)(v8 + 80) = 1;
  result = v8 + 84;
  *(_DWORD *)(v8 + 84) = a4;
  *(_DWORD *)(v8 + 88) = a5;
  *(_DWORD *)(v8 + 92) = a6;
  return result;
}


// ======================================================================
