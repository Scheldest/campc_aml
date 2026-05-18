// ADDR: 0x160dcc
// SYMBOL: sub_160DCC
int __fastcall sub_160DCC(
        int a1,
        void *a2,
        int a3,
        int *a4,
        int *a5,
        int *a6,
        int *a7,
        int *a8,
        _DWORD *a9,
        _DWORD *a10,
        int *a11)
{
  int *v15; // r4
  int v16; // lr
  int v17; // r2
  unsigned int v18; // r2
  int v19; // r12
  int v20; // lr
  int v21; // r11
  int v22; // r5
  int v23; // r0
  int v24; // r6
  unsigned int v25; // r6
  char *v26; // r1
  int v27; // r2
  int v29; // [sp+4h] [bp-84h]
  int v30; // [sp+1Ch] [bp-6Ch] BYREF
  _BYTE v31[4]; // [sp+24h] [bp-64h] BYREF
  _DWORD v32[24]; // [sp+28h] [bp-60h] BYREF

  sub_F06B2((int)v31);
  v15 = sub_F0734();
  if ( !(*(unsigned __int8 *)v15 << 31) )
  {
    *(_WORD *)v15 = 0;
LABEL_4:
    v18 = 9;
    goto LABEL_6;
  }
  *(_BYTE *)v15[2] = 0;
  v16 = *(unsigned __int8 *)v15;
  v17 = *v15;
  v15[1] = 0;
  if ( !(v16 << 31) )
    goto LABEL_4;
  v18 = (v17 - 2) & 0xFFFFFFFE;
LABEL_6:
  v19 = *a6;
  v20 = *a8;
  v21 = *a11;
  v32[12] = *a10;
  v22 = *a5;
  v32[10] = *a9;
  v32[11] = 0;
  v23 = *a7;
  v24 = *a4;
  v32[2] = v22;
  v32[3] = 0;
  v32[0] = v24;
  v32[1] = 0;
  v32[13] = 0;
  v32[14] = v21;
  v32[6] = v23;
  v32[7] = 0;
  v32[8] = v20;
  v32[4] = v19;
  sub_DCA40(&v30, (int)v15, v18, a2, a3, v29, -1037292510, 0, (int)v32, 0);
  v25 = *(unsigned __int8 *)v15;
  v26 = (char *)v15[2];
  v27 = v15[1];
  if ( (v25 & 1) == 0 )
  {
    v26 = (char *)v15 + 1;
    v27 = v25 >> 1;
  }
  sub_ED4F8(a1, v26, v27);
  return sub_F0720((int)v31);
}


// ======================================================================
// ADDR: 0x160eec
// SYMBOL: sub_160EEC
int __fastcall sub_160EEC(int a1, void *a2, int a3, int *a4, int *a5, int *a6, _DWORD *a7, int *a8)
{
  int *v12; // r4
  int v13; // r3
  int v14; // r2
  unsigned int v15; // r2
  int v16; // r0
  int v17; // r3
  int v18; // lr
  int v19; // r6
  unsigned int v20; // r0
  char *v21; // r1
  int v22; // r2
  int v24; // [sp+4h] [bp-6Ch]
  int v25; // [sp+1Ch] [bp-54h] BYREF
  _BYTE v26[4]; // [sp+24h] [bp-4Ch] BYREF
  _DWORD v27[18]; // [sp+28h] [bp-48h] BYREF

  sub_F06B2((int)v26);
  v12 = sub_F0734();
  if ( !(*(unsigned __int8 *)v12 << 31) )
  {
    *(_WORD *)v12 = 0;
LABEL_4:
    v15 = 9;
    goto LABEL_6;
  }
  *(_BYTE *)v12[2] = 0;
  v13 = *(unsigned __int8 *)v12;
  v14 = *v12;
  v12[1] = 0;
  if ( !(v13 << 31) )
    goto LABEL_4;
  v15 = (v14 - 2) & 0xFFFFFFFE;
LABEL_6:
  v16 = *a6;
  v17 = *a4;
  v18 = *a8;
  v19 = *a5;
  v27[6] = *a7;
  v27[7] = 0;
  v27[2] = v19;
  v27[3] = 0;
  v27[0] = v17;
  v27[1] = 0;
  v27[8] = v18;
  v27[4] = v16;
  sub_DCA40(&v25, (int)v12, v15, a2, a3, v24, (int)&unk_C2C22, 0, (int)v27, 0);
  v20 = *(unsigned __int8 *)v12;
  v21 = (char *)v12[2];
  v22 = v12[1];
  if ( (v20 & 1) == 0 )
  {
    v21 = (char *)v12 + 1;
    v22 = v20 >> 1;
  }
  sub_ED4F8(a1, v21, v22);
  return sub_F0720((int)v26);
}


// ======================================================================
