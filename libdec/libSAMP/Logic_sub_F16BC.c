// ADDR: 0xf1898
// SYMBOL: sub_F1898
int sub_F1898(int a1, int a2, int a3, ...)
{
  va_list va; // [sp+1Ch] [bp+8h] BYREF

  va_start(va, a3);
  return _vsprintf_chk(a1, 0, 64, "%s (%d)", (int *)va);
}


// ======================================================================
// ADDR: 0xf18c8
// SYMBOL: sub_F18C8
void __fastcall sub_F18C8(int **a1, int a2, float *a3, char *a4, int a5, float a6, float a7, float a8, int a9)
{
  float v12; // s0
  float v13; // s20
  unsigned int v14; // r0
  float v15; // s28
  float v16; // s26
  int v17; // r8
  float v18; // s24
  float v19; // s4
  float v20; // s2
  float v21; // s0
  float v22; // s14
  float v23; // s20
  float v24; // s6
  __int64 v25; // r0
  int v26; // r4
  int v27; // r0
  int v28; // r0
  __int64 v29; // r0
  int v30; // r4
  int v31; // r0
  int v32; // r0
  __int64 v33; // r0
  int v34; // r4
  int v35; // r0
  __int64 v36; // r0
  int v37; // r4
  int v38; // r0
  int v39; // r0
  __int64 v40; // r0
  int v41; // r4
  int v42; // r0
  int v43; // r0
  __int64 v44; // r0
  int v45; // r4
  int v46; // r0
  int v47; // r0
  float v48; // s2
  int v49; // r0
  int v50; // r1
  _DWORD v51[2]; // [sp+10h] [bp-F8h] BYREF
  _DWORD v52[2]; // [sp+18h] [bp-F0h] BYREF
  float v53[2]; // [sp+20h] [bp-E8h] BYREF
  float v54[2]; // [sp+28h] [bp-E0h] BYREF
  float v55; // [sp+30h] [bp-D8h] BYREF
  float v56; // [sp+34h] [bp-D4h]
  float v57; // [sp+38h] [bp-D0h] BYREF
  float v58; // [sp+3Ch] [bp-CCh]
  float v59; // [sp+40h] [bp-C8h] BYREF
  float v60; // [sp+44h] [bp-C4h]
  float v61; // [sp+48h] [bp-C0h] BYREF
  float v62; // [sp+4Ch] [bp-BCh]
  float v63; // [sp+50h] [bp-B8h] BYREF
  float v64; // [sp+54h] [bp-B4h]
  float v65; // [sp+58h] [bp-B0h] BYREF
  float v66; // [sp+5Ch] [bp-ACh]
  __int64 v67; // [sp+60h] [bp-A8h] BYREF
  __int64 v68; // [sp+68h] [bp-A0h]
  __int64 v69; // [sp+70h] [bp-98h] BYREF
  __int64 v70; // [sp+78h] [bp-90h]
  __int64 v71; // [sp+80h] [bp-88h] BYREF
  __int64 v72; // [sp+88h] [bp-80h]
  float v73[2]; // [sp+90h] [bp-78h] BYREF
  float v74; // [sp+98h] [bp-70h] BYREF
  float v75; // [sp+9Ch] [bp-6Ch]
  float v76; // [sp+A0h] [bp-68h]
  __int64 v77; // [sp+A4h] [bp-64h] BYREF
  float v78; // [sp+ACh] [bp-5Ch]

  v12 = a3[2];
  v77 = *(_QWORD *)a3;
  v78 = (float)((float)(a6 * 0.0475) + 0.3) + v12;
  ((void (__fastcall *)(__int64 *, float *, _DWORD, _DWORD, _DWORD, _DWORD))(dword_23DF24 + 6051737))(
    &v77,
    &v74,
    0,
    0,
    0,
    0);
  if ( v76 >= 1.0 )
  {
    v73[1] = v75;
    v13 = v74;
    sub_DC6DC(&v71, a4);
    sub_12B090(&v69, a2, &v71, *(float *)&dword_238EC0 * 0.5);
    v73[0] = v13 + (float)(*(float *)&v69 * -0.5);
    if ( (unsigned __int8)v71 << 31 )
      operator delete((void *)v72);
    v14 = bswap32(a5 | 0xFF);
    HIDWORD(v72) = 1065353216;
    *(float *)&v72 = (float)BYTE2(v14) * 0.0039216;
    *((float *)&v71 + 1) = (float)BYTE1(v14) * 0.0039216;
    *(float *)&v71 = (float)(unsigned __int8)v14 * 0.0039216;
    sub_DC6DC(&v69, a4);
    sub_12AE34(a2, (int)v73, (int)&v71, (int)&v69, 1, *(float *)&dword_238EC0 * 0.5);
    v15 = a7;
    if ( (unsigned __int8)v69 << 31 )
      operator delete((void *)v70);
    if ( a7 >= 0.0 )
    {
      v16 = unk_238F30 / 100.0;
      v17 = a9;
      v18 = unk_238F30 * 0.5;
      v19 = (float)(int)v74;
      v20 = (float)(unk_238F30 * 0.5) + *(float *)&dword_238EC4;
      v75 = (float)(int)v75;
      v21 = v75 + (float)((float)(*(float *)&dword_238EC0 * 0.5) * 1.2);
      v71 = 0LL;
      v72 = 0x3F80000000000000LL;
      v74 = v19;
      v69 = 0x3E0888893F39B9BALL;
      v70 = 0x3F8000003E20A0A1LL;
      v22 = v19 - v20;
      v67 = 0x3D30B0B13E969697LL;
      v68 = 0x3F8000003DA0A0A1LL;
      if ( a7 > 100.0 )
        v15 = 100.0;
      v23 = a8;
      v66 = v75 + (float)((float)(*(float *)&dword_238EC0 * 0.5) * 1.2);
      v65 = v19 - v20;
      v63 = v20 + v19;
      v64 = unk_238F34 + v21;
      v24 = (float)(unk_238F34 + v21) - *(float *)&dword_238EC4;
      v61 = *(float *)&dword_238EC4 + v22;
      v59 = (float)(v20 + v19) - *(float *)&dword_238EC4;
      v57 = *(float *)&dword_238EC4 + v22;
      v55 = (float)((float)(v15 * v16) - v18) + v19;
      v62 = *(float *)&dword_238EC4 + v21;
      v58 = *(float *)&dword_238EC4 + v21;
      v60 = v24;
      v56 = v24;
      if ( a8 <= 0.0 )
      {
        LODWORD(v36) = ((int (*)(void))sub_167F88)();
      }
      else
      {
        v62 = (float)(*(float *)&dword_238EC4 + v21) + 13.0;
        v60 = v24 + 13.0;
        v64 = (float)(unk_238F34 + v21) + 13.0;
        v66 = v21 + 13.0;
        v58 = v62;
        v56 = v24 + 13.0;
        v25 = ((__int64 (*)(void))sub_167F88)();
        v26 = v25;
        v27 = sub_165778(&v71, HIDWORD(v25));
        v28 = sub_174194(v26, (int)&v65, (int)&v63, v27, 0.0, 15);
        v29 = sub_167F88(v28);
        v30 = v29;
        v31 = sub_165778(&v67, HIDWORD(v29));
        v32 = sub_174194(v30, (int)&v61, (int)&v59, v31, 0.0, 15);
        v33 = sub_167F88(v32);
        v34 = v33;
        v35 = sub_165778(&v69, HIDWORD(v33));
        v17 = a9;
        sub_174194(v34, (int)&v57, (int)&v55, v35, 0.0, 15);
        if ( a8 > 100.0 )
          v23 = 100.0;
        v67 = 0x3E20A0A13E20A0A1LL;
        v68 = 0x3F8000003E20A0A1LL;
        v69 = 0x3F48C8CA3F48C8CALL;
        v70 = 0x3F8000003F48C8CALL;
        v66 = v66 + -13.0;
        v64 = v64 + -13.0;
        v62 = v62 + -13.0;
        v60 = v60 + -13.0;
        v58 = v58 + -13.0;
        v56 = v56 + -13.0;
        v55 = (float)((float)(v23 * v16) - v18) + v74;
        v36 = sub_167F88(dword_F1DA0);
      }
      v37 = v36;
      v38 = sub_165778(&v71, HIDWORD(v36));
      v39 = sub_174194(v37, (int)&v65, (int)&v63, v38, 0.0, 15);
      v40 = sub_167F88(v39);
      v41 = v40;
      v42 = sub_165778(&v67, HIDWORD(v40));
      v43 = sub_174194(v41, (int)&v61, (int)&v59, v42, 0.0, 15);
      v44 = sub_167F88(v43);
      v45 = v44;
      v46 = sub_165778(&v69, HIDWORD(v44));
      sub_174194(v45, (int)&v57, (int)&v55, v46, 0.0, 15);
      if ( v17 )
      {
        if ( *a1 && (v47 = **a1) != 0 )
        {
          v54[1] = v66;
          v48 = (float)(*(float *)&dword_238EC0 * 0.5) * 1.3;
          v54[0] = v65 + (float)((float)(*(float *)&dword_238EC0 * -0.5) * 1.4);
          v53[1] = v48 + v66;
          v53[0] = v48 + v54[0];
          v49 = sub_167F88(v47);
          v50 = **a1;
          v52[0] = 0;
          v52[1] = 0;
          v51[0] = 1065353216;
          v51[1] = 1065353216;
          sub_174BE2(v49, v50, v54, v53, v52, v51, -1);
        }
        else if ( !byte_23FBB4 )
        {
          byte_23FBB4 = 1;
          _android_log_print(6, "AXL", "NO AFK ICON!!!");
        }
      }
    }
  }
}


