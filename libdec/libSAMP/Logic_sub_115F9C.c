// ADDR: 0x116aec
// SYMBOL: sub_116AEC
int __fastcall sub_116AEC(_DWORD *a1, _DWORD *a2)
{
  int v3; // r0
  int result; // r0
  char *v5; // r0
  char *v6; // r6
  char *v7; // r5
  unsigned int v8; // r9
  char i; // r0
  char *v10; // r6
  char *v11; // r5
  unsigned int v12; // r9
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  char v15; // t1
  char v16; // t1

  v3 = a2[12];
  if ( (v3 & 0x10) != 0 )
  {
    v5 = (char *)a2[6];
    v6 = (char *)a2[11];
    if ( v6 < v5 )
    {
      a2[11] = v5;
      v6 = v5;
    }
    v7 = (char *)a2[5];
    v8 = v6 - v7;
    if ( (unsigned int)(v6 - v7) < 0xFFFFFFF0 )
    {
      if ( v8 > 0xA )
      {
        v13 = (_DWORD *)operator new((v8 + 16) & 0xFFFFFFF0);
        *a1 = ((v8 + 16) & 0xFFFFFFF0) + 1;
        a1[1] = v8;
        a1[2] = v13;
        a1 = v13;
        goto LABEL_20;
      }
      for ( i = 2 * v8; ; i = v16 )
      {
        *(_BYTE *)a1 = i;
        a1 = (_DWORD *)((char *)a1 + 1);
LABEL_20:
        if ( v7 == v6 )
          break;
        v16 = *v7++;
      }
      goto LABEL_21;
    }
LABEL_17:
    std::__basic_string_common<true>::__throw_length_error(a1);
  }
  if ( (v3 & 8) == 0 )
  {
    result = 0;
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    return result;
  }
  v10 = (char *)a2[2];
  v11 = (char *)a2[4];
  v12 = v11 - v10;
  if ( (unsigned int)(v11 - v10) >= 0xFFFFFFF0 )
    goto LABEL_17;
  if ( v12 > 0xA )
  {
    v14 = (_DWORD *)operator new((v12 + 16) & 0xFFFFFFF0);
    *a1 = ((v12 + 16) & 0xFFFFFFF0) + 1;
    a1[1] = v12;
    a1[2] = v14;
    a1 = v14;
  }
  else
  {
    *(_BYTE *)a1 = 2 * v12;
    a1 = (_DWORD *)((char *)a1 + 1);
  }
  while ( v10 != v11 )
  {
    v15 = *v10++;
    *(_BYTE *)a1 = v15;
    a1 = (_DWORD *)((char *)a1 + 1);
  }
LABEL_21:
  result = 0;
  *(_BYTE *)a1 = 0;
  return result;
}


// ======================================================================
// ADDR: 0x1175ec
// SYMBOL: sub_1175EC
int __fastcall sub_1175EC(int result)
{
  unsigned int v1; // r1
  int v2; // r3
  unsigned int v3; // r2
  int v4; // r12
  int v5; // r1
  int v6; // r2
  int v7; // r0

  v2 = result + 16;
  v1 = *(unsigned __int8 *)(result + 16);
  v3 = *(_DWORD *)(result + 20);
  v4 = v1 & 1;
  if ( (v1 & 1) == 0 )
    v3 = v1 >> 1;
  if ( v3 )
  {
    v5 = *(_DWORD *)(result + 32);
    v6 = *(_DWORD *)(result + 24);
    v7 = result + 28;
    if ( !v4 )
      v6 = v2 + 1;
    return sub_163144(v7, v5, v6);
  }
  return result;
}


// ======================================================================
