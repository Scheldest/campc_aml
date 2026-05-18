// ADDR: 0x181de8
// SYMBOL: sub_181DE8
int __fastcall sub_181DE8(_DWORD *a1, char *a2, int a3, const void *a4, signed int a5)
{
  int result; // r0
  bool v10; // zf
  int v11; // r0
  unsigned int v12; // r4
  int v13; // r0
  unsigned __int8 v14[12]; // [sp+Ch] [bp-13Ch] BYREF
  int v15; // [sp+18h] [bp-130h]
  _DWORD v16[2]; // [sp+120h] [bp-28h] BYREF
  _BYTE v17[29]; // [sp+12Bh] [bp-1Dh] BYREF

  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 44))(a1);
  v10 = a2 == 0;
  if ( a2 )
    v10 = result == 0;
  if ( !v10 )
  {
    if ( (unsigned int)(unsigned __int8)*a2 - 51 <= 0xFFFFFFFC )
      a2 = (char *)sub_18CC56((int)&unk_382751, a2);
    (*(void (__fastcall **)(_DWORD *, char *, int, _DWORD *))(*a1 + 192))(a1, a2, a3, v16);
    v11 = sub_17D4A8((int)v14);
    v17[0] = 55;
    sub_17D628(v11, v17, 8, 1);
    if ( a5 < 1 )
    {
      v17[0] = 0;
      sub_17D628((int)v14, v17, 8, 1);
    }
    else
    {
      sub_17D566(v14, a4, a5);
    }
    if ( a1[225] )
    {
      v12 = 0;
      do
      {
        v13 = *(_DWORD *)(a1[224] + 4 * v12);
        (*(void (__fastcall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v13 + 28))(
          v13,
          v15,
          *(_DWORD *)v14,
          v16[0],
          v16[1]);
        ++v12;
      }
      while ( v12 < a1[225] );
    }
    sub_18CD80((int)&unk_382751, a1[507], v15, (*(_DWORD *)v14 + 7) >> 3, a2, a3);
    return sub_17D542((int)v14);
  }
  return result;
}


// ======================================================================
