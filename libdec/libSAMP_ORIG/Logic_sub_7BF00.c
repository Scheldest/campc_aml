// ADDR: 0x7c780
// SYMBOL: sub_7C780
int __fastcall sub_7C780(int *a1, float *a2, int a3)
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
  _DWORD *v15; // r5
  _DWORD *i; // r6
  int v18; // r0
  int v19; // r2
  int v20; // r0
  float v21[13]; // [sp+4h] [bp-34h] BYREF

  switch ( a3 )
  {
    case 2:
      v8 = *a1;
      v9 = *((unsigned __int8 *)a1 + 52);
      *((_BYTE *)a1 + 52) = 0;
      (*(void (__fastcall **)(int *, _DWORD))(v8 + 28))(a1, 0);
      if ( *((_BYTE *)a1 + 8) )
      {
        v10 = *a2 - *((float *)a1 + 11);
        if ( v10 >= 0.0 && v10 < *((float *)a1 + 5) && v9 )
        {
          v20 = *a1;
          *((_BYTE *)a1 + 53) = 1;
          (*(void (__fastcall **)(int *, int))(v20 + 24))(a1, 1);
          (*(void (__fastcall **)(int *))(*a1 + 20))(a1);
        }
      }
      *((_QWORD *)a1 + 7) = 0LL;
      *((_QWORD *)a1 + 8) = 0LL;
      break;
    case 1:
      v11 = *a2 - *((float *)a1 + 14);
      v12 = a2[1] - *((float *)a1 + 15);
      if ( *((_BYTE *)a1 + 52) )
      {
        v13 = v12 - *((float *)a1 + 17);
        v14 = *(void (__fastcall **)(int *, float *))(*a1 + 16);
        v21[0] = v11 - *((float *)a1 + 16);
        v21[1] = v13;
        v14(a1, v21);
      }
      *((float *)a1 + 16) = v11;
      *((float *)a1 + 17) = v12;
      break;
    case 0:
      if ( *((_BYTE *)a1 + 8) && (v6 = *a2 - *((float *)a1 + 11), v6 >= 0.0) && v6 < *((float *)a1 + 5) )
      {
        v18 = *a1;
        *((_BYTE *)a1 + 52) = 1;
        (*(void (__fastcall **)(int *, int))(v18 + 28))(a1, 1);
        v19 = *a1;
        *((_QWORD *)a1 + 7) = *(_QWORD *)a2;
        (*(void (__fastcall **)(int *))(v19 + 12))(a1);
      }
      else
      {
        v7 = *a1;
        *((_BYTE *)a1 + 53) = 0;
        (*(void (__fastcall **)(int *, _DWORD))(v7 + 24))(a1, 0);
      }
      break;
  }
  v15 = (_DWORD *)a1[19];
  for ( i = (_DWORD *)a1[18]; i != v15; ++i )
  {
    if ( *(_BYTE *)(*i + 8) )
      (**(void (__fastcall ***)(_DWORD, float *, int))*i)(*i, a2, a3);
  }
  return LODWORD(v21[2]);
}


// ======================================================================
