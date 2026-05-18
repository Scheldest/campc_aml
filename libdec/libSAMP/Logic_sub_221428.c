// ADDR: 0x2214a4
// SYMBOL: sub_2214A4
unsigned int __fastcall sub_2214A4(
        unsigned int result,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int v7; // r6
  unsigned int v8; // r4
  unsigned int v9; // r9
  unsigned int v10; // r2
  char v11; // r0
  int v12; // r4
  char v13; // r0
  __int64 v14; // r0
  bool v15; // zf
  unsigned int v16; // lr
  unsigned int v17; // r1
  char v18; // r3
  unsigned int v19; // r0
  unsigned int v20; // r2
  unsigned int v21; // r11
  unsigned int v22; // r3
  unsigned int v23; // r0
  int v24; // r6
  int v25; // r7
  int v26; // r2
  int v27; // r5

  v7 = result;
  v8 = result;
  if ( !a2 )
  {
    if ( a4 )
    {
      if ( !a5 )
        return 0;
      *a5 = result;
      a5[1] = 0;
      return 0;
    }
    LODWORD(v14) = sub_220A6C(result, a3);
    v15 = a5 == 0;
    v12 = v14;
    if ( a5 )
      v14 = v7 - (_DWORD)v14 * a3;
LABEL_37:
    if ( !v15 )
      *(_QWORD *)a5 = v14;
    return v12;
  }
  v9 = a2;
  if ( !a3 )
  {
    if ( !a4 )
      return result;
    if ( result )
    {
      if ( (a4 & (a4 - 1)) == 0 )
      {
        if ( a5 )
          a2 &= a4 - 1;
        v11 = __clz(__rbit32(a4));
        if ( a5 )
        {
          *a5 = v8;
          a5[1] = a2;
        }
        return v9 >> v11;
      }
      v23 = __clz(a4) - __clz(a2);
      if ( v23 >= 0x1F )
        goto LABEL_5;
      v16 = v23 + 1;
      v22 = v7 << (31 - v23);
      v20 = (a2 << (31 - v23)) | (v7 >> (v23 + 1));
      v21 = a2 >> (v23 + 1);
      v17 = 0;
      goto LABEL_46;
    }
    LODWORD(v14) = sub_220A6C(a2, a4);
    v12 = v14;
    v15 = a5 == 0;
    if ( a5 )
    {
      HIDWORD(v14) = v9 - v14 * a4;
      LODWORD(v14) = 0;
    }
    goto LABEL_37;
  }
  if ( a4 )
  {
    v10 = __clz(a4) - __clz(a2);
    if ( v10 >= 0x20 )
    {
LABEL_5:
      if ( a5 )
      {
        *a5 = v8;
        a5[1] = a2;
      }
      return 0;
    }
    v16 = v10 + 1;
    v17 = 0;
    if ( v10 != 31 )
    {
      v18 = 31 - v10;
LABEL_44:
      v21 = v9 >> v16;
      v20 = (v9 << v18) | (v7 >> v16);
      v22 = v7 << v18;
      goto LABEL_46;
    }
LABEL_34:
    v16 = 32;
    v20 = v9;
    v21 = 0;
    v22 = v7;
    goto LABEL_46;
  }
  if ( (a3 & (a3 - 1)) == 0 )
  {
    if ( a5 )
      *(_QWORD *)a5 = (a3 - 1) & result;
    if ( a3 != 1 )
    {
      v13 = __clz(__rbit32(a3));
      return ((2 * a2) << (~v13 & 0x1F)) | (v7 >> (v13 & 0x1F));
    }
    return v8;
  }
  v19 = __clz(a3) - __clz(a2);
  v17 = 0;
  v16 = v19 + 33;
  if ( v19 == -1 )
    goto LABEL_34;
  if ( v16 <= 0x1F )
  {
    v18 = -1 - v19;
    goto LABEL_44;
  }
  v21 = 0;
  v22 = (v9 << (31 - v19)) | (v7 >> (v19 + 1));
  v20 = v9 >> (v19 + 1);
  v17 = v7 << (31 - v19);
LABEL_46:
  v24 = 0;
  do
  {
    v25 = (2 * v21) | (v20 >> 31);
    v26 = (2 * v20) | (v22 >> 31);
    v27 = a4 + __CFADD__(~v26, a3) + ~v25;
    v21 = (__PAIR64__(v25, v26) - __PAIR64__(a4 & (v27 >> 31), a3 & (v27 >> 31))) >> 32;
    v20 = v26 - (a3 & (v27 >> 31));
    v22 = (2 * v22) | (v17 >> 31);
    v17 = v24 | (2 * v17);
    --v16;
    v24 = (v27 >> 31) & 1;
  }
  while ( v16 );
  if ( a5 )
  {
    *a5 = v20;
    a5[1] = v21;
  }
  return (2 * v17) | (v27 >> 31) & 1;
}


// ======================================================================
