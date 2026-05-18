// ADDR: 0x12dfb8
// SYMBOL: sub_12DFB8
int __fastcall sub_12DFB8(int a1)
{
  int v1; // r4

  v1 = a1 + 4;
  std::mutex::lock((std::mutex *)(a1 + 4));
  sub_12E09A(a1);
  return sub_224304(v1);
}


// ======================================================================
