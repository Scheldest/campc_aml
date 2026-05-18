// ADDR: 0x17d4a8
// SYMBOL: sub_17D4A8
int __fastcall sub_17D4A8(int result)
{
  *(_BYTE *)(result + 16) = 1;
  *(_QWORD *)result = 0x80000000000LL;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = result + 17;
  return result;
}


// ======================================================================
// ADDR: 0x17d542
// SYMBOL: sub_17D542
int __fastcall sub_17D542(int a1)
{
  if ( *(_BYTE *)(a1 + 16) && *(int *)(a1 + 4) > 2048 )
    free(*(void **)(a1 + 12));
  return a1;
}


// ======================================================================
// ADDR: 0x17d566
// SYMBOL: sub_17D566
unsigned __int8 *__fastcall sub_17D566(unsigned __int8 *result, const void *a2, size_t a3)
{
  _DWORD *v3; // r4
  int v6; // r8

  if ( a3 )
  {
    v3 = result;
    v6 = 8 * a3;
    if ( *result << 29 )
    {
      return (unsigned __int8 *)sub_17D628(result, a2, 8 * a3, 1);
    }
    else
    {
      sub_17D5BA(result, 8 * a3);
      j_memcpy((void *)(v3[3] + ((*v3 + 7) >> 3)), a2, a3);
      result = (unsigned __int8 *)(*v3 + v6);
      *v3 = result;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x17d628
// SYMBOL: sub_17D628
int __fastcall sub_17D628(int result, _BYTE *a2, int a3, int a4)
{
  unsigned int v6; // r5
  int *v7; // r9
  int v8; // r3
  int v9; // lr
  unsigned int v10; // r12
  int v11; // r2
  int v12; // r1
  int v13; // r2
  bool v14; // cc

  if ( a3 >= 1 )
  {
    v6 = a3;
    v7 = (int *)result;
    sub_17D5BA(result, a3);
    v8 = *v7;
    result = 8 - v6;
    v9 = *v7 & 7;
    v10 = 8 - v9;
    do
    {
      v11 = (unsigned __int8)*a2;
      if ( a4 )
        v11 <<= result;
      if ( v6 >= 8 )
        LOBYTE(v11) = *a2;
      if ( v9 )
      {
        *(_BYTE *)(v7[3] + (v8 >> 3)) |= (unsigned __int8)v11 >> v9;
        if ( v10 < v6 )
          *(_BYTE *)(v7[3] + (*v7 >> 3) + 1) = (unsigned __int8)v11 << v10;
      }
      else
      {
        *(_BYTE *)(v7[3] + (v8 >> 3)) = v11;
      }
      v12 = *v7;
      v13 = v6;
      ++a2;
      if ( v6 >= 8 )
        v13 = 8;
      v8 = v12 + v13;
      result += 8;
      v14 = (int)v6 <= 8;
      v6 -= 8;
      *v7 = v12 + v13;
    }
    while ( !v14 );
  }
  return result;
}


// ======================================================================
