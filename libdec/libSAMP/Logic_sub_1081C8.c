// ADDR: 0x1074a4
// SYMBOL: sub_1074A4
int __fastcall sub_1074A4(_DWORD *a1, int a2, int a3, int a4, float a5)
{
  int v7; // r4
  int v8; // r0
  int v9; // r8
  int v10; // r10
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r6
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r0
  int v20; // r5
  float v21; // r6
  int v22; // r5
  float v23; // s0
  int v25; // [sp+0h] [bp-38h]
  int v26; // [sp+0h] [bp-38h]
  int v27; // [sp+0h] [bp-38h]
  int v28; // [sp+4h] [bp-34h]
  int v29; // [sp+4h] [bp-34h]
  int v30; // [sp+4h] [bp-34h]
  int v31; // [sp+8h] [bp-30h]
  int v32; // [sp+8h] [bp-30h]
  float v33; // [sp+Ch] [bp-2Ch] BYREF
  float v34; // [sp+10h] [bp-28h]
  float v35; // [sp+14h] [bp-24h]
  int v36[8]; // [sp+18h] [bp-20h] BYREF

  v31 = a4;
  v36[0] = a3;
  _android_log_print(4, "AXL", "Object snapshot: %d", a2);
  v7 = off_2636C4(256, 256, 32, 1285);
  v8 = ((int (__fastcall *)(int))((char *)&loc_1DB83C + dword_23DF24))(v7);
  v9 = v8;
  if ( v7 && v8 )
  {
    v10 = a2;
    if ( a2 == 3118 )
      v10 = 18631;
    if ( a2 == 1373 )
      v10 = 18631;
    if ( (a2 & 0xFFFFFFFE) == 0xDE0 )
      v10 = 18631;
    v14 = sub_F9C94(v10);
    if ( !v14 )
    {
      v15 = sub_F9CBC(v10, v11, v12, v13, v25, v28, v31, SLODWORD(v33), SLODWORD(v34), SLODWORD(v35), v36[0]);
      sub_F9CCC(v15, v16, v17, v18, v26, v29, v32, SLODWORD(v33), SLODWORD(v34), SLODWORD(v35), v36[0]);
      if ( !sub_F9CD8(v10, 200) )
      {
        _android_log_print(5, "AXL", "Can't load model %d for object snapshot", v10);
        return v9;
      }
    }
    v19 = sub_108DC8(v10);
    if ( v19 )
    {
      v20 = v19;
      v30 = v14;
      v21 = sub_108E24(v10);
      v35 = 0.0;
      v33 = 0.0;
      v34 = 0.0;
      sub_108E64(v10, &v33);
      v27 = v20;
      v22 = *(_DWORD *)(v20 + 4);
      if ( v22 )
      {
        v33 = -v33;
        v35 = 50.0 - v35;
        v34 = (float)((float)(v21 * -2.25) + -0.1) * a5;
        sub_1090FC(v22, &v33, 1);
        if ( v10 == 18631 )
        {
          v23 = 180.0;
        }
        else
        {
          if ( *(float *)v31 != 0.0 )
            sub_109118(v22, 0, *(_DWORD *)v31);
          if ( *(float *)(v31 + 4) != 0.0 )
            sub_109118(v22, 1, *(_DWORD *)(v31 + 4));
          v23 = *(float *)(v31 + 8);
          if ( v23 == 0.0 )
            goto LABEL_22;
        }
        sub_109118(v22, 2, LODWORD(v23));
      }
LABEL_22:
      *(_DWORD *)(*a1 + 96) = v7;
      ((void (__fastcall *)(_DWORD))(dword_23DF24 + 6119929))(*a1);
      ((void (__fastcall *)(_DWORD, int *, int))((char *)&off_1D5D70 + dword_23DF24 + 1))(*a1, v36, 3);
      off_2636B8(*a1);
      sub_10914C(a1[1]);
      off_263758(6, 1);
      off_263758(8, 1);
      off_263758(7, 2);
      off_263758(30, 0);
      off_263758(20, 0);
      off_263758(14, 0);
      ((void (*)(void))(dword_23DF24 + 6097857))();
      sub_108DF8(v27);
      off_2636BC(*a1);
      sub_109174(a1[1]);
      sub_108EA0(v27);
      if ( !v30 )
        sub_F9D44(v10, 0);
    }
  }
  return v9;
}


