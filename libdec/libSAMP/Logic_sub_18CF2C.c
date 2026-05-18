// ADDR: 0x18d136
// SYMBOL: sub_18D136
int __fastcall sub_18D136(int *a1, int *a2, char *a3)
{
  int v3; // r3
  int v4; // lr
  int v5; // r1
  int v6; // r12
  int v7; // r3
  int result; // r0
  int v9; // r4
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
      v9 = *(_DWORD *)(v6 + 8 * result);
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
// ADDR: 0x18d180
// SYMBOL: sub_18D180
int __fastcall sub_18D180(int *a1, int *a2, __int64 *a3)
{
  unsigned int v5; // r4
  __int64 v6; // kr00_8
  char v8[17]; // [sp+7h] [bp-11h] BYREF

  v5 = sub_18D136(a1, a2, v8);
  if ( v8[0] )
    return -1;
  v6 = *a3;
  if ( v5 >= a1[1] )
  {
    sub_18D1CC(a1, v6, HIDWORD(v6));
    return a1[1] - 1;
  }
  else
  {
    sub_18D246(a1, v6, HIDWORD(v6), v5);
  }
  return v5;
}


// ======================================================================
