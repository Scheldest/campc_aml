// ADDR: 0x805d4
// SYMBOL: sub_805D4
int sub_805D4()
{
  int v0; // r0
  int v1; // r0
  int (__fastcall *v2)(int, int); // r5
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int (__fastcall *v6)(int, int); // r5
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0

  v0 = ((int (*)(void))sub_8262C)();
  if ( byte_1A49B4 )
  {
    sub_82680(v0);
    v1 = ((int (*)(void))sub_8262C)();
    v2 = off_1ABEE4;
    if ( v1 )
    {
      v3 = ((int (*)(void))sub_82638)();
      v0 = v2(5, 100 * v3);
    }
    else
    {
      v0 = off_1ABEE4(5, 0);
    }
  }
  v4 = sub_82638(v0);
  if ( byte_1A49B4 )
  {
    if ( v4 >= 100 )
      v4 = 100;
    v5 = sub_8268C(v4 & ~(v4 >> 31));
    v4 = sub_8262C(v5);
    if ( v4 )
    {
      v6 = off_1ABEE4;
      v7 = sub_82638(&off_1ABEE4);
      v4 = v6(5, 100 * v7);
    }
  }
  v8 = sub_82644(v4);
  v9 = sub_80300(v8);
  v10 = sub_82650(v9);
  return sub_8046C(v10);
}


// ======================================================================
