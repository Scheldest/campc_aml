// ADDR: 0x102810
// SYMBOL: sub_102810
int __fastcall sub_102810(int result, int a2, _DWORD *a3, int *a4, char a5)
{
  int v6; // s0
  int v7; // s2
  int v8; // s4

  if ( a2 == 0xFFFF )
  {
    v6 = 0;
    a5 = 0;
    *(_DWORD *)(result + 16) = 0;
    *(_DWORD *)(result + 20) = 0;
    *(_DWORD *)(result + 24) = 0;
    v7 = 0;
    v8 = 0;
  }
  else
  {
    *(_DWORD *)(result + 16) = *a3;
    *(_DWORD *)(result + 20) = a3[1];
    v6 = *a4;
    v7 = a4[1];
    *(_DWORD *)(result + 24) = a3[2];
    v8 = a4[2];
  }
  *(_BYTE *)(result + 40) = a5;
  *(_DWORD *)(result + 28) = v6;
  *(_DWORD *)(result + 32) = v7;
  *(_DWORD *)(result + 36) = v8;
  *(_WORD *)(result + 14) = a2;
  return result;
}


// ======================================================================
// ADDR: 0x102874
// SYMBOL: sub_102874
int __fastcall sub_102874(int result, int a2, _DWORD *a3, int *a4)
{
  int v4; // s0
  int v5; // s2
  int v6; // s4

  if ( a2 == 0xFFFF )
  {
    v4 = 0;
    *(_DWORD *)(result + 16) = 0;
    *(_DWORD *)(result + 20) = 0;
    *(_DWORD *)(result + 24) = 0;
    v5 = 0;
    v6 = 0;
  }
  else
  {
    *(_DWORD *)(result + 16) = *a3;
    *(_DWORD *)(result + 20) = a3[1];
    v4 = *a4;
    v5 = a4[1];
    *(_DWORD *)(result + 24) = a3[2];
    v6 = a4[2];
  }
  *(_DWORD *)(result + 28) = v4;
  *(_DWORD *)(result + 32) = v5;
  *(_DWORD *)(result + 36) = v6;
  *(_WORD *)(result + 12) = a2;
  return result;
}


// ======================================================================
// ADDR: 0x14854c
// SYMBOL: sub_14854C
// local variable allocation has failed, the output may be wrong!
bool __fastcall sub_14854C(int a1, unsigned int a2, int a3, int a4, __int64 a5, int a6, int a7, int a8, int a9)
{
  int v12; // r0
  int v13; // r2
  int *v14; // r11
  int v15; // r6
  int v17; // r3
  int v18; // lr
  int v19; // r0
  int v20; // r6
  int v21; // r0

  v12 = a1 + 4 * a2;
  v13 = a8;
  v14 = (int *)(v12 + 1004);
  v15 = a7;
  v18 = HIDWORD(a5);
  v17 = a5;
  if ( a2 >> 3 <= 0x7C )
  {
    v19 = *(_DWORD *)(v12 + 1004);
    if ( v19 )
    {
      if ( *(_BYTE *)(a1 + a2 + 4) )
      {
        v20 = a4;
        (*(void (__fastcall **)(int, _DWORD, int, _DWORD))(*(_DWORD *)v19 + 4))(
          v19,
          *(_DWORD *)(*(_DWORD *)v19 + 4),
          a8,
          a5);
        a4 = v20;
        v18 = HIDWORD(a5);
        v13 = a8;
        v15 = a7;
        v17 = a5;
        *(_BYTE *)(a1 + a2 + 4) = 0;
        *v14 = 0;
      }
    }
  }
  v21 = sub_F9D98(dword_23DEF0, a3, a4, v17, v18, a6, v15, v13, a9);
  *v14 = v21;
  if ( v21 )
    *(_BYTE *)(a1 + a2 + 4) = 1;
  return v21 != 0;
}


// ======================================================================
// ADDR: 0x14b778
// SYMBOL: sub_14B778
size_t __fastcall sub_14B778(int a1, int a2, int a3)
{
  size_t result; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r2
  unsigned __int8 v11; // [sp+1Fh] [bp-B51h] BYREF
  int v12; // [sp+20h] [bp-B50h] BYREF
  int v13; // [sp+24h] [bp-B4Ch] BYREF
  unsigned __int8 v14; // [sp+29h] [bp-B47h] BYREF
  unsigned __int8 v15; // [sp+2Ah] [bp-B46h] BYREF
  unsigned __int8 v16; // [sp+2Bh] [bp-B45h] BYREF
  unsigned __int16 v17; // [sp+2Ch] [bp-B44h] BYREF
  unsigned __int8 s[2058]; // [sp+2Eh] [bp-B42h] BYREF
  char v19[264]; // [sp+838h] [bp-338h] BYREF
  char v20[264]; // [sp+940h] [bp-230h] BYREF
  char v21[263]; // [sp+A48h] [bp-128h] BYREF
  char i; // [sp+B4Fh] [bp-21h] BYREF
  int v23[8]; // [sp+B50h] [bp-20h] BYREF

  result = 0;
  v23[0] = 0;
  for ( i = 0; a1; --a1 )
  {
    sub_22178C((int)v21, 0x101u);
    sub_22178C((int)v20, 0x101u);
    sub_22178C((int)v19, 0x101u);
    sub_22178C((int)&s[2], 0x801u);
    sub_17D786(a3, (int)&s[1]);
    result = s[1];
    if ( s[1] == 2 )
    {
      sub_17D786(a3, (int)s);
      sub_17D786(a3, (int)&v16);
      sub_17D786(a3, (int)&i);
      sub_17D744(a3, v19);
      sub_17D786(a3, (int)&v15);
      sub_17D786(a3, (int)&v14);
      sub_17D786(a3, (int)&v13);
      sub_17D786(a3, (int)&v12);
      v8 = sub_17D786(a3, (int)&v11);
      v9 = sub_18CEC8(v8);
      sub_18D07E(v9, &s[2], 2048, a3, 0);
      result = _strlen_chk(v19, 0x101u);
      if ( result )
      {
        result = _strlen_chk(v19, 0x101u);
        if ( a2 )
        {
          if ( result <= 0x1F )
          {
            v10 = v14;
            if ( v14 )
              v10 = 1;
            result = sub_102408(a2, s[0], (char *)&s[2], v16, (int)v19, v15, v10, v13, v12, v11);
          }
        }
      }
    }
    else if ( s[1] == 1 )
    {
      sub_17D786(a3, (int)s);
      sub_17D786(a3, (int)&v17);
      sub_17D786(a3, (int)&i);
      sub_17D744(a3, v21);
      sub_17D786(a3, (int)&i);
      sub_17D744(a3, v20);
      sub_17D786(a3, (int)v23);
      result = _strlen_chk(v21, 0x101u);
      if ( result <= 0x1F )
      {
        result = _strlen_chk(v20, 0x101u);
        if ( result <= 0x1F )
        {
          if ( a2 )
          {
            v7 = v17;
            if ( v17 > 0x4E20u )
              v7 = -1;
            result = sub_102390(a2, v7, s[0], (int)v21, (int)v20, v23[0]);
          }
        }
      }
    }
  }
  return result;
}


// ======================================================================
