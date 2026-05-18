// ADDR: 0xfa088
// SYMBOL: sub_FA088
int __fastcall sub_FA088(int a1, char a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int v7; // r1
  int v8; // r0
  int v10; // [sp+0h] [bp-18h]
  int v11; // [sp+4h] [bp-14h]
  int v12; // [sp+8h] [bp-10h]
  int v13; // [sp+Ch] [bp-Ch]
  int v14; // [sp+10h] [bp-8h]
  int v15; // [sp+14h] [bp-4h]
  int savedregs; // [sp+18h] [bp+0h]

  *(_DWORD *)(a1 + 44) = *a3;
  *(_DWORD *)(a1 + 48) = a3[1];
  *(_DWORD *)(a1 + 52) = a3[2];
  *(_DWORD *)(a1 + 56) = *a4;
  v7 = *(_DWORD *)(a1 + 76);
  *(_DWORD *)(a1 + 60) = a4[1];
  v8 = a4[2];
  *(_BYTE *)(a1 + 68) = a2;
  *(_DWORD *)(a1 + 72) = a5;
  *(_DWORD *)(a1 + 64) = v8;
  if ( v7 )
  {
    sub_107188(&unk_B2D90, v7, a5, a4, v10, v11, v12, v13, v14, v15, savedregs);
    *(_DWORD *)(a1 + 76) = sub_F9904(
                             *(_DWORD *)(a1 + 52),
                             0,
                             *(float *)(a1 + 44),
                             *(_DWORD *)(a1 + 48),
                             *(float *)(a1 + 52),
                             0x3EDu,
                             0);
  }
  return sub_FA0E8(a1);
}


// ======================================================================
