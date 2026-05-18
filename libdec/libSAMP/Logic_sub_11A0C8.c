// ADDR: 0x11a2e0
// SYMBOL: sub_11A2E0
int __fastcall sub_11A2E0(int a1, int a2, unsigned __int8 *a3)
{
  unsigned int v4; // r0
  unsigned int v6; // r1
  double v7; // d16
  int result; // r0
  _BYTE v9[8]; // [sp+4h] [bp-34h] BYREF
  void *v10; // [sp+Ch] [bp-2Ch]
  int v11; // [sp+10h] [bp-28h]
  _BYTE v12[8]; // [sp+14h] [bp-24h] BYREF
  void *v13; // [sp+1Ch] [bp-1Ch]
  double v14; // [sp+20h] [bp-18h] BYREF
  int v15; // [sp+28h] [bp-10h]

  v4 = *a3;
  v6 = *((_DWORD *)a3 + 1);
  if ( !(v4 << 31) )
    v6 = v4 >> 1;
  if ( v6 )
  {
    sub_11A084(a3, 1);
    v11 = sub_F97EC();
    std::__fs::filesystem::path::path<char const*,void>((int)v12);
    std::__fs::filesystem::path::path<std::string,void>((int)v9);
    sub_F1DD4((int)&v14, (int)v12, (int)v9);
    if ( v9[0] << 31 )
      operator delete(v10);
    if ( v12[0] << 31 )
      operator delete(v13);
    sub_11A084(a3, 0);
    v7 = v14;
    result = v15;
    *(_DWORD *)(a1 + 8) = v15;
    *(double *)a1 = v7;
  }
  else
  {
    sub_F97EC();
    return std::__fs::filesystem::path::path<char const*,void>(a1);
  }
  return result;
}


// ======================================================================
