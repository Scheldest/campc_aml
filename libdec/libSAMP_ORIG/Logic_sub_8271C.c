// ADDR: 0x825e4
// SYMBOL: sub_825E4
int sub_825E4()
{
  return (unsigned __int8)byte_1A49E9;
}


// ======================================================================
// ADDR: 0x82614
// SYMBOL: sub_82614
char __fastcall sub_82614(char result)
{
  byte_1A49E9 = result;
  return result;
}


// ======================================================================
// ADDR: 0x82674
// SYMBOL: sub_82674
int *sub_82674()
{
  return &dword_1A49F0;
}


// ======================================================================
// ADDR: 0x826b0
// SYMBOL: sub_826B0
char __fastcall sub_826B0(char result)
{
  byte_116E10 = result;
  return result;
}


// ======================================================================
// ADDR: 0x826bc
// SYMBOL: sub_826BC
int __fastcall sub_826BC(int result)
{
  dword_116E14 = result;
  return result;
}


// ======================================================================
// ADDR: 0x826c8
// SYMBOL: sub_826C8
int __fastcall sub_826C8(__int64 *a1)
{
  __int64 v2; // d16
  int result; // r0

  if ( (unsigned __int8)dword_1A49F0 << 31 )
    operator delete((void *)dword_1A49F8);
  v2 = *a1;
  dword_1A49F8 = *((_DWORD *)a1 + 2);
  result = 0;
  *(_QWORD *)&dword_1A49F0 = v2;
  *(_WORD *)a1 = 0;
  return result;
}


// ======================================================================
// ADDR: 0x82f58
// SYMBOL: sub_82F58
int __fastcall sub_82F58(int a1, int a2)
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
// ADDR: 0x82fac
// SYMBOL: sub_82FAC
bool __fastcall sub_82FAC(unsigned __int8 *a1, unsigned __int8 *a2)
{
  unsigned int v3; // lr
  unsigned int v4; // r4
  size_t v5; // r2
  unsigned int v6; // r1
  unsigned __int8 *v7; // r1
  unsigned __int8 *v8; // r3
  int v9; // r2
  int v10; // r0
  int v11; // t1
  int v12; // t1
  bool v13; // zf
  _BOOL4 result; // r0

  v3 = *a1;
  v4 = *a2;
  v5 = *((_DWORD *)a1 + 1);
  v6 = *((_DWORD *)a2 + 1);
  if ( (v3 & 1) == 0 )
    v5 = v3 >> 1;
  if ( (v4 & 1) == 0 )
    v6 = v4 >> 1;
  if ( v5 != v6 )
    return 0;
  v7 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
  if ( (v4 & 1) == 0 )
    v7 = a2 + 1;
  v8 = a1 + 1;
  if ( (v3 & 1) != 0 )
  {
    if ( v5 )
      return memcmp(*((const void **)a1 + 2), v7, v5) == 0;
    return 1;
  }
  if ( !v5 )
    return 1;
  v9 = (v3 >> 1) - 1;
  do
  {
    v11 = *v7++;
    v10 = v11;
    v12 = *v8++;
    v13 = v12 == v10;
    result = v12 == v10;
    if ( !v13 )
      break;
    v13 = v9-- == 0;
  }
  while ( !v13 );
  return result;
}


// ======================================================================
// ADDR: 0x8303c
// SYMBOL: sub_8303C
int sub_8303C()
{
  char v0; // r0
  int result; // r0
  int v2; // r1
  int (__fastcall *v3)(int, int, _DWORD); // r4
  int v4; // r0

  v0 = sub_8265C();
  if ( byte_1A49FC )
  {
    sub_826B0(v0);
    if ( !sub_8265C() )
    {
      sub_83224();
      if ( byte_1A49FC )
      {
        if ( byte_1A4A24 )
        {
          sub_80664("[sv:dbg:record:stopchecking] : checking device stoped");
          off_1ABEE8(dword_1A4A20);
          byte_1A4A24 = 0;
        }
      }
    }
  }
  result = sub_82668();
  if ( byte_1A49FC )
  {
    v2 = 100;
    if ( result < 0 )
      v2 = 0;
    sub_826BC(v2);
    v3 = (int (__fastcall *)(int, int, _DWORD))off_1ABF48;
    v4 = sub_82668();
    return v3(-1, 0x20000, (float)v4 / 100.0);
  }
  return result;
}


