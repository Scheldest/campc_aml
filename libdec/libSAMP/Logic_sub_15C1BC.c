// ADDR: 0x158190
// SYMBOL: sub_158190
int __fastcall sub_158190(_DWORD *a1, char *a2, int a3)
{
  int v6; // r8
  std::__thread_struct *v7; // r9
  std::__thread_struct **v8; // r4
  char v9; // r12
  std::__thread_struct *v10; // lr
  std::__thread_struct *v11; // r3
  std::__thread_struct *v12; // r2
  std::__thread_struct *v13; // r3
  std::__thread_struct *v14; // r6
  std::__thread_struct *v15; // r1
  std::__ndk1 *v16; // r0
  const char *v17; // r2
  pthread_t v19; // [sp+0h] [bp-28h] BYREF
  int v20; // [sp+4h] [bp-24h] BYREF
  int v21; // [sp+8h] [bp-20h] BYREF
  std::__thread_struct **v22; // [sp+Ch] [bp-1Ch] BYREF

  v6 = operator new(0x20u);
  *(_DWORD *)v6 = &off_22F568;
  *a1 = v6;
  v20 = v6;
  *(_QWORD *)(v6 + 4) = 0LL;
  *(_QWORD *)(v6 + 12) = 0LL;
  *(_DWORD *)(v6 + 20) = 0;
  sub_1584A0(v6);
  v7 = (std::__thread_struct *)operator new(4u);
  std::__thread_struct::__thread_struct(v7);
  v8 = (std::__thread_struct **)operator new(0x20u);
  v9 = *a2;
  v10 = (std::__thread_struct *)*((_DWORD *)a2 + 2);
  v11 = *(std::__thread_struct **)(a2 + 1);
  v12 = (std::__thread_struct *)*((_DWORD *)a2 + 1);
  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((_DWORD *)a2 + 2) = 0;
  *(std::__thread_struct **)((char *)v8 + 9) = v11;
  v13 = *(std::__thread_struct **)(a3 + 1);
  v8[3] = v12;
  LOBYTE(v12) = *(_BYTE *)a3;
  v14 = *(std::__thread_struct **)(a3 + 4);
  v15 = *(std::__thread_struct **)(a3 + 8);
  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  v20 = 0;
  v21 = 0;
  *(std::__thread_struct **)((char *)v8 + 21) = v13;
  v8[6] = v14;
  *v8 = v7;
  v8[1] = (std::__thread_struct *)v6;
  v8[7] = v15;
  *((_BYTE *)v8 + 20) = (_BYTE)v12;
  v8[4] = v10;
  *((_BYTE *)v8 + 8) = v9;
  v22 = v8;
  sub_1582D0(&v21);
  v16 = (std::__ndk1 *)pthread_create(&v19, 0, (void *(*)(void *))sub_158820, v8);
  if ( v16 )
    std::__throw_system_error(v16, (int)"thread constructor failed", v17);
  v22 = 0;
  sub_158AC8(&v22);
  std::thread::detach((std::thread *)&v19);
  std::thread::~thread((std::thread *)&v19);
  return sub_1582D0(&v20);
}


