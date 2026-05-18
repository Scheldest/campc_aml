// ADDR: 0x1515d0
// SYMBOL: sub_1515D0
int __fastcall sub_1515D0(int a1, int *a2)
{
  int v2; // r4
  _DWORD *v3; // r5
  int v4; // r0
  void *v6; // [sp+4h] [bp-14h] BYREF
  char v7; // [sp+Ch] [bp-Ch]

  v2 = *a2;
  sub_15160A(&v6, a1);
  v3 = v6;
  v6 = 0;
  if ( v3 )
  {
    if ( v7 )
    {
      v4 = v3[3];
      v3[3] = 0;
      if ( v4 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
    }
    operator delete(v3);
  }
  return v2;
}


// ======================================================================
