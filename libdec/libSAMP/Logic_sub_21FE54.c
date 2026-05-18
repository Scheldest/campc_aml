// ADDR: 0x220100
// SYMBOL: sub_220100
int __fastcall sub_220100(unsigned int *a1, char *a2, unsigned int a3, char *a4)
{
  char *v4; // r4
  int *v5; // r0
  int v6; // r1
  unsigned int v7; // r9
  unsigned int *v9; // r10
  char *v10; // r0
  int v11; // r1
  int v12; // r1
  unsigned int v13; // r9
  char *v14; // r5
  char v15; // r5
  unsigned int v16; // r12
  char v17; // lr
  int v18; // r8
  char *v19; // r3
  unsigned int v20; // r5
  char v21; // r1
  int v22; // r5
  char *v23; // r3
  unsigned int v24; // r2
  char v25; // t1

  v4 = (char *)&unk_384174;
  if ( a4 )
    v4 = a4;
  if ( v4[3] )
  {
    v5 = (int *)_errno(a1);
    v6 = 22;
LABEL_5:
    *v5 = v6;
    *(_DWORD *)v4 = 0;
    return -1;
  }
  v9 = a1;
  if ( !a2 )
    v9 = 0;
  v10 = &byte_8F794;
  if ( a2 )
    v10 = a2;
  else
    a3 = 1;
  if ( !a3 )
    return 0;
  v11 = *(_DWORD *)v4;
  if ( !*(_DWORD *)v4 )
  {
    v13 = (unsigned __int8)*v10;
    if ( (v13 & 0x80) == 0 )
    {
      if ( v9 )
        *v9 = v13;
      return v13 != 0;
    }
    goto LABEL_26;
  }
  if ( (v11 & 0xFF0000) == 0 )
  {
    if ( (v11 & 0xFF00) != 0 )
    {
      v12 = 2;
      goto LABEL_25;
    }
    if ( v11 << 24 )
    {
      v12 = 1;
      goto LABEL_25;
    }
LABEL_26:
    v12 = 0;
    v14 = v10;
    goto LABEL_27;
  }
  v12 = 3;
LABEL_25:
  v14 = v4;
LABEL_27:
  v15 = *v14;
  if ( (v15 & 0xE0) == 0xC0 )
  {
    v16 = 128;
    v17 = 31;
    v18 = 2;
  }
  else if ( (v15 & 0xF0) == 0xE0 )
  {
    v16 = 2048;
    v17 = 15;
    v18 = 3;
  }
  else
  {
    if ( (v15 & 0xF8) != 0xF0 )
    {
LABEL_48:
      v5 = (int *)_errno(v10);
      v6 = 84;
      goto LABEL_5;
    }
    v16 = 0x10000;
    v17 = 7;
    v18 = 4;
  }
  v19 = &v4[v12];
  v7 = v18 - v12;
  v20 = a3;
  if ( v18 - v12 < a3 )
    v20 = v18 - v12;
  while ( v20 )
  {
    v21 = *v10;
    if ( *(_DWORD *)v4 && (v21 & 0xC0) != 0x80 )
    {
      v7 = -1;
      *(_DWORD *)_errno(v10) = 84;
      *(_DWORD *)v4 = 0;
      return v7;
    }
    *v19++ = v21;
    --v20;
    ++v10;
  }
  if ( v7 > a3 )
    return -2;
  v22 = v18 - 1;
  v23 = v4 + 1;
  v24 = (unsigned __int8)(v17 & *v4);
  while ( v22 )
  {
    v25 = *v23++;
    --v22;
    v24 = v25 & 0x3F | (v24 << 6);
  }
  if ( v24 < v16 || (v24 & 0xFFFFF800) == 0xD800 || v24 >= 0x110000 )
    goto LABEL_48;
  if ( v9 )
    *v9 = v24;
  *(_DWORD *)v4 = 0;
  return v7;
}


// ======================================================================
