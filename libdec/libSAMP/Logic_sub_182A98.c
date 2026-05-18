// ADDR: 0x182b9c
// SYMBOL: sub_182B9C
int __fastcall sub_182B9C(_DWORD *a1, int a2, int *a3)
{
  unsigned int v5; // r4
  int v6; // r1
  int v7; // r2
  int v8; // r3
  char v10[17]; // [sp+7h] [bp-11h] BYREF

  v5 = sub_182454(a1, a2, v10);
  if ( v10[0] )
    return -1;
  v6 = *a3;
  v7 = a3[1];
  v8 = a3[2];
  if ( v5 >= a1[1] )
  {
    sub_1869CA(a1, v6, v7, v8);
    return a1[1] - 1;
  }
  else
  {
    sub_186A4E(a1, v6, v7, v8, v5);
  }
  return v5;
}


// ======================================================================
// ADDR: 0x1876c8
// SYMBOL: sub_1876C8
int __fastcall sub_1876C8(int a1, char *a2)
{
  int result; // r0

  result = a1 + 1044;
  if ( a2 )
    return sub_17E0C0(result, a2);
  *(_BYTE *)(result + 600) = 0;
  return result;
}


// ======================================================================