// ======================================================================
// ADDR: 0x107730
// SYMBOL: sub_107730
int __fastcall sub_107730(_DWORD *a1, int a2, int a3, int a4, float a5)
{
  int v8; // r4
  int v9; // r9
  int v10; // r6
  int result; // r0
  int *v12; // r1
  float v13; // s0
  int v14[16]; // [sp+58h] [bp-60h] BYREF
  int v15[8]; // [sp+98h] [bp-20h] BYREF

  v15[0] = a3;
  _android_log_print(4, "AXL", "Ped snapshot: %d", a2);
  v8 = off_2636C4(256, 256, 32, 1285);
  v9 = ((int (__fastcall *)(int))((char *)&loc_1DB83C + dword_23DF24))(v8);
  v10 = operator new(0x2F0u);
  sub_103C40(v10, 208, 0, 0.0, 0.0, 0.0, 0.0);
  result = 0;
  if ( v8 && v9 )
  {
    v12 = &dword_107988;
    if ( a2 == 162 )
      v12 = &dword_10798C;
    (*(void (__fastcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)v10 + 16))(v10, 0, a5 * -2.25, *v12);
    sub_103E90(v10, a2);
    sub_F8F1C(v10, 0);
    sub_F8EC0(v10, 0);
    sub_F8910(v10, v14);
    if ( *(float *)a4 != 0.0 )
      sub_109038(v14, 0, *(_DWORD *)a4);
    if ( *(float *)(a4 + 4) != 0.0 )
      sub_109038(v14, 1, *(_DWORD *)(a4 + 4));
    v13 = *(float *)(a4 + 8);
    if ( v13 != 0.0 )
      sub_109038(v14, 2, LODWORD(v13));
    sub_F8F58(
      v10,
      v14[0],
      v14[1],
      v14[2],
      v14[3],
      v14[4],
      v14[5],
      v14[6],
      v14[7],
      v14[8],
      v14[9],
      v14[10],
      v14[11],
      v14[12],
      v14[13],
      v14[14]);
    *(_DWORD *)(*a1 + 96) = v8;
    ((void (__fastcall *)(_DWORD))(dword_23DF24 + 6119929))(*a1);
    ((void (__fastcall *)(_DWORD, int *, int))((char *)&off_1D5D70 + dword_23DF24 + 1))(*a1, v15, 3);
    off_2636B8(*a1);
    sub_10914C(a1[1]);
    off_263758(6, 1);
    off_263758(8, 1);
    off_263758(7, 2);
    off_263758(14, 0);
    ((void (*)(void))(dword_23DF24 + 6097857))();
    (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
    sub_105A24(v10, 1120403456, 1);
    sub_F9000(v10);
    off_2636BC(*a1);
    sub_109174(a1[1]);
    (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
    (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 4))(v10);
    if ( !sub_108454(a2) )
      sub_F9D44(a2, 0);
    return v9;
  }
  return result;
}


// ======================================================================
// ADDR: 0x1079ac
// SYMBOL: sub_1079AC
int __fastcall sub_1079AC(_DWORD *a1, int a2, int a3, int a4, float a5, int a6, int a7)
{
  int v9; // r8
  int v10; // r10
  int v11; // r4
  int v12; // r6
  bool v13; // zf
  int result; // r0
  float v15; // s0
  float v16; // s16
  bool v17; // zf
  unsigned __int8 v18; // r0
  float v19; // s0
  int v21[16]; // [sp+54h] [bp-74h] BYREF
  int v22[13]; // [sp+94h] [bp-34h] BYREF

  v22[0] = a3;
  _android_log_print(4, "AXL", "Vehicle snapshot: %d", a2);
  v9 = off_2636C4(256, 256, 32, 1285);
  v10 = ((int (__fastcall *)(int))((char *)&loc_1DB83C + dword_23DF24))(v9);
  v11 = a2;
  if ( a2 == 569 )
    v11 = 537;
  if ( a2 == 570 )
    v11 = 538;
  _android_log_print(4, "AXL", "Create vehicle %d for textdraw", v11);
  v12 = operator new(0x50u);
  sub_109470(v12, v11, 0, 0, 50.0, 0.0, 0);
  v13 = v9 == 0;
  result = 0;
  if ( v9 )
    v13 = v10 == 0;
  if ( !v13 )
  {
    sub_F8F1C(v12, 0);
    sub_F8EC0(v12, 0);
    v15 = sub_108E24(v11);
    v16 = (float)(-1.0 - (float)(v15 + v15)) * a5;
    if ( sub_109864(v12) == 4 )
      v16 = (float)(v15 * -2.5) + -5.5;
    (*(void (__fastcall **)(int, _DWORD, float, int))(*(_DWORD *)v12 + 16))(
      v12,
      0,
      COERCE_FLOAT(LODWORD(v16)),
      1112014848);
    v18 = a6 + 1;
    v17 = a6 == -1;
    if ( a6 != -1 )
    {
      v18 = a7;
      v17 = a7 == -1;
    }
    if ( !v17 )
      sub_109BC8(v12, (unsigned __int8)a6, v18);
    sub_F8910(v12, v21);
    if ( *(float *)a4 != 0.0 )
      sub_109038(v21, 0, *(_DWORD *)a4);
    if ( *(float *)(a4 + 4) != 0.0 )
      sub_109038(v21, 1, *(_DWORD *)(a4 + 4));
    v19 = *(float *)(a4 + 8);
    if ( v19 != 0.0 )
      sub_109038(v21, 2, LODWORD(v19));
    sub_F8F58(
      v12,
      v21[0],
      v21[1],
      v21[2],
      v21[3],
      v21[4],
      v21[5],
      v21[6],
      v21[7],
      v21[8],
      v21[9],
      v21[10],
      v21[11],
      v21[12],
      v21[13],
      v21[14]);
    *(_DWORD *)(*a1 + 96) = v9;
    ((void (__fastcall *)(_DWORD))(dword_23DF24 + 6119929))(*a1);
    ((void (__fastcall *)(_DWORD, int *, int))((char *)&off_1D5D70 + dword_23DF24 + 1))(*a1, v22, 3);
    off_2636B8(*a1);
    sub_10914C(a1[1]);
    off_263758(6, 1);
    off_263758(8, 1);
    off_263758(7, 2);
    off_263758(14, 0);
    ((void (*)(void))(dword_23DF24 + 6097857))();
    (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
    sub_F9000(v12);
    off_2636BC(*a1);
    sub_109174(a1[1]);
    (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
    (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 4))(v12);
    return v10;
  }
  return result;
}


// ======================================================================
// ADDR: 0x1083f0
// SYMBOL: sub_1083F0
bool __fastcall sub_1083F0(unsigned int a1)
{
  return a1 <= 0x4E20 && *(_DWORD *)(*(_DWORD *)(dword_23DF24 + 6788820) + 4 * a1) != 0;
}


// ======================================================================
