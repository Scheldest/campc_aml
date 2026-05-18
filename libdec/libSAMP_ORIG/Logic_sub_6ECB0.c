// ADDR: 0x6ee32
// SYMBOL: sub_6EE32
int __fastcall sub_6EE32(_QWORD *a1, _DWORD *a2, __int64 *a3, int a4)
{
  _BYTE *v7; // r0
  int v8; // r1
  void *v9; // r0
  FILE *v10; // r3
  size_t v11; // r2
  size_t v12; // r0
  __int64 v13; // r2
  int v14; // r0
  int v15; // r1
  __int64 v16; // kr08_8
  size_t v17; // r2
  size_t v18; // r0
  __int64 v19; // r2
  int v20; // r0
  int result; // r0
  int v22; // r1
  int v23; // r0

  a2[6] = 0;
  a2[7] = 0;
  while ( 1 )
  {
    v7 = (_BYTE *)*((_DWORD *)a3 + 4);
    v8 = (unsigned __int8)*v7;
    if ( (unsigned int)(v8 - 9) > 0x17 || ((1 << (v8 - 9)) & 0x800013) == 0 )
      break;
    if ( (unsigned int)v7 < *((_DWORD *)a3 + 3) )
    {
      *((_DWORD *)a3 + 4) = v7 + 1;
    }
    else if ( !*((_BYTE *)a3 + 28) )
    {
      v9 = (void *)*((_DWORD *)a3 + 1);
      v10 = *(FILE **)a3;
      v11 = *((_DWORD *)a3 + 2);
      *((_DWORD *)a3 + 6) += *((_DWORD *)a3 + 5);
      v12 = fread(v9, 1u, v11, v10);
      v13 = *(__int64 *)((char *)a3 + 4);
      *((_DWORD *)a3 + 5) = v12;
      *((_DWORD *)a3 + 3) = v13 + v12 - 1;
      *((_DWORD *)a3 + 4) = v13;
      if ( v12 < HIDWORD(v13) )
      {
        *(_BYTE *)(v13 + v12) = 0;
        v14 = *((_DWORD *)a3 + 3);
        *((_BYTE *)a3 + 28) = 1;
        *((_DWORD *)a3 + 3) = v14 + 1;
      }
    }
  }
  if ( a2[6] )
    goto LABEL_22;
  if ( !*v7 )
  {
    v22 = 1;
LABEL_25:
    v23 = (int)&v7[*((_DWORD *)a3 + 6) - *((_DWORD *)a3 + 1)];
    a2[6] = v22;
    a2[7] = v23;
    goto LABEL_22;
  }
  sub_6EF94(a2, a3, a4);
  if ( !a2[6] )
  {
    while ( 1 )
    {
      v7 = (_BYTE *)*((_DWORD *)a3 + 4);
      v15 = (unsigned __int8)*v7;
      if ( (unsigned int)(v15 - 9) > 0x17 || ((1 << (v15 - 9)) & 0x800013) == 0 )
        break;
      if ( (unsigned int)v7 < *((_DWORD *)a3 + 3) )
      {
        *((_DWORD *)a3 + 4) = v7 + 1;
      }
      else if ( !*((_BYTE *)a3 + 28) )
      {
        v16 = *a3;
        v17 = *((_DWORD *)a3 + 2);
        *((_DWORD *)a3 + 6) += *((_DWORD *)a3 + 5);
        v18 = fread((void *)HIDWORD(v16), 1u, v17, (FILE *)v16);
        v19 = *(__int64 *)((char *)a3 + 4);
        *((_DWORD *)a3 + 5) = v18;
        *((_DWORD *)a3 + 3) = v19 + v18 - 1;
        *((_DWORD *)a3 + 4) = v19;
        if ( v18 < HIDWORD(v19) )
        {
          *(_BYTE *)(v19 + v18) = 0;
          v20 = *((_DWORD *)a3 + 3);
          *((_BYTE *)a3 + 28) = 1;
          *((_DWORD *)a3 + 3) = v20 + 1;
        }
      }
    }
    if ( !a2[6] && *v7 )
    {
      v22 = 2;
      goto LABEL_25;
    }
  }
LABEL_22:
  result = a2[2];
  *a1 = *((_QWORD *)a2 + 3);
  a2[3] = result;
  return result;
}


// ======================================================================
