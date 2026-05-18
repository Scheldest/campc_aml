// ADDR: 0x126ec4
// SYMBOL: sub_126EC4
int __fastcall sub_126EC4(int a1, void *a2, int a3, unsigned __int8 *a4)
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
// ADDR: 0x161d0c
// SYMBOL: sub_161D0C
int __fastcall sub_161D0C(int a1, void *a2, int a3, unsigned __int16 *a4, unsigned __int8 *a5)
{
  int *v9; // r4
  int v10; // r3
  int v11; // r1
  unsigned int v12; // r2
  int v13; // r1
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
  v13 = *a4;
  v21[2] = *a5;
  v21[3] = 0;
  v21[0] = v13;
  v21[1] = 0;
  sub_DCA40(&v19, (int)v9, v12, a2, a3, v18, 34, 0, (int)v21, 0);
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
// ADDR: 0x161de4
// SYMBOL: sub_161DE4
int __fastcall sub_161DE4(int a1, void *a2, int a3, unsigned __int8 *a4, _DWORD *a5)
{
  int *v9; // r0
  int *v10; // r4
  int v11; // r3
  int v12; // r1
  unsigned int v13; // r2
  unsigned int v14; // r5
  unsigned int v15; // r1
  unsigned __int8 *v16; // r3
  unsigned int v17; // r0
  char *v18; // r1
  int v19; // r2
  int v21; // [sp+4h] [bp-4Ch]
  int v22; // [sp+1Ch] [bp-34h] BYREF
  _BYTE v23[4]; // [sp+24h] [bp-2Ch] BYREF
  _DWORD v24[10]; // [sp+28h] [bp-28h] BYREF

  sub_F06B2((int)v23);
  v9 = sub_F0734();
  v10 = v9;
  if ( !(*(unsigned __int8 *)v9 << 31) )
  {
    *(_WORD *)v9 = 0;
LABEL_4:
    v13 = 9;
    goto LABEL_6;
  }
  *(_BYTE *)v9[2] = 0;
  v11 = *(unsigned __int8 *)v9;
  v12 = *v9;
  v9[1] = 0;
  if ( !(v11 << 31) )
    goto LABEL_4;
  v13 = (v12 - 2) & 0xFFFFFFFE;
LABEL_6:
  v14 = *a4;
  v24[2] = *a5;
  v16 = (unsigned __int8 *)*((_DWORD *)a4 + 2);
  v15 = *((_DWORD *)a4 + 1);
  v24[3] = 0;
  if ( (v14 & 1) == 0 )
    v15 = v14 >> 1;
  v24[1] = v15;
  if ( (v14 & 1) == 0 )
    v16 = a4 + 1;
  v24[0] = v16;
  sub_DCA40(&v22, (int)v9, v13, a2, a3, v21, 45, 0, (int)v24, 0);
  v17 = *(unsigned __int8 *)v10;
  v18 = (char *)v10[2];
  v19 = v10[1];
  if ( (v17 & 1) == 0 )
  {
    v18 = (char *)v10 + 1;
    v19 = v17 >> 1;
  }
  sub_ED4F8(a1, v18, v19);
  return sub_F0720((int)v23);
}


// ======================================================================
