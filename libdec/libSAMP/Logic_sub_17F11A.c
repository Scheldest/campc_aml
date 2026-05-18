// ADDR: 0x182010
// SYMBOL: sub_182010
int __fastcall sub_182010(_DWORD *a1, int a2)
{
  int v4; // r5
  int v5; // r0
  void *v6; // r0
  int v7; // r0
  void *v8; // r0

  v4 = (*(int (__fastcall **)(_DWORD *))(*a1 + 44))(a1);
  if ( !v4 )
  {
    if ( a2 )
    {
      v5 = a1[489];
      if ( v5 )
      {
        v6 = (void *)sub_17DADE(v5);
        operator delete(v6);
        a1[489] = 0;
      }
    }
    else
    {
      v7 = a1[490];
      if ( v7 )
      {
        v8 = (void *)sub_17DADE(v7);
        operator delete(v8);
        a1[490] = 0;
      }
    }
  }
  return v4 ^ 1;
}


// ======================================================================
