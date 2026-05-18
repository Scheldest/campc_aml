// ADDR: 0x10b56c
// SYMBOL: sub_10B56C
int sub_10B56C()
{
  int result; // r0

  result = sub_108640((int)"hud");
  if ( result == -1 )
    return sub_108640((int)"*");
  return result;
}


// ======================================================================
// ADDR: 0x10b6e4
// SYMBOL: sub_10B6E4
int __fastcall sub_10B6E4(int a1, void *a2, int a3, _DWORD *a4)
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
  v19[0] = *a4;
  v19[1] = 0;
  sub_DCA40(&v17, (int)v8, v11, a2, a3, v16, 2, 0, (int)v19, 0);
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
// ADDR: 0x10b7b4
// SYMBOL: sub_10B7B4
int __fastcall sub_10B7B4(int a1, void *a2, int a3, unsigned __int8 *a4)
{
  int *v8; // r4
  int v9; // r2
  int v10; // r0
  unsigned int v11; // r2
  unsigned int v12; // r3
  __int64 v13; // r0
  unsigned int v14; // r0
  char *v15; // r1
  int v16; // r2
  int v18; // [sp+4h] [bp-44h]
  int v19; // [sp+1Ch] [bp-2Ch] BYREF
  _BYTE v20[4]; // [sp+24h] [bp-24h] BYREF
  _DWORD v21[8]; // [sp+28h] [bp-20h] BYREF

  sub_F06B2((int)v20);
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
  v12 = *a4;
  v13 = *(_QWORD *)(a4 + 4);
  if ( (v12 & 1) == 0 )
    LODWORD(v13) = v12 >> 1;
  v21[1] = v13;
  if ( (v12 & 1) == 0 )
    HIDWORD(v13) = a4 + 1;
  v21[0] = HIDWORD(v13);
  sub_DCA40(&v19, (int)v8, v11, a2, a3, v18, 13, 0, (int)v21, 0);
  v14 = *(unsigned __int8 *)v8;
  v15 = (char *)v8[2];
  v16 = v8[1];
  if ( (v14 & 1) == 0 )
  {
    v15 = (char *)v8 + 1;
    v16 = v14 >> 1;
  }
  sub_ED4F8(a1, v15, v16);
  return sub_F0720((int)v20);
}


// ======================================================================
