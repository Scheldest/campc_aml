// ADDR: 0x1444ec
// SYMBOL: sub_1444EC
int __fastcall sub_1444EC(
        int result,
        unsigned int a2,
        int a3,
        int a4,
        float a5,
        unsigned int a6,
        unsigned int a7,
        char a8)
{
  char v8; // r8
  bool v9; // cc
  int *v10; // r6
  int v13; // [sp+0h] [bp-30h]
  int v14; // [sp+4h] [bp-2Ch]
  int v15; // [sp+8h] [bp-28h]
  int v16; // [sp+Ch] [bp-24h]
  int v17; // [sp+10h] [bp-20h]
  int v18; // [sp+14h] [bp-1Ch]
  int v19; // [sp+18h] [bp-18h]

  v9 = a2 > 0x63;
  if ( a2 <= 0x63 )
  {
    v8 = a6;
    v9 = a6 > 0x7E;
  }
  if ( !v9 )
  {
    v10 = (int *)(result + 4 * a2 + 544);
    if ( *v10 )
    {
      sub_107188(word_B9528, *v10, a3, a4, v13, v14, v15, v16, v17, v18, v19);
      *v10 = 0;
    }
    result = sub_F9904(dword_23DEF0, v8, *(float *)&a3, a4, a5, a7, a8);
    *v10 = result;
  }
  return result;
}


// ======================================================================
