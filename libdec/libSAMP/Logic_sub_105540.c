// ADDR: 0xf8ec0
// SYMBOL: sub_F8EC0
_DWORD *__fastcall sub_F8EC0(int a1, int a2)
{
  _DWORD *result; // r0

  result = *(_DWORD **)(a1 + 4);
  if ( result )
  {
    if ( *result != dword_23DF24 + 6716708 )
      result[7] = a2 + (result[7] & 0xFFFFFFFE);
  }
  return result;
}


// ======================================================================
// ADDR: 0x102390
// SYMBOL: sub_102390
int __fastcall sub_102390(int result, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v6; // r9
  int v7; // r8
  int *v10; // r4
  int v11; // r0

  if ( a3 <= 15 )
  {
    v6 = (_DWORD *)(result + 4 * a3);
    v7 = result;
    v10 = v6 + 11;
    if ( v6[11] )
    {
      sub_108CB8();
      *v10 = 0;
    }
    if ( a2 < 1 )
    {
      if ( a2 )
        goto LABEL_8;
      v11 = dword_25B204;
      if ( !dword_25B204 )
      {
        v11 = sub_1085C0("blanktex", "blanktex");
        dword_25B204 = v11;
      }
    }
    else
    {
      v11 = sub_1085C0(a4, a5);
    }
    *v10 = v11;
LABEL_8:
    result = 1;
    v6[27] = a6;
    *(_BYTE *)(v7 + 236) = 1;
    v6[43] = 1;
  }
  return result;
}


// ======================================================================
// ADDR: 0x105640
// SYMBOL: sub_105640
int __fastcall sub_105640(int result, unsigned int a2)
{
  int v2; // r5
  _BYTE *v4; // r6
  unsigned int v5; // r1
  int v6; // r0
  _DWORD *v7; // r8
  _QWORD *v8; // r0
  _QWORD *v9; // r0
  _QWORD *v10; // r0

  if ( a2 <= 9 )
  {
    v2 = result;
    v4 = (_BYTE *)(result + a2 + 116);
    result = (unsigned __int8)*v4;
    if ( *v4 )
    {
      v5 = v2 + 4 * a2;
      v6 = *(_DWORD *)(v5 + 648);
      if ( v6 )
      {
        v7 = (_DWORD *)(v5 + 648);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
        *v7 = 0;
      }
      v8 = (_QWORD *)(v2 + 52 * a2 + 128);
      *v8 = 0LL;
      v8[1] = 0LL;
      v9 = (_QWORD *)(v2 + 52 * a2 + 144);
      *v9 = 0LL;
      v9[1] = 0LL;
      v10 = (_QWORD *)(v2 + 52 * a2 + 160);
      *v10 = 0LL;
      v10[1] = 0LL;
      result = v2 + 52 * a2 + 176;
      *(_DWORD *)result = 0;
      *v4 = 0;
    }
  }
  return result;
}


// ======================================================================
