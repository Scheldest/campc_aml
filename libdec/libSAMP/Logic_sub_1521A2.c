// ADDR: 0x15225a
// SYMBOL: sub_15225A
bool __fastcall sub_15225A(int a1, int a2, __int64 *a3)
{
  __int64 v6; // kr08_8
  __int64 v7; // kr10_8
  int v8; // r12
  int v9; // r1
  int v11; // r2
  __int64 v12; // [sp+0h] [bp-38h] BYREF
  __int64 v13; // [sp+8h] [bp-30h] BYREF
  __int64 v14; // [sp+10h] [bp-28h] BYREF
  _QWORD v15[4]; // [sp+18h] [bp-20h] BYREF

  std::chrono::steady_clock::now((std::chrono::steady_clock *)&v12);
  v6 = *a3;
  if ( v12 >= *a3 )
    return 1;
  std::chrono::steady_clock::now((std::chrono::steady_clock *)&v13);
  v7 = v6 - v13;
  if ( v6 - v13 >= 1 )
  {
    std::chrono::steady_clock::now((std::chrono::steady_clock *)v15);
    std::chrono::system_clock::now((std::chrono::system_clock *)&v14);
    if ( v14 )
    {
      if ( v14 < 1 )
      {
        if ( (unsigned __int64)v14 <= 0xFFDF3B645A1CAC08LL )
        {
          v9 = 0;
          goto LABEL_14;
        }
      }
      else if ( __PAIR64__(&loc_20C49A, -1511828489) < v14 )
      {
        v8 = 0x7FFFFFFF;
        v9 = -1;
        goto LABEL_12;
      }
      v9 = 1000 * v14;
      v8 = (unsigned __int64)(1000 * v14) >> 32;
    }
    else
    {
      v9 = 0;
      v8 = 0;
    }
LABEL_12:
    if ( __SPAIR64__(0x7FFFFFFF - HIDWORD(v7), ~(_DWORD)v7) < __SPAIR64__(v8, v9) )
    {
      v11 = -1;
LABEL_15:
      std::condition_variable::__do_timed_wait(a1, a2, v11);
      std::chrono::steady_clock::now((std::chrono::steady_clock *)&v14);
      goto LABEL_16;
    }
LABEL_14:
    v11 = v9 + v7;
    goto LABEL_15;
  }
LABEL_16:
  std::chrono::steady_clock::now((std::chrono::steady_clock *)v15);
  return v15[0] >= *a3;
}


// ======================================================================
