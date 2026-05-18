// ADDR: 0x15dc6c
// SYMBOL: sub_15DC6C
int __fastcall sub_15DC6C(_QWORD *a1, int a2)
{
  int v4; // r5
  int result; // r0
  int v6; // r0
  int v7; // [sp+0h] [bp-28h] BYREF
  int v8; // [sp+4h] [bp-24h] BYREF
  std::mutex *v9; // [sp+8h] [bp-20h] BYREF
  unsigned __int8 v10; // [sp+Ch] [bp-1Ch]

  v10 = 1;
  v9 = (std::mutex *)(a2 + 12);
  std::mutex::lock((std::mutex *)(a2 + 12));
  std::__assoc_sub_state::__sub_wait(a2, &v9);
  v4 = *(_DWORD *)(a2 + 8);
  v8 = 0;
  std::exception_ptr::~exception_ptr((std::exception_ptr *)&v8);
  if ( v4 )
  {
    v6 = std::exception_ptr::exception_ptr((std::exception_ptr *)&v7, (const std::exception_ptr *)(a2 + 8));
    std::rethrow_exception(v6);
  }
  result = v10;
  *a1 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  if ( result )
    return std::mutex::unlock(v9);
  return result;
}


// ======================================================================
