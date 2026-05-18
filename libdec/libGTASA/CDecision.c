
// Address: 0x18c390
// Original: j__ZNK9CDecision12MakeDecisionEibiiiiRsS0_
// Demangled: CDecision::MakeDecision(int,bool,int,int,int,int,short &,short &)
// attributes: thunk
int __fastcall CDecision::MakeDecision(
        CDecision *this,
        int a2,
        bool a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int16 *a8,
        __int16 *a9)
{
  return _ZNK9CDecision12MakeDecisionEibiiiiRsS0_(this, a2, a3, a4, a5, a6, a7, a8, a9);
}


// ============================================================

// Address: 0x18fc10
// Original: j__ZN9CDecision4FromERKS_
// Demangled: CDecision::From(CDecision const&)
// attributes: thunk
int __fastcall CDecision::From(CDecision *this, const CDecision *a2)
{
  return _ZN9CDecision4FromERKS_(this, a2);
}


// ============================================================

// Address: 0x194944
// Original: j__ZN9CDecision10SetDefaultEv
// Demangled: CDecision::SetDefault(void)
// attributes: thunk
int __fastcall CDecision::SetDefault(CDecision *this)
{
  return _ZN9CDecision10SetDefaultEv(this);
}


// ============================================================

// Address: 0x199240
// Original: j__ZN9CDecisionaSERKS_
// Demangled: CDecision::operator=(CDecision const&)
// attributes: thunk
int CDecision::operator=()
{
  return _ZN9CDecisionaSERKS_();
}


// ============================================================

// Address: 0x19bff4
// Original: j__ZN9CDecisionC2Ev
// Demangled: CDecision::CDecision(void)
// attributes: thunk
void __fastcall CDecision::CDecision(CDecision *this)
{
  _ZN9CDecisionC2Ev(this);
}


// ============================================================

// Address: 0x4bd4c0
// Original: _ZN9CDecisionC2Ev
// Demangled: CDecision::CDecision(void)
void __fastcall CDecision::CDecision(CDecision *this)
{
  *((_WORD *)this + 26) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 12) = 0;
  *(_QWORD *)this = -1LL;
  *((_QWORD *)this + 1) = -1LL;
  *((_WORD *)this + 27) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_WORD *)this + 28) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_WORD *)this + 29) = 0;
  *((_QWORD *)this + 2) = -1LL;
  *((_QWORD *)this + 3) = 0LL;
}


// ============================================================

// Address: 0x4bd500
// Original: _ZN9CDecision10SetDefaultEv
// Demangled: CDecision::SetDefault(void)
int __fastcall CDecision::SetDefault(int this)
{
  *(_WORD *)(this + 52) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 48) = 0;
  *(_QWORD *)this = -1LL;
  *(_QWORD *)(this + 8) = -1LL;
  *(_WORD *)(this + 54) = 0;
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 40) = 0;
  *(_WORD *)(this + 56) = 0;
  *(_DWORD *)(this + 44) = 0;
  *(_WORD *)(this + 58) = 0;
  *(_QWORD *)(this + 16) = -1LL;
  *(_QWORD *)(this + 24) = 0LL;
  return this;
}


// ============================================================

// Address: 0x4bd540
// Original: _ZN9CDecision3SetEPiPA4_fPA2_iPA6_f
// Demangled: CDecision::Set(int *,float (*)[4],int (*)[2],float (*)[6])
int __fastcall CDecision::Set(int this, int *a2, float (*a3)[4], int (*a4)[2], float (*a5)[6])
{
  int *v5; // r12
  float *v6; // r2
  int v7; // r3
  float v8; // s0
  _BYTE *v9; // r5
  float v10; // s2
  float v11; // s0
  int v12; // r6
  int v13; // r5

  v5 = &(*a4)[1];
  v6 = &(*a3)[2];
  v7 = 0;
  do
  {
    *(_DWORD *)(this + 1 * v7) = a2[v7];
    v8 = *(v6 - 2);
    v9 = (_BYTE *)(this + 1 * v7);
    v10 = (float)(((unsigned int)*(v6 - 1) + (unsigned int)v8 + (unsigned int)*v6 + (unsigned int)v6[1]) / 0xFF + 1);
    v9[24] = (unsigned int)(float)(v8 / v10);
    v9[25] = (unsigned int)(float)(*(v6 - 1) / v10);
    v9[26] = (unsigned int)(float)(*v6 / v10);
    v11 = v6[1];
    v6 += 4;
    v9[27] = (unsigned int)(float)(v11 / v10);
    v12 = this + v7 * 2;
    ++v7;
    *(_BYTE *)(v12 + 48) = *(v5 - 1) != 0;
    v13 = *v5;
    v5 += 2;
    *(_BYTE *)(v12 + 49) = v13 != 0;
  }
  while ( v7 != 6 );
  return this;
}


