// ADDR: 0x150a20
// SYMBOL: sub_150A20
int __fastcall sub_150A20(int a1, int a2)
{
  int v4; // r1
  _DWORD v6[4]; // [sp+0h] [bp-28h] BYREF
  _DWORD *v7; // [sp+10h] [bp-18h]

  v7 = v6;
  v6[1] = a2;
  v6[0] = &off_22F224;
  sub_150A8C(a1, v6);
  if ( v6 == v7 )
  {
    v4 = 4;
    goto LABEL_5;
  }
  if ( v7 )
  {
    v4 = 5;
LABEL_5:
    (*(void (**)(void))(*v7 + 4 * v4))();
  }
  return sub_150AF6(a1 + 36, a2);
}


// ======================================================================
// ADDR: 0x15b720
// SYMBOL: sub_15B720
int sub_15B720(const char *a1, _DWORD *a2, ...)
{
  char v3[2055]; // [sp+1h] [bp-807h] BYREF

  sub_15B2DC((int)v3, (int)a2, a1, *a2);
  return sub_159B70(3, v3);
}


// ======================================================================
