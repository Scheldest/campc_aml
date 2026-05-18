// ADDR: 0xfe8e8
// SYMBOL: sub_FE8E8
int __fastcall sub_FE8E8(int *a1, char *s)
{
  signed int v4; // r0
  int v5; // r5
  bool v6; // cf
  int v7; // r1
  int v8; // r2
  int v9; // r0
  int (__fastcall *v10)(char *, int); // r5
  int v11; // r0
  _DWORD v13[2]; // [sp+8h] [bp-20h] BYREF
  char v14; // [sp+10h] [bp-18h]

  v4 = strlen(s);
  dword_25AE90 = v4;
  if ( v4 << 29 )
  {
    v5 = 8;
    while ( v4 >= v5 )
    {
      v6 = (unsigned int)v5 >= 0x19;
      v5 += 8;
      if ( v6 )
        goto LABEL_6;
    }
    dword_25AE90 = v5;
  }
  else
  {
LABEL_6:
    v5 = v4;
  }
  v7 = *((_DWORD *)s + 1);
  v8 = *a1;
  v9 = *(_DWORD *)s;
  v14 = 0;
  v13[0] = v9;
  v13[1] = v7;
  _android_log_print(
    4,
    "AXL",
    "Create numberplate for model %d: %s[%d]",
    *(unsigned __int16 *)(*(_DWORD *)v8 + 38),
    (const char *)v13,
    v5);
  v10 = (int (__fastcall *)(char *, int))off_25AE98;
  v11 = sub_16381E(*(_DWORD *)a1[1]);
  return v10(s, v11);
}


// ======================================================================
// ADDR: 0x1637f8
// SYMBOL: sub_1637F8
int sub_1637F8()
{
  return ((int (*)(void))(dword_23DF24 + 3706631))();
}


// ======================================================================
// ADDR: 0x16381e
// SYMBOL: sub_16381E
int __fastcall sub_16381E(int a1)
{
  return *(unsigned __int8 *)(a1 + 73);
}


// ======================================================================
// ADDR: 0x163824
// SYMBOL: sub_163824
int __fastcall sub_163824(int result, char a2)
{
  *(_BYTE *)(result + 73) = a2;
  return result;
}


// ======================================================================
