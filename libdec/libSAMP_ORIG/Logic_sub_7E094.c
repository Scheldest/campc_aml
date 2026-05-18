// ADDR: 0x7dacc
// SYMBOL: sub_7DACC
int __fastcall sub_7DACC(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  _DWORD *v4; // r0
  int v5; // r1

  if ( *(_BYTE *)a1 )
    *(_BYTE *)(a1 + 2) = 1;
  j_opus_decoder_destroy(*(_DWORD *)(a1 + 64));
  off_1ABF08(*(_DWORD *)(a1 + 4));
  v2 = *(_DWORD **)(a1 + 56);
  if ( (_DWORD *)(a1 + 40) == v2 )
  {
    v3 = 4;
  }
  else
  {
    if ( !v2 )
      goto LABEL_8;
    v3 = 5;
  }
  (*(void (**)(void))(*v2 + 4 * v3))();
LABEL_8:
  v4 = *(_DWORD **)(a1 + 32);
  if ( (_DWORD *)(a1 + 16) == v4 )
  {
    v5 = 4;
    goto LABEL_12;
  }
  if ( v4 )
  {
    v5 = 5;
LABEL_12:
    (*(void (**)(void))(*v4 + 4 * v5))();
  }
  return a1;
}


// ======================================================================
// ADDR: 0x7e1a4
// SYMBOL: sub_7E1A4
void __fastcall sub_7E1A4(int a1, _DWORD *a2)
{
  _DWORD *v4; // r0
  const std::nothrow_t *v5; // r1
  _DWORD *v6; // r0

  if ( a2 )
  {
    sub_7E1A4(a1, *a2);
    sub_7E1A4(a1, a2[1]);
    v4 = (_DWORD *)a2[5];
    v5 = 0;
    a2[5] = 0;
    if ( v4 )
    {
      v6 = sub_7DE3C(v4);
      operator delete(v6);
    }
    operator delete(a2, v5);
  }
}


// ======================================================================
// ADDR: 0x7e1da
// SYMBOL: sub_7E1DA
void __fastcall sub_7E1DA(int a1, _DWORD *a2)
{
  int v4; // r0
  const std::nothrow_t *v5; // r1

  if ( a2 )
  {
    sub_7E1DA(a1, *a2);
    sub_7E1DA(a1, a2[1]);
    v4 = a2[5];
    v5 = 0;
    a2[5] = 0;
    if ( v4 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
    operator delete(a2, v5);
  }
}


// ======================================================================
