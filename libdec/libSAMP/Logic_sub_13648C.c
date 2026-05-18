// ADDR: 0x136e18
// SYMBOL: sub_136E18
int sub_136E18(int a1, int a2, int a3, ...)
{
  va_list va; // [sp+1Ch] [bp+8h] BYREF

  va_start(va, a3);
  return _vsprintf_chk(a1, 0, 20, "%02X", va);
}


// ======================================================================
// ADDR: 0x13c604
// SYMBOL: sub_13C604
void **__fastcall sub_13C604(int a1)
{
  unsigned __int64 v1; // d12
  __int64 v2; // d13
  _DWORD *v3; // r0
  int v4; // r1
  _DWORD *v5; // r0
  _DWORD *v6; // r11
  int v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r1
  char *v11; // r3
  unsigned int v12; // r10
  unsigned int v13; // r1
  unsigned int v14; // r8
  int v15; // r1
  int v16; // r2
  __int64 v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r1
  char *v20; // r3
  _DWORD *v21; // r4
  signed int v22; // r2
  _DWORD *v23; // r4
  int v24; // r2
  int v25; // r2
  float *v26; // r4
  float v27; // s0
  int v28; // r5
  float v29; // s16
  unsigned int v30; // r10
  _DWORD *v31; // r0
  _DWORD *v32; // r4
  int v33; // r1
  _DWORD *v34; // r1
  int v35; // r0
  float v36; // s20
  int v37; // r6
  unsigned int v38; // r8
  float *v39; // r0
  float v40; // s2
  unsigned __int64 v43; // [sp+38h] [bp-1B0h] BYREF
  __int64 v44; // [sp+40h] [bp-1A8h] BYREF
  _DWORD *v45; // [sp+4Ch] [bp-19Ch] BYREF
  _DWORD v46[2]; // [sp+50h] [bp-198h] BYREF
  void *v47; // [sp+58h] [bp-190h]
  _UNKNOWN **v48; // [sp+5Ch] [bp-18Ch] BYREF
  char *v49; // [sp+60h] [bp-188h]
  _DWORD *v50; // [sp+64h] [bp-184h]
  _DWORD v51[8]; // [sp+68h] [bp-180h] BYREF
  __int64 v52; // [sp+88h] [bp-160h]
  __int64 v53; // [sp+90h] [bp-158h]
  int v54; // [sp+98h] [bp-150h]
  _DWORD v55[20]; // [sp+9Ch] [bp-14Ch] BYREF
  void *v56; // [sp+ECh] [bp-FCh] BYREF
  _DWORD *v57; // [sp+F0h] [bp-F8h]
  _DWORD *v58; // [sp+F4h] [bp-F4h]
  int v59; // [sp+F8h] [bp-F0h] BYREF
  int v60; // [sp+FCh] [bp-ECh]
  void *v61; // [sp+100h] [bp-E8h]
  _DWORD v62[2]; // [sp+104h] [bp-E4h] BYREF
  _UNKNOWN **v63; // [sp+10Ch] [bp-DCh]
  _DWORD v64[8]; // [sp+110h] [bp-D8h] BYREF
  __int64 v65; // [sp+130h] [bp-B8h]
  __int64 v66; // [sp+138h] [bp-B0h]
  int v67; // [sp+140h] [bp-A8h]
  _DWORD v68[20]; // [sp+144h] [bp-A4h] BYREF
  _DWORD *v69; // [sp+194h] [bp-54h] BYREF
  _BYTE *v70; // [sp+198h] [bp-50h]
  int v71; // [sp+19Ch] [bp-4Ch]

  v71 = 0;
  v69 = 0;
  v70 = 0;
  v68[0] = &off_22A6CC;
  v62[1] = 0;
  std::ios_base::init((std::ios_base *)v68, v64);
  v63 = &off_22A62C;
  v68[18] = 0;
  v68[19] = -1;
  v68[0] = &off_22A640;
  v62[0] = &off_22A618;
  std::streambuf::basic_streambuf(v64);
  v65 = 0LL;
  v66 = 0LL;
  v67 = 24;
  v64[0] = &off_22A710;
  sub_E3EC0((int)v64);
  *(float *)&v1 = 1.0;
  *((float *)&v1 + 1) = 1.0;
  *(float *)&v2 = 1.0;
  *((float *)&v2 + 1) = 1.0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  while ( 1 )
  {
    v3 = sub_E384C(v62, (unsigned __int8 *)&v59, 10);
    if ( (*((_BYTE *)v3 + *(_DWORD *)(*v3 - 12) + 16) & 5) != 0 )
      break;
    v4 = v60;
    if ( !((unsigned __int8)v59 << 31) )
      v4 = (unsigned __int8)v59 >> 1;
    if ( v4 )
    {
      v55[0] = &off_22A6CC;
      v58 = 0;
      v56 = 0;
      v57 = 0;
      v49 = 0;
      v48 = &off_22A6B8;
      v50 = &off_22A62C;
      std::ios_base::init((std::ios_base *)v55, v51);
      v50 = &off_22A62C;
      v55[18] = 0;
      v55[19] = -1;
      v55[0] = &off_22A640;
      v48 = &off_22A618;
      std::streambuf::basic_streambuf(v51);
      v52 = 0LL;
      v53 = 0LL;
      v54 = 24;
      v51[0] = &off_22A710;
      sub_E3EC0((int)v51);
      v46[0] = 0;
      v46[1] = 0;
      v47 = 0;
      while ( 1 )
      {
        v5 = sub_E384C(&v48, (unsigned __int8 *)v46, 9);
        if ( (*((_BYTE *)v5 + *(_DWORD *)(*v5 - 12) + 16) & 5) != 0 )
          break;
        v6 = (_DWORD *)operator new(0x78u);
        v43 = v1;
        v44 = v2;
        sub_13D3DC((int)v6, (int)v46, (int)&v43, 0, *(float *)&dword_238EC0 * 0.5);
        v7 = *v6;
        v45 = v6;
        (*(void (__fastcall **)(_DWORD *))(v7 + 8))(v6);
        v8 = v57;
        if ( v57 == v58 )
        {
          sub_13C0E8((int *)&v56, (int *)&v45);
        }
        else
        {
          *v57 = v45;
          v57 = v8 + 1;
        }
      }
      sub_13BE9C((int)&v69, (int)&v56);
      if ( LOBYTE(v46[0]) << 31 )
        operator delete(v47);
      v55[0] = &off_22A640;
      v48 = &off_22A618;
      v51[0] = &off_22A710;
      v50 = &off_22A62C;
      if ( (unsigned __int8)v52 << 31 )
        operator delete((void *)v53);
      std::streambuf::~streambuf(v51);
      std::iostream::~basic_iostream(&v48, off_22A64C);
      std::ios::~ios(v55);
      if ( v56 )
      {
        v57 = v56;
        operator delete(v56);
      }
    }
  }
  v9 = v69;
  v10 = v70;
  LODWORD(v44) = 0;
  v43 = 0LL;
  if ( v70 == (_BYTE *)v69 )
  {
    *(_DWORD *)(a1 + 100) = 0;
  }
  else
  {
    v11 = 0;
    v12 = 0;
    do
    {
      if ( v9[3 * v12 + 1] != v9[3 * v12] )
      {
        v13 = 0;
        do
        {
          v14 = v13;
          v15 = HIDWORD(v43);
          if ( v14 >= (HIDWORD(v43) - (int)v11) >> 2 )
          {
            if ( HIDWORD(v43) >= (unsigned int)v44 )
            {
              v16 = (HIDWORD(v43) - (int)v11) >> 2;
              HIDWORD(v17) = v16 + 1;
              if ( (unsigned int)(v16 + 1) >= 0x40000000 )
                std::__vector_base_common<true>::__throw_length_error(&v43);
              LODWORD(v17) = v44 - (_DWORD)v11;
              if ( HIDWORD(v17) <= ((int)v44 - (int)v11) >> 1 )
                HIDWORD(v17) = (int)v17 >> 1;
              if ( (unsigned int)v17 >= 0x7FFFFFFC )
                HIDWORD(v17) = 0x3FFFFFFF;
              LODWORD(v17) = &v48;
              sub_13C368(v17, v16, (int)&v44);
              v18 = (_DWORD *)HIDWORD(v43);
              v19 = (_DWORD *)v43;
              v20 = v49;
              v21 = v50;
              v22 = HIDWORD(v43) - v43;
              *v50 = 0;
              v23 = v21 + 1;
              v11 = &v20[-v22];
              v50 = v23;
              v49 = v11;
              if ( v22 >= 1 )
              {
                j_memcpy(v11, v19, v22);
                v11 = v49;
                v23 = v50;
                v18 = (_DWORD *)HIDWORD(v43);
                v19 = (_DWORD *)v43;
              }
              v24 = v44;
              v43 = __PAIR64__((unsigned int)v23, (unsigned int)v11);
              LODWORD(v44) = v51[0];
              v50 = v18;
              v51[0] = v24;
              v48 = (_UNKNOWN **)v19;
              v49 = (char *)v19;
              if ( v18 != v19 )
                v50 = &v18[~((unsigned int)((char *)v18 - (char *)v19 - 4) >> 2)];
              if ( v19 )
              {
                operator delete(v19);
                v11 = (char *)v43;
              }
              v9 = v69;
            }
            else
            {
              *(_DWORD *)HIDWORD(v43) = 0;
              HIDWORD(v43) = v15 + 4;
            }
          }
          v25 = v9[3 * v12];
          v26 = (float *)&v11[4 * v14];
          v13 = v14 + 1;
          v27 = *v26;
          if ( *v26 < *(float *)(*(_DWORD *)(v25 + 4 * v14) + 20) )
            v27 = *(float *)(*(_DWORD *)(v25 + 4 * v14) + 20);
          v28 = v9[3 * v12 + 1];
          *v26 = v27;
        }
        while ( v13 < (v28 - v25) >> 2 );
        v10 = v70;
      }
      ++v12;
    }
    while ( v12 < -1431655765 * (v10 - v9) );
    v29 = 0.0;
    if ( v10 != v9 )
    {
      v30 = 0;
      do
      {
        v31 = (_DWORD *)operator new(0x68u);
        v32 = v31;
        v33 = v30;
        if ( v30 )
          v33 = 1;
        sub_13DAAC(v31, v33);
        v32[23] = 0;
        v32[24] = 0;
        v32[25] = 0;
        *v32 = &off_22EEA4;
        sub_13D96C(a1, v32);
        v34 = v69;
        v35 = v69[3 * v30];
        if ( v69[3 * v30 + 1] != v35 )
        {
          v36 = *(float *)&dword_238EC8;
          v37 = 0;
          v38 = 0;
          do
          {
            sub_13CB90(v32, *(_DWORD *)(v35 + 4 * v38++), LODWORD(v36));
            v39 = (float *)(v43 + v37);
            v34 = v69;
            v37 += 4;
            v40 = *v39 + (float)(*(float *)&dword_238EC8 * 5.0);
            v35 = v69[3 * v30];
            v36 = v36 + v40;
            if ( v29 < v36 )
              v29 = v36;
          }
          while ( v38 < (v69[3 * v30 + 1] - v35) >> 2 );
        }
        ++v30;
      }
      while ( v30 < -1431655765 * ((v70 - (_BYTE *)v34) >> 2) );
      v11 = (char *)v43;
    }
    *(float *)(a1 + 100) = v29;
    if ( v11 )
    {
      HIDWORD(v43) = v11;
      operator delete(v11);
    }
  }
  if ( (unsigned __int8)v59 << 31 )
    operator delete(v61);
  v68[0] = &off_22A640;
  v62[0] = &off_22A618;
  v64[0] = &off_22A710;
  v63 = &off_22A62C;
  if ( (unsigned __int8)v65 << 31 )
    operator delete((void *)v66);
  std::streambuf::~streambuf(v64);
  std::iostream::~basic_iostream(v62, off_22A64C);
  std::ios::~ios(v68);
  return sub_13C09C((void **)&v69);
}


