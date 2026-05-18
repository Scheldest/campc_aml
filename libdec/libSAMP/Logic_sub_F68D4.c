// ADDR: 0xf77be
// SYMBOL: sub_F77BE
int __fastcall sub_F77BE(int a1, int a2, int a3, int a4)
{
  int *v7; // r6
  int result; // r0
  char v9; // r1
  _DWORD v10[3]; // [sp+0h] [bp-20h] BYREF
  _DWORD v11[5]; // [sp+Ch] [bp-14h] BYREF

  v7 = (int *)sub_F7806(a2, v11);
  result = *v7;
  if ( *v7 )
  {
    v9 = 0;
  }
  else
  {
    sub_F7876(v10, a2, a4);
    sub_F78C4(a2, v11[0], v7, v10[0]);
    result = v10[0];
    v9 = 1;
  }
  *(_BYTE *)(a1 + 4) = v9;
  *(_DWORD *)a1 = result;
  return result;
}


// ======================================================================
