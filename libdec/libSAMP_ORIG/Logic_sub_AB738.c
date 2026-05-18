// ADDR: 0xab3c0
// SYMBOL: sub_AB3C0
int __fastcall sub_AB3C0(unsigned int a1, int a2, int *a3, int *a4, int *a5, char *s1, float a7)
{
  int v8; // r10
  int v9; // r6
  int v10; // r11
  float v11; // r4
  __int64 v12; // r0
  float v13; // s10
  unsigned __int64 v14; // kr00_8
  float v15; // s6
  float v16; // s10
  const char *v17; // r0
  int v18; // r4
  int v19; // r4
  int v21; // r8
  int v22; // r9
  int v23; // r4
  int v24; // r0
  bool v25; // zf
  bool v26; // zf
  int v27; // r0
  int v28; // r9
  int *v29; // r5
  int v30; // r0
  int v31; // r6
  unsigned int v32; // r0
  int v33; // r0
  char *s; // [sp+24h] [bp-C4h]
  const char *v35; // [sp+28h] [bp-C0h]
  float v39[2]; // [sp+38h] [bp-B0h] BYREF
  __int64 v40; // [sp+40h] [bp-A8h] BYREF
  unsigned __int64 v41; // [sp+48h] [bp-A0h] BYREF
  unsigned __int64 v42; // [sp+50h] [bp-98h] BYREF
  float v43; // [sp+58h] [bp-90h]
  float v44; // [sp+5Ch] [bp-8Ch]
  unsigned __int64 v45; // [sp+60h] [bp-88h] BYREF
  float v46; // [sp+68h] [bp-80h] BYREF
  float v47; // [sp+6Ch] [bp-7Ch]
  float v48[2]; // [sp+74h] [bp-74h] BYREF
  char v49[64]; // [sp+7Ch] [bp-6Ch] BYREF

  v8 = dword_1ACF68;
  v9 = *(_DWORD *)(dword_1ACF68 + 6572);
  *(_BYTE *)(v9 + 124) = 1;
  if ( *(_BYTE *)(v9 + 127) )
    return 0;
  v10 = sub_8AAD4(v9, a1, 0);
  v11 = sub_97224();
  sub_899BC(v48, a1, 0, 1, -1.0);
  HIDWORD(v12) = *(_DWORD *)(v8 + 5460);
  v13 = *(float *)(v9 + 204);
  v14 = *(_QWORD *)(v9 + 200);
  v45 = v14;
  v15 = (float)((float)(*((float *)&v12 + 1) + *((float *)&v12 + 1)) + v48[1]) + v13;
  v16 = 0.0;
  v46 = v11 + *(float *)&v14;
  v47 = v15;
  if ( v48[0] > 0.0 )
    v16 = v48[0] + *(float *)(v8 + 5480);
  v42 = v14;
  LODWORD(v12) = &v42;
  v43 = v16 + (float)(v11 + *(float *)&v45);
  v44 = v15 + 0.0;
  sub_8B2C0(v12);
  if ( !sub_8B314((float *)&v42, v10, (float *)&v45) )
    return 0;
  v17 = s1;
  s = (char *)a1;
  if ( !s1 )
  {
    v18 = a2;
    v17 = (const char *)*((_DWORD *)&unk_1115FC + 3 * a2 + 1);
    goto LABEL_12;
  }
  v18 = a2;
  if ( a2 != 4 )
  {
LABEL_12:
    v35 = v17;
    goto LABEL_13;
  }
  if ( strcmp(s1, "%d") )
  {
    v17 = sub_A8554(s1);
    goto LABEL_12;
  }
  v35 = s1;
LABEL_13:
  v21 = sub_8B914((float *)&v45, v10);
  if ( *(_DWORD *)(dword_1ACF68 + 6608) == v10 && *(_DWORD *)(dword_1ACF68 + 11432) == v10 )
    return sub_A864C((int)&v45, v10, a1, v18, a3, v35);
  v22 = sub_8BA6C((_DWORD *)v9, v10);
  if ( v21 )
  {
    v23 = *(unsigned __int8 *)(v8 + 984);
    if ( *(_BYTE *)(v8 + 984) )
      v23 = 1;
  }
  else
  {
    v23 = 0;
  }
  if ( v22 | v23 )
    goto LABEL_30;
  v24 = *(_DWORD *)(v8 + 6844);
  v25 = v24 == v10;
  if ( v24 != v10 )
    v25 = *(_DWORD *)(v8 + 6856) == v10;
  if ( v25 )
  {
LABEL_30:
    sub_8AF74(v10, v9);
    sub_8AFEC(v10, v9);
    sub_8C628(v9);
    *(_DWORD *)(v8 + 6628) = 12;
    if ( v22 )
      goto LABEL_31;
    v26 = v23 == 0;
    if ( v23 )
      v26 = *(_BYTE *)(v8 + 248) == 0;
    if ( !v26 || *(_DWORD *)(v8 + 6856) == v10 )
    {
LABEL_31:
      sub_8BB40(v9);
      v18 = a2;
      return sub_A864C((int)&v45, v10, a1, v18, a3, v35);
    }
  }
  if ( *(_DWORD *)(v8 + 6608) == v10 )
  {
    v27 = 9;
  }
  else
  {
    v27 = 7;
    if ( *(_DWORD *)(v8 + 6588) == v10 )
      v27 = 8;
  }
  v28 = sub_88C10(v27, 1.0);
  sub_8A1F8(&v45, v10, 1);
  sub_89B34(*(float *)&v45, *((float *)&v45 + 1), v46, v47, v28, 1, *(float *)(v8 + 5464));
  v29 = a3;
  v40 = 0x7F7FFFFF7F7FFFFFLL;
  v41 = 0xFF7FFFFFFF7FFFFFLL;
  v19 = sub_A87D4((int)&v45, v10, a2, a3, a4, a5, (int)v35, a7, 0, (int)&v40);
  if ( v19 )
    sub_8B0DC();
  if ( *(float *)&v41 > *(float *)&v40 )
  {
    v30 = 19;
    v31 = *(_DWORD *)(v9 + 636);
    if ( *(_DWORD *)(v8 + 6608) == v10 )
      v30 = 20;
    v32 = sub_88C10(v30, 1.0);
    v29 = a3;
    sub_9D624(v31, (int)&v40, (float *)&v41, v32, *(float *)(v8 + 5516), 15);
  }
  v33 = sub_A819C(v49, 64, a2, v29, v35);
  v39[0] = 0.5;
  v39[1] = 0.5;
  sub_89A94((char *)&v45, &v46, v49, (unsigned int)&v49[v33], 0, v39, 0);
  if ( v48[0] > 0.0 )
    sub_89110(
      COERCE_INT(v46 + *(float *)(v8 + 5480)),
      COERCE_INT(*((float *)&v45 + 1) + *(float *)(v8 + 5460)),
      s,
      0,
      1);
  return v19;
}


// ======================================================================