// ======================================================================
// ADDR: 0x1413fc
// SYMBOL: sub_1413FC
unsigned int sub_1413FC()
{
  return sub_107158(*(unsigned __int16 *)(**(_DWORD **)(dword_23DEF4 + 944) + 5024));
}


// ======================================================================
// ADDR: 0x148e8e
// SYMBOL: sub_148E8E
int __fastcall sub_148E8E(int a1, unsigned int a2)
{
  int v2; // r0

  if ( a2 <= 0x3EC && (v2 = *(_DWORD *)(a1 + 4 * a2 + 4)) != 0 )
    return *(_DWORD *)(v2 + 32);
  else
    return 0;
}


// ======================================================================
// ADDR: 0x148ea4
// SYMBOL: sub_148EA4
int __fastcall sub_148EA4(int a1, unsigned int a2)
{
  int v2; // r0

  if ( a2 <= 0x3EC && (v2 = *(_DWORD *)(a1 + 4 * a2 + 4)) != 0 )
    return *(_DWORD *)(v2 + 36);
  else
    return 0;
}


// ======================================================================
// ADDR: 0x148ed8
// SYMBOL: sub_148ED8
int __fastcall sub_148ED8(int a1)
{
  int32x4_t v1; // q9
  int v2; // r0
  int32x4_t v3; // q8
  int v4; // r1
  unsigned __int32 *v5; // r2
  unsigned __int64 v6; // d16

  v2 = a1 + 4020;
  v3 = (int32x4_t)1uLL;
  v4 = 0;
  do
  {
    v5 = (unsigned __int32 *)(v2 + v4);
    v4 += 4;
    v1.n128_u32[0] = *v5;
    v1 = vmovl_u16((uint16x4_t)vmovl_u8((uint8x8_t)v1.n128_u64[0]).n128_u64[0]);
    v3 = vaddq_s32(v3, v1);
  }
  while ( v4 != 1004 );
  v6 = vadd_s32((int32x2_t)v3.n128_u64[0], *(int32x2_t *)&v3.n128_i8[8]).n64_u64[0];
  return HIDWORD(v6) + v6;
}


// ======================================================================
