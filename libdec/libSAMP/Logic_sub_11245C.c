// ADDR: 0x1128a0
// SYMBOL: sub_1128A0
int __fastcall sub_1128A0(_DWORD *a1, int a2, __int64 *a3, int *a4)
{
  _DWORD *v8; // r5
  __int64 v9; // r2
  int v10; // r6
  unsigned int *v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // r1
  unsigned int *v14; // r0
  unsigned int v15; // r1
  int v16; // r0
  __int64 v17; // kr00_8
  int v18; // r2
  int result; // r0
  int v20; // r1
  int v21; // r0
  _DWORD *v22; // r0
  _DWORD *v23; // [sp+4h] [bp-34h]
  _BYTE v24[8]; // [sp+Ch] [bp-2Ch] BYREF
  _DWORD *v25; // [sp+14h] [bp-24h]

  v8 = (_DWORD *)operator new(0x28u);
  v9 = *a3;
  *v8 = &off_22B7C0;
  v8[3] = &off_22B7E8;
  *((_WORD *)v8 + 10) = 1;
  v10 = *a4;
  v8[1] = 0;
  v11 = v8 + 1;
  v8[2] = 0;
  v8[4] = 0;
  v8[6] = a2;
  *(_QWORD *)(v8 + 7) = v9;
  v8[9] = v10;
  do
    v12 = __ldrex(v11);
  while ( __strex(v12 + 1, v11) );
  __dmb(0xBu);
  do
    v13 = __ldrex(v11);
  while ( __strex(v13 - 1, v11) );
  __dmb(0xBu);
  if ( !v13 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v8 + 8))(v8);
    std::__shared_weak_count::__release_weak((std::__shared_weak_count *)v8);
  }
  v23 = v8 + 3;
  if ( v8 )
  {
    v14 = v8 + 2;
    do
      v15 = __ldrex(v14);
    while ( __strex(v15 + 1, v14) );
  }
  v16 = *(_DWORD *)(a2 + 8);
  a1[2] = v8;
  v17 = *(_QWORD *)(a2 + 12);
  *a1 = &off_22AE84;
  a1[1] = v23;
  v18 = ((int)v17 - v16) >> 3;
  v8[4] = v18;
  if ( (unsigned int)v17 >= HIDWORD(v17) )
  {
    v20 = v18 + 1;
    if ( (unsigned int)(v18 + 1) >= 0x20000000 )
      std::__vector_base_common<true>::__throw_length_error(a2 + 8);
    v21 = HIDWORD(v17) - v16;
    if ( (unsigned int)v17 <= v21 >> 2 )
      v20 = v21 >> 2;
    if ( (unsigned int)v21 >= 0x7FFFFFF8 )
      v20 = 0x1FFFFFFF;
    sub_113470(v24, v20);
    v22 = v25;
    *v25 = v23;
    v22[1] = v8;
    v25 = v22 + 2;
    sub_1134B8(a2 + 8, v24);
    return sub_113508(v24);
  }
  else
  {
    *(_DWORD *)v17 = v23;
    *(_DWORD *)(v17 + 4) = v8;
    result = v17 + 8;
    *(_DWORD *)(a2 + 12) = v17 + 8;
  }
  return result;
}


