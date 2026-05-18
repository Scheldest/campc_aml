// ADDR: 0xf5cec
// SYMBOL: sub_F5CEC
int __fastcall sub_F5CEC(_DWORD *a1, int a2)
{
  int result; // r0
  int v4; // r1
  int v5; // r0
  _DWORD v6[3]; // [sp+4h] [bp-24h] BYREF
  double v7; // [sp+10h] [bp-18h] BYREF
  int v8; // [sp+18h] [bp-10h]

  result = dword_23DF24;
  if ( !*(_BYTE *)(dword_23DF24 + 9776158) )
  {
    result = *(unsigned __int8 *)(dword_23DF24 + 9776159);
    if ( !*(_BYTE *)(dword_23DF24 + 9776159) )
    {
      v8 = 1036831949;
      *(_QWORD *)&v7 = unk_92D08;
      sub_108FB2(v6, a2 + 688, &v7);
      a1[93] = v6[0];
      v4 = dword_23DF24;
      a1[94] = v6[1];
      v5 = *(_DWORD *)(v4 + 10471740);
      a1[95] = v6[2];
      return ((int (__fastcall *)(int, int))(v4 + 1923769))(v5, 1045220557);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xf5d68
// SYMBOL: sub_F5D68
int __fastcall sub_F5D68(_DWORD *a1, int a2)
{
  int result; // r0
  int v5; // s0
  int v6; // r1
  int v7; // r0
  bool v8; // zf
  _BYTE v9[64]; // [sp+0h] [bp-68h] BYREF
  _DWORD v10[2]; // [sp+40h] [bp-28h] BYREF
  int v11; // [sp+48h] [bp-20h]
  int v12; // [sp+4Ch] [bp-1Ch] BYREF
  int v13; // [sp+50h] [bp-18h]
  int v14; // [sp+54h] [bp-14h]

  result = sub_104326(a2);
  if ( result )
  {
    v14 = 1058642330;
    v12 = 0;
    v13 = 0;
    v5 = 1008981770;
    v6 = *(unsigned __int16 *)(sub_104326(a2) + 38);
    v7 = *(_DWORD *)(dword_23DF24 + 10471740);
    if ( v6 > 508 )
    {
      if ( (unsigned int)(v6 - 509) > 0xD || ((1 << (v6 + 3)) & 0x3003) == 0 )
      {
        v8 = v6 == 586;
        if ( v6 != 586 )
          v8 = v6 == 581;
        if ( !v8 )
          goto LABEL_14;
      }
    }
    else if ( ((unsigned int)(v6 - 461) > 0x14 || ((1 << (v6 + 51)) & 0x100087) == 0) && v6 != 448 )
    {
      goto LABEL_14;
    }
    v5 = 1050253722;
    v14 = 1055286886;
    v13 = 1050253722;
    v12 = 1028443341;
LABEL_14:
    ((void (__fastcall *)(int, int))(dword_23DF24 + 1923769))(v7, v5);
    j_memcpy(v9, *(const void **)(*(_DWORD *)(a2 + 92) + 20), sizeof(v9));
    sub_108FB2(v10, v9, &v12);
    a1[93] = v10[0];
    a1[94] = v10[1];
    result = v11;
    a1[95] = v11;
  }
  return result;
}


// ======================================================================
// ADDR: 0x104326
// SYMBOL: sub_104326
int __fastcall sub_104326(int a1)
{
  return *(_DWORD *)(*(_DWORD *)(a1 + 92) + 1424);
}


// ======================================================================
