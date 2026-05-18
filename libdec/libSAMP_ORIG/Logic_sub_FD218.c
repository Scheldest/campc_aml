// ADDR: 0xfd404
// SYMBOL: sub_FD404
int __fastcall sub_FD404(_DWORD *a1, int *a2)
{
  int v4; // r6
  int v5; // r5
  int v6; // r0
  int v7; // r1
  _DWORD *v8; // r0
  _DWORD v10[10]; // [sp+0h] [bp-28h] BYREF

  v4 = sub_FD49C(a1, ((a1[1] - *a1) >> 2) + 1);
  v10[4] = a1 + 2;
  v5 = (a1[1] - *a1) >> 2;
  if ( v4 )
    v6 = operator new(4 * v4);
  else
    v6 = 0;
  v10[3] = v6 + 4 * v4;
  v7 = *a2;
  v10[0] = v6;
  v8 = (_DWORD *)(v6 + 4 * v5);
  v10[1] = v8;
  *v8 = v7;
  v10[2] = v8 + 1;
  sub_FD4CC(a1, v10);
  sub_FD4FC(v10);
  return v10[5];
}


// ======================================================================
