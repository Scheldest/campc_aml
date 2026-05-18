// ADDR: 0x10bd64
// SYMBOL: sub_10BD64
int __fastcall sub_10BD64(int a1, __int16 a2)
{
  int v2; // r4
  int result; // r0
  __int16 v4; // [sp+0h] [bp-20h] BYREF
  int v5; // [sp+4h] [bp-1Ch]
  int v6; // [sp+8h] [bp-18h]
  __int16 v7; // [sp+Eh] [bp-12h] BYREF
  _BYTE v8[16]; // [sp+10h] [bp-10h] BYREF

  v2 = a1 + 72;
  v7 = a2;
  result = sub_10C464(a1 + 72, &v7);
  if ( !result )
  {
    v5 = sub_F0B30();
    v6 = 0;
    v4 = v7;
    return ((int (__fastcall *)(_BYTE *, int, __int16 *, __int16 *))sub_10C50A)(v8, v2, &v4, &v4);
  }
  return result;
}


// ======================================================================