// ======================================================================
// ADDR: 0x830e8
// SYMBOL: sub_830E8
_DWORD *__fastcall sub_830E8(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r0
  int v4; // r1

  v2 = a1[4];
  if ( v2 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 24))(v2);
    v3 = (_DWORD *)a1[4];
    if ( a1 == v3 )
    {
      v4 = 4;
      goto LABEL_6;
    }
    if ( v3 )
    {
      v4 = 5;
LABEL_6:
      (*(void (**)(void))(*v3 + 4 * v4))();
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x83518
// SYMBOL: sub_83518
void __fastcall sub_83518(__int64 *a1, const char **a2)
{
  __int64 v4; // kr00_8
  unsigned int v5; // r6
  int v6; // r0
  const char *v7; // r8
  unsigned int *v8; // r5
  size_t v9; // r0
  size_t v10; // r6
  void *v11; // r5
  unsigned int v12; // r9
  void *v13; // r0
  unsigned int *v14; // r1
  void **v15; // r0
  void **v16; // r6
  __int64 v17; // d16
  void **v18; // r5
  void **v19; // r4
  int v20; // t1
  unsigned int *v21; // [sp+4h] [bp-2Ch]
  unsigned int *v22; // [sp+8h] [bp-28h]
  int v23; // [sp+Ch] [bp-24h]

  v4 = *a1;
  v5 = -1431655765 * ((HIDWORD(v4) - (int)v4) >> 2) + 1;
  if ( v5 > 0x15555555 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  if ( v5 <= 1431655766 * ((*((_DWORD *)a1 + 2) - (int)v4) >> 2) )
    v5 = 1431655766 * ((*((_DWORD *)a1 + 2) - (int)v4) >> 2);
  if ( (unsigned int)(-1431655765 * ((*((_DWORD *)a1 + 2) - (int)v4) >> 2)) >= 0xAAAAAAA )
    v5 = 357913941;
  if ( v5 )
  {
    if ( v5 > 0x15555555 )
      sub_7B270((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    v6 = operator new(12 * v5);
  }
  else
  {
    v6 = 0;
  }
  v7 = *a2;
  v8 = (unsigned int *)(v6 + 4 * ((HIDWORD(v4) - (int)v4) >> 2));
  v22 = v8;
  v23 = v6 + 12 * v5;
  v21 = v8;
  v9 = strlen(v7);
  if ( v9 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(v8);
  v10 = v9;
  if ( v9 >= 0xB )
  {
    v12 = (v9 + 16) & 0xFFFFFFF0;
    v13 = (void *)operator new(v12);
    *v8 = v12 | 1;
    v8[1] = v10;
    v8[2] = (unsigned int)v13;
    v11 = v13;
    goto LABEL_15;
  }
  *(_BYTE *)v8 = 2 * v9;
  v11 = (char *)v8 + 1;
  if ( v9 )
LABEL_15:
    j_memcpy(v11, v7, v10);
  *((_BYTE *)v11 + v10) = 0;
  v14 = v21;
  v16 = (void **)*((_DWORD *)a1 + 1);
  v15 = *(void ***)a1;
  if ( v16 == *(void ***)a1 )
  {
    v18 = *(void ***)a1;
  }
  else
  {
    do
    {
      v17 = *(_QWORD *)(v16 - 3);
      *(v14 - 1) = (unsigned int)*(v16 - 1);
      *(_QWORD *)(v14 - 3) = v17;
      v14 -= 3;
      *(v16 - 3) = 0;
      *(v16 - 2) = 0;
      *(v16 - 1) = 0;
      v16 -= 3;
    }
    while ( v16 != v15 );
    v15 = (void **)*((_DWORD *)a1 + 1);
    v18 = *(void ***)a1;
  }
  *(_DWORD *)a1 = v14;
  *((_DWORD *)a1 + 1) = v22 + 3;
  *((_DWORD *)a1 + 2) = v23;
  if ( v15 != v18 )
  {
    v19 = v15;
    do
    {
      v20 = *((unsigned __int8 *)v19 - 12);
      v19 -= 3;
      if ( v20 << 31 )
        operator delete(*(v15 - 1));
      v15 = v19;
    }
    while ( v19 != v18 );
  }
  if ( v18 )
    operator delete(v18, _stack_chk_guard);
}


// ======================================================================
