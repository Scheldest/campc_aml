// ADDR: 0x103b00
// SYMBOL: sub_103B00
__int64 __fastcall sub_103B00(__int64 a1, int a2, int a3)
{
  __int64 **v3; // r4
  __int64 v4; // kr00_8
  __int64 *v5; // r1
  __int64 v7; // [sp+0h] [bp-18h] BYREF
  int v8; // [sp+8h] [bp-10h]
  int v9; // [sp+Ch] [bp-Ch]

  v7 = a1;
  v8 = a2;
  v9 = a3;
  v3 = (__int64 **)a1;
  v4 = *(_QWORD *)a1;
  sub_FE09A(*(__int64 **)a1, 40);
  HIDWORD(v7) = 16843042;
  v5 = *v3;
  LODWORD(v7) = &off_113578;
  v8 = *(_DWORD *)(HIDWORD(v4) + 8);
  sub_FE074((unsigned __int8 *)&v7, (int)v5);
  sub_FE09A(*v3, 41);
  return v7;
}


// ======================================================================