// ======================================================================
// ADDR: 0x112bf4
// SYMBOL: sub_112BF4
int __fastcall sub_112BF4(_DWORD *a1, int a2, __int64 *a3, int *a4)
{
  _DWORD *v8; // r5
  __int64 v9; // r2
  int v10; // r6
  unsigned int *v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // r1
  unsigned int *v14; // r0
  unsigned int v15; // r1
  int v16; // r0
  __int64 v17; // kr00_8
  int v18; // r2
  int result; // r0
  int v20; // r1
  int v21; // r0
  _DWORD *v22; // r0
  _DWORD *v23; // [sp+4h] [bp-34h]
  _BYTE v24[8]; // [sp+Ch] [bp-2Ch] BYREF
  _DWORD *v25; // [sp+14h] [bp-24h]

  v8 = (_DWORD *)operator new(0x28u);
  v9 = *a3;
  *v8 = &off_22B81C;
  v8[3] = &off_22B844;
  *((_WORD *)v8 + 10) = 1;
  v10 = *a4;
  v8[1] = 0;
  v11 = v8 + 1;
  v8[2] = 0;
  v8[4] = 0;
  v8[6] = a2;
  *(_QWORD *)(v8 + 7) = v9;
  v8[9] = v10;
  do
    v12 = __ldrex(v11);
  while ( __strex(v12 + 1, v11) );
  __dmb(0xBu);
  do
    v13 = __ldrex(v11);
  while ( __strex(v13 - 1, v11) );
  __dmb(0xBu);
  if ( !v13 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v8 + 8))(v8);
    std::__shared_weak_count::__release_weak((std::__shared_weak_count *)v8);
  }
  v23 = v8 + 3;
  if ( v8 )
  {
    v14 = v8 + 2;
    do
      v15 = __ldrex(v14);
    while ( __strex(v15 + 1, v14) );
  }
  v16 = *(_DWORD *)(a2 + 8);
  a1[2] = v8;
  v17 = *(_QWORD *)(a2 + 12);
  *a1 = &off_22AE84;
  a1[1] = v23;
  v18 = ((int)v17 - v16) >> 3;
  v8[4] = v18;
  if ( (unsigned int)v17 >= HIDWORD(v17) )
  {
    v20 = v18 + 1;
    if ( (unsigned int)(v18 + 1) >= 0x20000000 )
      std::__vector_base_common<true>::__throw_length_error(a2 + 8);
    v21 = HIDWORD(v17) - v16;
    if ( (unsigned int)v17 <= v21 >> 2 )
      v20 = v21 >> 2;
    if ( (unsigned int)v21 >= 0x7FFFFFF8 )
      v20 = 0x1FFFFFFF;
    sub_113570(v24, v20);
    v22 = v25;
    *v25 = v23;
    v22[1] = v8;
    v25 = v22 + 2;
    sub_1135B8(a2 + 8, v24);
    return sub_113608(v24);
  }
  else
  {
    *(_DWORD *)v17 = v23;
    *(_DWORD *)(v17 + 4) = v8;
    result = v17 + 8;
    *(_DWORD *)(a2 + 12) = v17 + 8;
  }
  return result;
}