// ======================================================================
// ADDR: 0x15c53c
// SYMBOL: sub_15C53C
char *__fastcall sub_15C53C(int a1)
{
  size_t v2; // r5
  void *v3; // r8
  char *v4; // r6
  size_t v5; // r4
  double v6; // d16
  char *result; // r0
  void *src; // [sp+20h] [bp-30h] BYREF
  size_t n; // [sp+24h] [bp-2Ch]
  double v10; // [sp+28h] [bp-28h] BYREF
  char *v11; // [sp+30h] [bp-20h]

  std::__fs::filesystem::path::__parent_path((std::__fs::filesystem::path *)&src);
  v2 = n;
  if ( n >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(&v10);
  v3 = src;
  if ( n >= 0xB )
  {
    v5 = (n + 16) & 0xFFFFFFF0;
    v4 = (char *)operator new(v5);
    HIDWORD(v10) = v2;
    v11 = v4;
    LODWORD(v10) = v5 + 1;
  }
  else
  {
    LOBYTE(v10) = 2 * n;
    v4 = (char *)&v10 + 1;
    if ( !n )
      goto LABEL_7;
  }
  j_memcpy(v4, v3, v2);
LABEL_7:
  v4[v2] = 0;
  v6 = v10;
  result = v11;
  *(_DWORD *)(a1 + 8) = v11;
  *(double *)a1 = v6;
  return result;
}


// ======================================================================
// ADDR: 0x15c95e
// SYMBOL: sub_15C95E
_DWORD *__fastcall sub_15C95E(_DWORD *a1, int *a2)
{
  unsigned int v2; // r4
  unsigned int v4; // r5
  unsigned int v5; // r0
  unsigned int v6; // r9
  int v7; // r8
  int v8; // r1
  _DWORD *v9; // r0
  _DWORD *v10; // r6
  unsigned int v11; // r0
  unsigned int v12; // r1

  v2 = a1[1];
  if ( v2 )
  {
    v4 = *a2;
    v5 = ((v2 - ((v2 >> 1) & 0x55555555)) & 0x33333333) + (((v2 - ((v2 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v6 = (16843009 * ((v5 + (v5 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v6 > 1 )
    {
      v7 = *a2;
      if ( v4 >= v2 )
      {
        sub_221798(v4, v2);
        v7 = v8;
      }
    }
    else
    {
      v7 = (v2 - 1) & v4;
    }
    v9 = *(_DWORD **)(*a1 + 4 * v7);
    if ( v9 )
    {
      v10 = (_DWORD *)*v9;
      if ( *v9 )
      {
        do
        {
          v11 = v10[1];
          if ( v11 == v4 )
          {
            if ( v10[2] == v4 )
              return v10;
          }
          else
          {
            if ( v6 > 1 )
            {
              if ( v11 >= v2 )
              {
                sub_221798(v11, v2);
                v11 = v12;
              }
            }
            else
            {
              v11 &= v2 - 1;
            }
            if ( v11 != v7 )
              return 0;
          }
          v10 = (_DWORD *)*v10;
        }
        while ( v10 );
      }
    }
  }
  return 0;
}


// ======================================================================
// ADDR: 0x15cf04
// SYMBOL: sub_15CF04
int __fastcall sub_15CF04(int a1, int a2, unsigned __int16 *a3, int a4, _WORD **a5, __int64 **a6)
{
  int v6; // r10
  unsigned int v7; // r4
  unsigned int v9; // r6
  unsigned int v10; // r0
  unsigned int v11; // r11
  int v12; // r1
  int *v13; // r5
  unsigned int v14; // r0
  unsigned int v15; // r1
  int result; // r0
  int v17; // r6
  __int64 *v18; // r1
  int *v19; // r11
  __int64 v20; // d16
  int v21; // r2
  float v22; // s0
  float v23; // s2
  int v24; // r8
  _BOOL4 v25; // r4
  float v26; // r0
  std::__ndk1 *v27; // r1
  unsigned int v28; // r0
  unsigned int v29; // r1
  int v30; // r0
  int *v31; // r1
  unsigned int v32; // r0
  unsigned int v33; // r1

  v7 = *(_DWORD *)(a2 + 4);
  v9 = *a3;
  if ( v7 )
  {
    v10 = ((v7 - ((v7 >> 1) & 0x55555555)) & 0x33333333) + (((v7 - ((v7 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v11 = (16843009 * ((v10 + (v10 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v11 > 1 )
    {
      v6 = *a3;
      if ( v7 <= v9 )
      {
        sub_221798(v9, v7);
        v6 = v12;
      }
    }
    else
    {
      v6 = (v7 - 1) & v9;
    }
    v13 = *(int **)(*(_DWORD *)a2 + 4 * v6);
    if ( v13 )
    {
      while ( 1 )
      {
        v13 = (int *)*v13;
        if ( !v13 )
          break;
        v14 = v13[1];
        if ( v14 != v9 )
        {
          if ( v11 > 1 )
          {
            if ( v14 >= v7 )
            {
              sub_221798(v14, v7);
              v14 = v15;
            }
          }
          else
          {
            v14 &= v7 - 1;
          }
          if ( v14 != v6 )
            break;
        }
        if ( *((unsigned __int16 *)v13 + 4) == v9 )
        {
          result = 0;
          v17 = a1;
          goto LABEL_38;
        }
      }
    }
  }
  v13 = (int *)operator new(0x1Cu);
  v18 = *a6;
  v19 = (int *)(a2 + 8);
  *((_WORD *)v13 + 4) = **a5;
  v20 = *v18;
  v13[5] = *((_DWORD *)v18 + 2);
  *(_QWORD *)(v13 + 3) = v20;
  *(_DWORD *)v18 = 0;
  *((_DWORD *)v18 + 1) = 0;
  *((_DWORD *)v18 + 2) = 0;
  v21 = *(_DWORD *)(a2 + 12);
  *((_BYTE *)v13 + 24) = *((_BYTE *)v18 + 12);
  v22 = *(float *)(a2 + 16);
  *v13 = 0;
  v13[1] = v9;
  v23 = (float)(unsigned int)(v21 + 1);
  if ( v7 && (float)(v22 * (float)v7) >= v23 )
  {
    v9 = v6;
  }
  else
  {
    v24 = 2 * v7;
    v25 = v7 < 3 || (v7 & (v7 - 1)) != 0;
    v26 = ceilf(v23 / v22);
    v27 = (std::__ndk1 *)(v25 | v24);
    v28 = (unsigned int)v26;
    if ( (v25 | (unsigned int)v24) < v28 )
      v27 = (std::__ndk1 *)v28;
    sub_15D0E6(a2, v27);
    v7 = *(_DWORD *)(a2 + 4);
    if ( (v7 & (v7 - 1)) != 0 )
    {
      if ( v7 <= v9 )
      {
        sub_221798(v9, *(_DWORD *)(a2 + 4));
        v9 = v29;
      }
    }
    else
    {
      v9 &= v7 - 1;
    }
  }
  v30 = *(_DWORD *)a2;
  v31 = *(int **)(*(_DWORD *)a2 + 4 * v9);
  if ( v31 )
  {
    v17 = a1;
    *v13 = *v31;
    *v31 = (int)v13;
  }
  else
  {
    *v13 = *v19;
    *v19 = (int)v13;
    *(_DWORD *)(v30 + 4 * v9) = v19;
    v17 = a1;
    if ( *v13 )
    {
      v32 = *(_DWORD *)(*v13 + 4);
      if ( (v7 & (v7 - 1)) != 0 )
      {
        if ( v32 >= v7 )
        {
          sub_221798(v32, v7);
          v32 = v33;
        }
      }
      else
      {
        v32 &= v7 - 1;
      }
      *(_DWORD *)(*(_DWORD *)a2 + 4 * v32) = v13;
    }
  }
  ++*(_DWORD *)(a2 + 12);
  result = 1;
LABEL_38:
  *(_BYTE *)(v17 + 4) = result;
  *(_DWORD *)v17 = v13;
  return result;
}


// ======================================================================
// ADDR: 0x15d3ce
// SYMBOL: sub_15D3CE
int __fastcall sub_15D3CE(int a1, int a2, unsigned __int16 *a3, int a4, __int16 **a5, _QWORD **a6)
{
  int v6; // r9
  unsigned int v7; // r8
  unsigned int v9; // r6
  unsigned int v10; // r0
  unsigned int v11; // r10
  int v12; // r1
  int **v13; // r5
  unsigned int v14; // r0
  unsigned int v15; // r1
  int result; // r0
  int v17; // r4
  int v18; // r0
  _QWORD *v19; // r1
  float v20; // s0
  __int16 v21; // r2
  float v22; // s2
  int v23; // r5
  int v24; // r4
  _BOOL4 v25; // r4
  float v26; // r0
  std::__ndk1 *v27; // r1
  unsigned int v28; // r0
  unsigned int v29; // r1
  _DWORD *v30; // r0
  int v31; // r0
  unsigned int v32; // r0
  unsigned int v33; // r1
  _DWORD v35[2]; // [sp+8h] [bp-28h] BYREF
  char v36; // [sp+10h] [bp-20h]

  v7 = *(_DWORD *)(a2 + 4);
  v9 = *a3;
  if ( v7 )
  {
    v10 = ((v7 - ((v7 >> 1) & 0x55555555)) & 0x33333333) + (((v7 - ((v7 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v11 = (16843009 * ((v10 + (v10 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v11 > 1 )
    {
      v6 = *a3;
      if ( v7 <= v9 )
      {
        sub_221798(v9, v7);
        v6 = v12;
      }
    }
    else
    {
      v6 = (v7 - 1) & v9;
    }
    v13 = *(int ***)(*(_DWORD *)a2 + 4 * v6);
    if ( v13 )
    {
      while ( 1 )
      {
        v13 = (int **)*v13;
        if ( !v13 )
          break;
        v14 = (unsigned int)v13[1];
        if ( v14 != v9 )
        {
          if ( v11 > 1 )
          {
            if ( v14 >= v7 )
            {
              sub_221798(v14, v7);
              v14 = v15;
            }
          }
          else
          {
            v14 &= v7 - 1;
          }
          if ( v14 != v6 )
            break;
        }
        if ( *((unsigned __int16 *)v13 + 4) == v9 )
        {
          result = 0;
          v17 = a1;
          goto LABEL_38;
        }
      }
    }
  }
  v18 = operator new(0x14u);
  v19 = *a6;
  v20 = *(float *)(a2 + 16);
  v21 = **a5;
  v22 = (float)(unsigned int)(*(_DWORD *)(a2 + 12) + 1);
  *(_QWORD *)(v18 + 12) = **a6;
  *(_DWORD *)(v18 + 4) = v9;
  *(_DWORD *)v18 = 0;
  *(_WORD *)(v18 + 8) = v21;
  v35[0] = v18;
  v35[1] = a2 + 8;
  *(_DWORD *)v19 = 0;
  *((_DWORD *)v19 + 1) = 0;
  v36 = 1;
  if ( v7 && (float)(v20 * (float)v7) >= v22 )
  {
    v9 = v6;
    v17 = a1;
  }
  else
  {
    v23 = 2 * v7;
    if ( v7 < 3 )
    {
      v25 = 1;
    }
    else
    {
      v24 = v7 & (v7 - 1);
      v25 = v24 != 0;
    }
    v26 = ceilf(v22 / v20);
    v27 = (std::__ndk1 *)(v25 | v23);
    v28 = (unsigned int)v26;
    if ( (v25 | (unsigned int)v23) < v28 )
      v27 = (std::__ndk1 *)v28;
    sub_15D5CE(a2, v27);
    v7 = *(_DWORD *)(a2 + 4);
    v17 = a1;
    if ( (v7 & (v7 - 1)) != 0 )
    {
      if ( v7 <= v9 )
      {
        sub_221798(v9, *(_DWORD *)(a2 + 4));
        v9 = v29;
      }
    }
    else
    {
      v9 &= v7 - 1;
    }
  }
  v30 = *(_DWORD **)(*(_DWORD *)a2 + 4 * v9);
  if ( v30 )
  {
    *(_DWORD *)v35[0] = *v30;
    *v30 = v35[0];
  }
  else
  {
    *(_DWORD *)v35[0] = *(_DWORD *)(a2 + 8);
    v31 = *(_DWORD *)a2;
    *(_DWORD *)(a2 + 8) = v35[0];
    *(_DWORD *)(v31 + 4 * v9) = a2 + 8;
    if ( *(_DWORD *)v35[0] )
    {
      v32 = *(_DWORD *)(*(_DWORD *)v35[0] + 4);
      if ( (v7 & (v7 - 1)) != 0 )
      {
        if ( v32 >= v7 )
        {
          sub_221798(v32, v7);
          v32 = v33;
        }
      }
      else
      {
        v32 &= v7 - 1;
      }
      *(_DWORD *)(*(_DWORD *)a2 + 4 * v32) = v35[0];
    }
  }
  v13 = (int **)v35[0];
  ++*(_DWORD *)(a2 + 12);
  v35[0] = 0;
  sub_15D7C0(v35, 0);
  result = 1;
LABEL_38:
  *(_BYTE *)(v17 + 4) = result;
  *(_DWORD *)v17 = v13;
  return result;
}


// ======================================================================
// ADDR: 0x15d7e2
// SYMBOL: sub_15D7E2
int **__fastcall sub_15D7E2(_DWORD *a1, unsigned __int16 *a2)
{
  unsigned int v2; // r4
  unsigned int v4; // r5
  unsigned int v5; // r0
  unsigned int v6; // r9
  int v7; // r8
  int v8; // r1
  int ***v9; // r0
  int **i; // r6
  unsigned int v11; // r0
  unsigned int v12; // r1

  v2 = a1[1];
  if ( v2 )
  {
    v4 = *a2;
    v5 = ((v2 - ((v2 >> 1) & 0x55555555)) & 0x33333333) + (((v2 - ((v2 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v6 = (16843009 * ((v5 + (v5 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v6 > 1 )
    {
      if ( v2 <= v4 )
      {
        sub_221798(v4, v2);
        v7 = v8;
      }
      else
      {
        v7 = *a2;
      }
    }
    else
    {
      v7 = (v2 - 1) & v4;
    }
    v9 = *(int ****)(*a1 + 4 * v7);
    if ( v9 )
    {
      for ( i = *v9; i; i = (int **)*i )
      {
        v11 = (unsigned int)i[1];
        if ( v11 == v4 )
        {
          if ( *((unsigned __int16 *)i + 4) == v4 )
            return i;
        }
        else
        {
          if ( v6 > 1 )
          {
            if ( v11 >= v2 )
            {
              sub_221798(v11, v2);
              v11 = v12;
            }
          }
          else
          {
            v11 &= v2 - 1;
          }
          if ( v11 != v7 )
            return 0;
        }
      }
    }
  }
  return 0;
}


// ======================================================================
