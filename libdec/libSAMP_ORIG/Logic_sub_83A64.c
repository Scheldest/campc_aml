// ADDR: 0x688b0
// SYMBOL: sub_688B0
int __fastcall sub_688B0(int a1, const char *a2)
{
  bool v3; // zf
  int v4; // r5
  int v6; // r0
  int v7; // r5
  int v8; // r1
  int v9; // [sp+0h] [bp-20h] BYREF

  v3 = a1 == 0;
  if ( a1 )
    v3 = a2 == 0;
  if ( !v3 )
  {
    v6 = ((int (__fastcall *)(char *))(dword_1A4404 + 6110817))(&byte_4CC4A);
    v7 = v6;
    if ( v6 != -1 )
    {
      ((void (*)(void))(dword_1A4404 + 6111621))();
      ((void (__fastcall *)(int, _DWORD))(dword_1A4404 + 6111477))(v7, 0);
      v9 = 0;
      ((void (__fastcall *)(int *, const char *))(dword_1A4404 + 6064185))(&v9, a2);
      v4 = v9;
      if ( v9 )
      {
        v8 = dword_1A4404;
        ++*(_DWORD *)(v9 + 84);
        ((void (*)(void))(v8 + 6111685))();
        return v4;
      }
      ((void (*)(void))(dword_1A4404 + 6111685))();
    }
  }
  _android_log_print(4, "SAMP_ORIG", "Texture \"%s\" was not found!", a2);
  return 0;
}


// ======================================================================
// ADDR: 0x825d8
// SYMBOL: sub_825D8
int sub_825D8()
{
  return (unsigned __int8)byte_1A49E8;
}


// ======================================================================
// ADDR: 0x82608
// SYMBOL: sub_82608
char __fastcall sub_82608(char result)
{
  byte_1A49E8 = result;
  return result;
}


// ======================================================================
