// ADDR: 0x13d48c
// SYMBOL: sub_13D48C
unsigned int __fastcall sub_13D48C(float *a1, int a2, unsigned __int8 *a3)
{
  unsigned int result; // r0
  unsigned int v6; // r2
  int v8; // r1
  unsigned int v9; // r3
  float v10; // s18
  int v11; // r0
  int v12; // r3
  unsigned int v13; // r2
  _BYTE *v14; // r4
  float v15; // s22
  float v16; // s20
  unsigned int v17; // r10
  float v18; // s16
  _BYTE *v19; // r2
  _BYTE *v20; // r6
  float v21; // [sp+0h] [bp-48h] BYREF
  float v22; // [sp+4h] [bp-44h]

  result = *((_DWORD *)a3 + 1);
  v6 = *a3;
  *a1 = 0.0;
  a1[1] = 0.0;
  v8 = v6 & 1;
  v9 = result;
  if ( (v6 & 1) == 0 )
    v9 = v6 >> 1;
  if ( v9 )
  {
    v10 = *(float *)(a2 + 116);
    if ( v10 == 0.0 )
    {
      v11 = sub_167F4C(result);
      v6 = *a3;
      v8 = v6 & 1;
      v12 = **(_DWORD **)(*(_DWORD *)(v11 + 140) + 60);
      result = *((_DWORD *)a3 + 1);
      v10 = *(float *)(v12 + 16);
    }
    v13 = v6 >> 1;
    v14 = (_BYTE *)*((_DWORD *)a3 + 2);
    v15 = 0.0;
    if ( v8 )
      v13 = result;
    else
      v14 = a3 + 1;
    v16 = 0.0;
    v17 = (unsigned int)&v14[v13];
    v18 = 0.0;
    v19 = v14;
    while ( 1 )
    {
      result = (unsigned __int8)*v14;
      if ( result <= 9 )
        break;
      if ( result == 10 )
      {
        if ( v14 != v19 )
        {
          sub_13D66C(&v21, a2);
          v16 = v16 + v21;
          if ( v18 == 0.0 )
            v18 = v22;
        }
        v19 = v14 + 1;
        if ( v15 >= v16 )
          v16 = v15;
        v18 = v10 + v18;
        *a1 = v16;
        v15 = v16;
        v16 = 0.0;
LABEL_31:
        v20 = v14;
        goto LABEL_32;
      }
      if ( result != 123 )
        goto LABEL_31;
      v20 = v14 + 7;
      if ( (unsigned int)(v14 + 7) >= v17 || *v20 != 125 )
        goto LABEL_31;
      if ( v14 != v19 )
      {
        sub_13D66C(&v21, a2);
        v16 = v16 + v21;
        if ( v18 == 0.0 )
          v18 = v22;
      }
      v19 = v14 + 8;
LABEL_32:
      v14 = v20 + 1;
    }
    if ( result == 9 )
    {
      if ( v14 != v19 )
      {
        sub_13D66C(&v21, a2);
        v16 = v16 + v21;
        if ( v18 == 0.0 )
          v18 = v22;
      }
      v16 = v10 + v16;
      v19 = v14 + 1;
    }
    else if ( !*v14 )
    {
      if ( v14 != v19 )
      {
        result = sub_13D66C(&v21, a2);
        v16 = v16 + v21;
        if ( v18 == 0.0 )
          v18 = v22;
      }
      if ( v18 <= 0.0 )
        v18 = 0.0;
      if ( v15 >= v16 )
        v16 = v15;
      *a1 = v16;
      a1[1] = v18;
      return result;
    }
    goto LABEL_31;
  }
  return result;
}


// ======================================================================
