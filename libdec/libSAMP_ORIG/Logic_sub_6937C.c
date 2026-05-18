// ADDR: 0x7acac
// SYMBOL: sub_7ACAC
_DWORD *__fastcall sub_7ACAC(_DWORD *result)
{
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  return result;
}


// ======================================================================
// ADDR: 0x7acb8
// SYMBOL: sub_7ACB8
int __fastcall sub_7ACB8(_DWORD *a1)
{
  __int64 v2; // kr00_8
  int v3; // r5
  int v4; // r6
  char v6[8]; // [sp+Ch] [bp-224h] BYREF
  char v7[512]; // [sp+14h] [bp-21Ch] BYREF
  int v8; // [sp+214h] [bp-1Ch]

  a1[3] = a1[2];
  sub_698B0();
  if ( *(_DWORD *)(dword_1A4408 + 2350836) )
  {
    sub_74B78(dword_1A4434);
    a1[1] = 0;
    sub_7ADA8(a1);
    v2 = *((_QWORD *)a1 + 1);
    sub_87F98(v7, dword_1A4434, 512);
    sub_69554(dword_1A41D8, v7);
    if ( (unsigned __int16)((unsigned int)(HIDWORD(v2) - v2) >> 2) )
    {
      v3 = 0;
      do
      {
        sub_7B1EC(v6);
        v4 = *(_DWORD *)(a1[2] + 4 * v3);
        sub_696C8(dword_1A41D8, *(_DWORD *)v4, *(const char **)(v4 + 4), *(_DWORD *)(v4 + 8), *(_DWORD *)(v4 + 12), v6);
        ++v3;
      }
      while ( (unsigned __int16)((unsigned int)(HIDWORD(v2) - v2) >> 2) != v3 );
    }
  }
  return v8;
}


// ======================================================================
// ADDR: 0x7b240
// SYMBOL: sub_7B240
int __fastcall sub_7B240(int a1)
{
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 8);
  sub_698B0();
  return sub_69554(dword_1A41D8, &byte_4FDB8);
}


// ======================================================================
