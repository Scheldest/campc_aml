// ADDR: 0xe3258
// SYMBOL: sub_E3258
size_t __fastcall sub_E3258(size_t result, unsigned int a2, char *s, unsigned int a4, float a5, int a6)
{
  size_t v8; // r6
  double *v9; // r10
  size_t v10; // r3
  size_t v11; // r11
  size_t v12; // r0
  double v13; // [sp+10h] [bp-238h] BYREF
  float v14; // [sp+18h] [bp-230h]
  int v15; // [sp+1Ch] [bp-22Ch]
  char v16[552]; // [sp+20h] [bp-228h] BYREF

  if ( a2 <= 0x3EC )
  {
    v8 = result + 36 * a2;
    *(_BYTE *)v8 = 0;
    v9 = (double *)(v8 + 4);
    if ( *(unsigned __int8 *)(v8 + 4) << 31 )
    {
      v10 = result + 36 * a2;
      **(_BYTE **)(v10 + 12) = 0;
      *(_DWORD *)(v10 + 8) = 0;
    }
    else
    {
      *(_WORD *)v9 = 0;
    }
    v11 = result + 36 * a2;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_DWORD *)(v11 + 32) = 0;
    result = strlen(s);
    if ( result <= 0x90 )
    {
      _strcpy_chk(v16, s, 512);
      *(_DWORD *)(v11 + 32) = sub_E33A4(v16, 36, 12);
      v12 = strlen(v16);
      sub_164D04(&v13, v16, v12);
      if ( *(unsigned __int8 *)v9 << 31 )
        operator delete(*(void **)(v11 + 12));
      *(float *)(v8 + 12) = v14;
      v15 = 1065353216;
      *v9 = v13;
      v14 = (float)BYTE1(a4) * 0.0039216;
      *((float *)&v13 + 1) = (float)BYTE2(a4) * 0.0039216;
      *(float *)&v13 = (float)HIBYTE(a4) * 0.0039216;
      *(_DWORD *)(v11 + 24) = sub_165778(&v13, BYTE2(a4));
      *(_DWORD *)(v11 + 20) = a6;
      *(float *)(v11 + 28) = a5;
      *(_DWORD *)(v11 + 16) = sub_F0B30();
      result = 1;
      *(_BYTE *)v8 = 1;
    }
  }
  return result;
}


// ======================================================================
