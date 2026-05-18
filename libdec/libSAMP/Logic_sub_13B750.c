// ADDR: 0x13d05c
// SYMBOL: sub_13D05C
_DWORD *__fastcall sub_13D05C(_DWORD *a1, unsigned __int8 *a2)
{
  int v4; // r5
  unsigned int v5; // r0
  unsigned __int8 *v6; // r1
  unsigned int v7; // r2
  __int64 v8; // d16
  __int64 v9; // d17
  int v10; // r0
  _QWORD v12[2]; // [sp+8h] [bp-30h] BYREF
  _BYTE v13[8]; // [sp+1Ch] [bp-1Ch] BYREF
  void *v14; // [sp+24h] [bp-14h]

  sub_12BC78((int)a1);
  a1[23] = 0;
  a1[24] = 0;
  a1[22] = 0;
  *a1 = &off_22EF38;
  v4 = operator new(0x78u);
  v5 = *a2;
  v6 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
  v7 = *((_DWORD *)a2 + 1);
  if ( (v5 & 1) == 0 )
  {
    v6 = a2 + 1;
    v7 = v5 >> 1;
  }
  sub_164D04(v13, v6, v7);
  *(float *)&v8 = 1.0;
  *((float *)&v8 + 1) = 1.0;
  *(float *)&v9 = 1.0;
  *((float *)&v9 + 1) = 1.0;
  v12[0] = v8;
  v12[1] = v9;
  sub_13D3DC(v4, (int)v13, (int)v12, 0, *(float *)&dword_238EC0 * 0.5);
  v10 = v13[0];
  a1[21] = v4;
  if ( v10 << 31 )
  {
    operator delete(v14);
    v4 = a1[21];
  }
  sub_12BDF6((int)a1, v4);
  std::string::operator=(a1 + 22);
  return a1;
}


// ======================================================================
