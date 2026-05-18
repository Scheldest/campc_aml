// ADDR: 0x1508fc
// SYMBOL: sub_1508FC
int __fastcall sub_1508FC(_DWORD *a1, __int16 a2, int a3, int a4, float a5)
{
  int v6; // r0
  int result; // r0
  int v10; // r0
  _DWORD *v11; // r4
  int v12; // r11
  _DWORD *i; // r5
  _DWORD *v14; // r6
  _DWORD *v15; // r0
  int v16; // r0
  int v17; // r2
  _DWORD *v18; // [sp+8h] [bp-40h] BYREF
  __int16 v19; // [sp+Eh] [bp-3Ah] BYREF
  _DWORD *v20; // [sp+10h] [bp-38h] BYREF
  __int16 *v21; // [sp+14h] [bp-34h] BYREF
  _DWORD v22[12]; // [sp+18h] [bp-30h] BYREF

  v6 = *a1;
  v19 = a2;
  result = (*(int (__fastcall **)(_DWORD *))(v6 + 16))(a1);
  if ( result )
  {
    v10 = sub_150F9C(a1 + 4, &v19);
    if ( v10 )
    {
      v11 = *(_DWORD **)(v10 + 12);
    }
    else
    {
      v12 = (*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
      v11 = (_DWORD *)operator new(0x28u);
      v11[2] = sub_15E40C(48000, 1, v12);
      v11[3] = 0;
      *v11 = &off_22F1F4;
      v11[1] = 0;
      v11[4] = 0;
      v11[5] = 0;
      v11[6] = 0;
      v11[7] = 0;
      v18 = v11;
      v21 = &v19;
      v20 = &v18;
      sub_15106E(v22, a1 + 4, &v19, &unk_B960F, &v21, &v20);
      v14 = (_DWORD *)a1[10];
      for ( i = (_DWORD *)a1[9]; i != v14; ++i )
        sub_158D18(v11, *i);
      (*(void (__fastcall **)(_DWORD *, _DWORD *))(*a1 + 12))(a1, v11);
      v15 = v18;
      v18 = 0;
      if ( v15 )
        (*(void (__fastcall **)(_DWORD *))(*v15 + 4))(v15);
    }
    std::chrono::steady_clock::now((std::chrono::steady_clock *)v22);
    v16 = v22[0];
    v17 = v22[1];
    a1[12] = v22[0];
    a1[13] = v17;
    v11[6] = v16;
    v11[7] = v17;
    (*(void (__fastcall **)(_DWORD *, _DWORD))(*v11 + 12))(v11, LODWORD(a5));
    return sub_15E3E8(v11, a3, a4);
  }
  return result;
}


// ======================================================================
// ADDR: 0x1525ec
// SYMBOL: sub_1525EC
int __fastcall sub_1525EC(_DWORD *a1, unsigned __int16 a2)
{
  _DWORD *v2; // r5
  int v4; // r0
  int v5; // r6
  char *v6; // r6
  char *v7; // r4
  char *v9; // [sp+8h] [bp-28h] BYREF
  unsigned __int16 v10; // [sp+Eh] [bp-22h] BYREF
  void **v11; // [sp+10h] [bp-20h]
  unsigned __int16 *v12; // [sp+14h] [bp-1Ch]
  _DWORD v13[6]; // [sp+18h] [bp-18h] BYREF

  v2 = a1 + 8;
  v10 = a2;
  LOWORD(v13[0]) = a2;
  v4 = sub_153102(a1 + 8, v13);
  if ( !v4 || (v5 = *(_DWORD *)(v4 + 12)) == 0 )
  {
    v6 = (char *)operator new(0x40u);
    sub_15A3A8(v6, 48000, 1);
    v9 = v6;
    v12 = &v10;
    v11 = (void **)&v9;
    sub_153352(v13, v2);
    v5 = *(_DWORD *)(v13[0] + 12);
    sub_155740(*a1, v10, v5);
    v7 = v9;
    v9 = 0;
    if ( v7 )
    {
      sub_15E0E8(v7 + 4);
      operator delete(v7);
    }
  }
  return v5;
}


// ======================================================================
// ADDR: 0x15a3e8
// SYMBOL: sub_15A3E8
int __fastcall sub_15A3E8(bool *a1, int a2, int a3, int a4, int a5)
{
  __int64 v7; // r0
  int v10; // r2
  int v11; // r2
  int result; // r0
  int v13; // r0
  int v14; // r10
  int nb_frames; // r6
  _QWORD v16[4]; // [sp+8h] [bp-20h] BYREF

  v7 = *((_QWORD *)a1 + 5);
  ++HIDWORD(v7);
  LODWORD(v7) = v7 + a4;
  *((_QWORD *)a1 + 5) = v7;
  *a1 = a4 == 0;
  std::chrono::steady_clock::now((std::chrono::steady_clock *)v16);
  if ( *a1 || a1[30] )
  {
    v11 = *((_DWORD *)a1 + 12);
    *((_QWORD *)a1 + 2) = v16[0];
    *((_WORD *)a1 + 14) = a2;
    *((_DWORD *)a1 + 12) = v11 + 1;
    return 0;
  }
  else
  {
    v13 = *((unsigned __int16 *)a1 + 14);
    if ( *((_WORD *)a1 + 14) )
    {
      v14 = v13 + 1;
      if ( v13 + 1 != a2 )
      {
        sub_15E194(a1 + 4, a5, 20);
        if ( a2 - v14 >= 1 )
        {
          v10 = 149999999 - (LODWORD(v16[0]) - *((_DWORD *)a1 + 4));
          if ( (__int64)(v16[0] - *((_QWORD *)a1 + 2)) <= 149999999 )
            *((_DWORD *)a1 + 9) += a2 - v14;
        }
      }
    }
    *((_QWORD *)a1 + 2) = v16[0];
    *((_WORD *)a1 + 14) = a2;
    nb_frames = j_opus_packet_get_nb_frames(a3, a4, v10);
    result = sub_15E0FC(a1 + 4, a3, a4, a5, 960 * nb_frames) * *((_DWORD *)a1 + 6);
    *((_DWORD *)a1 + 13) += nb_frames;
  }
  return result;
}


// ======================================================================
// ADDR: 0x15e55c
// SYMBOL: sub_15E55C
int sub_15E55C()
{
  int result; // r0
  int v1; // r1

  result = 0xFFFF;
  if ( dword_23DEF4 )
  {
    v1 = **(_DWORD **)(dword_23DEF4 + 944);
    if ( v1 )
      return *(unsigned __int16 *)(v1 + 5024);
  }
  return result;
}


// ======================================================================
