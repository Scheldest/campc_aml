// ADDR: 0x220680
// SYMBOL: sub_220680
int __fastcall sub_220680(wchar_t *s, char *a2, char *a3, char *a4)
{
  unsigned int v7; // r4
  const char *v8; // r6
  int v9; // r1
  int v10; // r0
  int v11; // r8
  int *v12; // r9
  int v13; // r11
  char *v14; // r4
  int v15; // r0
  char *v17; // [sp+0h] [bp-38h] BYREF
  char *v18; // [sp+4h] [bp-34h] BYREF
  char *endptr; // [sp+8h] [bp-30h] BYREF
  wchar_t *v20; // [sp+Ch] [bp-2Ch] BYREF
  const char *v21; // [sp+10h] [bp-28h] BYREF
  int v22; // [sp+14h] [bp-24h] BYREF

  v17 = a2;
  v18 = a3;
  endptr = a4;
  v22 = 0;
  if ( a2 )
    *(_DWORD *)a2 = s;
  v7 = 4 * wcslen(s) + 1;
  v20 = s;
  v21 = (const char *)operator new[](v7);
  v8 = v21;
  if ( sub_2200EC((int)v21, &v20, v7, &v22) == -1 )
  {
    v11 = 0;
  }
  else
  {
    v10 = strtol(v8, &endptr, (int)a3);
    v11 = v10;
    if ( a2 )
    {
      v12 = (int *)_errno(v10);
      v13 = *v12;
      v14 = (char *)(endptr - v8);
      v18 = (char *)operator new[](endptr - v8 + 1);
      v17 = strncpy(v18, v8, (size_t)v14);
      v14[(_DWORD)v17] = 0;
      v15 = sub_21FF8C(0, &v17, 0, &v22);
      if ( v15 == -1 )
        abort();
      *v12 = v13;
      *(_DWORD *)a2 = &s[v15];
      sub_220A28(&v18, v15 + 1);
    }
  }
  sub_220A28(&v21, v9);
  return v11;
}


// ======================================================================
