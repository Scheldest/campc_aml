// ADDR: 0x13a168
// SYMBOL: sub_13A168
int __fastcall sub_13A168(int a1, int a2, unsigned int a3, unsigned __int8 *a4, unsigned __int8 *a5, int a6, int a7)
{
  unsigned int v8; // r0
  int v10; // r4
  int v11; // r8
  unsigned int v13; // r1
  unsigned int v14; // r0
  unsigned int v15; // r1
  int v16; // r0
  int result; // r0
  _DWORD *v18; // r0
  int v19; // r1
  unsigned int v20; // r6
  int v21; // r8
  char *v22; // r0
  int v23; // r1
  int v24; // r2
  __int64 v25; // kr08_8
  int v26; // r6
  int v27; // r0
  void **v28; // r0
  int v29; // r5
  int v30; // r6
  unsigned __int16 *v31; // r0
  unsigned __int8 *v32; // [sp+28h] [bp-F0h]
  _BYTE v33[12]; // [sp+30h] [bp-E8h] BYREF
  _DWORD v34[3]; // [sp+3Ch] [bp-DCh] BYREF
  _DWORD v35[2]; // [sp+48h] [bp-D0h] BYREF
  void *v36; // [sp+50h] [bp-C8h]
  int v37; // [sp+58h] [bp-C0h] BYREF
  unsigned int v38; // [sp+5Ch] [bp-BCh]
  void *v39; // [sp+60h] [bp-B8h]
  _DWORD v40[2]; // [sp+68h] [bp-B0h] BYREF
  _UNKNOWN **v41; // [sp+70h] [bp-A8h]
  _DWORD v42[8]; // [sp+74h] [bp-A4h] BYREF
  __int64 v43; // [sp+94h] [bp-84h]
  __int64 v44; // [sp+9Ch] [bp-7Ch]
  int v45; // [sp+A4h] [bp-74h]
  _DWORD v46[20]; // [sp+A8h] [bp-70h] BYREF
  _WORD v47[15]; // [sp+FAh] [bp-1Eh] BYREF

  v8 = *a4;
  v10 = a6;
  v11 = (int)a5;
  v13 = *((_DWORD *)a4 + 1);
  v47[0] = a2;
  if ( !(v8 << 31) )
    v13 = v8 >> 1;
  if ( !v13 )
    return sub_2242C8(4, "AXL", "dialog %d is empty", a2);
  v14 = *a5;
  v15 = *((_DWORD *)a5 + 1);
  if ( !(v14 << 31) )
    v15 = v14 >> 1;
  if ( !v15 )
    return sub_2242C8(4, "AXL", "dialog %d is empty", a2);
  if ( *(_BYTE *)(dword_381BF4 + 132) || (v32 = a4, v16 = sub_17C1DA(dword_381BF4, 0), v10 = a6, a4 = v32, v16) )
  {
    result = a3 + 1;
    if ( a3 != -1 )
    {
      *(_WORD *)(a1 + 116) = a2;
      return sub_17C4D0(dword_381BF4, a2, a3, a4, a5, v10, a7);
    }
    return result;
  }
  *(_DWORD *)(a1 + 120) = a3;
  sub_F4D48((__int64 *)(a1 + 124));
  if ( a3 <= 5 && ((1 << a3) & 0x34) != 0 )
  {
    v40[1] = 0;
    v46[0] = &off_22A6CC;
    std::ios_base::init((std::ios_base *)v46, v42);
    v41 = &off_22A62C;
    v46[19] = -1;
    v46[18] = 0;
    v46[0] = &off_22A640;
    v40[0] = &off_22A618;
    std::streambuf::basic_streambuf(v42);
    v43 = 0LL;
    v44 = 0LL;
    v45 = 24;
    v42[0] = &off_22A710;
    sub_E3EC0((int)v42);
    v37 = 0;
    v38 = 0;
    v39 = 0;
    while ( 1 )
    {
      v18 = sub_E384C(v40, (unsigned __int8 *)&v37, 10);
      v19 = (unsigned __int8)v37;
      if ( (*((_BYTE *)v18 + *(_DWORD *)(*v18 - 12) + 16) & 5) != 0 )
        break;
      v20 = v38;
      if ( (v37 & 1) == 0 )
        v20 = (unsigned __int8)v37 >> 1;
      if ( v20 )
      {
        v21 = 0;
        v35[0] = 0;
        v35[1] = 0;
        v36 = 0;
        while ( 1 )
        {
          v22 = (char *)v39;
          if ( !(v19 << 31) )
            v22 = (char *)&v37 + 1;
          v23 = (unsigned __int8)v22[v21];
          if ( v23 != 123 || (v24 = v21 + 7, v21 + 7 > v20) || v22[v24] != 125 )
          {
            std::string::push_back(v35, v23);
            v24 = v21;
          }
          v21 = v24 + 1;
          if ( v24 + 1 >= v20 )
            break;
          v19 = (unsigned __int8)v37;
        }
        v25 = *(_QWORD *)(a1 + 128);
        if ( (_DWORD)v25 == HIDWORD(v25) )
        {
          sub_126DEE((void **)(a1 + 124), (int)v35);
        }
        else
        {
          std::string::basic_string(v25, v35);
          *(_DWORD *)(a1 + 128) = v25 + 12;
        }
        if ( LOBYTE(v35[0]) << 31 )
          operator delete(v36);
      }
    }
    if ( (v37 & 1) != 0 )
      operator delete(v39);
    v46[0] = &off_22A640;
    v40[0] = &off_22A618;
    v11 = (int)a5;
    v41 = &off_22A62C;
    v42[0] = &off_22A710;
    if ( (unsigned __int8)v43 << 31 )
      operator delete((void *)v44);
    std::streambuf::~streambuf(v42);
    std::iostream::~basic_iostream(v40, off_22A64C);
    std::ios::~ios(v46);
  }
  sub_13D450(*(_DWORD *)(*(_DWORD *)(a1 + 104) + 84), v32);
  sub_13D450(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 112) + 108) + 84), a6);
  sub_13D450(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 112) + 112) + 84), a7);
  if ( *(_BYTE *)(a1 + 83) && sub_13B450(a1 + 84, v47) )
  {
    v26 = *(_DWORD *)(a1 + 108);
    v27 = sub_13A558(a1 + 84, v47);
    std::string::basic_string(v33, v27 + 4);
    sub_139D94(v26, a3, v11, (int)v33);
    if ( !(v33[0] << 31) )
      goto LABEL_45;
    v28 = (void **)v33;
  }
  else
  {
    v29 = *(_DWORD *)(a1 + 108);
    sub_DC6DC(v34, &byte_8F794);
    sub_139D94(v29, a3, v11, (int)v34);
    if ( !(LOBYTE(v34[0]) << 31) )
      goto LABEL_45;
    v28 = (void **)v34;
  }
  operator delete(v28[2]);
