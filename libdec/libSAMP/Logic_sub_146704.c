// ADDR: 0x15254c
// SYMBOL: sub_15254C
int __fastcall sub_15254C(int a1, int a2)
{
  int result; // r0
  _DWORD *v5; // r4
  int v6; // r10
  int v7; // r9
  int v8; // r6
  int v9; // [sp+4h] [bp-24h]
  _WORD v10[16]; // [sp+8h] [bp-20h] BYREF

  v10[0] = a2;
  v10[1] = a2;
  v9 = a1 + 32;
  result = sub_153720();
  v5 = *(_DWORD **)(a1 + 20);
  v6 = result;
  if ( v5 )
  {
    v7 = a1 + 12;
    result = (int)&`typeinfo for'AudioChannelPlayer;
    do
    {
      v8 = v5[3];
      if ( v8
        && (result = (int)j___dynamic_cast(
                            (const void *)v5[3],
                            (const struct __class_type_info *)&`typeinfo for'AudioChannel,
                            (const struct __class_type_info *)&`typeinfo for'AudioChannelPlayer,
                            0)) != 0
        && (result = *(unsigned __int16 *)(result + 104), result == a2) )
      {
        result = sub_152F4E(v7, v5);
        v5 = (_DWORD *)result;
      }
      else
      {
        v5 = (_DWORD *)*v5;
        if ( v6 )
          result = sub_150C2A(v8, a2);
      }
    }
    while ( v5 );
  }
  if ( v6 )
    return sub_1530E6(v9, v10);
  return result;
}


// ======================================================================
