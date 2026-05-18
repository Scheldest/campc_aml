// ADDR: 0x220388
// SYMBOL: sub_220388
int __fastcall sub_220388(const wchar_t *a1, unsigned int a2, wchar_t *s, char *a4)
{
  unsigned int v7; // r4
  char *v8; // r5
  unsigned int v9; // r6
  int v10; // r5
  size_t v11; // r0
  wchar_t *v13; // [sp+0h] [bp-30h] BYREF
  char *v14; // [sp+4h] [bp-2Ch] BYREF
  const char *v15; // [sp+8h] [bp-28h] BYREF
  int v16; // [sp+Ch] [bp-24h] BYREF
  wchar_t *v17; // [sp+10h] [bp-20h] BYREF

  v13 = s;
  v14 = a4;
  v16 = 0;
  v17 = s;
  v7 = 4 * wcslen(s) + 1;
  v15 = (const char *)operator new[](v7);
  if ( sub_2200EC((int)v15, &v17, v7, &v16) == -1 )
  {
    v10 = -1;
  }
  else
  {
    v8 = (char *)operator new[](4 * a2);
    v14 = v8;
    v9 = vsnprintf(v8, 4 * a2, v15, a4);
    if ( v9 == -1 )
    {
      v10 = -1;
    }
    else
    {
      v13 = (wchar_t *)v8;
      v10 = -1;
      if ( sub_21FF8C((int)a1, &v13, a2, &v16) != -1 )
      {
        v11 = wcslen(a1);
        if ( v13 )
          v11 = -1;
        if ( v9 < 4 * a2 )
          v10 = v11;
      }
    }
    sub_22044C(&v14);
  }
  sub_22044C(&v15);
  return v10;
}


// ======================================================================
