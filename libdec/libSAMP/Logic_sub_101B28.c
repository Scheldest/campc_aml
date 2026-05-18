// ADDR: 0xf8ad8
// SYMBOL: sub_F8AD8
unsigned __int16 *__fastcall sub_F8AD8(int a1, float a2, float a3, int a4)
{
  unsigned __int16 *result; // r0
  int v6; // r4
  int v10; // [sp+10h] [bp-A0h]
  int v11; // [sp+14h] [bp-9Ch]
  int v12; // [sp+18h] [bp-98h]
  int v13[4]; // [sp+38h] [bp-78h] BYREF
  arg6_F894A v14; // [sp+48h] [bp-68h]
  int v15; // [sp+50h] [bp-60h]
  int v16; // [sp+54h] [bp-5Ch]
  arg9_F894A v17; // [sp+58h] [bp-58h]
  int v18; // [sp+60h] [bp-50h]
  int v19; // [sp+64h] [bp-4Ch]

  result = *(unsigned __int16 **)(a1 + 4);
  if ( result && *(_DWORD *)result != dword_23DF24 + 6716708 )
  {
    v6 = result[19];
    if ( (unsigned int)(v6 - 537) < 2 || v6 == 449 )
    {
      return (unsigned __int16 *)sub_107188(
                                   &unk_B2C64,
                                   *(_DWORD *)(a1 + 8),
                                   COERCE_UNSIGNED_INT64(a2),
                                   HIDWORD(COERCE_UNSIGNED_INT64(a2)),
                                   COERCE_UNSIGNED_INT64(a3),
                                   HIDWORD(COERCE_UNSIGNED_INT64(a3)),
                                   COERCE_UNSIGNED_INT64(*(float *)&a4),
                                   HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&a4)),
                                   v10,
                                   v11,
                                   v12);
    }
    else if ( a3 < -3000.0 || a2 > 3000.0 || a2 < -3000.0 || a3 > 3000.0 )
    {
      sub_F8910(a1, v13);
      sub_F894A(
        a1,
        v13[0],
        v13[1],
        v13[2],
        v13[3],
        v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        (arg12_F894A)__PAIR64__(LODWORD(a3), LODWORD(a2)),
        a4);
      return (unsigned __int16 *)sub_F8C14(a1);
    }
    else
    {
      return (unsigned __int16 *)(*(int (__fastcall **)(unsigned __int16 *))(*(_DWORD *)result + 60))(result);
    }
  }
  return result;
}


// ======================================================================
