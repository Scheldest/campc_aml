// ADDR: 0xe35a0
// SYMBOL: sub_E35A0
int __fastcall sub_E35A0(int a1)
{
  int v1; // r4

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 )
  {
    v1 = operator new(0x2F0u);
    sub_103B88();
    *(_DWORD *)(a1 + 8) = v1;
  }
  return v1;
}


// ======================================================================
// ADDR: 0xe35c8
// SYMBOL: sub_E35C8
int __fastcall sub_E35C8(int a1, int a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  int result; // r0
  _DWORD *v9; // r0
  float v10[4]; // [sp+20h] [bp-120h] BYREF
  float v11[2]; // [sp+30h] [bp-110h] BYREF
  float v12[2]; // [sp+38h] [bp-108h] BYREF
  _DWORD v13[2]; // [sp+40h] [bp-100h] BYREF
  void *v14; // [sp+48h] [bp-F8h]
  _DWORD v15[2]; // [sp+50h] [bp-F0h] BYREF
  _UNKNOWN **v16; // [sp+58h] [bp-E8h]
  _DWORD v17[8]; // [sp+5Ch] [bp-E4h] BYREF
  __int64 v18; // [sp+7Ch] [bp-C4h]
  __int64 v19; // [sp+84h] [bp-BCh]
  int v20; // [sp+8Ch] [bp-B4h] BYREF
  _DWORD v21[20]; // [sp+90h] [bp-B0h] BYREF
  float v22; // [sp+E0h] [bp-60h] BYREF
  float v23; // [sp+E4h] [bp-5Ch]
  float v24; // [sp+E8h] [bp-58h]
  _DWORD v25[21]; // [sp+ECh] [bp-54h] BYREF

  v25[2] = a5;
  v25[0] = a3;
  v25[1] = a4;
  result = ((int (__fastcall *)(_DWORD *, float *, _DWORD, _DWORD, _DWORD, _DWORD))(dword_23DF24 + 6051737))(
             v25,
             &v22,
             0,
             0,
             0,
             0);
  if ( v24 >= 1.0 )
  {
    v15[1] = 0;
    v21[0] = &off_22A6CC;
    std::ios_base::init((std::ios_base *)v21, v17);
    v21[19] = -1;
    v21[0] = &off_22A640;
    v21[18] = 0;
    v15[0] = &off_22A618;
    v16 = &off_22A62C;
    std::streambuf::basic_streambuf(v17);
    v18 = 0LL;
    v19 = 0LL;
    v20 = 24;
    v17[0] = &off_22A710;
    sub_E3EC0(v17, a6, &v20);
    v13[0] = 0;
    v13[1] = 0;
    v14 = 0;
    while ( 1 )
    {
      v9 = (_DWORD *)sub_E384C(v15, v13, 10);
      if ( (*((_BYTE *)v9 + *(_DWORD *)(*v9 - 12) + 16) & 5) != 0 )
        break;
      sub_12B090(v12, a2, v13, *(float *)&dword_238EC0 * 0.5);
      v11[1] = v23;
      v10[3] = (float)HIBYTE(a7) * 0.0039216;
      v10[2] = (float)BYTE2(a7) * 0.0039216;
      v10[1] = (float)BYTE1(a7) * 0.0039216;
      v10[0] = (float)(unsigned __int8)a7 * 0.0039216;
      v11[0] = v22 - (float)(v12[0] * 0.5);
      sub_12AE34(a2, (int)v11, (int)v10, (int)v13, 1, *(float *)&dword_238EC0 * 0.5);
      v23 = v23 + (float)(*(float *)&dword_238EC0 * 0.5);
    }
    if ( LOBYTE(v13[0]) << 31 )
      operator delete(v14);
    v21[0] = &off_22A640;
    v15[0] = &off_22A618;
    v17[0] = &off_22A710;
    v16 = &off_22A62C;
    if ( (unsigned __int8)v18 << 31 )
      operator delete((void *)v19);
    std::streambuf::~streambuf(v17);
    std::iostream::~basic_iostream(v15, off_22A64C);
    return std::ios::~ios(v21);
  }
  return result;
}


// ======================================================================
// ADDR: 0xf8d40
// SYMBOL: sub_F8D40
int __fastcall sub_F8D40(int a1)
{
  _DWORD *v1; // r1
  float v2; // s0
  _DWORD v4[12]; // [sp+0h] [bp-48h] BYREF
  float v5; // [sp+30h] [bp-18h]
  float v6; // [sp+34h] [bp-14h]
  float v7; // [sp+38h] [bp-10h]

  v1 = *(_DWORD **)(a1 + 4);
  v2 = 100000.0;
  if ( v1 && *v1 != 6716708 )
  {
    sub_F8910(a1, v4);
    v2 = sqrtf(
           (float)((float)((float)(v6 - *(float *)(dword_23DF24 + 9775320))
                         * (float)(v6 - *(float *)(dword_23DF24 + 9775320)))
                 + (float)((float)(v5 - *(float *)(dword_23DF24 + 9775316))
                         * (float)(v5 - *(float *)(dword_23DF24 + 9775316))))
         + (float)((float)(v7 - *(float *)(dword_23DF24 + 9775324)) * (float)(v7 - *(float *)(dword_23DF24 + 9775324))));
  }
  return LODWORD(v2);
}


// ======================================================================
// ADDR: 0xf8e1c
// SYMBOL: sub_F8E1C
int __fastcall sub_F8E1C(int a1)
{
  int v2; // r0
  float v3; // s0
  int v4; // r4
  int v5; // r0
  float32x2_t v6; // d16
  unsigned __int64 v7; // d1
  _DWORD v9[12]; // [sp+0h] [bp-90h] BYREF
  float v10; // [sp+30h] [bp-60h]
  float32x2_t v11; // [sp+34h] [bp-5Ch]
  _DWORD v12[12]; // [sp+40h] [bp-50h] BYREF
  float v13; // [sp+70h] [bp-20h]
  float32x2_t v14; // [sp+74h] [bp-1Ch]

  v2 = sub_E35A0(dword_23DEF0);
  v3 = 10000.0;
  if ( v2 )
  {
    v4 = v2;
    if ( *(_DWORD *)(a1 + 4) )
    {
      sub_F8910(a1, v9);
      if ( dword_23DEF4
        && (v5 = *(_DWORD *)(**(_DWORD **)(dword_23DEF4 + 944) + 5052)) != 0
        && (*(_BYTE *)(v5 + 432) || *(_BYTE *)(v5 + 34)) )
      {
        sub_F8828(*(_DWORD *)(dword_23DEF0 + 4), v12);
      }
      else
      {
        sub_F8910(v4, v12);
      }
      v6.n64_u64[0] = vsub_f32(v11, v14).n64_u64[0];
      v7 = vmul_f32(v6, v6).n64_u64[0];
      v3 = sqrtf((float)(*(float *)&v7 + (float)((float)(v10 - v13) * (float)(v10 - v13))) + *((float *)&v7 + 1));
    }
  }
  return LODWORD(v3);
}


// ======================================================================
// ADDR: 0x104d90
// SYMBOL: sub_104D90
int __fastcall sub_104D90(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 92);
  if ( result )
  {
    if ( **(_DWORD **)(a1 + 4) != dword_23DF24 + 6716708 )
      return ((int (*)(void))(dword_23DF24 + 4868765))();
  }
  return result;
}


// ======================================================================
