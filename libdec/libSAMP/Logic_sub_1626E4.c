// ADDR: 0x162730
// SYMBOL: sub_162730
int __fastcall sub_162730(int a1, void *a2, int a3, int *a4, int *a5, _DWORD *a6)
{
  int *v10; // r0
  int *v11; // r4
  int v12; // r0
  int v13; // r2
  unsigned int v14; // r2
  int v15; // r0
  int v16; // r1
  unsigned int v17; // r0
  char *v18; // r1
  int v19; // r2
  int v21; // [sp+4h] [bp-54h]
  int v22; // [sp+1Ch] [bp-3Ch] BYREF
  char v23[4]; // [sp+24h] [bp-34h] BYREF
  _DWORD v24[12]; // [sp+28h] [bp-30h] BYREF

  sub_F06B2((int)v23);
  v10 = sub_F0734();
  v11 = v10;
  if ( !(*(unsigned __int8 *)v10 << 31) )
  {
    *(_WORD *)v10 = 0;
LABEL_4:
    v14 = 9;
    goto LABEL_6;
  }
  *(_BYTE *)v10[2] = 0;
  v12 = *(unsigned __int8 *)v10;
  v13 = *v11;
  v11[1] = 0;
  if ( !(v12 << 31) )
    goto LABEL_4;
  v14 = (v13 - 2) & 0xFFFFFFFE;
LABEL_6:
  v15 = *a4;
  v16 = *a5;
  v24[4] = *a6;
  v24[5] = 0;
  v24[2] = v16;
  v24[3] = 0;
  v24[0] = v15;
  sub_DCA40(&v22, (int)v11, v14, a2, a3, v21, 556, 0, (int)v24, 0);
  v17 = *(unsigned __int8 *)v11;
  v18 = (char *)v11[2];
  v19 = v11[1];
  if ( (v17 & 1) == 0 )
  {
    v18 = (char *)v11 + 1;
    v19 = v17 >> 1;
  }
  sub_ED4F8(a1, v18, v19);
  return sub_F0720((int)v23);
}


// ======================================================================
