// ADDR: 0x15e7cc
// SYMBOL: sub_15E7CC
int __fastcall sub_15E7CC(int a1, int a2)
{
  int v3; // r0
  int v4; // r4
  int v5; // r6
  int v6; // r4
  int v8; // [sp+8h] [bp-28h] BYREF
  int v9; // [sp+Ch] [bp-24h] BYREF
  _BYTE v10[4]; // [sp+10h] [bp-20h] BYREF
  int *v11; // [sp+14h] [bp-1Ch] BYREF
  _DWORD v12[6]; // [sp+18h] [bp-18h] BYREF

  v9 = a2;
  v3 = sub_15ED76(a1, &v9);
  if ( v3 )
    return *(_DWORD *)(v3 + 12);
  v5 = operator new(0x28u);
  v8 = v5;
  *(_QWORD *)v5 = 0LL;
  *(_QWORD *)(v5 + 8) = 0LL;
  *(_DWORD *)(v5 + 16) = 1065353216;
  *(_QWORD *)(v5 + 20) = 0LL;
  *(_QWORD *)(v5 + 28) = 0LL;
  *(_DWORD *)(v5 + 36) = 1065353216;
  v11 = &v9;
  sub_15EE48(v12, a1, &v9, &unk_BA757, &v11, v10, v8);
  v6 = v12[0];
  v8 = 0;
  sub_F629E((int *)(v12[0] + 12), v5);
  v4 = *(_DWORD *)(v6 + 12);
  sub_F629E(&v8, 0);
  return v4;
}


// ======================================================================
