// ADDR: 0x185648
// SYMBOL: sub_185648
char *__fastcall sub_185648(__int64 *a1, __int64 *a2, __int64 *a3)
{
  char *result; // r0
  unsigned int v6; // r2
  unsigned int v7; // r1
  unsigned int v9; // r2
  unsigned int v10; // r1
  char *v12; // r1
  char *v14; // r1
  __int64 v16; // d16
  __int64 v17; // d17
  __int64 v18; // d18
  __int64 v19; // d19
  __int64 *v20; // r6
  __int64 *v21; // r8
  __int64 v22[6]; // [sp+0h] [bp-30h] BYREF

  sub_184D9C(a1, a2, (int)a3);
  if ( !*(_DWORD *)a3 )
  {
    result = (char *)a3 + 4;
    v6 = 0;
    do
    {
      v7 = v6;
      if ( v6 == 7 )
        break;
    }
    while ( !*(_DWORD *)&result[4 * v6++] );
    if ( v7 >= 7 )
    {
      v16 = *a2;
      v17 = a2[1];
      v20 = a2 + 2;
      v18 = *v20;
      v19 = v20[1];
LABEL_24:
      *a3 = v16;
      a3[1] = v17;
      v21 = a3 + 2;
      *v21 = v18;
      v21[1] = v19;
      return result;
    }
  }
  sub_184D9C(a2, a3, (int)v22);
  if ( LODWORD(v22[0]) )
    goto LABEL_15;
  result = (char *)v22 + 4;
  v9 = 0;
  do
  {
    v10 = v9;
    if ( v9 == 7 )
      break;
  }
  while ( !*((_DWORD *)v22 + ++v9) );
  if ( v10 <= 6 )
  {
LABEL_15:
    while ( 1 )
    {
      sub_184D9C(a3, v22, (int)a3);
      if ( !*(_DWORD *)a3 )
      {
        v12 = 0;
        do
        {
          result = v12;
          if ( v12 == &byte_7 )
            break;
        }
        while ( !*((_DWORD *)a3 + (_DWORD)v12++ + 1) );
        if ( (unsigned int)result >= 7 )
          break;
      }
      sub_184D9C(v22, a3, (int)v22);
      if ( !LODWORD(v22[0]) )
      {
        v14 = 0;
        do
        {
          result = v14;
          if ( v14 == &byte_7 )
            break;
        }
        while ( !*((_DWORD *)v22 + (_DWORD)v14++ + 1) );
        if ( (unsigned int)result >= 7 )
          return result;
      }
    }
    v16 = v22[0];
    v17 = v22[1];
    v18 = v22[2];
    v19 = v22[3];
    goto LABEL_24;
  }
  return result;
}


// ======================================================================
