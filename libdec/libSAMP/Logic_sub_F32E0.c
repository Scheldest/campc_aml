// ADDR: 0x1641c4
// SYMBOL: sub_1641C4
int __fastcall sub_1641C4(int a1)
{
  return mprotect((void *)(a1 & 0xFFFFF000), 0x1000u, 3);
}


// ======================================================================
// ADDR: 0x1642ec
// SYMBOL: sub_1642EC
int __fastcall sub_1642EC(llmo::mem::prot *a1, int a2)
{
  int v4; // r0
  llmo::mem *v5; // r0
  llmo::mem *v6; // r9
  unsigned int v7; // r6
  unsigned int v8; // r2
  int v9; // r3
  unsigned int v10; // r5
  int v11; // r0
  int v12; // r3
  int v13; // r0
  int v14; // r4
  void *v15; // r9
  llmo::mem::prot *v16; // r0
  int v18; // r0
  int v19; // r3
  int v20; // r0

  v4 = (unsigned __int8)byte_381AC0;
  __dmb(0xBu);
  if ( !(v4 << 31) && j___cxa_guard_acquire((__guard *)&byte_381AC0) )
  {
    _cxa_atexit((void (*)(void *))std::mutex::~mutex, &unk_381ABC, &off_22A540);
    j___cxa_guard_release((__guard *)&byte_381AC0);
  }
  v5 = (llmo::mem *)std::mutex::lock((std::mutex *)&unk_381ABC);
  v6 = (llmo::mem *)llmo::mem::pageSize(v5);
  v7 = llmo::mem::pageSize(v6);
  v10 = llmo::mem::prot::get(a1, v7, v8);
  if ( v10 == -1 )
    v10 = 5;
  if ( llmo::mem::prot::set(a1, v7, v10 | 2, v9) )
  {
    v11 = *(_DWORD *)(a2 + 16);
    if ( !v11 )
      sub_DC92C();
    (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 24))(v11);
    v13 = llmo::mem::prot::set(a1, v7, v10, v12);
    v14 = 13;
    if ( v13 )
      v14 = 0;
  }
  else if ( (llmo::mem::prot *)(-(int)v6 & (unsigned int)a1) == a1 )
  {
    v15 = (void *)operator new[](v7);
    j_memcpy(v15, a1, v7);
    v16 = (llmo::mem::prot *)munmap(a1, v7);
    if ( v16 || (v16 = (llmo::mem::prot *)mmap(a1, v7, 3, 50, 0, 0), (unsigned int)v16 + 1 <= 1) )
    {
      v14 = *(_DWORD *)_errno(v16);
    }
    else if ( v16 == a1 )
    {
      j_memcpy(a1, v15, v7);
      v18 = *(_DWORD *)(a2 + 16);
      if ( !v18 )
        sub_DC92C();
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 24))(v18);
      v20 = llmo::mem::prot::set(a1, v7, v10, v19);
      v14 = 13;
      if ( v20 )
        v14 = 0;
    }
    else
    {
      v14 = -1;
    }
    operator delete(v15);
  }
  else
  {
    v14 = 22;
  }
  std::mutex::unlock((std::mutex *)&unk_381ABC);
  return v14;
}


// ======================================================================
