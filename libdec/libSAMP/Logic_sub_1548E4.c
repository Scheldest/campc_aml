// ADDR: 0x1544e8
// SYMBOL: sub_1544E8
int __fastcall sub_1544E8(int a1)
{
  int v2; // r0
  void *exception; // r4
  int v5; // r0
  int v6; // r0
  _DWORD v7[3]; // [sp+0h] [bp-20h] BYREF
  _DWORD v8[5]; // [sp+Ch] [bp-14h] BYREF

  if ( sub_164A28() )
    sub_164A14();
  if ( !sub_164A00(a1, 44100, 4) )
  {
    exception = j___cxa_allocate_exception(0x18u);
    v5 = sub_1649EC();
    sub_1545C8(exception, "BASS_Init", v5);
    goto LABEL_8;
  }
  if ( (sub_164CF0() & 0xFFFF0000) != 0x2040000 )
  {
    exception = j___cxa_allocate_exception(0x18u);
    v6 = sub_1649EC();
    sub_1545C8(exception, "Incompatible BASS FX", v6);
LABEL_8:
    j___cxa_throw(exception, (struct type_info *)&`typeinfo for'BassException, (void (*)(void *))sub_15466C);
  }
  sub_1649C4(10, 2);
  sub_1649C4(37, 10000);
  sub_164A3C(1065353216, 1058642330, 1065353216);
  v8[1] = -1082130432;
  v8[2] = 0;
  v7[2] = 1065353216;
  v8[0] = 0;
  v7[0] = 0;
  v7[1] = 0;
  v2 = ((int (__fastcall *)(_DWORD, _DWORD, _DWORD *, _DWORD *))sub_164A50)(0, 0, v8, v7);
  return sub_164A70(v2);
}


// ======================================================================
// ADDR: 0x154698
// SYMBOL: sub_154698
int __fastcall sub_154698(int a1)
{
  dword_381A08 = a1;
  return sub_1649C4(5, a1);
}


// ======================================================================
// ADDR: 0x15498c
// SYMBOL: sub_15498C
int __fastcall sub_15498C(int a1)
{
  const char *v2; // r0
  FILE *v3; // r6
  size_t v4; // r4
  void *v5; // r5
  unsigned __int8 *v6; // r0
  int v7; // r1
  int v8; // s0
  int v9; // r0
  int v10; // s0
  int v11; // r0
  bool v12; // r0
  int v13; // r1
  void *v15[2]; // [sp+8h] [bp-B8h] BYREF
  void *v16; // [sp+10h] [bp-B0h]
  _DWORD v17[2]; // [sp+14h] [bp-ACh] BYREF
  void *v18; // [sp+1Ch] [bp-A4h]
  _DWORD v19[8]; // [sp+20h] [bp-A0h] BYREF
  __int64 v20; // [sp+40h] [bp-80h]
  __int64 v21; // [sp+48h] [bp-78h]
  int v22; // [sp+50h] [bp-70h]
  _DWORD v23[27]; // [sp+54h] [bp-6Ch] BYREF

  sub_159B70(4, "LoadConfig..");
  sub_15A2AC(v17);
  v2 = (const char *)v18;
  if ( !(LOBYTE(v17[0]) << 31) )
    v2 = (char *)v17 + 1;
  v3 = fopen(v2, "r");
  if ( LOBYTE(v17[0]) << 31 )
    operator delete(v18);
  if ( v3 )
  {
    fseek(v3, 0, 2);
    v4 = ftell(v3);
    fseek(v3, 0, 0);
    v5 = (void *)operator new[](v4 + 1);
    fread(v5, 1u, v4, v3);
    fclose(v3);
    sub_DC6DC(v15, (char *)v5);
    v23[0] = &off_22A6CC;
    v17[0] = &off_22A6B8;
    v17[1] = 0;
    v18 = &off_22A62C;
    std::ios_base::init((std::ios_base *)v23, v19);
    v23[19] = -1;
    v23[18] = 0;
    v23[0] = &off_22A640;
    v17[0] = &off_22A618;
    v18 = &off_22A62C;
    std::streambuf::basic_streambuf(v19);
    v20 = 0LL;
    v21 = 0LL;
    v22 = 24;
    v19[0] = &off_22A710;
    sub_E3EC0((int)v19);
    if ( LOBYTE(v15[0]) << 31 )
      operator delete(v16);
    sub_E4664(v17, a1 + 96);
    sub_DC6DC(v15, "globalVolume");
    v6 = sub_E4BDC((unsigned __int8 *)(a1 + 96), (int)v15, a1 + 112);
    v7 = LOBYTE(v15[0]);
    *(_DWORD *)(a1 + 112) = v6;
    if ( v7 << 31 )
      operator delete(v16);
    sub_DC6DC(v15, "vehicleVolume");
    v8 = sub_155624(a1 + 96, v15, a1 + 116);
    v9 = LOBYTE(v15[0]);
    *(_DWORD *)(a1 + 116) = v8;
    if ( v9 << 31 )
      operator delete(v16);
    sub_DC6DC(v15, "3DVolume");
    v10 = sub_155624(a1 + 96, v15, a1 + 120);
    v11 = LOBYTE(v15[0]);
    *(_DWORD *)(a1 + 120) = v10;
    if ( v11 << 31 )
      operator delete(v16);
    sub_DC6DC(v15, "recorderEnabled");
    v12 = sub_E4ABC((unsigned __int8 *)(a1 + 96), (int)v15, (unsigned __int8 *)(a1 + 124));
    v13 = LOBYTE(v15[0]);
    *(_BYTE *)(a1 + 124) = v12;
    if ( v13 << 31 )
      operator delete(v16);
    v23[0] = &off_22A640;
    v17[0] = &off_22A618;
    v18 = &off_22A62C;
    v19[0] = &off_22A710;
    if ( (unsigned __int8)v20 << 31 )
      operator delete((void *)v21);
    std::streambuf::~streambuf(v19);
    std::iostream::~basic_iostream(v17, off_22A64C);
    std::ios::~ios(v23);
    return 1;
  }
  else
  {
    sub_159B70(4, "can't open config file.");
    return 0;
  }
}


// ======================================================================
// ADDR: 0x154c6c
// SYMBOL: sub_154C6C
int __fastcall sub_154C6C(int a1)
{
  int v2; // r4
  _QWORD *v3; // r0
  _DWORD v5[2]; // [sp+0h] [bp-18h] BYREF
  void *v6; // [sp+8h] [bp-10h]

  if ( *(_DWORD *)(a1 + 92) )
    return 1;
  v5[0] = 0;
  v5[1] = 0;
  v6 = 0;
  v3 = (_QWORD *)operator new(0x20u);
  *(_DWORD *)(a1 + 92) = v3;
  *v3 = 0LL;
  v3[1] = 0LL;
  v3 += 2;
  *v3 = 0LL;
  v3[1] = 0LL;
  v2 = sub_154CDC(a1, (char *)v5 + 1, 0);
  if ( v2 )
    (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 92) + 20))(**(_DWORD **)(a1 + 92), 1065353216);
  if ( LOBYTE(v5[0]) << 31 )
    operator delete(v6);
  return v2;
}


// ======================================================================
// ADDR: 0x159ef0
// SYMBOL: sub_159EF0
unsigned int __fastcall sub_159EF0(int a1, int a2)
{
  double v2; // d16
  std::error_code *v3; // r2
  unsigned int result; // r0
  _BYTE v5[8]; // [sp+0h] [bp-38h] BYREF
  void *v6; // [sp+8h] [bp-30h]
  _BYTE v7[8]; // [sp+Ch] [bp-2Ch] BYREF
  void *v8; // [sp+14h] [bp-24h]
  double v9; // [sp+18h] [bp-20h] BYREF
  int v10; // [sp+20h] [bp-18h]
  int v11; // [sp+28h] [bp-10h]
  int v12; // [sp+2Ch] [bp-Ch]

  v11 = a1;
  v12 = a2;
  if ( !a2 )
    return sub_159B70(3, "storage path is empty");
  std::__fs::filesystem::path::path<std::string_view,void>((int)v7);
  std::__fs::filesystem::path::path<char [8],void>((int)v5);
  sub_F1DD4((int)&v9, (int)v7, (int)v5);
  if ( (unsigned __int8)dword_381A30 << 31 )
    operator delete((void *)dword_381A38);
  v2 = v9;
  dword_381A38 = v10;
  LOWORD(v9) = 0;
  *(double *)&dword_381A30 = v2;
  if ( v5[0] << 31 )
    operator delete(v6);
  if ( v7[0] << 31 )
    operator delete(v8);
  std::__fs::filesystem::__status((std::__fs::filesystem *)&v9, (const std::__fs::filesystem::path *)&dword_381A30, 0);
  result = LOBYTE(v9) - 1;
  if ( result >= 0xFE )
    return std::__fs::filesystem::__create_directories((std::__fs::filesystem *)&dword_381A30, 0, v3);
  return result;
}


// ======================================================================
// ADDR: 0x15bf80
// SYMBOL: sub_15BF80
void __fastcall sub_15BF80(int a1)
{
  int v2; // r0
  unsigned int *v3; // r1
  unsigned int *v4; // r2
  unsigned int v5; // r3
  std::__fs::filesystem::directory_iterator *v6; // r5
  unsigned __int8 *v7; // r4
  unsigned __int8 *v8; // r10
  int v9; // r11
  std::__fs::filesystem::directory_iterator *v10; // r9
  _DWORD *v11; // r4
  int *v12; // r0
  int v13; // r2
  int v14; // r3
  int v15; // r4
  int v16; // r5
  int v17; // r6
  int v18; // r3
  int v19; // r4
  int v20; // r5
  int v21; // r6
  unsigned __int8 *v22; // r6
  int v23; // r10
  std::__shared_weak_count *v24; // r4
  unsigned int *v25; // r0
  unsigned int v26; // r1
  std::__shared_weak_count *v27; // r4
  unsigned int *v28; // r0
  unsigned int v29; // r1
  int v30; // [sp+4h] [bp-A4h]
  unsigned __int8 v31; // [sp+Ch] [bp-9Ch] BYREF
  void *v32; // [sp+14h] [bp-94h]
  unsigned __int8 v33; // [sp+18h] [bp-90h] BYREF
  void *v34; // [sp+20h] [bp-88h]
  int v35; // [sp+24h] [bp-84h] BYREF
  _BYTE v36[8]; // [sp+28h] [bp-80h] BYREF
  void *v37; // [sp+30h] [bp-78h]
  int v38; // [sp+38h] [bp-70h]
  int v39; // [sp+3Ch] [bp-6Ch]
  int v40; // [sp+40h] [bp-68h]
  int v41; // [sp+44h] [bp-64h]
  int v42; // [sp+48h] [bp-60h]
  int v43; // [sp+4Ch] [bp-5Ch]
  int v44; // [sp+50h] [bp-58h]
  int v45; // [sp+54h] [bp-54h]
  int v46; // [sp+58h] [bp-50h]
  int v47; // [sp+5Ch] [bp-4Ch]
  int v48; // [sp+60h] [bp-48h]
  int v49; // [sp+64h] [bp-44h]
  int v50; // [sp+68h] [bp-40h] BYREF
  unsigned int *v51; // [sp+6Ch] [bp-3Ch]
  int v52; // [sp+70h] [bp-38h] BYREF
  unsigned int *v53; // [sp+74h] [bp-34h]
  _BYTE v54[8]; // [sp+78h] [bp-30h] BYREF
  void *v55; // [sp+80h] [bp-28h]
  char v56[36]; // [sp+84h] [bp-24h] BYREF

  sub_15A0B0((int)v54);
  std::__fs::filesystem::__status((std::__fs::filesystem *)v36, (const std::__fs::filesystem::path *)v54, 0);
  if ( v36[0] == 2 )
  {
    std::__fs::filesystem::directory_iterator::directory_iterator(&v52, v54, 0, 0);
    v2 = v52;
    v3 = v53;
    if ( v53 )
    {
      v4 = v53 + 1;
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    v50 = v2;
    v51 = v3;
    v48 = 0;
    v49 = 0;
    if ( v2 )
    {
      v30 = a1 + 4;
      v6 = (std::__fs::filesystem::directory_iterator *)&v50;
      v7 = &v31;
      v8 = &v33;
      do
      {
        v9 = (int)v7;
        v10 = v6;
        v11 = (_DWORD *)std::__fs::filesystem::directory_iterator::__dereference(v6);
        std::string::basic_string(v36, v11);
        v12 = v11 + 4;
        v13 = v11[4];
        v14 = v11[5];
        v15 = v11[6];
        v16 = v12[3];
        v17 = v12[4];
        v12 += 5;
        v38 = v13;
        v39 = v14;
        v40 = v15;
        v41 = v16;
        v42 = v17;
        v18 = v12[1];
        v19 = v12[2];
        v20 = v12[3];
        v21 = v12[4];
        v43 = *v12;
        v44 = v18;
        v45 = v19;
        v46 = v20;
        v47 = v21;
        v7 = (unsigned __int8 *)v9;
        v6 = v10;
        if ( sub_15C186((std::__fs::filesystem::path *)v36) )
        {
          sub_EC968(v9);
          std::string::basic_string(v8, v9);
          v22 = v8;
          v23 = std::stoul(v8, 0, 10);
          if ( v33 << 31 )
            operator delete(v34);
          if ( v31 << 31 )
            operator delete(v32);
          v35 = v23;
          v33 = 0;
          v8 = v22;
          sub_15CB5C(v56, v30, &v35, &v35, v22);
        }
        if ( v36[0] << 31 )
          operator delete(v37);
        std::__fs::filesystem::directory_iterator::__increment(v10, 0);
      }
      while ( v50 );
    }
    v24 = (std::__shared_weak_count *)v51;
    if ( v51 )
    {
      v25 = v51 + 1;
      __dmb(0xBu);
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      __dmb(0xBu);
      if ( !v26 )
      {
        (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v24 + 8))(v24);
        std::__shared_weak_count::__release_weak(v24);
      }
    }
    v27 = (std::__shared_weak_count *)v53;
    if ( v53 )
    {
      v28 = v53 + 1;
      __dmb(0xBu);
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      __dmb(0xBu);
      if ( !v29 )
      {
        (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v27 + 8))(v27);
        std::__shared_weak_count::__release_weak(v27);
      }
    }
  }
  if ( v54[0] << 31 )
    operator delete(v55);
}


// ======================================================================
