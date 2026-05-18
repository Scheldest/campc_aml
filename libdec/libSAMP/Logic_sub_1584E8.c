// ADDR: 0x1586b2
// SYMBOL: sub_1586B2
int sub_1586B2(int a1, int a2, const char *a3, ...)
{
  va_list va; // [sp+14h] [bp-4h] BYREF

  va_start(va, a3);
  return _vsprintf_chk(a1, 0, 2047, a3, va);
}


// ======================================================================
// ADDR: 0x1586dc
// SYMBOL: sub_1586DC
int __fastcall sub_1586DC(int a1, int a2)
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
