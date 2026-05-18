// ADDR: 0xb0130
// SYMBOL: sub_B0130
int __fastcall sub_B0130(void **a1, unsigned __int8 *a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r1
  void **v6; // r4
  void **v7; // r6
  bool v8; // zf
  unsigned int v9; // r1
  unsigned int v10; // r0
  unsigned int v11; // r3
  unsigned int v12; // r2
  int v13; // r2
  int v14; // r3
  void **v15; // r8
  __int64 v16; // d17
  __int64 v17; // d18
  __int64 v18; // d19
  __int64 v19; // d20
  int v20; // r2
  int v21; // r3
  void **v22; // r1
  void **v23; // r2
  void **v24; // r5
  void **v25; // r0
  void **v26; // r4
  void **v27; // r5
  void *v28; // r0
  void **v30; // [sp+8h] [bp-38h] BYREF
  void **v31; // [sp+Ch] [bp-34h]
  void *v32; // [sp+14h] [bp-2Ch] BYREF
  void **v33; // [sp+18h] [bp-28h]
  void **v34; // [sp+1Ch] [bp-24h]
  int v35; // [sp+20h] [bp-20h]

  v4 = *a2;
  v5 = *((_DWORD *)a2 + 1);
  if ( !(v4 << 31) )
    v5 = v4 >> 1;
  if ( v5 )
  {
    v34 = 0;
    v32 = 0;
    v33 = 0;
    sub_AFE00(&v30);
    v6 = v30;
    v7 = v31;
    if ( v30 != v31 )
    {
      do
      {
        if ( *(_QWORD *)v6 )
        {
          v8 = *((_QWORD *)v6 + 1) == 0LL;
          if ( *((_QWORD *)v6 + 1) )
            v8 = v6[4] == 0;
          if ( !v8 )
          {
            v9 = *((unsigned __int8 *)v6 + 56);
            v10 = (unsigned int)v6[15];
            if ( !(v9 << 31) )
              v10 = v9 >> 1;
            if ( v10 )
            {
              v11 = *a2;
              v12 = *((_DWORD *)a2 + 1);
              if ( (v11 & 1) == 0 )
                v12 = v11 >> 1;
              if ( v10 >= v12 && !std::string::compare(v6 + 14, v10 - v12) )
              {
                v15 = v33;
                if ( v33 == v34 )
                {
                  sub_B07C0(&v32, v6);
                }
                else
                {
                  v16 = *((_QWORD *)v6 + 1);
                  v17 = *((_QWORD *)v6 + 2);
                  v18 = *((_QWORD *)v6 + 3);
                  v19 = *((_QWORD *)v6 + 4);
                  *(_QWORD *)v33 = *(_QWORD *)v6;
                  *((_QWORD *)v15 + 1) = v16;
                  *((_QWORD *)v15 + 2) = v17;
                  *((_QWORD *)v15 + 3) = v18;
                  *((_QWORD *)v15 + 4) = v19;
                  std::string::basic_string(v15 + 10, v6 + 10, v13, v14);
                  v15[13] = v6[13];
                  std::string::basic_string(v15 + 14, v6 + 14, v20, v21);
                  v33 = v15 + 18;
                }
              }
            }
          }
        }
        v6 += 18;
      }
      while ( v6 != v7 );
      v6 = v30;
    }
    v22 = v33;
    v23 = v34;
    *a1 = v32;
    a1[1] = v22;
    a1[2] = v23;
    v34 = 0;
    v32 = 0;
    v33 = 0;
    if ( v6 )
    {
      v24 = v31;
      if ( v31 == v6 )
      {
        v25 = v6;
      }
      else
      {
        do
        {
          if ( *((unsigned __int8 *)v24 - 16) << 31 )
            operator delete(*(v24 - 2));
          if ( *((unsigned __int8 *)v24 - 32) << 31 )
            operator delete(*(v24 - 6));
          v24 -= 18;
        }
        while ( v24 != v6 );
        v25 = v30;
      }
      v31 = v6;
      operator delete(v25);
      v26 = (void **)v32;
      if ( v32 )
      {
        v27 = v33;
        if ( v33 == v32 )
        {
          v28 = v32;
        }
        else
        {
          do
          {
            if ( *((unsigned __int8 *)v27 - 16) << 31 )
              operator delete(*(v27 - 2));
            if ( *((unsigned __int8 *)v27 - 32) << 31 )
              operator delete(*(v27 - 6));
            v27 -= 18;
          }
          while ( v27 != v26 );
          v28 = v32;
        }
        v33 = v26;
        operator delete(v28);
      }
    }
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  return v35;
}


// ======================================================================
