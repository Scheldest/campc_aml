// ADDR: 0x147f30
// SYMBOL: sub_147F30
unsigned int __fastcall sub_147F30(int a1, int a2)
{
  unsigned int result; // r0
  int v5; // r1
  int v6; // r6
  _BYTE v7[276]; // [sp+1Ch] [bp-174h] BYREF
  int v8; // [sp+130h] [bp-60h] BYREF
  int v9; // [sp+134h] [bp-5Ch] BYREF
  int v10; // [sp+138h] [bp-58h] BYREF
  _DWORD v11[16]; // [sp+13Ch] [bp-54h] BYREF
  _DWORD v12[5]; // [sp+17Ch] [bp-14h] BYREF

  result = *(unsigned __int16 *)(a1 + 8);
  if ( result <= 0x3E8 )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 16);
    if ( *(_BYTE *)(v5 + result + 4) )
    {
      result = v5 + 4 * result;
      v6 = *(_DWORD *)(result + 1004);
      if ( v6 )
      {
        result = sub_F0B30() - *(_DWORD *)(a1 + 12);
        if ( result >= 0xFB )
        {
          sub_F8910(v6, v11);
          sub_1021F0(v6, (float *)&v8, (float *)&v9, (float *)&v10);
          sub_17D4A8(v7);
          if ( *(_BYTE *)(a1 + 10) )
            sub_17D84A(v7);
          else
            sub_17D828(v7);
          LOWORD(v12[0]) = *(_WORD *)(a1 + 8);
          sub_17D628(v7, v12, 16, 1);
          v12[0] = a2;
          sub_17D628(v7, v12, 32, 1);
          v12[0] = v11[12];
          sub_17D628(v7, v12, 32, 1);
          v12[0] = v11[13];
          sub_17D628(v7, v12, 32, 1);
          v12[0] = v11[14];
          sub_17D628(v7, v12, 32, 1);
          v12[0] = v8;
          sub_17D628(v7, v12, 32, 1);
          v12[0] = v9;
          sub_17D628(v7, v12, 32, 1);
          v12[0] = v10;
          sub_17D628(v7, v12, 32, 1);
          (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(dword_23DEF4 + 528) + 108))(
            *(_DWORD *)(dword_23DEF4 + 528),
            &unk_23C7FC,
            v7,
            1,
            9,
            0,
            0,
            -1,
            0xFFFF,
            0xFFFF,
            0);
          *(_DWORD *)(a1 + 12) = sub_F0B30();
          return sub_17D542(v7);
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x148084
// SYMBOL: sub_148084
int __fastcall sub_148084(int a1, int a2)
{
  int v4; // r0
  int v5; // r5
  _BYTE v7[276]; // [sp+20h] [bp-128h] BYREF
  _DWORD v8[5]; // [sp+134h] [bp-14h] BYREF

  sub_17D4A8(v7);
  v4 = sub_E35A0(dword_23DEF0);
  v5 = sub_105696(v4, *(_DWORD *)(a1 + 4));
  if ( v5 )
  {
    v8[0] = a2;
    sub_17D628(v7, v8, 32, 1);
    v8[0] = *(_DWORD *)(a1 + 4);
    sub_17D628(v7, v8, 32, 1);
    sub_17D566(v7, v5, 52);
    (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(dword_23DEF4 + 528) + 108))(
      *(_DWORD *)(dword_23DEF4 + 528),
      &unk_23C7F8,
      v7,
      1,
      9,
      0,
      0,
      -1,
      0xFFFF,
      0xFFFF,
      0);
  }
  return sub_17D542(v7);
}


// ======================================================================
