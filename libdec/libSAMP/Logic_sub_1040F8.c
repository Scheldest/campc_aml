// ADDR: 0x103ef4
// SYMBOL: sub_103EF4
int __fastcall sub_103EF4(int a1)
{
  int v2; // r3
  int v4; // r1
  int v5; // r2
  int v6; // r3
  unsigned int v7; // r2
  unsigned int v8; // r1
  int v9; // r0
  int v10; // [sp+0h] [bp-20h]
  int v11; // [sp+4h] [bp-1Ch]
  int v12; // [sp+8h] [bp-18h]
  int v13; // [sp+Ch] [bp-14h]
  int v14; // [sp+10h] [bp-10h]
  int v15; // [sp+14h] [bp-Ch]
  int v16; // [sp+14h] [bp-Ch]
  int v17; // [sp+18h] [bp-8h]
  int v18; // [sp+18h] [bp-8h]

  v2 = *(unsigned __int8 *)(a1 + 96);
  *(_DWORD *)a1 = &off_22B0F0;
  _android_log_print(4, "AXL", "Destroying PlayerPed(%d)", v2);
  sub_108D34(*(unsigned __int8 *)(a1 + 96), 0);
  if ( *(_DWORD *)(a1 + 92) && sub_1082F4(*(_DWORD *)(a1 + 8)) && **(_DWORD **)(a1 + 92) != dword_23DF24 + 6716708 )
  {
    v4 = *(_DWORD *)(a1 + 104);
    if ( v4 )
    {
      sub_107188(&unk_B369A, v4, 0, 0, 0, 0, 0, 0, 0, v15, v17);
      sub_107188(&unk_B36AE, *(_DWORD *)(a1 + 104), v5, v6, v10, v11, v12, v13, v14, v16, v18);
      *(_DWORD *)(a1 + 104) = 0;
    }
    if ( *(_BYTE *)(a1 + 116) )
      goto LABEL_13;
    v7 = 0;
    do
    {
      v8 = v7;
      if ( v7 == 9 )
        break;
      ++v7;
    }
    while ( !*(_BYTE *)(a1 + 117 + v8) );
    if ( v8 <= 8 )
LABEL_13:
      sub_104026(a1);
    v9 = *(_DWORD *)(a1 + 92);
    if ( *(unsigned __int8 *)(v9 + 1157) << 31 )
    {
      sub_104098(a1, 1120403456, 1120403456, 1101004800);
      v9 = *(_DWORD *)(a1 + 92);
    }
    *(_DWORD *)(*(_DWORD *)(v9 + 1088) + 76) = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 4))(v9);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
  }
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  return a1;
}


// ======================================================================