// ======================================================================
// ADDR: 0x112f64
// SYMBOL: sub_112F64
int __fastcall sub_112F64(_DWORD *a1, int a2, __int64 *a3, int *a4)
{
  _DWORD *v8; // r5
  __int64 v9; // r2
  int v10; // r6
  unsigned int *v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // r1
  unsigned int *v14; // r0
  unsigned int v15; // r1
  int v16; // r0
  __int64 v17; // kr00_8
  int v18; // r2
  int result; // r0
  int v20; // r1
  int v21; // r0
  _DWORD *v22; // r0
  _DWORD *v23; // [sp+4h] [bp-34h]
  _BYTE v24[8]; // [sp+Ch] [bp-2Ch] BYREF
  _DWORD *v25; // [sp+14h] [bp-24h]

  v8 = (_DWORD *)operator new(0x28u);
  v9 = *a3;
  *v8 = &off_22B878;
  v8[3] = &off_22B8A0;
  *((_WORD *)v8 + 10) = 1;
  v10 = *a4;
  v8[1] = 0;
  v11 = v8 + 1;
  v8[2] = 0;
  v8[4] = 0;
  v8[6] = a2;
  *(_QWORD *)(v8 + 7) = v9;
  v8[9] = v10;
  do
    v12 = __ldrex(v11);
  while ( __strex(v12 + 1, v11) );
  __dmb(0xBu);
  do
    v13 = __ldrex(v11);
  while ( __strex(v13 - 1, v11) );
  __dmb(0xBu);
  if ( !v13 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v8 + 8))(v8);
    std::__shared_weak_count::__release_weak((std::__shared_weak_count *)v8);
  }
  v23 = v8 + 3;
  if ( v8 )
  {
    v14 = v8 + 2;
    do
      v15 = __ldrex(v14);
    while ( __strex(v15 + 1, v14) );
  }
  v16 = *(_DWORD *)(a2 + 8);
  a1[2] = v8;
  v17 = *(_QWORD *)(a2 + 12);
  *a1 = &off_22AE84;
  a1[1] = v23;
  v18 = ((int)v17 - v16) >> 3;
  v8[4] = v18;
  if ( (unsigned int)v17 >= HIDWORD(v17) )
  {
    v20 = v18 + 1;
    if ( (unsigned int)(v18 + 1) >= 0x20000000 )
      std::__vector_base_common<true>::__throw_length_error(a2 + 8);
    v21 = HIDWORD(v17) - v16;
    if ( (unsigned int)v17 <= v21 >> 2 )
      v20 = v21 >> 2;
    if ( (unsigned int)v21 >= 0x7FFFFFF8 )
      v20 = 0x1FFFFFFF;
    sub_113670(v24, v20);
    v22 = v25;
    *v25 = v23;
    v22[1] = v8;
    v25 = v22 + 2;
    sub_1136B8(a2 + 8, v24);
    return sub_113708(v24);
  }
  else
  {
    *(_DWORD *)v17 = v23;
    *(_DWORD *)(v17 + 4) = v8;
    result = v17 + 8;
    *(_DWORD *)(a2 + 12) = v17 + 8;
  }
  return result;
}


// ======================================================================
// ADDR: 0x11324c
// SYMBOL: sub_11324C
unsigned int __fastcall sub_11324C(unsigned int result, int a2, unsigned __int8 *a3, int a4, _BYTE **a5)
{
  int *v6; // r4
  int *v7; // r6
  unsigned int v8; // r8
  unsigned int v9; // r1
  int *v10; // r1
  int v11; // r5
  char v12; // r10
  _BYTE *v13; // r1
  _DWORD v14[2]; // [sp+0h] [bp-28h] BYREF
  char v15; // [sp+8h] [bp-20h]

  v7 = (int *)(a2 + 4);
  v6 = *(int **)(a2 + 4);
  v8 = result;
  if ( v6 )
  {
    result = *a3;
    v7 = (int *)(a2 + 4);
    while ( 1 )
    {
      v9 = *((unsigned __int8 *)v6 + 16);
      if ( result >= v9 )
      {
        if ( v9 >= result )
          goto LABEL_11;
        v7 = v6 + 1;
        v10 = (int *)v6[1];
        if ( !v10 )
          goto LABEL_11;
        ++v6;
      }
      else
      {
        v10 = (int *)*v6;
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
  v6 = (int *)(a2 + 4);
LABEL_11:
  v11 = *v7;
  v12 = 0;
  if ( !*v7 )
  {
    v11 = operator new(0x2Cu);
    v13 = *a5;
    *(_DWORD *)(v11 + 20) = &off_22B7A0;
    *(_BYTE *)(v11 + 16) = *v13;
    v14[1] = a2 + 4;
    v15 = 1;
    *(_DWORD *)(v11 + 33) = 0;
    *(_DWORD *)(v11 + 37) = 0;
    *(_DWORD *)(v11 + 28) = 0;
    *(_DWORD *)(v11 + 32) = 0;
    sub_1132FC(a2, v6, v7);
    v14[0] = 0;
    result = sub_11340C(v14, 0);
    v12 = 1;
  }
  *(_BYTE *)(v8 + 4) = v12;
  *(_DWORD *)v8 = v11;
  return result;
}


// ======================================================================
