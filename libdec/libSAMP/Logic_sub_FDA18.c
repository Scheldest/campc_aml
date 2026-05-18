// ADDR: 0xfd83c
// SYMBOL: sub_FD83C
int __fastcall sub_FD83C(int a1, int a2, int *a3, int *a4)
{
  __int64 v5; // kr00_8
  int v6; // r0
  int v7; // r6
  float *v8; // r0
  float v9; // s2
  int v10; // s4
  int v11; // r0
  _BYTE v13[64]; // [sp+0h] [bp-A0h] BYREF
  _BYTE v14[96]; // [sp+40h] [bp-60h] BYREF

  dword_247544 = 0;
  qword_247520 = 0LL;
  *(_QWORD *)&dword_247528 = 0LL;
  *(_QWORD *)&dword_247530 = 0LL;
  *(_QWORD *)algn_247538 = 0LL;
  dword_247540 = 0;
  v5 = *(_QWORD *)a1;
  v6 = *(_DWORD *)(a1 + 8);
  qword_247520 = v5;
  dword_247528 = v6;
  dword_24752C = *a3;
  dword_247530 = a3[1];
  dword_247534 = a3[2];
  if ( a4 )
  {
    v7 = *a4;
    if ( *a4 )
    {
      v8 = *(float **)(v7 + 20);
      if ( v8 )
      {
        if ( dword_314320 )
        {
          v9 = *((float *)a3 + 1) - v8[13];
          *(float *)&v10 = *((float *)a3 + 2) - v8[14];
          *(float *)algn_247538 = *(float *)a3 - v8[12];
          *(float *)&algn_247538[4] = v9;
          dword_247540 = v10;
        }
        else
        {
          memset(v14, 0, 64);
          memset(v13, 0, sizeof(v13));
          ((void (__fastcall *)(_BYTE *, _DWORD))(dword_23DF24 + 1979553))(v13, *(_DWORD *)(v7 + 20));
          ((void (__fastcall *)(_BYTE *, _BYTE *))(dword_23DF24 + 1980969))(v14, v13);
          sub_108F30(algn_247538, v14, a3);
        }
        dword_247544 = v7;
      }
    }
  }
  v11 = sub_E35A0(dword_23DEF0);
  return sub_105CE0(v11, &qword_247520);
}


// ======================================================================
