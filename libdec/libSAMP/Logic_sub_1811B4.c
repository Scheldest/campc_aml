// ADDR: 0x182454
// SYMBOL: sub_182454
int __fastcall sub_182454(_DWORD *a1, int a2, char *a3)
{
  int v4; // r0
  int v6; // r4
  int v8; // r5
  int v9; // r6
  int v10; // r0
  char v11; // r0

  v4 = a1[1];
  if ( v4 )
  {
    v6 = v4 - 1;
    v8 = 0;
    v9 = v4 / 2;
    while ( 1 )
    {
      v10 = sub_17F694(a2, *a1 + 12 * v9);
      if ( !v10 )
        break;
      if ( v10 >= 0 )
        v8 = v9 + 1;
      else
        v6 = v9 - 1;
      v9 = v8 + (v6 - v8) / 2;
      if ( v6 < v8 )
      {
        v11 = 0;
        v9 = v8;
        goto LABEL_11;
      }
    }
    v11 = 1;
  }
  else
  {
    v11 = 0;
    v9 = 0;
  }
LABEL_11:
  *a3 = v11;
  return v9;
}


// ======================================================================
