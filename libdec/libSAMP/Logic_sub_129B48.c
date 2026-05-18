// ADDR: 0x129bec
// SYMBOL: sub_129BEC
int __fastcall sub_129BEC(int a1)
{
  int v2; // r1
  _DWORD v4[4]; // [sp+0h] [bp-20h] BYREF
  _DWORD *v5; // [sp+10h] [bp-10h]

  v5 = v4;
  v4[0] = &off_22D7D4;
  sub_1642EC(dword_23DF24 + 6111232, v4);
  if ( v4 == v5 )
  {
    v2 = 4;
    goto LABEL_5;
  }
  if ( v5 )
  {
    v2 = 5;
LABEL_5:
    (*(void (**)(void))(*v5 + 4 * v2))();
  }
  return a1;
}


// ======================================================================
