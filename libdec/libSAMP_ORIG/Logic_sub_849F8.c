// ADDR: 0x86094
// SYMBOL: sub_86094
int __fastcall sub_86094(int result, int a2, int a3, __int64 *a4)
{
  __int64 v4; // d16

  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  v4 = *a4;
  *(_DWORD *)(result + 16) = *((_DWORD *)a4 + 2);
  *(_QWORD *)(result + 8) = v4;
  *(_DWORD *)a4 = 0;
  *((_DWORD *)a4 + 1) = 0;
  *((_DWORD *)a4 + 2) = 0;
  return result;
}


// ======================================================================
