// ADDR: 0x117684
// SYMBOL: sub_117684
int __fastcall sub_117684(int a1)
{
  int v2; // r8
  int v3; // r9
  int v4; // r4
  int v6; // [sp+Ch] [bp-3Ch] BYREF
  _BYTE v7[4]; // [sp+10h] [bp-38h] BYREF
  int v8; // [sp+14h] [bp-34h]
  int v9; // [sp+18h] [bp-30h] BYREF
  _BYTE v10[4]; // [sp+20h] [bp-28h] BYREF
  int v11; // [sp+24h] [bp-24h]
  _DWORD v12[8]; // [sp+28h] [bp-20h] BYREF

  (*(void (__fastcall **)(_DWORD *, int))(*(_DWORD *)a1 + 92))(v12, a1);
  v2 = v12[0];
  (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 92))(v10, a1);
  v3 = v11;
  (*(void (__fastcall **)(int *, int))(*(_DWORD *)a1 + 88))(&v9, a1);
  v4 = v9;
  (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 88))(v7, a1);
  v6 = -520093697;
  return sub_163176(a1 + 28, v2, v3, v4, v8, &v6);
}


// ======================================================================
