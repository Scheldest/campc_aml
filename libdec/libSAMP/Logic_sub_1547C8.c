// ADDR: 0x154850
// SYMBOL: sub_154850
int __fastcall sub_154850(int a1)
{
  int result; // r0
  int v3; // r0
  void (__fastcall *v4)(int, int *); // r2
  int v5[3]; // [sp+4h] [bp-Ch] BYREF

  result = *(_DWORD *)(a1 + 16);
  if ( result )
  {
    sub_159B70(1, "Shutting down...");
    (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 16) + 132))(*(_DWORD *)(a1 + 16), a1);
    v3 = *(_DWORD *)(a1 + 16);
    v4 = *(void (__fastcall **)(int, int *))(*(_DWORD *)v3 + 100);
    v5[0] = 252;
    v4(v3, v5);
    result = 0;
    *(_BYTE *)(a1 + 125) = 0;
    *(_DWORD *)(a1 + 16) = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x15611c
// SYMBOL: sub_15611C
void __fastcall sub_15611C(int a1, int *a2)
{
  _DWORD *v3; // r0
  const std::nothrow_t *v4; // r1
  int v5; // r0

  if ( a2 )
  {
    v3 = a2 + 1;
    v4 = (const std::nothrow_t *)a2[1];
    *v3 = 0;
    if ( v4 )
      sub_15614C();
    v5 = *a2;
    *a2 = 0;
    if ( v5 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
    operator delete(a2, v4);
  }
}


// ======================================================================
// ADDR: 0x156178
// SYMBOL: sub_156178
void __fastcall sub_156178(int a1, unsigned __int8 *a2)
{
  const std::nothrow_t *v4; // r1

  if ( a2 )
  {
    sub_156178(a1, *(_DWORD *)a2);
    sub_156178(a1, *((_DWORD *)a2 + 1));
    if ( a2[16] << 31 )
      operator delete(*((void **)a2 + 6));
    operator delete(a2, v4);
  }
}


// ======================================================================
// ADDR: 0x1561d2
// SYMBOL: sub_1561D2
void __fastcall sub_1561D2(int a1, void **a2)
{
  const std::nothrow_t *v3; // r1

  if ( a2 )
  {
    sub_15E2C8(a2 + 13);
    sub_152F10(a2 + 8);
    sub_152EC6((int)(a2 + 3));
    operator delete(a2, v3);
  }
}


// ======================================================================
// ADDR: 0x15be48
// SYMBOL: sub_15BE48
int __fastcall sub_15BE48(int a1)
{
  sub_15BE94(a1);
  if ( *(_BYTE *)(a1 + 64) )
    sub_15A1EE();
  sub_15C902(a1 + 44);
  sub_15C8C6(a1 + 24);
  sub_15C8A0(a1 + 4);
  return a1;
}


// ======================================================================