// ============================================================

// Address: 0x4bd620
// Original: _ZN9CDecision3AddEiPfPi
// Demangled: CDecision::Add(int,float *,int *)
int __fastcall CDecision::Add(int this, int a2, float *a3, int *a4)
{
  bool v4; // zf
  bool v5; // zf
  bool v6; // zf
  bool v7; // zf
  bool v8; // zf
  bool v9; // zf
  bool v10; // zf
  bool v11; // zf
  int v12; // r12
  bool v13; // zf
  bool v14; // zf
  bool v15; // zf
  bool v16; // zf
  bool v17; // zf
  bool v18; // zf
  bool v19; // zf
  bool v20; // zf
  bool v21; // zf
  bool v22; // zf
  _BYTE *v23; // lr
  int v24; // r1

  v4 = *(_DWORD *)this == -1;
  if ( *(_DWORD *)this == -1 )
    v4 = *(_BYTE *)(this + 24) == 0;
  if ( v4 )
  {
    v10 = *(_BYTE *)(this + 25) == 0;
    if ( !*(_BYTE *)(this + 25) )
      v10 = *(_BYTE *)(this + 26) == 0;
    if ( v10 )
    {
      v11 = *(_BYTE *)(this + 27) == 0;
      if ( !*(_BYTE *)(this + 27) )
        v11 = *(_BYTE *)(this + 48) == 0;
      if ( v11 && !*(_BYTE *)(this + 49) )
      {
        v12 = 0;
LABEL_80:
        *(_DWORD *)(this + 4 * v12) = a2;
        v23 = (_BYTE *)(this + 4 * v12);
        this += 2 * v12;
        v23[24] = (unsigned int)*a3;
        v23[25] = (unsigned int)a3[1];
        v23[26] = (unsigned int)a3[2];
        v23[27] = (unsigned int)a3[3];
        v24 = *a4;
        if ( *a4 )
          LOBYTE(v24) = 1;
        *(_BYTE *)(this + 48) = v24;
        *(_BYTE *)(this + 49) = a4[1] != 0;
        return this;
      }
    }
  }
  if ( *(_DWORD *)(this + 4) == -1 )
  {
    v5 = *(_BYTE *)(this + 28) == 0;
    if ( !*(_BYTE *)(this + 28) )
      v5 = *(_BYTE *)(this + 29) == 0;
    if ( v5 )
    {
      v15 = *(_BYTE *)(this + 30) == 0;
      if ( !*(_BYTE *)(this + 30) )
        v15 = *(_BYTE *)(this + 31) == 0;
      if ( v15 )
      {
        v16 = *(_BYTE *)(this + 50) == 0;
        if ( !*(_BYTE *)(this + 50) )
          v16 = *(_BYTE *)(this + 51) == 0;
        if ( v16 )
        {
          v12 = 1;
          goto LABEL_80;
        }
      }
    }
  }
  if ( *(_DWORD *)(this + 8) == -1 )
  {
    v6 = *(_BYTE *)(this + 32) == 0;
    if ( !*(_BYTE *)(this + 32) )
      v6 = *(_BYTE *)(this + 33) == 0;
    if ( v6 )
    {
      v17 = *(_BYTE *)(this + 34) == 0;
      if ( !*(_BYTE *)(this + 34) )
        v17 = *(_BYTE *)(this + 35) == 0;
      if ( v17 )
      {
        v18 = *(_BYTE *)(this + 52) == 0;
        if ( !*(_BYTE *)(this + 52) )
          v18 = *(_BYTE *)(this + 53) == 0;
        if ( v18 )
        {
          v12 = 2;
          goto LABEL_80;
        }
      }
    }
  }
  if ( *(_DWORD *)(this + 12) == -1 )
  {
    v7 = *(_BYTE *)(this + 36) == 0;
    if ( !*(_BYTE *)(this + 36) )
      v7 = *(_BYTE *)(this + 37) == 0;
    if ( v7 )
    {
      v19 = *(_BYTE *)(this + 38) == 0;
      if ( !*(_BYTE *)(this + 38) )
        v19 = *(_BYTE *)(this + 39) == 0;
      if ( v19 )
      {
        v20 = *(_BYTE *)(this + 54) == 0;
        if ( !*(_BYTE *)(this + 54) )
          v20 = *(_BYTE *)(this + 55) == 0;
        if ( v20 )
        {
          v12 = 3;
          goto LABEL_80;
        }
      }
    }
  }
  if ( *(_DWORD *)(this + 16) == -1 )
  {
    v8 = *(_BYTE *)(this + 40) == 0;
    if ( !*(_BYTE *)(this + 40) )
      v8 = *(_BYTE *)(this + 41) == 0;
    if ( v8 )
    {
      v21 = *(_BYTE *)(this + 42) == 0;
      if ( !*(_BYTE *)(this + 42) )
        v21 = *(_BYTE *)(this + 43) == 0;
      if ( v21 )
      {
        v22 = *(_BYTE *)(this + 56) == 0;
        if ( !*(_BYTE *)(this + 56) )
          v22 = *(_BYTE *)(this + 57) == 0;
        if ( v22 )
        {
          v12 = 4;
          goto LABEL_80;
        }
      }
    }
  }
  if ( *(_DWORD *)(this + 20) == -1 )
  {
    v9 = *(_BYTE *)(this + 44) == 0;
    if ( !*(_BYTE *)(this + 44) )
      v9 = *(_BYTE *)(this + 45) == 0;
    if ( v9 )
    {
      v13 = *(_BYTE *)(this + 46) == 0;
      if ( !*(_BYTE *)(this + 46) )
        v13 = *(_BYTE *)(this + 47) == 0;
      if ( v13 )
      {
        v14 = *(_BYTE *)(this + 58) == 0;
        if ( !*(_BYTE *)(this + 58) )
          v14 = *(_BYTE *)(this + 59) == 0;
        if ( v14 )
        {
          v12 = 5;
          goto LABEL_80;
        }
      }
    }
  }
  return this;
}


