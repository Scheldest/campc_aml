// ADDR: 0x713f6
// SYMBOL: sub_713F6
void *__fastcall sub_713F6(int a1, void *src, int a3, int *a4)
{
  unsigned int v7; // r9
  _DWORD *v8; // r11
  _DWORD *v10; // r10
  char *v11; // r0
  void **v12; // r2
  char *v13; // r1
  void *result; // r0
  int v15; // r1
  int v16; // r0
  _DWORD *v17; // r1
  int v18; // [sp+0h] [bp-20h]

  *(_WORD *)(a1 + 14) = 3;
  if ( a3 )
  {
    v7 = 32 * a3;
    if ( 32 * a3 )
    {
      v8 = (_DWORD *)a4[2];
      v10 = (_DWORD *)*v8;
      v12 = (void **)(*v8 + 4);
      v11 = (char *)*v12;
      if ( (unsigned int)*v12 + v7 <= *(_DWORD *)*v8 )
        goto LABEL_4;
      v15 = *a4;
      if ( *a4 <= v7 )
        v15 = 32 * a3;
      v18 = v15;
      if ( !a4[1] )
      {
        v16 = operator new(1u);
        a4[1] = v16;
        v8[1] = v16;
      }
      if ( v18 != -16 )
      {
        v17 = malloc(v18 + 16);
        v11 = 0;
        if ( !v17 )
          goto LABEL_14;
        v17[2] = v10;
        v17[1] = 0;
        v12 = (void **)(v17 + 1);
        v10 = v17;
        *v17 = v18;
        *v8 = v17;
LABEL_4:
        v13 = &v11[v7];
        v11 = (char *)v10 + (_DWORD)v11 + 16;
        *v12 = v13;
LABEL_14:
        *(_DWORD *)(a1 + 8) = v11;
        result = j_memcpy(v11, src, 32 * a3);
        goto LABEL_15;
      }
    }
    v11 = 0;
    goto LABEL_14;
  }
  result = 0;
  *(_DWORD *)(a1 + 8) = 0;
LABEL_15:
  *(_DWORD *)a1 = a3;
  *(_DWORD *)(a1 + 4) = a3;
  return result;
}


// ======================================================================
