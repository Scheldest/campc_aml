// ADDR: 0xb07c0
// SYMBOL: sub_B07C0
void __fastcall sub_B07C0(__int64 *a1, int a2)
{
  __int64 v3; // kr00_8
  __int64 v4; // r4
  __int64 *v5; // r3
  int v6; // r0
  __int64 v7; // d17
  int v8; // r11
  __int64 v9; // d18
  __int64 v10; // d19
  __int64 v11; // d20
  int v12; // r10
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r2
  int v17; // r1
  int v18; // r3
  int v19; // r6
  __int64 v20; // d16
  __int64 v21; // d17
  __int64 v22; // d18
  __int64 v23; // d19
  __int64 v24; // d20
  __int64 v25; // d16

  HIDWORD(v4) = a2;
  v3 = *a1;
  LODWORD(v4) = 954437177 * ((HIDWORD(v3) - (int)v3) >> 3) + 1;
  if ( (unsigned int)v4 > 0x38E38E3 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  v5 = a1 + 1;
  if ( (unsigned int)v4 <= 1908874354 * ((*((_DWORD *)a1 + 2) - (int)v3) >> 3) )
    LODWORD(v4) = 1908874354 * ((*((_DWORD *)a1 + 2) - (int)v3) >> 3);
  if ( (unsigned int)(954437177 * ((*((_DWORD *)a1 + 2) - (int)v3) >> 3)) >= 0x1C71C71 )
    LODWORD(v4) = 59652323;
  if ( (_DWORD)v4 )
  {
    if ( (unsigned int)v4 > 0x38E38E3 )
      sub_7B270((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    v6 = operator new(72 * v4);
  }
  else
  {
    v6 = 0;
  }
  v7 = *(_QWORD *)(HIDWORD(v4) + 8);
  v8 = v6 + 8 * ((HIDWORD(v3) - (int)v3) >> 3);
  v9 = *(_QWORD *)(HIDWORD(v4) + 16);
  v10 = *(_QWORD *)(HIDWORD(v4) + 24);
  v11 = *(_QWORD *)(HIDWORD(v4) + 32);
  *(_QWORD *)v8 = *(_QWORD *)HIDWORD(v4);
  *(_QWORD *)(v8 + 8) = v7;
  *(_QWORD *)(v8 + 16) = v9;
  *(_QWORD *)(v8 + 24) = v10;
  *(_QWORD *)(v8 + 32) = v11;
  v12 = v6 + 72 * v4;
  std::string::basic_string(v8 + 40, HIDWORD(v4) + 40, (HIDWORD(v3) - (int)v3) >> 3, v5);
  *(_DWORD *)(v8 + 52) = *(_DWORD *)(HIDWORD(v4) + 52);
  std::string::basic_string(v8 + 56, HIDWORD(v4) + 56, v13, v14);
  v15 = *((_DWORD *)a1 + 1);
  HIDWORD(v4) = *(_DWORD *)a1;
  v16 = v8 + 72;
  if ( v15 == *(_DWORD *)a1 )
  {
    LODWORD(v4) = *(_DWORD *)a1;
  }
  else
  {
    v17 = 0;
    do
    {
      v18 = v15 + v17;
      v19 = v8 + v17;
      LODWORD(v4) = v15 + v17 - 72;
      v17 -= 72;
      v20 = *(_QWORD *)v4;
      v21 = *(_QWORD *)(v4 + 8);
      LODWORD(v4) = v4 + 16;
      v22 = *(_QWORD *)v4;
      v23 = *(_QWORD *)(v4 + 8);
      v24 = *(_QWORD *)(v4 + 16);
      LODWORD(v4) = v19 - 72;
      *(_QWORD *)v4 = v20;
      *(_QWORD *)(v4 + 8) = v21;
      LODWORD(v4) = v19 - 56;
      *(_QWORD *)v4 = v22;
      *(_QWORD *)(v4 + 8) = v23;
      *(_QWORD *)(v19 - 40) = v24;
      v25 = *(_QWORD *)(v18 - 32);
      *(_DWORD *)(v19 - 24) = *(_DWORD *)(v18 - 24);
      *(_QWORD *)(v19 - 32) = v25;
      LODWORD(v4) = *(_DWORD *)(v18 - 20);
      *(_DWORD *)(v18 - 32) = 0;
      *(_DWORD *)(v18 - 28) = 0;
      *(_DWORD *)(v18 - 24) = 0;
      *(_DWORD *)(v19 - 20) = v4;
      LODWORD(v4) = *(_DWORD *)(v18 - 8);
      *(_QWORD *)(v19 - 16) = *(_QWORD *)(v18 - 16);
      *(_DWORD *)(v19 - 8) = v4;
      *(_DWORD *)(v18 - 16) = 0;
      *(_DWORD *)(v18 - 12) = 0;
      *(_DWORD *)(v18 - 8) = 0;
    }
    while ( v15 + v17 != HIDWORD(v4) );
    v16 = v8 + 72;
    v8 += v17;
    v4 = *a1;
  }
  *(_DWORD *)a1 = v8;
  *((_DWORD *)a1 + 1) = v16;
  for ( *((_DWORD *)a1 + 2) = v12; HIDWORD(v4) != (_DWORD)v4; HIDWORD(v4) -= 72 )
  {
    if ( *(unsigned __int8 *)(HIDWORD(v4) - 16) << 31 )
      operator delete(*(void **)(HIDWORD(v4) - 8));
    if ( *(unsigned __int8 *)(HIDWORD(v4) - 32) << 31 )
      operator delete(*(void **)(HIDWORD(v4) - 24));
  }
  if ( (_DWORD)v4 )
    operator delete((void *)v4, _stack_chk_guard);
}


// ======================================================================