// ============================================================

// Address: 0x4bd86c
// Original: _ZN9CDecision4FromERKS_
// Demangled: CDecision::From(CDecision const&)
int __fastcall CDecision::From(int this, const CDecision *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  *(_BYTE *)(this + 24) = *((_BYTE *)a2 + 24);
  *(_BYTE *)(this + 25) = *((_BYTE *)a2 + 25);
  *(_BYTE *)(this + 26) = *((_BYTE *)a2 + 26);
  *(_BYTE *)(this + 27) = *((_BYTE *)a2 + 27);
  *(_BYTE *)(this + 48) = *((_BYTE *)a2 + 48);
  *(_BYTE *)(this + 49) = *((_BYTE *)a2 + 49);
  *(_DWORD *)(this + 4) = *((_DWORD *)a2 + 1);
  *(_BYTE *)(this + 28) = *((_BYTE *)a2 + 28);
  *(_BYTE *)(this + 29) = *((_BYTE *)a2 + 29);
  *(_BYTE *)(this + 30) = *((_BYTE *)a2 + 30);
  *(_BYTE *)(this + 31) = *((_BYTE *)a2 + 31);
  *(_BYTE *)(this + 50) = *((_BYTE *)a2 + 50);
  *(_BYTE *)(this + 51) = *((_BYTE *)a2 + 51);
  *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
  *(_BYTE *)(this + 32) = *((_BYTE *)a2 + 32);
  *(_BYTE *)(this + 33) = *((_BYTE *)a2 + 33);
  *(_BYTE *)(this + 34) = *((_BYTE *)a2 + 34);
  *(_BYTE *)(this + 35) = *((_BYTE *)a2 + 35);
  *(_BYTE *)(this + 52) = *((_BYTE *)a2 + 52);
  *(_BYTE *)(this + 53) = *((_BYTE *)a2 + 53);
  *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
  *(_BYTE *)(this + 36) = *((_BYTE *)a2 + 36);
  *(_BYTE *)(this + 37) = *((_BYTE *)a2 + 37);
  *(_BYTE *)(this + 38) = *((_BYTE *)a2 + 38);
  *(_BYTE *)(this + 39) = *((_BYTE *)a2 + 39);
  *(_BYTE *)(this + 54) = *((_BYTE *)a2 + 54);
  *(_BYTE *)(this + 55) = *((_BYTE *)a2 + 55);
  *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
  *(_BYTE *)(this + 40) = *((_BYTE *)a2 + 40);
  *(_BYTE *)(this + 41) = *((_BYTE *)a2 + 41);
  *(_BYTE *)(this + 42) = *((_BYTE *)a2 + 42);
  *(_BYTE *)(this + 43) = *((_BYTE *)a2 + 43);
  *(_BYTE *)(this + 56) = *((_BYTE *)a2 + 56);
  *(_BYTE *)(this + 57) = *((_BYTE *)a2 + 57);
  *(_DWORD *)(this + 20) = *((_DWORD *)a2 + 5);
  *(_BYTE *)(this + 44) = *((_BYTE *)a2 + 44);
  *(_BYTE *)(this + 45) = *((_BYTE *)a2 + 45);
  *(_BYTE *)(this + 46) = *((_BYTE *)a2 + 46);
  *(_BYTE *)(this + 47) = *((_BYTE *)a2 + 47);
  *(_BYTE *)(this + 58) = *((_BYTE *)a2 + 58);
  *(_BYTE *)(this + 59) = *((_BYTE *)a2 + 59);
  return this;
}


