// ADDR: 0x21fe70
// SYMBOL: sub_21FE70
int __fastcall sub_21FE70(int a1, _DWORD *a2, unsigned int a3, unsigned int a4, _BYTE *a5)
{
  _BYTE *v7; // r5
  _BYTE *v10; // r0
  unsigned int i; // r6
  int v12; // r5
  unsigned int v13; // r4
  _BYTE *v14; // r1
  bool v15; // cf
  int v16; // r0
  int v17; // r0
  unsigned int v18; // r4
  int v19; // r0
  unsigned int v21; // r0
  _DWORD *v22; // [sp+0h] [bp-20h]

  v7 = &unk_384168;
  if ( a5 )
    v7 = a5;
  if ( a3 && (v7[2] || v7[1] || *v7) && *(char *)*a2 >= 0 )
  {
LABEL_8:
    v10 = v7;
    goto LABEL_9;
  }
  if ( !a1 )
  {
    v18 = 0;
    i = 0;
    while ( v18 < a3 )
    {
      if ( *(char *)(*a2 + v18) < 0 )
      {
        v19 = sub_21FE54(0, *a2 + v18, a3 - v18, v7);
        switch ( v19 )
        {
          case -2:
            goto LABEL_8;
          case 0:
            goto LABEL_31;
          case -1:
            goto LABEL_8;
        }
      }
      else
      {
        if ( !*(_BYTE *)(*a2 + v18) )
          break;
        v19 = 1;
      }
      v18 += v19;
      ++i;
    }
LABEL_31:
    *(_DWORD *)v7 = 0;
    return i;
  }
  v22 = v7;
  v12 = 0;
  v13 = 0;
  for ( i = 0; ; ++i )
  {
    v14 = (_BYTE *)(*a2 + v13);
    v15 = v13 >= a3;
    if ( v13 < a3 )
      v15 = i >= a4;
    if ( v15 )
    {
      *a2 = v14;
      *v22 = 0;
      return i;
    }
    v16 = (char)*v14;
    if ( v16 >= 0 )
    {
      *(_DWORD *)(a1 + 4 * i) = (unsigned __int8)v16;
      if ( !*v14 )
        goto LABEL_33;
      v17 = 1;
      goto LABEL_21;
    }
    v17 = sub_21FE54(a1 + v12, (int)v14, a3 - v13, v22);
    if ( v17 == -2 )
    {
      v21 = *a2 + a3;
      goto LABEL_37;
    }
    if ( !v17 )
    {
LABEL_33:
      *a2 = 0;
      *v22 = 0;
      return i;
    }
    if ( v17 == -1 )
      break;
LABEL_21:
    v13 += v17;
    v12 += 4;
  }
  v21 = *a2 + v13;
LABEL_37:
  *a2 = v21;
  v10 = v22;
LABEL_9:
  sub_21FF78(v10);
  return -1;
}


// ======================================================================
