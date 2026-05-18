// ADDR: 0x101598
// SYMBOL: sub_101598
int __fastcall sub_101598(_DWORD *a1, char *a2, int a3, int a4, int a5, unsigned int a6, unsigned int a7, int a8)
{
  int v11; // r10
  int v12; // r11
  int v13; // r6
  int v14; // r0
  int v15; // r5
  char *v17; // [sp+18h] [bp-50h]
  float v18[4]; // [sp+1Ch] [bp-4Ch] BYREF
  float v19[4]; // [sp+2Ch] [bp-3Ch] BYREF
  float v20[2]; // [sp+3Ch] [bp-2Ch] BYREF
  int v21; // [sp+44h] [bp-24h] BYREF
  int v22[8]; // [sp+48h] [bp-20h] BYREF

  if ( !sub_101754(a1, a3, v22, &v21) )
    return 0;
  v17 = a2;
  v12 = v21;
  v11 = v22[0];
  v13 = off_2636C4(v22[0], v21, 32, 1285);
  v14 = ((int (__fastcall *)(int))((char *)&loc_1DB83C + dword_23DF24))(v13);
  v15 = v14;
  if ( v13 && v14 )
  {
    *(_DWORD *)(*a1 + 96) = v13;
    ((void (__fastcall *)(_DWORD))(dword_23DF24 + 6119929))(*a1);
    ((void (__fastcall *)(_DWORD, unsigned int *, int))((char *)&off_1D5D70 + dword_23DF24 + 1))(*a1, &a7, 3);
    off_2636B8(*a1);
    ((void (*)(void))(dword_23DF24 + 6098021))();
    v20[1] = (float)v12;
    v20[0] = (float)v11;
    v19[3] = (float)HIBYTE(a6) * 0.0039216;
    v19[2] = (float)(unsigned __int8)a6 * 0.0039216;
    v19[1] = (float)BYTE1(a6) * 0.0039216;
    v19[0] = (float)BYTE2(a6) * 0.0039216;
    v18[3] = (float)HIBYTE(a7) * 0.0039216;
    v18[2] = (float)(unsigned __int8)a7 * 0.0039216;
    v18[1] = (float)BYTE1(a7) * 0.0039216;
    v18[0] = (float)BYTE2(a7) * 0.0039216;
    sub_101450(a8, v17, v20, a4, 0, (int)v19, (int)v18, a8);
    off_2636BC(*a1);
  }
  return v15;
}


// ======================================================================
