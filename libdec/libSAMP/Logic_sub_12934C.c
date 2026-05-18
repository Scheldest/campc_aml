// ADDR: 0x12956c
// SYMBOL: sub_12956C
int __fastcall sub_12956C(_WORD *a1, int (__fastcall **a2)(int, int, int), int a3, int a4, int a5)
{
  int v5; // r5
  int v10; // r0
  int v11; // r0
  int v12; // r11
  int v13; // r0
  int v14; // r8
  int v16; // [sp+0h] [bp-20h]

  v5 = (unsigned __int16)*a1;
  if ( v5 != 4795 && v5 != 15965 )
    return (*a2)(a3, a4, a5);
  v10 = word_B3CB4[sub_129074(v5) ^ 2];
  *a1 = v10;
  v16 = *(_DWORD *)(sub_163768(v10) + 4 * (unsigned __int16)*a1);
  v11 = sub_163768(v16);
  v12 = *(_DWORD *)(v11 + 4 * v5);
  *(_DWORD *)(sub_163768(v11) + 4 * (unsigned __int16)*a1) = v12;
  v13 = (*a2)(a3, a4, a5);
  v14 = v13;
  if ( v16 )
    *(_DWORD *)(sub_163768(v13) + 4 * (unsigned __int16)*a1) = v16;
  *a1 = v5;
  return v14;
}


// ======================================================================