LABEL_45:
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
  if ( *(_BYTE *)(a1 + 83) && sub_13B450(a1 + 84, v47) && a3 <= 5 && ((1 << a3) & 0x34) != 0 )
  {
    v30 = *(_DWORD *)(a1 + 108);
    v31 = (unsigned __int16 *)sub_13A558(a1 + 84, v47);
    sub_139FC8(v30, *v31);
  }
  if ( *(_BYTE *)(a1 + 80) != 1 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 36))(a1, 1);
  result = v47[0];
  *(_BYTE *)(a1 + 80) = 1;
  *(_WORD *)(a1 + 116) = result;
  return result;
}


// ======================================================================
// ADDR: 0x18cec8
// SYMBOL: sub_18CEC8
int sub_18CEC8()
{
  return dword_382754;
}


// ======================================================================
// ADDR: 0x18d07e
// SYMBOL: sub_18D07E
int sub_18D07E(int *a1, _BYTE *a2, signed int a3, int *a4, ...)
{
  int v8; // r6
  int *v9; // r9
  signed int v10; // r0
  _WORD v12[13]; // [sp+6h] [bp-1Ah] BYREF
  va_list va; // [sp+28h] [bp+8h] BYREF

  va_start(va, a4);
  v8 = 0;
  if ( sub_18CFBE((int)a1, (int *)va) )
  {
    v9 = *(int **)sub_18D000(a1, (int *)va);
    *a2 = 0;
    if ( sub_17D9C0(a4, v12, 16, 1) )
    {
      v8 = 0;
      if ( *a4 - a4[2] >= v12[0] )
      {
        v10 = sub_17DE9C(v9, (int)a4, v12[0], a3, (int)a2);
        if ( v10 >= a3 )
          v10 = a3 - 1;
        a2[v10] = 0;
        return 1;
      }
    }
  }
  return v8;
}


// ======================================================================
