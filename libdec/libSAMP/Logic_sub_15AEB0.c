// ADDR: 0x150ba8
// SYMBOL: sub_150BA8
int __fastcall sub_150BA8(_DWORD *a1)
{
  int result; // r0
  int v3; // r1
  _DWORD *v4; // r5
  _DWORD *v5; // r6
  int v6; // t1
  _DWORD v7[4]; // [sp+0h] [bp-28h] BYREF
  _DWORD *v8; // [sp+10h] [bp-18h]

  v8 = v7;
  v7[0] = &off_22F26C;
  sub_150A8C(a1, (int)v7);
  result = (int)v8;
  if ( v7 == v8 )
  {
    v3 = 4;
  }
  else
  {
    if ( !v8 )
      goto LABEL_6;
    v3 = 5;
  }
  result = (*(int (**)(void))(*v8 + 4 * v3))();
LABEL_6:
  v5 = (_DWORD *)a1[10];
  v4 = (_DWORD *)a1[9];
  while ( v5 != v4 )
  {
    v6 = *--v5;
    result = v6;
    *v5 = 0;
    if ( v6 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
  }
  a1[10] = v4;
  return result;
}


// ======================================================================
