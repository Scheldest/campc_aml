// ADDR: 0x1504c0
// SYMBOL: sub_1504C0
char *__fastcall sub_1504C0(_DWORD *a1, int a2)
{
  int v4; // r0
  _DWORD *v5; // r4
  _DWORD *v6; // r5
  int v7; // r6

  if ( *(_BYTE *)(a2 + 18) || *(_DWORD *)(a2 + 4) )
    return (char *)(sub_151A48(a2) != 0);
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 8))(a2);
  if ( !v4 )
    return 0;
  if ( v4 == 2 )
  {
    v5 = (_DWORD *)a1[10];
    v6 = (_DWORD *)a1[9];
    v7 = *(_DWORD *)(a2 + 4);
    if ( v6 != v5 )
    {
      do
        sub_158D18(v7, *v6++);
      while ( v6 != v5 );
      v7 = *(_DWORD *)(a2 + 4);
    }
    (*(void (__fastcall **)(_DWORD *, int))(*a1 + 12))(a1, v7);
    return (char *)(sub_151A48(a2) != 0);
  }
  return (char *)&dword_0 + 1;
}


// ======================================================================
// ADDR: 0x150640
// SYMBOL: sub_150640
int __fastcall sub_150640(int a1, int *a2)
{
  int v3; // r1
  int v4; // r5
  int v5; // r3
  int v6; // r0

  v3 = *a2;
  v4 = a2[1];
  v5 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(v3 + 4) = v4;
  *(_DWORD *)a2[1] = v3;
  *(_DWORD *)(a1 + 8) = v5 - 1;
  v6 = a2[2];
  a2[2] = 0;
  if ( v6 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
  operator delete(a2);
  return v4;
}


// ======================================================================
// ADDR: 0x151d18
// SYMBOL: sub_151D18
int __fastcall sub_151D18(int a1, int a2)
{
  int result; // r0
  int v4; // r3
  float v5; // s0

  result = *(unsigned __int8 *)(a1 + 20);
  if ( result != a2 )
  {
    v4 = *(unsigned __int8 *)(a1 + 18);
    result = *(_DWORD *)(a1 + 4);
    *(_BYTE *)(a1 + 20) = a2;
    if ( v4 || result )
    {
      v5 = *(float *)(a1 + 8) * *(float *)(a1 + 12);
      if ( a2 )
        v5 = 0.0;
      return (*(int (__fastcall **)(int, float))(*(_DWORD *)result + 12))(result, COERCE_FLOAT(LODWORD(v5)));
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x151d54
// SYMBOL: sub_151D54
int __fastcall sub_151D54(int a1, float a2)
{
  int result; // r0
  int v4; // r3
  float v5; // s4

  result = *(_DWORD *)(a1 + 4);
  v4 = *(unsigned __int8 *)(a1 + 18);
  *(float *)(a1 + 12) = a2;
  if ( v4 || result )
  {
    v5 = 0.0;
    if ( !*(_BYTE *)(a1 + 20) )
      v5 = *(float *)(a1 + 8) * a2;
    return (*(int (__fastcall **)(int, float))(*(_DWORD *)result + 12))(result, COERCE_FLOAT(LODWORD(v5)));
  }
  return result;
}


// ======================================================================
