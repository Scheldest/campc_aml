// ADDR: 0x102408
// SYMBOL: sub_102408
int __fastcall sub_102408(int result, int a2, char *s, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  _DWORD *v10; // r10
  void *v13; // r0
  char **v14; // r4
  size_t v15; // r0
  char *v16; // r6
  size_t v17; // r0
  const char *v18; // r1
  unsigned __int8 v19; // [sp+0h] [bp-30h] BYREF
  _BYTE v20[3]; // [sp+1h] [bp-2Fh] BYREF
  void *v21; // [sp+8h] [bp-28h]

  if ( a2 <= 15 )
  {
    v10 = (_DWORD *)(result + 4 * a2);
    if ( v10[11] )
    {
      sub_108CB8();
      v10[11] = 0;
    }
    v14 = (char **)(v10 + 60);
    v13 = (void *)v10[60];
    v10[43] = 2;
    v10[27] = 0;
    if ( v13 )
    {
      operator delete[](v13);
      *v14 = 0;
    }
    v15 = strlen(s);
    v16 = (char *)operator new[](3 * v15 + 1);
    *v14 = v16;
    v17 = strlen(s);
    sub_164D04(&v19, s, v17);
    v18 = (const char *)v21;
    if ( !(v19 << 31) )
      v18 = v20;
    strcpy(v16, v18);
    if ( v19 << 31 )
      operator delete(v21);
    v10[108] = a8;
    v10[124] = a9;
    result = a10;
    v10[92] = a6;
    v10[76] = a4;
    v10[140] = a10;
  }
  return result;
}


// ======================================================================
