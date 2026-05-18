// ADDR: 0x14f898
// SYMBOL: sub_14F898
int __fastcall sub_14F898(int a1, unsigned int a2, unsigned __int8 *a3)
{
  int result; // r0
  _BYTE *v6; // r9
  int v8; // r5
  unsigned int v9; // r0
  unsigned __int8 *v10; // r1
  unsigned int v11; // r2
  unsigned __int8 *v12; // r5
  double v13; // d16
  int v14; // r2
  __int64 v15; // d16
  __int64 v16; // d17
  double v17; // [sp+0h] [bp-28h] BYREF
  int v18; // [sp+8h] [bp-20h]

  result = 0;
  if ( !(a2 >> 11) )
  {
    v6 = (_BYTE *)(a1 + a2 + 81920);
    if ( *v6 )
    {
      v8 = a1 + 40 * a2;
      std::string::assign(v8, &byte_8F794);
      *(_QWORD *)(v8 + 12) = 0LL;
      *(_QWORD *)(v8 + 20) = 0LL;
      *(_DWORD *)(v8 + 34) = 0;
      *(_DWORD *)(v8 + 29) = 0;
      *(_DWORD *)(v8 + 25) = 0;
    }
    v9 = *a3;
    v10 = (unsigned __int8 *)*((_DWORD *)a3 + 2);
    v11 = *((_DWORD *)a3 + 1);
    if ( (v9 & 1) == 0 )
    {
      v10 = a3 + 1;
      v11 = v9 >> 1;
    }
    sub_164D04(&v17, v10, v11);
    v12 = (unsigned __int8 *)(a1 + 40 * a2);
    if ( *v12 << 31 )
      operator delete(*((void **)v12 + 2));
    v13 = v17;
    *((_DWORD *)v12 + 2) = v18;
    *(double *)v12 = v13;
    v14 = *(_DWORD *)(a3 + 34);
    *((_DWORD *)v12 + 3) = *((_DWORD *)a3 + 3);
    v15 = *((_QWORD *)a3 + 2);
    v16 = *((_QWORD *)a3 + 3);
    *v6 = 1;
    *(_DWORD *)(v12 + 34) = v14;
    *((_QWORD *)v12 + 2) = v15;
    *((_QWORD *)v12 + 3) = v16;
    result = a3[32];
    v12[32] = result;
  }
  return result;
}


// ======================================================================
