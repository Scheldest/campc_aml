// ADDR: 0xe66c0
// SYMBOL: sub_E66C0
int __fastcall sub_E66C0(int a1, __int64 *a2, int a3, char a4, char a5)
{
  __int64 v8; // r2
  int v9; // r0

  sub_E67B8(a1, a3);
  v8 = *a2;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)a2;
  *(_BYTE *)(a1 + 40) = a5;
  *(_DWORD *)(a1 + 36) = HIDWORD(v8);
  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 52) = 0LL;
  *(_QWORD *)(a1 + 60) = 0LL;
  *(_QWORD *)(a1 + 68) = 0LL;
  *(_QWORD *)(a1 + 76) = 0LL;
  *(_DWORD *)(a1 + 88) = &byte_8F794;
  *(_DWORD *)(a1 + 44) = -1;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  v9 = sub_E67E4();
  *(_BYTE *)(a1 + 128) = a4;
  *(_DWORD *)(a1 + 120) = v9;
  *(_DWORD *)(a1 + 24) = sub_E67FC(a1 + 32);
  return a1;
}


// ======================================================================
// ADDR: 0xe675c
// SYMBOL: sub_E675C
int __fastcall sub_E675C(int a1, int a2)
{
  _DWORD *v3; // r0
  int v4; // r2

  v3 = (_DWORD *)(a2 + 16);
  v4 = *(_DWORD *)(a2 + 16);
  if ( v4 )
  {
    if ( a2 == v4 )
    {
      *(_DWORD *)(a1 + 16) = a1;
      (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*v3 + 12))(*v3, a1);
      return a1;
    }
    *(_DWORD *)(a1 + 16) = v4;
  }
  else
  {
    v3 = (_DWORD *)(a1 + 16);
  }
  *v3 = 0;
  return a1;
}


// ======================================================================
