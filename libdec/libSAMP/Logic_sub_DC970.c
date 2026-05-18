// ADDR: 0xdca40
// SYMBOL: sub_DCA40
int __fastcall sub_DCA40(_DWORD *a1, int a2, int a3, void *a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v11; // r0
  _DWORD v13[2]; // [sp+14h] [bp-134h] BYREF
  int v14; // [sp+1Ch] [bp-12Ch]
  int v15; // [sp+20h] [bp-128h]
  int v16; // [sp+24h] [bp-124h]
  int v17; // [sp+28h] [bp-120h]
  int v18; // [sp+2Ch] [bp-11Ch]
  int v19; // [sp+30h] [bp-118h] BYREF

  v15 = 256;
  v17 = a3;
  v18 = a2;
  v13[1] = &v19;
  v16 = 0;
  v14 = 0;
  v13[0] = &off_22A56C;
  sub_DCAC4((int)v13, a4, a5, (int)a4, a7, a8, a9, a10, 0);
  sub_DCCDE(v13);
  v11 = v14 + v16;
  *a1 = v18;
  a1[1] = v11;
  return sub_DCCDE(v13);
}


// ======================================================================
// ADDR: 0xed4f8
// SYMBOL: sub_ED4F8
int __fastcall sub_ED4F8(int a1, char *text, int a3)
{
  int v6; // r0
  std::ios_base *v7; // r4
  std::ios_base *v8; // r6
  __int64 v9; // r0
  int v10; // r0
  int v11; // r3
  const char *v12; // r2
  int v13; // r0
  int v14; // r4
  _BYTE v16[8]; // [sp+18h] [bp-D8h] BYREF
  _BYTE *v17; // [sp+20h] [bp-D0h] BYREF
  int (*v18)(); // [sp+24h] [bp-CCh] BYREF
  const char *v19; // [sp+28h] [bp-C8h]
  int v20; // [sp+2Ch] [bp-C4h]
  char *v21; // [sp+30h] [bp-C0h]
  int v22; // [sp+34h] [bp-BCh]
  _UNKNOWN **v23; // [sp+80h] [bp-70h] BYREF

  _android_log_write(4, "AXL", text);
  v6 = (unsigned __int8)byte_23DEB4;
  __dmb(0xBu);
  if ( !(v6 << 31) && j___cxa_guard_acquire((__guard *)&byte_23DEB4) )
  {
    sub_ED844(dword_23DE04);
    _cxa_atexit((void (*)(void *))sub_EDE5C, dword_23DE04, &off_22A540);
    j___cxa_guard_release((__guard *)&byte_23DEB4);
  }
  if ( !dword_23DE48 )
  {
    sub_ED844(&v17);
    v7 = (std::ios_base *)((char *)&v17 + *((_DWORD *)v17 - 3));
    v8 = (std::ios_base *)((char *)dword_23DE04 + *(_DWORD *)(dword_23DE04[0] - 12));
    std::ios_base::swap(v8, v7);
    v9 = *((_QWORD *)v8 + 9);
    *((_QWORD *)v8 + 9) = *((_QWORD *)v7 + 9);
    *((_QWORD *)v7 + 9) = v9;
    sub_E5108(dword_23DE08);
    sub_EE410(dword_23DE08, &v18);
    v17 = &off_22A924;
    v23 = &off_22A938;
    sub_E50B0((int)&v18);
    std::ostream::~ostream(&v17, off_22A944);
    std::ios::~ios(&v23);
    if ( !dword_23DE48 )
      return _android_log_write(5, "LogWrite", "Can't open file");
  }
  if ( a1 )
  {
    std::chrono::system_clock::now((std::chrono::system_clock *)v16);
    v10 = a1 - 1;
    if ( (unsigned int)(a1 - 1) > 2 )
    {
      v11 = 3;
      v12 = "AXL";
    }
    else
    {
      v11 = dword_92268[v10];
      v12 = off_22AA80[v10];
    }
    v22 = a3;
    v19 = v12;
    v20 = v11;
    v21 = text;
    v17 = v16;
    v18 = sub_EE610;
    sub_EE584(dword_23DE04, "{:%H:%M:%S} | [{}] {}", 21, &v17, 3551, 0, &v17, 0);
  }
  else
  {
    std::chrono::system_clock::now((std::chrono::system_clock *)v16);
    v20 = 3;
    v21 = text;
    v22 = a3;
    v19 = "AXL";
    v17 = v16;
    v18 = sub_EE610;
    sub_EE584(dword_23DE04, "{:%H:%M:%S} | {}", 16, &v17, 3551, 0, &v17, 0);
  }
  std::ios_base::getloc((std::ios_base *)&v17);
  v13 = std::locale::use_facet((std::locale *)&v17, (std::locale::id *)&std::ctype<char>::id);
  v14 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v13 + 28))(v13, 10);
  std::locale::~locale((std::locale *)&v17);
  std::ostream::put(dword_23DE04, v14);
  return std::ostream::flush(dword_23DE04);
}


// ======================================================================
// ADDR: 0xf06b2
// SYMBOL: sub_F06B2
int __fastcall sub_F06B2(int a1)
{
  std::mutex *v2; // r0

  v2 = (std::mutex *)sub_F06C4();
  std::mutex::lock(v2);
  return a1;
}


// ======================================================================
// ADDR: 0xf0720
// SYMBOL: sub_F0720
int __fastcall sub_F0720(int a1)
{
  std::mutex *v2; // r0

  v2 = (std::mutex *)sub_F06C4();
  std::mutex::unlock(v2);
  return a1;
}


// ======================================================================
// ADDR: 0xf0734
// SYMBOL: sub_F0734
int *sub_F0734()
{
  int v0; // r0
  bool v1; // zf

  v0 = (unsigned __int8)byte_23DEE4;
  __dmb(0xBu);
  if ( !(v0 << 31) && j___cxa_guard_acquire((__guard *)&byte_23DEE4) )
  {
    dword_23DED8 = 0;
    *(_DWORD *)algn_23DEDC = 0;
    dword_23DEE0 = 0;
    _cxa_atexit((void (*)(void *))std::string::~string, &dword_23DED8, &off_22A540);
    j___cxa_guard_release((__guard *)&byte_23DEE4);
  }
  v1 = (unsigned __int8)dword_23DED8 << 31 == 0;
  if ( (unsigned __int8)dword_23DED8 << 31 )
    v1 = ((dword_23DED8 & 0xFFFFFFFE) - 1) >> 12 == 0;
  if ( v1 )
    std::string::reserve(&dword_23DED8, 4096);
  return &dword_23DED8;
}


// ======================================================================
