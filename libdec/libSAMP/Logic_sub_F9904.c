// ADDR: 0xfa3ac
// SYMBOL: sub_FA3AC
int __fastcall sub_FA3AC(
        int a1,
        void *a2,
        int a3,
        unsigned __int8 *a4,
        int *a5,
        int *a6,
        int *a7,
        _DWORD *a8,
        unsigned __int8 *a9)
{
  int *v13; // r0
  int *v14; // r8
  int v15; // r0
  int v16; // r2
  unsigned int v17; // r2
  int v18; // r0
  int v19; // r11
  int v20; // r3
  int v21; // r6
  unsigned int v22; // r6
  char *v23; // r1
  int v24; // r2
  int v26; // [sp+4h] [bp-74h]
  int v27; // [sp+1Ch] [bp-5Ch] BYREF
  char v28[4]; // [sp+24h] [bp-54h] BYREF
  _DWORD v29[20]; // [sp+28h] [bp-50h] BYREF

  sub_F06B2((int)v28);
  v13 = sub_F0734();
  v14 = v13;
  if ( !(*(unsigned __int8 *)v13 << 31) )
  {
    *(_WORD *)v13 = 0;
LABEL_4:
    v17 = 9;
    goto LABEL_6;
  }
  *(_BYTE *)v13[2] = 0;
  v15 = *(unsigned __int8 *)v13;
  v16 = *v14;
  v14[1] = 0;
  if ( !(v15 << 31) )
    goto LABEL_4;
  v17 = (v16 - 2) & 0xFFFFFFFE;
LABEL_6:
  v18 = *a5;
  v19 = *a6;
  v20 = *a7;
  v21 = *a4;
  v29[8] = *a8;
  v29[9] = 0;
  v29[10] = *a9;
  v29[11] = 0;
  v29[0] = v21;
  v29[1] = 0;
  v29[6] = v20;
  v29[4] = v19;
  v29[2] = v18;
  sub_DCA40(&v27, (int)v14, v17, a2, a3, v26, 2267538, 0, (int)v29, 0);
  v22 = *(unsigned __int8 *)v14;
  v23 = (char *)v14[2];
  v24 = v14[1];
  if ( (v22 & 1) == 0 )
  {
    v23 = (char *)v14 + 1;
    v24 = v22 >> 1;
  }
  sub_ED4F8(a1, v23, v24);
  return sub_F0720((int)v28);
}


// ======================================================================
