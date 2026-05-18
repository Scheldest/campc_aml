// ADDR: 0x17e820
// SYMBOL: sub_17E820
int __fastcall sub_17E820(__int64 *a1, int a2)
{
  int v3; // r0
  int v4; // r2
  __int64 v5; // kr00_8
  int v6; // r3
  _DWORD *v7; // r5
  int v8; // r5
  void *v9; // r0
  int result; // r0

  v5 = *a1;
  v3 = *((_DWORD *)a1 + 1);
  v4 = v5;
  if ( v3 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = *(_DWORD **)(v5 + 4 * v6);
      if ( v7 )
      {
        if ( *v7 == a2 )
          break;
      }
      if ( v3 == ++v6 )
        goto LABEL_6;
    }
    v8 = (unsigned __int8)v6;
  }
  else
  {
LABEL_6:
    v8 = 255;
  }
  v9 = *(void **)(v5 + 4 * v8);
  if ( v9 )
  {
    operator delete(v9);
    v4 = *(_DWORD *)a1;
  }
  result = 0;
  *(_DWORD *)(v4 + 4 * v8) = 0;
  return result;
}


// ======================================================================