// ============================================================

// Address: 0x4bd988
// Original: _ZNK9CDecision12MakeDecisionEibiiiiRsS0_
// Demangled: CDecision::MakeDecision(int,bool,int,int,int,int,short &,short &)
int __fastcall CDecision::MakeDecision(
        CDecision *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int16 *a8,
        __int16 *a9)
{
  float *v9; // r10
  int v10; // r8
  char *v11; // r9
  char v12; // r6
  int v13; // r1
  int v14; // r5
  bool v15; // zf
  bool v16; // zf
  char v17; // r6
  int v18; // r1
  bool v19; // zf
  bool v20; // zf
  char v21; // r6
  int v22; // r1
  bool v23; // zf
  bool v24; // zf
  char v25; // r6
  int v26; // r1
  bool v27; // zf
  bool v28; // zf
  int v29; // r6
  int v30; // r1
  bool v31; // zf
  bool v32; // zf
  int v33; // r1
  bool v34; // zf
  bool v35; // zf
  bool v36; // zf
  float v37; // s0
  int v38; // r1
  float *v39; // r3
  unsigned int v40; // r5
  int v41; // r5
  int v42; // r1
  float *v43; // r2
  float v44; // s0
  int v45; // r1
  float v46; // s0
  int v47; // r0
  float v48; // s0
  int result; // r0
  int v50; // [sp+0h] [bp-70h] BYREF
  __int16 v51; // [sp+4h] [bp-6Ch]
  _QWORD v52[2]; // [sp+8h] [bp-68h]
  int v53; // [sp+18h] [bp-58h]
  int v54; // [sp+1Ch] [bp-54h]
  _QWORD v55[2]; // [sp+20h] [bp-50h]
  int v56; // [sp+30h] [bp-40h]
  int v57; // [sp+34h] [bp-3Ch]
  _BYTE v58[16]; // [sp+38h] [bp-38h] BYREF
  int v59; // [sp+48h] [bp-28h]
  int v60; // [sp+4Ch] [bp-24h]
  int v61; // [sp+50h] [bp-20h]

  v9 = (float *)v58;
  v55[0] = 0xC8000000C8LL;
  v55[1] = 0xC8000000C8LL;
  v10 = 0;
  v56 = 200;
  v11 = (char *)this + a2;
  memset(v58, 0, sizeof(v58));
  v59 = 0;
  v52[0] = 0xC8000000C8LL;
  v52[1] = 0xC8000000C8LL;
  v60 = 0;
  v51 = 0;
  v53 = 200;
  v57 = 200;
  v50 = 0;
  v54 = 200;
  v12 = *((_BYTE *)this + a2 + 24);
  if ( v12 )
  {
    v13 = *(_DWORD *)this;
    v10 = 0;
    v14 = a6;
    v15 = *(_DWORD *)this == a6;
    if ( *(_DWORD *)this != a6 )
      v15 = v13 == a5;
    if ( !v15 )
    {
      v16 = v13 == -1;
      if ( v13 != -1 )
        v16 = v13 == a4;
      if ( !v16 )
      {
        if ( *((_BYTE *)this + a3 + 48) )
        {
          v10 = 1;
          LODWORD(v52[0]) = *(_DWORD *)this;
          LOBYTE(v50) = v12;
        }
        else
        {
          v10 = 0;
        }
      }
    }
  }
  else
  {
    v14 = a6;
  }
  v17 = v11[28];
  if ( v17 )
  {
    v18 = *((_DWORD *)this + 1);
    v19 = v18 == v14;
    if ( v18 != v14 )
      v19 = v18 == a5;
    if ( !v19 )
    {
      v20 = v18 == -1;
      if ( v18 != -1 )
        v20 = v18 == a4;
      if ( !v20 && *((_BYTE *)this + a3 + 50) )
      {
        *((_DWORD *)v52 + v10) = v18;
        *(_BYTE *)((unsigned int)&v50 | v10++) = v17;
      }
    }
  }
  v21 = v11[32];
  if ( v21 )
  {
    v22 = *((_DWORD *)this + 2);
    v23 = v22 == v14;
    if ( v22 != v14 )
      v23 = v22 == a5;
    if ( !v23 )
    {
      v24 = v22 == -1;
      if ( v22 != -1 )
        v24 = v22 == a4;
      if ( !v24 && *((_BYTE *)this + a3 + 52) )
      {
        *((_DWORD *)v52 + v10) = v22;
        *((_BYTE *)&v50 + v10++) = v21;
      }
    }
  }
  v25 = v11[36];
  if ( v25 )
  {
    v26 = *((_DWORD *)this + 3);
    v27 = v26 == v14;
    if ( v26 != v14 )
      v27 = v26 == a5;
    if ( !v27 )
    {
      v28 = v26 == -1;
      if ( v26 != -1 )
        v28 = v26 == a4;
      if ( !v28 && *((_BYTE *)this + a3 + 54) )
      {
        *((_DWORD *)v52 + v10) = v26;
        *((_BYTE *)&v50 + v10++) = v25;
      }
    }
  }
  v29 = (unsigned __int8)v11[40];
  if ( v11[40] )
  {
    v30 = *((_DWORD *)this + 4);
    v31 = v30 == v14;
    if ( v30 != v14 )
      v31 = v30 == a5;
    if ( !v31 )
    {
      v32 = v30 == -1;
      if ( v30 != -1 )
        v32 = v30 == a4;
      if ( !v32 && *((_BYTE *)this + a3 + 56) )
      {
        *((_DWORD *)v52 + v10) = v30;
        *((_BYTE *)&v50 + v10++) = v29;
      }
    }
  }
  v33 = (unsigned __int8)v11[44];
  v34 = v33 == 0;
  if ( v11[44] )
  {
    v29 = *((_DWORD *)this + 5);
    v34 = v29 == v14;
  }
  if ( v34 )
    goto LABEL_58;
  v35 = v29 == a5;
  if ( v29 != a5 )
    v35 = v29 == -1;
  if ( v35 )
    goto LABEL_58;
  v36 = v29 == a4;
  if ( v29 != a4 )
    v36 = *((_BYTE *)this + a3 + 58) == 0;
  if ( v36 )
  {
LABEL_58:
    *a8 = 200;
    if ( v10 <= 0 )
      goto LABEL_77;
  }
  else
  {
    *((_DWORD *)v52 + v10) = v29;
    *((_BYTE *)&v50 + v10) = v33;
    *a8 = 200;
  }
  v37 = 0.0;
  v61 = 6;
  v38 = 0;
  v39 = (float *)v58;
  do
  {
    *(v39 - 6) = *((float *)v52 + v38);
    v40 = *((unsigned __int8 *)&v50 + v38++);
    v37 = v37 + (float)v40;
    *v39++ = v37;
    v41 = v61;
  }
  while ( v38 < v61 );
  if ( v61 >= 1 )
  {
    v42 = 0;
    v43 = (float *)v58;
    v44 = 1.0 / v37;
    do
    {
      ++v42;
      *v43 = v44 * *v43;
      ++v43;
      v41 = v61;
    }
    while ( v42 < v61 );
  }
  *a8 = 200;
  if ( a7 == -1 || v41 < 1 )
    goto LABEL_71;
  v45 = 0;
  while ( *((_DWORD *)v55 + v45) != a7 )
  {
    if ( ++v45 >= v41 )
      goto LABEL_71;
  }
  *a8 = a7;
  if ( (unsigned __int16)a7 == 200 )
  {
LABEL_71:
    v46 = (float)rand();
    if ( v41 >= 1 )
    {
      v47 = 0;
      v48 = (float)(v46 * 4.6566e-10) + 0.0;
      while ( v48 > *v9 )
      {
        ++v47;
        ++v9;
        if ( v47 >= v41 )
          goto LABEL_77;
      }
      *a8 = *((_DWORD *)v9 - 6);
    }
  }
LABEL_77:
  result = 0xFFFF;
  *a9 = -1;
  return result;
}


