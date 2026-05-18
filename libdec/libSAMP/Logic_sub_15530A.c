// ADDR: 0x15c1bc
// SYMBOL: sub_15C1BC
void __fastcall sub_15C1BC(int a1, int a2, __int16 a3, unsigned __int8 *a4, int a5)
{
  int v8; // r0
  int v9; // r4
  int v10; // r0
  int v11; // r0
  char v12; // r4
  std::__itoa *v13; // r1
  __int64 v14; // kr00_8
  unsigned int *v15; // r0
  unsigned int v16; // r1
  std::__shared_weak_count *v17; // r4
  unsigned int *v18; // r0
  unsigned int v19; // r1
  int v20; // r0
  unsigned int v21; // r4
  std::error_code *v22; // r2
  int v23; // r0
  int *v24; // r2
  std::__itoa *v25; // r3
  __int64 v26; // kr08_8
  unsigned int *v27; // r0
  unsigned int v28; // r1
  std::__shared_weak_count *v29; // r4
  unsigned int *v30; // r0
  unsigned int v31; // r1
  int *v32; // r0
  unsigned int *v33; // r1
  unsigned int v34; // r2
  _BYTE v35[8]; // [sp+8h] [bp-68h] BYREF
  void *v36; // [sp+10h] [bp-60h]
  char v37[8]; // [sp+14h] [bp-5Ch] BYREF
  void *v38; // [sp+1Ch] [bp-54h]
  int v39; // [sp+20h] [bp-50h] BYREF
  unsigned int *v40; // [sp+24h] [bp-4Ch]
  void *v41; // [sp+28h] [bp-48h]
  unsigned __int8 v42[8]; // [sp+2Ch] [bp-44h] BYREF
  void *v43; // [sp+34h] [bp-3Ch]
  char v44; // [sp+38h] [bp-38h]
  std::__itoa *v45; // [sp+3Ch] [bp-34h] BYREF
  __int16 v46; // [sp+42h] [bp-2Eh] BYREF
  int *v47; // [sp+44h] [bp-2Ch] BYREF
  unsigned __int8 v48[40]; // [sp+48h] [bp-28h] BYREF

  v46 = a3;
  v45 = (std::__itoa *)sub_12DE18(a2, a4);
  v8 = sub_15C95E(a2 + 4, &v45);
  if ( v8 )
  {
    v9 = v8;
    v10 = std::string::basic_string(v42, a4);
    v44 = a5;
    v47 = (int *)v10;
    *(_DWORD *)v48 = &v46;
    sub_15CF04(&v39, a2 + 44, &v46, &unk_BA6B8, v48, &v47);
    if ( v42[0] << 31 )
      operator delete(v43);
    v11 = operator new(0x30u);
    *(_DWORD *)(v11 + 4) = 0;
    *(_DWORD *)(v11 + 8) = 0;
    v12 = *(_BYTE *)(v9 + 12);
    *(_DWORD *)v11 = &off_22F8DC;
    v13 = v45;
    *(_BYTE *)(v11 + 32) = v12;
    *(_DWORD *)(v11 + 40) = 0;
    *(_DWORD *)(v11 + 44) = 0;
    *(_WORD *)(v11 + 33) = 256;
    *(_DWORD *)(v11 + 20) = 0;
    *(_DWORD *)(v11 + 24) = 0;
    *(_DWORD *)(v11 + 28) = v13;
    v40 = (unsigned int *)v11;
    *(_DWORD *)(v11 + 16) = 0;
    v39 = v11 + 16;
    v47 = &v39;
    *(_DWORD *)v48 = &v46;
    sub_15D3CE(v42, a2 + 24, &v46, &unk_BA6B8, v48, &v47);
    v14 = *(_QWORD *)(*(_DWORD *)v42 + 12);
    *(_QWORD *)a1 = v14;
    if ( HIDWORD(v14) )
    {
      v15 = (unsigned int *)(HIDWORD(v14) + 4);
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 + 1, v15) );
    }
    v17 = (std::__shared_weak_count *)v40;
    if ( v40 )
    {
      v18 = v40 + 1;
      __dmb(0xBu);
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      __dmb(0xBu);
      if ( !v19 )
      {
        (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v17 + 8))(v17);
        std::__shared_weak_count::__release_weak(v17);
      }
    }
  }
  else if ( sub_15D7E2(a2 + 24, &v46) )
  {
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
  }
  else
  {
    if ( a5 && !*(_BYTE *)(a2 + 64) )
      *(_BYTE *)(a2 + 64) = 1;
    v20 = std::string::basic_string(v42, a4);
    v44 = a5;
    v47 = (int *)v20;
    *(_DWORD *)v48 = &v46;
    sub_15CF04(&v39, a2 + 44, &v46, &unk_BA6B8, v48, &v47);
    if ( v42[0] << 31 )
      operator delete(v43);
    std::to_string((std::__ndk1 *)&v39, v45);
    sub_15A2FC((int)v42, (int)&v39, a5);
    if ( (unsigned __int8)v39 << 31 )
      operator delete(v41);
    sub_15C53C(&v39, v42);
    std::__fs::filesystem::__status((std::__fs::filesystem *)v48, (const std::__fs::filesystem::path *)&v39, 0);
    v21 = v48[0] - 1;
    if ( (unsigned __int8)v39 << 31 )
      operator delete(v41);
    if ( v21 >= 0xFE )
    {
      sub_15C53C(&v39, v42);
      std::__fs::filesystem::__create_directories((std::__fs::filesystem *)&v39, 0, v22);
      if ( (unsigned __int8)v39 << 31 )
        operator delete(v41);
    }
    std::string::basic_string(v37, a4);
    std::string::basic_string(v35, v42);
    sub_158190(&v47, v37, (int)v35);
    if ( v35[0] << 31 )
      operator delete(v36);
    if ( (unsigned __int8)v37[0] << 31 )
      operator delete(v38);
    v23 = operator new(0x30u);
    v24 = v47;
    v25 = v45;
    *(_DWORD *)(v23 + 40) = 0;
    *(_DWORD *)(v23 + 44) = 0;
    *(_WORD *)(v23 + 33) = 1;
    *(_BYTE *)(v23 + 32) = a5;
    *(_DWORD *)(v23 + 20) = 0;
    *(_DWORD *)(v23 + 24) = 0;
    *(_DWORD *)(v23 + 28) = v25;
    *(_DWORD *)v23 = &off_22F8DC;
    *(_DWORD *)(v23 + 4) = 0;
    *(_DWORD *)(v23 + 8) = 0;
    v40 = (unsigned int *)v23;
    *(_DWORD *)(v23 + 16) = v24;
    v47 = 0;
    v39 = v23 + 16;
    ((void (__fastcall *)(unsigned __int8 *, int, __int16 *, int *))loc_15C5B0)(v48, a2 + 24, &v46, &v39);
    v26 = *(_QWORD *)(*(_DWORD *)v48 + 12);
    *(_QWORD *)a1 = v26;
    if ( HIDWORD(v26) )
    {
      v27 = (unsigned int *)(HIDWORD(v26) + 4);
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 + 1, v27) );
    }
    v29 = (std::__shared_weak_count *)v40;
    if ( v40 )
    {
      v30 = v40 + 1;
      __dmb(0xBu);
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      __dmb(0xBu);
      if ( !v31 )
      {
        (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v29 + 8))(v29);
        std::__shared_weak_count::__release_weak(v29);
      }
    }
    v32 = v47;
    if ( v47 )
    {
      v33 = (unsigned int *)(v47 + 1);
      __dmb(0xBu);
      do
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      __dmb(0xBu);
      if ( !v34 )
        (*(void (__fastcall **)(int *))(*v32 + 8))(v32);
    }
    if ( v42[0] << 31 )
      operator delete(v43);
  }
}


// ======================================================================
