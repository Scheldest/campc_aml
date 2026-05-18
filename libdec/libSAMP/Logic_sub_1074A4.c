// ADDR: 0x108dc8
// SYMBOL: sub_108DC8
int __fastcall sub_108DC8(unsigned int a1)
{
  int v1; // r0

  if ( a1 <= 0x4E20 && (v1 = *(_DWORD *)(*(_DWORD *)(dword_23DF24 + 6788820) + 4 * a1)) != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 44))(v1);
  else
    return 0;
}


// ======================================================================
// ADDR: 0x108df8
// SYMBOL: sub_108DF8
int (**__fastcall sub_108DF8(int (**result)(void)))(void)
{
  int v1; // r1

  if ( result )
  {
    v1 = *(unsigned __int8 *)result;
    if ( v1 == 2 )
    {
      return (int (**)(void))((int (*)(void))(dword_23DF24 + 2179805))();
    }
    else if ( v1 == 1 )
    {
      return (int (**)(void))result[18]();
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x108e64
// SYMBOL: sub_108E64
_DWORD *__fastcall sub_108E64(unsigned int a1, _DWORD *a2)
{
  _DWORD *v2; // r0
  _DWORD *result; // r0

  if ( a1 <= 0x4E20 )
    v2 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_23DF24 + 6788820) + 4 * a1) + 44);
  else
    v2 = (_DWORD *)&word_2C;
  result = (_DWORD *)*v2;
  if ( result )
  {
    *a2 = result[6];
    a2[1] = result[7];
    result = (_DWORD *)result[8];
    a2[2] = result;
  }
  return result;
}


// ======================================================================
// ADDR: 0x108ea0
// SYMBOL: sub_108EA0
_DWORD *__fastcall sub_108EA0(_DWORD *result)
{
  _DWORD *v1; // r4
  char *v2; // r0

  if ( result )
  {
    v1 = result;
    result = &loc_2141EC;
    if ( *v1 == 2 )
    {
      v2 = (char *)&loc_21460C;
      return (_DWORD *)((int (__fastcall *)(_DWORD *))&v2[dword_23DF24])(v1);
    }
    if ( *v1 == 1 )
    {
      result = (_DWORD *)((int (__fastcall *)(_DWORD *))((char *)&loc_2141EC + dword_23DF24))(v1);
      v1 = (_DWORD *)v1[1];
      if ( v1 )
      {
        v2 = (_BYTE *)(&loc_1D846C + 1);
        return (_DWORD *)((int (__fastcall *)(_DWORD *))&v2[dword_23DF24])(v1);
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x10914c
// SYMBOL: sub_10914C
int __fastcall sub_10914C(int a1)
{
  int result; // r0

  result = *(_DWORD *)(dword_23DF24 + 10471736);
  if ( result )
    return ((int (__fastcall *)(int, int))(dword_23DF24 + 2222129))(result, a1);
  return result;
}


// ======================================================================
// ADDR: 0x109174
// SYMBOL: sub_109174
int __fastcall sub_109174(int a1)
{
  int result; // r0

  result = *(_DWORD *)(dword_23DF24 + 10471736);
  if ( result )
    return ((int (__fastcall *)(int, int))(dword_23DF24 + 2222197))(result, a1);
  return result;
}


// ======================================================================
