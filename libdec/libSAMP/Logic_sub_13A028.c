// ADDR: 0x139ce4
// SYMBOL: sub_139CE4
_DWORD *__fastcall sub_139CE4(int a1)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_12BC78(a1);
  result[21] = 0;
  result[22] = -1;
  *result = &off_22EBB8;
  return result;
}


// ======================================================================
// ADDR: 0x13a804
// SYMBOL: sub_13A804
_DWORD *__fastcall sub_13A804(_DWORD *a1)
{
  int v2; // r5
  __int64 v3; // d16
  __int64 v4; // d17
  int v5; // r0
  _QWORD v7[2]; // [sp+8h] [bp-28h] BYREF
  void *v8[5]; // [sp+1Ch] [bp-14h] BYREF

  sub_12BC78((int)a1);
  *a1 = &off_22EC40;
  v2 = operator new(0x78u);
  sub_DC6DC(v8, "Title");
  *(float *)&v3 = 1.0;
  *((float *)&v3 + 1) = 1.0;
  *(float *)&v4 = 1.0;
  *((float *)&v4 + 1) = 1.0;
  v7[0] = v3;
  v7[1] = v4;
  sub_13D3DC(v2, (int)v8, (int)v7, 0, *(float *)&dword_238EC0 * 0.5);
  v5 = LOBYTE(v8[0]);
  a1[21] = v2;
  if ( v5 << 31 )
  {
    operator delete(v8[2]);
    v2 = a1[21];
  }
  sub_12BDF6((int)a1, v2);
  return a1;
}


// ======================================================================
// ADDR: 0x13a948
// SYMBOL: sub_13A948
_DWORD *__fastcall sub_13A948(_DWORD *a1)
{
  int v2; // r5
  int v3; // r5

  sub_13D71C(a1, 0);
  *a1 = &off_22EC78;
  v2 = operator new(0x70u);
  sub_13A9A8();
  a1[27] = v2;
  sub_12BDF6((int)a1, v2);
  v3 = operator new(0x70u);
  sub_13AB7C();
  a1[28] = v3;
  sub_12BDF6((int)a1, v3);
  return a1;
}


// ======================================================================
