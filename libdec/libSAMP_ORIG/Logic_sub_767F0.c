// ADDR: 0x77138
// SYMBOL: sub_77138
int *__fastcall sub_77138(int *a1, unsigned __int8 *a2)
{
  const char *v3; // r0
  FILE *v4; // r0
  FILE *v5; // r10
  int v6; // r6

  a1[2] = 0;
  a1[1] = (int)(a1 + 2);
  a1[3] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[9] = 0;
  a1[8] = 0;
  a1[7] = (int)(a1 + 8);
  a1[4] = (int)(a1 + 5);
  v3 = (const char *)*((_DWORD *)a2 + 2);
  if ( !(*a2 << 31) )
    v3 = (const char *)(a2 + 1);
  v4 = fopen(v3, (const char *)&a6ar[2]);
  if ( v4 )
  {
    v5 = v4;
    v6 = sub_75B88(v4, (int (__fastcall *)(int, _QWORD *, char *, char *))sub_77524, (int)a1);
    fclose(v5);
  }
  else
  {
    v6 = -1;
  }
  *a1 = v6;
  return a1;
}


// ======================================================================
// ADDR: 0x771d8
// SYMBOL: sub_771D8
__int64 __fastcall sub_771D8(int a1, int a2, int a3, int a4, double a5)
{
  int v7; // r2
  int v8; // r3
  const char *v9; // r5
  double v11; // d9
  char *v12; // r4
  char *endptr; // [sp+8h] [bp-50h] BYREF
  __int16 v15; // [sp+Ch] [bp-4Ch]
  _BYTE v16[8]; // [sp+18h] [bp-40h] BYREF
  void *v17; // [sp+20h] [bp-38h]
  _BYTE v18[8]; // [sp+24h] [bp-34h] BYREF
  void *v19; // [sp+2Ch] [bp-2Ch]
  unsigned __int8 v20; // [sp+30h] [bp-28h] BYREF
  _BYTE v21[3]; // [sp+31h] [bp-27h] BYREF
  void *v22; // [sp+38h] [bp-20h]

  std::string::basic_string(v18, a2, a3, a4);
  std::string::basic_string(v16, a3, v7, v8);
  v15 = 0;
  sub_773B8(&v20, a1, v18);
  if ( v16[0] << 31 )
    operator delete(v17);
  if ( v18[0] << 31 )
    operator delete(v19);
  v9 = (const char *)v22;
  if ( !(v20 << 31) )
    v9 = v21;
  v11 = strtod(v9, &endptr);
  v12 = endptr;
  if ( v20 << 31 )
    operator delete(v22);
  if ( v12 > v9 )
    a5 = v11;
  return *(_QWORD *)&a5;
}


// ======================================================================
// ADDR: 0x772cc
// SYMBOL: sub_772CC
int __fastcall sub_772CC(int a1, int a2, int a3, int a4)
{
  int v5; // r8
  int v7; // r2
  int v8; // r3
  const char *v9; // r6
  int v10; // r5
  char *v11; // r4
  char *endptr; // [sp+8h] [bp-48h] BYREF
  __int16 v14; // [sp+Ch] [bp-44h]
  _BYTE v15[8]; // [sp+18h] [bp-38h] BYREF
  void *v16; // [sp+20h] [bp-30h]
  _BYTE v17[8]; // [sp+24h] [bp-2Ch] BYREF
  void *v18; // [sp+2Ch] [bp-24h]
  unsigned __int8 v19; // [sp+30h] [bp-20h] BYREF
  _BYTE v20[3]; // [sp+31h] [bp-1Fh] BYREF
  void *v21; // [sp+38h] [bp-18h]

  v5 = a4;
  std::string::basic_string(v17, a2, a3, a4);
  std::string::basic_string(v15, a3, v7, v8);
  v14 = 0;
  sub_773B8(&v19, a1, v17);
  if ( v15[0] << 31 )
    operator delete(v16);
  if ( v17[0] << 31 )
    operator delete(v18);
  v9 = (const char *)v21;
  if ( !(v19 << 31) )
    v9 = v20;
  v10 = strtol(v9, &endptr, 0);
  v11 = endptr;
  if ( v19 << 31 )
    operator delete(v21);
  if ( v11 > v9 )
    return v10;
  return v5;
}


// ======================================================================
// ADDR: 0x773b8
// SYMBOL: sub_773B8
int __fastcall sub_773B8(int a1, int a2, int a3, int a4, int a5)
{
  int v8; // r2
  int v9; // r3
  int v10; // r5
  int v11; // r2
  int v12; // r3
  int v13; // r1
  _BYTE v15[8]; // [sp+8h] [bp-48h] BYREF
  void *v16; // [sp+10h] [bp-40h]
  _BYTE v17[8]; // [sp+14h] [bp-3Ch] BYREF
  void *v18; // [sp+1Ch] [bp-34h]
  _BYTE v19[8]; // [sp+20h] [bp-30h] BYREF
  void *v20; // [sp+28h] [bp-28h]
  _BYTE v21[4]; // [sp+2Ch] [bp-24h] BYREF
  _BYTE *v22; // [sp+30h] [bp-20h] BYREF
  _DWORD v23[7]; // [sp+34h] [bp-1Ch] BYREF

  std::string::basic_string(v17, a3, a3, a4);
  std::string::basic_string(v15, a4, v8, v9);
  sub_77A44(v19, v17, v15);
  if ( v15[0] << 31 )
    operator delete(v16);
  if ( v17[0] << 31 )
    operator delete(v18);
  v10 = a2 + 4;
  if ( sub_781B2(v10, v19) )
  {
    v22 = v19;
    sub_77C28(v23, v10, v19, &unk_51F90, &v22, v21);
    v13 = v23[0] + 28;
  }
  else
  {
    v13 = a5;
  }
  std::string::basic_string(a1, v13, v11, v12);
  if ( v19[0] << 31 )
    operator delete(v20);
  return v23[2];
}


// ======================================================================
// ADDR: 0x774a4
// SYMBOL: sub_774A4
_DWORD *__fastcall sub_774A4(_DWORD *a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r8
  _DWORD *v4; // r5
  _DWORD *v5; // r6
  _DWORD *v6; // r0
  int v7; // r0
  bool v8; // zf
  int v9; // r1
  _DWORD *v10; // t1

  v3 = a1 + 7;
  v2 = (_DWORD *)a1[7];
  v4 = a1 + 8;
  while ( v2 != v4 )
  {
    v5 = (_DWORD *)v2[7];
    if ( v5 )
    {
      sub_78142(v2[7], v5[1]);
      operator delete(v5);
    }
    v6 = (_DWORD *)v2[1];
    if ( v6 )
    {
      do
      {
        v2 = v6;
        v6 = (_DWORD *)*v6;
      }
      while ( v6 );
    }
    else
    {
      v7 = (int)(v2 + 2);
      v8 = *(_DWORD *)v2[2] == (_DWORD)v2;
      v2 = (_DWORD *)v2[2];
      if ( !v8 )
      {
        do
        {
          v9 = *(_DWORD *)v7;
          v10 = *(_DWORD **)(*(_DWORD *)v7 + 8);
          v7 = *(_DWORD *)v7 + 8;
          v2 = v10;
        }
        while ( *v10 != v9 );
      }
    }
  }
  sub_78110(v3, a1[8]);
  sub_78142(a1 + 4, a1[5]);
  sub_78174(a1 + 1, a1[2]);
  return a1;
}


// ======================================================================
