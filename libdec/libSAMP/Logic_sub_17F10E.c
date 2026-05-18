// ADDR: 0x181faa
// SYMBOL: sub_181FAA
int __fastcall sub_181FAA(_DWORD *a1, int a2, int a3)
{
  int v6; // r5
  int *v7; // r9

  v6 = (*(int (__fastcall **)(_DWORD *))(*a1 + 44))(a1);
  if ( !v6 )
  {
    (*(void (__fastcall **)(_DWORD *, int))(*a1 + 224))(a1, a3);
    v7 = (int *)operator new(0x804u);
    sub_17DAD8(v7);
    if ( a3 )
      a1[489] = v7;
    else
      a1[490] = v7;
    sub_17DC88(v7, a2);
  }
  return v6 ^ 1;
}


// ======================================================================
