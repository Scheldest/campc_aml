// ADDR: 0x18b26c
// SYMBOL: sub_18B26C
int __fastcall sub_18B26C(int a1, void *a2, int a3, int a4, int *a5, int *a6)
{
  int *v10; // r0
  int *v11; // r4
  int v12; // r0
  int v13; // r2
  unsigned int v14; // r2
  int v15; // r1
  int v16; // r3
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
  v15 = *a5;
  v16 = *a6;
  v24[5] = 0;
  v24[3] = 0;
  v24[0] = a4;
  v24[4] = v16;
  v24[2] = v15;
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
// ADDR: 0x18b34c
// SYMBOL: sub_18B34C
int __fastcall sub_18B34C(int a1, void *a2, int a3, int a4, int *a5, int *a6)
{
  int *v10; // r0
  int *v11; // r4
  int v12; // r0
  int v13; // r2
  unsigned int v14; // r2
  int v15; // r1
  int v16; // r3
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
  v15 = *a6;
  v16 = *a5;
  v24[3] = 0;
  v24[0] = a4;
  v24[2] = v16;
  v24[4] = v15;
  sub_DCA40(&v22, (int)v11, v14, a2, a3, v21, 3116, 0, (int)v24, 0);
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
// ADDR: 0x18b42c
// SYMBOL: sub_18B42C
int __fastcall sub_18B42C(int a1, void *a2, int a3, int a4, int *a5)
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
  v21[3] = 0;
  v21[0] = a4;
  v21[2] = v13;
  sub_DCA40(&v19, (int)v9, v12, a2, a3, v18, 28, 0, (int)v21, 0);
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
// ADDR: 0x18b500
// SYMBOL: sub_18B500
int __fastcall sub_18B500(int a1, void *a2, int a3, int a4, int *a5, int *a6)
{
  int *v10; // r0
  int *v11; // r4
  int v12; // r0
  int v13; // r2
  unsigned int v14; // r2
  int v15; // r1
  int v16; // r3
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
  v15 = *a5;
  v16 = *a6;
  v24[5] = 0;
  v24[3] = 0;
  v24[0] = a4;
  v24[4] = v16;
  v24[2] = v15;
  sub_DCA40(&v22, (int)v11, v14, a2, a3, v21, 540, 0, (int)v24, 0);
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
// ADDR: 0x18b5e0
// SYMBOL: sub_18B5E0
int __fastcall sub_18B5E0(int a1, void *a2, int a3, int a4, int *a5, int *a6, int *a7, int *a8, int *a9)
{
  int *v13; // r0
  int *v14; // r8
  void *v15; // r12
  int v16; // r0
  int v17; // r2
  unsigned int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r5
  int v22; // r6
  int v23; // r4
  unsigned int v24; // r6
  char *v25; // r1
  int v26; // r2
  int v28; // [sp+4h] [bp-74h]
  int v29; // [sp+1Ch] [bp-5Ch] BYREF
  char v30[4]; // [sp+24h] [bp-54h] BYREF
  _DWORD v31[20]; // [sp+28h] [bp-50h] BYREF

  sub_F06B2((int)v30);
  v13 = sub_F0734();
  v14 = v13;
  v15 = a2;
  if ( !(*(unsigned __int8 *)v13 << 31) )
  {
    *(_WORD *)v13 = 0;
LABEL_4:
    v18 = 9;
    goto LABEL_6;
  }
  *(_BYTE *)v13[2] = 0;
  v16 = *(unsigned __int8 *)v13;
  v17 = *v14;
  v14[1] = 0;
  if ( !(v16 << 31) )
    goto LABEL_4;
  v18 = (v17 - 2) & 0xFFFFFFFE;
LABEL_6:
  v19 = *a6;
  v20 = *a5;
  v21 = *a7;
  v22 = *a8;
  v23 = *a9;
  v31[11] = 0;
  v31[9] = 0;
  v31[7] = 0;
  v31[5] = 0;
  v31[3] = 0;
  v31[0] = a4;
  v31[10] = v23;
  v31[8] = v22;
  v31[6] = v21;
  v31[4] = v19;
  v31[2] = v20;
  sub_DCA40(&v29, (int)v14, v18, v15, a3, v28, (int)&loc_12121C, 0, (int)v31, 0);
  v24 = *(unsigned __int8 *)v14;
  v25 = (char *)v14[2];
  v26 = v14[1];
  if ( (v24 & 1) == 0 )
  {
    v25 = (char *)v14 + 1;
    v26 = v24 >> 1;
  }
  sub_ED4F8(a1, v25, v26);
  return sub_F0720((int)v30);
}


// ======================================================================
// ADDR: 0x18b6f0
// SYMBOL: sub_18B6F0
int __fastcall sub_18B6F0(int a1, void *a2, int a3, int a4)
{
  int *v8; // r4
  int v9; // r2
  int v10; // r0
  unsigned int v11; // r2
  unsigned int v12; // r0
  char *v13; // r1
  int v14; // r2
  int v16; // [sp+4h] [bp-44h]
  int v17; // [sp+1Ch] [bp-2Ch] BYREF
  _BYTE v18[4]; // [sp+24h] [bp-24h] BYREF
  _DWORD v19[8]; // [sp+28h] [bp-20h] BYREF

  sub_F06B2((int)v18);
  v8 = sub_F0734();
  if ( !(*(unsigned __int8 *)v8 << 31) )
  {
    *(_WORD *)v8 = 0;
LABEL_4:
    v11 = 9;
    goto LABEL_6;
  }
  *(_BYTE *)v8[2] = 0;
  v9 = *(unsigned __int8 *)v8;
  v10 = *v8;
  v8[1] = 0;
  if ( !(v9 << 31) )
    goto LABEL_4;
  v11 = (v10 - 2) & 0xFFFFFFFE;
LABEL_6:
  v19[0] = a4;
  sub_DCA40(&v17, (int)v8, v11, a2, a3, v16, 12, 0, (int)v19, 0);
  v12 = *(unsigned __int8 *)v8;
  v13 = (char *)v8[2];
  v14 = v8[1];
  if ( (v12 & 1) == 0 )
  {
    v13 = (char *)v8 + 1;
    v14 = v12 >> 1;
  }
  sub_ED4F8(a1, v13, v14);
  return sub_F0720((int)v18);
}


// ======================================================================
