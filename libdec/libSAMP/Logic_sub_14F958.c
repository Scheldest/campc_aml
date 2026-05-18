// ADDR: 0x14fb68
// SYMBOL: sub_14FB68
int __fastcall sub_14FB68(int a1, int a2, float a3, float a4, float a5, int a6, unsigned int a7, int a8)
{
  float v9; // s2
  float v10; // s0
  float v11; // s4
  int v12; // r0
  int result; // r0
  unsigned int v14; // r0
  float v15; // s4
  float v16; // s6
  float v17; // s16
  float v18; // s18
  _DWORD *v19; // r0
  __int64 v20; // [sp+30h] [bp-128h] BYREF
  float v21; // [sp+38h] [bp-120h]
  float v22; // [sp+3Ch] [bp-11Ch]
  __int64 v23; // [sp+40h] [bp-118h] BYREF
  float v24[2]; // [sp+48h] [bp-110h] BYREF
  _DWORD v25[2]; // [sp+50h] [bp-108h] BYREF
  void *v26; // [sp+58h] [bp-100h]
  _DWORD v27[2]; // [sp+5Ch] [bp-FCh] BYREF
  _UNKNOWN **v28; // [sp+64h] [bp-F4h]
  _DWORD v29[8]; // [sp+68h] [bp-F0h] BYREF
  __int64 v30; // [sp+88h] [bp-D0h] BYREF
  __int64 v31; // [sp+90h] [bp-C8h]
  int v32; // [sp+98h] [bp-C0h]
  _DWORD v33[20]; // [sp+9Ch] [bp-BCh] BYREF
  float v34; // [sp+ECh] [bp-6Ch] BYREF
  float v35; // [sp+F0h] [bp-68h]
  float v36; // [sp+F4h] [bp-64h]
  float v37[3]; // [sp+F8h] [bp-60h] BYREF
  float v38; // [sp+104h] [bp-54h] BYREF
  float v39; // [sp+108h] [bp-50h]
  float v40; // [sp+10Ch] [bp-4Ch]

  v9 = a4;
  v10 = a3;
  v40 = a5;
  v11 = a5;
  v38 = a3;
  v39 = a4;
  if ( a8 )
  {
    v12 = *(_DWORD *)(dword_23DEF0 + 4);
    if ( v12 )
    {
      sub_F8828(v12, v27);
      result = sub_FA184(dword_23DEF0, (int)&v30 + 4, (int)&v38, 1, 0, 0, 1, 0, 0, 0);
      if ( !result )
        return result;
      v10 = v38;
      v9 = v39;
      v11 = v40;
    }
  }
  v37[2] = v11;
  v37[1] = v9;
  v37[0] = v10;
  result = ((int (__fastcall *)(float *, float *, _DWORD, _DWORD, _DWORD, _DWORD))(dword_23DF24 + 6051737))(
             v37,
             &v34,
             0,
             0,
             0,
             0);
  if ( v36 >= 1.0 )
  {
    v27[1] = 0;
    v33[0] = &off_22A6CC;
    v27[0] = &off_22A6B8;
    v28 = &off_22A62C;
    std::ios_base::init((std::ios_base *)v33, v29);
    v33[19] = -1;
    v33[0] = &off_22A640;
    v33[18] = 0;
    v27[0] = &off_22A618;
    v28 = &off_22A62C;
    std::streambuf::basic_streambuf(v29);
    v30 = 0LL;
    v31 = 0LL;
    v32 = 24;
    v29[0] = &off_22A710;
    sub_E3EC0((int)v29);
    v14 = bswap32(a7);
    v25[0] = 0;
    v25[1] = 0;
    v26 = 0;
    v15 = (float)BYTE1(v14);
    v16 = (float)(unsigned __int8)v14;
    v17 = (float)HIBYTE(v14) * 0.0039216;
    v18 = (float)BYTE2(v14) * 0.0039216;
    while ( 1 )
    {
      v19 = sub_E384C(v27, (unsigned __int8 *)v25, 10);
      if ( (*((_BYTE *)v19 + *(_DWORD *)(*v19 - 12) + 16) & 5) != 0 )
        break;
      sub_12B090(v24, a2, (unsigned __int8 *)v25, *(float *)&dword_238EC0 * 0.5);
      *((float *)&v23 + 1) = v35;
      v22 = v17;
      v21 = v18;
      *((float *)&v20 + 1) = v15 * 0.0039216;
      *(float *)&v20 = v16 * 0.0039216;
      *(float *)&v23 = v34 - (float)(v24[0] * 0.5);
      sub_12AE34(a2, &v23, &v20, (unsigned __int8 *)v25, 1, *(float *)&dword_238EC0 * 0.5);
      v35 = v35 + (float)(*(float *)&dword_238EC0 * 0.5);
    }
    if ( LOBYTE(v25[0]) << 31 )
      operator delete(v26);
    v33[0] = &off_22A640;
    v27[0] = &off_22A618;
    v29[0] = &off_22A710;
    v28 = &off_22A62C;
    if ( (unsigned __int8)v30 << 31 )
      operator delete((void *)v31);
    std::streambuf::~streambuf(v29);
    std::iostream::~basic_iostream(v27, off_22A64C);
    return std::ios::~ios(v33);
  }
  return result;
}


// ======================================================================
