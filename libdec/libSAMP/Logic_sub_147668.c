// ADDR: 0x147da0
// SYMBOL: sub_147DA0
int __fastcall sub_147DA0(int a1, unsigned int a2)
{
  int v4; // r0
  int result; // r0
  __int64 v6; // d16
  __int64 v7; // d16
  __int64 v8; // d16
  int v9; // r1
  int v10; // r0
  _BYTE *v11; // r4

  v4 = sub_E35A0(dword_23DEF0);
  result = sub_105696(v4, a2);
  if ( result )
  {
    v6 = *(_QWORD *)(result + 8);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(result + 16);
    *(_QWORD *)(a1 + 16) = v6;
    v7 = *(_QWORD *)(result + 20);
    *(_DWORD *)(a1 + 36) = *(_DWORD *)(result + 28);
    *(_QWORD *)(a1 + 28) = v7;
    v8 = *(_QWORD *)(result + 32);
    v9 = dword_23DEEC;
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(result + 40);
    *(_QWORD *)(a1 + 40) = v8;
    v10 = *(_DWORD *)(v9 + 120);
    *(_DWORD *)a1 = 1;
    *(_DWORD *)(a1 + 4) = a2;
    sub_134D18(v10, a1 + 16);
    v11 = *(_BYTE **)(dword_23DEEC + 132);
    if ( v11[80] )
      (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v11 + 36))(*(_DWORD *)(dword_23DEEC + 132), 0);
    result = 0;
    v11[80] = 0;
  }
  return result;
}


// ======================================================================
