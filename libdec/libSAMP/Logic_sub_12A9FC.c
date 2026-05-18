// ADDR: 0x12bea8
// SYMBOL: sub_12BEA8
bool __fastcall sub_12BEA8(float *a1, float *a2)
{
  float v2; // s0
  _BOOL4 result; // r0
  float v5; // s0

  v2 = a1[11];
  result = 0;
  v5 = *a2 - v2;
  if ( v5 >= 0.0 && v5 < a1[5] )
    return (float)(a2[1] - a1[12]) < a1[6];
  return result;
}


// ======================================================================
// ADDR: 0x12bf00
// SYMBOL: sub_12BF00
int __fastcall sub_12BF00(int *a1, float *a2, int a3)
{
  float v6; // s0
  int v7; // r0
  int v8; // r0
  int v9; // r8
  float v10; // s0
  float v11; // s18
  float v12; // s16
  float v13; // s2
  void (__fastcall *v14)(int *, float *); // r2
  int *i; // r5
  int *v16; // r6
  __int64 v17; // kr00_8
  int v18; // r0
  int v20; // r0
  int v21; // r2
  int v22; // r0
  float v23[12]; // [sp+0h] [bp-30h] BYREF

  switch ( a3 )
  {
    case 2:
      v8 = *a1;
      v9 = *((unsigned __int8 *)a1 + 81);
      *((_BYTE *)a1 + 81) = 0;
      (*(void (__fastcall **)(int *, _DWORD))(v8 + 28))(a1, 0);
      if ( *((_BYTE *)a1 + 80) )
      {
        v10 = *a2 - *((float *)a1 + 11);
        if ( v10 >= 0.0 && v10 < *((float *)a1 + 5) && v9 )
        {
          v22 = *a1;
          *((_BYTE *)a1 + 82) = 1;
          (*(void (__fastcall **)(int *, int))(v22 + 24))(a1, 1);
          (*(void (__fastcall **)(int *))(*a1 + 20))(a1);
        }
      }
      *(_QWORD *)(a1 + 13) = 0LL;
      *(_QWORD *)(a1 + 15) = 0LL;
      break;
    case 1:
      v11 = *a2 - *((float *)a1 + 13);
      v12 = a2[1] - *((float *)a1 + 14);
      if ( *((_BYTE *)a1 + 81) )
      {
        v13 = v12 - *((float *)a1 + 16);
        v14 = *(void (__fastcall **)(int *, float *))(*a1 + 16);
        v23[0] = v11 - *((float *)a1 + 15);
        v23[1] = v13;
        v14(a1, v23);
      }
      *((float *)a1 + 15) = v11;
      *((float *)a1 + 16) = v12;
      break;
    case 0:
      if ( *((_BYTE *)a1 + 80) && (v6 = *a2 - *((float *)a1 + 11), v6 >= 0.0) && v6 < *((float *)a1 + 5) )
      {
        v20 = *a1;
        *((_BYTE *)a1 + 81) = 1;
        (*(void (__fastcall **)(int *, int))(v20 + 28))(a1, 1);
        v21 = *a1;
        *(_QWORD *)(a1 + 13) = *(_QWORD *)a2;
        (*(void (__fastcall **)(int *))(v21 + 12))(a1);
      }
      else
      {
        v7 = *a1;
        *((_BYTE *)a1 + 82) = 0;
        (*(void (__fastcall **)(int *, _DWORD))(v7 + 24))(a1, 0);
      }
      break;
  }
  v17 = *(_QWORD *)(a1 + 17);
  v16 = (int *)a1[18];
  for ( i = (int *)v17; ; ++i )
  {
    if ( i == v16 )
      return 0;
    v18 = *i;
    if ( *i )
    {
      if ( *(_BYTE *)(v18 + 80) && (**(int (__fastcall ***)(int, float *, int))v18)(v18, a2, a3) )
        break;
    }
  }
  return 1;
}


// ======================================================================
