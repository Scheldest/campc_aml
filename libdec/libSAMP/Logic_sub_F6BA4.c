// ADDR: 0xf7976
// SYMBOL: sub_F7976
unsigned int __fastcall sub_F7976(unsigned int result, int a2, unsigned int *a3, int a4, _DWORD **a5)
{
  _DWORD *v6; // r4
  _DWORD *v7; // r6
  unsigned int v8; // r8
  unsigned int v9; // r1
  _DWORD *v10; // r1
  _DWORD *v11; // r5
  char v12; // r10
  _DWORD v13[2]; // [sp+0h] [bp-28h] BYREF
  char v14; // [sp+8h] [bp-20h]

  v7 = (_DWORD *)(a2 + 4);
  v6 = *(_DWORD **)(a2 + 4);
  v8 = result;
  if ( v6 )
  {
    result = *a3;
    v7 = (_DWORD *)(a2 + 4);
    while ( 1 )
    {
      v9 = v6[4];
      if ( result >= v9 )
      {
        if ( v9 >= result )
          goto LABEL_11;
        v7 = v6 + 1;
        v10 = (_DWORD *)v6[1];
        if ( !v10 )
          goto LABEL_11;
        ++v6;
      }
      else
      {
        v10 = (_DWORD *)*v6;
        if ( !*v6 )
        {
          v7 = v6;
          goto LABEL_11;
        }
      }
      v7 = v6;
      v6 = v10;
    }
  }
  v6 = (_DWORD *)(a2 + 4);
LABEL_11:
  v11 = (_DWORD *)*v7;
  v12 = 0;
  if ( !*v7 )
  {
    v11 = (_DWORD *)operator new(0x20u);
    v11[4] = **a5;
    v11[5] = 0;
    v13[1] = a2 + 4;
    v14 = 1;
    v11[6] = 0;
    v11[7] = 0;
    sub_F7A12(a2, v6, v7, v11);
    v13[0] = 0;
    result = sub_F7A3C(v13, 0);
    v12 = 1;
  }
  *(_BYTE *)(v8 + 4) = v12;
  *(_DWORD *)v8 = v11;
  return result;
}


// ======================================================================
// ADDR: 0xf7a9e
// SYMBOL: sub_F7A9E
void __fastcall sub_F7A9E(int a1, unsigned __int8 *a2)
{
  if ( a2[12] << 31 )
    operator delete(*((void **)a2 + 5));
  if ( *a2 << 31 )
    operator delete(*((void **)a2 + 2), (const std::nothrow_t *)a2);
}


// ======================================================================
// ADDR: 0x15e858
// SYMBOL: sub_15E858
int __fastcall sub_15E858(int *a1, int a2)
{
  int v2; // r0

  v2 = sub_15E798(a1, a2);
  return sub_15F286(v2);
}


// ======================================================================
