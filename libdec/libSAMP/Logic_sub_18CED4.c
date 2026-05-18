// ADDR: 0x18cf2c
// SYMBOL: sub_18CF2C
int __fastcall sub_18CF2C(int a1, int *a2, _DWORD *a3)
{
  int result; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r0
  _DWORD v10[2]; // [sp+4h] [bp-1Ch] BYREF
  _BYTE v11[17]; // [sp+Fh] [bp-11h] BYREF

  if ( *(_BYTE *)(a1 + 20) && *a2 == *(_DWORD *)(a1 + 16) )
  {
    result = *(_DWORD *)a1 + 8 * *(_DWORD *)(a1 + 12);
    *(_DWORD *)(result + 4) = *a3;
  }
  else
  {
    v7 = sub_18D136(a1, a2, v11);
    if ( v11[0] )
    {
      *(_DWORD *)(a1 + 12) = v7;
      *(_BYTE *)(a1 + 20) = 1;
      result = *(_DWORD *)a1 + 8 * v7;
      v8 = *a3;
      *(_DWORD *)(a1 + 16) = *a2;
      *(_DWORD *)(result + 4) = v8;
    }
    else
    {
      v9 = *a3;
      v10[0] = *a2;
      v10[1] = v9;
      *(_DWORD *)(a1 + 12) = sub_18D180(a1, a2, v10);
      result = *a2;
      *(_BYTE *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = result;
    }
  }
  return result;
}


// ======================================================================
