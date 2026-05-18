// ADDR: 0x12c504
// SYMBOL: sub_12C504
int __fastcall sub_12C504(int a1, int a2)
{
  _DWORD *v3; // r0
  int v4; // r1
  _BYTE v6[16]; // [sp+0h] [bp-20h] BYREF
  _BYTE *v7; // [sp+10h] [bp-10h]

  v3 = (_DWORD *)sub_10CD74((int)v6, a2);
  sub_112250(v3, a1);
  if ( v6 == v7 )
  {
    v4 = 4;
    goto LABEL_5;
  }
  if ( v7 )
  {
    v4 = 5;
LABEL_5:
    (*(void (**)(void))(*(_DWORD *)v7 + 4 * v4))();
  }
  return a1;
}


// ======================================================================
// ADDR: 0x12c538
// SYMBOL: sub_12C538
void __fastcall sub_12C538(int *a1, int *a2)
{
  int v4; // r0
  int v5; // r6
  unsigned int v6; // r5
  int v7; // r2
  int v8; // r0
  char *v9; // r0
  char *v10; // r1
  int v11; // r2
  void *v12; // [sp+4h] [bp-24h] BYREF
  char *v13; // [sp+8h] [bp-20h]
  char *v14; // [sp+Ch] [bp-1Ch]
  char *v15; // [sp+10h] [bp-18h]
  _DWORD *v16; // [sp+14h] [bp-14h]

  v4 = *a1;
  v5 = a1[1] - v4;
  v6 = (v5 >> 2) + 1;
  if ( v6 >= 0x40000000 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  v7 = a1[2];
  v16 = a1 + 2;
  v8 = v7 - v4;
  if ( v6 <= v8 >> 1 )
    v6 = v8 >> 1;
  if ( (unsigned int)v8 >= 0x7FFFFFFC )
    v6 = 0x3FFFFFFF;
  if ( v6 )
  {
    if ( v6 >= 0x40000000 )
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    v9 = (char *)operator new(4 * v6);
  }
  else
  {
    v9 = 0;
  }
  v10 = &v9[4 * (v5 >> 2)];
  v15 = &v9[4 * v6];
  v11 = *a2;
  v12 = v9;
  v13 = v10;
  *(_DWORD *)v10 = v11;
  v14 = v10 + 4;
  sub_12C60C(a1, &v12);
  if ( v14 != v13 )
    v14 += 4 * ~((unsigned int)(v14 - v13 - 4) >> 2);
  if ( v12 )
    operator delete(v12);
}


// ======================================================================
// ADDR: 0x13ce34
// SYMBOL: sub_13CE34
_DWORD *__fastcall sub_13CE34(_DWORD *a1, int a2, float a3)
{
  __int64 v6; // d16
  __int64 v7; // d17
  int v8; // r6
  _QWORD v10[4]; // [sp+8h] [bp-20h] BYREF

  sub_12BC78((int)a1);
  a1[26] = 0;
  *a1 = &off_22EEF4;
  *(float *)&v6 = 1.0;
  *((float *)&v6 + 1) = 1.0;
  *(float *)&v7 = 1.0;
  *((float *)&v7 + 1) = 1.0;
  v8 = operator new(0x78u);
  v10[0] = v6;
  v10[1] = v7;
  sub_13D3DC(v8, a2, (int)v10, 0, a3);
  a1[21] = v8;
  sub_12BDF6((int)a1, v8);
  return a1;
}


// ======================================================================
// ADDR: 0x13d71c
// SYMBOL: sub_13D71C
int __fastcall sub_13D71C(int a1, int a2)
{
  int32x2_t v2; // d0
  int result; // r0

  result = sub_12BC78(a1);
  *(_DWORD *)(result + 84) = a2;
  v2.n64_u32[0] = dword_238EC8;
  *(_DWORD *)result = &off_22F004;
  *(int32x4_t *)(result + 88) = vdupq_lane_s32(v2, 0);
  *(_DWORD *)(result + 104) = v2.n64_u32[0];
  return result;
}


// ======================================================================