// ======================================================================
// ADDR: 0xf7fe0
// SYMBOL: sub_F7FE0
int sub_F7FE0()
{
  return dword_2402CC;
}


// ======================================================================
// ADDR: 0xf8910
// SYMBOL: sub_F8910
_DWORD *__fastcall sub_F8910(int a1, _DWORD *a2)
{
  _DWORD *result; // r0

  result = *(_DWORD **)(a1 + 4);
  if ( result )
  {
    result = (_DWORD *)result[5];
    if ( result )
    {
      *a2 = *result;
      a2[1] = result[1];
      a2[2] = result[2];
      a2[4] = result[4];
      a2[5] = result[5];
      a2[6] = result[6];
      a2[8] = result[8];
      a2[9] = result[9];
      a2[10] = result[10];
      a2[12] = result[12];
      a2[13] = result[13];
      result = (_DWORD *)result[14];
      a2[14] = result;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xf8c70
// SYMBOL: sub_F8C70
bool __fastcall sub_F8C70(int a1)
{
  _DWORD *v1; // r0
  bool v2; // zf

  v1 = *(_DWORD **)(a1 + 4);
  if ( !v1 )
    return 0;
  v2 = *v1 == dword_23DF24 + 6716708;
  if ( *v1 != dword_23DF24 + 6716708 )
    v2 = v1[46] == 0;
  return !v2;
}


// ======================================================================
// ADDR: 0x107188
// SYMBOL: sub_107188
int __fastcall sub_107188(
        __int16 *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  _BYTE *v11; // r4
  int v12; // r3
  int v13; // r9
  int v14; // r10
  unsigned int v15; // r0
  const char **v16; // r0
  const char *v17; // r0
  char *v18; // r1
  const char **v19; // r0
  const char *v20; // r11
  unsigned __int8 v21; // r8
  const char **v22; // r0
  const char *v23; // r0
  int v24; // r2
  char *v25; // r0
  char *v26; // r2
  double *v27; // r0
  double v28; // d16
  float v29; // s0
  int v30; // r1
  int result; // r0
  int *v32; // r2
  int v33; // r3
  int *v34; // r1
  _DWORD *v35; // r6
  _DWORD *v36; // t1
  int v37; // t1
  int v38; // [sp+4h] [bp-30h]
  int v39; // [sp+8h] [bp-2Ch]
  const char **v40; // [sp+14h] [bp-20h]
  _DWORD savedregs[5]; // [sp+34h] [bp+0h] BYREF

  savedregs[2] = a2;
  savedregs[3] = a3;
  savedregs[4] = a4;
  v11 = a1 + 1;
  word_25D98C = *a1;
  v40 = (const char **)&savedregs[2];
  sub_22178C(dword_25D988 + 60, 0x48u);
  v12 = 0;
  v13 = 2;
  v14 = 0;
  v38 = dword_25D988;
  while ( 1 )
  {
    v15 = (unsigned __int8)*v11;
    if ( v15 <= 0x72 )
      break;
    switch ( v15 )
    {
      case 's':
        v19 = v40;
        v39 = v12;
        ++v40;
        v20 = *v19;
        v21 = strlen(*v19);
        *((_BYTE *)&word_25D98C + v13) = 14;
        *((_BYTE *)&word_25D98C + v13 + 1) = v21;
        j_memcpy((char *)&word_25D98C + v13 + 2, v20, v21);
        v12 = v39;
        v13 += 2 + v21;
        break;
      case 'v':
        v22 = v40++;
        v23 = *v22;
        *((_BYTE *)&word_25D98C + v13) = 3;
        v24 = (4 * v14) & 0x3FFFC;
        *(int *)((char *)&dword_25DA8C + v24) = (int)v23;
        *(_DWORD *)(v38 + v24 + 60) = *(_DWORD *)v23;
        v25 = (char *)&word_25D98C + v13;
        v13 += 3;
        *(_WORD *)(v25 + 1) = v12;
        v12 = ++v14;
        break;
      case 'z':
        *((_BYTE *)&word_25D98C + v13++) = 0;
        break;
      default:
        return 0;
    }
LABEL_13:
    ++v11;
  }
  if ( v15 == 102 )
  {
    v26 = (char *)&word_25D98C + v13;
    v27 = (double *)(((unsigned int)v40 + 7) & 0xFFFFFFF8);
    v28 = *v27;
    *((_BYTE *)&word_25D98C + v13) = 6;
    v13 += 5;
    v29 = v28;
    v40 = (const char **)(v27 + 1);
    *(float *)(v26 + 1) = v29;
    goto LABEL_13;
  }
  if ( v15 == 105 )
  {
    v16 = v40++;
    v17 = *v16;
    *((_BYTE *)&word_25D98C + v13) = 1;
    v18 = (char *)&word_25D98C + v13;
    v13 += 5;
    *(_DWORD *)(v18 + 1) = v17;
    goto LABEL_13;
  }
  if ( *v11 )
    return 0;
  v30 = dword_23DF24;
  *(_DWORD *)(dword_25D988 + 20) = &word_25D98C;
  ((void (*)(void))((char *)&unk_32B6B9 + v30))();
  result = *(unsigned __int8 *)(dword_25D988 + 229);
  if ( v14 << 16 )
  {
    v32 = (int *)(dword_25D988 + 60);
    v33 = (unsigned __int16)v14;
    v34 = &dword_25DA8C;
    do
    {
      v36 = (_DWORD *)*v34++;
      v35 = v36;
      --v33;
      v37 = *v32++;
      *v35 = v37;
    }
    while ( v33 );
  }
  return result;
}


// ======================================================================
// ADDR: 0x109a0c
// SYMBOL: sub_109A0C
bool __fastcall sub_109A0C(int a1)
{
  int v2; // r4
  int v3; // r1
  int v4; // r3
  int v5; // r2
  _BOOL4 result; // r0
  unsigned int v7; // r1
  bool v8; // zf

  if ( !*(_DWORD *)(a1 + 12) )
    return 0;
  v2 = sub_108354(*(_DWORD *)(a1 + 8));
  if ( *(_DWORD *)(a1 + 12) != v2 )
    _android_log_print(
      6,
      "AXL",
      "%s: Invalid m_pVehicle or m_dwGTAId %08X != %08X",
      "bool CVehicle::IsRCVehicle()",
      *(_DWORD *)(a1 + 12),
      v2);
  if ( !v2 )
    return 0;
  v3 = *(unsigned __int16 *)(v2 + 38);
  v4 = 0;
  v5 = 1;
  do
  {
    if ( *((unsigned __int16 *)&unk_B3CA4 + 2 * v4 + 1) == v3 )
      return 1;
    v8 = v5 << 31 == 0;
    v4 = 1;
    v5 = 0;
  }
  while ( !v8 );
  result = 1;
  if ( *(unsigned __int16 *)(v2 + 38) > 0x1F4u )
  {
    if ( v3 == 501 )
      return result;
    v8 = v3 == 564;
    if ( v3 != 564 )
      v8 = v3 == 594;
    if ( v8 )
      return result;
    return 0;
  }
  v7 = v3 - 441;
  if ( v7 > 0x18 )
    return 0;
  return ((1 << v7) & 0x1800001) != 0;
}


// ======================================================================
// ADDR: 0x144b84
// SYMBOL: sub_144B84
int __fastcall sub_144B84(int a1)
{
  return *(unsigned __int8 *)(*(_DWORD *)(a1 + 524) + 73);
}


// ======================================================================
// ADDR: 0x148e64
// SYMBOL: sub_148E64
int __fastcall sub_148E64(int a1, unsigned int a2)
{
  int result; // r0

  if ( *(unsigned __int16 *)(a1 + 5024) == a2 )
    return a1 + 5026;
  if ( a2 > 0x3EC )
    return 0;
  result = *(_DWORD *)(a1 + 4 * a2 + 4);
  if ( result )
    result += 4;
  return result;
}


// ======================================================================
// ADDR: 0x14a402
// SYMBOL: sub_14A402
unsigned int __fastcall sub_14A402(int a1)
{
  return sub_107158(*(unsigned __int16 *)(a1 + 20));
}


// ======================================================================
