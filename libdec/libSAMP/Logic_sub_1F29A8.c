// ADDR: 0x1f3320
// SYMBOL: sub_1F3320
int __fastcall sub_1F3320(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-10h] BYREF
  _DWORD v6[2]; // [sp+4h] [bp-Ch] BYREF

  v5 = a4;
  v6[0] = a2;
  v6[1] = a3;
  return ((int (__fastcall *)(int *, _DWORD *, int))std::__murmur2_or_cityhash<unsigned int,32u>::operator())(
           &v5,
           v6,
           8);
}


// ======================================================================
