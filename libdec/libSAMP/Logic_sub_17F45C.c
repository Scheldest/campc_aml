// ADDR: 0x181b28
// SYMBOL: sub_181B28
int __fastcall sub_181B28(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r0
  _BOOL4 v6; // r0
  void (__fastcall *v7)(int, unsigned __int8 *, _DWORD, int, _DWORD, int, int, int); // r6
  unsigned __int8 v9[12]; // [sp+20h] [bp-140h] BYREF
  int v10; // [sp+134h] [bp-2Ch] BYREF
  int v11; // [sp+138h] [bp-28h]
  char v12[25]; // [sp+13Fh] [bp-21h] BYREF

  v4 = *(_DWORD *)(a1 + 12);
  v10 = a2;
  v11 = a3;
  v5 = sub_17D4C0((int)v9, ((v4 + 7) >> 3) + 1);
  v12[0] = 41;
  sub_17D628(v5, v12, 8, 1);
  sub_17D566(v9, *(const void **)(a1 + 24), (*(_DWORD *)(a1 + 12) + 7) >> 3);
  v6 = sub_17E580((int)&v10, (int)&unk_BE944);
  v7 = *(void (__fastcall **)(int, unsigned __int8 *, _DWORD, int, _DWORD, int, int, int))(*(_DWORD *)a1 + 56);
  if ( v6 )
    v7(a1, v9, 0, 8, 0, v10, v11, 1);
  else
    v7(a1, v9, 0, 8, 0, v10, v11, 0);
  return sub_17D542((int)v9);
}


// ======================================================================
