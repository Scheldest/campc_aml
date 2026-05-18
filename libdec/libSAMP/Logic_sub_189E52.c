// ADDR: 0x18b104
// SYMBOL: sub_18B104
int __fastcall sub_18B104(int a1, int a2, int *a3)
{
  unsigned int v5; // r5
  int v7; // [sp+4h] [bp-1Ch] BYREF
  int v8; // [sp+8h] [bp-18h] BYREF
  _BYTE v9[17]; // [sp+Fh] [bp-11h] BYREF

  v5 = sub_18B156(a1, a2, v9);
  if ( v9[0] )
    return -1;
  if ( v5 >= *(_DWORD *)(a1 + 4) )
  {
    v8 = *a3;
    sub_18A49E((char **)a1, &v8);
    return *(_DWORD *)(a1 + 4) - 1;
  }
  else
  {
    v7 = *a3;
    sub_18B1A0(a1, &v7, v5);
  }
  return v5;
}


// ======================================================================
// ADDR: 0x18b156
// SYMBOL: sub_18B156
int __fastcall sub_18B156(int *a1, unsigned __int16 *a2, char *a3)
{
  int v3; // r3
  unsigned int v4; // lr
  int v5; // r1
  int v6; // r12
  int v7; // r3
  int result; // r0
  unsigned int v9; // r4
  char v10; // r1

  v3 = a1[1];
  if ( v3 )
  {
    v4 = *a2;
    v5 = v3 - 1;
    v6 = *a1;
    v7 = 0;
    result = a1[1] / 2;
    while ( 1 )
    {
      v9 = *(unsigned __int16 *)(v6 + 4 * result);
      if ( v4 == v9 )
        break;
      if ( v4 >= v9 )
        v7 = result + 1;
      else
        v5 = result - 1;
      result = v7 + (v5 - v7) / 2;
      if ( v5 < v7 )
      {
        v10 = 0;
        result = v7;
        goto LABEL_11;
      }
    }
    v10 = 1;
  }
  else
  {
    v10 = 0;
    result = 0;
  }
LABEL_11:
  *a3 = v10;
  return result;
}


// ======================================================================
// ADDR: 0x18b1a0
// SYMBOL: sub_18B1A0
int __fastcall sub_18B1A0(char **a1, _DWORD *a2, int a3)
{
  char *v4; // r5
  int v7; // r6
  unsigned int v8; // r0
  _DWORD *v9; // r0
  char *v10; // r10
  char *v11; // r6
  int result; // r0

  v4 = a1[1];
  if ( v4 == a1[2] )
  {
    v7 = 2 * (_DWORD)v4;
    if ( !v4 )
      v7 = 16;
    v8 = 4 * v7 + 8;
    a1[2] = (char *)v7;
    if ( v8 < 4 * v7 )
      v8 = -1;
    if ( v7 != (v7 & 0x3FFFFFFE) )
      v8 = -1;
    v9 = (_DWORD *)operator new[](v8);
    v10 = *a1;
    *v9 = 4;
    v9[1] = v7;
    v11 = (char *)(v9 + 2);
    j_memcpy(v9 + 2, v10, 4 * (_DWORD)v4);
    if ( v10 )
    {
      operator delete[](v10 - 8);
      v4 = a1[1];
    }
    *a1 = v11;
  }
  else
  {
    v11 = *a1;
  }
  j_memmove(&v11[4 * a3 + 4], &v11[4 * a3], 4 * (_DWORD)&v4[-a3]);
  *(_DWORD *)&(*a1)[4 * a3] = *a2;
  result = (int)(a1[1] + 1);
  a1[1] = (char *)result;
  return result;
}


// ======================================================================
// ADDR: 0x18b242
// SYMBOL: sub_18B242
unsigned int __fastcall sub_18B242(_DWORD *a1, unsigned int a2)
{
  unsigned int result; // r0

  result = a1[1];
  if ( result > a2 )
  {
    j_memmove((void *)(*a1 + 4 * a2), (const void *)(*a1 + 4 * a2 + 4), 4 * (result + ~a2));
    result = a1[1] - 1;
    a1[1] = result;
  }
  return result;
}


// ======================================================================
