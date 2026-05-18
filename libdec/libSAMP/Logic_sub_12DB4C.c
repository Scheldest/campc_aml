// ADDR: 0x12dbac
// SYMBOL: sub_12DBAC
int __fastcall sub_12DBAC(int a1, char *s, size_t n)
{
  int result; // r0
  size_t v5; // r6
  _BYTE *v7; // r0
  unsigned int v8; // r5
  size_t v9; // r9
  unsigned int v10; // r8
  unsigned int v11; // r0
  _DWORD *v12; // r2
  _DWORD *v13; // r11
  _DWORD *v14; // t1
  char *v15; // r1
  _DWORD *v16; // r6
  _DWORD *v17; // r3
  _DWORD *v18; // r3
  int v19; // [sp+0h] [bp-20h] BYREF

  result = dword_23DEF4;
  if ( dword_23DEF4 )
  {
    v5 = n;
    if ( n )
    {
      v7 = memchr(s, 32, n);
      v8 = v7 - s;
      v9 = 0;
      if ( !v7 )
        v8 = -1;
      v10 = v8 + 1;
      if ( v8 != -1 )
      {
        v9 = v5 - v10;
        v5 = v8;
      }
      v11 = sub_12DC50(&v19, s, v5);
      v14 = *(_DWORD **)(a1 + 88);
      v13 = (_DWORD *)(a1 + 88);
      v12 = v14;
      v15 = 0;
      if ( v10 >= v8 )
        v15 = &s[v10];
      if ( !v12 )
        return sub_144460(dword_23DEF4, s);
      v16 = v13;
      do
      {
        v17 = v12;
        if ( v12[4] < v11 )
          v17 = v12 + 1;
        v18 = (_DWORD *)*v17;
        if ( v12[4] >= v11 )
          v16 = v12;
        v12 = v18;
      }
      while ( v18 );
      if ( v16 != v13 && v11 >= v16[4] )
        return sub_12DCAA(v16 + 5, v15, v9);
      else
        return sub_144460(dword_23DEF4, s);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x144358
// SYMBOL: sub_144358
int __fastcall sub_144358(int a1, const char *a2)
{
  int result; // r0
  unsigned __int8 v5; // r6
  _BYTE v6[279]; // [sp+20h] [bp-128h] BYREF
  _BYTE v7[17]; // [sp+137h] [bp-11h] BYREF

  result = *(_DWORD *)(a1 + 536);
  if ( result == 5 )
  {
    sub_17D4A8(v6);
    v5 = _strlen_chk(a2, 0xFFFFFFFF);
    v7[0] = v5;
    sub_17D628(v6, v7, 8, 1);
    sub_17D566(v6, a2, v5);
    (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(a1 + 528) + 108))(
      *(_DWORD *)(a1 + 528),
      &unk_23C754,
      v6,
      1,
      8,
      0,
      0,
      -1,
      0xFFFF,
      0xFFFF,
      0);
    return sub_17D542(v6);
  }
  return result;
}


// ======================================================================
// ADDR: 0x17c66c
// SYMBOL: sub_17C66C
void __fastcall sub_17C66C(int a1, unsigned __int8 *a2)
{
  unsigned int v2; // r0
  __int64 v3; // r2
  int v4; // r4
  int v5; // r1
  int v6; // r6
  char *v7; // r0
  int v8; // r3
  int v9; // [sp+4h] [bp-24h] BYREF
  int v10; // [sp+8h] [bp-20h]
  void *v11; // [sp+Ch] [bp-1Ch]

  if ( *(_BYTE *)(dword_381BF4 + 133) || *(_BYTE *)(dword_381BF4 + 132) )
  {
    v2 = *a2;
    v3 = *(_QWORD *)(a2 + 4);
    if ( (v2 & 1) == 0 )
    {
      HIDWORD(v3) = a2 + 1;
      LODWORD(v3) = v2 >> 1;
    }
    sub_164D04(&v9, (unsigned __int8 *)HIDWORD(v3), v3);
    v4 = sub_17C080();
    if ( v4 )
    {
      v5 = v10;
      if ( !((unsigned __int8)v9 << 31) )
        v5 = (unsigned __int8)v9 >> 1;
      v6 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 704))(v4, v5);
      v8 = v10;
      v7 = (char *)v11;
      if ( (v9 & 1) == 0 )
      {
        v7 = (char *)&v9 + 1;
        v8 = (unsigned __int8)v9 >> 1;
      }
      (*(void (__fastcall **)(int, int, _DWORD, int, char *))(*(_DWORD *)v4 + 832))(v4, v6, 0, v8, v7);
      sub_17C1B8(v4);
      (*(void (__fastcall **)(int, int))(*(_DWORD *)v4 + 92))(v4, v6);
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 912))(v4) )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 64))(v4);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 68))(v4);
      }
    }
    else
    {
      _android_log_print(4, "AXL", "Env not loaded (addKeyboardHistory)");
    }
    if ( (unsigned __int8)v9 << 31 )
      operator delete(v11);
  }
}


// ======================================================================
