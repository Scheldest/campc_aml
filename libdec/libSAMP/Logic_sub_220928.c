// ADDR: 0x220944
// SYMBOL: sub_220944
__int64 __fastcall sub_220944(__int64 (__fastcall *a1)(const char *, int *, int), wchar_t *s, _DWORD *a3, int a4)
{
  unsigned int v8; // r4
  const char *v9; // r6
  __int64 v10; // r0
  __int64 v11; // r8
  int *v12; // r10
  size_t v13; // r4
  int v14; // r0
  int v16; // [sp+4h] [bp-3Ch]
  char *v17; // [sp+8h] [bp-38h] BYREF
  char *v18; // [sp+Ch] [bp-34h] BYREF
  int v19; // [sp+10h] [bp-30h] BYREF
  wchar_t *v20; // [sp+14h] [bp-2Ch] BYREF
  const char *v21; // [sp+18h] [bp-28h] BYREF
  int v22; // [sp+1Ch] [bp-24h] BYREF

  v22 = 0;
  if ( a3 )
    *a3 = s;
  v8 = 4 * wcslen(s) + 1;
  v20 = s;
  v21 = (const char *)operator new[](v8);
  v9 = v21;
  if ( sub_2200EC((int)v21, &v20, v8, &v22) == -1 )
  {
    v11 = 0LL;
  }
  else
  {
    v10 = a1(v9, &v19, a4);
    v11 = v10;
    if ( a3 )
    {
      v12 = (int *)_errno(v10);
      v13 = v19 - (_DWORD)v9;
      v16 = *v12;
      v18 = (char *)operator new[](v19 - (_DWORD)v9 + 1);
      v17 = strncpy(v18, v9, v13);
      v17[v13] = 0;
      v14 = sub_21FF8C(0, &v17, 0, &v22);
      if ( v14 == -1 )
        abort();
      *v12 = v16;
      *a3 = &s[v14];
      sub_220A28(&v18, v16);
    }
  }
  sub_220A28(&v21, HIDWORD(v10));
  return v11;
}


// ======================================================================
