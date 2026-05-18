// ADDR: 0x150d14
// SYMBOL: sub_150D14
int __fastcall sub_150D14(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // r0
  int v7; // r1
  _DWORD v8[4]; // [sp+0h] [bp-20h] BYREF
  _DWORD *v9; // [sp+10h] [bp-10h]

  *(_DWORD *)(a1 + 76) = a2;
  *(_DWORD *)(a1 + 80) = a3;
  *(_DWORD *)(a1 + 84) = a4;
  *(_DWORD *)(a1 + 88) = a5;
  *(_BYTE *)(a1 + 72) = 1;
  *(_DWORD *)(a1 + 92) = a6;
  v9 = v8;
  v8[1] = a1;
  v8[0] = &off_22F2EC;
  sub_150A8C((_DWORD *)a1, (int)v8);
  result = (int)v9;
  if ( v8 == v9 )
  {
    v7 = 4;
  }
  else
  {
    if ( !v9 )
      return result;
    v7 = 5;
  }
  return (*(int (**)(void))(*v9 + 4 * v7))();
}


// ======================================================================
// ADDR: 0x1527b0
// SYMBOL: sub_1527B0
int __fastcall sub_1527B0(int a1, __int16 a2, _WORD *a3)
{
  int v3; // r4
  int v5; // r6
  int v6; // r0
  int v7; // r0
  int v9; // [sp+8h] [bp-30h] BYREF
  __int16 v10; // [sp+Eh] [bp-2Ah] BYREF
  int *v11; // [sp+10h] [bp-28h] BYREF
  __int16 *v12; // [sp+14h] [bp-24h] BYREF
  _DWORD v13[8]; // [sp+18h] [bp-20h] BYREF

  v3 = a1 + 12;
  v10 = a2;
  v5 = 0;
  if ( !sub_15426C(a1 + 12, &v10) )
  {
    v6 = operator new(0x70u);
    *(_DWORD *)v6 = &off_22F3EC;
    *(_DWORD *)(v6 + 4) = v6 + 4;
    *(_WORD *)(v6 + 104) = *a3;
    *(_QWORD *)(v6 + 12) = 0LL;
    *(_QWORD *)(v6 + 20) = 0LL;
    *(_DWORD *)(v6 + 28) = 0;
    *(_DWORD *)(v6 + 8) = v6 + 4;
    *(_QWORD *)(v6 + 36) = 0LL;
    *(_QWORD *)(v6 + 44) = 0LL;
    *(_QWORD *)(v6 + 52) = 0LL;
    *(_QWORD *)(v6 + 60) = 0LL;
    *(_DWORD *)(v6 + 32) = 1065353216;
    *(_DWORD *)(v6 + 96) = 0;
    *(_DWORD *)(v6 + 100) = 0;
    *(_BYTE *)(v6 + 106) = 0;
    v9 = v6;
    *(_WORD *)(v6 + 72) = 0;
    v12 = &v10;
    v11 = &v9;
    sub_153BB4(v13, v3, &v10, &unk_B998D, &v12, &v11);
    v7 = v9;
    v5 = *(_DWORD *)(v13[0] + 12);
    v9 = 0;
    if ( v7 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
  }
  return v5;
}


// ======================================================================
