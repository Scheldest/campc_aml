// ADDR: 0x181848
// SYMBOL: sub_181848
_DWORD *__fastcall sub_181848(_DWORD *result, char *name, int a3, int a4)
{
  _DWORD *v4; // r11
  char *cp; // r10
  unsigned int v8; // r4
  int v9; // r0
  _DWORD v10[3]; // [sp+Ch] [bp-13Ch] BYREF
  int v11; // [sp+18h] [bp-130h]
  _DWORD v12[2]; // [sp+120h] [bp-28h] BYREF
  _DWORD v13[8]; // [sp+128h] [bp-20h] BYREF

  if ( name )
  {
    v4 = result;
    cp = name;
    if ( (unsigned int)(unsigned __int8)*name - 51 <= 0xFFFFFFFC )
      cp = (char *)sub_18CC56((int)&unk_382751, name);
    (*(void (__fastcall **)(_DWORD *, char *, int, _DWORD *))(*v4 + 192))(v4, cp, a3, v12);
    sub_17D4C0((int)v10, 5);
    if ( a4 )
      LOBYTE(v13[0]) = 8;
    else
      LOBYTE(v13[0]) = 7;
    sub_17D628((int)v10, v13, 8, 1);
    v13[0] = sub_17E2E4();
    sub_17D628((int)v10, v13, 32, 1);
    if ( v4[225] )
    {
      v8 = 0;
      do
      {
        v9 = *(_DWORD *)(v4[224] + 4 * v8);
        (*(void (__fastcall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 28))(v9, v11, v10[0], v12[0], v12[1]);
        ++v8;
      }
      while ( v8 < v4[225] );
    }
    sub_18CD80((int)&unk_382751, v4[507], v11, (v10[0] + 7) >> 3, cp, a3);
    return (_DWORD *)sub_17D542((int)v10);
  }
  return result;
}


// ======================================================================
