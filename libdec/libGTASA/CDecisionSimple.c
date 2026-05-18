
// Address: 0x4bdc08
// Original: _ZN15CDecisionSimple3SetEPiPhi
// Demangled: CDecisionSimple::Set(int *,uchar *,int)
int __fastcall CDecisionSimple::Set(int this, int *a2, unsigned __int8 *a3, int a4)
{
  float v4; // s0
  int v5; // r4
  int v6; // r12
  unsigned int v7; // r3
  unsigned int v8; // s2
  float *v9; // r3
  int v10; // lr
  float *v11; // r1
  int v12; // r2
  float v13; // s0

  *(_DWORD *)(this + 48) = a4;
  if ( a4 >= 1 )
  {
    v4 = 0.0;
    v5 = 0;
    v6 = 24;
    do
    {
      *(_DWORD *)(this + 4 * v5) = a2[v5];
      v7 = a3[v5++];
      v8 = v7;
      v9 = (float *)(this + v6);
      v6 += 4;
      v4 = v4 + (float)v8;
      *v9 = v4;
      v10 = *(_DWORD *)(this + 48);
    }
    while ( v5 < v10 );
    if ( v10 >= 1 )
    {
      v11 = (float *)(this + 24);
      v12 = 0;
      v13 = 1.0 / v4;
      do
      {
        ++v12;
        *v11 = v13 * *v11;
        ++v11;
      }
      while ( v12 < *(_DWORD *)(this + 48) );
    }
  }
  return this;
}


// ============================================================

// Address: 0x4bdc7c
// Original: _ZNK15CDecisionSimple12MakeDecisionEiRsRi
// Demangled: CDecisionSimple::MakeDecision(int,short &,int &)
int __fastcall CDecisionSimple::MakeDecision(CDecisionSimple *this, int a2, unsigned __int16 *a3, int *a4)
{
  int v7; // r0
  int v8; // r2
  int result; // r0
  float v10; // s0
  float *v11; // r2
  int v12; // r1
  float v13; // s0

  *a3 = 200;
  *a4 = -1;
  if ( a2 != -1 )
  {
    v7 = *((_DWORD *)this + 12);
    if ( v7 >= 1 )
    {
      v8 = 0;
      while ( *((_DWORD *)this + v8) != a2 )
      {
        if ( ++v8 >= v7 )
          goto LABEL_8;
      }
      *a3 = a2;
      *a4 = v8;
    }
  }
LABEL_8:
  result = *a3;
  if ( result == 200 )
  {
    v10 = (float)rand();
    result = *((_DWORD *)this + 12);
    if ( result >= 1 )
    {
      v11 = (float *)((char *)this + 24);
      v12 = 0;
      v13 = (float)(v10 * 4.6566e-10) + 0.0;
      while ( v13 > *v11 )
      {
        ++v12;
        ++v11;
        if ( v12 >= result )
          return result;
      }
      result = *((_DWORD *)v11 - 6);
      *a3 = result;
      *a4 = v12;
    }
  }
  return result;
}


// ============================================================

// Address: 0x4bdd42
// Original: _ZN15CDecisionSimple10SetDefaultEv
// Demangled: CDecisionSimple::SetDefault(void)
_DWORD *__fastcall CDecisionSimple::SetDefault(_DWORD *this)
{
  float v1; // s0
  int v2; // r2
  float *v3; // r3
  float v4; // s2
  int v5; // r1
  float *v6; // r1
  int v7; // r2
  float v8; // s0
  char v9; // [sp+2h] [bp-26h]
  int v10; // [sp+3h] [bp-25h]
  char v11; // [sp+7h] [bp-21h]
  _QWORD v12[2]; // [sp+8h] [bp-20h]
  int v13; // [sp+18h] [bp-10h]
  int v14; // [sp+1Ch] [bp-Ch]

  v1 = 1.0;
  v11 = 0;
  v10 = 0;
  v12[0] = 0xC8000000C8LL;
  v12[1] = 0xC8000000C8LL;
  v2 = 1;
  v13 = 200;
  v14 = 200;
  v9 = 1;
  this[6] = 1065353216;
  *this = 200;
  v3 = (float *)(this + 7);
  this[12] = 6;
  do
  {
    v4 = (float)(unsigned __int8)*(&v9 + v2);
    *(v3 - 6) = *((float *)v12 + v2++);
    v1 = v1 + v4;
    *v3++ = v1;
    v5 = this[12];
  }
  while ( v2 < v5 );
  if ( v5 >= 1 )
  {
    v6 = (float *)(this + 6);
    v7 = 0;
    v8 = 1.0 / v1;
    do
    {
      ++v7;
      *v6 = v8 * *v6;
      ++v6;
    }
    while ( v7 < this[12] );
  }
  return this;
}


// ============================================================
