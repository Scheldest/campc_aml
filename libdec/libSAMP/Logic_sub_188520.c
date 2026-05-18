// ADDR: 0x189f4a
// SYMBOL: sub_189F4A
int __fastcall sub_189F4A(int *a1, unsigned __int16 *a2, char *a3)
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
      v9 = *(unsigned __int16 *)(**(_DWORD **)(*(_DWORD *)(v6 + 4 * result) + 8) + 20);
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
// ADDR: 0x189f9a
// SYMBOL: sub_189F9A
int __fastcall sub_189F9A(int *a1, unsigned __int16 *a2, int *a3)
{
  unsigned int v5; // r4
  int v6; // r1
  char v8[17]; // [sp+7h] [bp-11h] BYREF

  v5 = sub_189F4A(a1, a2, v8);
  if ( v8[0] )
    return -1;
  v6 = *a3;
  if ( v5 >= a1[1] )
  {
    sub_18B7BC(a1, v6);
    return a1[1] - 1;
  }
  else
  {
    sub_18B82A(a1, v6, v5);
  }
  return v5;
}


// ======================================================================
// ADDR: 0x189fe4
// SYMBOL: sub_189FE4
int __fastcall sub_189FE4(int a1, int a2, int *a3)
{
  unsigned int v5; // r4
  int v6; // r1
  _BYTE v8[17]; // [sp+7h] [bp-11h] BYREF

  v5 = sub_18B8AE(a1, a2, v8);
  if ( v8[0] )
    return -1;
  v6 = *a3;
  if ( v5 >= *(_DWORD *)(a1 + 4) )
  {
    sub_18B8FA(a1, v6);
    return *(_DWORD *)(a1 + 4) - 1;
  }
  else
  {
    sub_18B968(a1, v6, v5);
  }
  return v5;
}


// ======================================================================
