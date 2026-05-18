// ADDR: 0x13b750
// SYMBOL: sub_13B750
_DWORD *__fastcall sub_13B750(_DWORD *a1, int a2)
{
  int v4; // r5
  int v5; // r5
  int v6; // r0
  _BYTE v8[8]; // [sp+4h] [bp-1Ch] BYREF
  void *v9; // [sp+Ch] [bp-14h]

  sub_12BC78((int)a1);
  *a1 = &off_22ED5C;
  v4 = operator new(0x64u);
  sub_13C4F8();
  a1[21] = v4;
  sub_12BDF6((int)a1, v4);
  v5 = operator new(0x64u);
  std::string::basic_string(v8, a2);
  sub_13D05C(v5, v8);
  v6 = v8[0];
  a1[22] = v5;
  if ( v6 << 31 )
  {
    operator delete(v9);
    v5 = a1[22];
  }
  sub_12BDF6((int)a1, v5);
  return a1;
}


// ======================================================================
// ADDR: 0x13b89c
// SYMBOL: sub_13B89C
int __fastcall sub_13B89C(int a1, int a2)
{
  return sub_13D450(*(_DWORD *)(*(_DWORD *)(a1 + 84) + 96), a2);
}


// ======================================================================
// ADDR: 0x13b8bc
// SYMBOL: sub_13B8BC
_DWORD *sub_13B8BC()
{
  _DWORD *result; // r0
  int v1; // r1

  result = (_DWORD *)sub_13D904();
  *result = &off_22EDA0;
  v1 = dword_238F54;
  result[25] = 0;
  result[26] = v1;
  return result;
}


