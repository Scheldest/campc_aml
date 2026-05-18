// ADDR: 0x11c974
// SYMBOL: sub_11C974
int __fastcall sub_11C974(int a1)
{
  int v2; // r6
  int v3; // r1
  int v4; // r6
  int v5; // r1
  int v6; // r6
  int v7; // r1
  _DWORD v9[4]; // [sp+0h] [bp-30h] BYREF
  _DWORD *v10; // [sp+10h] [bp-20h]

  v10 = v9;
  v9[0] = &off_22C344;
  v2 = sub_1642EC(dword_23DF24 + 4608000, v9);
  if ( v9 == v10 )
  {
    v3 = 4;
  }
  else
  {
    if ( !v10 )
      goto LABEL_6;
    v3 = 5;
  }
  (*(void (**)(void))(*v10 + 4 * v3))();
LABEL_6:
  if ( v2 )
    _android_log_print(5, "AXL", "BinCaches: Read CINFO.BIN was not disabled!");
  else
    _android_log_print(4, "AXL", "BinCaches: Successful disabled read CINFO.BIN");
  v10 = v9;
  v9[0] = &off_22C384;
  v4 = sub_1642EC(dword_23DF24 + 4612096, v9);
  if ( v9 == v10 )
  {
    v5 = 4;
  }
  else
  {
    if ( !v10 )
      goto LABEL_14;
    v5 = 5;
  }
  (*(void (**)(void))(*v10 + 4 * v5))();
LABEL_14:
  if ( v4 )
    _android_log_print(5, "AXL", "BinCaches: Write CINFO.BIN was not disabled!");
  else
    _android_log_print(4, "AXL", "BinCaches: Successful disabled write CINFO.BIN");
  v10 = v9;
  v9[0] = &off_22C3C4;
  v6 = sub_1642EC(dword_23DF24 + 3694592, v9);
  if ( v9 == v10 )
  {
    v7 = 4;
  }
  else
  {
    if ( !v10 )
      goto LABEL_22;
    v7 = 5;
  }
  (*(void (**)(void))(*v10 + 4 * v7))();
LABEL_22:
  if ( v6 )
    _android_log_print(5, "AXL", "BinCaches: Usage MINFO.BIN was not disabled!");
  else
    _android_log_print(4, "AXL", "BinCaches: Successful disabled usage MINFO.BIN");
  return a1;
}


// ======================================================================
