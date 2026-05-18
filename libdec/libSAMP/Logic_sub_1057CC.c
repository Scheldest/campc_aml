// ADDR: 0x105984
// SYMBOL: sub_105984
int __fastcall sub_105984(int a1)
{
  int result; // r0
  int v3; // r5

  result = sub_F9124(a1);
  if ( result )
  {
    v3 = result;
    result = sub_F9164();
    if ( result != -1 )
      return sub_2242EC(a1 + 688, *(_DWORD *)(v3 + 8) + 4 * result, 64);
  }
  return result;
}


// ======================================================================
// ADDR: 0x1059b4
// SYMBOL: sub_1059B4
_DWORD *__fastcall sub_1059B4(int a1, int a2, int a3)
{
  _DWORD *result; // r0
  bool v6; // zf
  int v7; // r8
  int v8; // r1

  result = *(_DWORD **)(a1 + 92);
  if ( result )
  {
    v6 = *result == dword_23DF24 + 6716708;
    if ( *result != dword_23DF24 + 6716708 )
    {
      result = (_DWORD *)result[6];
      v6 = result == 0;
    }
    if ( !v6 )
    {
      v7 = ((int (*)(void))(dword_23DF24 + 6098977))();
      v8 = *(_DWORD *)(v7 + 8) + (((int (__fastcall *)(int, int))(dword_23DF24 + 1846417))(v7, a3) << 6);
      return (_DWORD *)sub_2242EC(a2, v8, 64);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x109038
// SYMBOL: sub_109038
int __fastcall sub_109038(int a1, int a2, int a3)
{
  return ((int (__fastcall *)(int, char *, int, int))(dword_23DF24 + 1980789))(a1, (char *)&unk_238E60 + 12 * a2, a3, 1);
}


// ======================================================================
// ADDR: 0x10906c
// SYMBOL: sub_10906C
int __fastcall sub_10906C(int result, float *a2)
{
  float v2; // s2
  float v3; // s8
  float v4; // s4
  float v5; // s10
  float v6; // s6
  float v7; // s0
  float v8; // s2
  float v9; // s0
  float v10; // s4
  float v11; // s2

  v2 = *(float *)(result + 4);
  v3 = *(float *)(result + 20);
  v4 = *(float *)(result + 8);
  v5 = *(float *)(result + 24);
  v6 = *(float *)(result + 16);
  *(float *)result = *a2 * *(float *)result;
  v7 = *a2 * v4;
  *(float *)(result + 4) = *a2 * v2;
  v8 = a2[1];
  *(float *)(result + 8) = v7;
  v9 = *(float *)(result + 32);
  *(float *)(result + 20) = v8 * v3;
  v10 = a2[1];
  *(float *)(result + 16) = v8 * v6;
  *(float *)(result + 24) = v10 * v5;
  v11 = a2[2];
  *(_DWORD *)(result + 12) &= 0xFFFDFFFC;
  *(float *)(result + 32) = v11 * v9;
  *(float *)(result + 36) = v11 * *(float *)(result + 36);
  *(float *)(result + 40) = v11 * *(float *)(result + 40);
  return result;
}


// ======================================================================
