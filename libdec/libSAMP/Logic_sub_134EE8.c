// ADDR: 0x1359b8
// SYMBOL: sub_1359B8
int __fastcall sub_1359B8(int a1)
{
  int v2; // r0
  int v3; // r1
  _BYTE v5[16]; // [sp+0h] [bp-20h] BYREF
  _BYTE *v6; // [sp+10h] [bp-10h]

  v2 = sub_1359EA(v5);
  sub_135A16(v2, a1);
  if ( v5 == v6 )
  {
    v3 = 4;
    goto LABEL_5;
  }
  if ( v6 )
  {
    v3 = 5;
LABEL_5:
    (*(void (**)(void))(*(_DWORD *)v6 + 4 * v3))();
  }
  return a1;
}


// ======================================================================
