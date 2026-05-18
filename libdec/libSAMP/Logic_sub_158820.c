// ADDR: 0x158b6c
// SYMBOL: sub_158B6C
int __fastcall sub_158B6C(int a1)
{
  FILE *v2; // r0
  std::__shared_weak_count *v3; // r0

  v2 = *(FILE **)a1;
  if ( v2 )
  {
    fclose(v2);
    *(_DWORD *)a1 = 0;
  }
  v3 = *(std::__shared_weak_count **)(a1 + 8);
  if ( v3 )
    std::__shared_weak_count::__release_weak(v3);
  return a1;
}


// ======================================================================
// ADDR: 0x158c02
// SYMBOL: sub_158C02
int __fastcall sub_158C02(int a1, int a2)
{
  std::mutex *v2; // r8
  int v5; // r4
  int v6; // r2
  _DWORD v8[7]; // [sp+4h] [bp-1Ch] BYREF

  v2 = (std::mutex *)(a1 + 12);
  std::mutex::lock((std::mutex *)(a1 + 12));
  if ( *(unsigned __int8 *)(a1 + 20) << 31
    || (v5 = *(_DWORD *)(a1 + 8), v8[0] = 0, std::exception_ptr::~exception_ptr((std::exception_ptr *)v8), v5) )
  {
    sub_158460(2);
  }
  v6 = *(_DWORD *)(a1 + 20);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 20) = v6 | 5;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  std::condition_variable::notify_all((std::condition_variable *)(a1 + 16));
  return std::mutex::unlock(v2);
}


// ======================================================================
// ADDR: 0x164c70
// SYMBOL: sub_164C70
int sub_164C70()
{
  if ( off_381B3C )
    return off_381B3C();
  else
    return 0;
}


// ======================================================================
