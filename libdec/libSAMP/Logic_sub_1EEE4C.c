// ADDR: 0x1eee22
// SYMBOL: sub_1EEE22
void **__fastcall sub_1EEE22(void **a1)
{
  sub_1EEE38();
  if ( *a1 )
    operator delete(*a1);
  return a1;
}


// ======================================================================
// ADDR: 0x1eee78
// SYMBOL: sub_1EEE78
int __fastcall sub_1EEE78(_DWORD *a1)
{
  int v2; // r2
  int v3; // r3
  _DWORD *v4; // r0
  void **i; // r0
  unsigned int v6; // r1
  int v7; // r0
  _BYTE v9[4]; // [sp+4h] [bp-1Ch] BYREF
  _DWORD *v10; // [sp+8h] [bp-18h]
  _DWORD *v11; // [sp+Ch] [bp-14h] BYREF
  _DWORD *v12; // [sp+10h] [bp-10h]
  int v13; // [sp+14h] [bp-Ch]

  sub_1EEF10(&v11, a1);
  sub_1EEF50(v9, a1);
  v4 = v12;
  while ( v4 != v10 )
  {
    sub_1EDFDC(v4, (int)v10, v2, v3);
    v4 = v12 + 18;
    v12 = v4;
    v2 = (int)v4 - *v11;
    if ( v2 == 4032 )
    {
      v4 = (_DWORD *)v11[1];
      ++v11;
      v12 = v4;
    }
  }
  a1[5] = 0;
  for ( i = (void **)a1[1]; ; a1[1] = i )
  {
    v6 = a1[2] - (_DWORD)i;
    if ( v6 < 9 )
      break;
    operator delete(*i);
    i = (void **)(a1[1] + 4);
  }
  if ( v6 >> 2 == 1 )
  {
    v7 = 28;
    goto LABEL_13;
  }
  if ( v6 >> 2 == 2 )
  {
    v7 = 56;
LABEL_13:
    a1[4] = v7;
  }
  return v13;
}


// ======================================================================
