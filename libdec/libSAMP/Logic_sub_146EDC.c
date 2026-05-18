// ADDR: 0xfa038
// SYMBOL: sub_FA038
int __fastcall sub_FA038(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v5; // r1
  int result; // r0
  __int64 v7; // r2
  int v8; // r0
  int v9; // [sp+0h] [bp-18h]
  int v10; // [sp+4h] [bp-14h]
  int v11; // [sp+8h] [bp-10h]
  int v12; // [sp+Ch] [bp-Ch]
  int v13; // [sp+10h] [bp-8h]
  int v14; // [sp+14h] [bp-4h]
  int savedregs; // [sp+18h] [bp+0h]

  a1[4] = *a2;
  a1[5] = a2[1];
  a1[6] = a2[2];
  a1[7] = *a3;
  v5 = a1[10];
  a1[8] = a3[1];
  result = a3[2];
  a1[9] = result;
  if ( v5 )
  {
    sub_107188(&unk_B2D90, v5, a3, a4, v9, v10, v11, v12, v13, v14, savedregs);
    v7 = *((_QWORD *)a1 + 2);
    v8 = a1[6];
    a1[10] = 0;
    result = sub_F9904(v8, 0, *(float *)&v7, SHIDWORD(v7), *(float *)&v8, 0x3EDu, 0);
    a1[10] = result;
  }
  return result;
}


// ======================================================================
