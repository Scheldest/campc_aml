// ADDR: 0x1379c0
// SYMBOL: sub_1379C0
void __fastcall sub_1379C0(int a1, int a2, __int64 *a3, __int64 *a4)
{
  __int64 v7; // d16
  __int64 v8; // d17
  __int64 v9; // d19
  int v10; // [sp+4h] [bp-4Ch] BYREF
  _BYTE v11[8]; // [sp+8h] [bp-48h] BYREF
  void *v12; // [sp+10h] [bp-40h]
  _BYTE v13[8]; // [sp+14h] [bp-3Ch] BYREF
  void *v14; // [sp+1Ch] [bp-34h]
  __int64 v15; // [sp+20h] [bp-30h]
  __int64 v16; // [sp+28h] [bp-28h]
  __int64 v17; // [sp+30h] [bp-20h]
  __int64 v18; // [sp+38h] [bp-18h]

  v10 = -286331153 * ((*(_DWORD *)algn_3141EC - dword_3141E8) >> 2);
  std::string::basic_string(v11, a1);
  std::string::basic_string(v13, a2);
  v7 = *a4;
  v8 = a4[1];
  v9 = a3[1];
  v15 = *a3;
  v16 = v9;
  v17 = v7;
  v18 = v8;
  sub_137A64(&dword_3141E8, &v10);
  if ( v13[0] << 31 )
    operator delete(v14);
  if ( v11[0] << 31 )
    operator delete(v12);
}


// ======================================================================
