// ADDR: 0xffb40
// SYMBOL: sub_FFB40
int __fastcall sub_FFB40(int result, _BYTE *a2, _BYTE *a3)
{
  size_t v3; // r5
  _DWORD *v5; // r4

  v3 = a3 - a2;
  if ( a3 != a2 )
  {
    v5 = (_DWORD *)result;
    sub_FE162(result, a3 - a2);
    j_memmove((void *)(*v5 + v5[1]), a2, v3);
    result = v5[1] + v3;
    v5[1] = result;
  }
  return result;
}


// ======================================================================
