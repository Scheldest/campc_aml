// ADDR: 0xf55cc
// SYMBOL: sub_F55CC
int __fastcall sub_F55CC(int a1)
{
  int v2; // r6
  int v3; // r11
  int v4; // r0
  int v5; // r5
  int v6; // r0
  int v7; // r1
  int v8; // r1
  int v9; // r1
  void *v10; // r0
  void *v11; // r0
  void *v12; // r2
  void *v13; // r0
  void *v14; // r2
  void *v15; // r0
  __int64 v16; // kr00_8
  int v17; // r0
  _BYTE v19[16]; // [sp+0h] [bp-68h] BYREF
  _BYTE *v20; // [sp+10h] [bp-58h]
  _BYTE v21[16]; // [sp+18h] [bp-50h] BYREF
  _BYTE *v22; // [sp+28h] [bp-40h]
  _BYTE v23[16]; // [sp+30h] [bp-38h] BYREF
  _BYTE *v24; // [sp+40h] [bp-28h]

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v2 = a1 + 16;
  *(_DWORD *)(a1 + 16) = 0;
  v3 = dword_23DF24;
  *(_DWORD *)(a1 + 20) = 60;
  sub_F57B0(v19, sub_F5784, 0, a1);
  v4 = sub_F5178((int)v21, (int)v19);
  sub_F5978(v4);
  v5 = dword_2400B0;
  if ( !dword_2400B0 )
  {
    v6 = sub_F5178((int)v23, (int)v21);
    sub_F5978(v6);
    sub_F51A4(dword_2400A0, (int)v23);
    if ( v23 == v24 )
    {
      v7 = 4;
    }
    else
    {
      if ( !v24 )
        goto LABEL_7;
      v7 = 5;
    }
    (*(void (**)(void))(*(_DWORD *)v24 + 4 * v7))();
  }
LABEL_7:
  if ( v21 == v22 )
  {
    v8 = 4;
  }
  else
  {
    if ( !v22 )
      goto LABEL_12;
    v8 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v22 + 4 * v8))();
LABEL_12:
  if ( !v5 )
    sub_164196(v3 + 6752180, sub_F5954, v2);
  if ( v19 == v20 )
  {
    v9 = 4;
  }
  else
  {
    if ( !v20 )
      goto LABEL_19;
    v9 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v20 + 4 * v9))();
LABEL_19:
  if ( v5 )
  {
    _android_log_print(6, "AXL", "%s: Can't hook fps limit - callback already used?", "FPSLimiter");
  }
  else if ( sub_F11C4() >= 30 )
  {
    _android_log_print(3, "AXL", "%s: Use NDK callback to get refresh rate", "FPSLimiter");
    v10 = dlopen("libandroid.so", 0);
    *(_DWORD *)a1 = v10;
    v11 = dlsym(v10, "AChoreographer_getInstance");
    v12 = *(void **)a1;
    *(_DWORD *)(a1 + 4) = v11;
    v13 = dlsym(v12, "AChoreographer_registerRefreshRateCallback");
    v14 = *(void **)a1;
    *(_DWORD *)(a1 + 8) = v13;
    v15 = dlsym(v14, "AChoreographer_unregisterRefreshRateCallback");
    v16 = *(_QWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 12) = v15;
    v17 = ((int (*)(void))v16)();
    ((void (__fastcall *)(int, int (*)(), int))HIDWORD(v16))(v17, sub_F57EC, a1);
  }
  return a1;
}


// ======================================================================
