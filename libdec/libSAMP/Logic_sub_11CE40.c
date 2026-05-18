// ADDR: 0x11d270
// SYMBOL: sub_11D270
int __fastcall sub_11D270(int a1, void *a2, int a3, unsigned __int16 *a4, int *a5)
{
  int *v9; // r4
  int v10; // r3
  int v11; // r1
  unsigned int v12; // r2
  int v13; // r0
  unsigned int v14; // r0
  char *v15; // r1
  int v16; // r2
  int v18; // [sp+4h] [bp-4Ch]
  int v19; // [sp+1Ch] [bp-34h] BYREF
  _BYTE v20[4]; // [sp+24h] [bp-2Ch] BYREF
  _DWORD v21[10]; // [sp+28h] [bp-28h] BYREF

  sub_F06B2((int)v20);
  v9 = sub_F0734();
  if ( !(*(unsigned __int8 *)v9 << 31) )
  {
    *(_WORD *)v9 = 0;
LABEL_4:
    v12 = 9;
    goto LABEL_6;
  }
  *(_BYTE *)v9[2] = 0;
  v10 = *(unsigned __int8 *)v9;
  v11 = *v9;
  v9[1] = 0;
  if ( !(v10 << 31) )
    goto LABEL_4;
  v12 = (v11 - 2) & 0xFFFFFFFE;
LABEL_6:
  v13 = *a5;
  v21[0] = *a4;
  v21[1] = 0;
  v21[2] = v13;
  sub_DCA40(&v19, (int)v9, v12, a2, a3, v18, 194, 0, (int)v21, 0);
  v14 = *(unsigned __int8 *)v9;
  v15 = (char *)v9[2];
  v16 = v9[1];
  if ( (v14 & 1) == 0 )
  {
    v15 = (char *)v9 + 1;
    v16 = v14 >> 1;
  }
  sub_ED4F8(a1, v15, v16);
  return sub_F0720((int)v20);
}


// ======================================================================
// ADDR: 0x1637f4
// SYMBOL: sub_1637F4
int __fastcall sub_1637F4(int a1)
{
  return a1 + 8;
}


// ======================================================================
