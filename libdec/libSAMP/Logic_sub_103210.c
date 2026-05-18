// ADDR: 0x13630c
// SYMBOL: sub_13630C
int __fastcall sub_13630C(int a1)
{
  int result; // r0
  int v3; // r5
  __int64 v4; // d16
  __int64 v5; // d17
  int v6; // r0
  int v7; // r5
  __int64 v8; // d16
  __int64 v9; // d17
  int v10; // r0
  int v11; // r5
  unsigned __int8 *v12; // r5
  int v13; // r1
  __int64 v14; // [sp+8h] [bp-38h] BYREF
  __int64 v15; // [sp+10h] [bp-30h]
  void *v16[2]; // [sp+1Ch] [bp-24h] BYREF
  void *v17; // [sp+24h] [bp-1Ch]

  result = dword_23DEF4;
  if ( dword_23DEF4 )
  {
    sub_144204();
    result = *(unsigned __int8 *)(a1 + 80);
    if ( !*(_BYTE *)(a1 + 80) )
    {
      v3 = operator new(0x78u);
      sub_DC6DC(v16, &byte_8F794);
      *(float *)&v4 = 1.0;
      *((float *)&v4 + 1) = 1.0;
      *(float *)&v5 = 1.0;
      *((float *)&v5 + 1) = 1.0;
      v14 = v4;
      v15 = v5;
      sub_13D3DC(v3, (int)v16, (int)&v14, 0, *(float *)&dword_238EC0 * 0.5);
      v6 = LOBYTE(v16[0]);
      *(_DWORD *)(a1 + 88) = v3;
      if ( v6 << 31 )
      {
        operator delete(v17);
        v3 = *(_DWORD *)(a1 + 88);
      }
      sub_12BDF6(a1, v3);
      v7 = operator new(0x78u);
      sub_DC6DC(v16, &byte_8F794);
      *(float *)&v8 = 1.0;
      *((float *)&v8 + 1) = 1.0;
      *(float *)&v9 = 1.0;
      *((float *)&v9 + 1) = 1.0;
      v14 = v8;
      v15 = v9;
      sub_13D3DC(v7, (int)v16, (int)&v14, 0, *(float *)&dword_238EC0 * 0.5);
      v10 = LOBYTE(v16[0]);
      *(_DWORD *)(a1 + 92) = v7;
      if ( v10 << 31 )
      {
        operator delete(v17);
        v7 = *(_DWORD *)(a1 + 92);
      }
      sub_12BDF6(a1, v7);
      v11 = operator new(0x6Cu);
      sub_13C5A8();
      *(_DWORD *)(a1 + 84) = v11;
      sub_12BDF6(a1, v11);
      sub_13648C(a1);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
      v12 = *(unsigned __int8 **)(dword_23DEEC + 88);
      v13 = v12[80];
      *(_BYTE *)(dword_23DEF0 + 84) = 0;
      if ( v13 )
        (*(void (__fastcall **)(unsigned __int8 *, _DWORD))(*(_DWORD *)v12 + 36))(v12, 0);
      v12[80] = 0;
      if ( *(_BYTE *)(a1 + 80) != 1 )
        (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 36))(a1, 1);
      result = 1;
      *(_BYTE *)(a1 + 80) = 1;
    }
  }
  return result;
}


// ======================================================================