// ======================================================================
// ADDR: 0x13b918
// SYMBOL: sub_13B918
int __fastcall sub_13B918(int a1)
{
  unsigned __int64 v1; // d12
  __int64 v2; // d13
  _DWORD *v3; // r0
  int v4; // r1
  _DWORD *v5; // r0
  _DWORD *v6; // r11
  int v7; // r0
  _DWORD *v8; // r0
  int v9; // r0
  int v10; // r1
  char *v11; // r3
  unsigned int v12; // r10
  unsigned int v13; // r1
  unsigned int v14; // r8
  int v15; // r1
  unsigned int v16; // r1
  int v17; // r0
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
  _DWORD *v31; // r4
  int v32; // r1
  int v33; // r0
  float v34; // s20
  int v35; // r6
  unsigned int v36; // r8
  float *v37; // r0
  float v38; // s2
  unsigned __int64 v41; // [sp+38h] [bp-1B0h] BYREF
  __int64 v42; // [sp+40h] [bp-1A8h]
  _DWORD *v43; // [sp+4Ch] [bp-19Ch] BYREF
  _DWORD v44[2]; // [sp+50h] [bp-198h] BYREF
  void *v45; // [sp+58h] [bp-190h]
  _UNKNOWN **v46; // [sp+5Ch] [bp-18Ch] BYREF
  char *v47; // [sp+60h] [bp-188h]
  _DWORD *v48; // [sp+64h] [bp-184h]
  _DWORD v49[8]; // [sp+68h] [bp-180h] BYREF
  __int64 v50; // [sp+88h] [bp-160h]
  __int64 v51; // [sp+90h] [bp-158h]
  int v52; // [sp+98h] [bp-150h]
  _DWORD v53[20]; // [sp+9Ch] [bp-14Ch] BYREF
  void *v54; // [sp+ECh] [bp-FCh] BYREF
  _DWORD *v55; // [sp+F0h] [bp-F8h]
  _DWORD *v56; // [sp+F4h] [bp-F4h]
  int v57; // [sp+F8h] [bp-F0h] BYREF
  int v58; // [sp+FCh] [bp-ECh]
  void *v59; // [sp+100h] [bp-E8h]
  _DWORD v60[2]; // [sp+104h] [bp-E4h] BYREF
  _UNKNOWN **v61; // [sp+10Ch] [bp-DCh]
  _DWORD v62[8]; // [sp+110h] [bp-D8h] BYREF
  __int64 v63; // [sp+130h] [bp-B8h]
  __int64 v64; // [sp+138h] [bp-B0h]
  int v65; // [sp+140h] [bp-A8h]
  _DWORD v66[20]; // [sp+144h] [bp-A4h] BYREF
  int v67; // [sp+194h] [bp-54h] BYREF
  int v68; // [sp+198h] [bp-50h]
  int v69; // [sp+19Ch] [bp-4Ch]

  v69 = 0;
  v67 = 0;
  v68 = 0;
  v66[0] = &off_22A6CC;
  v60[1] = 0;
  std::ios_base::init((std::ios_base *)v66, v62);
  v61 = &off_22A62C;
  v66[18] = 0;
  v66[19] = -1;
  v66[0] = &off_22A640;
  v60[0] = &off_22A618;
  std::streambuf::basic_streambuf(v62);
  v63 = 0LL;
  v64 = 0LL;
  v65 = 24;
  v62[0] = &off_22A710;
  sub_E3EC0((int)v62);
  *(float *)&v1 = 1.0;
  *((float *)&v1 + 1) = 1.0;
  *(float *)&v2 = 1.0;
  *((float *)&v2 + 1) = 1.0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  while ( 1 )
  {
    v3 = sub_E384C(v60, (unsigned __int8 *)&v57, 10);
    if ( (*((_BYTE *)v3 + *(_DWORD *)(*v3 - 12) + 16) & 5) != 0 )
      break;
    v4 = v58;
    if ( !((unsigned __int8)v57 << 31) )
      v4 = (unsigned __int8)v57 >> 1;
    if ( v4 )
    {
      v53[0] = &off_22A6CC;
      v56 = 0;
      v54 = 0;
      v55 = 0;
      v47 = 0;
      v46 = &off_22A6B8;
      v48 = &off_22A62C;
      std::ios_base::init((std::ios_base *)v53, v49);
      v48 = &off_22A62C;
      v53[18] = 0;
      v53[19] = -1;
      v53[0] = &off_22A640;
      v46 = &off_22A618;
      std::streambuf::basic_streambuf(v49);
      v50 = 0LL;
      v51 = 0LL;
      v52 = 24;
      v49[0] = &off_22A710;
      sub_E3EC0((int)v49);
      v44[0] = 0;
      v44[1] = 0;
      v45 = 0;
      while ( 1 )
      {
        v5 = sub_E384C(&v46, (unsigned __int8 *)v44, 9);
        if ( (*((_BYTE *)v5 + *(_DWORD *)(*v5 - 12) + 16) & 5) != 0 )
          break;
        v6 = (_DWORD *)operator new(0x78u);
        v41 = v1;
        v42 = v2;
        sub_13D3DC((int)v6, (int)v44, (int)&v41, 0, *(float *)&dword_238EC0 * 0.5);
        v7 = *v6;
        v43 = v6;
        (*(void (__fastcall **)(_DWORD *))(v7 + 8))(v6);
        v8 = v55;
        if ( v55 == v56 )
        {
          sub_13C0E8(&v54, &v43);
        }
        else
        {
          *v55 = v43;
          v55 = v8 + 1;
        }
      }
      sub_13BE9C(&v67, &v54);
      if ( LOBYTE(v44[0]) << 31 )
        operator delete(v45);
      v53[0] = &off_22A640;
      v46 = &off_22A618;
      v49[0] = &off_22A710;
      v48 = &off_22A62C;
      if ( (unsigned __int8)v50 << 31 )
        operator delete((void *)v51);
      std::streambuf::~streambuf(v49);
      std::iostream::~basic_iostream(&v46, off_22A64C);
      std::ios::~ios(v53);
      if ( v54 )
      {
        v55 = v54;
        operator delete(v54);
      }
    }
  }
  v9 = v67;
  v10 = v68;
  LODWORD(v42) = 0;
  v41 = 0LL;
  if ( v68 == v67 )
  {
    *(_DWORD *)(a1 + 100) = 0;
  }
  else
  {
    v11 = 0;
    v12 = 0;
    do
    {
      if ( *(_DWORD *)(v9 + 12 * v12 + 4) != *(_DWORD *)(v9 + 12 * v12) )
      {
        v13 = 0;
        do
        {
          v14 = v13;
          v15 = HIDWORD(v41);
          if ( v14 >= (HIDWORD(v41) - (int)v11) >> 2 )
          {
            if ( HIDWORD(v41) >= (unsigned int)v42 )
            {
              v16 = ((HIDWORD(v41) - (int)v11) >> 2) + 1;
              if ( v16 >= 0x40000000 )
                std::__vector_base_common<true>::__throw_length_error(&v41);
              v17 = v42 - (_DWORD)v11;
              if ( v16 <= ((int)v42 - (int)v11) >> 1 )
                v16 = v17 >> 1;
              if ( (unsigned int)v17 >= 0x7FFFFFFC )
                v16 = 0x3FFFFFFF;
              sub_13C368(&v46, v16);
              v18 = (_DWORD *)HIDWORD(v41);
              v19 = (_DWORD *)v41;
              v20 = v47;
              v21 = v48;
              v22 = HIDWORD(v41) - v41;
              *v48 = 0;
              v23 = v21 + 1;
              v11 = &v20[-v22];
              v48 = v23;
              v47 = v11;
              if ( v22 >= 1 )
              {
                j_memcpy(v11, v19, v22);
                v11 = v47;
                v23 = v48;
                v18 = (_DWORD *)HIDWORD(v41);
                v19 = (_DWORD *)v41;
              }
              v24 = v42;
              v41 = __PAIR64__((unsigned int)v23, (unsigned int)v11);
              LODWORD(v42) = v49[0];
              v48 = v18;
              v49[0] = v24;
              v46 = (_UNKNOWN **)v19;
              v47 = (char *)v19;
              if ( v18 != v19 )
                v48 = &v18[~((unsigned int)((char *)v18 - (char *)v19 - 4) >> 2)];
              if ( v19 )
              {
                operator delete(v19);
                v11 = (char *)v41;
              }
              v9 = v67;
            }
            else
            {
              *(_DWORD *)HIDWORD(v41) = 0;
              HIDWORD(v41) = v15 + 4;
            }
          }
          v25 = *(_DWORD *)(v9 + 12 * v12);
          v26 = (float *)&v11[4 * v14];
          v13 = v14 + 1;
          v27 = *v26;
          if ( *v26 < *(float *)(*(_DWORD *)(v25 + 4 * v14) + 20) )
            v27 = *(float *)(*(_DWORD *)(v25 + 4 * v14) + 20);
          v28 = *(_DWORD *)(v9 + 12 * v12 + 4);
          *v26 = v27;
        }
        while ( v13 < (v28 - v25) >> 2 );
        v10 = v68;
      }
      ++v12;
    }
    while ( v12 < -1431655765 * ((v10 - v9) >> 2) );
    v29 = 0.0;
    if ( v10 != v9 )
    {
      v30 = 0;
      do
      {
        v31 = (_DWORD *)operator new(0x68u);
        sub_13DAAC(v31, 1);
        v31[23] = 0;
        v31[24] = 0;
        v31[25] = 0;
        *v31 = &off_22EDD8;
        sub_13D96C(a1, v31);
        v32 = v67;
        v33 = *(_DWORD *)(v67 + 12 * v30);
        if ( *(_DWORD *)(v67 + 12 * v30 + 4) != v33 )
        {
          v34 = *(float *)&dword_238EC8;
          v35 = 0;
          v36 = 0;
          do
          {
            sub_13BF3C(v31, *(_DWORD *)(v33 + 4 * v36++), LODWORD(v34));
            v37 = (float *)(v41 + v35);
            v32 = v67;
            v35 += 4;
            v38 = *v37 + (float)(*(float *)&dword_238EC8 * 5.0);
            v33 = *(_DWORD *)(v67 + 12 * v30);
            v34 = v34 + v38;
            if ( v29 < v34 )
              v29 = v34;
          }
          while ( v36 < (*(_DWORD *)(v67 + 12 * v30 + 4) - v33) >> 2 );
        }
        ++v30;
      }
      while ( v30 < -1431655765 * ((v68 - v32) >> 2) );
      v11 = (char *)v41;
    }
    *(float *)(a1 + 100) = v29;
    if ( v11 )
    {
      HIDWORD(v41) = v11;
      operator delete(v11);
    }
  }
  if ( (unsigned __int8)v57 << 31 )
    operator delete(v59);
  v66[0] = &off_22A640;
  v60[0] = &off_22A618;
  v62[0] = &off_22A710;
  v61 = &off_22A62C;
  if ( (unsigned __int8)v63 << 31 )
    operator delete((void *)v64);
  std::streambuf::~streambuf(v62);
  std::iostream::~basic_iostream(v60, off_22A64C);
  std::ios::~ios(v66);
  return sub_13C09C(&v67);
}


// ======================================================================
// ADDR: 0x13c4f8
// SYMBOL: sub_13C4F8
_DWORD *__fastcall sub_13C4F8(_DWORD *a1)
{
  int v2; // r5
  __int64 v3; // d16
  __int64 v4; // d17
  int v5; // r0
  _QWORD v7[2]; // [sp+8h] [bp-28h] BYREF
  void *v8[5]; // [sp+1Ch] [bp-14h] BYREF

  sub_13DD5C();
  *a1 = &off_22EE28;
  v2 = operator new(0x78u);
  sub_DC6DC(v8, &byte_8F794);
  *(float *)&v3 = 1.0;
  *((float *)&v3 + 1) = 1.0;
  *(float *)&v4 = 1.0;
  *((float *)&v4 + 1) = 1.0;
  v7[0] = v3;
  v7[1] = v4;
  sub_13D3DC(v2, (int)v8, (int)v7, 0, *(float *)&dword_238EC0 * 0.5);
  v5 = LOBYTE(v8[0]);
  a1[24] = v2;
  if ( v5 << 31 )
  {
    operator delete(v8[2]);
    v2 = a1[24];
  }
  sub_12BDF6((int)a1, v2);
  return a1;
}


// ======================================================================
