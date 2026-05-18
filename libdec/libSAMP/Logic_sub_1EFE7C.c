// ADDR: 0x1f2dd4
// SYMBOL: sub_1F2DD4
int __fastcall sub_1F2DD4(int a1, _DWORD *a2, int a3, int a4, _DWORD *a5)
{
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  unsigned int v11; // r1
  int v12; // r1
  __int64 v14; // r0
  unsigned __int8 v15[12]; // [sp+0h] [bp-50h] BYREF
  _DWORD v16[3]; // [sp+Ch] [bp-44h] BYREF
  _BYTE v17[12]; // [sp+18h] [bp-38h] BYREF
  _BYTE v18[12]; // [sp+24h] [bp-2Ch] BYREF
  _BYTE v19[12]; // [sp+30h] [bp-20h] BYREF
  int v20; // [sp+3Ch] [bp-14h]

  if ( a5 )
    *(_QWORD *)a5 = *(_QWORD *)a2;
  v8 = *a2;
  if ( *a2 )
  {
    v9 = v8 == 20;
    if ( v8 != 20 )
      v9 = v8 == 2;
    if ( v9 )
    {
      *(_DWORD *)(a1 + 4) = 0xFFFF;
      *(_BYTE *)a1 = -1;
    }
    else
    {
      if ( !a5 )
      {
        sub_DC6DC(v16, "in ");
        sub_1EE6FE((int)v17, (int)v16, "posix_stat");
        sub_1EE6FE((int)v18, (int)v17, ": ");
        LODWORD(v14) = v15;
        HIDWORD(v14) = "failed to determine attributes for the specified path";
        sub_1F2D14(v14);
        sub_1EEC44((int)v19, (int)v18, v15);
        std::string::~string(v15);
        std::string::~string(v18);
        std::string::~string(v17);
        std::string::~string(v16);
        sub_1EE764((int)v19, a3, a2);
      }
      sub_1EE05A(a5);
      *(_DWORD *)(a1 + 4) = 0xFFFF;
      *(_BYTE *)a1 = 0;
      *(_QWORD *)a5 = *(_QWORD *)a2;
    }
  }
  else
  {
    v10 = *(_DWORD *)(a4 + 16);
    v11 = (v10 & 0xF000) - 4096;
    if ( v11 >> 14 > 2 )
      v12 = 8;
    else
      v12 = byte_D77A5[v11 >> 12];
    *(_DWORD *)a1 = v12;
    *(_DWORD *)(a1 + 4) = v10 & 0xFFF;
  }
  return v20;
}


// ======================================================================
