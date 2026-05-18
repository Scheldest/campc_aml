// ADDR: 0x104a7c
// SYMBOL: sub_104A7C
int __fastcall sub_104A7C(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // r0
  int v11; // [sp+Ch] [bp-14h]
  int v12; // [sp+10h] [bp-10h]
  int v13; // [sp+14h] [bp-Ch]
  int v14; // [sp+18h] [bp-8h]

  result = *(_DWORD *)(a1 + 92);
  if ( result )
  {
    result = sub_1082F4(*(_DWORD *)(a1 + 8));
    if ( result )
      return sub_107188(&unk_B3672, *(_DWORD *)(a1 + 8), a2, a3, a4, a5, a6, v11, v12, v13, v14);
  }
  return result;
}


// ======================================================================
// ADDR: 0x105474
// SYMBOL: sub_105474
unsigned int __fastcall sub_105474(int a1, int a2, unsigned int a3)
{
  float v3; // s0
  int v4; // r1
  float *v5; // r2
  unsigned int result; // r0

  result = *(unsigned __int8 *)(a1 + 96);
  if ( result )
  {
    if ( result <= 0xD1 && a2 <= 10 )
    {
      result = (unsigned int)&dword_2431E4[11 * (__int16)result + a2];
      *(float *)result = (float)a3;
    }
  }
  else
  {
    result = a2;
    if ( a2 <= 10 )
    {
      v3 = (float)a3;
      v4 = dword_2402E0;
      *(float *)&dword_2431E4[result] = (float)a3;
      v5 = (float *)((char *)&unk_245600 + 4 * result);
      result = v4 + 4 * result;
      *v5 = v3;
      *(float *)(result + 276) = v3;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x147ca8
// SYMBOL: sub_147CA8
void __fastcall sub_147CA8(int *a1, int *a2)
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
  sub_10D7AC((int)a1, &v12);
  if ( v14 != v13 )
    v14 += 4 * ~((unsigned int)(v14 - v13 - 4) >> 2);
  if ( v12 )
    operator delete(v12);
}


// ======================================================================
// ADDR: 0x14a500
// SYMBOL: sub_14A500
bool __fastcall sub_14A500(int a1, int a2, int a3, int a4, float a5, int a6, int a7)
{
  unsigned __int8 *v10; // r1
  int v11; // r5
  char v12; // r0

  if ( sub_F9B84() )
  {
    v10 = *(unsigned __int8 **)(a1 + 296);
    if ( v10 )
    {
      sub_F9E64(dword_23DEF0, v10);
      *(_DWORD *)(a1 + 296) = 0;
    }
    v11 = sub_F9DEC(dword_23DEF0, a3, *(_DWORD *)a4, *(float *)(a4 + 4), *(float *)(a4 + 8), a5);
    if ( v11 )
    {
      _android_log_print(3, "AXL", "Spawn player %p", *(const void **)(a1 + 296));
      if ( a6 )
        sub_107120(*(unsigned __int16 *)(a1 + 20), a6);
      if ( *(_DWORD *)(a1 + 300) )
      {
        sub_F9A3C(dword_23DEF0);
        *(_DWORD *)(a1 + 300) = 0;
      }
      if ( *(_BYTE *)(*(_DWORD *)(dword_23DEF4 + 524) + 52) )
        sub_104AC0(v11, *(unsigned __int16 *)(a1 + 20));
      *(_DWORD *)(v11 + 88) = a1 + 27;
      *(_DWORD *)(a1 + 8) = 1120403456;
      *(_DWORD *)(a1 + 296) = v11;
      sub_104B1C(v11, 0, 0, 0);
      if ( a7 != 4 )
        sub_104D40(v11, a7);
      if ( *(_BYTE *)(a1 + 25) == 33 )
        return v11 != 0;
      v12 = 33;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 25) )
        return v11 != 0;
      v12 = 0;
    }
    *(_BYTE *)(a1 + 25) = v12;
    return v11 != 0;
  }
  return 0;
}


// ======================================================================
