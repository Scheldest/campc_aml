// ADDR: 0xf63d4
// SYMBOL: sub_F63D4
int __fastcall sub_F63D4(int *a1, char *src, char *a3)
{
  unsigned int v5; // r6
  void *v6; // r2
  unsigned int v8; // r1
  int *v9; // r0
  char *v10; // r1
  char *v11; // r2
  unsigned int v12; // r3
  char *v13; // r9
  int v14; // r10
  int result; // r0

  v5 = (a3 - src) >> 2;
  v6 = (void *)*a1;
  if ( v5 > (a1[2] - *a1) >> 2 )
  {
    sub_F64A0(a1);
    v8 = sub_F64C4(a1, v5);
    sub_F62BC(a1, v8);
    v9 = a1;
    v10 = src;
    v11 = a3;
    v12 = v5;
    return sub_F6458(v9, v10, v11, v12);
  }
  v13 = a3;
  v14 = a1[1] - (_DWORD)v6;
  if ( v5 > v14 >> 2 )
    v13 = &src[v14];
  result = sub_F64F4(src, (int)v13, v6);
  if ( v5 > v14 >> 2 )
  {
    v11 = a3;
    v10 = v13;
    v12 = v5 - ((a1[1] - *a1) >> 2);
    v9 = a1;
    return sub_F6458(v9, v10, v11, v12);
  }
  a1[1] = result;
  return result;
}


// ======================================================================
