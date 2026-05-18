// ADDR: 0xe317c
// SYMBOL: sub_E317C
int __fastcall sub_E317C(unsigned __int8 *a1, int a2)
{
  __int64 v4; // r0
  int v5; // r5

  _android_log_print(4, "AXL", "Stop: %s", byte_23DAE0);
  LODWORD(v4) = *a1 == 0;
  HIDWORD(v4) = byte_23DBF6 == 0;
  v5 = v4 | HIDWORD(v4);
  if ( !v4 )
  {
    byte_23DBF5 = 1;
    if ( a2 )
    {
      do
        usleep(0xC8u);
      while ( byte_23DBF6 );
    }
    sub_164AF4(dword_23DAD8);
    dword_23DAD8 = 0;
  }
  return v5 ^ 1;
}


// ======================================================================
// ADDR: 0x22178c
// SYMBOL: sub_22178C
void *__fastcall sub_22178C(void *a1, size_t n)
{
  return memset(a1, 0, n);
}


// ======================================================================
