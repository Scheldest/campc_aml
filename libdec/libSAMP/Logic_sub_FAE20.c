// ADDR: 0xfa524
// SYMBOL: sub_FA524
int __fastcall sub_FA524(int a1)
{
  int v2; // r8
  int v3; // r0
  int v4; // r1
  std::__shared_weak_count *v5; // r1
  std::__shared_weak_count *v6; // r0
  int v7; // r1
  int v8; // r10
  int v9; // r0
  int v10; // r6
  int v11; // r0
  int v12; // r1
  int v13; // r1
  int v14; // r1
  int v15; // r0
  int v16; // r5
  _DWORD *v17; // r0
  int v18; // r1
  char *v19; // r8
  char *v20; // r9
  char *v21; // r0
  char *v22; // r0
  char *v23; // r5
  size_t v24; // r0
  int v25; // r0
  int v26; // r1
  _DWORD v28[3]; // [sp+Ch] [bp-13Ch] BYREF
  _UNKNOWN **v29; // [sp+18h] [bp-130h] BYREF
  int v30; // [sp+1Ch] [bp-12Ch]
  std::__shared_weak_count *v31; // [sp+20h] [bp-128h] BYREF
  _DWORD *v32; // [sp+28h] [bp-120h]
  int v33; // [sp+60h] [bp-E8h]
  _UNKNOWN **v34; // [sp+7Ch] [bp-CCh] BYREF
  int v35; // [sp+D0h] [bp-78h] BYREF
  int v36; // [sp+D4h] [bp-74h]
  void *v37; // [sp+D8h] [bp-70h]
  _BYTE v38[16]; // [sp+E0h] [bp-68h] BYREF
  _BYTE *v39; // [sp+F0h] [bp-58h]
  _DWORD v40[4]; // [sp+F8h] [bp-50h] BYREF
  _DWORD *v41; // [sp+108h] [bp-40h]
  _BYTE v42[8]; // [sp+110h] [bp-38h] BYREF
  void *v43; // [sp+118h] [bp-30h]
  _BYTE *v44; // [sp+120h] [bp-28h]

  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 16) = 0;
  v2 = a1 + 16;
  *(_DWORD *)(a1 + 4) = &off_22AE84;
  *(_DWORD *)(a1 + 8) = 0;
  v3 = dword_23DEEC;
  *(_DWORD *)(a1 + 12) = 0;
  if ( !v3 )
  {
    _android_log_print(6, "AXL", "Can't create %s - UI object not defined", "Headmove");
    return a1;
  }
  v4 = *(_DWORD *)(v3 + 96);
  v41 = v40;
  v40[1] = a1;
  v40[0] = &off_22AEC0;
  sub_12CD48(&v29, v4, "headmove", 8, v40, &off_22AE84);
  v5 = v31;
  *(_DWORD *)(a1 + 8) = v30;
  v6 = *(std::__shared_weak_count **)(a1 + 12);
  *(_DWORD *)(a1 + 12) = v5;
  v30 = 0;
  v31 = 0;
  if ( v6 )
  {
    std::__shared_weak_count::__release_weak(v6);
    v29 = &off_22AE84;
    if ( v31 )
      std::__shared_weak_count::__release_weak(v31);
  }
  else
  {
    v29 = &off_22AE84;
  }
  if ( v40 == v41 )
  {
    v7 = 4;
  }
  else
  {
    if ( !v41 )
      goto LABEL_12;
    v7 = 5;
  }
  (*(void (**)(void))(*v41 + 4 * v7))();
LABEL_12:
  v8 = dword_23DF24;
  sub_FA9E4(v38, sub_FA944, 0, a1);
  v9 = sub_FAFC0(v42, v38);
  sub_FAF68(v9);
  v10 = dword_247388;
  if ( dword_247388 )
    goto LABEL_18;
  v11 = sub_FAFC0(&v29, v42);
  sub_FAF68(v11);
  sub_FAFEC(&unk_247378, &v29);
  if ( &v29 == v32 )
  {
    v12 = 4;
  }
  else
  {
    if ( !v32 )
      goto LABEL_18;
    v12 = 5;
  }
  (*(void (**)(void))(*v32 + 4 * v12))();
LABEL_18:
  if ( v42 == v44 )
  {
    v13 = 4;
  }
  else
  {
    if ( !v44 )
      goto LABEL_23;
    v13 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v44 + 4 * v13))();
LABEL_23:
  if ( !v10 )
    sub_164196(v8 + 6752264, sub_FAF14, v2);
  if ( v38 == v39 )
  {
    v14 = 4;
    goto LABEL_29;
  }
  if ( v39 )
  {
    v14 = 5;
LABEL_29:
    (*(void (**)(void))(*(_DWORD *)v39 + 4 * v14))();
  }
  v28[0] = sub_F97EC();
  std::__fs::filesystem::path::path<char const*,void>((int)&v29);
  std::__fs::filesystem::path::path<char const*,void>((int)&v35);
  sub_F1DD4((int)v42, (int)&v29, (int)&v35);
  if ( (unsigned __int8)v35 << 31 )
    operator delete(v37);
  if ( (unsigned __int8)v29 << 31 )
    operator delete(v31);
  std::__fs::filesystem::__status((std::__fs::filesystem *)&v29, (const std::__fs::filesystem::path *)v42, 0);
  if ( (unsigned int)(unsigned __int8)v29 - 1 < 0xFE )
  {
    sub_FAA20(&v29, v42, 8);
    if ( v33 )
    {
      v35 = 0;
      v36 = 0;
      v37 = 0;
LABEL_37:
      while ( 1 )
      {
        std::ios_base::getloc((std::ios_base *)v28);
        v15 = std::locale::use_facet((std::locale *)v28, (std::locale::id *)&std::ctype<char>::id);
        v16 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v15 + 28))(v15, 10);
        std::locale::~locale((std::locale *)v28);
        v17 = sub_E384C(&v29, (unsigned __int8 *)&v35, v16);
        if ( (*((_BYTE *)v17 + *(_DWORD *)(*v17 - 12) + 16) & 5) != 0 )
          break;
        v18 = v36;
        v19 = (char *)v37;
        if ( (v35 & 1) == 0 )
        {
          v18 = (unsigned __int8)v35 >> 1;
          v19 = (char *)&v35 + 1;
        }
        if ( v18 >= 8 )
        {
          v20 = &v19[v18];
          v21 = v19;
          while ( 1 )
          {
            v22 = (char *)memchr(v21, 101, v18 - 7);
            if ( !v22 )
              break;
            v23 = v22;
            if ( !memcmp(v22, "enabled=", 8u) )
            {
              if ( v23 != v20 && v23 == v19 )
              {
                v24 = _strlen_chk("enabled=", 9u);
                std::string::basic_string(v28, &v35, v24, -1, &v35);
                v25 = std::stoi(v28, 0, 10);
                v26 = LOBYTE(v28[0]);
                *(_BYTE *)a1 = v25 != 0;
                if ( v26 << 31 )
                  operator delete((void *)v28[2]);
              }
              goto LABEL_37;
            }
            v21 = v23 + 1;
            v18 = v20 - (v23 + 1);
            if ( v18 < 8 )
              goto LABEL_37;
          }
        }
      }
      if ( (v35 & 1) != 0 )
        operator delete(v37);
    }
    v29 = &off_22A760;
    v34 = &off_22A774;
    sub_E50B0((int)&v31);
    std::istream::~istream(&v29, off_22A780);
    std::ios::~ios(&v34);
  }
  if ( v42[0] << 31 )
    operator delete(v43);
  return a1;
}


// ======================================================================
