// ADDR: 0x11a698
// SYMBOL: sub_11A698
void __fastcall sub_11A698(int a1, char *a2)
{
  int v2; // r4
  unsigned int v5; // r0
  unsigned int v6; // r1
  void *v7; // r1
  int v8; // r0
  _BYTE *v9; // r1
  int v10; // r2
  unsigned __int8 v11; // [sp+0h] [bp-28h] BYREF
  _BYTE v12[7]; // [sp+1h] [bp-27h] BYREF
  void *v13; // [sp+8h] [bp-20h]
  void *v14[7]; // [sp+Ch] [bp-1Ch] BYREF

  v2 = a1 + 52;
  std::string::assign(a1 + 52, a2);
  v5 = *(unsigned __int8 *)(a1 + 52);
  v6 = *(_DWORD *)(a1 + 56);
  if ( !(v5 << 31) )
    v6 = v5 >> 1;
  sub_DC6DC(v14, &a2[v6 + 1]);
  v7 = v14[1];
  v8 = (int)v14[0] & 1;
  if ( !v8 )
    v7 = (void *)(LOBYTE(v14[0]) >> 1);
  if ( v7 )
  {
    std::operator+<char>(&v11, ".", v14);
    v10 = *(_DWORD *)&v12[3];
    v9 = v13;
    if ( (v11 & 1) == 0 )
    {
      v9 = v12;
      v10 = v11 >> 1;
    }
    std::string::append(v2, v9, v10, v11 & 1);
    if ( v11 << 31 )
      operator delete(v13);
    v8 = (int)v14[0] & 1;
  }
  if ( v8 )
    operator delete(v14[2]);
}


// ======================================================================
