
// Address: 0x189ebc
// Original: j__ZN10CPointList5EmptyEv
// Demangled: CPointList::Empty(void)
// attributes: thunk
int __fastcall CPointList::Empty(CPointList *this)
{
  return _ZN10CPointList5EmptyEv(this);
}


// ============================================================

// Address: 0x54868c
// Original: _ZN10CPointList5EmptyEv
// Demangled: CPointList::Empty(void)
_QWORD *__fastcall CPointList::Empty(CPointList *this)
{
  _QWORD *result; // r0

  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 77) = 0;
  *(_DWORD *)this = 0;
  result = (_QWORD *)((char *)this + 292);
  *result = 0LL;
  result[1] = 0LL;
  return result;
}


// ============================================================

// Address: 0x5486a6
// Original: _ZN10CPointList8AddPointE7CVector
// Demangled: CPointList::AddPoint(CVector)
int *__fastcall CPointList::AddPoint(int *result, int a2, int a3, int a4)
{
  int v4; // r12
  int *v5; // r0

  v4 = *result;
  if ( *result <= 23 )
  {
    *result = v4 + 1;
    v5 = &result[3 * v4 + 1];
    *v5 = a2;
    v5[1] = a3;
    v5[2] = a4;
    return v5 + 3;
  }
  return result;
}


// ============================================================

// Address: 0x5486d0
// Original: _ZN10CPointList25MergeListsRemovingDoublesEPS_S0_
// Demangled: CPointList::MergeListsRemovingDoubles(CPointList*,CPointList*)
void __fastcall CPointList::MergeListsRemovingDoubles(CPointList *this, CPointList *a2, CPointList *a3)
{
  int v3; // lr
  int v4; // r3
  int v5; // r0
  float *v6; // r4
  float v7; // s2
  float v8; // s4
  float v9; // s6
  int v10; // r4
  float *v11; // r5
  float *v12; // r0

  v3 = *(_DWORD *)a3;
  if ( *(int *)a3 >= 1 )
  {
    v4 = 0;
    do
    {
      v5 = *(_DWORD *)a2;
      if ( *(int *)a2 > 23 )
        break;
      v6 = (float *)((char *)a3 + 12 * v4);
      v7 = v6[1];
      v8 = v6[2];
      v9 = v6[3];
      if ( v5 < 1 )
      {
LABEL_8:
        *(_DWORD *)a2 = v5 + 1;
        v12 = (float *)((char *)a2 + 12 * v5);
        v12[1] = v7;
        v12[2] = v8;
        v12[3] = v9;
        v3 = *(_DWORD *)a3;
      }
      else
      {
        v10 = 0;
        v11 = (float *)((char *)a2 + 8);
        while ( sqrtf(
                  (float)((float)((float)(*(v11 - 1) - v7) * (float)(*(v11 - 1) - v7))
                        + (float)((float)(*v11 - v8) * (float)(*v11 - v8)))
                + (float)((float)(v11[1] - v9) * (float)(v11[1] - v9))) >= 1.5 )
        {
          ++v10;
          v11 += 3;
          if ( v10 >= v5 )
            goto LABEL_8;
        }
      }
      ++v4;
    }
    while ( v4 < v3 );
  }
}


// ============================================================