// ============================================================

// Address: 0x4bdd14
// Original: _ZNK9CDecision11HasResponseEv
// Demangled: CDecision::HasResponse(void)
bool __fastcall CDecision::HasResponse(CDecision *this)
{
  int v1; // r1
  bool v2; // zf
  int v3; // r1
  bool v4; // zf

  if ( *(_DWORD *)this != 200 )
    return 1;
  v1 = *((_DWORD *)this + 1);
  v2 = v1 == 200;
  if ( v1 == 200 )
    v2 = *((_DWORD *)this + 2) == 200;
  if ( !v2 )
    return 1;
  v3 = *((_DWORD *)this + 3);
  v4 = v3 == 200;
  if ( v3 == 200 )
    v4 = *((_DWORD *)this + 4) == 200;
  return !v4 || *((_DWORD *)this + 5) != 200;
}


// ============================================================

// Address: 0x4c25d8
// Original: _ZN9CDecisionaSERKS_
// Demangled: CDecision::operator=(CDecision const&)
int __fastcall CDecision::operator=(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_BYTE *)(result + 24) = *(_BYTE *)(a2 + 24);
  *(_BYTE *)(result + 25) = *(_BYTE *)(a2 + 25);
  *(_BYTE *)(result + 26) = *(_BYTE *)(a2 + 26);
  *(_BYTE *)(result + 27) = *(_BYTE *)(a2 + 27);
  *(_BYTE *)(result + 48) = *(_BYTE *)(a2 + 48);
  *(_BYTE *)(result + 49) = *(_BYTE *)(a2 + 49);
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  *(_BYTE *)(result + 28) = *(_BYTE *)(a2 + 28);
  *(_BYTE *)(result + 29) = *(_BYTE *)(a2 + 29);
  *(_BYTE *)(result + 30) = *(_BYTE *)(a2 + 30);
  *(_BYTE *)(result + 31) = *(_BYTE *)(a2 + 31);
  *(_BYTE *)(result + 50) = *(_BYTE *)(a2 + 50);
  *(_BYTE *)(result + 51) = *(_BYTE *)(a2 + 51);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  *(_BYTE *)(result + 32) = *(_BYTE *)(a2 + 32);
  *(_BYTE *)(result + 33) = *(_BYTE *)(a2 + 33);
  *(_BYTE *)(result + 34) = *(_BYTE *)(a2 + 34);
  *(_BYTE *)(result + 35) = *(_BYTE *)(a2 + 35);
  *(_BYTE *)(result + 52) = *(_BYTE *)(a2 + 52);
  *(_BYTE *)(result + 53) = *(_BYTE *)(a2 + 53);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 12);
  *(_BYTE *)(result + 36) = *(_BYTE *)(a2 + 36);
  *(_BYTE *)(result + 37) = *(_BYTE *)(a2 + 37);
  *(_BYTE *)(result + 38) = *(_BYTE *)(a2 + 38);
  *(_BYTE *)(result + 39) = *(_BYTE *)(a2 + 39);
  *(_BYTE *)(result + 54) = *(_BYTE *)(a2 + 54);
  *(_BYTE *)(result + 55) = *(_BYTE *)(a2 + 55);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 16);
  *(_BYTE *)(result + 40) = *(_BYTE *)(a2 + 40);
  *(_BYTE *)(result + 41) = *(_BYTE *)(a2 + 41);
  *(_BYTE *)(result + 42) = *(_BYTE *)(a2 + 42);
  *(_BYTE *)(result + 43) = *(_BYTE *)(a2 + 43);
  *(_BYTE *)(result + 56) = *(_BYTE *)(a2 + 56);
  *(_BYTE *)(result + 57) = *(_BYTE *)(a2 + 57);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a2 + 20);
  *(_BYTE *)(result + 44) = *(_BYTE *)(a2 + 44);
  *(_BYTE *)(result + 45) = *(_BYTE *)(a2 + 45);
  *(_BYTE *)(result + 46) = *(_BYTE *)(a2 + 46);
  *(_BYTE *)(result + 47) = *(_BYTE *)(a2 + 47);
  *(_BYTE *)(result + 58) = *(_BYTE *)(a2 + 58);
  *(_BYTE *)(result + 59) = *(_BYTE *)(a2 + 59);
  return result;
}


// ============================================================
