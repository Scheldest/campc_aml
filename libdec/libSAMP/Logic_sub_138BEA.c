// ADDR: 0x138cd2
// SYMBOL: sub_138CD2
unsigned int __fastcall sub_138CD2(int a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  unsigned int v3; // r0
  unsigned int v4; // r3
  size_t v5; // r4
  int v6; // lr
  size_t v7; // r5
  int v8; // r6
  size_t v9; // r3
  const void *v10; // r0
  const void *v11; // r12
  unsigned int v12; // r0

  v3 = *a3;
  v4 = *a2;
  v5 = *((_DWORD *)a3 + 1);
  v6 = v3 & 1;
  v7 = *((_DWORD *)a2 + 1);
  if ( (v3 & 1) == 0 )
    v5 = v3 >> 1;
  v8 = v4 & 1;
  if ( (v4 & 1) == 0 )
    v7 = v4 >> 1;
  v9 = v7;
  if ( v5 < v7 )
    v9 = v5;
  if ( !v9 )
    goto LABEL_13;
  v10 = (const void *)*((_DWORD *)a2 + 2);
  v11 = (const void *)*((_DWORD *)a3 + 2);
  if ( !v8 )
    v10 = a2 + 1;
  if ( !v6 )
    v11 = a3 + 1;
  v12 = memcmp(v10, v11, v9);
  if ( !v12 )
  {
LABEL_13:
    v12 = v5 < v7;
    if ( v7 < v5 )
      v12 = -1;
  }
  return v12 >> 31;
}


// ======================================================================
