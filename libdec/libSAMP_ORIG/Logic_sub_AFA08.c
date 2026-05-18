// ADDR: 0xb0300
// SYMBOL: sub_B0300
int __fastcall sub_B0300(int a1, unsigned int a2)
{
  void **v4; // r9
  void **v5; // r6
  unsigned __int64 v6; // kr08_8
  bool v7; // zf
  __int64 v8; // d17
  __int64 v9; // d18
  __int64 v10; // d19
  __int64 v11; // d20
  int v12; // r0
  __int64 v13; // d16
  __int64 v14; // d17
  double v15; // d20
  double v16; // d21
  void *v17; // r1
  __int64 v18; // d18
  __int64 v19; // d19
  _QWORD *v20; // r10
  __int64 v21; // d22
  void **v22; // r5
  void *v23; // r0
  void *v25; // [sp+4h] [bp-74h] BYREF
  void **v26; // [sp+8h] [bp-70h]
  __int64 v27; // [sp+10h] [bp-68h]
  __int64 v28; // [sp+18h] [bp-60h]
  __int64 v29; // [sp+20h] [bp-58h]
  __int64 v30; // [sp+28h] [bp-50h]
  __int64 v31; // [sp+30h] [bp-48h]
  double v32; // [sp+38h] [bp-40h] BYREF
  __int64 v33; // [sp+40h] [bp-38h]
  double v34; // [sp+48h] [bp-30h] BYREF
  void *v35; // [sp+50h] [bp-28h]
  int v36; // [sp+58h] [bp-20h]

  if ( a2 )
  {
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0.0;
    v33 = 0LL;
    v34 = 0.0;
    v35 = 0;
    sub_AFE00(&v25);
    v4 = (void **)v25;
    if ( v25 == v26 )
    {
LABEL_12:
      v12 = 0;
    }
    else
    {
      v5 = (void **)v25;
      while ( 1 )
      {
        if ( *(_QWORD *)v5 )
        {
          v6 = *((_QWORD *)v5 + 1);
          v7 = v6 == 0;
          if ( v6 )
            v7 = v5[4] == 0;
          if ( !v7 && (unsigned __int64)a2 >= *(_QWORD *)v5 && v6 >= a2 )
            break;
        }
        v5 += 18;
        if ( v5 == v26 )
          goto LABEL_12;
      }
      v8 = *((_QWORD *)v5 + 1);
      v9 = *((_QWORD *)v5 + 2);
      v10 = *((_QWORD *)v5 + 3);
      v11 = *((_QWORD *)v5 + 4);
      v27 = *(_QWORD *)v5;
      v28 = v8;
      v29 = v9;
      v30 = v10;
      v31 = v11;
      std::string::operator=(&v32, v5 + 10);
      HIDWORD(v33) = v5[13];
      std::string::operator=(&v34, v5 + 14);
      v4 = (void **)v25;
      v12 = HIDWORD(v33);
    }
    v13 = v27;
    v14 = v28;
    v15 = v32;
    v16 = v34;
    v17 = v35;
    v18 = v29;
    v19 = v30;
    *(_DWORD *)(a1 + 48) = v33;
    *(_DWORD *)(a1 + 52) = v12;
    *(_DWORD *)(a1 + 64) = v17;
    *(double *)(a1 + 40) = v15;
    *(double *)(a1 + 56) = v16;
    *(_QWORD *)a1 = v13;
    *(_QWORD *)(a1 + 8) = v14;
    v20 = (_QWORD *)(a1 + 16);
    v21 = v31;
    *v20 = v18;
    v20[1] = v19;
    v20[2] = v21;
    v32 = 0.0;
    LODWORD(v33) = 0;
    v35 = 0;
    v34 = 0.0;
    if ( v4 )
    {
      v22 = v26;
      if ( v26 == v4 )
      {
        v23 = v4;
      }
      else
      {
        do
        {
          if ( *((unsigned __int8 *)v22 - 16) << 31 )
            operator delete(*(v22 - 2));
          if ( *((unsigned __int8 *)v22 - 32) << 31 )
            operator delete(*(v22 - 6));
          v22 -= 18;
        }
        while ( v22 != v4 );
        v23 = v25;
      }
      v26 = v4;
      operator delete(v23);
      if ( LOBYTE(v34) << 31 )
        operator delete(v35);
    }
    if ( LOBYTE(v32) << 31 )
      operator delete((void *)v33);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_DWORD *)(a1 + 64) = 0;
  }
  return v36;
}


// ======================================================================
