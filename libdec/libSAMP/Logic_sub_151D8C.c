// ADDR: 0x151928
// SYMBOL: sub_151928
int __fastcall sub_151928(int a1, int a2)
{
  int v2; // r6
  _DWORD *v5; // r4
  double v6; // d16
  float v7; // s4
  _DWORD *v8; // r2

  v2 = 0;
  if ( a2 )
  {
    v5 = (_DWORD *)operator new(0x20u);
    v6 = *(double *)(a1 + 24);
    v5[2] = a2;
    v5[3] = 0;
    *v5 = &off_22F394;
    v5[1] = 0;
    v5[4] = 0;
    v5[5] = 0;
    v5[6] = 0;
    v5[7] = 0;
    if ( v6 == 0.0 )
    {
      v6 = COERCE_DOUBLE(sub_15DF34(v5));
      *(double *)(a1 + 24) = v6;
    }
    if ( v6 == 0.0 )
      *(_BYTE *)(a1 + 19) = 1;
    v2 = sub_1519F0(a1);
    if ( v2 )
    {
      v7 = 0.0;
      if ( !*(_BYTE *)(a1 + 20) )
        v7 = *(float *)(a1 + 8) * *(float *)(a1 + 12);
      (*(void (__fastcall **)(_DWORD *, float))(*v5 + 12))(v5, COERCE_FLOAT(LODWORD(v7)));
      v8 = *(_DWORD **)(a1 + 4);
      *(_DWORD *)(a1 + 4) = v5;
      if ( !v8 )
        return 1;
    }
    else
    {
      v8 = v5;
    }
    (*(void (__fastcall **)(_DWORD *))(*v8 + 4))(v8);
  }
  return v2;
}


// ======================================================================
// ADDR: 0x151e12
// SYMBOL: sub_151E12
unsigned int *__fastcall sub_151E12(int a1, unsigned int **a2)
{
  unsigned int *v2; // r4
  unsigned int *result; // r0
  unsigned int v4; // r1

  v2 = *a2;
  *a2 = 0;
  result = (unsigned int *)sub_152356(a1, v2);
  if ( v2 )
  {
    result = v2 + 1;
    __dmb(0xBu);
    do
      v4 = __ldrex(result);
    while ( __strex(v4 - 1, result) );
    __dmb(0xBu);
    if ( !v4 )
      return (unsigned int *)(*(int (__fastcall **)(unsigned int *))(*v2 + 8))(v2);
  }
  return result;
}


// ======================================================================
// ADDR: 0x1521a2
// SYMBOL: sub_1521A2
int __fastcall sub_1521A2(int a1, __int64 *a2)
{
  __int64 v4; // r0
  std::mutex *v5; // r5
  unsigned int v6; // r0
  int v7; // r4
  __int64 v9; // [sp+0h] [bp-38h] BYREF
  __int64 v10; // [sp+8h] [bp-30h] BYREF
  __int64 v11; // [sp+10h] [bp-28h] BYREF
  std::mutex *v12; // [sp+18h] [bp-20h] BYREF
  char v13; // [sp+1Ch] [bp-1Ch]

  std::chrono::steady_clock::now((std::chrono::steady_clock *)&v9);
  v4 = *a2;
  v5 = (std::mutex *)(a1 + 12);
  v12 = (std::mutex *)(a1 + 12);
  v10 = 1000000000 * v4 + v9;
  v13 = 1;
  std::mutex::lock((std::mutex *)(a1 + 12));
  v6 = *(_DWORD *)(a1 + 20);
  if ( (v6 & 8) != 0 )
  {
    v7 = 2;
LABEL_10:
    std::mutex::unlock(v5);
    return v7;
  }
  if ( (v6 & 4) == 0 )
  {
    while ( 1 )
    {
      std::chrono::steady_clock::now((std::chrono::steady_clock *)&v11);
      if ( v11 >= v10 )
        break;
      sub_15225A(a1 + 16, &v12, &v10);
      v6 = *(_DWORD *)(a1 + 20);
      if ( (v6 & 4) != 0 )
        goto LABEL_8;
    }
    v6 = *(_DWORD *)(a1 + 20);
  }
LABEL_8:
  v7 = ((v6 >> 2) & 1) == 0;
  if ( v13 )
  {
    v5 = v12;
    goto LABEL_10;
  }
  return v7;
}


// ======================================================================
