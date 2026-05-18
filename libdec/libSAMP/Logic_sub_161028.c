// ADDR: 0x1610d4
// SYMBOL: sub_1610D4
int __fastcall sub_1610D4(unsigned int a1)
{
  unsigned int v1; // r4
  int i; // r6
  int v4; // r0

  v1 = a1;
  if ( a1 >= 0xA )
  {
    _android_log_print(6, "AXL", "anti_crasher: Invalid env id %d. Max env id is %d", a1, 10);
    v1 = 0;
  }
  if ( !*(_BYTE *)j___emutls_get_address(&unk_23909C) )
  {
    for ( i = 0; i != 2000; i += 200 )
    {
      v4 = j___emutls_get_address(&unk_23908C) + i;
      *(_BYTE *)(v4 + 192) = 1;
    }
    *(_BYTE *)j___emutls_get_address(&unk_23909C) = 1;
    if ( v1 >= 0xA )
      sub_EE13C((int)"array::at");
  }
  return j___emutls_get_address(&unk_23908C) + 200 * v1;
}


// ======================================================================
// ADDR: 0x1618e0
// SYMBOL: sub_1618E0
int __fastcall sub_1618E0(int result, int a2, int a3, int a4, int a5)
{
  int v5; // r4
  int v6; // r5
  int v7; // r6
  int v8; // r7
  int v9; // r8
  int v10; // r9
  int v11; // r10
  int v12; // r11
  int v13; // r12
  int v14; // lr
  __int64 v15; // d0
  __int64 v16; // d1
  __int64 v17; // d2
  __int64 v18; // d3
  __int64 v19; // d4
  __int64 v20; // d5
  __int64 v21; // d6
  __int64 v22; // d7
  __int64 v23; // d8
  __int64 v24; // d9
  __int64 v25; // d10
  __int64 v26; // d11
  __int64 v27; // d12
  __int64 v28; // d13
  __int64 v29; // d14
  __int64 v30; // d15

  *(_DWORD *)result = result;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = a3;
  *(_DWORD *)(result + 12) = a4;
  *(_DWORD *)(result + 16) = v5;
  *(_DWORD *)(result + 20) = v6;
  *(_DWORD *)(result + 24) = v7;
  *(_DWORD *)(result + 28) = v8;
  *(_DWORD *)(result + 32) = v9;
  *(_DWORD *)(result + 36) = v10;
  *(_DWORD *)(result + 40) = v11;
  *(_DWORD *)(result + 44) = v12;
  *(_DWORD *)(result + 48) = v13;
  *(_DWORD *)(result + 52) = &a5;
  *(_DWORD *)(result + 56) = v14;
  *(_DWORD *)(result + 60) = v14;
  *(_QWORD *)(result + 64) = v15;
  *(_QWORD *)(result + 72) = v16;
  *(_QWORD *)(result + 80) = v17;
  *(_QWORD *)(result + 88) = v18;
  *(_QWORD *)(result + 96) = v19;
  *(_QWORD *)(result + 104) = v20;
  *(_QWORD *)(result + 112) = v21;
  *(_QWORD *)(result + 120) = v22;
  *(_QWORD *)(result + 128) = v23;
  *(_QWORD *)(result + 136) = v24;
  *(_QWORD *)(result + 144) = v25;
  *(_QWORD *)(result + 152) = v26;
  *(_QWORD *)(result + 160) = v27;
  *(_QWORD *)(result + 168) = v28;
  *(_QWORD *)(result + 176) = v29;
  *(_QWORD *)(result + 184) = v30;
  return result;
}


// ======================================================================
