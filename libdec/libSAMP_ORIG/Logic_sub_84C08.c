// ADDR: 0x7d980
// SYMBOL: sub_7D980
int __fastcall sub_7D980(int a1, int a2)
{
  int (__fastcall *v3)(int, int, int, int, _DWORD); // r5
  int v4; // r0
  int v5; // r0
  int v6; // r1
  bool v7; // zf
  _DWORD *exception; // r0

  *(_BYTE *)(a1 + 2) = 0;
  v3 = (int (__fastcall *)(int, int, int, int, _DWORD))off_1ABEF0;
  *(_WORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = v3(48000, 1, a2, -1, 0);
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_WORD *)(a1 + 8) = -1;
  v4 = j_opus_decoder_create(48000, 1, a1 + 9676);
  *(_DWORD *)(a1 + 64) = v4;
  *(_DWORD *)(a1 + 9676) = -1;
  *(_BYTE *)(a1 + 9672) = 0;
  *(_DWORD *)(a1 + 9668) = 0;
  if ( *(_DWORD *)(a1 + 4) )
  {
    if ( v4 )
      goto LABEL_6;
  }
  else
  {
    v5 = off_1ABF0C();
    sub_80664("[sv:err:channel] : failed to create bass channel (code:%d)", v5);
    v4 = *(_DWORD *)(a1 + 64);
    if ( v4 )
      goto LABEL_6;
  }
  sub_80664("[sv:err:channel] : failed to create opus decoder (code:%d)", *(_DWORD *)(a1 + 9676));
  v4 = *(_DWORD *)(a1 + 64);
LABEL_6:
  v6 = *(_DWORD *)(a1 + 4);
  v7 = v6 == 0;
  if ( v6 )
    v7 = v4 == 0;
  if ( v7 )
  {
    if ( v4 )
    {
      j_opus_decoder_destroy();
      v6 = *(_DWORD *)(a1 + 4);
    }
    if ( v6 )
      off_1ABF08(v6);
    exception = j___cxa_allocate_exception(4u);
    *exception = &off_11472C;
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::exception,
      (void (*)(void *))std::exception::~exception);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x7db48
// SYMBOL: sub_7DB48
int __fastcall sub_7DB48(int result, __int16 a2)
{
  *(_WORD *)(result + 8) = a2;
  return result;
}


// ======================================================================
// ADDR: 0x7dbe4
// SYMBOL: sub_7DBE4
int __fastcall sub_7DBE4(int a1, unsigned int a2, int a3, int a4)
{
  bool v5; // zf
  int *v6; // r11
  int v10; // r3
  int result; // r0
  int v12; // r6
  int v13; // r0

  v5 = a2 == 0;
  v6 = (int *)(a1 + 9668);
  if ( a2 )
    v5 = *(_BYTE *)(a1 + 9672) == 0;
  if ( v5 )
  {
    sub_80664("[sv:dbg:channel:push] : init channel (speaker:%hu)", *(unsigned __int16 *)(a1 + 8));
    off_1ABEF8(*(_DWORD *)(a1 + 4));
    off_1ABF50(*(_DWORD *)(a1 + 4), off_1ABF50, 0, 0, 0);
    j_opus_decoder_ctl(*(_DWORD *)(a1 + 64), 4028);
    if ( *(_BYTE *)a1 )
      *(_BYTE *)(a1 + 2) = 1;
    *(_BYTE *)a1 = 0;
    *(_BYTE *)(a1 + 9672) = 1;
  }
  else
  {
    v10 = *v6;
    if ( *v6 > a2 )
      return sub_80664(
               "[sv:dbg:channel:push] : late packet to channel (speaker:%hu) (pack:%u;expPack:%u)",
               *(unsigned __int16 *)(a1 + 8),
               a2,
               v10);
    if ( *v6 < a2 )
    {
      sub_80664(
        "[sv:dbg:channel:push] : lost packet to channel (speaker:%hu) (pack:%u;expPack:%u)",
        *(unsigned __int16 *)(a1 + 8),
        a2,
        v10);
      if ( j_opus_decode(*(_DWORD *)(a1 + 64), a3, a4, a1 + 68, 4800, 1) == 4800 )
        off_1ABF4C(*(_DWORD *)(a1 + 4), a1 + 68, 9600);
    }
  }
  if ( j_opus_decode(*(_DWORD *)(a1 + 64), a3, a4, a1 + 68, 4800, 0) == 4800 )
    off_1ABF4C(*(_DWORD *)(a1 + 4), a1 + 68, 9600);
  v12 = off_1ABF54(*(_DWORD *)(a1 + 4));
  v13 = off_1ABF44(*(_DWORD *)(a1 + 4), 0, 0);
  if ( (v12 == 3 || v12 == 0) && (unsigned int)(v13 - 28800) <= 0xFFFF8F7E )
  {
    sub_80664("[sv:dbg:channel:push] : playing channel (speaker:%hu)", *(unsigned __int16 *)(a1 + 8));
    off_1ABEF4(*(_DWORD *)(a1 + 4), 0);
    if ( !*(_BYTE *)a1 )
      *(_BYTE *)(a1 + 1) = 1;
    *(_BYTE *)a1 = 1;
  }
  result = a2 + 1;
  *v6 = a2 + 1;
  return result;
}


// ======================================================================
// ADDR: 0x8533c
// SYMBOL: sub_8533C
void __fastcall sub_8533C(const std::nothrow_t ***a1, const std::nothrow_t **a2)
{
  char *v4; // r0
  int v5; // r5
  unsigned int v6; // r6
  int v7; // r0
  int v8; // r0
  const std::nothrow_t *v9; // r1
  const std::nothrow_t **v10; // r2
  const std::nothrow_t **v11; // r3
  const std::nothrow_t **v12; // r5
  const std::nothrow_t **v13; // r12
  const std::nothrow_t **v14; // r0
  const std::nothrow_t *v15; // t1
  const std::nothrow_t **v16; // r6
  int v17; // r0
  int v18; // t1
  void *v19; // r0

  v4 = (char *)*a1;
  v5 = (char *)a1[1] - v4;
  v6 = (v5 >> 2) + 1;
  if ( v6 >= 0x40000000 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  v7 = (char *)a1[2] - v4;
  if ( v6 <= v7 >> 1 )
    v6 = v7 >> 1;
  if ( (unsigned int)v7 >= 0x7FFFFFFC )
    v6 = 0x3FFFFFFF;
  if ( v6 )
  {
    if ( v6 >= 0x40000000 )
      sub_7B270((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    v8 = operator new(4 * v6);
  }
  else
  {
    v8 = 0;
  }
  v9 = *a2;
  v10 = (const std::nothrow_t **)(v8 + 4 * (v5 >> 2));
  *a2 = 0;
  v11 = a1[1];
  v12 = *a1;
  v13 = (const std::nothrow_t **)(v8 + 4 * v6);
  *v10 = v9;
  v14 = v10 + 1;
  if ( v11 == v12 )
  {
    *a1 = v10;
    a1[1] = v14;
    a1[2] = v13;
  }
  else
  {
    do
    {
      v15 = *--v11;
      v9 = v15;
      *v11 = 0;
      *--v10 = v15;
    }
    while ( v11 != v12 );
    v16 = a1[1];
    v12 = *a1;
    *a1 = v10;
    a1[1] = v14;
    a1[2] = v13;
    while ( v16 != v12 )
    {
      v18 = (int)*--v16;
      v17 = v18;
      *v16 = 0;
      if ( v18 )
      {
        v19 = (void *)sub_7DACC(v17);
        operator delete(v19);
      }
    }
  }
  if ( v12 )
    operator delete(v12, v9);
}


// ======================================================================
