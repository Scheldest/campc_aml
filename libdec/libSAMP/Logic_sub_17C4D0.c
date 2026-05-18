// ADDR: 0x17c5b0
// SYMBOL: sub_17C5B0
int __fastcall sub_17C5B0(int a1, unsigned __int8 *a2, int *a3)
{
  unsigned int v5; // r2
  unsigned int v7; // r1
  int v8; // r0
  unsigned int v9; // r5
  unsigned __int8 *v10; // r2
  unsigned int v11; // r3

  v5 = *a2;
  v7 = *((_DWORD *)a2 + 1);
  if ( !(v5 << 31) )
    v7 = v5 >> 1;
  v8 = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)a1 + 704))(a1, v7);
  *a3 = v8;
  v9 = *a2;
  v10 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
  v11 = *((_DWORD *)a2 + 1);
  if ( (v9 & 1) == 0 )
  {
    v10 = a2 + 1;
    v11 = v9 >> 1;
  }
  return (*(int (__fastcall **)(int, int, _DWORD, unsigned int, unsigned __int8 *))(*(_DWORD *)a1 + 832))(
           a1,
           v8,
           0,
           v11,
           v10);
}


// ======================================================================
