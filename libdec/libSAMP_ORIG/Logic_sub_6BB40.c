// ADDR: 0x75370
// SYMBOL: sub_75370
int __fastcall sub_75370(int result, char *a2, int a3, char *a4, int a5, char a6)
{
  int *v6; // r10
  int v10; // r5
  unsigned int v11; // r4
  _DWORD **v12; // r0
  __int64 v13; // kr00_8
  int v14; // r1

  if ( a2 )
  {
    v6 = (int *)result;
    result = (unsigned __int8)*a2;
    if ( *a2 )
    {
      v10 = operator new(0x24u);
      *(_DWORD *)v10 = 0;
      *(_DWORD *)(v10 + 4) = 0;
      *(_DWORD *)(v10 + 8) = 0;
      *(_DWORD *)(v10 + 20) = 0;
      *(_DWORD *)(v10 + 24) = 0;
      *(_DWORD *)(v10 + 16) = 0;
      std::string::assign(v10, a2);
      *(_DWORD *)(v10 + 12) = a3;
      std::string::assign(v10 + 16, a4);
      v11 = v6[2];
      *(_BYTE *)(v10 + 32) = a6;
      *(_DWORD *)(v10 + 28) = a5;
      if ( v11 >= 5 )
      {
        v12 = (_DWORD **)v6[1];
        v6[2] = v11 - 1;
        v13 = *(_QWORD *)v12;
        *(_DWORD *)(v13 + 4) = HIDWORD(v13);
        *v12[1] = v13;
        operator delete(v12);
        v11 = v6[2];
      }
      result = operator new(0xCu);
      v14 = *v6;
      v6[2] = v11 + 1;
      *v6 = result;
      *(_DWORD *)result = v14;
      *(_DWORD *)(result + 4) = v6;
      *(_DWORD *)(result + 8) = v10;
      *(_DWORD *)(v14 + 4) = result;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x88a34
// SYMBOL: sub_88A34
int __fastcall sub_88A34(float *a1)
{
  float v1; // s4
  float v2; // s8
  float v3; // s2
  float v4; // s10
  float v5; // s6
  float v6; // s12
  float v7; // s14
  float v8; // s1

  v1 = a1[1];
  v2 = a1[3];
  v3 = *a1;
  v4 = v1;
  v5 = a1[2];
  v6 = v2;
  v7 = *a1;
  v8 = v5;
  if ( v1 > 1.0 )
    v4 = 1.0;
  if ( v2 > 1.0 )
    v6 = 1.0;
  if ( v3 > 1.0 )
    v7 = 1.0;
  if ( v5 > 1.0 )
    v8 = 1.0;
  if ( v1 < 0.0 )
    v4 = 0.0;
  if ( v2 < 0.0 )
    v6 = 0.0;
  if ( v3 < 0.0 )
    v7 = 0.0;
  if ( v5 < 0.0 )
    v8 = 0.0;
  return (int)(float)((float)(v7 * 255.0) + 0.5) | ((int)(float)((float)(v4 * 255.0) + 0.5) << 8) | ((int)(float)((float)(v8 * 255.0) + 0.5) << 16) | ((int)(float)((float)(v6 * 255.0) + 0.5) << 24);
}


// ======================================================================
