// ADDR: 0x115466
// SYMBOL: sub_115466
int __fastcall sub_115466(int a1)
{
  int v1; // r4

  v1 = a1 + 4;
  std::mutex::lock((std::mutex *)(a1 + 4));
  sub_11548E(a1);
  return sub_224304(v1);
}


// ======================================================================
