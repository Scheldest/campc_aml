// ADDR: 0x5f720
// SYMBOL: sub_5F720
int sub_5F720()
{
  return _cxa_finalize(&off_110560);
}


// ======================================================================
// ADDR: 0x5f734
// SYMBOL: sub_5F734
// attributes: thunk
int sub_5F734()
{
  return sub_108FC0();
}


// ======================================================================
// ADDR: 0x5f738
// SYMBOL: sub_5F738
int (*__fastcall sub_5F738(int (*result)(void)))(void)
{
  if ( result )
    return (int (*)(void))result();
  return result;
}


// ======================================================================
// ADDR: 0x5f744
// SYMBOL: sub_5F744
int __fastcall sub_5F744(void *a1)
{
  return _cxa_atexit((void (*)(void *))sub_5F738, a1, &off_110560);
}


// ======================================================================
// ADDR: 0x5f7e0
// SYMBOL: sub_5F7E0
int __fastcall sub_5F7E0(int a1, __int64 *a2)
{
  int v3; // r4
  unsigned int v4; // r0
  __int64 v5; // kr00_8
  int v7; // [sp+8h] [bp-10h] BYREF

  v3 = 0;
  sub_109C50(a1, 0, 15, 0, &v7);
  v4 = v7 & 0xFFFFFFFE;
  if ( (v7 & 0xFFFFFFFE) != 0 )
  {
    v5 = *a2;
    if ( (_DWORD)v5 == HIDWORD(v5) )
    {
      return 5;
    }
    else
    {
      v3 = 0;
      *(_DWORD *)a2 = v5 + 4;
      *(_DWORD *)v5 = v4;
    }
  }
  return v3;
}


// ======================================================================
// ADDR: 0x5fc58
// SYMBOL: sub_5FC58
unsigned __int8 *__fastcall sub_5FC58(unsigned __int8 *a1)
{
  if ( a1[132] << 31 )
    operator delete(*((void **)a1 + 35));
  if ( a1[120] << 31 )
    operator delete(*((void **)a1 + 32));
  if ( a1[108] << 31 )
    operator delete(*((void **)a1 + 29));
  if ( a1[96] << 31 )
    operator delete(*((void **)a1 + 26));
  if ( a1[84] << 31 )
    operator delete(*((void **)a1 + 23));
  if ( a1[72] << 31 )
    operator delete(*((void **)a1 + 20));
  if ( a1[60] << 31 )
    operator delete(*((void **)a1 + 17));
  if ( a1[48] << 31 )
    operator delete(*((void **)a1 + 14));
  if ( a1[36] << 31 )
    operator delete(*((void **)a1 + 11));
  if ( a1[24] << 31 )
    operator delete(*((void **)a1 + 8));
  if ( a1[12] << 31 )
    operator delete(*((void **)a1 + 5));
  if ( *a1 << 31 )
    operator delete(*((void **)a1 + 2));
  return a1;
}


// ======================================================================
// ADDR: 0x60018
// SYMBOL: sub_60018
void __noreturn sub_60018()
{
  byte_1174AE = 1;
  if ( dword_117394 )
  {
    off_1ABEE8();
    dword_117394 = 0;
  }
  dword_117394 = off_1ABEEC(&byte_117398, 0, 9699328, 0);
  off_1ABEF4();
  while ( !byte_1174AD )
    usleep(0x7D0u);
  ((void (__fastcall *)(int))off_1ABEE8)(dword_117394);
  dword_117394 = 0;
  byte_1174AE = 0;
  pthread_exit(0);
}


// ======================================================================
// ADDR: 0x603b4
// SYMBOL: sub_603B4
int sub_603B4()
{
  int v0; // r0
  _DWORD *v1; // r4
  int v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // s16
  int *v6; // r0
  int v7; // s18
  float *v8; // r0
  int result; // r0
  _DWORD *v10; // r1

  v0 = sub_6C844();
  v1 = *(_DWORD **)(v0 + 8);
  if ( !v1 )
  {
    v2 = v0;
    v1 = (_DWORD *)operator new(0x2F0u);
    v3 = dword_1A4408;
    *v1 = &off_11056C;
    ((void (__fastcall *)(_DWORD *))((char *)&loc_103B86 + v3 + 3))(v1);
    *(_DWORD *)(v2 + 8) = v1;
  }
  v4 = ((int (__fastcall *)(_DWORD *))((char *)&loc_103B86 + dword_1A4408 + 2755))(v1);
  v5 = *(_DWORD *)dword_1174B4;
  if ( v4 == 33 )
  {
    v6 = (int *)dword_1174B8;
    *(_DWORD *)dword_1174B4 = 1057258410;
    v7 = *v6;
    *v6 = 1055037242;
  }
  else
  {
    v8 = (float *)dword_1174BC;
    *(float *)dword_1174B4 = (float)((float)(*(float *)dword_1174BC + -1.3333) * -0.01115) + 0.53;
    v7 = *(_DWORD *)dword_1174B8;
    *(float *)dword_1174B8 = (float)((float)(*v8 + -1.3333) * 0.038) + 0.4;
  }
  off_1174C4();
  result = dword_1174B4;
  v10 = (_DWORD *)dword_1174B8;
  *(_DWORD *)dword_1174B4 = v5;
  *v10 = v7;
  return result;
}


// ======================================================================
// ADDR: 0x604c8
// SYMBOL: sub_604C8
int sub_604C8()
{
  void (*v0)(void); // r2
  int v1; // r6
  int result; // r0

  v0 = (void (*)(void))off_1174C8;
  v1 = *(_DWORD *)dword_1174B0;
  *(_DWORD *)dword_1174B0 = 1070945621;
  v0();
  result = dword_1174B0;
  *(_DWORD *)dword_1174B0 = v1;
  return result;
}


// ======================================================================
// ADDR: 0x604fc
// SYMBOL: sub_604FC
float __fastcall sub_604FC(int a1)
{
  return off_1174CC(a1) * *(float *)dword_1174B0;
}


// ======================================================================
// ADDR: 0x60534
// SYMBOL: sub_60534
int sub_60534()
{
  float v0; // s16
  int result; // r0

  v0 = *(float *)dword_1174C0;
  off_1174D0();
  result = dword_1174C0;
  if ( v0 != *(float *)dword_1174C0 )
    *(float *)dword_1174C0 = v0 + (float)((float)(*(float *)dword_1174B0 / 1.6667) * 5.0);
  return result;
}


// ======================================================================
// ADDR: 0x60594
// SYMBOL: sub_60594
int __fastcall sub_60594(int result)
{
  int v1; // r6
  int v2; // r5
  int v3; // r8
  void (__fastcall *v4)(int, int); // r6
  int v5; // r0
  int v6; // r0
  int v7; // r5
  void (__fastcall *v8)(int, int); // r4
  int v9; // r0
  int v10; // r5
  void (__fastcall *v11)(int, int); // r4
  int v12; // r0

  if ( result )
  {
    v1 = result;
    off_1174EC(result);
    v2 = off_117554(1);
    if ( v2 )
    {
      *(_BYTE *)(v2 + 2) = 0;
      ((void (__fastcall *)(int, void *))dword_117558)(v2, &unk_508E8);
      ((void (__fastcall *)(int, int))dword_11755C)(v2, 0x40000000);
      v3 = v1;
      v4 = (void (__fastcall *)(int, int))off_11761C;
      v5 = off_117544();
      v4(v2, v5);
      v1 = v3;
      ((void (__fastcall *)(int, int))dword_1175F4)(v3, v2);
      dword_1174E0 = v2;
    }
    v6 = off_117554(1);
    if ( v6 )
    {
      v7 = v6;
      *(_BYTE *)(v6 + 2) = 0;
      ((void (__fastcall *)(int, void *))dword_117558)(v6, &unk_508E8);
      ((void (__fastcall *)(int, int))dword_11755C)(v7, 0x40000000);
      v8 = (void (__fastcall *)(int, int))off_11761C;
      v9 = off_117544();
      v8(v7, v9);
      ((void (__fastcall *)(int, int))dword_1175F4)(v1, v7);
      dword_1174E4 = v7;
    }
    result = off_117554(1);
    if ( result )
    {
      v10 = result;
      *(_BYTE *)(result + 2) = 0;
      ((void (__fastcall *)(int, void *))dword_117558)(result, &unk_508E8);
      ((void (__fastcall *)(int, int))dword_11755C)(v10, 0x40000000);
      v11 = (void (__fastcall *)(int, int))off_11761C;
      v12 = off_117544();
      v11(v10, v12);
      result = ((int (__fastcall *)(int, int))dword_1175F4)(v1, v10);
      dword_1174E8 = v10;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x6071c
// SYMBOL: sub_6071C
_UNKNOWN ***__fastcall sub_6071C(_UNKNOWN ***result)
{
  _UNKNOWN ***v1; // r4
  int v2; // r5
  int v3; // r5
  int v4; // r5

  if ( result )
  {
    v1 = result;
    off_1174F0(result);
    v2 = dword_1174E0;
    result = off_114ACC;
    if ( dword_1174E0 )
    {
      off_1175F8(v1, dword_1174E0);
      off_117560(*(_DWORD *)(v2 + 4));
      off_117564(v2);
      dword_1174E0 = 0;
      result = off_114ACC;
    }
    v3 = dword_1174E4;
    if ( dword_1174E4 )
    {
      off_1175F8(v1, dword_1174E4);
      off_117560(*(_DWORD *)(v3 + 4));
      off_117564(v3);
      dword_1174E4 = 0;
      result = off_114ACC;
    }
    v4 = dword_1174E8;
    if ( dword_1174E8 )
    {
      off_1175F8(v1, dword_1174E8);
      off_117560(*(_DWORD *)(v4 + 4));
      off_117564(v4);
      result = 0;
      dword_1174E8 = 0;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x607e0
// SYMBOL: sub_607E0
int sub_607E0()
{
  int result; // r0

  off_1174F4();
  if ( dword_1174E0 )
    *(_BYTE *)(dword_1174E0 + 2) = 0;
  if ( dword_1174E4 )
    *(_BYTE *)(dword_1174E4 + 2) = 0;
  result = dword_1174E8;
  if ( dword_1174E8 )
    *(_BYTE *)(dword_1174E8 + 2) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x60be6
// SYMBOL: sub_60BE6
int __fastcall sub_60BE6(int result)
{
  *(_QWORD *)result = 0LL;
  *(_QWORD *)(result + 8) = 0LL;
  *(_DWORD *)(result + 16) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x61424
// SYMBOL: sub_61424
int __fastcall sub_61424(int a1, int a2)
{
  bool v2; // zf
  int v4; // r3
  bool v5; // zf

  if ( a1 )
  {
    v2 = dword_1A4434 == 0;
    if ( dword_1A4434 )
      v2 = a2 == 0;
    if ( v2 || !byte_117634 || (unsigned int)*(unsigned __int16 *)(a2 + 38) - 612 < 0xFFFFFF2C )
      return off_117638();
    v4 = *(_DWORD *)(a1 + 1124);
    v5 = v4 == 0;
    if ( v4 )
      v5 = *(_DWORD *)(a2 + 1124) == 0;
    if ( v5 )
      return off_117638();
  }
  else
  {
    _android_log_print(
      6,
      "SAMP_ORIG",
      "Invalid _this pointer in CAutoMobile_ProcessEntityCollision_hook. Skipping hook.");
  }
  return 0;
}


// ======================================================================
// ADDR: 0x61494
// SYMBOL: sub_61494
int __fastcall sub_61494(int a1, int a2)
{
  bool v2; // zf
  int v4; // r3
  bool v5; // zf

  if ( a1 )
  {
    v2 = dword_1A4434 == 0;
    if ( dword_1A4434 )
      v2 = a2 == 0;
    if ( v2 || !byte_117634 || (unsigned int)*(unsigned __int16 *)(a2 + 38) - 612 < 0xFFFFFF2C )
      return off_11763C();
    v4 = *(_DWORD *)(a1 + 1124);
    v5 = v4 == 0;
    if ( v4 )
      v5 = *(_DWORD *)(a2 + 1124) == 0;
    if ( v5 )
      return off_11763C();
  }
  else
  {
    _android_log_print(6, "SAMP_ORIG", "Invalid _this pointer in CBike_ProcessEntityCollision_hook. Skipping hook.");
  }
  return 0;
}


// ======================================================================
// ADDR: 0x61504
// SYMBOL: sub_61504
int __fastcall sub_61504(int a1, int a2)
{
  bool v2; // zf
  int v4; // r3
  bool v5; // zf

  if ( a1 )
  {
    v2 = dword_1A4434 == 0;
    if ( dword_1A4434 )
      v2 = a2 == 0;
    if ( v2 || !byte_117634 || (unsigned int)*(unsigned __int16 *)(a2 + 38) - 612 < 0xFFFFFF2C )
      return off_117640();
    v4 = *(_DWORD *)(a1 + 1124);
    v5 = v4 == 0;
    if ( v4 )
      v5 = *(_DWORD *)(a2 + 1124) == 0;
    if ( v5 )
      return off_117640();
  }
  else
  {
    _android_log_print(
      6,
      "SAMP_ORIG",
      "Invalid _this pointer in CMonsterTruck_ProcessEntityCollision_hook. Skipping hook.");
  }
  return 0;
}


// ======================================================================
// ADDR: 0x61574
// SYMBOL: sub_61574
int __fastcall sub_61574(int a1, int a2)
{
  bool v2; // zf
  int v4; // r3
  bool v5; // zf

  if ( a1 )
  {
    v2 = dword_1A4434 == 0;
    if ( dword_1A4434 )
      v2 = a2 == 0;
    if ( v2 || !byte_117634 || (unsigned int)*(unsigned __int16 *)(a2 + 38) - 612 < 0xFFFFFF2C )
      return off_117644();
    v4 = *(_DWORD *)(a1 + 1124);
    v5 = v4 == 0;
    if ( v4 )
      v5 = *(_DWORD *)(a2 + 1124) == 0;
    if ( v5 )
      return off_117644();
  }
  else
  {
    _android_log_print(6, "SAMP_ORIG", "Invalid _this pointer in CTrailer_ProcessEntityCollision_hook. Skipping hook.");
  }
  return 0;
}


// ======================================================================
// ADDR: 0x615e4
// SYMBOL: sub_615E4
int __fastcall sub_615E4(int a1, int a2, int a3, int a4)
{
  int v4; // s0

  if ( (unsigned int)(dword_1A4488 - 1) > 6 )
    v4 = a4;
  else
    v4 = dword_5094C[dword_1A4488 - 1];
  return off_117648(a1, a2, a3, v4);
}


// ======================================================================
// ADDR: 0x6162c
// SYMBOL: sub_6162C
int __fastcall sub_6162C(int a1)
{
  off_11764C(a1);
  *(_DWORD *)(a1 + 132) = dword_1A44F8;
  return 0;
}


// ======================================================================
// ADDR: 0x61654
// SYMBOL: sub_61654
int sub_61654()
{
  int v0; // r0

  v0 = off_117650();
  if ( dword_1A442C )
  {
    if ( v0 && !byte_117654 )
      byte_1A44F4 ^= 1u;
    byte_117654 = v0 != 0;
  }
  return 0;
}


// ======================================================================
// ADDR: 0x616a0
// SYMBOL: sub_616A0
int __fastcall sub_616A0(int a1, int a2, int a3, int a4, double a5)
{
  return off_117658(a1, a2, a3 | 0x340, a4);
}


// ======================================================================
// ADDR: 0x61de8
// SYMBOL: sub_61DE8
int __fastcall sub_61DE8(int result)
{
  *(_QWORD *)result = 0LL;
  *(_QWORD *)(result + 8) = 0LL;
  *(_DWORD *)(result + 18) = 0;
  *(_DWORD *)(result + 14) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x61e60
// SYMBOL: sub_61E60
int sub_61E60()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r4
  int v4; // r1
  int v5; // r4
  int v6; // r4
  int v7; // r1
  int v8; // r0
  int v9; // r4
  int v10; // r1
  int result; // r0
  float v12; // s0

  v0 = (unsigned __int8)byte_1A3AC8;
  __dmb(0xBu);
  if ( !(v0 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3AC8) )
  {
    byte_1A3AC6 = 90;
    word_1A3AC4 = 29554;
    *(_QWORD *)byte_1A3AB0 = 0x2E2E3F093E3B3F08LL;
    *(_QWORD *)&byte_1A3AB0[8] = 0x53F36331C3D3433LL;
    dword_1A3AC0 = 825570610;
    _cxa_atexit((void (*)(void *))sub_66C4C, byte_1A3AB0, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A3AC8);
  }
  sub_677BC(byte_1A3AB0);
  _android_log_print(4, "SAMP_ORIG", byte_1A3AB0);
  v1 = off_1A39F0();
  sub_6CA28(v1);
  if ( byte_1A4484 )
  {
    v2 = sub_80788();
    sub_808AC(v2);
  }
  v3 = dword_1A4408 + 2350148;
  if ( sub_AF9C0(dword_1A4408 + 2350148, 4096, 7) )
    sub_AF9C0(v3, 4096, 3);
  else
    _android_log_print(4, "Memory", "protectAddr (_PROT_RWX_) failed: 0x%X -> using _PROT_RW_", v3);
  v4 = dword_1A4408;
  *(_BYTE *)(dword_1A4408 + 2350148) = byte_1A4482;
  v5 = v4 + 2323736;
  if ( sub_AF9C0(v4 + 2323736, 4096, 7) )
    sub_AF9C0(v5, 4096, 3);
  else
    _android_log_print(4, "Memory", "protectAddr (_PROT_RWX_) failed: 0x%X -> using _PROT_RW_", v5);
  *(_DWORD *)(dword_1A4408 + 2323736) = dword_116D08;
  v6 = dword_1A4408 + 2330376;
  if ( sub_AF9C0(dword_1A4408 + 2330376, 4096, 7) )
    sub_AF9C0(v6, 4096, 3);
  else
    _android_log_print(4, "Memory", "protectAddr (_PROT_RWX_) failed: 0x%X -> using _PROT_RW_", v6);
  v7 = dword_1A4408;
  v8 = unk_116D14;
  *(_DWORD *)(dword_1A4408 + 2330376) = dword_116D10;
  *(_DWORD *)(v7 + 2330380) = v8;
  v9 = dword_1A4408 + 2330392;
  if ( sub_AF9C0(dword_1A4408 + 2330392, 4096, 7) )
    sub_AF9C0(v9, 4096, 3);
  else
    _android_log_print(4, "Memory", "protectAddr (_PROT_RWX_) failed: 0x%X -> using _PROT_RW_", v9);
  v10 = dword_1A4408 + 2330376;
  result = dword_116D18;
  v12 = flt_116D1C / 13.0;
  *(_DWORD *)(dword_1A4408 + 2330392) = dword_116D18;
  *(float *)(v10 + 20) = v12;
  return result;
}


// ======================================================================
// ADDR: 0x6209c
// SYMBOL: sub_6209C
int sub_6209C()
{
  int v0; // r0
  int v1; // r0

  v0 = (unsigned __int8)byte_1A3ADC;
  __dmb(0xBu);
  if ( !(v0 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3ADC) )
  {
    byte_1A3ADA = 90;
    word_1A3AD8 = 29554;
    dword_1A3AD4 = 825570610;
    dword_1A3AD0 = 87240477;
    dword_1A3ACC = 775107603;
    _cxa_atexit((void (*)(void *))sub_66C62, &dword_1A3ACC, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A3ADC);
  }
  if ( byte_1A3ADA )
  {
    LOBYTE(dword_1A3ACC) = dword_1A3ACC ^ 0x5A;
    BYTE1(dword_1A3ACC) ^= 0x5Au;
    BYTE2(dword_1A3ACC) ^= 0x5Au;
    HIBYTE(dword_1A3ACC) ^= 0x5Au;
    LOBYTE(dword_1A3AD0) = dword_1A3AD0 ^ 0x5A;
    BYTE1(dword_1A3AD0) ^= 0x5Au;
    BYTE2(dword_1A3AD0) ^= 0x5Au;
    HIBYTE(dword_1A3AD0) ^= 0x5Au;
    LOBYTE(dword_1A3AD4) = dword_1A3AD4 ^ 0x5A;
    BYTE1(dword_1A3AD4) ^= 0x5Au;
    byte_1A3ADA ^= 0x5Au;
    BYTE2(dword_1A3AD4) ^= 0x5Au;
    HIBYTE(dword_1A3AD4) ^= 0x5Au;
    LOBYTE(word_1A3AD8) = word_1A3AD8 ^ 0x5A;
    HIBYTE(word_1A3AD8) ^= 0x5Au;
  }
  _android_log_print(4, "SAMP_ORIG", (const char *)&dword_1A3ACC);
  v1 = off_1A39F4();
  return sub_6C11C(v1);
}


// ======================================================================
// ADDR: 0x621c8
// SYMBOL: sub_621C8
int sub_621C8()
{
  int v0; // r0

  v0 = off_1A39FC();
  return sub_6C2C0(v0);
}


// ======================================================================
// ADDR: 0x621e0
// SYMBOL: sub_621E0
int __fastcall sub_621E0(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  float v9; // s0
  int v10; // r6
  int v11; // r1
  _BOOL4 v12; // r3
  int v14; // s2
  void (**v15)(void); // r1
  int v16; // [sp+Ch] [bp-1Ch]

  v8 = sub_8C514();
  if ( !byte_1A3A01 )
    return v16;
  v9 = (float)a3;
  v10 = (int)*(float *)(v8 + 12);
  v11 = 0;
  if ( (float)((int)*(float *)(v8 + 8) - 100) > (float)a3 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 0;
    if ( (float)(int)*(float *)(v8 + 8) >= v9 )
    {
      v12 = 0;
      if ( (float)(v10 - 50) <= (float)a4 )
        v12 = (float)(int)*(float *)(v8 + 12) >= (float)a4;
    }
  }
  if ( v10 - 220 >= a4 )
    v11 = 1;
  if ( (v11 | (byte_1A39F8 == 0) | v12) != 1 || byte_1A39F9 )
    return v16;
  if ( *(_BYTE *)(dword_1A4404 + 9876756) )
    return off_1A3A34(a1, a2, a3, a4);
  if ( a1 == 1 )
  {
    *(_BYTE *)(v8 + 224) = 0;
    byte_1A3A00 = 1;
  }
  else
  {
    if ( a1 == 3 )
    {
      v14 = a4;
    }
    else
    {
      if ( a1 != 2 )
        goto LABEL_20;
      v14 = a4;
      *(_BYTE *)(v8 + 224) = 1;
    }
    *(float *)(v8 + 216) = v9;
    *(float *)(v8 + 220) = (float)v14;
  }
LABEL_20:
  if ( dword_1A442C )
  {
    switch ( a1 )
    {
      case 1:
        v15 = *(void (***)(void))dword_1A442C;
        goto LABEL_27;
      case 3:
        v15 = *(void (***)(void))dword_1A442C;
        goto LABEL_27;
      case 2:
        v15 = *(void (***)(void))dword_1A442C;
LABEL_27:
        (*v15)();
        break;
    }
  }
  off_1A3A34(a1, a2, a3, a4);
  return v16;
}


// ======================================================================
// ADDR: 0x623d4
// SYMBOL: sub_623D4
int __fastcall sub_623D4(int a1, unsigned __int8 *a2, int a3, float *a4)
{
  int v7; // r0
  double v8; // d16
  _BYTE *v9; // r1
  int v10; // r2
  int v11; // r0
  double v12; // d16
  _BYTE *v13; // r1
  int v14; // r2
  int v15; // r0
  double v16; // d16
  int v17; // r0
  double v18; // d16
  int v19; // r0
  double v20; // d16
  unsigned int v21; // r0
  unsigned __int8 *v22; // r1
  unsigned int v23; // r2
  int v24; // r0
  double v25; // d16
  char *v26; // r0
  unsigned __int8 v28; // [sp+4h] [bp-84h] BYREF
  _BYTE v29[7]; // [sp+5h] [bp-83h] BYREF
  void *v30; // [sp+Ch] [bp-7Ch]
  unsigned __int8 v31; // [sp+10h] [bp-78h] BYREF
  _BYTE v32[7]; // [sp+11h] [bp-77h] BYREF
  void *v33; // [sp+18h] [bp-70h]
  _BYTE v34[8]; // [sp+1Ch] [bp-6Ch] BYREF
  void *v35; // [sp+24h] [bp-64h]
  double v36; // [sp+28h] [bp-60h] BYREF
  void *v37; // [sp+30h] [bp-58h]
  double v38; // [sp+38h] [bp-50h] BYREF
  void *v39; // [sp+40h] [bp-48h]
  double v40; // [sp+48h] [bp-40h] BYREF
  void *v41; // [sp+50h] [bp-38h]
  double v42; // [sp+58h] [bp-30h] BYREF
  void *v43; // [sp+60h] [bp-28h]
  int v44; // [sp+64h] [bp-24h]

  sub_68500(v34, (int)(float)(*a4 * 255.0));
  v7 = std::string::insert((int)v34, 0, "{");
  v8 = *(double *)v7;
  v37 = *(void **)(v7 + 8);
  v36 = v8;
  *(_DWORD *)v7 = 0;
  *(_DWORD *)(v7 + 4) = 0;
  *(_DWORD *)(v7 + 8) = 0;
  sub_68500(&v31, (int)(float)(a4[1] * 255.0));
  v10 = *(_DWORD *)&v32[3];
  v9 = v33;
  if ( (v31 & 1) == 0 )
  {
    v9 = v32;
    v10 = v31 >> 1;
  }
  v11 = std::string::append(&v36, v9, v10, v31 & 1);
  v12 = *(double *)v11;
  v39 = *(void **)(v11 + 8);
  v38 = v12;
  *(_DWORD *)v11 = 0;
  *(_DWORD *)(v11 + 4) = 0;
  *(_DWORD *)(v11 + 8) = 0;
  sub_68500(&v28, (int)(float)(a4[2] * 255.0));
  v14 = *(_DWORD *)&v29[3];
  v13 = v30;
  if ( (v28 & 1) == 0 )
  {
    v13 = v29;
    v14 = v28 >> 1;
  }
  v15 = std::string::append(&v38, v13, v14, v28 & 1);
  v16 = *(double *)v15;
  v41 = *(void **)(v15 + 8);
  v40 = v16;
  *(_DWORD *)v15 = 0;
  *(_DWORD *)(v15 + 4) = 0;
  *(_DWORD *)(v15 + 8) = 0;
  v17 = std::string::append((int)&v40, "}");
  v18 = *(double *)v17;
  v43 = *(void **)(v17 + 8);
  v42 = v18;
  *(_DWORD *)v17 = 0;
  *(_DWORD *)(v17 + 4) = 0;
  *(_DWORD *)(v17 + 8) = 0;
  if ( LOBYTE(v40) << 31 )
    operator delete(v41);
  if ( v28 << 31 )
    operator delete(v30);
  if ( LOBYTE(v38) << 31 )
    operator delete(v39);
  if ( v31 << 31 )
    operator delete(v33);
  if ( LOBYTE(v36) << 31 )
    operator delete(v37);
  if ( v34[0] << 31 )
    operator delete(v35);
  sub_62698(&v36, &v42, a3);
  v19 = std::string::append((int)&v36, "{FFFFFF}");
  v20 = *(double *)v19;
  v39 = *(void **)(v19 + 8);
  v38 = v20;
  *(_DWORD *)v19 = 0;
  *(_DWORD *)(v19 + 4) = 0;
  *(_DWORD *)(v19 + 8) = 0;
  v21 = *a2;
  v22 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
  v23 = *((_DWORD *)a2 + 1);
  if ( (v21 & 1) == 0 )
  {
    v22 = a2 + 1;
    v23 = v21 >> 1;
  }
  v24 = std::string::append(&v38, v22, v23, v21 & 1);
  v25 = *(double *)v24;
  v41 = *(void **)(v24 + 8);
  v40 = v25;
  *(_DWORD *)v24 = 0;
  *(_DWORD *)(v24 + 4) = 0;
  *(_DWORD *)(v24 + 8) = 0;
  v26 = (char *)v41;
  if ( !(LOBYTE(v40) << 31) )
    v26 = (char *)&v40 + 1;
  sub_6C73C(v26, LOBYTE(v40) << 31);
  if ( LOBYTE(v40) << 31 )
    operator delete(v41);
  if ( LOBYTE(v38) << 31 )
    operator delete(v39);
  if ( LOBYTE(v36) << 31 )
    operator delete(v37);
  if ( LOBYTE(v42) << 31 )
    operator delete(v43);
  return v44;
}


// ======================================================================
// ADDR: 0x62758
// SYMBOL: sub_62758
int __fastcall sub_62758(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r4
  int v8; // r5
  int v9; // r0
  int (__fastcall *v10)(int, int, int); // r3

  if ( !sub_6C844() )
    goto LABEL_9;
  v6 = sub_6C844();
  v7 = *(_DWORD *)(v6 + 8);
  if ( !v7 )
  {
    v8 = v6;
    v7 = operator new(0x2F0u);
    *(_DWORD *)v7 = &off_11056C;
    ((void (__fastcall *)(int))(dword_1A4408 + 1063817))(v7);
    *(_DWORD *)(v8 + 8) = v7;
  }
  if ( *(_DWORD *)(v7 + 92)
    && sub_685E0(*(_DWORD *)(v7 + 8))
    && (v9 = sub_682E8(&unk_50980, *(unsigned __int8 *)(v7 + 96)), (a1 & 0xFFFFFFFE) == 2)
    && v9 )
  {
    v10 = (int (__fastcall *)(int, int, int))(dword_1A4404 + 2821309);
  }
  else
  {
LABEL_9:
    v10 = (int (__fastcall *)(int, int, int))dword_1A3A3C;
  }
  return v10(a1, a2, a3);
}


// ======================================================================
// ADDR: 0x6280c
// SYMBOL: sub_6280C
int __fastcall sub_6280C(int a1, int a2, int a3, int a4, int a5, float a6, int a7, int a8)
{
  int result; // r0

  result = off_1A3A40(a1, a2, a3, a4, a5, LODWORD(a6), a7, a8);
  *(float *)(a1 + 80) = a6;
  return result;
}


// ======================================================================
// ADDR: 0x628d0
// SYMBOL: sub_628D0
int sub_628D0()
{
  int v0; // r10
  int result; // r0
  _DWORD *v2; // r11
  _DWORD *v3; // r9
  int v4; // r5
  _DWORD *v5; // r4
  int64x2_t v6; // q5
  int v7; // r6
  float *v8; // r5
  bool v10; // zf
  float v11; // s28
  int v12; // r0
  int v13; // r1
  float *v14; // r0
  float *v15; // r1
  int v16; // r1
  int v17; // r3
  int v18; // r0
  int v19; // s0
  int v20; // r0
  int v21; // s2
  int v22; // s4
  _DWORD *v23; // r0
  bool v24; // zf
  _DWORD *v25; // [sp+2Ch] [bp-64h]

  off_1A3A44();
  result = dword_1A4434;
  if ( dword_1A4434 && *(_DWORD *)(dword_1A4434 + 536) == 5 )
  {
    v2 = *(_DWORD **)(*(_DWORD *)(dword_1A4434 + 944) + 4);
    result = sub_6C844();
    v3 = *(_DWORD **)(result + 8);
    if ( !v3 )
    {
      v4 = result;
      v3 = (_DWORD *)operator new(0x2F0u);
      *v3 = &off_11056C;
      result = ((int (__fastcall *)(_DWORD *))(dword_1A4408 + 1063817))(v3);
      *(_DWORD *)(v4 + 8) = v3;
    }
    if ( v2 )
    {
      v5 = v2 + 10000;
      v6.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
      v6.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
      v7 = -2000;
      v8 = (float *)(v2 + 4000);
      v25 = v2 + 10000;
      while ( 1 )
      {
        result = *((unsigned __int8 *)v5 + v7 + 2000);
        v10 = result == 0;
        if ( *((_BYTE *)v5 + v7 + 2000) )
        {
          v0 = *v2;
          v10 = *v2 == 0;
        }
        if ( v10 )
          goto LABEL_8;
        v11 = 0.0;
        v12 = v3[23];
        if ( v12 )
        {
          v11 = 0.0;
          v13 = *(_DWORD *)(v0 + 12);
          if ( v13 )
          {
            v14 = *(float **)(v12 + 20);
            v15 = *(float **)(v13 + 20);
            v11 = sqrt(
                    (float)(v15[13] - v14[13]) * (float)(v15[13] - v14[13])
                  + (float)(v15[12] - v14[12]) * (float)(v15[12] - v14[12])
                  + (float)(v15[14] - v14[14]) * (float)(v15[14] - v14[14]));
            if ( v11 >= 150.0 )
            {
              result = *(_DWORD *)(v0 + 4);
              if ( result )
              {
                v24 = *(_DWORD *)result == dword_1A4404 + 6716708;
                if ( *(_DWORD *)result != dword_1A4404 + 6716708 )
                  v24 = *(_DWORD *)(result + 184) == 0;
                if ( !v24 )
                  result = ((int (*)(void))(dword_1A4404 + 4338365))();
              }
              goto LABEL_8;
            }
          }
        }
        result = *(_DWORD *)(v0 + 4);
        if ( !result )
          goto LABEL_17;
        v16 = dword_1A4404;
        if ( *(_DWORD *)result == dword_1A4404 + 6716708 )
          goto LABEL_17;
        if ( !*(_DWORD *)(result + 184) )
          break;
LABEL_8:
        v8 += 3;
        ++v2;
        if ( __CFADD__(v7++, 1) )
          return result;
      }
      *(_QWORD *)(result + 72) = 0LL;
      *(_QWORD *)(result + 80) = 0LL;
      *(_DWORD *)(result + 88) = 0;
      *(_DWORD *)(result + 92) = 0;
      ((void (*)(void))(v16 + 4338633))();
      v19 = 0;
      v20 = *(_DWORD *)(v0 + 4);
      v21 = 0;
      v22 = 0;
      if ( v20 )
      {
        v23 = *(_DWORD **)(v20 + 20);
        v19 = 0;
        v21 = 0;
        v22 = 0;
        if ( v23 )
        {
          v22 = v23[14];
          v21 = v23[13];
          v19 = v23[12];
        }
      }
      sub_66064(v0, v19, v21, v22);
LABEL_17:
      sub_682E8(&unk_50994, *(_DWORD *)(v0 + 8));
      v18 = LOBYTE(dword_1A3B28[0]);
      __dmb(0xBu);
      if ( !(v18 << 31) && j___cxa_guard_acquire(dword_1A3B28) )
      {
        j_memcpy(&xmmword_1A3AE0, &unk_509A8, 0x45u);
        _cxa_atexit((void (*)(void *))sub_66C72, &xmmword_1A3AE0, &off_110560);
        j___cxa_guard_release(dword_1A3B28);
      }
      if ( byte_1A3B24 )
      {
        xmmword_1A3AE0 = (__int128)veorq_s64((int64x2_t)xmmword_1A3AE0, v6);
        xmmword_1A3AF0 = (__int128)veorq_s64((int64x2_t)xmmword_1A3AF0, v6);
        xmmword_1A3B00 = (__int128)veorq_s64((int64x2_t)xmmword_1A3B00, v6);
        byte_1A3B24 ^= 0x5Au;
        xmmword_1A3B10 = (__int128)veorq_s64((int64x2_t)xmmword_1A3B10, v6);
        byte_1A3B23 ^= 0x5Au;
        byte_1A3B22 ^= 0x5Au;
        v17 = (unsigned __int8)byte_1A3B20;
        byte_1A3B21 ^= 0x5Au;
        byte_1A3B20 ^= 0x5Au;
      }
      result = _android_log_print(
                 4,
                 "SAMP_ORIG",
                 (const char *)&xmmword_1A3AE0,
                 v17,
                 v11,
                 *v8,
                 v8[1],
                 v8[2],
                 *(float *)(v0 + 80));
      v5 = v25;
      goto LABEL_8;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x63278
// SYMBOL: sub_63278
int __fastcall sub_63278(int a1)
{
  int result; // r0
  int v3; // r5
  unsigned __int8 *v4; // r1
  int v5; // r0

  result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 528) + 36))(*(_DWORD *)(a1 + 528));
  if ( result )
  {
    v3 = result;
    do
    {
      v4 = *(unsigned __int8 **)(v3 + 20);
      v5 = *v4;
      if ( v5 == 40 )
        v5 = v4[5];
      switch ( v5 )
      {
        case 12:
          ((void (__fastcall *)(int, int))((char *)&unk_1420BD + dword_1A4408))(a1, v3);
          break;
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 30:
          break;
        case 29:
          ((void (__fastcall *)(int))((char *)&unk_1420BD + dword_1A4408 + 220))(a1);
          break;
        case 31:
          ((void (__fastcall *)(int))((char *)&unk_1420BD + dword_1A4408 + 280))(a1);
          break;
        case 32:
          ((void (__fastcall *)(int))((char *)&unk_1420BD + dword_1A4408 + 340))(a1);
          break;
        case 33:
          ((void (__fastcall *)(int))((char *)&unk_1420BD + dword_1A4408 + 480))(a1);
          break;
        case 34:
          sub_62C74(a1, v3);
          break;
        case 35:
          ((void (*)(void))((char *)&unk_142781 + dword_1A4408))();
          break;
        case 36:
          ((void (__fastcall *)(int))((char *)&unk_142781 + dword_1A4408 + 52))(a1);
          break;
        case 37:
          ((void (__fastcall *)(int))((char *)&unk_142781 + dword_1A4408 + 128))(a1);
          break;
        default:
          switch ( v5 )
          {
            case 200:
              ((void (__fastcall *)(int, int))((char *)&unk_142781 + dword_1A4408 + 284))(a1, v3);
              break;
            case 203:
              ((void (__fastcall *)(int, int))((char *)&unk_142781 + dword_1A4408 + 932))(a1, v3);
              break;
            case 206:
              ((void (__fastcall *)(int, int))((char *)&unk_142BA5 + dword_1A4408))(a1, v3);
              break;
            case 207:
              ((void (__fastcall *)(int, int))((char *)&unk_142BA5 + dword_1A4408 + 138))(a1, v3);
              break;
            case 208:
              ((void (__fastcall *)(int, int))((char *)&unk_142E8B + dword_1A4408))(a1, v3);
              break;
            case 210:
              ((void (__fastcall *)(int, int))((char *)&unk_142E8B + dword_1A4408 + 414))(a1, v3);
              break;
            case 211:
              ((void (__fastcall *)(int, int))((char *)&unk_1430C9 + dword_1A4408))(a1, v3);
              break;
            case 222:
              sub_7F0CC(v3);
              break;
            default:
              goto LABEL_3;
          }
          break;
      }
LABEL_3:
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 528) + 40))(*(_DWORD *)(a1 + 528), v3);
      result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 528) + 36))(*(_DWORD *)(a1 + 528));
      v3 = result;
    }
    while ( result );
  }
  return result;
}


// ======================================================================
// ADDR: 0x63478
// SYMBOL: sub_63478
int sub_63478()
{
  int result; // r0
  int v1; // r2
  int v2; // r3
  const char *v3; // r1

  result = dword_1A442C;
  if ( dword_1A442C )
  {
    v1 = *(_DWORD *)(dword_1A442C + 132);
    v2 = *(unsigned __int8 *)(v1 + 12);
    v3 = "visible";
    *(_BYTE *)(v1 + 12) = v2 ^ 1;
    if ( v2 )
      v3 = "hidden";
    return sub_6C95C("DeathWindow: %s", v3);
  }
  return result;
}


// ======================================================================
// ADDR: 0x634c0
// SYMBOL: sub_634C0
int *sub_634C0()
{
  int *result; // r0
  int v1; // r4
  int v2; // r0

  result = (int *)sub_6C808();
  if ( result )
  {
    if ( byte_1A4480 )
    {
      sub_6937C(dword_1A41D8, 1);
    }
    else
    {
      v1 = dword_1A4408;
      v2 = sub_6C808();
      ((void (__fastcall *)(_DWORD))((char *)&unk_13630D + v1))(*(_DWORD *)(v2 + 116));
    }
    result = &dword_1A44CC;
    dword_1A44CC = 1;
  }
  return result;
}


// ======================================================================
// ADDR: 0x6351c
// SYMBOL: sub_6351C
int sub_6351C()
{
  int v0; // r0
  int result; // r0

  v0 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_1A4408 + 2350836) + 944) + 24);
  if ( v0 )
    v0 = ((int (__fastcall *)(int, _DWORD, _DWORD))(dword_1A4408 + 1373309))(v0, 0, 0);
  result = sub_6C808(v0);
  if ( result )
  {
    result = dword_1A44CC;
    if ( dword_1A44CC )
    {
      if ( byte_1A4480 )
        sub_6937C(dword_1A41D8, 0);
      result = 0;
      dword_1A44CC = 0;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x63588
// SYMBOL: sub_63588
int __fastcall sub_63588(int a1)
{
  int v2; // r0

  if ( dword_1A442C )
    *(_BYTE *)(*(_DWORD *)(dword_1A442C + 140) + 8) = 0;
  if ( byte_1A49B0 )
  {
    byte_1A448C = 1;
    v2 = sub_7E3C0();
    sub_83B10(v2);
  }
  return off_1A3A5C(a1);
}


// ======================================================================
// ADDR: 0x635dc
// SYMBOL: sub_635DC
int __fastcall sub_635DC(int a1)
{
  int v2; // r0
  int v3; // r1
  char *v4; // r11
  int v5; // r0
  bool v6; // zf
  int v7; // r4
  int i; // r6
  char *v9; // r5
  char *v10; // r8
  int v11; // r0
  char *v12; // r1
  char *v13; // r1
  char *v14; // r1
  char *v15; // r0
  char *v16; // r0
  char *v17; // r3
  bool v18; // zf
  char *v19; // r3
  bool v20; // zf
  char *v21; // r3
  bool v22; // zf
  char *v23; // r1
  bool v24; // zf
  int v25; // r0
  _DWORD *v26; // r5
  int v27; // r6
  int v28; // r1
  int v29; // r0
  bool v30; // zf
  int v32; // r0
  _DWORD *v33; // r5
  int v34; // r6

  v2 = sub_60C34();
  sub_73608(v2);
  if ( ((int (__fastcall *)(_DWORD))(dword_1A4408 + 1065291))(*(_DWORD *)(a1 + 28)) == 54
    || ((int (__fastcall *)(_DWORD))(dword_1A4408 + 1065467))(*(_DWORD *)(a1 + 28)) )
  {
    v3 = *(unsigned __int16 *)(**(_DWORD **)(dword_1A4434 + 944) + 5024);
    v4 = (char *)&unk_1176A0 + 572 * v3;
    v5 = (unsigned __int8)v4[520];
    v6 = v5 == 0;
    if ( !v4[520] )
      v6 = v4[521] == 0;
    if ( !v6 )
      goto LABEL_6;
    v17 = (char *)&unk_1176A0 + 572 * v3;
    v18 = v17[522] == 0;
    if ( !v17[522] )
      v18 = v17[523] == 0;
    if ( !v18 )
      goto LABEL_6;
    v19 = (char *)&unk_1176A0 + 572 * v3;
    v20 = v19[524] == 0;
    if ( !v19[524] )
      v20 = v19[525] == 0;
    if ( !v20 )
      goto LABEL_6;
    v21 = (char *)&unk_1176A0 + 572 * v3;
    v22 = v21[526] == 0;
    if ( !v21[526] )
      v22 = v21[527] == 0;
    if ( !v22 )
      goto LABEL_6;
    v23 = (char *)&unk_1176A0 + 572 * v3;
    v24 = v23[528] == 0;
    if ( !v23[528] )
      v24 = v23[529] == 0;
    if ( !v24 )
    {
LABEL_6:
      v7 = 8;
      for ( i = 0; ; ++i )
      {
        v9 = &v4[i];
        if ( v5 )
        {
          v10 = &v4[4 * i];
          v11 = *((_DWORD *)v10 + 133);
          if ( v11 )
          {
            v12 = &v4[v7];
            *(_QWORD *)v12 = 0LL;
            *((_QWORD *)v12 + 1) = 0LL;
            v13 = &v4[v7 + 16];
            *(_QWORD *)v13 = 0LL;
            *((_QWORD *)v13 + 1) = 0LL;
            *(_DWORD *)&v4[v7 + 32] = 0;
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 4))(v11);
            *((_DWORD *)v10 + 133) = 0;
          }
          v14 = &v4[v7 - 8];
          v15 = &v4[v7 + 8];
          *(_QWORD *)v15 = 0LL;
          *((_QWORD *)v15 + 1) = 0LL;
          v16 = &v4[v7 + 24];
          *(_QWORD *)v16 = 0LL;
          *((_QWORD *)v16 + 1) = 0LL;
          *(_QWORD *)v14 = 0LL;
          *((_QWORD *)v14 + 1) = 0LL;
          *(_DWORD *)&v4[v7 + 40] = 0;
          v9[520] = 0;
        }
        if ( i == 9 )
          break;
        v5 = (unsigned __int8)v9[521];
        v7 += 52;
      }
    }
  }
  v25 = sub_6C844();
  v26 = *(_DWORD **)(v25 + 8);
  if ( !v26 )
  {
    v27 = v25;
    v26 = (_DWORD *)operator new(0x2F0u);
    *v26 = &off_11056C;
    ((void (__fastcall *)(_DWORD *))(dword_1A4408 + 1063817))(v26);
    *(_DWORD *)(v27 + 8) = v26;
  }
  v28 = v26[23];
  v29 = *(_DWORD *)(v28 + 1424);
  v30 = v29 == 0;
  if ( v29 )
    v30 = *(unsigned __int8 *)(v28 + 1157) << 31 == 0;
  if ( !v30 && (*(_DWORD *)(v29 + 1124) != v28 || (unsigned int)*(unsigned __int16 *)(v29 + 38) - 569 <= 1) )
  {
    v32 = sub_6C844();
    v33 = *(_DWORD **)(v32 + 8);
    if ( !v33 )
    {
      v34 = v32;
      v33 = (_DWORD *)operator new(0x2F0u);
      *v33 = &off_11056C;
      ((void (__fastcall *)(_DWORD *))(dword_1A4408 + 1063817))(v33);
      *(_DWORD *)(v34 + 8) = v33;
    }
    if ( ((int (__fastcall *)(_DWORD *))(dword_1A4408 + 1066569))(v33) && byte_1A3A60 )
    {
      ((void (__fastcall *)(_DWORD))(dword_1A4408 + 1066685))(*(_DWORD *)(a1 + 13664));
      byte_1A3A60 = 0;
    }
  }
  return off_1A3A64(a1);
}


// ======================================================================
// ADDR: 0x63820
// SYMBOL: sub_63820
int __fastcall sub_63820(int a1, int a2, int a3)
{
  int v4; // r0

  dword_1A3A6C = a2;
  dword_1A3A68 = a1;
  dword_1A3A70 = a3;
  off_1A3A74();
  if ( a3 )
  {
    v4 = (unsigned __int8)byte_1A3BD8;
    __dmb(0xBu);
    if ( !(v4 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3BD8) )
    {
      word_1A3BD4 = 23102;
      xmmword_1A3BC0.n128_u64[0] = 0x3C7A3F3D343B3219LL;
      xmmword_1A3BC0.n128_u64[1] = 0x2E3B287A3F373B28LL;
      dword_1A3BD0 = 2138726463;
      _cxa_atexit((void (*)(void *))sub_61DE8, &xmmword_1A3BC0, &off_110560);
      j___cxa_guard_release((__guard *)&byte_1A3BD8);
    }
    sub_61DFE(&xmmword_1A3BC0);
    _android_log_print(4, "SAMP_ORIG", (const char *)&xmmword_1A3BC0, dword_116D04);
    *(_DWORD *)(a3 + 20) = dword_116D04;
  }
  return 0;
}


// ======================================================================
// ADDR: 0x63914
// SYMBOL: sub_63914
char *sub_63914()
{
  int v0; // r0
  int v1; // r0
  char *result; // r0

  v0 = off_1A3A78();
  v1 = sub_83B30(v0);
  sub_7E42C(v1);
  result = &byte_1A448C;
  byte_1A448C = 0;
  byte_1A49B0 = 0;
  return result;
}


// ======================================================================
// ADDR: 0x63948
// SYMBOL: sub_63948
int sub_63948()
{
  char *v0; // r0

  off_1A3A7C();
  v0 = a127001;
  if ( (unsigned int)(unsigned __int8)a127001[0] - 51 <= 0xFFFFFFFC )
  {
    v0 = (char *)sub_8775C((int)&unk_1ABEC5, a127001);
    if ( !v0 )
    {
      _android_log_print(4, "SAMP_ORIG", "Failed to convert host %s to IP", a127001);
      v0 = a127001;
    }
  }
  return sub_7EEFC(v0, dword_116CE0);
}


// ======================================================================
// ADDR: 0x639b0
// SYMBOL: sub_639B0
int __fastcall sub_639B0(int a1)
{
  int v2; // r0

  if ( a1 )
    return ((int (*)(void))(dword_1A4404 + 3230065))();
  v2 = (unsigned __int8)byte_1A3BF8;
  __dmb(0xBu);
  if ( !(v2 << 31) )
  {
    if ( j___cxa_guard_acquire((__guard *)&byte_1A3BF8) )
    {
      dword_1A3BF4 = 1518020671;
      *(_QWORD *)byte_1A3BE0 = 0x7A3E33363B2C3413LL;
      *(_QWORD *)&byte_1A3BE0[8] = 0xA7A3F3D3B283B1DLL;
      dword_1A3BF0 = 775172917;
      _cxa_atexit((void (*)(void *))sub_66E7C, byte_1A3BE0, &off_110560);
      j___cxa_guard_release((__guard *)&byte_1A3BF8);
    }
  }
  sub_67814(byte_1A3BE0);
  _android_log_print(4, "SAMP_ORIG", byte_1A3BE0);
  return 0;
}


// ======================================================================
// ADDR: 0x63b30
// SYMBOL: sub_63B30
int __fastcall sub_63B30(int a1, const char *a2)
{
  int v3; // r0
  int v4; // r1
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  size_t v9; // r5
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r1
  int64x2_t v14; // q8
  int v15; // r0
  char *v16; // r1
  int64x2_t v17; // q8
  const char *i; // r0
  int v19; // r0
  int v20; // r1
  int64x2_t v21; // q8
  const char *j; // r0
  int v23; // r0
  int v24; // r1
  int64x2_t v25; // q8
  int v26; // r0
  int v27; // r1
  int64x2_t v28; // q8
  char *v29; // r0
  const char *k; // r0
  int v31; // r1
  int v32; // r0
  int64x2_t v33; // q8
  int v34; // r0
  int v35; // r1
  int64x2_t v36; // q8
  int v37; // r0
  int v38; // r1
  int64x2_t v39; // q8
  int v40; // r1
  int64x2_t v41; // q8
  int v42; // r0
  int v43; // r1
  int64x2_t v44; // q8
  std::thread *v45; // r0
  int v46; // r1
  char *m; // r4
  int v48; // r5
  char *v49; // r0
  int v50; // r0
  int64x2_t v51; // q8
  int v52; // r0
  int64x2_t v53; // q8
  int v54; // r0
  int64x2_t v55; // q8
  int v56; // r0
  float *v57; // r0
  float v58; // s16
  int v59; // r0
  int v60; // r0
  const char *n; // r4
  int v62; // r0
  bool v63; // zf
  int v64; // r0
  size_t v65; // r5
  int v66; // r1
  int64x2_t v67; // q8
  int v68; // r1
  int64x2_t v69; // q8
  int v70; // r1
  int64x2_t v71; // q8
  char *v72; // r0
  int v74; // [sp+1Ch] [bp-62Ch]
  int v76; // [sp+24h] [bp-624h] BYREF
  __int64 v77; // [sp+28h] [bp-620h] BYREF
  _QWORD v78[34]; // [sp+30h] [bp-618h] BYREF
  _BYTE v79[248]; // [sp+140h] [bp-508h] BYREF
  _BYTE v80[248]; // [sp+238h] [bp-410h] BYREF
  _BYTE v81[248]; // [sp+330h] [bp-318h] BYREF
  _BYTE v82[248]; // [sp+428h] [bp-220h] BYREF
  char s1[248]; // [sp+520h] [bp-128h] BYREF
  int v84; // [sp+618h] [bp-30h]

  v74 = *(_DWORD *)(dword_1A4408 + 2350836);
  sub_10967C((int)s1, 0xF8u);
  sub_10967C((int)v82, 0xF8u);
  sub_10967C((int)v81, 0xF8u);
  sub_10967C((int)v80, 0xF8u);
  sub_10967C((int)v79, 0xF8u);
  sscanf(a2, "%s %s %s %s %s", s1, v82, v81, v80, v79);
  v3 = (unsigned __int8)byte_1A3C04;
  __dmb(0xBu);
  if ( !(v3 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3C04) )
  {
    byte_1A3C02 = 90;
    word_1A3C00 = 10558;
    dword_1A3BFC = 926497141;
    _cxa_atexit((void (*)(void *))sub_66E8E, &dword_1A3BFC, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A3C04);
  }
  if ( byte_1A3C02 )
  {
    byte_1A3C02 ^= 0x5Au;
    LOBYTE(dword_1A3BFC) = dword_1A3BFC ^ 0x5A;
    BYTE1(dword_1A3BFC) ^= 0x5Au;
    BYTE2(dword_1A3BFC) ^= 0x5Au;
    LOBYTE(word_1A3C00) = word_1A3C00 ^ 0x5A;
    HIBYTE(dword_1A3BFC) ^= 0x5Au;
    HIBYTE(word_1A3C00) ^= 0x5Au;
  }
  if ( !strcmp(s1, (const char *)&dword_1A3BFC) )
  {
    sub_6C73C(" ", v4);
    v77 = unk_50A50;
    LODWORD(v78[0]) = unk_50A58;
    *(_QWORD *)((char *)v78 + 4) = unk_50A5C;
    *(_QWORD *)((char *)&v78[1] + 4) = unk_50A64;
    v10 = (unsigned __int8)byte_1A3C24;
    __dmb(0xBu);
    if ( !(v10 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3C24) )
    {
      sub_66E98(byte_1A3C08, &v77);
      _cxa_atexit((void (*)(void *))sub_66F0A, byte_1A3C08, &off_110560);
      j___cxa_guard_release((__guard *)&byte_1A3C24);
    }
    sub_67874(byte_1A3C08);
    sub_6C73C(byte_1A3C08, v11);
    v12 = (unsigned __int8)byte_1A3C84;
    __dmb(0xBu);
    if ( !(v12 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3C84) )
    {
      j_memcpy(&xmmword_1A3C30, &unk_50A70, 0x54u);
      _cxa_atexit((void (*)(void *))sub_66F1C, &xmmword_1A3C30, &off_110560);
      j___cxa_guard_release((__guard *)&byte_1A3C84);
    }
    v13 = (unsigned __int8)byte_1A3C83;
    if ( byte_1A3C83 )
    {
      v14.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
      v14.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
      xmmword_1A3C30 = (__int128)veorq_s64((int64x2_t)xmmword_1A3C30, v14);
      xmmword_1A3C40 = (__int128)veorq_s64((int64x2_t)xmmword_1A3C40, v14);
      xmmword_1A3C50 = (__int128)veorq_s64((int64x2_t)xmmword_1A3C50, v14);
      xmmword_1A3C60 = (__int128)veorq_s64((int64x2_t)xmmword_1A3C60, v14);
      byte_1A3C83 ^= 0x5Au;
      xmmword_1A3C70 = (__int128)veorq_s64((int64x2_t)xmmword_1A3C70, v14);
      byte_1A3C82 ^= 0x5Au;
      byte_1A3C81 ^= 0x5Au;
      v13 = (unsigned __int8)byte_1A3C80 ^ 0x5A;
      byte_1A3C80 ^= 0x5Au;
    }
    sub_6C73C((const char *)&xmmword_1A3C30, v13);
    v15 = (unsigned __int8)byte_1A3CEC;
    __dmb(0xBu);
    if ( !(v15 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3CEC) )
    {
      j_memcpy(&xmmword_1A3C90, &unk_50AC8, 0x59u);
      _cxa_atexit((void (*)(void *))sub_66F3C, &xmmword_1A3C90, &off_110560);
      j___cxa_guard_release((__guard *)&byte_1A3CEC);
    }
    v16 = (char *)(unsigned __int8)byte_1A3CE8;
    if ( byte_1A3CE8 )
    {
      v17.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
      v17.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
      xmmword_1A3C90 = (__int128)veorq_s64((int64x2_t)xmmword_1A3C90, v17);
      xmmword_1A3CA0 = (__int128)veorq_s64((int64x2_t)xmmword_1A3CA0, v17);
      xmmword_1A3CB0 = (__int128)veorq_s64((int64x2_t)xmmword_1A3CB0, v17);
      byte_1A3CE3 ^= 0x5Au;
      xmmword_1A3CC0 = (__int128)veorq_s64((int64x2_t)xmmword_1A3CC0, v17);
      byte_1A3CE2 ^= 0x5Au;
      byte_1A3CE1 ^= 0x5Au;
      xmmword_1A3CD0 = (__int128)veorq_s64((int64x2_t)xmmword_1A3CD0, v17);
      v16 = &byte_1A3CE0;
      byte_1A3CE4 ^= 0x5Au;
      byte_1A3CE5 ^= 0x5Au;
      byte_1A3CE6 ^= 0x5Au;
      byte_1A3CE7 ^= 0x5Au;
      byte_1A3CE8 ^= 0x5Au;
      byte_1A3CE0 ^= 0x5Au;
    }
    sub_6C73C((const char *)&xmmword_1A3C90, v16);
    return v84;
  }
  v5 = (unsigned __int8)byte_1A3CFC;
  __dmb(0xBu);
  if ( !(v5 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3CFC) )
  {
    qmemcpy(&dword_1A3CF0, "u<54.)3 ?Z", 10);
    _cxa_atexit((void (*)(void *))sub_66F5E, &dword_1A3CF0, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A3CFC);
  }
  if ( HIBYTE(word_1A3CF8) )
  {
    HIBYTE(word_1A3CF8) ^= 0x5Au;
    LOBYTE(dword_1A3CF0) = dword_1A3CF0 ^ 0x5A;
    LOBYTE(dword_1A3CF4) = dword_1A3CF4 ^ 0x5A;
    BYTE1(dword_1A3CF0) ^= 0x5Au;
    BYTE1(dword_1A3CF4) ^= 0x5Au;
    BYTE2(dword_1A3CF4) ^= 0x5Au;
    BYTE2(dword_1A3CF0) ^= 0x5Au;
    HIBYTE(dword_1A3CF4) ^= 0x5Au;
    HIBYTE(dword_1A3CF0) ^= 0x5Au;
    LOBYTE(word_1A3CF8) = word_1A3CF8 ^ 0x5A;
  }
  if ( !strcmp(s1, (const char *)&dword_1A3CF0) )
  {
    for ( i = a2 + 9; *i == 32; ++i )
      ;
    if ( !*i )
    {
      v77 = unk_50B28;
      v78[0] = unk_50B30;
      v78[1] = unk_50B38;
      qmemcpy(&v78[2], "zu<54.)3 ?zf)3 ?dZ", 18);
      v19 = (unsigned __int8)byte_1A3D2C;
      __dmb(0xBu);
      if ( !(v19 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3D2C) )
      {
        sub_66F68(&xmmword_1A3D00, &v77);
        _cxa_atexit((void (*)(void *))sub_6703A, &xmmword_1A3D00, &off_110560);
        j___cxa_guard_release((__guard *)&byte_1A3D2C);
      }
      v20 = (unsigned __int8)byte_1A3D29;
      if ( byte_1A3D29 )
      {
        v21.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
        v21.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
        byte_1A3D23 ^= 0x5Au;
        xmmword_1A3D00 = (__int128)veorq_s64((int64x2_t)xmmword_1A3D00, v21);
        byte_1A3D24 ^= 0x5Au;
        byte_1A3D25 ^= 0x5Au;
        byte_1A3D26 ^= 0x5Au;
        byte_1A3D22 ^= 0x5Au;
        xmmword_1A3D10 = (__int128)veorq_s64((int64x2_t)xmmword_1A3D10, v21);
        byte_1A3D21 ^= 0x5Au;
        byte_1A3D27 ^= 0x5Au;
        byte_1A3D28 ^= 0x5Au;
        byte_1A3D20 ^= 0x5Au;
        v20 = (unsigned __int8)byte_1A3D29 ^ 0x5A;
        byte_1A3D29 ^= 0x5Au;
      }
      sub_6C73C((const char *)&xmmword_1A3D00, v20);
      return v84;
    }
    *(float *)&v76 = 0.0;
    if ( sscanf(i, "%f", &v76) != 1 )
    {
      v77 = unk_50B28;
      v78[0] = unk_50B30;
      v78[1] = unk_50B38;
      qmemcpy(&v78[2], "zu<54.)3 ?zf)3 ?dZ", 18);
      v37 = (unsigned __int8)byte_1A3D5C;
      __dmb(0xBu);
      if ( !(v37 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3D5C) )
      {
        sub_66F68(&xmmword_1A3D30, &v77);
        _cxa_atexit((void (*)(void *))sub_6703A, &xmmword_1A3D30, &off_110560);
        j___cxa_guard_release((__guard *)&byte_1A3D5C);
      }
      v38 = (unsigned __int8)byte_1A3D59;
      if ( byte_1A3D59 )
      {
        v39.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
        v39.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
        byte_1A3D53 ^= 0x5Au;
        xmmword_1A3D30 = (__int128)veorq_s64((int64x2_t)xmmword_1A3D30, v39);
        byte_1A3D54 ^= 0x5Au;
        byte_1A3D55 ^= 0x5Au;
        byte_1A3D56 ^= 0x5Au;
        byte_1A3D52 ^= 0x5Au;
        xmmword_1A3D40 = (__int128)veorq_s64((int64x2_t)xmmword_1A3D40, v39);
        byte_1A3D51 ^= 0x5Au;
        byte_1A3D57 ^= 0x5Au;
        byte_1A3D58 ^= 0x5Au;
        byte_1A3D50 ^= 0x5Au;
        v38 = (unsigned __int8)byte_1A3D59 ^ 0x5A;
        byte_1A3D59 ^= 0x5Au;
      }
      sub_6C73C((const char *)&xmmword_1A3D30, v38);
      return v84;
    }
    if ( *(float *)&v76 < 0.1 || *(float *)&v76 > 2.0 )
    {
      v50 = (unsigned __int8)byte_1A3DA0;
      __dmb(0xBu);
      if ( !(v50 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3DA0) )
      {
        xmmword_1A3D60 = xmmword_50B58;
        xmmword_1A3D70 = xmmword_50B68;
        qmemcpy(&xmmword_1A3D80, " ?z7/).z8?z8?.-??4zjtkz;4>zhtjZ", 31);
        _cxa_atexit((void (*)(void *))sub_67050, &xmmword_1A3D60, &off_110560);
        j___cxa_guard_release((__guard *)&byte_1A3DA0);
      }
      if ( byte_1A3D9E )
      {
        v51.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
        v51.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
        xmmword_1A3D60 = (__int128)veorq_s64((int64x2_t)xmmword_1A3D60, v51);
        byte_1A3D95 ^= 0x5Au;
        xmmword_1A3D70 = (__int128)veorq_s64((int64x2_t)xmmword_1A3D70, v51);
        byte_1A3D94 ^= 0x5Au;
        xmmword_1A3D80 = (__int128)veorq_s64((int64x2_t)xmmword_1A3D80, v51);
        byte_1A3D93 ^= 0x5Au;
        byte_1A3D92 ^= 0x5Au;
        byte_1A3D91 ^= 0x5Au;
        byte_1A3D96 ^= 0x5Au;
        byte_1A3D97 ^= 0x5Au;
        byte_1A3D98 ^= 0x5Au;
        byte_1A3D90 ^= 0x5Au;
        byte_1A3D99 ^= 0x5Au;
        byte_1A3D9A ^= 0x5Au;
        byte_1A3D9B ^= 0x5Au;
        byte_1A3D9C ^= 0x5Au;
        byte_1A3D9D ^= 0x5Au;
        byte_1A3D9E ^= 0x5Au;
      }
      sub_6C73C((const char *)&xmmword_1A3D60);
      return v84;
    }
    v77 = unk_50B98;
    v78[0] = unk_50BA0;
    v78[1] = unk_50BA8;
    v78[2] = unk_50BB0;
    dword_1A4524 = v76;
    v78[3] = unk_50BB8;
    v26 = (unsigned __int8)byte_1A3DD8;
    __dmb(0xBu);
    if ( !(v26 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3DD8) )
    {
      sub_6706A(&xmmword_1A3DB0, &v77);
      _cxa_atexit((void (*)(void *))sub_6712C, &xmmword_1A3DB0, &off_110560);
      j___cxa_guard_release((__guard *)&byte_1A3DD8);
    }
    v27 = (unsigned __int8)byte_1A3DD7;
    if ( byte_1A3DD7 )
    {
      v28.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
      v28.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
      byte_1A3DD3 ^= 0x5Au;
      xmmword_1A3DB0 = (__int128)veorq_s64((int64x2_t)xmmword_1A3DB0, v28);
      byte_1A3DD4 ^= 0x5Au;
      byte_1A3DD5 ^= 0x5Au;
      byte_1A3DD6 ^= 0x5Au;
      xmmword_1A3DC0 = (__int128)veorq_s64((int64x2_t)xmmword_1A3DC0, v28);
      byte_1A3DD2 ^= 0x5Au;
      byte_1A3DD1 ^= 0x5Au;
      v27 = (unsigned __int8)byte_1A3DD0;
      byte_1A3DD7 ^= 0x5Au;
      byte_1A3DD0 ^= 0x5Au;
    }
    sub_6C73C((const char *)&xmmword_1A3DB0, v27);
    v29 = (char *)((int (__fastcall *)(int))(dword_1A4408 + 937829))(dword_1A4524);
LABEL_130:
    sub_76564(v29);
    return v84;
  }
  v6 = (unsigned __int8)byte_1A3DE8;
  __dmb(0xBu);
  if ( !(v6 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3DE8) )
  {
    qmemcpy(&dword_1A3DDC, "u*;=?)3 ?Z", 10);
    _cxa_atexit((void (*)(void *))sub_66F5E, &dword_1A3DDC, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A3DE8);
  }
  if ( HIBYTE(word_1A3DE4) )
  {
    HIBYTE(word_1A3DE4) ^= 0x5Au;
    LOBYTE(dword_1A3DDC) = dword_1A3DDC ^ 0x5A;
    LOBYTE(dword_1A3DE0) = dword_1A3DE0 ^ 0x5A;
    BYTE1(dword_1A3DDC) ^= 0x5Au;
    BYTE1(dword_1A3DE0) ^= 0x5Au;
    BYTE2(dword_1A3DE0) ^= 0x5Au;
    BYTE2(dword_1A3DDC) ^= 0x5Au;
    HIBYTE(dword_1A3DE0) ^= 0x5Au;
    HIBYTE(dword_1A3DDC) ^= 0x5Au;
    LOBYTE(word_1A3DE4) = word_1A3DE4 ^ 0x5A;
  }
  if ( !strcmp(s1, (const char *)&dword_1A3DDC) )
  {
    for ( j = a2 + 9; *j == 32; ++j )
      ;
    if ( !*j )
    {
      v77 = unk_50BC0;
      v78[0] = unk_50BC8;
      v78[1] = unk_50BD0;
      qmemcpy(&v78[2], "zu*;=?)3 ?zf)3 ?dZ", 18);
      v23 = (unsigned __int8)byte_1A3E1C;
      __dmb(0xBu);
      if ( !(v23 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3E1C) )
      {
        sub_66F68(&xmmword_1A3DF0, &v77);
        _cxa_atexit((void (*)(void *))sub_6703A, &xmmword_1A3DF0, &off_110560);
        j___cxa_guard_release((__guard *)&byte_1A3E1C);
      }
      v24 = (unsigned __int8)byte_1A3E19;
      if ( byte_1A3E19 )
      {
        v25.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
        v25.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
        byte_1A3E13 ^= 0x5Au;
        xmmword_1A3DF0 = (__int128)veorq_s64((int64x2_t)xmmword_1A3DF0, v25);
        byte_1A3E14 ^= 0x5Au;
        byte_1A3E15 ^= 0x5Au;
        byte_1A3E16 ^= 0x5Au;
        byte_1A3E12 ^= 0x5Au;
        xmmword_1A3E00 = (__int128)veorq_s64((int64x2_t)xmmword_1A3E00, v25);
        byte_1A3E11 ^= 0x5Au;
        byte_1A3E17 ^= 0x5Au;
        byte_1A3E18 ^= 0x5Au;
        byte_1A3E10 ^= 0x5Au;
        v24 = (unsigned __int8)byte_1A3E19 ^ 0x5A;
        byte_1A3E19 ^= 0x5Au;
      }
      sub_6C73C((const char *)&xmmword_1A3DF0, v24);
      return v84;
    }
    *(float *)&v76 = 0.0;
    if ( sscanf(j, "%d", &v76) != 1 )
    {
      v77 = unk_50BC0;
      v78[0] = unk_50BC8;
      v78[1] = unk_50BD0;
      qmemcpy(&v78[2], "zu*;=?)3 ?zf)3 ?dZ", 18);
      v42 = (unsigned __int8)byte_1A3E4C;
      __dmb(0xBu);
      if ( !(v42 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3E4C) )
      {
        sub_66F68(&xmmword_1A3E20, &v77);
        _cxa_atexit((void (*)(void *))sub_6703A, &xmmword_1A3E20, &off_110560);
        j___cxa_guard_release((__guard *)&byte_1A3E4C);
      }
      v43 = (unsigned __int8)byte_1A3E49;
      if ( byte_1A3E49 )
      {
        v44.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
        v44.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
        byte_1A3E43 ^= 0x5Au;
        xmmword_1A3E20 = (__int128)veorq_s64((int64x2_t)xmmword_1A3E20, v44);
        byte_1A3E44 ^= 0x5Au;
        byte_1A3E45 ^= 0x5Au;
        byte_1A3E46 ^= 0x5Au;
        byte_1A3E42 ^= 0x5Au;
        xmmword_1A3E30 = (__int128)veorq_s64((int64x2_t)xmmword_1A3E30, v44);
        byte_1A3E41 ^= 0x5Au;
        byte_1A3E47 ^= 0x5Au;
        byte_1A3E48 ^= 0x5Au;
        byte_1A3E40 ^= 0x5Au;
        v43 = (unsigned __int8)byte_1A3E49 ^ 0x5A;
        byte_1A3E49 ^= 0x5Au;
      }
      sub_6C73C((const char *)&xmmword_1A3E20, v43);
      return v84;
    }
    if ( (unsigned int)(v76 - 21) <= 0xFFFFFFEF )
    {
      v34 = (unsigned __int8)byte_1A3E98;
      __dmb(0xBu);
      if ( !(v34 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3E98) )
      {
        j_memcpy(&xmmword_1A3E50, &unk_50BF0, 0x45u);
        _cxa_atexit((void (*)(void *))sub_66C72, &xmmword_1A3E50, &off_110560);
        j___cxa_guard_release((__guard *)&byte_1A3E98);
      }
      v35 = (unsigned __int8)byte_1A3E94;
      if ( byte_1A3E94 )
      {
        v36.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
        v36.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
        xmmword_1A3E50 = (__int128)veorq_s64((int64x2_t)xmmword_1A3E50, v36);
        xmmword_1A3E60 = (__int128)veorq_s64((int64x2_t)xmmword_1A3E60, v36);
        xmmword_1A3E70 = (__int128)veorq_s64((int64x2_t)xmmword_1A3E70, v36);
        byte_1A3E94 ^= 0x5Au;
        xmmword_1A3E80 = (__int128)veorq_s64((int64x2_t)xmmword_1A3E80, v36);
        byte_1A3E93 ^= 0x5Au;
        byte_1A3E92 ^= 0x5Au;
        byte_1A3E91 ^= 0x5Au;
        v35 = (unsigned __int8)byte_1A3E90 ^ 0x5A;
        byte_1A3E90 ^= 0x5Au;
      }
      sub_6C73C((const char *)&xmmword_1A3E50, v35);
      return v84;
    }
    dword_1A4528 = v76;
    v54 = (unsigned __int8)byte_1A3ED4;
    __dmb(0xBu);
    if ( !(v54 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3ED4) )
    {
      xmmword_1A3EA0 = xmmword_50C38;
      xmmword_1A3EB0 = xmmword_50C48;
      xmmword_1A3EC0 = xmmword_50C58;
      dword_1A3ED0 = 1517562175;
      _cxa_atexit((void (*)(void *))sub_67142, &xmmword_1A3EA0, &off_110560);
      j___cxa_guard_release((__guard *)&byte_1A3ED4);
    }
    if ( HIBYTE(dword_1A3ED0) )
    {
      v55.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
      v55.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
      xmmword_1A3EA0 = (__int128)veorq_s64((int64x2_t)xmmword_1A3EA0, v55);
      xmmword_1A3EB0 = (__int128)veorq_s64((int64x2_t)xmmword_1A3EB0, v55);
      HIBYTE(dword_1A3ED0) ^= 0x5Au;
      xmmword_1A3EC0 = (__int128)veorq_s64((int64x2_t)xmmword_1A3EC0, v55);
      BYTE2(dword_1A3ED0) ^= 0x5Au;
      BYTE1(dword_1A3ED0) ^= 0x5Au;
      LOBYTE(dword_1A3ED0) = dword_1A3ED0 ^ 0x5A;
    }
    sub_6C73C((const char *)&xmmword_1A3EA0, dword_1A4528);
    v56 = ((int (__fastcall *)(int))((char *)&loc_E4F34 + dword_1A4408))(dword_1A4528);
    v57 = (float *)(*(_DWORD *)(sub_6C808(v56) + 96) + 2268);
    v58 = *v57 * (float)(unsigned int)dword_1A4528;
    v59 = *(_DWORD *)(sub_6C808(v57) + 96);
    *(float *)(v59 + 40) = v58;
    v60 = *(_DWORD *)(sub_6C808(v59) + 96);
    *(float *)(v60 + 32) = v58;
    v29 = *(char **)(sub_6C808(v60) + 96);
    *((float *)v29 + 6) = v58;
    goto LABEL_130;
  }
  v7 = (unsigned __int8)byte_1A3EE4;
  __dmb(0xBu);
  if ( !(v7 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3EE4) )
  {
    byte_1A3EE0 = 90;
    dword_1A3EDC = 808989998;
    dword_1A3ED8 = 859717493;
    _cxa_atexit((void (*)(void *))sub_6715A, &dword_1A3ED8, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A3EE4);
  }
  if ( byte_1A3EE0 )
  {
    byte_1A3EE0 ^= 0x5Au;
    LOBYTE(dword_1A3ED8) = dword_1A3ED8 ^ 0x5A;
    LOBYTE(dword_1A3EDC) = dword_1A3EDC ^ 0x5A;
    BYTE1(dword_1A3ED8) ^= 0x5Au;
    BYTE1(dword_1A3EDC) ^= 0x5Au;
    BYTE2(dword_1A3ED8) ^= 0x5Au;
    BYTE2(dword_1A3EDC) ^= 0x5Au;
    HIBYTE(dword_1A3ED8) ^= 0x5Au;
    HIBYTE(dword_1A3EDC) ^= 0x5Au;
  }
  if ( !strcmp(s1, (const char *)&dword_1A3ED8) )
  {
    for ( k = a2 + 8; ; ++k )
    {
      v31 = *(unsigned __int8 *)k;
      if ( v31 != 32 )
        break;
    }
    if ( *k )
    {
      *(float *)&v76 = 0.0;
      v77 = 0LL;
      v78[0] = 0LL;
      if ( sscanf(k, "%15s %f", &v77, &v76) == 2 )
      {
        if ( (_DWORD)v77 == 7565168 )
        {
          dword_116C70 = v76;
          sub_65618();
          v66 = (unsigned __int8)byte_1A3F9A;
          if ( byte_1A3F9A )
          {
            v67.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
            v67.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
            byte_1A3F93 ^= 0x5Au;
            xmmword_1A3F70 = (__int128)veorq_s64((int64x2_t)xmmword_1A3F70, v67);
            byte_1A3F94 ^= 0x5Au;
            byte_1A3F95 ^= 0x5Au;
            byte_1A3F96 ^= 0x5Au;
            byte_1A3F92 ^= 0x5Au;
            xmmword_1A3F80 = (__int128)veorq_s64((int64x2_t)xmmword_1A3F80, v67);
            byte_1A3F91 ^= 0x5Au;
            byte_1A3F97 ^= 0x5Au;
            byte_1A3F98 ^= 0x5Au;
            byte_1A3F90 ^= 0x5Au;
            byte_1A3F99 ^= 0x5Au;
            v66 = (unsigned __int8)byte_1A3F9A ^ 0x5A;
            byte_1A3F9A ^= 0x5Au;
          }
          sub_6C73C((const char *)&xmmword_1A3F70, v66, *(float *)&dword_116C70);
        }
        else if ( (_DWORD)v77 == 7630706 )
        {
          dword_116C74 = v76;
          sub_656D4();
          v68 = (unsigned __int8)byte_1A3FCA;
          if ( byte_1A3FCA )
          {
            v69.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
            v69.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
            byte_1A3FC3 ^= 0x5Au;
            xmmword_1A3FA0 = (__int128)veorq_s64((int64x2_t)xmmword_1A3FA0, v69);
            byte_1A3FC4 ^= 0x5Au;
            byte_1A3FC5 ^= 0x5Au;
            byte_1A3FC6 ^= 0x5Au;
            byte_1A3FC2 ^= 0x5Au;
            xmmword_1A3FB0 = (__int128)veorq_s64((int64x2_t)xmmword_1A3FB0, v69);
            byte_1A3FC1 ^= 0x5Au;
            byte_1A3FC7 ^= 0x5Au;
            byte_1A3FC8 ^= 0x5Au;
            byte_1A3FC0 ^= 0x5Au;
            byte_1A3FC9 ^= 0x5Au;
            v68 = (unsigned __int8)byte_1A3FCA ^ 0x5A;
            byte_1A3FCA ^= 0x5Au;
          }
          sub_6C73C((const char *)&xmmword_1A3FA0, v68, *(float *)&dword_116C74);
        }
        else if ( !strcmp((const char *)&v77, "scale") )
        {
          dword_116C78 = v76;
          sub_65790();
          v70 = (unsigned __int8)byte_1A3FF7;
          if ( byte_1A3FF7 )
          {
            v71.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
            v71.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
            byte_1A3FF3 ^= 0x5Au;
            xmmword_1A3FD0 = (__int128)veorq_s64((int64x2_t)xmmword_1A3FD0, v71);
            byte_1A3FF4 ^= 0x5Au;
            byte_1A3FF5 ^= 0x5Au;
            byte_1A3FF6 ^= 0x5Au;
            xmmword_1A3FE0 = (__int128)veorq_s64((int64x2_t)xmmword_1A3FE0, v71);
            byte_1A3FF2 ^= 0x5Au;
            byte_1A3FF1 ^= 0x5Au;
            v70 = (unsigned __int8)byte_1A3FF0;
            byte_1A3FF7 ^= 0x5Au;
            byte_1A3FF0 ^= 0x5Au;
          }
          sub_6C73C((const char *)&xmmword_1A3FD0, v70, *(float *)&dword_116C78);
        }
        else
        {
          sub_6584C();
          v40 = (unsigned __int8)byte_1A403C;
          if ( byte_1A403C )
          {
            v41.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
            v41.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
            xmmword_1A4000 = (__int128)veorq_s64((int64x2_t)xmmword_1A4000, v41);
            byte_1A4035 ^= 0x5Au;
            xmmword_1A4010 = (__int128)veorq_s64((int64x2_t)xmmword_1A4010, v41);
            byte_1A4034 ^= 0x5Au;
            xmmword_1A4020 = (__int128)veorq_s64((int64x2_t)xmmword_1A4020, v41);
            byte_1A4033 ^= 0x5Au;
            byte_1A4032 ^= 0x5Au;
            byte_1A4031 ^= 0x5Au;
            byte_1A4036 ^= 0x5Au;
            byte_1A4037 ^= 0x5Au;
            byte_1A4038 ^= 0x5Au;
            byte_1A4030 ^= 0x5Au;
            byte_1A4039 ^= 0x5Au;
            byte_1A403A ^= 0x5Au;
            byte_1A403B ^= 0x5Au;
            v40 = (unsigned __int8)byte_1A403C ^ 0x5A;
            byte_1A403C ^= 0x5Au;
          }
          sub_6C73C((const char *)&xmmword_1A4000, v40);
        }
      }
      else
      {
        v52 = (unsigned __int8)byte_1A3F6C;
        __dmb(0xBu);
        if ( !(v52 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3F6C) )
        {
          xmmword_1A3F30 = xmmword_50C70;
          xmmword_1A3F40 = xmmword_50C80;
          xmmword_1A3F50 = xmmword_50C90;
          *(_QWORD *)((char *)&xmmword_1A3F50 + 12) = 0x7A073F363B39297ALL;
          *(_QWORD *)&byte_1A3F64 = unk_50CA4;
          _cxa_atexit((void (*)(void *))sub_67164, &xmmword_1A3F30, &off_110560);
          j___cxa_guard_release((__guard *)&byte_1A3F6C);
        }
        if ( byte_1A3F6B )
        {
          v53.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
          v53.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
          xmmword_1A3F30 = (__int128)veorq_s64((int64x2_t)xmmword_1A3F30, v53);
          byte_1A3F65 ^= 0x5Au;
          xmmword_1A3F40 = (__int128)veorq_s64((int64x2_t)xmmword_1A3F40, v53);
          byte_1A3F64 ^= 0x5Au;
          xmmword_1A3F50 = (__int128)veorq_s64((int64x2_t)xmmword_1A3F50, v53);
          byte_1A3F63 ^= 0x5Au;
          byte_1A3F62 ^= 0x5Au;
          byte_1A3F61 ^= 0x5Au;
          byte_1A3F66 ^= 0x5Au;
          byte_1A3F67 ^= 0x5Au;
          byte_1A3F68 ^= 0x5Au;
          byte_1A3F60 ^= 0x5Au;
          byte_1A3F69 ^= 0x5Au;
          byte_1A3F6A ^= 0x5Au;
          byte_1A3F6B ^= 0x5Au;
        }
        sub_6C73C((const char *)&xmmword_1A3F30);
      }
    }
    else
    {
      v32 = (unsigned __int8)byte_1A3F2C;
      __dmb(0xBu);
      if ( !(v32 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3F2C) )
      {
        xmmword_1A3EF0 = xmmword_50C70;
        xmmword_1A3F00 = xmmword_50C80;
        xmmword_1A3F10 = xmmword_50C90;
        *(_QWORD *)((char *)&xmmword_1A3F10 + 12) = 0x7A073F363B39297ALL;
        *(_QWORD *)&byte_1A3F24 = unk_50CA4;
        _cxa_atexit((void (*)(void *))sub_67164, &xmmword_1A3EF0, &off_110560);
        j___cxa_guard_release((__guard *)&byte_1A3F2C);
      }
      if ( byte_1A3F2B )
      {
        v33.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
        v33.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
        xmmword_1A3EF0 = (__int128)veorq_s64((int64x2_t)xmmword_1A3EF0, v33);
        byte_1A3F25 ^= 0x5Au;
        xmmword_1A3F00 = (__int128)veorq_s64((int64x2_t)xmmword_1A3F00, v33);
        byte_1A3F24 ^= 0x5Au;
        xmmword_1A3F10 = (__int128)veorq_s64((int64x2_t)xmmword_1A3F10, v33);
        byte_1A3F23 ^= 0x5Au;
        byte_1A3F22 ^= 0x5Au;
        byte_1A3F21 ^= 0x5Au;
        byte_1A3F26 ^= 0x5Au;
        byte_1A3F27 ^= 0x5Au;
        byte_1A3F28 ^= 0x5Au;
        v31 = (unsigned __int8)byte_1A3F20 ^ 0x5A;
        byte_1A3F20 ^= 0x5Au;
        byte_1A3F29 ^= 0x5Au;
        byte_1A3F2A ^= 0x5Au;
        byte_1A3F2B ^= 0x5Au;
      }
      sub_6C73C((const char *)&xmmword_1A3EF0, v31);
    }
    return v84;
  }
  if ( !strcmp(s1, "/cmenu") )
  {
    byte_1A44F4 ^= 1u;
    return v84;
  }
  if ( !strcmp(s1, "/btn") )
  {
    for ( m = (char *)(a2 + 5); *m == 32; ++m )
      ;
    if ( !*m || strlen(m) != 6 )
    {
      sub_6C73C("{C80018}> {FFFFFF}Usage: /btn [hex code: ex: C80018]");
      return v84;
    }
    sub_6C73C("{C80018}> {FFFFFF}Button Color is now {%s}this", m);
    if ( byte_1A4480 )
    {
      v48 = dword_1A41D8;
      v49 = strndup(m, 6u);
      sub_69AAC(v48, v49);
    }
    else
    {
      sub_63A74((float *)&v77, m);
      unk_1A3A88 = v77;
      unk_1A3A90 = v78[0];
    }
    v72 = strndup(m, 6u);
    v29 = strncpy(byte_1A452C, v72, 6u);
    goto LABEL_130;
  }
  if ( !strcmp(s1, "/rec") || !strcmp(s1, "/reconnect") )
  {
    if ( *(_DWORD *)(a1 + 536) == 5 )
    {
      ((void (__fastcall *)(int))((char *)&unk_143389 + dword_1A4408))(v74);
      (*(void (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 + 528) + 12))(*(_DWORD *)(a1 + 528), 2000, 0);
      v76 = a1;
      v45 = (std::thread *)sub_658D0(&v77, &v76);
      std::thread::detach(v45);
      std::thread::~thread((std::thread *)&v77);
      sub_6C73C("{C80018}> {FFFFFF}Reconnecting in {C80018}5  {FFFFFF}seconds...", v46);
    }
    else
    {
      sub_6C73C("{C80018}> {FFFFFF}Reconnecting...");
      *(_DWORD *)(a1 + 536) = 1;
    }
  }
  else
  {
    v8 = (unsigned __int8)byte_1A404C;
    __dmb(0xBu);
    if ( !(v8 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A404C) )
    {
      word_1A4048 = 23092;
      dword_1A4044 = 892938357;
      _cxa_atexit((void (*)(void *))sub_67198, &dword_1A4044, &off_110560);
      j___cxa_guard_release((__guard *)&byte_1A404C);
    }
    if ( HIBYTE(word_1A4048) )
    {
      HIBYTE(word_1A4048) ^= 0x5Au;
      LOBYTE(dword_1A4044) = dword_1A4044 ^ 0x5A;
      BYTE1(dword_1A4044) ^= 0x5Au;
      BYTE2(dword_1A4044) ^= 0x5Au;
      HIBYTE(dword_1A4044) ^= 0x5Au;
      LOBYTE(word_1A4048) = word_1A4048 ^ 0x5A;
    }
    if ( strcmp(s1, (const char *)&dword_1A4044) )
    {
      sub_86B90(&v77);
      v9 = _strlen_chk(a2, 0xFFFFFFFF);
      v76 = v9;
      sub_86D52(&v77, &v76, 32, 1);
      sub_86C1C(&v77, a2, v9);
      (*(void (__fastcall **)(_DWORD, void *, __int64 *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(dword_1A4434 + 528) + 108))(
        *(_DWORD *)(dword_1A4434 + 528),
        &unk_116E24,
        &v77,
        1,
        8,
        0,
        0,
        -1,
        0xFFFF,
        0xFFFF,
        0);
LABEL_26:
      sub_86BF8(&v77);
      return v84;
    }
    for ( n = a2 + 5; ; ++n )
    {
      v62 = *(unsigned __int8 *)n;
      if ( v62 != 32 )
        break;
    }
    v63 = v62 == 0;
    if ( *n )
      v63 = *n == 0;
    if ( !v63 )
    {
      v64 = sub_86B90(&v77);
      LOBYTE(v76) = -55;
      sub_86D52(v64, &v76, 8, 1);
      v65 = _strlen_chk(n, 0xFFFFFFFF);
      v76 = v65;
      sub_86D52(&v77, &v76, 32, 1);
      sub_86C1C(&v77, n, v65);
      (*(void (__fastcall **)(_DWORD, __int64 *, int, int, _DWORD))(**(_DWORD **)(dword_1A4434 + 528) + 32))(
        *(_DWORD *)(dword_1A4434 + 528),
        &v77,
        1,
        8,
        0);
      goto LABEL_26;
    }
  }
  return v84;
}


// ======================================================================
// ADDR: 0x65968
// SYMBOL: sub_65968
int __fastcall sub_65968(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  _DWORD *v5; // r10
  int v6; // r5
  _DWORD *v7; // r0
  bool v8; // zf
  int v10; // [sp+48h] [bp-170h] BYREF
  int v11; // [sp+4Ch] [bp-16Ch] BYREF
  int v12; // [sp+50h] [bp-168h] BYREF
  int v13; // [sp+54h] [bp-164h] BYREF
  int v14; // [sp+58h] [bp-160h] BYREF
  int v15; // [sp+5Ch] [bp-15Ch] BYREF
  int v16; // [sp+60h] [bp-158h] BYREF
  int v17; // [sp+64h] [bp-154h] BYREF
  int v18; // [sp+68h] [bp-150h] BYREF
  int v19; // [sp+6Ch] [bp-14Ch] BYREF
  int v20; // [sp+70h] [bp-148h] BYREF
  int v21; // [sp+74h] [bp-144h] BYREF
  int v22; // [sp+78h] [bp-140h] BYREF
  int v23; // [sp+7Ch] [bp-13Ch] BYREF
  unsigned __int16 v24; // [sp+82h] [bp-136h] BYREF
  _DWORD v25[2]; // [sp+84h] [bp-134h] BYREF
  int v26; // [sp+8Ch] [bp-12Ch]
  int v27; // [sp+198h] [bp-20h]

  _android_log_print(4, "SAMP_ORIG", "RPC: ScrSetPlayerAttachedObject");
  v2 = sub_86BA8((int)v25, *(void **)a1, *(_DWORD *)(a1 + 4) / 8 + 1);
  v20 = 0;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  v17 = 0;
  v14 = 0;
  v15 = 0;
  v12 = 0;
  v13 = 0;
  sub_86E30(v2, (int)&v24);
  sub_86E30((int)v25, (int)&v23);
  if ( v26 < v25[0] )
    ++v26;
  sub_86E30((int)v25, (int)&v22);
  sub_86E30((int)v25, (int)&v21);
  sub_86E30((int)v25, (int)&v18);
  sub_86E30((int)v25, (int)&v19);
  sub_86E30((int)v25, (int)&v20);
  sub_86E30((int)v25, (int)&v15);
  sub_86E30((int)v25, (int)&v16);
  sub_86E30((int)v25, (int)&v17);
  sub_86E30((int)v25, (int)&v12);
  sub_86E30((int)v25, (int)&v13);
  sub_86E30((int)v25, (int)&v14);
  sub_86E30((int)v25, (int)&v11);
  sub_86E30((int)v25, (int)&v10);
  v3 = **(_DWORD **)(dword_1A4434 + 944);
  if ( v3 )
  {
    if ( v24 == *(unsigned __int16 *)(v3 + 5024) )
    {
      v4 = sub_6C844();
      v5 = *(_DWORD **)(v4 + 8);
      v6 = v4;
      if ( !v5 )
      {
        v5 = (_DWORD *)operator new(0x2F0u);
        *v5 = &off_11056C;
        ((void (__fastcall *)(_DWORD *))(dword_1A4408 + 1063817))(v5);
        *(_DWORD *)(v6 + 8) = v5;
      }
      sub_65C20(v5);
    }
    else if ( v24 <= 0x3ECu && *(_BYTE *)(v3 + v24 + 4020) )
    {
      v7 = *(_DWORD **)(v3 + 4 * v24 + 4);
      v8 = v7 == 0;
      if ( v7 )
      {
        v7 = (_DWORD *)*v7;
        v8 = v7 == 0;
      }
      if ( !v8 )
        sub_65C20(v7[74]);
    }
  }
  sub_86BF8(v25);
  return v27;
}


// ======================================================================
// ADDR: 0x65e7c
// SYMBOL: sub_65E7C
_DWORD *sub_65E7C()
{
  _DWORD *result; // r0
  _DWORD *v1; // r4
  int v2; // r0
  bool v3; // zf
  _DWORD *v4; // r4
  int i; // r5
  bool v6; // zf

  off_1A3AA0();
  result = *(_DWORD **)(dword_1A4434 + 944);
  v1 = (_DWORD *)*result;
  if ( *result )
  {
    v2 = v1[1263];
    v3 = v2 == 0;
    if ( v2 )
      v3 = *(_DWORD *)(v2 + 28) == 0;
    if ( !v3 )
      ((void (*)(void))sub_671A4)();
    v4 = v1 + 1005;
    for ( i = 0; i != 1004; ++i )
    {
      result = (_DWORD *)v4[i - 1004];
      if ( result )
      {
        v6 = *((_BYTE *)v4 + i) == 0;
        if ( *((_BYTE *)v4 + i) )
        {
          result = (_DWORD *)*result;
          v6 = result == 0;
        }
        if ( !v6 )
        {
          result = (_DWORD *)result[74];
          if ( result )
            result = (_DWORD *)sub_671A4(result, (unsigned __int16)i);
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x65efc
// SYMBOL: sub_65EFC
int __fastcall sub_65EFC(int a1, int a2)
{
  int v3; // r3
  int v4; // r1
  unsigned __int16 v5; // r0
  int *v6; // r6
  int v7; // r6
  bool v8; // zf
  int v9; // r2
  char *v10; // r11
  int v11; // r0
  bool v12; // zf
  int v13; // r4
  int i; // r5
  char *v15; // r6
  char *v16; // r8
  int v17; // r0
  char *v18; // r1
  char *v19; // r1
  char *v20; // r1
  char *v21; // r0
  char *v22; // r0
  char *v23; // r3
  bool v24; // zf
  char *v25; // r3
  bool v26; // zf
  char *v27; // r3
  bool v28; // zf
  char *v29; // r1
  bool v30; // zf

  if ( a2 )
  {
    v3 = 0;
    v4 = *(_DWORD *)(a2 + 92);
    v5 = -1;
    do
    {
      v6 = *(int **)(**(_DWORD **)(dword_1A4434 + 944) + 4 + 4 * v3);
      if ( v6 )
      {
        v7 = *v6;
        v8 = v7 == 0;
        if ( v7 )
        {
          v7 = *(_DWORD *)(v7 + 296);
          v8 = v7 == 0;
        }
        if ( !v8 && *(_DWORD *)(v7 + 92) == v4 )
          v5 = v3;
      }
      ++v3;
    }
    while ( v3 != 1004 );
    v9 = v5;
    v10 = (char *)&unk_1176A0 + 572 * v5;
    v11 = (unsigned __int8)v10[520];
    v12 = v11 == 0;
    if ( !v10[520] )
      v12 = v10[521] == 0;
    if ( !v12 )
      goto LABEL_14;
    v23 = (char *)&unk_1176A0 + 572 * v9;
    v24 = v23[522] == 0;
    if ( !v23[522] )
      v24 = v23[523] == 0;
    if ( !v24 )
      goto LABEL_14;
    v25 = (char *)&unk_1176A0 + 572 * v9;
    v26 = v25[524] == 0;
    if ( !v25[524] )
      v26 = v25[525] == 0;
    if ( !v26 )
      goto LABEL_14;
    v27 = (char *)&unk_1176A0 + 572 * v9;
    v28 = v27[526] == 0;
    if ( !v27[526] )
      v28 = v27[527] == 0;
    if ( !v28 )
      goto LABEL_14;
    v29 = (char *)&unk_1176A0 + 572 * v9;
    v30 = v29[528] == 0;
    if ( !v29[528] )
      v30 = v29[529] == 0;
    if ( !v30 )
    {
LABEL_14:
      v13 = 8;
      for ( i = 0; ; ++i )
      {
        v15 = &v10[i];
        if ( v11 )
        {
          v16 = &v10[4 * i];
          v17 = *((_DWORD *)v16 + 133);
          if ( v17 )
          {
            v18 = &v10[v13];
            *(_QWORD *)v18 = 0LL;
            *((_QWORD *)v18 + 1) = 0LL;
            v19 = &v10[v13 + 16];
            *(_QWORD *)v19 = 0LL;
            *((_QWORD *)v19 + 1) = 0LL;
            *(_DWORD *)&v10[v13 + 32] = 0;
            (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 4))(v17);
            *((_DWORD *)v16 + 133) = 0;
          }
          v20 = &v10[v13 - 8];
          v21 = &v10[v13 + 8];
          *(_QWORD *)v21 = 0LL;
          *((_QWORD *)v21 + 1) = 0LL;
          v22 = &v10[v13 + 24];
          *(_QWORD *)v22 = 0LL;
          *((_QWORD *)v22 + 1) = 0LL;
          *(_QWORD *)v20 = 0LL;
          *((_QWORD *)v20 + 1) = 0LL;
          *(_DWORD *)&v10[v13 + 40] = 0;
          v15[520] = 0;
        }
        if ( i == 9 )
          break;
        v11 = (unsigned __int8)v15[521];
        v13 += 52;
      }
    }
  }
  return off_1A3AA4(a1, a2);
}


// ======================================================================
// ADDR: 0x66c4c
// SYMBOL: sub_66C4C
int __fastcall sub_66C4C(int result)
{
  *(_QWORD *)result = 0LL;
  *(_QWORD *)(result + 8) = 0LL;
  *(_DWORD *)(result + 19) = 0;
  *(_DWORD *)(result + 15) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x66c62
// SYMBOL: sub_66C62
_DWORD *__fastcall sub_66C62(_DWORD *result)
{
  result[1] = 0;
  *result = 0;
  *(_DWORD *)((char *)result + 11) = 0;
  *(_DWORD *)((char *)result + 7) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x66c72
// SYMBOL: sub_66C72
int __fastcall sub_66C72(int result)
{
  *(_DWORD *)(result + 65) = 0;
  *(_QWORD *)result = 0LL;
  *(_QWORD *)(result + 8) = 0LL;
  *(_QWORD *)(result + 16) = 0LL;
  *(_QWORD *)(result + 24) = 0LL;
  *(_QWORD *)(result + 32) = 0LL;
  *(_QWORD *)(result + 40) = 0LL;
  *(_QWORD *)(result + 48) = 0LL;
  *(_QWORD *)(result + 56) = 0LL;
  *(_DWORD *)(result + 61) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x66d6e
// SYMBOL: sub_66D6E
_QWORD *__fastcall sub_66D6E(_QWORD *result)
{
  *result = 0LL;
  result[1] = 0LL;
  result[2] = 0LL;
  result[3] = 0LL;
  *(_QWORD *)((char *)result + 27) = 0LL;
  *(_QWORD *)((char *)result + 35) = 0LL;
  return result;
}


// ======================================================================
// ADDR: 0x66e66
// SYMBOL: sub_66E66
_QWORD *__fastcall sub_66E66(_QWORD *result)
{
  *result = 0LL;
  result[1] = 0LL;
  result[2] = 0LL;
  result[3] = 0LL;
  *(_QWORD *)((char *)result + 28) = 0LL;
  *(_QWORD *)((char *)result + 36) = 0LL;
  return result;
}


// ======================================================================
// ADDR: 0x66e7c
// SYMBOL: sub_66E7C
int __fastcall sub_66E7C(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_QWORD *)result = 0LL;
  *(_QWORD *)(result + 8) = 0LL;
  *(_DWORD *)(result + 16) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x66e8e
// SYMBOL: sub_66E8E
_DWORD *__fastcall sub_66E8E(_DWORD *result)
{
  *(_DWORD *)((char *)result + 3) = 0;
  *result = 0;
  return result;
}


// ======================================================================
// ADDR: 0x66f0a
// SYMBOL: sub_66F0A
_QWORD *__fastcall sub_66F0A(_QWORD *result)
{
  *result = 0LL;
  result[1] = 0LL;
  *(_QWORD *)((char *)result + 12) = 0LL;
  *(_QWORD *)((char *)result + 20) = 0LL;
  return result;
}


// ======================================================================
// ADDR: 0x66f1c
// SYMBOL: sub_66F1C
int __fastcall sub_66F1C(int result)
{
  *(_QWORD *)result = 0LL;
  *(_QWORD *)(result + 8) = 0LL;
  *(_QWORD *)(result + 16) = 0LL;
  *(_QWORD *)(result + 24) = 0LL;
  *(_QWORD *)(result + 32) = 0LL;
  *(_QWORD *)(result + 40) = 0LL;
  *(_QWORD *)(result + 48) = 0LL;
  *(_QWORD *)(result + 56) = 0LL;
  *(_QWORD *)(result + 64) = 0LL;
  *(_QWORD *)(result + 72) = 0LL;
  *(_DWORD *)(result + 80) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x66f3c
// SYMBOL: sub_66F3C
_QWORD *__fastcall sub_66F3C(_QWORD *result)
{
  *result = 0LL;
  result[1] = 0LL;
  result[2] = 0LL;
  result[3] = 0LL;
  result[4] = 0LL;
  result[5] = 0LL;
  result[6] = 0LL;
  result[7] = 0LL;
  result[8] = 0LL;
  result[9] = 0LL;
  *(_QWORD *)((char *)result + 73) = 0LL;
  *(_QWORD *)((char *)result + 81) = 0LL;
  return result;
}


// ======================================================================
// ADDR: 0x66f5e
// SYMBOL: sub_66F5E
int __fastcall sub_66F5E(int result)
{
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)result = 0;
  *(_WORD *)(result + 8) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x6703a
// SYMBOL: sub_6703A
_QWORD *__fastcall sub_6703A(_QWORD *result)
{
  *result = 0LL;
  result[1] = 0LL;
  result[2] = 0LL;
  result[3] = 0LL;
  *(_QWORD *)((char *)result + 26) = 0LL;
  *(_QWORD *)((char *)result + 34) = 0LL;
  return result;
}


// ======================================================================
// ADDR: 0x67050
// SYMBOL: sub_67050
_QWORD *__fastcall sub_67050(_QWORD *result)
{
  *result = 0LL;
  result[1] = 0LL;
  result[2] = 0LL;
  result[3] = 0LL;
  result[4] = 0LL;
  result[5] = 0LL;
  *(_QWORD *)((char *)result + 47) = 0LL;
  *(_QWORD *)((char *)result + 55) = 0LL;
  return result;
}


// ======================================================================
// ADDR: 0x6712c
// SYMBOL: sub_6712C
int __fastcall sub_6712C(int result)
{
  *(_DWORD *)(result + 36) = 0;
  *(_QWORD *)result = 0LL;
  *(_QWORD *)(result + 8) = 0LL;
  *(_QWORD *)(result + 16) = 0LL;
  *(_QWORD *)(result + 24) = 0LL;
  *(_DWORD *)(result + 32) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x67142
// SYMBOL: sub_67142
int __fastcall sub_67142(int result)
{
  *(_QWORD *)result = 0LL;
  *(_QWORD *)(result + 8) = 0LL;
  *(_QWORD *)(result + 16) = 0LL;
  *(_QWORD *)(result + 24) = 0LL;
  *(_QWORD *)(result + 32) = 0LL;
  *(_QWORD *)(result + 40) = 0LL;
  *(_DWORD *)(result + 48) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x6715a
// SYMBOL: sub_6715A
int __fastcall sub_6715A(int result)
{
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)result = 0;
  *(_BYTE *)(result + 8) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x67164
// SYMBOL: sub_67164
_QWORD *__fastcall sub_67164(_QWORD *result)
{
  *result = 0LL;
  result[1] = 0LL;
  result[2] = 0LL;
  result[3] = 0LL;
  result[4] = 0LL;
  result[5] = 0LL;
  *(_QWORD *)((char *)result + 44) = 0LL;
  *(_QWORD *)((char *)result + 52) = 0LL;
  return result;
}


// ======================================================================
// ADDR: 0x6717e
// SYMBOL: sub_6717E
_QWORD *__fastcall sub_6717E(_QWORD *result)
{
  *result = 0LL;
  result[1] = 0LL;
  result[2] = 0LL;
  result[3] = 0LL;
  result[4] = 0LL;
  result[5] = 0LL;
  *(_QWORD *)((char *)result + 45) = 0LL;
  *(_QWORD *)((char *)result + 53) = 0LL;
  return result;
}


// ======================================================================
// ADDR: 0x67198
// SYMBOL: sub_67198
int __fastcall sub_67198(int result)
{
  *(_WORD *)(result + 4) = 0;
  *(_DWORD *)result = 0;
  return result;
}


// ======================================================================
// ADDR: 0x678fc
// SYMBOL: sub_678FC
int __fastcall sub_678FC(const void **a1)
{
  pthread_key_t *v2; // r0
  const void *v3; // r1
  pthread_key_t v4; // r0
  __int64 v5; // r0
  void *v6; // r0
  _DWORD v8[3]; // [sp+8h] [bp-18h] BYREF

  v2 = (pthread_key_t *)std::__thread_local_data(_stack_chk_guard);
  v3 = *a1;
  v4 = *v2;
  *a1 = 0;
  pthread_setspecific(v4, v3);
  v8[1] = 1;
  v8[0] = 705032704;
  std::this_thread::sleep_for(v8);
  v5 = *(_QWORD *)a1;
  *a1 = 0;
  *(_DWORD *)(HIDWORD(v5) + 536) = 1;
  if ( (_DWORD)v5 )
  {
    std::__thread_struct::~__thread_struct((std::__thread_struct *)v5);
    operator delete(v6);
  }
  operator delete(a1);
  return 0;
}


// ======================================================================
// ADDR: 0x679bc
// SYMBOL: sub_679BC
int *sub_679BC()
{
  int *v0; // r3
  char *v1; // r2
  int *result; // r0

  v0 = 0;
  do
  {
    v1 = (char *)&unk_1176A0 + (_DWORD)v0;
    v0 += 143;
    *((_QWORD *)v1 + 1) = 0LL;
    *((_QWORD *)v1 + 2) = 0LL;
    *((_QWORD *)v1 + 3) = 0LL;
    *((_QWORD *)v1 + 4) = 0LL;
    *((_DWORD *)v1 + 10) = 0;
    *(_QWORD *)(v1 + 60) = 0LL;
    *(_QWORD *)(v1 + 68) = 0LL;
    *(_QWORD *)(v1 + 76) = 0LL;
    *(_QWORD *)(v1 + 84) = 0LL;
    *((_DWORD *)v1 + 23) = 0;
    *((_QWORD *)v1 + 14) = 0LL;
    *((_QWORD *)v1 + 15) = 0LL;
    *((_QWORD *)v1 + 16) = 0LL;
    *((_QWORD *)v1 + 17) = 0LL;
    *((_DWORD *)v1 + 36) = 0;
    *(_QWORD *)(v1 + 164) = 0LL;
    *(_QWORD *)(v1 + 172) = 0LL;
    *(_QWORD *)(v1 + 180) = 0LL;
    *(_QWORD *)(v1 + 188) = 0LL;
    *((_DWORD *)v1 + 49) = 0;
    *((_QWORD *)v1 + 27) = 0LL;
    *((_QWORD *)v1 + 28) = 0LL;
    *((_QWORD *)v1 + 29) = 0LL;
    *((_QWORD *)v1 + 30) = 0LL;
    *((_DWORD *)v1 + 62) = 0;
    *(_QWORD *)(v1 + 268) = 0LL;
    *(_QWORD *)(v1 + 276) = 0LL;
    *(_QWORD *)(v1 + 284) = 0LL;
    *(_QWORD *)(v1 + 292) = 0LL;
    *((_DWORD *)v1 + 75) = 0;
    *((_QWORD *)v1 + 40) = 0LL;
    *((_QWORD *)v1 + 41) = 0LL;
    *((_QWORD *)v1 + 42) = 0LL;
    *((_QWORD *)v1 + 43) = 0LL;
    *((_DWORD *)v1 + 88) = 0;
    *(_QWORD *)(v1 + 372) = 0LL;
    *(_QWORD *)(v1 + 380) = 0LL;
    *(_QWORD *)(v1 + 388) = 0LL;
    *(_QWORD *)(v1 + 396) = 0LL;
    *((_DWORD *)v1 + 101) = 0;
    *((_QWORD *)v1 + 53) = 0LL;
    *((_QWORD *)v1 + 54) = 0LL;
    *((_QWORD *)v1 + 55) = 0LL;
    *((_QWORD *)v1 + 56) = 0LL;
    *((_DWORD *)v1 + 114) = 0;
    *(_QWORD *)(v1 + 476) = 0LL;
    *(_QWORD *)(v1 + 484) = 0LL;
    *(_QWORD *)(v1 + 492) = 0LL;
    *(_QWORD *)(v1 + 500) = 0LL;
    *((_DWORD *)v1 + 127) = 0;
  }
  while ( v0 != dword_8C350 );
  result = &dword_1A3A24;
  unk_1A3A88 = 0LL;
  unk_1A3A90 = 0LL;
  byte_1A3A10 = 0;
  dword_1A3A04 = 0;
  unk_1A3A08 = 0;
  dword_1A3A0C = 1109393408;
  byte_1A3A20 = 0;
  dword_1A3A14 = 0;
  unk_1A3A18 = 0;
  dword_1A3A1C = 1109393408;
  byte_1A3A30 = 0;
  dword_1A3A24 = 0;
  unk_1A3A28 = 0;
  dword_1A3A2C = 1109393408;
  return result;
}


// ======================================================================
// ADDR: 0x6ac7c
// SYMBOL: sub_6AC7C
int __fastcall sub_6AC7C(int result)
{
  *(_QWORD *)result = 0LL;
  *(_QWORD *)(result + 8) = 0LL;
  *(_DWORD *)(result + 17) = 0;
  *(_DWORD *)(result + 13) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x6ace0
// SYMBOL: sub_6ACE0
int __fastcall sub_6ACE0(int result)
{
  *(_QWORD *)result = 0LL;
  *(_QWORD *)(result + 8) = 0LL;
  *(_DWORD *)(result + 15) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x6acf2
// SYMBOL: sub_6ACF2
_DWORD *__fastcall sub_6ACF2(_DWORD *result)
{
  result[1] = 0;
  *result = 0;
  *(_DWORD *)((char *)result + 7) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x6adf8
// SYMBOL: sub_6ADF8
_QWORD *__fastcall sub_6ADF8(_QWORD *result)
{
  *result = 0LL;
  result[1] = 0LL;
  result[2] = 0LL;
  result[3] = 0LL;
  *(_QWORD *)((char *)result + 31) = 0LL;
  *(_QWORD *)((char *)result + 39) = 0LL;
  return result;
}


// ======================================================================
// ADDR: 0x6ae0e
// SYMBOL: sub_6AE0E
_QWORD *__fastcall sub_6AE0E(_QWORD *result)
{
  *result = 0LL;
  result[1] = 0LL;
  result[2] = 0LL;
  result[3] = 0LL;
  result[4] = 0LL;
  result[5] = 0LL;
  *(_QWORD *)((char *)result + 41) = 0LL;
  *(_QWORD *)((char *)result + 49) = 0LL;
  return result;
}


// ======================================================================
// ADDR: 0x6ae28
// SYMBOL: sub_6AE28
_QWORD *__fastcall sub_6AE28(_QWORD *result)
{
  *result = 0LL;
  result[1] = 0LL;
  result[2] = 0LL;
  result[3] = 0LL;
  *(_QWORD *)((char *)result + 30) = 0LL;
  *(_QWORD *)((char *)result + 38) = 0LL;
  return result;
}


// ======================================================================
// ADDR: 0x6ae3e
// SYMBOL: sub_6AE3E
_DWORD *__fastcall sub_6AE3E(_DWORD *result)
{
  result[1] = 0;
  *result = 0;
  return result;
}


// ======================================================================
// ADDR: 0x6aef0
// SYMBOL: sub_6AEF0
int sub_6AEF0()
{
  void *v0; // r0
  int v1; // r0
  pthread_t v3; // [sp+0h] [bp-20h] BYREF
  void (__noreturn *v4)(); // [sp+4h] [bp-1Ch] BYREF
  int v5; // [sp+8h] [bp-18h] BYREF
  int v6; // [sp+Ch] [bp-14h]
  int v7; // [sp+10h] [bp-10h]
  int v8; // [sp+14h] [bp-Ch]

  v4 = sub_6B36C;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  sigemptyset((sigset_t *)&v5);
  v6 = 4;
  sigaction(11, (const struct sigaction *)&v4, 0);
  dword_1A440C = (int)dlopen("/data/data/com.sampmobilerp.game/lib/libGTASA.so", 1);
  v0 = dlopen("/data/data/com.sampmobilerp.game/lib/libsamp.so", 1);
  dword_1A4410 = (int)v0;
  if ( dword_1A440C )
  {
    if ( v0 )
    {
      dword_1A4404 = sub_6B030("libGTASA.so");
      v1 = sub_6B030("libsamp.so");
      dword_1A4408 = v1;
      if ( dword_1A4404 )
      {
        if ( v1 )
        {
          if ( sub_5FE2C() )
          {
            _android_log_print(6, "SAMP_ORIG", "New .so file detected in the lib directory, crashing the app.");
          }
          else
          {
            sub_6C0E4();
            pthread_create(&v3, 0, (void *(*)(void *))sub_6C26C, 0);
          }
        }
        else
        {
          _android_log_print(6, "SAMP_ORIG", "SAMP library address not found!");
        }
      }
      else
      {
        _android_log_print(6, "SAMP_ORIG", "SA library address not found!");
      }
    }
    else
    {
      _android_log_print(6, "SAMP_ORIG", "Failed to open SAMP library!");
    }
  }
  else
  {
    _android_log_print(6, "SAMP_ORIG", "Failed to open SA library!");
  }
  return v8;
}


// ======================================================================
// ADDR: 0x6b36c
// SYMBOL: sub_6B36C
void __fastcall __noreturn sub_6B36C(int a1, int a2, _DWORD *a3)
{
  sub_5F840(a1, a2, a3);
  sub_5FD08(2, 31);
  exit(a1);
}


// ======================================================================
// ADDR: 0x6b3ac
// SYMBOL: sub_6B3AC
int __fastcall sub_6B3AC(__int64 *a1)
{
  int v1; // r5
  __int64 v3; // kr00_8
  size_t v4; // r2
  int v5; // r4
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r0
  int v10; // r4
  _DWORD v12[2]; // [sp+0h] [bp-120h] BYREF
  int v13; // [sp+8h] [bp-118h]
  int v14; // [sp+Ch] [bp-114h]
  int v15; // [sp+114h] [bp-Ch]

  _android_log_print(4, "SAMP_ORIG", "InitGame_hook()");
  off_1A4418(a1);
  v3 = *a1;
  v4 = (*((_DWORD *)a1 + 1) >> 3) + 1;
  v5 = 0;
  sub_86BA8((int)v12, (void *)v3, v4);
  v6 = v13;
  if ( v13 < v12[0] )
  {
    v7 = *(unsigned __int8 *)(v14 + (v13 >> 3));
    v8 = ++v13;
    v5 = (unsigned __int8)(v7 << (v6 & 7)) >> 7;
    if ( v6 + 1 < v12[0] )
    {
      v9 = *(unsigned __int8 *)(v14 + (v8 >> 3));
      v13 = v6 + 2;
      v1 = (unsigned __int8)(v9 << (v8 & 7)) >> 7;
    }
  }
  _android_log_print(4, "SAMP_ORIG", "bZoneNames: %d", v5);
  _android_log_print(4, "SAMP_ORIG", "bUseCJWalk: %d", (unsigned __int8)v1);
  v10 = dword_1A4404 + 5005050;
  if ( v1 << 24 )
  {
    sub_AFA08(dword_1A4404 + 5005050, byte_4A895, 4, 1);
  }
  else
  {
    sub_AFA08(dword_1A4404 + 5005050, byte_50E89, 2, 1);
    sub_AFA08(v10 + 2, byte_50E89, 2, 1);
  }
  sub_86BF8(v12);
  return v15;
}


// ======================================================================
// ADDR: 0x6b4e8
// SYMBOL: sub_6B4E8
int __fastcall sub_6B4E8(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  char v10; // [sp+4h] [bp-144Ch] BYREF
  unsigned __int8 v11; // [sp+5h] [bp-144Bh] BYREF
  __int16 v12; // [sp+6h] [bp-144Ah] BYREF
  char v13[8]; // [sp+8h] [bp-1448h] BYREF
  char v14[264]; // [sp+1010h] [bp-440h] BYREF
  char v15[264]; // [sp+1118h] [bp-338h] BYREF
  char dest[264]; // [sp+1220h] [bp-230h] BYREF
  _DWORD v17[74]; // [sp+1328h] [bp-128h] BYREF

  _android_log_print(4, "SAMP_ORIG", "DialogBox_hook()");
  sub_86BA8((int)v17, *(void **)a1, (*(_DWORD *)(a1 + 4) >> 3) + 1);
  sub_10967C((int)dest, 0x101u);
  sub_10967C((int)v15, 0x101u);
  sub_10967C((int)v14, 0x101u);
  sub_10967C((int)v13, 0x1001u);
  sub_86E30((int)v17, (int)&v12);
  sub_86E30((int)v17, (int)&v11);
  sub_86E30((int)v17, (int)&v10);
  sub_86DEE((int)v17, dest);
  sub_86E30((int)v17, (int)&v10);
  sub_86DEE((int)v17, v15);
  sub_86E30((int)v17, (int)&v10);
  v2 = sub_86DEE((int)v17, v14);
  v3 = sub_877B0(v2);
  sub_878FC(v3, v13, 4096, v17, 0);
  _android_log_print(4, "SAMP_ORIG", "wDialogID %d", v12);
  _android_log_print(4, "SAMP_ORIG", "byteDialogStyle %d", v11);
  _android_log_print(4, "SAMP_ORIG", "szTitle %s", dest);
  _android_log_print(4, "SAMP_ORIG", "szButton1 %s", v15);
  _android_log_print(4, "SAMP_ORIG", "szButton2 %s", v14);
  _android_log_print(4, "SAMP_ORIG", "szMessage %s", v13);
  if ( v12 <= -1 )
  {
    _android_log_print(4, "SAMP_ORIG", "Fix Blank Dialog");
    if ( byte_1A4480 )
    {
      v4 = sub_691D4();
      v5 = sub_6C808(v4);
      v6 = sub_6C8B8(*(_DWORD *)(v5 + 104));
      if ( !v6 )
        goto LABEL_9;
    }
    else
    {
      v7 = sub_6C808(0);
      v6 = sub_6C8B8(*(_DWORD *)(v7 + 104));
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = sub_6C808(v6);
    sub_6C90C(*(_DWORD *)(v8 + 104), 0);
    goto LABEL_9;
  }
  if ( sub_6C808(v12) )
    off_1A441C(a1);
LABEL_9:
  sub_86BF8(v17);
  return v17[69];
}


// ======================================================================
// ADDR: 0x6b78c
// SYMBOL: sub_6B78C
int __fastcall sub_6B78C(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r1
  int v5; // r1
  int v6; // r1
  char v8; // [sp+7h] [bp-121h] BYREF
  _BYTE v9[276]; // [sp+8h] [bp-120h] BYREF
  int v10; // [sp+11Ch] [bp-Ch]

  _android_log_print(4, "SAMP_ORIG", "ConnectionRejected_hook()");
  v2 = sub_86BA8((int)v9, *(void **)a1, (*(_DWORD *)(a1 + 4) >> 3) + 1);
  sub_86E30(v2, (int)&v8);
  switch ( v8 )
  {
    case 1:
      sub_6C95C("CONNECTION REJECTED: Incorrect Version.", v3);
      break;
    case 2:
      sub_6C95C("CONNECTION REJECTED: Unacceptable NickName", v3);
      sub_6C95C("Please choose another nick between and 3-20 characters", v4);
      sub_6C95C("Please use only a-z, A-Z, 0-9", v5);
      sub_6C95C("Use /quit to exit or press ESC and select Quit Game", v6);
      break;
    case 3:
      sub_6C95C("CONNECTION REJECTED: Bad mod version.", v3);
      break;
    case 4:
      sub_6C95C("CONNECTION REJECTED: Unable to allocate a player slot.", v3);
      break;
    default:
      break;
  }
  (*(void (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_1A4434 + 528) + 12))(
    *(_DWORD *)(dword_1A4434 + 528),
    500,
    0);
  sub_86BF8(v9);
  return v10;
}


// ======================================================================
// ADDR: 0x6b888
// SYMBOL: sub_6B888
int __fastcall sub_6B888(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r0
  unsigned __int8 v6; // [sp+7h] [bp-121h] BYREF
  _BYTE v7[276]; // [sp+8h] [bp-120h] BYREF
  int v8; // [sp+11Ch] [bp-Ch]

  v2 = sub_86BA8((int)v7, *(void **)a1, *(_DWORD *)(a1 + 4) / 8 + 1);
  sub_86E30(v2, (int)&v6);
  _android_log_print(4, "SAMP_ORIG", "RPC: SetPlayerSpecialAction(%u)", v6);
  v3 = **(_DWORD **)(dword_1A4434 + 944);
  if ( !v3 )
    _android_log_print(4, "SAMP_ORIG", "Invalid CPlayerPool Pointer!");
  if ( !*(_DWORD *)(*(_DWORD *)(v3 + 5052) + 28) )
    _android_log_print(4, "SAMP_ORIG", "Invalid CPlayerPed Pointer!");
  if ( v6 == 10 )
  {
    v4 = 10;
  }
  else
  {
    off_1A4424(a1);
    v4 = v6;
  }
  sub_60F50(v4);
  sub_86BF8(v7);
  return v8;
}


// ======================================================================
// ADDR: 0x6b978
// SYMBOL: sub_6B978
int __fastcall sub_6B978(int a1)
{
  int v2; // r1
  char v3; // r0
  int v4; // r1
  _DWORD v6[2]; // [sp+0h] [bp-120h] BYREF
  int v7; // [sp+8h] [bp-118h]
  int v8; // [sp+Ch] [bp-114h]
  int v9; // [sp+114h] [bp-Ch]

  _android_log_print(4, "SAMP_ORIG", "RPC: ScrDisableRemoteVehicleCollisions");
  sub_86BA8((int)v6, *(void **)a1, (*(_DWORD *)(a1 + 4) >> 3) + 1);
  LOBYTE(v2) = v6[0];
  v3 = v7;
  if ( v7 < v6[0] )
  {
    v4 = *(unsigned __int8 *)(v8 + (v7++ >> 3));
    v2 = (unsigned __int8)(v4 << (v3 & 7)) >> 7;
  }
  byte_117634 = v2;
  sub_86BF8(v6);
  return v9;
}


// ======================================================================
// ADDR: 0x6ba00
// SYMBOL: sub_6BA00
int __fastcall sub_6BA00(int a1)
{
  char v2; // r1
  char v4; // [sp+13h] [bp-235h] BYREF
  float v5; // [sp+14h] [bp-234h] BYREF
  float v6; // [sp+18h] [bp-230h] BYREF
  int v7; // [sp+1Ch] [bp-22Ch] BYREF
  int v8; // [sp+20h] [bp-228h] BYREF
  char v9; // [sp+27h] [bp-221h] BYREF
  char dest[256]; // [sp+28h] [bp-220h] BYREF
  _BYTE v11[276]; // [sp+128h] [bp-120h] BYREF
  int v12; // [sp+23Ch] [bp-Ch]

  _android_log_print(4, "SAMP_ORIG", "RPC: ScrPlayAudioStream");
  sub_86BA8((int)v11, *(void **)a1, (*(_DWORD *)(a1 + 4) >> 3) + 1);
  sub_10967C((int)dest, 0x100u);
  sub_86E30((int)v11, (int)&v9);
  sub_86DEE((int)v11, dest);
  sub_86E30((int)v11, (int)&v8);
  sub_86E30((int)v11, (int)&v7);
  sub_86E30((int)v11, (int)&v6);
  sub_86E30((int)v11, (int)&v5);
  sub_86E30((int)v11, (int)&v4);
  sub_6C95C("[Audio Stream]: %s", dest);
  if ( dword_1A4430 )
  {
    v2 = v4;
    if ( v4 )
      v2 = 1;
    sub_60194((_BYTE *)dword_1A4430, dest, v8, v7, v6, v5, v2);
  }
  sub_86BF8(v11);
  return v12;
}


// ======================================================================
// ADDR: 0x6bb0c
// SYMBOL: sub_6BB0C
int sub_6BB0C()
{
  int result; // r0

  _android_log_print(4, "SAMP_ORIG", "RPC: ScrStopAudioStream");
  result = dword_1A4430;
  if ( dword_1A4430 )
    return sub_60318((unsigned __int8 *)dword_1A4430, 0);
  return result;
}


// ======================================================================
// ADDR: 0x6bb40
// SYMBOL: sub_6BB40
int __fastcall sub_6BB40(unsigned int a1)
{
  int v1; // r8
  int v3; // r0
  int v4; // r5
  int v5; // r0
  char *v6; // r1
  int v7; // r0
  char *v8; // r1
  int v9; // r2
  unsigned int v10; // r1
  int v11; // s4
  float v12; // s0
  float v13; // s2
  char *v14; // r4
  int v15; // r5
  int v16; // r6
  int v17; // r2
  char *v18; // r3
  float v20[4]; // [sp+8h] [bp-160h] BYREF
  _DWORD v21[2]; // [sp+18h] [bp-150h] BYREF
  void *v22; // [sp+20h] [bp-148h]
  _DWORD v23[2]; // [sp+28h] [bp-140h] BYREF
  void *v24; // [sp+30h] [bp-138h]
  unsigned __int8 v25; // [sp+3Bh] [bp-12Dh] BYREF
  unsigned __int16 v26; // [sp+3Ch] [bp-12Ch] BYREF
  unsigned __int16 v27; // [sp+3Eh] [bp-12Ah] BYREF
  _BYTE v28[276]; // [sp+40h] [bp-128h] BYREF
  int v29; // [sp+154h] [bp-14h]

  _android_log_print(4, "SAMP_ORIG", "RPC: ScrDeathMessage");
  v3 = sub_86BA8((int)v28, *(void **)a1, (*(_DWORD *)(a1 + 4) >> 3) + 1);
  sub_86E30(v3, (int)&v26);
  sub_86E30((int)v28, (int)&v27);
  sub_86E30((int)v28, (int)&v25);
  v23[0] = 0;
  v23[1] = 0;
  v21[0] = 0;
  v24 = 0;
  v21[1] = 0;
  v22 = 0;
  if ( !dword_1A4434 )
    goto LABEL_26;
  v4 = **(_DWORD **)(dword_1A4434 + 944);
  if ( !v4 )
    goto LABEL_20;
  if ( *(unsigned __int16 *)(v4 + 5024) == v27 )
  {
    std::string::assign((int)v21, (char *)(v4 + 5026));
    v5 = ((int (__fastcall *)(_DWORD))(dword_1A4408 + 1315837))(*(_DWORD *)(v4 + 5052));
  }
  else
  {
    if ( v27 > 0x3ECu || !*(_BYTE *)(v4 + v27 + 4020) )
      goto LABEL_12;
    v6 = *(char **)(v4 + 4 * v27 + 4);
    if ( v6 )
      v6 += 4;
    std::string::assign((int)v21, v6);
    v5 = ((int (__fastcall *)(_DWORD))(dword_1A4408 + 1352707))(**(_DWORD **)(v4 + 4 * v27 + 4));
  }
  a1 = v5;
LABEL_12:
  if ( *(unsigned __int16 *)(v4 + 5024) == v26 )
  {
    std::string::assign((int)v23, (char *)(v4 + 5026));
    v7 = ((int (__fastcall *)(_DWORD))(dword_1A4408 + 1315837))(*(_DWORD *)(v4 + 5052));
  }
  else
  {
    if ( v26 > 0x3ECu || !*(_BYTE *)(v4 + v26 + 4020) )
      goto LABEL_20;
    v8 = *(char **)(v4 + 4 * v26 + 4);
    if ( v8 )
      v8 += 4;
    std::string::assign((int)v23, v8);
    v7 = ((int (__fastcall *)(_DWORD))(dword_1A4408 + 1352707))(**(_DWORD **)(v4 + 4 * v26 + 4));
  }
  v1 = v7;
LABEL_20:
  v9 = BYTE2(a1);
  v10 = HIBYTE(a1);
  v11 = HIBYTE(a1);
  v12 = (float)BYTE1(a1);
  v13 = (float)BYTE2(a1);
  v14 = (char *)v22;
  v15 = LOBYTE(v21[0]);
  v16 = *(_DWORD *)(dword_1A442C + 132);
  v20[3] = 1.0;
  v20[2] = v12 * 0.0039216;
  v20[1] = v13 * 0.0039216;
  v20[0] = (float)v11 * 0.0039216;
  v17 = sub_88A34(v20, v10, v9);
  v18 = (char *)v24;
  if ( !(v15 << 31) )
    v14 = (char *)v21 + 1;
  if ( !(LOBYTE(v23[0]) << 31) )
    v18 = (char *)v23 + 1;
  sub_75370(v16, v14, v17, v18, v1, v25);
  if ( LOBYTE(v21[0]) << 31 )
    operator delete(v22);
LABEL_26:
  if ( LOBYTE(v23[0]) << 31 )
    operator delete(v24);
  sub_86BF8(v28);
  return v29;
}


// ======================================================================
// ADDR: 0x6bdcc
// SYMBOL: sub_6BDCC
int __fastcall sub_6BDCC(int a1)
{
  _android_log_print(4, "SAMP_ORIG", "RegisterRPCs_hook()");
  off_1A4428(a1);
  (*(void (__fastcall **)(int, void *, int (__fastcall *)(int)))(*(_DWORD *)a1 + 92))(a1, &unk_116E44, sub_6B978);
  (*(void (__fastcall **)(int, void *, int (__fastcall *)(int)))(*(_DWORD *)a1 + 92))(a1, &unk_116E34, sub_6BA00);
  (*(void (__fastcall **)(int, void *, int (*)()))(*(_DWORD *)a1 + 92))(a1, &unk_116E38, sub_6BB0C);
  return (*(int (__fastcall **)(int, void *, int (__fastcall *)(unsigned int)))(*(_DWORD *)a1 + 92))(
           a1,
           &unk_116E30,
           sub_6BB40);
}


// ======================================================================
// ADDR: 0x6c26c
// SYMBOL: sub_6C26C
void __noreturn sub_6C26C()
{
  int i; // r0

  for ( i = dword_1A4404; *(_DWORD *)(i + 11110344) != 7; i = dword_1A4404 )
    usleep(0x1F4u);
  _android_log_print(4, "SAMP_ORIG", "Game storage: %s", (const char *)(i + 7170172));
  sub_684C8();
  pthread_exit(0);
}


// ======================================================================
// ADDR: 0x6f070
// SYMBOL: sub_6F070
bool __fastcall sub_6F070(_DWORD *a1)
{
  return *a1 != 0;
}


// ======================================================================
// ADDR: 0x71d1c
// SYMBOL: sub_71D1C
void __noreturn sub_71D1C()
{
  __debugbreak();
}


// ======================================================================
// ADDR: 0x72dfe
// SYMBOL: sub_72DFE
_DWORD *__fastcall sub_72DFE(_DWORD *result)
{
  *result = 0;
  return result;
}


// ======================================================================
// ADDR: 0x737e4
// SYMBOL: sub_737E4
void sub_737E4()
{
  __int64 v0; // r0

  v0 = sub_7C3B4();
  operator delete((void *)v0, (const std::nothrow_t *)HIDWORD(v0));
}


// ======================================================================
// ADDR: 0x738c4
// SYMBOL: sub_738C4
_DWORD *__fastcall sub_738C4(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_11062C;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x738e4
// SYMBOL: sub_738E4
int __fastcall sub_738E4(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_11062C;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x73900
// SYMBOL: sub_73900
int __fastcall sub_73900(int result)
{
  bool v1; // zf

  v1 = byte_1A44C8 == 0;
  if ( byte_1A44C8 )
  {
    result = *(unsigned __int8 *)(*(_DWORD *)(result + 4) + 8);
    v1 = result == 0;
  }
  if ( !v1 )
  {
    result = dword_1A44CC;
    if ( !dword_1A44CC )
    {
      result = sub_74070(1);
      dword_1A44CC = 1;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x73938
// SYMBOL: sub_73938
int __fastcall sub_73938(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN11ButtonPanelC1EvE3$_0" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x73950
// SYMBOL: sub_73950
int **sub_73950()
{
  return &`typeinfo for'ButtonPanel::ButtonPanel(void)::$_0;
}


// ======================================================================
// ADDR: 0x73960
// SYMBOL: sub_73960
_DWORD *sub_73960()
{
  _DWORD *result; // r0

  result = (_DWORD *)operator new(8u);
  *result = &off_110674;
  return result;
}


// ======================================================================
// ADDR: 0x73978
// SYMBOL: sub_73978
_UNKNOWN **__fastcall sub_73978(int a1, _DWORD *a2)
{
  _UNKNOWN **result; // r0

  result = &off_110674;
  *a2 = &off_110674;
  return result;
}


// ======================================================================
// ADDR: 0x739a0
// SYMBOL: sub_739A0
int __fastcall sub_739A0(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN11ButtonPanelC1EvE3$_1" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x739b8
// SYMBOL: sub_739B8
int **sub_739B8()
{
  return &`typeinfo for'ButtonPanel::ButtonPanel(void)::$_1;
}


// ======================================================================
// ADDR: 0x739c8
// SYMBOL: sub_739C8
_DWORD *sub_739C8()
{
  _DWORD *result; // r0

  result = (_DWORD *)operator new(8u);
  *result = &off_1106B4;
  return result;
}


// ======================================================================
// ADDR: 0x739e0
// SYMBOL: sub_739E0
_UNKNOWN **__fastcall sub_739E0(int a1, _DWORD *a2)
{
  _UNKNOWN **result; // r0

  result = &off_1106B4;
  *a2 = &off_1106B4;
  return result;
}


// ======================================================================
// ADDR: 0x73a08
// SYMBOL: sub_73A08
int __fastcall sub_73A08(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN11ButtonPanelC1EvE3$_2" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x73a20
// SYMBOL: sub_73A20
int **sub_73A20()
{
  return &`typeinfo for'ButtonPanel::ButtonPanel(void)::$_2;
}


// ======================================================================
// ADDR: 0x73a30
// SYMBOL: sub_73A30
_DWORD *__fastcall sub_73A30(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_1106F4;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x73a50
// SYMBOL: sub_73A50
int __fastcall sub_73A50(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_1106F4;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x73a6c
// SYMBOL: sub_73A6C
int __fastcall sub_73A6C(int a1)
{
  int result; // r0
  bool v3; // zf
  int v4; // r5
  int v5; // r8
  bool v6; // zf

  result = (unsigned __int8)byte_1A44C8;
  v3 = byte_1A44C8 == 0;
  if ( byte_1A44C8 )
  {
    result = *(unsigned __int8 *)(*(_DWORD *)(a1 + 4) + 8);
    v3 = result == 0;
  }
  if ( !v3 )
  {
    v4 = *(_DWORD *)(dword_1A4408 + 2350836);
    result = *(_DWORD *)(v4 + 944);
    v5 = *(_DWORD *)(result + 24);
    if ( dword_1A44CC )
    {
      result = sub_74070(0);
      dword_1A44CC = 0;
    }
    if ( v4 )
    {
      result = *(unsigned __int8 *)(*(_DWORD *)(a1 + 4) + 8);
      v6 = result == 0;
      if ( *(_BYTE *)(*(_DWORD *)(a1 + 4) + 8) )
        v6 = v5 == 0;
      if ( !v6 )
        return ((int (__fastcall *)(int, _DWORD, _DWORD))(dword_1A4408 + 1373309))(v5, 0, 0);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x73afc
// SYMBOL: sub_73AFC
int __fastcall sub_73AFC(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN11ButtonPanelC1EvE3$_3" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x73b14
// SYMBOL: sub_73B14
int **sub_73B14()
{
  return &`typeinfo for'ButtonPanel::ButtonPanel(void)::$_3;
}


// ======================================================================
// ADDR: 0x73b24
// SYMBOL: sub_73B24
_DWORD *__fastcall sub_73B24(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_110734;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x73b44
// SYMBOL: sub_73B44
int __fastcall sub_73B44(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_110734;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x73b88
// SYMBOL: sub_73B88
int __fastcall sub_73B88(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN11ButtonPanelC1EvE3$_4" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x73ba0
// SYMBOL: sub_73BA0
int **sub_73BA0()
{
  return &`typeinfo for'ButtonPanel::ButtonPanel(void)::$_4;
}


// ======================================================================
// ADDR: 0x73bb0
// SYMBOL: sub_73BB0
_DWORD *__fastcall sub_73BB0(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_110774;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x73bd0
// SYMBOL: sub_73BD0
int __fastcall sub_73BD0(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_110774;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x73c14
// SYMBOL: sub_73C14
int __fastcall sub_73C14(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN11ButtonPanelC1EvE3$_5" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x73c2c
// SYMBOL: sub_73C2C
int **sub_73C2C()
{
  return &`typeinfo for'ButtonPanel::ButtonPanel(void)::$_5;
}


// ======================================================================
// ADDR: 0x73c3c
// SYMBOL: sub_73C3C
_DWORD *__fastcall sub_73C3C(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_1107B4;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x73c5c
// SYMBOL: sub_73C5C
int __fastcall sub_73C5C(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_1107B4;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x73cac
// SYMBOL: sub_73CAC
int __fastcall sub_73CAC(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN11ButtonPanelC1EvE3$_6" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x73cc4
// SYMBOL: sub_73CC4
int **sub_73CC4()
{
  return &`typeinfo for'ButtonPanel::ButtonPanel(void)::$_6;
}


// ======================================================================
// ADDR: 0x73cd4
// SYMBOL: sub_73CD4
_DWORD *__fastcall sub_73CD4(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_1107F4;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x73cf4
// SYMBOL: sub_73CF4
int __fastcall sub_73CF4(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_1107F4;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x73d38
// SYMBOL: sub_73D38
int __fastcall sub_73D38(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN11ButtonPanelC1EvE3$_7" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x73d50
// SYMBOL: sub_73D50
int **sub_73D50()
{
  return &`typeinfo for'ButtonPanel::ButtonPanel(void)::$_7;
}


// ======================================================================
// ADDR: 0x73d60
// SYMBOL: sub_73D60
_DWORD *__fastcall sub_73D60(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_110834;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x73d80
// SYMBOL: sub_73D80
int __fastcall sub_73D80(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_110834;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x73dc4
// SYMBOL: sub_73DC4
int __fastcall sub_73DC4(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN11ButtonPanelC1EvE3$_8" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x73ddc
// SYMBOL: sub_73DDC
int **sub_73DDC()
{
  return &`typeinfo for'ButtonPanel::ButtonPanel(void)::$_8;
}


// ======================================================================
// ADDR: 0x73dec
// SYMBOL: sub_73DEC
_DWORD *__fastcall sub_73DEC(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_110874;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x73e0c
// SYMBOL: sub_73E0C
int __fastcall sub_73E0C(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_110874;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x73e50
// SYMBOL: sub_73E50
int __fastcall sub_73E50(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN11ButtonPanelC1EvE3$_9" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x73e68
// SYMBOL: sub_73E68
int **sub_73E68()
{
  return &`typeinfo for'ButtonPanel::ButtonPanel(void)::$_9;
}


// ======================================================================
// ADDR: 0x73e78
// SYMBOL: sub_73E78
_DWORD *__fastcall sub_73E78(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_1108B4;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x73e98
// SYMBOL: sub_73E98
int __fastcall sub_73E98(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_1108B4;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x73edc
// SYMBOL: sub_73EDC
int __fastcall sub_73EDC(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN11ButtonPanelC1EvE4$_10" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x73ef4
// SYMBOL: sub_73EF4
int **sub_73EF4()
{
  return &`typeinfo for'ButtonPanel::ButtonPanel(void)::$_10;
}


// ======================================================================
// ADDR: 0x73f08
// SYMBOL: sub_73F08
_DWORD *__fastcall sub_73F08(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_1108F4;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x73f28
// SYMBOL: sub_73F28
int __fastcall sub_73F28(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_1108F4;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x73f44
// SYMBOL: sub_73F44
int __fastcall sub_73F44(int result)
{
  bool v1; // zf

  v1 = byte_1A44C8 == 0;
  if ( byte_1A44C8 )
  {
    result = *(unsigned __int8 *)(*(_DWORD *)(result + 4) + 8);
    v1 = result == 0;
  }
  if ( !v1 )
  {
    result = **(_DWORD **)(*(_DWORD *)(dword_1A4408 + 2350836) + 944);
    if ( result )
    {
      result = *(_DWORD *)(result + 5052);
      if ( result )
        return ((int (*)(void))(dword_1A4408 + 1315021))();
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x73f9c
// SYMBOL: sub_73F9C
int __fastcall sub_73F9C(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN11ButtonPanelC1EvE4$_11" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x73fb4
// SYMBOL: sub_73FB4
int **sub_73FB4()
{
  return &`typeinfo for'ButtonPanel::ButtonPanel(void)::$_11;
}


// ======================================================================
// ADDR: 0x73fc0
// SYMBOL: sub_73FC0
int sub_73FC0()
{
  int result; // r0

  result = sub_6C880();
  dword_1A44D8 = result;
  return result;
}


// ======================================================================
// ADDR: 0x74cd4
// SYMBOL: sub_74CD4
int __fastcall sub_74CD4(int a1)
{
  int v1; // r2
  int v2; // r6
  int v3; // r4
  int v4; // r5

  v1 = *(unsigned __int8 *)(a1 + 36);
  *(_DWORD *)a1 = &off_11094C;
  *(_DWORD *)(a1 + 4) = &off_110A30;
  v2 = a1 + 4;
  *(_DWORD *)(a1 - 8) = &off_110938;
  v3 = a1 - 8;
  *(_DWORD *)(a1 + 56) = &off_110960;
  v4 = a1 + 56;
  if ( v1 << 31 )
    operator delete(*(void **)(a1 + 44));
  std::streambuf::~streambuf(v2);
  std::iostream::~basic_iostream(v3, off_11096C);
  return sub_10C164(v4);
}


// ======================================================================
// ADDR: 0x74d44
// SYMBOL: sub_74D44
int __fastcall sub_74D44(_DWORD *a1)
{
  char *v1; // r4
  int v2; // r0

  v1 = (char *)a1 + *(_DWORD *)(*a1 - 12);
  *(_DWORD *)v1 = &off_110938;
  *((_DWORD *)v1 + 2) = &off_11094C;
  v2 = (unsigned __int8)v1[44];
  *((_DWORD *)v1 + 3) = &off_110A30;
  *((_DWORD *)v1 + 16) = &off_110960;
  if ( v2 << 31 )
    operator delete(*((void **)v1 + 13));
  std::streambuf::~streambuf(v1 + 12);
  std::iostream::~basic_iostream(v1, off_11096C);
  return sub_10C164(v1 + 64);
}


// ======================================================================
// ADDR: 0x74dbc
// SYMBOL: sub_74DBC
void __fastcall sub_74DBC(unsigned __int8 *a1)
{
  int v2; // r2
  char *v3; // r5
  const std::nothrow_t *v4; // r1

  v2 = a1[44];
  *((_DWORD *)a1 + 16) = &off_110960;
  *((_DWORD *)a1 + 2) = &off_11094C;
  *((_DWORD *)a1 + 3) = &off_110A30;
  v3 = (char *)(a1 + 12);
  *(_DWORD *)a1 = &off_110938;
  if ( v2 << 31 )
    operator delete(*((void **)a1 + 13));
  std::streambuf::~streambuf(v3);
  std::iostream::~basic_iostream(a1, off_11096C);
  std::ios::~ios(a1 + 64);
  operator delete(a1, v4);
}


// ======================================================================
// ADDR: 0x74e28
// SYMBOL: sub_74E28
void __fastcall sub_74E28(int a1)
{
  int v1; // r2
  int v2; // r6
  void *v3; // r4
  int v4; // r5
  const std::nothrow_t *v5; // r1

  v1 = *(unsigned __int8 *)(a1 + 36);
  *(_DWORD *)a1 = &off_11094C;
  *(_DWORD *)(a1 + 4) = &off_110A30;
  v2 = a1 + 4;
  *(_DWORD *)(a1 - 8) = &off_110938;
  v3 = (void *)(a1 - 8);
  *(_DWORD *)(a1 + 56) = &off_110960;
  v4 = a1 + 56;
  if ( v1 << 31 )
    operator delete(*(void **)(a1 + 44));
  std::streambuf::~streambuf(v2);
  std::iostream::~basic_iostream(v3, off_11096C);
  std::ios::~ios(v4);
  operator delete(v3, v5);
}


// ======================================================================
// ADDR: 0x74ea0
// SYMBOL: sub_74EA0
void __fastcall sub_74EA0(_DWORD *a1)
{
  unsigned __int8 *v1; // r4
  int v2; // r0
  const std::nothrow_t *v3; // r1

  v1 = (unsigned __int8 *)a1 + *(_DWORD *)(*a1 - 12);
  *(_DWORD *)v1 = &off_110938;
  *((_DWORD *)v1 + 2) = &off_11094C;
  v2 = v1[44];
  *((_DWORD *)v1 + 3) = &off_110A30;
  *((_DWORD *)v1 + 16) = &off_110960;
  if ( v2 << 31 )
    operator delete(*((void **)v1 + 13));
  std::streambuf::~streambuf(v1 + 12);
  std::iostream::~basic_iostream(v1, off_11096C);
  std::ios::~ios(v1 + 64);
  operator delete(v1, v3);
}


// ======================================================================
// ADDR: 0x74f1c
// SYMBOL: sub_74F1C
int __fastcall sub_74F1C(int a1)
{
  int v2; // r1

  v2 = *(unsigned __int8 *)(a1 + 32);
  *(_DWORD *)a1 = &off_110A30;
  if ( v2 << 31 )
    operator delete(*(void **)(a1 + 40));
  return sub_10C170(a1);
}


// ======================================================================
// ADDR: 0x74f48
// SYMBOL: sub_74F48
void __fastcall sub_74F48(int a1)
{
  int v2; // r1
  void *v3; // r0
  const std::nothrow_t *v4; // r1

  v2 = *(unsigned __int8 *)(a1 + 32);
  *(_DWORD *)a1 = &off_110A30;
  if ( v2 << 31 )
    operator delete(*(void **)(a1 + 40));
  v3 = (void *)std::streambuf::~streambuf(a1);
  operator delete(v3, v4);
}


// ======================================================================
// ADDR: 0x74f78
// SYMBOL: sub_74F78
_DWORD *__fastcall sub_74F78(_DWORD *result, int a2, __int64 a3, int a4, char a5)
{
  unsigned int v5; // r5
  int v6; // r12
  unsigned int v7; // r10
  bool v8; // zf
  int v9; // r6
  int v10; // r8
  int v11; // r6
  int v12; // r9
  __int64 v13; // r2
  int v14; // r5

  v5 = *(_DWORD *)(a2 + 24);
  v6 = -1;
  v7 = *(_DWORD *)(a2 + 44);
  if ( v7 < v5 )
  {
    *(_DWORD *)(a2 + 44) = v5;
    v7 = v5;
  }
  if ( (a5 & 0x18) == 0 )
    goto LABEL_25;
  v8 = a4 == 1;
  if ( a4 == 1 )
    v8 = (a5 & 0x18) == 24;
  if ( v8 )
    goto LABEL_25;
  if ( !v7 )
  {
    v10 = 0;
    if ( a4 )
      goto LABEL_11;
LABEL_16:
    v11 = 0;
    v12 = 0;
    goto LABEL_20;
  }
  v9 = *(_DWORD *)(a2 + 40);
  if ( !(*(unsigned __int8 *)(a2 + 32) << 31) )
    v9 = a2 + 33;
  v10 = v7 - v9;
  if ( !a4 )
    goto LABEL_16;
LABEL_11:
  if ( a4 == 2 )
  {
    v12 = v10 >> 31;
    v11 = v10;
  }
  else
  {
    if ( a4 != 1 )
    {
LABEL_25:
      v14 = -1;
      goto LABEL_26;
    }
    if ( (a5 & 8) != 0 )
      v11 = *(_DWORD *)(a2 + 12) - *(_DWORD *)(a2 + 8);
    else
      v11 = v5 - *(_DWORD *)(a2 + 20);
    v12 = v11 >> 31;
  }
LABEL_20:
  v13 = a3 + __PAIR64__(v12, v11);
  if ( v13 < 0 || v10 < v13 )
    goto LABEL_25;
  if ( !v13 )
    goto LABEL_29;
  if ( (a5 & 8) != 0 && !*(_DWORD *)(a2 + 12) )
    goto LABEL_25;
  if ( (a5 & 0x10) == 0 || (v8 = v5 == 0, v14 = -1, !v8) )
  {
LABEL_29:
    if ( (a5 & 8) != 0 )
    {
      *(_DWORD *)(a2 + 12) = *(_DWORD *)(a2 + 8) + v13;
      *(_DWORD *)(a2 + 16) = v7;
    }
    if ( (a5 & 0x10) != 0 )
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(a2 + 20) + v13;
    v14 = HIDWORD(v13);
    v6 = v13;
  }
LABEL_26:
  result[2] = v6;
  result[3] = v14;
  *result = 0;
  return result;
}


// ======================================================================
// ADDR: 0x75068
// SYMBOL: sub_75068
int __fastcall sub_75068(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return (*(int (__fastcall **)(int, int, int, int, _DWORD, int))(*(_DWORD *)a2 + 16))(a1, a2, a5, a6, 0, a7);
}


// ======================================================================
// ADDR: 0x7508a
// SYMBOL: sub_7508A
int __fastcall sub_7508A(int a1)
{
  unsigned int v1; // r2
  unsigned int v2; // r1
  unsigned int v3; // r2
  unsigned __int8 *v4; // r0

  v1 = *(_DWORD *)(a1 + 24);
  v2 = *(_DWORD *)(a1 + 44);
  if ( v2 < v1 )
  {
    *(_DWORD *)(a1 + 44) = v1;
    v2 = v1;
  }
  if ( (*(_BYTE *)(a1 + 48) & 8) == 0 )
    return -1;
  v3 = *(_DWORD *)(a1 + 16);
  if ( v3 < v2 )
  {
    *(_DWORD *)(a1 + 16) = v2;
    v3 = v2;
  }
  v4 = *(unsigned __int8 **)(a1 + 12);
  if ( (unsigned int)v4 < v3 )
    return *v4;
  else
    return -1;
}


// ======================================================================
// ADDR: 0x750b8
// SYMBOL: sub_750B8
int __fastcall sub_750B8(int a1, int a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r2
  __int64 v4; // kr00_8
  int result; // r0

  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_DWORD *)(a1 + 44);
  if ( v3 < v2 )
  {
    *(_DWORD *)(a1 + 44) = v2;
    v3 = v2;
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)v4 >= HIDWORD(v4) )
    return -1;
  if ( a2 == -1 )
  {
    *(_DWORD *)(a1 + 12) = HIDWORD(v4) - 1;
    *(_DWORD *)(a1 + 16) = v3;
    return 0;
  }
  else if ( (*(_BYTE *)(a1 + 48) & 0x10) != 0 || *(unsigned __int8 *)(HIDWORD(v4) - 1) == (unsigned __int8)a2 )
  {
    *(_DWORD *)(a1 + 12) = HIDWORD(v4) - 1;
    *(_DWORD *)(a1 + 16) = v3;
    result = a2;
    *(_BYTE *)(HIDWORD(v4) - 1) = a2;
  }
  else
  {
    return -1;
  }
  return result;
}


// ======================================================================
// ADDR: 0x75110
// SYMBOL: sub_75110
int __fastcall sub_75110(int a1, int a2)
{
  unsigned __int8 *v3; // r0
  unsigned __int8 *v4; // r6
  __int64 v5; // kr00_8
  unsigned __int8 v6; // r11
  __int64 v7; // kr08_8
  unsigned int v8; // r1
  int result; // r0
  int v10; // r4
  unsigned int v11; // r1
  unsigned int v12; // r6
  unsigned int v13; // r0
  int v14; // r3
  char v15; // r3
  int v16; // r3
  int v17; // [sp+0h] [bp-20h]

  if ( a2 == -1 )
    return 0;
  v5 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned __int8 **)(a1 + 28);
  v4 = (unsigned __int8 *)v5;
  v6 = a2;
  v7 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int8 *)v5 == v3 )
  {
    if ( (*(_BYTE *)(a1 + 48) & 0x10) == 0 )
      return -1;
    v10 = *(_DWORD *)(a1 + 20);
    v17 = *(_DWORD *)(a1 + 44);
    std::string::push_back(a1 + 32, 0);
    v11 = (*(_DWORD *)(a1 + 32) & 0xFFFFFFFE) - 1;
    if ( !(*(unsigned __int8 *)(a1 + 32) << 31) )
      v11 = 10;
    std::string::resize(a1 + 32, v11, 0);
    v12 = *(unsigned __int8 *)(a1 + 32);
    v14 = *(_DWORD *)(a1 + 40);
    v13 = *(_DWORD *)(a1 + 36);
    if ( (v12 & 1) == 0 )
    {
      v14 = a1 + 33;
      v13 = v12 >> 1;
    }
    v4 = (unsigned __int8 *)(v14 + v5 - v10);
    v3 = (unsigned __int8 *)(v13 + v14);
    v8 = v14 + v17 - v10;
    *(_DWORD *)(a1 + 28) = v3;
    *(_DWORD *)(a1 + 20) = v14;
    *(_DWORD *)(a1 + 24) = v4;
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 44);
  }
  v15 = *(_BYTE *)(a1 + 48);
  if ( (unsigned int)(v4 + 1) >= v8 )
    v8 = (unsigned int)(v4 + 1);
  *(_DWORD *)(a1 + 44) = v8;
  if ( (v15 & 8) != 0 )
  {
    v16 = *(_DWORD *)(a1 + 40);
    if ( !(*(unsigned __int8 *)(a1 + 32) << 31) )
      v16 = a1 + 33;
    *(_DWORD *)(a1 + 16) = v8;
    *(_DWORD *)(a1 + 8) = v16;
    *(_DWORD *)(a1 + 12) = v16 + HIDWORD(v7) - v7;
  }
  if ( v4 == v3 )
    return (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 52))(a1, v6);
  result = v6;
  *(_DWORD *)(a1 + 24) = v4 + 1;
  *v4 = v6;
  return result;
}


// ======================================================================
// ADDR: 0x77524
// SYMBOL: sub_77524
int __fastcall sub_77524(_DWORD *a1, char *s, const char *a3, char *a4)
{
  size_t v8; // r0
  size_t v9; // r4
  char *v10; // r5
  unsigned int v11; // r6
  size_t v12; // r0
  size_t v13; // r4
  char *v14; // r5
  unsigned int v15; // r6
  unsigned int v16; // r1
  unsigned int v17; // r0
  size_t v18; // r0
  size_t v19; // r4
  char *v20; // r5
  unsigned int v21; // r6
  _DWORD **v22; // r5
  int *v23; // r4
  int v24; // r1
  __int64 v25; // d16
  int v26; // r0
  _DWORD *v27; // r0
  size_t v28; // r0
  size_t v29; // r5
  char *v30; // r4
  unsigned int v31; // r6
  unsigned int v32; // r0
  uint8x8_t *v33; // r5
  unsigned __int8 *v34; // r2
  uint32x4_t v35; // q8
  uint32x4_t v36; // q9
  int64x2_t v37; // q10
  unsigned int v38; // r3
  uint8x8_t *v39; // r1
  int16x8_t v40; // q12
  uint16x8_t v41; // q13
  int16x8_t v42; // q14
  unsigned __int8 *v43; // r0
  int v44; // r1
  _DWORD **v45; // r6
  int v46; // r0
  int **v47; // r9
  int v48; // r2
  int v49; // r3
  int *v50; // r5
  int v51; // r1
  int **v52; // r0
  __int64 v53; // d16
  int v54; // r2
  _DWORD *v55; // r0
  size_t v56; // r0
  __int64 v57; // r4
  char *v58; // r6
  int *v59; // r5
  int v60; // r1
  __int64 v61; // d16
  int v62; // r0
  int *v63; // r0
  int v65; // [sp+Ch] [bp-64h] BYREF
  size_t v66; // [sp+10h] [bp-60h]
  void *v67; // [sp+14h] [bp-5Ch]
  _DWORD v68[2]; // [sp+18h] [bp-58h] BYREF
  void *v69; // [sp+20h] [bp-50h]
  _DWORD v70[2]; // [sp+24h] [bp-4Ch] BYREF
  void *v71; // [sp+2Ch] [bp-44h]
  _BYTE v72[8]; // [sp+30h] [bp-40h] BYREF
  void *v73; // [sp+38h] [bp-38h]
  int v74; // [sp+3Ch] [bp-34h] BYREF
  __int64 v75; // [sp+40h] [bp-30h] BYREF
  void *v76; // [sp+48h] [bp-28h]
  int **v77; // [sp+4Ch] [bp-24h]

  v8 = strlen(s);
  if ( v8 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(v70);
  v9 = v8;
  if ( v8 >= 0xB )
  {
    v11 = (v8 + 16) & 0xFFFFFFF0;
    v10 = (char *)operator new(v11);
    v70[1] = v9;
    v71 = v10;
    v70[0] = v11 + 1;
    goto LABEL_6;
  }
  LOBYTE(v70[0]) = 2 * v8;
  v10 = (char *)v70 + 1;
  if ( v8 )
LABEL_6:
    j_memcpy(v10, s, v9);
  v10[v9] = 0;
  v12 = strlen(a3);
  if ( v12 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(v68);
  v13 = v12;
  if ( v12 >= 0xB )
  {
    v15 = (v12 + 16) & 0xFFFFFFF0;
    v14 = (char *)operator new(v15);
    v68[1] = v13;
    v68[0] = v15 | 1;
    v69 = v14;
    goto LABEL_12;
  }
  LOBYTE(v68[0]) = 2 * v12;
  v14 = (char *)v68 + 1;
  if ( v12 )
LABEL_12:
    j_memcpy(v14, a3, v13);
  v14[v13] = 0;
  sub_77A44(v72, v70, v68);
  if ( LOBYTE(v68[0]) << 31 )
    operator delete(v69);
  if ( LOBYTE(v70[0]) << 31 )
    operator delete(v71);
  v65 = (int)v72;
  sub_77C28(&v75, a1 + 1, v72, &unk_51F90, &v65, &v74);
  v16 = *(unsigned __int8 *)(v75 + 28);
  v17 = *(_DWORD *)(v75 + 32);
  if ( !(v16 << 31) )
    v17 = v16 >> 1;
  if ( v17 )
  {
    v65 = (int)v72;
    sub_77C28(&v75, a1 + 1, v72, &unk_51F90, &v65, &v74);
    std::string::append(v75 + 28, "\n");
  }
  v65 = (int)v72;
  sub_77C28(&v75, a1 + 1, v72, &unk_51F90, &v65, &v74);
  std::string::append(v75 + 28, a4);
  v18 = strlen(s);
  if ( v18 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(&v75);
  v19 = v18;
  if ( v18 >= 0xB )
  {
    v21 = (v18 + 16) & 0xFFFFFFF0;
    v20 = (char *)operator new(v21);
    HIDWORD(v75) = v19;
    LODWORD(v75) = v21 | 1;
    v76 = v20;
    goto LABEL_26;
  }
  v20 = (char *)&v75 + 1;
  LOBYTE(v75) = 2 * v18;
  if ( v18 )
LABEL_26:
    j_memcpy(v20, s, v19);
  v20[v19] = 0;
  v22 = (_DWORD **)(a1 + 4);
  v23 = (int *)sub_77ED2(a1 + 4, &v65, &v75);
  if ( !*v23 )
  {
    v24 = operator new(0x1Cu);
    v25 = v75;
    v26 = v65;
    *(_DWORD *)(v24 + 24) = v76;
    *(_DWORD *)v24 = 0;
    *(_DWORD *)(v24 + 4) = 0;
    *(_DWORD *)(v24 + 8) = v26;
    *(_QWORD *)(v24 + 16) = v25;
    v75 = 0LL;
    v76 = 0;
    *v23 = v24;
    v27 = (_DWORD *)**v22;
    if ( v27 )
    {
      *v22 = v27;
      v24 = *v23;
    }
    sub_77D8A(a1[5], v24);
    ++a1[6];
  }
  if ( (unsigned __int8)v75 << 31 )
    operator delete(v76);
  v28 = strlen(s);
  if ( v28 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(&v65);
  v29 = v28;
  if ( v28 >= 0xB )
  {
    v31 = (v28 + 16) & 0xFFFFFFF0;
    v30 = (char *)operator new(v31);
    v66 = v29;
    v65 = v31 | 1;
    v67 = v30;
    goto LABEL_38;
  }
  v30 = (char *)&v65 + 1;
  LOBYTE(v65) = 2 * v28;
  if ( v28 )
LABEL_38:
    j_memcpy(v30, s, v29);
  v30[v29] = 0;
  v32 = v66;
  v33 = (uint8x8_t *)v67;
  v34 = (unsigned __int8 *)(v65 & 1);
  if ( !v34 )
  {
    v32 = (unsigned __int8)v65 >> 1;
    v33 = (uint8x8_t *)((char *)&v65 + 1);
  }
  if ( v32 )
  {
    if ( v32 >= 0x10 )
    {
      v35.n128_u64[0] = 0xFFFFFFBFFFFFFFBFLL;
      v35.n128_u64[1] = 0xFFFFFFBFFFFFFFBFLL;
      v36.n128_u64[0] = 0x1A0000001ALL;
      v36.n128_u64[1] = 0x1A0000001ALL;
      v34 = (unsigned __int8 *)v33 + (v32 & 0xFFFFFFF0);
      v37.n128_u64[0] = 0x2020202020202020LL;
      v37.n128_u64[1] = 0x2020202020202020LL;
      v38 = v32 & 0xFFFFFFF0;
      v39 = v33;
      do
      {
        v38 -= 16;
        v40 = vmovl_u8(v39[1]);
        v41 = vmovl_u8((uint8x8_t)v39->n64_u64[0]);
        *(int16x4_t *)&v42.n128_i8[8] = vmovn_s32(vcgtq_u32(v36, vaddw_u16(v35, *(uint16x4_t *)&v40.n128_i8[8])));
        v42.n128_u64[0] = vmovn_s32(vcgtq_u32(v36, vaddw_u16(v35, (uint16x4_t)v40.n128_u64[0]))).n64_u64[0];
        *(int16x4_t *)&v40.n128_i8[8] = vmovn_s32(vcgtq_u32(v36, vaddw_u16(v35, *(uint16x4_t *)&v41.n128_i8[8])));
        v40.n128_u64[0] = vmovn_s32(vcgtq_u32(v36, vaddw_u16(v35, (uint16x4_t)v41.n128_u64[0]))).n64_u64[0];
        *(int8x8_t *)&v42.n128_i8[8] = vmovn_s16(v42);
        v42.n128_u64[0] = vmovn_s16(v40).n64_u64[0];
        *(int64x2_t *)v39->n64_u64 = vbslq_s64(
                                       v42,
                                       vorrq_s64(*(int64x2_t *)v39->n64_u64, v37),
                                       *(int64x2_t *)v39->n64_u64);
        v39 += 2;
      }
      while ( v38 );
      if ( v32 == (v32 & 0xFFFFFFF0) )
        goto LABEL_51;
    }
    else
    {
      v34 = (unsigned __int8 *)v33;
    }
    v43 = (unsigned __int8 *)v33 + v32;
    do
    {
      v44 = *v34;
      if ( (unsigned int)(v44 - 65) < 0x1A )
        LOBYTE(v44) = v44 | 0x20;
      *v34++ = v44;
    }
    while ( v34 != v43 );
  }
LABEL_51:
  v45 = (_DWORD **)(a1 + 7);
  v46 = sub_77F90(a1 + 7, &v65, v34);
  if ( (_DWORD *)v46 == a1 + 8 )
  {
    v47 = (int **)operator new(0xCu);
    v47[2] = 0;
    v47[1] = 0;
    *v47 = (int *)(v47 + 1);
    std::string::basic_string(&v75, &v65, v48, v49);
    v77 = v47;
    v50 = (int *)sub_78052(a1 + 7, &v74, &v75);
    if ( !*v50 )
    {
      v51 = operator new(0x20u);
      v52 = v77;
      v53 = v75;
      v54 = v74;
      *(_DWORD *)(v51 + 24) = v76;
      *(_DWORD *)(v51 + 28) = v52;
      *(_DWORD *)v51 = 0;
      *(_DWORD *)(v51 + 4) = 0;
      *(_DWORD *)(v51 + 8) = v54;
      *(_QWORD *)(v51 + 16) = v53;
      v75 = 0LL;
      v76 = 0;
      *v50 = v51;
      v55 = (_DWORD *)**v45;
      if ( v55 )
      {
        *v45 = v55;
        v51 = *v50;
      }
      sub_77D8A(a1[8], v51);
      ++a1[9];
    }
    if ( (unsigned __int8)v75 << 31 )
      operator delete(v76);
  }
  else
  {
    v47 = *(int ***)(v46 + 28);
  }
  v56 = strlen(a3);
  if ( v56 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(&v75);
  HIDWORD(v57) = v56;
  if ( v56 >= 0xB )
  {
    LODWORD(v57) = (v56 + 16) & 0xFFFFFFF0;
    v58 = (char *)operator new(v57);
    v75 = v57 | 1;
    v76 = v58;
    goto LABEL_64;
  }
  v58 = (char *)&v75 + 1;
  LOBYTE(v75) = 2 * v56;
  if ( v56 )
LABEL_64:
    j_memcpy(v58, a3, HIDWORD(v57));
  v58[HIDWORD(v57)] = 0;
  v59 = (int *)sub_77ED2(v47, &v74, &v75);
  if ( !*v59 )
  {
    v60 = operator new(0x1Cu);
    v61 = v75;
    v62 = v74;
    *(_DWORD *)(v60 + 24) = v76;
    *(_DWORD *)v60 = 0;
    *(_DWORD *)(v60 + 4) = 0;
    *(_DWORD *)(v60 + 8) = v62;
    *(_QWORD *)(v60 + 16) = v61;
    v75 = 0LL;
    v76 = 0;
    *v59 = v60;
    v63 = (int *)**v47;
    if ( v63 )
    {
      *v47 = v63;
      v60 = *v59;
    }
    sub_77D8A(v47[1], v60);
    v47[2] = (int *)((char *)v47[2] + 1);
  }
  if ( (unsigned __int8)v75 << 31 )
    operator delete(v76);
  if ( (unsigned __int8)v65 << 31 )
    operator delete(v67);
  if ( v72[0] << 31 )
    operator delete(v73);
  return 1;
}


// ======================================================================
// ADDR: 0x78a30
// SYMBOL: sub_78A30
void sub_78A30()
{
  __int64 v0; // r0

  v0 = sub_7C3B4();
  operator delete((void *)v0, (const std::nothrow_t *)HIDWORD(v0));
}


// ======================================================================
// ADDR: 0x78a40
// SYMBOL: sub_78A40
void sub_78A40()
{
  __int64 v0; // r0

  v0 = sub_7C3B4();
  operator delete((void *)v0, (const std::nothrow_t *)HIDWORD(v0));
}


// ======================================================================
// ADDR: 0x78a50
// SYMBOL: sub_78A50
void sub_78A50()
{
  __int64 v0; // r0

  v0 = sub_7C3B4();
  operator delete((void *)v0, (const std::nothrow_t *)HIDWORD(v0));
}


// ======================================================================
// ADDR: 0x78a64
// SYMBOL: sub_78A64
_DWORD *__fastcall sub_78A64(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_110C58;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x78a84
// SYMBOL: sub_78A84
int __fastcall sub_78A84(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_110C58;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x78aa0
// SYMBOL: sub_78AA0
int sub_78AA0()
{
  if ( byte_116D34 != 1 )
    byte_116D34 = 1;
  return sub_794B8();
}


// ======================================================================
// ADDR: 0x78ab8
// SYMBOL: sub_78AB8
int __fastcall sub_78AB8(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN13commandLayoutC1EvE3$_0" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x78ad0
// SYMBOL: sub_78AD0
int **sub_78AD0()
{
  return &`typeinfo for'commandLayout::commandLayout(void)::$_0;
}


// ======================================================================
// ADDR: 0x78ae0
// SYMBOL: sub_78AE0
_DWORD *__fastcall sub_78AE0(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_110C98;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x78b00
// SYMBOL: sub_78B00
int __fastcall sub_78B00(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_110C98;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x78b34
// SYMBOL: sub_78B34
int __fastcall sub_78B34(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN13commandLayoutC1EvE3$_1" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x78b4c
// SYMBOL: sub_78B4C
int **sub_78B4C()
{
  return &`typeinfo for'commandLayout::commandLayout(void)::$_1;
}


// ======================================================================
// ADDR: 0x78b5c
// SYMBOL: sub_78B5C
_DWORD *__fastcall sub_78B5C(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_110CD8;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x78b7c
// SYMBOL: sub_78B7C
int __fastcall sub_78B7C(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_110CD8;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x78c0c
// SYMBOL: sub_78C0C
_DWORD *__fastcall sub_78C0C(int *a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r1
  int v5; // r7
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  char *v8; // r3
  int v9; // r1

  v4 = *a1;
  v5 = a1[3];
  v6 = a1 + 4;
  v5 -= 72;
  *v6 = v3;
  v6[1] = v5;
  v6 += 2;
  *v6 = v4;
  v6[1] = a3;
  v6[2] = v3;
  v6[3] = v5;
  v7 = v6 + 4;
  v8 = *(char **)(v4 + 4);
  v9 = 0;
  if ( v8 == "ZN14selectorLayoutC1EvE3$_2" )
    return v7 + 1;
  return (_DWORD *)v9;
}


// ======================================================================
// ADDR: 0x78c30
// SYMBOL: sub_78C30
int **sub_78C30()
{
  return &`typeinfo for'selectorLayout::selectorLayout(void)::$_2;
}


// ======================================================================
// ADDR: 0x78c40
// SYMBOL: sub_78C40
_DWORD *__fastcall sub_78C40(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_110D18;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x78c60
// SYMBOL: sub_78C60
int __fastcall sub_78C60(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_110D18;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x78cf8
// SYMBOL: sub_78CF8
int __fastcall sub_78CF8(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN14selectorLayoutC1EvE3$_3" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x78d10
// SYMBOL: sub_78D10
int **sub_78D10()
{
  return &`typeinfo for'selectorLayout::selectorLayout(void)::$_3;
}


// ======================================================================
// ADDR: 0x78d20
// SYMBOL: sub_78D20
_DWORD *__fastcall sub_78D20(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_110D58;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x78d40
// SYMBOL: sub_78D40
int __fastcall sub_78D40(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_110D58;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x78df0
// SYMBOL: sub_78DF0
int **sub_78DF0()
{
  return &`typeinfo for'selectorLayout::selectorLayout(void)::$_4;
}


// ======================================================================
// ADDR: 0x78e00
// SYMBOL: sub_78E00
_DWORD *__fastcall sub_78E00(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_110D98;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x78e20
// SYMBOL: sub_78E20
int __fastcall sub_78E20(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_110D98;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x78ebc
// SYMBOL: sub_78EBC
int __fastcall sub_78EBC(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN12coordsLayoutC1EvE3$_5" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x78ed4
// SYMBOL: sub_78ED4
int **sub_78ED4()
{
  return &`typeinfo for'coordsLayout::coordsLayout(void)::$_5;
}


// ======================================================================
// ADDR: 0x78ee4
// SYMBOL: sub_78EE4
_DWORD *__fastcall sub_78EE4(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_110DD8;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x78f04
// SYMBOL: sub_78F04
int __fastcall sub_78F04(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_110DD8;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x78f9c
// SYMBOL: sub_78F9C
int __fastcall sub_78F9C(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN12coordsLayoutC1EvE3$_6" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x78fb4
// SYMBOL: sub_78FB4
int **sub_78FB4()
{
  return &`typeinfo for'coordsLayout::coordsLayout(void)::$_6;
}


// ======================================================================
// ADDR: 0x78fc4
// SYMBOL: sub_78FC4
_DWORD *__fastcall sub_78FC4(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_110E18;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x78fe4
// SYMBOL: sub_78FE4
int __fastcall sub_78FE4(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_110E18;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x7907c
// SYMBOL: sub_7907C
int __fastcall sub_7907C(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN12coordsLayoutC1EvE3$_7" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x79094
// SYMBOL: sub_79094
int **sub_79094()
{
  return &`typeinfo for'coordsLayout::coordsLayout(void)::$_7;
}


// ======================================================================
// ADDR: 0x790a4
// SYMBOL: sub_790A4
_DWORD *__fastcall sub_790A4(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_110E58;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x790c4
// SYMBOL: sub_790C4
int __fastcall sub_790C4(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_110E58;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x790e0
// SYMBOL: sub_790E0
int __fastcall sub_790E0(int a1)
{
  int v1; // r3
  int v2; // r0
  int v3; // r0
  int v4; // r0
  unsigned __int8 v6; // [sp+0h] [bp-18h] BYREF
  int v7; // [sp+1h] [bp-17h]
  void *v8[4]; // [sp+5h] [bp-13h] BYREF

  v1 = 1919118921;
  v2 = *(_DWORD *)(a1 + 4);
  if ( byte_116D33 )
    v1 = 1919116612;
  v3 = *(_DWORD *)(v2 + 120);
  byte_116D33 ^= 1u;
  v7 = v1;
  v4 = *(_DWORD *)(v3 + 84);
  strcpy((char *)v8, "ease");
  v6 = 16;
  sub_7D3F4(v4, &v6);
  if ( v6 << 31 )
    operator delete(*(void **)((char *)v8 + 3));
  return *(int *)((char *)&v8[1] + 3);
}


// ======================================================================
// ADDR: 0x7917c
// SYMBOL: sub_7917C
int __fastcall sub_7917C(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN12coordsLayoutC1EvE3$_8" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x79194
// SYMBOL: sub_79194
int **sub_79194()
{
  return &`typeinfo for'coordsLayout::coordsLayout(void)::$_8;
}


// ======================================================================
// ADDR: 0x791a0
// SYMBOL: sub_791A0
int __fastcall sub_791A0(int a1)
{
  int v1; // r4
  char v2; // r0
  int v3; // r1
  int v4; // r0
  int v5; // r3
  int v6; // r12
  unsigned __int16 v8; // [sp+6h] [bp-122h] BYREF
  _DWORD v9[2]; // [sp+8h] [bp-120h] BYREF
  int v10; // [sp+10h] [bp-118h]
  int v11; // [sp+14h] [bp-114h]
  int v12; // [sp+11Ch] [bp-Ch]

  v1 = 0;
  sub_86BA8((int)v9, *(void **)a1, *(_DWORD *)(a1 + 4) / 8 + 1);
  v2 = v10;
  if ( v10 < v9[0] )
  {
    v3 = *(unsigned __int8 *)(v11 + (v10++ >> 3));
    v1 = (unsigned __int8)(v3 << (v2 & 7)) >> 7;
  }
  sub_86E30((int)v9, (int)&v8);
  _android_log_print(4, "SAMP_ORIG", "Player Obj: %d | Object ID: %d", v1, v8);
  if ( v8 <= 0x3E8u && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_1A4434 + 944) + 16) + 4 * v8 + 1004) )
  {
    dword_1A4548 = 2;
    dword_116D38 = v8;
    v4 = sub_68858();
    v5 = *(_DWORD *)(dword_1A442C + 148);
    v6 = *(_DWORD *)(dword_1A442C + 156);
    *(_BYTE *)(*(_DWORD *)(dword_1A442C + 152) + 8) = 1;
    *(_BYTE *)(v5 + 8) = 1;
    byte_1A44AD = 1;
    dword_1A454C = v4;
    *(_BYTE *)(v6 + 8) = 1;
  }
  else
  {
    sub_6C73C("Invalid object id %d", v8);
  }
  sub_86BF8(v9);
  return v12;
}


// ======================================================================
// ADDR: 0x792c4
// SYMBOL: sub_792C4
int __fastcall sub_792C4(int a1)
{
  int v1; // r0
  int v2; // r0
  __int64 v3; // kr08_8
  int v4; // r1
  unsigned int v6; // [sp+4h] [bp-12Ch] BYREF
  _BYTE v7[276]; // [sp+8h] [bp-128h] BYREF
  int v8; // [sp+11Ch] [bp-14h]

  v1 = sub_86BA8((int)v7, *(void **)a1, *(_DWORD *)(a1 + 4) / 8 + 1);
  sub_86E30(v1, (int)&v6);
  if ( v6 < 0x19 )
  {
    dword_1A4548 = 1;
    dword_116D38 = v6;
    v2 = sub_68858();
    v3 = *(_QWORD *)(dword_1A442C + 148);
    v4 = *(_DWORD *)(dword_1A442C + 156);
    *(_BYTE *)(HIDWORD(v3) + 8) = 1;
    *(_BYTE *)(v3 + 8) = 1;
    byte_1A44AD = 1;
    dword_1A454C = v2;
    *(_BYTE *)(v4 + 8) = 1;
  }
  else
  {
    sub_6C73C("Invalid attach slot %d", v6);
  }
  sub_86BF8(v7);
  return v8;
}


// ======================================================================
// ADDR: 0x7b514
// SYMBOL: sub_7B514
void sub_7B514()
{
  __int64 v0; // r0

  v0 = sub_7C3B4();
  operator delete((void *)v0, (const std::nothrow_t *)HIDWORD(v0));
}


// ======================================================================
// ADDR: 0x7b528
// SYMBOL: sub_7B528
_DWORD *sub_7B528()
{
  _DWORD *result; // r0

  result = (_DWORD *)operator new(8u);
  *result = &off_110ED8;
  return result;
}


// ======================================================================
// ADDR: 0x7b540
// SYMBOL: sub_7B540
_UNKNOWN **__fastcall sub_7B540(int a1, _DWORD *a2)
{
  _UNKNOWN **result; // r0

  result = &off_110ED8;
  *a2 = &off_110ED8;
  return result;
}


// ======================================================================
// ADDR: 0x7b57c
// SYMBOL: sub_7B57C
int __fastcall sub_7B57C(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN5SpawnC1EvE3$_0" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x7b594
// SYMBOL: sub_7B594
int **sub_7B594()
{
  return &`typeinfo for'Spawn::Spawn(void)::$_0;
}


// ======================================================================
// ADDR: 0x7b5a4
// SYMBOL: sub_7B5A4
_DWORD *sub_7B5A4()
{
  _DWORD *result; // r0

  result = (_DWORD *)operator new(8u);
  *result = &off_110F18;
  return result;
}


// ======================================================================
// ADDR: 0x7b5bc
// SYMBOL: sub_7B5BC
_UNKNOWN **__fastcall sub_7B5BC(int a1, _DWORD *a2)
{
  _UNKNOWN **result; // r0

  result = &off_110F18;
  *a2 = &off_110F18;
  return result;
}


// ======================================================================
// ADDR: 0x7b5f8
// SYMBOL: sub_7B5F8
int __fastcall sub_7B5F8(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN5SpawnC1EvE3$_1" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x7b610
// SYMBOL: sub_7B610
int **sub_7B610()
{
  return &`typeinfo for'Spawn::Spawn(void)::$_1;
}


// ======================================================================
// ADDR: 0x7b620
// SYMBOL: sub_7B620
_DWORD *sub_7B620()
{
  _DWORD *result; // r0

  result = (_DWORD *)operator new(8u);
  *result = &off_110F58;
  return result;
}


// ======================================================================
// ADDR: 0x7b638
// SYMBOL: sub_7B638
_UNKNOWN **__fastcall sub_7B638(int a1, _DWORD *a2)
{
  _UNKNOWN **result; // r0

  result = &off_110F58;
  *a2 = &off_110F58;
  return result;
}


// ======================================================================
// ADDR: 0x7b674
// SYMBOL: sub_7B674
int __fastcall sub_7B674(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN5SpawnC1EvE3$_2" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x7b68c
// SYMBOL: sub_7B68C
int **sub_7B68C()
{
  return &`typeinfo for'Spawn::Spawn(void)::$_2;
}


// ======================================================================
// ADDR: 0x7bc2c
// SYMBOL: sub_7BC2C
bool __fastcall sub_7BC2C(int a1)
{
  return sub_7B71C((_DWORD *)(a1 - 84));
}


// ======================================================================
// ADDR: 0x7be9c
// SYMBOL: sub_7BE9C
int __fastcall sub_7BE9C(int a1)
{
  return sub_7BC34(a1 - 84);
}


// ======================================================================
// ADDR: 0x7bea2
// SYMBOL: sub_7BEA2
int __fastcall sub_7BEA2(int a1)
{
  return sub_72D9C(a1 + 84);
}


// ======================================================================
// ADDR: 0x7bea8
// SYMBOL: sub_7BEA8
// attributes: thunk
int __fastcall sub_7BEA8(int a1)
{
  return sub_72D9C(a1);
}


// ======================================================================
// ADDR: 0x7beac
// SYMBOL: sub_7BEAC
int __fastcall sub_7BEAC(int a1)
{
  int result; // r0
  int v3; // r0

  result = *(unsigned __int8 *)(a1 + 8);
  if ( result )
  {
    v3 = *(_DWORD *)(a1 + 132);
    if ( v3 )
      sub_75410(v3, *(_DWORD *)(a1 + 112));
    return (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 4))(a1, *(_DWORD *)(a1 + 112));
  }
  return result;
}


// ======================================================================
// ADDR: 0x7bed4
// SYMBOL: sub_7BED4
int __fastcall sub_7BED4(int result)
{
  int *v1; // r4
  int v2; // r0

  if ( *(_BYTE *)(result - 76) )
  {
    v1 = (int *)(result - 84);
    v2 = *(_DWORD *)(result + 48);
    if ( v2 )
      sub_75410(v2, v1[28]);
    return (*(int (__fastcall **)(int *, int))(*v1 + 4))(v1, v1[28]);
  }
  return result;
}


// ======================================================================
// ADDR: 0x7bf00
// SYMBOL: sub_7BF00
// attributes: thunk
int sub_7BF00()
{
  return sub_7C780();
}


// ======================================================================
// ADDR: 0x7bf04
// SYMBOL: sub_7BF04
int __fastcall sub_7BF04(int a1)
{
  int v2; // r1
  int v3; // r5

  v2 = *(unsigned __int8 *)(a1 + 168);
  *(_DWORD *)(a1 + 84) = &off_110FDC;
  v3 = a1 + 84;
  *(_DWORD *)a1 = &off_110F98;
  if ( v2 << 31 )
    operator delete(*(void **)(a1 + 176));
  sub_71CA8(v3);
  return sub_7C3B4(a1);
}


// ======================================================================
// ADDR: 0x7bf40
// SYMBOL: sub_7BF40
void __fastcall sub_7BF40(int a1)
{
  int v2; // r1
  int v3; // r5
  void *v4; // r0
  const std::nothrow_t *v5; // r1

  v2 = *(unsigned __int8 *)(a1 + 168);
  *(_DWORD *)(a1 + 84) = &off_110FDC;
  v3 = a1 + 84;
  *(_DWORD *)a1 = &off_110F98;
  if ( v2 << 31 )
    operator delete(*(void **)(a1 + 176));
  sub_71CA8(v3);
  v4 = (void *)sub_7C3B4(a1);
  operator delete(v4, v5);
}


// ======================================================================
// ADDR: 0x7bf80
// SYMBOL: sub_7BF80
int __fastcall sub_7BF80(int a1)
{
  int v2; // r1
  int v3; // r5

  v2 = *(unsigned __int8 *)(a1 + 84);
  *(_DWORD *)(a1 - 84) = &off_110F98;
  v3 = a1 - 84;
  *(_DWORD *)a1 = &off_110FDC;
  if ( v2 << 31 )
    operator delete(*(void **)(a1 + 92));
  sub_71CA8(a1);
  return sub_7C3B4(v3);
}


// ======================================================================
// ADDR: 0x7bfbc
// SYMBOL: sub_7BFBC
void __fastcall sub_7BFBC(int a1)
{
  int v2; // r1
  int v3; // r4
  void *v4; // r0
  const std::nothrow_t *v5; // r1

  v2 = *(unsigned __int8 *)(a1 + 84);
  *(_DWORD *)(a1 - 84) = &off_110F98;
  v3 = a1 - 84;
  *(_DWORD *)a1 = &off_110FDC;
  if ( v2 << 31 )
    operator delete(*(void **)(a1 + 92));
  sub_71CA8(a1);
  v4 = (void *)sub_7C3B4(v3);
  operator delete(v4, v5);
}


// ======================================================================
// ADDR: 0x7c096
// SYMBOL: sub_7C096
int __fastcall sub_7C096(int result)
{
  *(_QWORD *)result = 0LL;
  *(_QWORD *)(result + 8) = 0LL;
  *(_QWORD *)(result + 16) = 0LL;
  *(_QWORD *)(result + 24) = 0LL;
  *(_DWORD *)(result + 31) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x7c3fc
// SYMBOL: sub_7C3FC
void __fastcall sub_7C3FC(_DWORD *a1, const std::nothrow_t *a2)
{
  _DWORD *v3; // r5
  _DWORD *v4; // r6

  v4 = (_DWORD *)a1[19];
  v3 = (_DWORD *)a1[18];
  *a1 = &off_11101C;
  if ( v3 != v4 )
  {
    do
    {
      if ( *v3 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v3 + 40))(*v3);
      ++v3;
    }
    while ( v3 != v4 );
    v3 = (_DWORD *)a1[18];
  }
  if ( v3 )
  {
    a1[19] = v3;
    operator delete(v3);
  }
  operator delete(a1, a2);
}


// ======================================================================
// ADDR: 0x7c992
// SYMBOL: sub_7C992
int __fastcall sub_7C992(int result)
{
  __int64 i; // r4
  int v2; // t1

  for ( i = *(_QWORD *)(result + 72); (_DWORD)i != HIDWORD(i); result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2) )
  {
    v2 = *(_DWORD *)i;
    LODWORD(i) = i + 4;
  }
  return result;
}


// ======================================================================
// ADDR: 0x7ca98
// SYMBOL: sub_7CA98
int __fastcall sub_7CA98(int a1)
{
  float v2; // s16
  int v3; // r0
  float v4; // s6
  int v5; // r0
  float v6; // s2
  __int64 v8; // [sp+4h] [bp-24h] BYREF
  int v9; // [sp+Ch] [bp-1Ch]

  v2 = unk_116D60;
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 84) + 8))(*(_DWORD *)(a1 + 84));
  v3 = *(_DWORD *)(a1 + 84);
  v4 = *(float *)(v3 + 24);
  *(float *)&v8 = (float)(v2 + v2) + *(float *)(v3 + 20);
  *((float *)&v8 + 1) = (float)((float)(v2 * 0.5) + (float)(v2 * 0.5)) + v4;
  sub_7C44C((float *)a1, (float *)&v8);
  v5 = *(_DWORD *)(a1 + 84);
  v6 = (float)(*(float *)(a1 + 24) - *(float *)(v5 + 24)) * 0.5;
  *(float *)&v8 = (float)(*(float *)(a1 + 20) - *(float *)(v5 + 20)) * 0.5;
  *((float *)&v8 + 1) = v6;
  sub_7C4A6(v5, &v8);
  return v9;
}


// ======================================================================
// ADDR: 0x7cb50
// SYMBOL: sub_7CB50
int __fastcall sub_7CB50(int a1, int a2)
{
  int v3; // r6
  int v4; // r4
  int v6; // r3
  int v7; // r11
  float v8; // s2
  float v9; // s6
  bool v10; // zf
  float v11; // s2
  float v12; // s2
  float v13; // s4
  float v14; // s8
  _QWORD v16[2]; // [sp+8h] [bp-40h] BYREF
  float v17[2]; // [sp+18h] [bp-30h] BYREF
  float v18[10]; // [sp+20h] [bp-28h] BYREF

  v3 = a1 + 128;
  v4 = a1 + 44;
  v6 = a1 + 128;
  v7 = a1 + 112;
  v8 = *(float *)(a1 + 24);
  v9 = *(float *)(a1 + 48);
  v10 = *(_BYTE *)(a1 + 52) == 0;
  *(float *)v16 = *(float *)(a1 + 44) + *(float *)(a1 + 20);
  *((float *)v16 + 1) = v9 + v8;
  if ( v10 )
    v6 = a1 + 112;
  sub_7157C(a2, a1 + 44, (int)v16, v6, 1, 1.0);
  v11 = *(float *)(a1 + 48) + *(float *)(a1 + 24);
  v10 = *(_BYTE *)(a1 + 52) == 0;
  *(float *)v16 = *(float *)(a1 + 44) + *(float *)(a1 + 20);
  *((float *)v16 + 1) = v11;
  if ( v10 )
    v3 = v7;
  sub_7157C(a2, v4, (int)v16, v3, 1, 1.0);
  v12 = *(float *)(a1 + 44);
  v13 = *(float *)(a1 + 48);
  v16[0] = 1061734602LL;
  v16[1] = 0x3F8000003DC0C0C2LL;
  v18[1] = *(float *)&dword_116D5C + v13;
  v18[0] = *(float *)&dword_116D5C + v12;
  v14 = *(float *)(a1 + 24);
  v17[0] = (float)(v12 + *(float *)(a1 + 20)) - *(float *)&dword_116D5C;
  v17[1] = (float)(v13 + v14) - *(float *)&dword_116D5C;
  sub_7157C(a2, (int)v18, (int)v17, (int)v16, 0, *(float *)&dword_116D5C);
  sub_7C960((_DWORD *)a1, a2);
  return LODWORD(v18[2]);
}


// ======================================================================
// ADDR: 0x7cc9c
// SYMBOL: sub_7CC9C
int __fastcall sub_7CC9C(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 104);
  if ( result )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 24))(result);
  return result;
}


// ======================================================================
// ADDR: 0x7cd94
// SYMBOL: sub_7CD94
int __fastcall sub_7CD94(int a1)
{
  float v2; // s16
  int v3; // r0
  float v4; // s6
  int v5; // r0
  float v6; // s2
  __int64 v8; // [sp+4h] [bp-24h] BYREF
  int v9; // [sp+Ch] [bp-1Ch]

  v2 = unk_116D60;
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 84) + 8))(*(_DWORD *)(a1 + 84));
  v3 = *(_DWORD *)(a1 + 84);
  v4 = *(float *)(v3 + 24);
  *(float *)&v8 = (float)(v2 + v2) + *(float *)(v3 + 20);
  *((float *)&v8 + 1) = (float)((float)(v2 * 0.5) + (float)(v2 * 0.5)) + v4;
  sub_7C44C((float *)a1, (float *)&v8);
  v5 = *(_DWORD *)(a1 + 84);
  v6 = (float)(*(float *)(a1 + 24) - *(float *)(v5 + 24)) * 0.5;
  *(float *)&v8 = (float)(*(float *)(a1 + 20) - *(float *)(v5 + 20)) * 0.5;
  *((float *)&v8 + 1) = v6;
  sub_7C4A6(v5, &v8);
  return v9;
}


// ======================================================================
// ADDR: 0x7ce44
// SYMBOL: sub_7CE44
int __fastcall sub_7CE44(int a1, int a2)
{
  int v4; // r3
  float v5; // s2
  bool v6; // zf
  float v7; // s2
  float v8; // s4
  float v9; // s2
  float v10; // s4
  _QWORD v12[2]; // [sp+8h] [bp-38h] BYREF
  float v13[2]; // [sp+1Ch] [bp-24h] BYREF
  float v14[7]; // [sp+24h] [bp-1Ch] BYREF

  if ( byte_1A44C8 )
  {
    v4 = a1 + 128;
    v5 = *(float *)(a1 + 48) + *(float *)(a1 + 24);
    v6 = *(_BYTE *)(a1 + 52) == 0;
    *(float *)v12 = *(float *)(a1 + 44) + *(float *)(a1 + 20);
    *((float *)v12 + 1) = v5;
    if ( v6 )
      v4 = a1 + 112;
    sub_7157C(a2, a1 + 44, (int)v12, v4, 1, 1.0);
    v7 = *(float *)(a1 + 44);
    v8 = *(float *)(a1 + 48);
    v14[1] = *(float *)&dword_116D5C + v8;
    v14[0] = *(float *)&dword_116D5C + v7;
    v9 = (float)(v7 + *(float *)(a1 + 20)) - *(float *)&dword_116D5C;
    v10 = (float)(v8 + *(float *)(a1 + 24)) - *(float *)&dword_116D5C;
    v12[0] = unk_1A3A88;
    v12[1] = unk_1A3A90;
    v13[0] = v9;
    v13[1] = v10;
    sub_7157C(a2, (int)v14, (int)v13, (int)v12, 0, *(float *)&dword_116D5C);
    sub_7C960((_DWORD *)a1, a2);
  }
  return LODWORD(v14[2]);
}


// ======================================================================
// ADDR: 0x7cf4c
// SYMBOL: sub_7CF4C
int __fastcall sub_7CF4C(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 104);
  if ( result )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 24))(result);
  return result;
}


// ======================================================================
// ADDR: 0x7d044
// SYMBOL: sub_7D044
int __fastcall sub_7D044(int a1)
{
  float v2; // s16
  int v3; // r0
  float v4; // s6
  int v5; // r0
  float v6; // s2
  __int64 v8; // [sp+4h] [bp-24h] BYREF
  int v9; // [sp+Ch] [bp-1Ch]

  v2 = unk_116D60;
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 84) + 8))(*(_DWORD *)(a1 + 84));
  v3 = *(_DWORD *)(a1 + 84);
  v4 = *(float *)(v3 + 24);
  *(float *)&v8 = (float)(v2 + v2) + *(float *)(v3 + 20);
  *((float *)&v8 + 1) = (float)((float)(v2 * 0.5) + (float)(v2 * 0.5)) + v4;
  sub_7C44C((float *)a1, (float *)&v8);
  v5 = *(_DWORD *)(a1 + 84);
  v6 = (float)(*(float *)(a1 + 24) - *(float *)(v5 + 24)) * 0.5;
  *(float *)&v8 = (float)(*(float *)(a1 + 20) - *(float *)(v5 + 20)) * 0.5;
  *((float *)&v8 + 1) = v6;
  sub_7C4A6(v5, &v8);
  return v9;
}


// ======================================================================
// ADDR: 0x7d0f4
// SYMBOL: sub_7D0F4
int __fastcall sub_7D0F4(int a1, int a2)
{
  int v4; // r0
  int v5; // r3
  float v6; // s2
  bool v7; // zf
  float v8; // s2
  float v9; // s4
  float v10; // s2
  float v11; // s4
  _QWORD v13[2]; // [sp+8h] [bp-38h] BYREF
  float v14[2]; // [sp+1Ch] [bp-24h] BYREF
  float v15[7]; // [sp+24h] [bp-1Ch] BYREF

  if ( byte_1A44C8 )
  {
    v4 = -1021968384;
  }
  else
  {
    v5 = a1 + 128;
    v6 = *(float *)(a1 + 48) + *(float *)(a1 + 24);
    v7 = *(_BYTE *)(a1 + 52) == 0;
    *(float *)v13 = *(float *)(a1 + 44) + *(float *)(a1 + 20);
    *((float *)v13 + 1) = v6;
    if ( v7 )
      v5 = a1 + 112;
    sub_7157C(a2, a1 + 44, (int)v13, v5, 1, 1.0);
    v8 = *(float *)(a1 + 44);
    v9 = *(float *)(a1 + 48);
    v15[1] = *(float *)&dword_116D5C + v9;
    v15[0] = *(float *)&dword_116D5C + v8;
    v10 = (float)(v8 + *(float *)(a1 + 20)) - *(float *)&dword_116D5C;
    v11 = (float)(v9 + *(float *)(a1 + 24)) - *(float *)&dword_116D5C;
    v13[0] = unk_1A3A88;
    v13[1] = unk_1A3A90;
    v14[0] = v10;
    v14[1] = v11;
    sub_7157C(a2, (int)v15, (int)v14, (int)v13, 0, *(float *)&dword_116D5C);
    sub_7C960((_DWORD *)a1, a2);
    v4 = 1097859072;
  }
  HIDWORD(v13[0]) = v4;
  LODWORD(v13[0]) = v4;
  sub_7C4A6(a1, v13);
  return LODWORD(v15[2]);
}


// ======================================================================
// ADDR: 0x7d214
// SYMBOL: sub_7D214
int __fastcall sub_7D214(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 104);
  if ( result )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 24))(result);
  return result;
}


// ======================================================================
// ADDR: 0x7d224
// SYMBOL: sub_7D224
_DWORD *__fastcall sub_7D224(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1

  v2 = (_DWORD *)a1[26];
  *a1 = &off_111058;
  if ( a1 + 22 == v2 )
  {
    v3 = 4;
    goto LABEL_5;
  }
  if ( v2 )
  {
    v3 = 5;
LABEL_5:
    (*(void (**)(void))(*v2 + 4 * v3))();
  }
  return sub_7C3B4(a1);
}


// ======================================================================
// ADDR: 0x7d25c
// SYMBOL: sub_7D25C
void __fastcall sub_7D25C(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  _DWORD *v4; // r0
  const std::nothrow_t *v5; // r1

  v2 = (_DWORD *)a1[26];
  *a1 = &off_111058;
  if ( a1 + 22 == v2 )
  {
    v3 = 4;
    goto LABEL_5;
  }
  if ( v2 )
  {
    v3 = 5;
LABEL_5:
    (*(void (**)(void))(*v2 + 4 * v3))();
  }
  v4 = sub_7C3B4(a1);
  operator delete(v4, v5);
}


// ======================================================================
// ADDR: 0x7d298
// SYMBOL: sub_7D298
_DWORD *__fastcall sub_7D298(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1

  v2 = (_DWORD *)a1[26];
  *a1 = &off_11108C;
  if ( a1 + 22 == v2 )
  {
    v3 = 4;
    goto LABEL_5;
  }
  if ( v2 )
  {
    v3 = 5;
LABEL_5:
    (*(void (**)(void))(*v2 + 4 * v3))();
  }
  return sub_7C3B4(a1);
}


// ======================================================================
// ADDR: 0x7d2d0
// SYMBOL: sub_7D2D0
void __fastcall sub_7D2D0(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  _DWORD *v4; // r0
  const std::nothrow_t *v5; // r1

  v2 = (_DWORD *)a1[26];
  *a1 = &off_11108C;
  if ( a1 + 22 == v2 )
  {
    v3 = 4;
    goto LABEL_5;
  }
  if ( v2 )
  {
    v3 = 5;
LABEL_5:
    (*(void (**)(void))(*v2 + 4 * v3))();
  }
  v4 = sub_7C3B4(a1);
  operator delete(v4, v5);
}


// ======================================================================
// ADDR: 0x7d30c
// SYMBOL: sub_7D30C
_DWORD *__fastcall sub_7D30C(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1

  v2 = (_DWORD *)a1[26];
  *a1 = &off_1110C0;
  if ( a1 + 22 == v2 )
  {
    v3 = 4;
    goto LABEL_5;
  }
  if ( v2 )
  {
    v3 = 5;
LABEL_5:
    (*(void (**)(void))(*v2 + 4 * v3))();
  }
  return sub_7C3B4(a1);
}


// ======================================================================
// ADDR: 0x7d344
// SYMBOL: sub_7D344
void __fastcall sub_7D344(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  _DWORD *v4; // r0
  const std::nothrow_t *v5; // r1

  v2 = (_DWORD *)a1[26];
  *a1 = &off_1110C0;
  if ( a1 + 22 == v2 )
  {
    v3 = 4;
    goto LABEL_5;
  }
  if ( v2 )
  {
    v3 = 5;
LABEL_5:
    (*(void (**)(void))(*v2 + 4 * v3))();
  }
  v4 = sub_7C3B4(a1);
  operator delete(v4, v5);
}


// ======================================================================
// ADDR: 0x7d418
// SYMBOL: sub_7D418
int __fastcall sub_7D418(float *a1)
{
  float v3[5]; // [sp+4h] [bp-14h] BYREF

  sub_7D460(v3, a1, a1 + 21);
  sub_7C44C(a1, v3);
  return LODWORD(v3[2]);
}


// ======================================================================
// ADDR: 0x7d700
// SYMBOL: sub_7D700
_DWORD *__fastcall sub_7D700(int a1, int a2)
{
  sub_7178C(
    a2,
    (__int64 *)(a1 + 44),
    (__int64 *)(a1 + 96),
    (unsigned __int8 *)(a1 + 84),
    *(unsigned __int8 *)(a1 + 112),
    *(float *)(a1 + 116),
    0);
  return sub_7C960((_DWORD *)a1, a2);
}


// ======================================================================
// ADDR: 0x7d738
// SYMBOL: sub_7D738
_DWORD *__fastcall sub_7D738(int a1)
{
  int v2; // r1

  v2 = *(unsigned __int8 *)(a1 + 84);
  *(_DWORD *)a1 = &off_111118;
  if ( v2 << 31 )
    operator delete(*(void **)(a1 + 92));
  return sub_7C3B4((_DWORD *)a1);
}


// ======================================================================
// ADDR: 0x7d764
// SYMBOL: sub_7D764
void __fastcall sub_7D764(int a1)
{
  int v2; // r1
  _DWORD *v3; // r0
  const std::nothrow_t *v4; // r1

  v2 = *(unsigned __int8 *)(a1 + 84);
  *(_DWORD *)a1 = &off_111118;
  if ( v2 << 31 )
    operator delete(*(void **)(a1 + 92));
  v3 = sub_7C3B4((_DWORD *)a1);
  operator delete(v3, v4);
}


// ======================================================================
// ADDR: 0x7d7d0
// SYMBOL: sub_7D7D0
int __fastcall sub_7D7D0(int a1)
{
  int *v2; // r4
  int *v3; // r5
  float v4; // s0
  int *v5; // r3
  int v6; // r1
  int v7; // r0
  int v8; // r2
  float v9; // s18
  float v10; // s16
  int v11; // r6
  float v12; // s4
  float v13; // s4
  int v14; // r6
  float v15; // s2
  float v16; // s0
  int v17; // r0
  int v18; // r0
  __int64 v20; // [sp+4h] [bp-34h] BYREF
  int v21; // [sp+Ch] [bp-2Ch]

  v2 = *(int **)(a1 + 76);
  v3 = *(int **)(a1 + 72);
  if ( v3 == v2 )
    return v21;
  v4 = *(float *)(a1 + 88);
  v5 = *(int **)(a1 + 72);
  v6 = v2 - v3;
  v7 = v6;
  v8 = *(_DWORD *)(a1 + 84);
  v9 = *(float *)(a1 + 20) - (float)(v4 + *(float *)(a1 + 92));
  v10 = *(float *)(a1 + 24) - (float)(*(float *)(a1 + 96) + *(float *)(a1 + 100));
  do
  {
    v11 = *v5;
    if ( v8 == 1 )
    {
      v13 = *(float *)(v11 + 24);
      if ( v13 != 0.0 )
      {
        v10 = v10 - v13;
        goto LABEL_3;
      }
    }
    else if ( !v8 )
    {
      v12 = *(float *)(v11 + 20);
      if ( v12 != 0.0 )
      {
        v9 = v9 - v12;
LABEL_3:
        --v7;
      }
    }
    ++v5;
  }
  while ( v5 != v2 );
  if ( v8 )
  {
    if ( v8 == 1 )
      v10 = (float)(v10 - (float)(*(float *)(a1 + 104) * (float)(unsigned int)(v6 - 1))) / (float)v7;
  }
  else
  {
    v9 = (float)(v9 - (float)(*(float *)(a1 + 104) * (float)(unsigned int)(v6 - 1))) / (float)v7;
  }
  HIDWORD(v20) = *(_DWORD *)(a1 + 96);
  *(float *)&v20 = v4;
  do
  {
    v14 = *v3;
    v15 = *(float *)(*v3 + 24);
    v16 = *(float *)(*v3 + 20);
    if ( v15 == 0.0 )
      v15 = v10;
    if ( v16 == 0.0 )
      v16 = v9;
    v17 = *(_DWORD *)v14;
    *(float *)(v14 + 20) = v16;
    *(float *)(v14 + 24) = v15;
    *(float *)(v14 + 28) = v16;
    *(float *)(v14 + 32) = v15;
    *(float *)(v14 + 36) = v16;
    *(float *)(v14 + 40) = v15;
    (*(void (__fastcall **)(int))(v17 + 8))(v14);
    sub_7C4A6(v14, &v20);
    v18 = *(_DWORD *)(a1 + 84);
    if ( v18 == 1 )
    {
      *((float *)&v20 + 1) = *((float *)&v20 + 1) + (float)(*(float *)(a1 + 104) + *(float *)(v14 + 24));
    }
    else if ( !v18 )
    {
      *(float *)&v20 = *(float *)&v20 + (float)(*(float *)(a1 + 104) + *(float *)(v14 + 20));
    }
    ++v3;
  }
  while ( v3 != v2 );
  return v21;
}


// ======================================================================
// ADDR: 0x7d970
// SYMBOL: sub_7D970
void __fastcall sub_7D970(_DWORD *a1)
{
  _DWORD *v1; // r0
  const std::nothrow_t *v2; // r1

  v1 = sub_7C3B4(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0x7e194
// SYMBOL: sub_7E194
void __fastcall sub_7E194(int a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  v1 = (void *)sub_7E094(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0x7e370
// SYMBOL: sub_7E370
void __fastcall sub_7E370(int a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  v1 = (void *)sub_7E094(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0x7ed6c
// SYMBOL: sub_7ED6C
int sub_7ED6C()
{
  int v0; // r10
  unsigned int v1; // r5
  unsigned int v2; // r8
  unsigned __int64 v3; // kr00_8
  ssize_t v4; // r6
  void **v5; // r6
  int v6; // r1
  int v7; // r3
  int v8; // r2
  void *v9; // r0
  _DWORD v11[2]; // [sp+10h] [bp-40h] BYREF
  _DWORD buf[2]; // [sp+18h] [bp-38h] BYREF
  __int64 v13; // [sp+20h] [bp-30h]
  __int64 v14; // [sp+28h] [bp-28h]
  int v15; // [sp+30h] [bp-20h]

  v13 = 0LL;
  v14 = 0LL;
  buf[0] = 0;
  buf[1] = dword_1A460C;
  sub_8613E();
  v0 = dword_1A45F4;
  if ( dword_1A45F4 )
  {
    v1 = 0;
    v2 = 0;
    do
    {
      v3 = sub_86B00();
      if ( (__int64)(v3 - __PAIR64__(v2, v1)) >= 2000 )
      {
        sendto(dword_116E00, buf, 0x18u, 0, 0, 0);
        v2 = HIDWORD(v3);
        v1 = v3;
      }
      if ( v0 == 3 )
      {
        v4 = recvfrom(dword_116E00, (void *)dword_1A4610, dword_1A4614 - dword_1A4610, 0, 0, 0);
        if ( v4 == -1 )
          return v15;
        if ( v4 >= 24 && sub_860C0(dword_1A4610) && v4 == sub_860BA(dword_1A4610) && *(_DWORD *)(dword_1A4610 + 8) )
        {
          v5 = (void **)operator new(0xCu);
          sub_7FD38(v5, &dword_1A4610);
          v6 = dword_1A4880;
          v7 = dword_1A4900;
          v8 = dword_1A4880 + 1 - dword_1A4800;
          if ( dword_1A4880 + 1 != dword_1A4800 )
            v8 = dword_1A4880 + 1;
          __dmb(0xBu);
          if ( v8 == v7 )
          {
            v9 = *v5;
            if ( *v5 )
            {
              v5[1] = v9;
              operator delete(v9);
            }
            operator delete(v5);
          }
          else
          {
            *(_DWORD *)(dword_1A4804 + 4 * v6 + 128) = v5;
            __dmb(0xBu);
            dword_1A4880 = v8;
          }
        }
      }
      else
      {
        v11[1] = 0;
        v11[0] = 100000000;
        std::this_thread::sleep_for(v11);
      }
      v0 = dword_1A45F4;
    }
    while ( dword_1A45F4 );
  }
  return v15;
}


// ======================================================================
// ADDR: 0x7f43c
// SYMBOL: sub_7F43C
void **__fastcall sub_7F43C(void **a1)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r6
  void *v4; // r0
  int v5; // r1
  _DWORD *v6; // r0

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    v4 = *a1;
    if ( v3 == v1 )
    {
LABEL_11:
      a1[1] = v1;
      operator delete(v4);
      return a1;
    }
    while ( 1 )
    {
      v6 = (_DWORD *)*(v3 - 2);
      v3 -= 6;
      if ( v3 == v6 )
      {
        v5 = 4;
      }
      else
      {
        if ( !v6 )
          goto LABEL_6;
        v5 = 5;
      }
      (*(void (**)(void))(*v6 + 4 * v5))();
LABEL_6:
      if ( v3 == v1 )
      {
        v4 = *a1;
        goto LABEL_11;
      }
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x7f484
// SYMBOL: sub_7F484
void **__fastcall sub_7F484(void **a1)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r6
  void *v4; // r0
  int v5; // r1
  _DWORD *v6; // r0

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    v4 = *a1;
    if ( v3 == v1 )
    {
LABEL_11:
      a1[1] = v1;
      operator delete(v4);
      return a1;
    }
    while ( 1 )
    {
      v6 = (_DWORD *)*(v3 - 2);
      v3 -= 6;
      if ( v3 == v6 )
      {
        v5 = 4;
      }
      else
      {
        if ( !v6 )
          goto LABEL_6;
        v5 = 5;
      }
      (*(void (**)(void))(*v6 + 4 * v5))();
LABEL_6:
      if ( v3 == v1 )
      {
        v4 = *a1;
        goto LABEL_11;
      }
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x7f4cc
// SYMBOL: sub_7F4CC
void **__fastcall sub_7F4CC(void **a1)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r6
  void *v4; // r0
  int v5; // r1
  _DWORD *v6; // r0

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    v4 = *a1;
    if ( v3 == v1 )
    {
LABEL_11:
      a1[1] = v1;
      operator delete(v4);
      return a1;
    }
    while ( 1 )
    {
      v6 = (_DWORD *)*(v3 - 2);
      v3 -= 6;
      if ( v3 == v6 )
      {
        v5 = 4;
      }
      else
      {
        if ( !v6 )
          goto LABEL_6;
        v5 = 5;
      }
      (*(void (**)(void))(*v6 + 4 * v5))();
LABEL_6:
      if ( v3 == v1 )
      {
        v4 = *a1;
        goto LABEL_11;
      }
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x7f514
// SYMBOL: sub_7F514
void **__fastcall sub_7F514(void **a1)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r6
  void *v4; // r0
  int v5; // r1
  _DWORD *v6; // r0

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    v4 = *a1;
    if ( v3 == v1 )
    {
LABEL_11:
      a1[1] = v1;
      operator delete(v4);
      return a1;
    }
    while ( 1 )
    {
      v6 = (_DWORD *)*(v3 - 2);
      v3 -= 6;
      if ( v3 == v6 )
      {
        v5 = 4;
      }
      else
      {
        if ( !v6 )
          goto LABEL_6;
        v5 = 5;
      }
      (*(void (**)(void))(*v6 + 4 * v5))();
LABEL_6:
      if ( v3 == v1 )
      {
        v4 = *a1;
        goto LABEL_11;
      }
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x7f55c
// SYMBOL: sub_7F55C
_DWORD *__fastcall sub_7F55C(_DWORD *a1)
{
  int v1; // r1
  int v3; // r2
  char *v4; // r0
  bool v5; // zf
  int v7; // r0
  int v8; // r1
  int v9; // r2
  bool v10; // zf
  int v11; // r6
  char *v12; // r0
  void **v13; // r5
  void *v14; // r0

  v1 = a1[64];
  v3 = a1[32];
  __dmb(0xBu);
  v4 = (char *)a1[1];
  v5 = v3 == v1;
  if ( v3 != v1 )
    v5 = v4 == 0;
  if ( !v5 )
  {
    do
    {
      v11 = a1[64];
      v12 = &v4[4 * v11];
      v13 = (void **)*((_DWORD *)v12 + 32);
      *((_DWORD *)v12 + 32) = 0;
      if ( v13 )
      {
        v14 = *v13;
        if ( *v13 )
        {
          v13[1] = v14;
          operator delete(v14);
        }
        operator delete(v13);
      }
      v7 = v11 + 1 - *a1;
      if ( v11 + 1 != *a1 )
        v7 = v11 + 1;
      __dmb(0xBu);
      a1[64] = v7;
      v8 = a1[64];
      v9 = a1[32];
      __dmb(0xBu);
      v4 = (char *)a1[1];
      v10 = v9 == v8;
      if ( v9 != v8 )
        v10 = v4 == 0;
    }
    while ( !v10 );
  }
  operator delete[](v4);
  return a1;
}


// ======================================================================
// ADDR: 0x7f5de
// SYMBOL: sub_7F5DE
_DWORD *__fastcall sub_7F5DE(_DWORD *a1)
{
  int v1; // r1
  int v3; // r2
  char *v4; // r0
  bool v5; // zf
  int v7; // r0
  int v8; // r1
  int v9; // r2
  bool v10; // zf
  int v11; // r6
  char *v12; // r0
  void **v13; // r5
  void *v14; // r0

  v1 = a1[64];
  v3 = a1[32];
  __dmb(0xBu);
  v4 = (char *)a1[1];
  v5 = v3 == v1;
  if ( v3 != v1 )
    v5 = v4 == 0;
  if ( !v5 )
  {
    do
    {
      v11 = a1[64];
      v12 = &v4[4 * v11];
      v13 = (void **)*((_DWORD *)v12 + 32);
      *((_DWORD *)v12 + 32) = 0;
      if ( v13 )
      {
        v14 = *v13;
        if ( *v13 )
        {
          v13[1] = v14;
          operator delete(v14);
        }
        operator delete(v13);
      }
      v7 = v11 + 1 - *a1;
      if ( v11 + 1 != *a1 )
        v7 = v11 + 1;
      __dmb(0xBu);
      a1[64] = v7;
      v8 = a1[64];
      v9 = a1[32];
      __dmb(0xBu);
      v4 = (char *)a1[1];
      v10 = v9 == v8;
      if ( v9 != v8 )
        v10 = v4 == 0;
    }
    while ( !v10 );
  }
  operator delete[](v4);
  return a1;
}


// ======================================================================
// ADDR: 0x7f660
// SYMBOL: sub_7F660
int __fastcall sub_7F660(int a1)
{
  void *v2; // r0

  v2 = *(void **)a1;
  if ( v2 )
  {
    *(_DWORD *)(a1 + 4) = v2;
    operator delete(v2);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x7fda0
// SYMBOL: sub_7FDA0
int __fastcall sub_7FDA0(std::__thread_struct **a1)
{
  pthread_key_t *v2; // r0
  std::__thread_struct *v3; // r1
  pthread_key_t v4; // r0
  std::__thread_struct *v5; // r0
  void *v6; // r0

  v2 = (pthread_key_t *)std::__thread_local_data(_stack_chk_guard);
  v3 = *a1;
  v4 = *v2;
  *a1 = 0;
  pthread_setspecific(v4, v3);
  ((void (__fastcall *)(std::__thread_struct *))a1[1])(a1[1]);
  v5 = *a1;
  *a1 = 0;
  if ( v5 )
  {
    std::__thread_struct::~__thread_struct(v5);
    operator delete(v6);
  }
  operator delete(a1);
  return 0;
}


// ======================================================================
// ADDR: 0x7fe48
// SYMBOL: sub_7FE48
int sub_7FE48()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r5
  int v4; // r0
  int v5; // r4
  std::logic_error *exception; // r4

  dword_1A45F8 = 0;
  _cxa_atexit((void (*)(void *))std::thread::~thread, &dword_1A45F8, &off_110560);
  dword_1A4600 = 0;
  dword_1A4604 = 0;
  dword_1A4608 = 0;
  _cxa_atexit((void (*)(void *))std::string::~string, &dword_1A4600, &off_110560);
  dword_1A4980 = 0;
  dword_1A4984 = 0;
  dword_1A4988 = 0;
  _cxa_atexit((void (*)(void *))sub_7F43C, &dword_1A4980, &off_110560);
  dword_1A498C = 0;
  dword_1A4990 = 0;
  dword_1A4994 = 0;
  _cxa_atexit((void (*)(void *))sub_7F484, &dword_1A498C, &off_110560);
  dword_1A4998 = 0;
  dword_1A499C = 0;
  dword_1A49A0 = 0;
  _cxa_atexit((void (*)(void *))sub_7F4CC, &dword_1A4998, &off_110560);
  dword_1A49A4 = 0;
  dword_1A49A8 = 0;
  dword_1A49AC = 0;
  _cxa_atexit((void (*)(void *))sub_7F514, &dword_1A49A4, &off_110560);
  dword_1A4680 = 128;
  v0 = operator new[](0x300u);
  dword_1A4780 = 0;
  dword_1A4700 = 0;
  dword_1A4684 = v0;
  if ( (unsigned int)dword_1A4680 <= 1
    || (_cxa_atexit((void (*)(void *))sub_7F55C, &dword_1A4680, &off_110560),
        dword_1A4800 = 512,
        v1 = operator new[](0x900u),
        dword_1A4900 = 0,
        dword_1A4880 = 0,
        dword_1A4804 = v1,
        (unsigned int)dword_1A4800 <= 1) )
  {
    exception = (std::logic_error *)j___cxa_allocate_exception(8u);
    sub_7FE30(exception, "size < 2");
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::invalid_argument,
      (void (*)(void *))std::invalid_argument::~invalid_argument);
  }
  _cxa_atexit((void (*)(void *))sub_7F5DE, &dword_1A4800, &off_110560);
  dword_1A4610 = 0;
  dword_1A4614 = 0;
  dword_1A4618 = 0;
  v2 = operator new(0x578u);
  v3 = v2 + 1400;
  dword_1A4618 = v2 + 1400;
  dword_1A4610 = v2;
  sub_10967C(v2, 0x578u);
  dword_1A4614 = v3;
  _cxa_atexit((void (*)(void *))sub_7F660, &dword_1A4610, &off_110560);
  dword_1A461C = 0;
  dword_1A4620 = 0;
  dword_1A4624 = 0;
  v4 = operator new(0x578u);
  v5 = v4 + 1400;
  dword_1A4624 = v4 + 1400;
  dword_1A461C = v4;
  sub_10967C(v4, 0x578u);
  dword_1A4620 = v5;
  return sub_10C188(sub_7F660, &dword_1A461C, &off_110560);
}


// ======================================================================
// ADDR: 0x8005e
// SYMBOL: sub_8005E
void __noreturn sub_8005E()
{
  __debugbreak();
}


// ======================================================================
// ADDR: 0x8086c
// SYMBOL: sub_8086C
bool sub_8086C()
{
  int v0; // r0

  v0 = sub_80664("Plugin::OnDeviceInit()");
  sub_83A64(v0);
  return sub_7E380();
}


// ======================================================================
// ADDR: 0x80888
// SYMBOL: sub_80888
int sub_80888()
{
  int v0; // r0
  int v1; // r0

  v0 = sub_86AA8();
  v1 = sub_80B40(v0);
  return sub_83B40(v1);
}


// ======================================================================
// ADDR: 0x8089c
// SYMBOL: sub_8089C
char *sub_8089C()
{
  sub_83AF0();
  return sub_7E3AC();
}


// ======================================================================
// ADDR: 0x80a78
// SYMBOL: sub_80A78
int sub_80A78()
{
  sub_7E534();
  sub_821E0(&dword_1A49D8, dword_1A49DC);
  dword_1A49D8 = (int)&dword_1A49DC;
  dword_1A49DC = 0;
  dword_1A49E0 = 0;
  sub_83120();
  return sub_80254();
}


// ======================================================================
// ADDR: 0x80aaa
// SYMBOL: sub_80AAA
int __fastcall sub_80AAA(int a1)
{
  int result; // r0

  *(_BYTE *)(a1 + 4) = 11;
  *(_DWORD *)a1 = -559038737;
  result = sub_833E8();
  *(_BYTE *)(a1 + 5) = result;
  return result;
}


// ======================================================================
// ADDR: 0x80ac8
// SYMBOL: sub_80AC8
int __fastcall sub_80AC8(int *a1)
{
  int v1; // r2
  int v2; // r0

  v1 = *((unsigned __int8 *)a1 + 4);
  v2 = *a1;
  byte_1A49E4 = v1 != 0;
  if ( !sub_8271C(v2) )
    sub_80664("[sv:inf:plugin:packet:init] : failed init record");
  return 1;
}


// ======================================================================
// ADDR: 0x80af8
// SYMBOL: sub_80AF8
int sub_80AF8()
{
  sub_821E0(&dword_1A49D8, dword_1A49DC);
  dword_1A49DC = 0;
  dword_1A49D8 = (int)&dword_1A49DC;
  dword_1A49E0 = 0;
  byte_1A49E4 = 0;
  byte_1A49E5 = 0;
  byte_1A49E6 = 0;
  return sub_83120();
}


// ======================================================================
// ADDR: 0x81fbc
// SYMBOL: sub_81FBC
int __fastcall sub_81FBC(int a1)
{
  sub_821E0(a1, *(_DWORD *)(a1 + 4));
  return a1;
}


// ======================================================================
// ADDR: 0x81fd0
// SYMBOL: sub_81FD0
_DWORD *__fastcall sub_81FD0(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_1111FC;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x81ff0
// SYMBOL: sub_81FF0
int __fastcall sub_81FF0(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_1111FC;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x8200a
// SYMBOL: sub_8200A
int __fastcall sub_8200A(int a1)
{
  return (*(int (**)(void))(a1 + 4))();
}


// ======================================================================
// ADDR: 0x82010
// SYMBOL: sub_82010
int __fastcall sub_82010(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "PFvvE" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x82028
// SYMBOL: sub_82028
_UNKNOWN **sub_82028()
{
  return &`typeinfo for'void (*)(void);
}


// ======================================================================
// ADDR: 0x82038
// SYMBOL: sub_82038
_DWORD *__fastcall sub_82038(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_11124C;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x82058
// SYMBOL: sub_82058
int __fastcall sub_82058(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_11124C;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x82072
// SYMBOL: sub_82072
int __fastcall sub_82072(int a1)
{
  return (*(int (**)(void))(a1 + 4))();
}


// ======================================================================
// ADDR: 0x82090
// SYMBOL: sub_82090
_UNKNOWN **sub_82090()
{
  return &ZTIPDoFvvE;
}


// ======================================================================
// ADDR: 0x820a4
// SYMBOL: sub_820A4
_DWORD *__fastcall sub_820A4(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_111294;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x820c4
// SYMBOL: sub_820C4
int __fastcall sub_820C4(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_111294;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x820de
// SYMBOL: sub_820DE
int __fastcall sub_820DE(int a1, int a2, unsigned __int16 *a3)
{
  return (*(int (__fastcall **)(int, _DWORD))(a1 + 4))(a2, *a3);
}


// ======================================================================
// ADDR: 0x820e8
// SYMBOL: sub_820E8
int __fastcall sub_820E8(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "PFvRKNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEtE" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x82100
// SYMBOL: sub_82100
_UNKNOWN **sub_82100()
{
  return &`typeinfo for'void (*)(std::string const&,unsigned short);
}


// ======================================================================
// ADDR: 0x82110
// SYMBOL: sub_82110
_DWORD *__fastcall sub_82110(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_1112EC;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x82130
// SYMBOL: sub_82130
int __fastcall sub_82130(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_1112EC;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x8214a
// SYMBOL: sub_8214A
int __fastcall sub_8214A(int a1, int a2)
{
  return (*(int (__fastcall **)(int))(a1 + 4))(a2);
}


// ======================================================================
// ADDR: 0x82150
// SYMBOL: sub_82150
int __fastcall sub_82150(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "PFvRN2SV13ConnectPacketEE" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x82168
// SYMBOL: sub_82168
_UNKNOWN **sub_82168()
{
  return &off_11132C;
}


// ======================================================================
// ADDR: 0x8217c
// SYMBOL: sub_8217C
_DWORD *__fastcall sub_8217C(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_111344;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x8219c
// SYMBOL: sub_8219C
int __fastcall sub_8219C(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_111344;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x821b6
// SYMBOL: sub_821B6
int __fastcall sub_821B6(int a1, int a2)
{
  return (*(int (__fastcall **)(int))(a1 + 4))(a2);
}


// ======================================================================
// ADDR: 0x821bc
// SYMBOL: sub_821BC
int __fastcall sub_821BC(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "PFbRKN2SV16PluginInitPacketEE" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x821d4
// SYMBOL: sub_821D4
_UNKNOWN **sub_821D4()
{
  return &off_111384;
}


// ======================================================================
// ADDR: 0x8221c
// SYMBOL: sub_8221C
_DWORD *__fastcall sub_8221C(int a1)
{
  _DWORD *result; // r0
  int v3; // r2

  result = (_DWORD *)operator new(8u);
  v3 = *(_DWORD *)(a1 + 4);
  *result = &off_11139C;
  result[1] = v3;
  return result;
}


// ======================================================================
// ADDR: 0x8223c
// SYMBOL: sub_8223C
int __fastcall sub_8223C(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  *a2 = &off_11139C;
  a2[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x82256
// SYMBOL: sub_82256
int __fastcall sub_82256(int a1, int a2, unsigned __int16 *a3)
{
  return (*(int (__fastcall **)(int, _DWORD))(a1 + 4))(a2, *a3);
}


// ======================================================================
// ADDR: 0x82260
// SYMBOL: sub_82260
int __fastcall sub_82260(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "PDoFvRK6StreamtE" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x82278
// SYMBOL: sub_82278
_UNKNOWN **sub_82278()
{
  return &off_1113DC;
}


// ======================================================================
// ADDR: 0x8259c
// SYMBOL: sub_8259C
int sub_8259C()
{
  dword_1A49DC = 0;
  dword_1A49E0 = 0;
  dword_1A49D8 = (int)&dword_1A49DC;
  return sub_10C188(sub_81FBC, &dword_1A49D8, &off_110560);
}


// ======================================================================
// ADDR: 0x826f4
// SYMBOL: sub_826F4
int sub_826F4()
{
  dword_1A49F0 = 0;
  *(_DWORD *)algn_1A49F4 = 0;
  dword_1A49F8 = 0;
  return sub_10C188(std::string::~string, &dword_1A49F0, &off_110560);
}


// ======================================================================
// ADDR: 0x834c0
// SYMBOL: sub_834C0
void **__fastcall sub_834C0(void **a1)
{
  void **v1; // r5
  void **v3; // r0
  void **v4; // r6
  int v5; // t1
  void *v6; // r0

  v1 = (void **)*a1;
  if ( *a1 )
  {
    v3 = (void **)a1[1];
    if ( v3 == v1 )
    {
      v6 = v1;
    }
    else
    {
      v4 = (void **)a1[1];
      do
      {
        v5 = *((unsigned __int8 *)v4 - 12);
        v4 -= 3;
        if ( v5 << 31 )
          operator delete(*(v3 - 1));
        v3 = v4;
      }
      while ( v4 != v1 );
      v6 = *a1;
    }
    a1[1] = v1;
    operator delete(v6);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x83500
// SYMBOL: sub_83500
int __fastcall sub_83500(int a1)
{
  void *v2; // r0

  v2 = *(void **)a1;
  if ( v2 )
  {
    *(_DWORD *)(a1 + 4) = v2;
    operator delete(v2);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x836f4
// SYMBOL: sub_836F4
_DWORD *sub_836F4()
{
  _DWORD *result; // r0

  result = (_DWORD *)operator new(8u);
  *result = &off_1113F4;
  return result;
}


// ======================================================================
// ADDR: 0x8370c
// SYMBOL: sub_8370C
_UNKNOWN **__fastcall sub_8370C(int a1, _DWORD *a2)
{
  _UNKNOWN **result; // r0

  result = &off_1113F4;
  *a2 = &off_1113F4;
  return result;
}


// ======================================================================
// ADDR: 0x83724
// SYMBOL: sub_83724
int *sub_83724()
{
  int v0; // r0
  int v1; // r5
  int v2; // r6
  int v3; // t1
  int *result; // r0

  v0 = dword_1A4A04;
  v1 = dword_1A4A00;
  dword_116E18 = -1;
  if ( dword_1A4A04 != dword_1A4A00 )
  {
    v2 = dword_1A4A04;
    do
    {
      v3 = *(unsigned __int8 *)(v2 - 12);
      v2 -= 12;
      if ( v3 << 31 )
        operator delete(*(void **)(v0 - 4));
      v0 = v2;
    }
    while ( v2 != v1 );
  }
  dword_1A4A04 = v1;
  result = &dword_1A4A0C;
  dword_1A4A10 = dword_1A4A0C;
  return result;
}


// ======================================================================
// ADDR: 0x83778
// SYMBOL: sub_83778
int __fastcall sub_83778(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN6Record4InitEjE3$_0" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x83790
// SYMBOL: sub_83790
int **sub_83790()
{
  return &`typeinfo for'Record::Init(unsigned int)::$_0;
}


// ======================================================================
// ADDR: 0x837a0
// SYMBOL: sub_837A0
_DWORD *sub_837A0()
{
  _DWORD *result; // r0

  result = (_DWORD *)operator new(8u);
  *result = &off_111434;
  return result;
}


// ======================================================================
// ADDR: 0x837b8
// SYMBOL: sub_837B8
_UNKNOWN **__fastcall sub_837B8(int a1, _DWORD *a2)
{
  _UNKNOWN **result; // r0

  result = &off_111434;
  *a2 = &off_111434;
  return result;
}


// ======================================================================
// ADDR: 0x837e0
// SYMBOL: sub_837E0
int __fastcall sub_837E0(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN6Record4InitEjE3$_1" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x837f8
// SYMBOL: sub_837F8
int **sub_837F8()
{
  return &`typeinfo for'Record::Init(unsigned int)::$_1;
}


// ======================================================================
// ADDR: 0x83808
// SYMBOL: sub_83808
_DWORD *sub_83808()
{
  _DWORD *result; // r0

  result = (_DWORD *)operator new(8u);
  *result = &off_111474;
  return result;
}


// ======================================================================
// ADDR: 0x83820
// SYMBOL: sub_83820
_UNKNOWN **__fastcall sub_83820(int a1, _DWORD *a2)
{
  _UNKNOWN **result; // r0

  result = &off_111474;
  *a2 = &off_111474;
  return result;
}


// ======================================================================
// ADDR: 0x83848
// SYMBOL: sub_83848
int __fastcall sub_83848(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN6Record4InitEjE3$_2" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x83860
// SYMBOL: sub_83860
int **sub_83860()
{
  return &`typeinfo for'Record::Init(unsigned int)::$_2;
}


// ======================================================================
// ADDR: 0x83870
// SYMBOL: sub_83870
_DWORD *sub_83870()
{
  _DWORD *result; // r0

  result = (_DWORD *)operator new(8u);
  *result = &off_1114B4;
  return result;
}


// ======================================================================
// ADDR: 0x83888
// SYMBOL: sub_83888
_UNKNOWN **__fastcall sub_83888(int a1, _DWORD *a2)
{
  _UNKNOWN **result; // r0

  result = &off_1114B4;
  *a2 = &off_1114B4;
  return result;
}


// ======================================================================
// ADDR: 0x838b8
// SYMBOL: sub_838B8
int __fastcall sub_838B8(int a1, int a2)
{
  char *v2; // r3
  int v3; // r1

  v2 = *(char **)(a2 + 4);
  v3 = 0;
  if ( v2 == "ZN6Record4InitEjE3$_3" )
    return a1 + 4;
  return v3;
}


// ======================================================================
// ADDR: 0x838d0
// SYMBOL: sub_838D0
int **sub_838D0()
{
  return &`typeinfo for'Record::Init(unsigned int)::$_3;
}


// ======================================================================
// ADDR: 0x838dc
// SYMBOL: sub_838DC
int sub_838DC()
{
  dword_1A4A00 = 0;
  dword_1A4A04 = 0;
  dword_1A4A08 = 0;
  _cxa_atexit((void (*)(void *))sub_834C0, &dword_1A4A00, &off_110560);
  dword_1A4A0C = 0;
  dword_1A4A10 = 0;
  dword_1A4A14 = 0;
  return sub_10C188(sub_83500, &dword_1A4A0C, &off_110560);
}


// ======================================================================
// ADDR: 0x83944
// SYMBOL: sub_83944
int __fastcall sub_83944(int a1, int a2)
{
  int (__fastcall *v3)(int, _DWORD, _DWORD); // r5
  int v4; // r0

  v3 = off_1ABF40;
  v4 = sub_7DB44(a2);
  return v3(v4, *(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8));
}


// ======================================================================
// ADDR: 0x839c4
// SYMBOL: sub_839C4
int __fastcall sub_839C4(int a1, int a2)
{
  __int64 v4; // r0
  __int64 v5; // kr00_8
  __int64 v6; // kr08_8
  float v7; // s2
  void (__fastcall *v8)(int, _DWORD, _DWORD); // r5
  int v9; // r0
  void *v10; // r5
  int v11; // r0
  int (__fastcall *v12)(int, _DWORD, _DWORD); // r5
  int v13; // r0

  v4 = sub_86B00();
  v5 = *(_QWORD *)(a1 + 16);
  if ( v4 < v5 )
  {
    v6 = v5 - sub_86B00();
    v7 = *(float *)(a1 + 24) - (float)(sub_108B88(v6, HIDWORD(v6)) * *(float *)(a1 + 8));
    v8 = (void (__fastcall *)(int, _DWORD, _DWORD))off_1ABF40;
    v9 = sub_7DB44(a2);
    v8(v9, *(_DWORD *)(a1 + 4), LODWORD(v7));
    v10 = off_1ABF58;
    v11 = sub_7DB44(a2);
    return ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))v10)(v11, *(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 24), v6);
  }
  else
  {
    v12 = off_1ABF40;
    v13 = sub_7DB44(a2);
    return v12(v13, *(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 24));
  }
}


// ======================================================================
// ADDR: 0x841b0
// SYMBOL: sub_841B0
int __fastcall sub_841B0(int a1, unsigned int a2)
{
  _QWORD *v4; // r4
  int v5; // r0
  _DWORD v7[3]; // [sp+8h] [bp-28h] BYREF
  _DWORD v8[7]; // [sp+14h] [bp-1Ch] BYREF

  if ( a2 >> 2 <= 0xFA )
  {
    v4 = (_QWORD *)sub_84A94(a1);
    v7[0] = a1;
    v7[2] = v7;
    sub_842E4(v8, (char *)&unk_1A6FB0 + 20 * a2);
    v5 = v8[0];
    *(_QWORD *)(v8[0] + 12) = *v4;
    std::string::operator=(v5 + 20, v4 + 1);
  }
  return v8[2];
}


// ======================================================================
// ADDR: 0x8423c
// SYMBOL: sub_8423C
int __fastcall sub_8423C(int a1, unsigned int a2)
{
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  if ( a2 >> 2 <= 0xFA )
  {
    v3[0] = a1;
    sub_84758((char *)&unk_1A6FB0 + 20 * a2, v3);
  }
  return v3[1];
}


// ======================================================================
// ADDR: 0x8428c
// SYMBOL: sub_8428C
void **__fastcall sub_8428C(void **a1)
{
  void **v2; // r6
  void *v3; // r0
  void **v4; // r5
  void **v5; // r4

  v2 = a1 + 5020;
  do
  {
    v4 = (void **)*(v2 - 3);
    if ( v4 )
    {
      do
      {
        v5 = (void **)*v4;
        if ( *((unsigned __int8 *)v4 + 20) << 31 )
          operator delete(v4[7]);
        operator delete(v4);
        v4 = v5;
      }
      while ( v5 );
    }
    v2 -= 5;
    v3 = *v2;
    *v2 = 0;
    if ( v3 )
      operator delete(v3);
  }
  while ( v2 != a1 );
  return a1;
}


// ======================================================================
// ADDR: 0x849b4
// SYMBOL: sub_849B4
int sub_849B4()
{
  int *v0; // r1

  v0 = (int *)&unk_1A6FB0;
  do
  {
    *(_QWORD *)v0 = 0LL;
    *((_QWORD *)v0 + 1) = 0LL;
    v0[4] = 1065353216;
    v0 += 5;
  }
  while ( v0 != &dword_1ABE20 );
  return sub_10C188(sub_8428C, &unk_1A6FB0, &off_110560);
}


// ======================================================================
// ADDR: 0x8532c
// SYMBOL: sub_8532C
void __fastcall sub_8532C(int a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  v1 = (void *)sub_7E094(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0x8565c
// SYMBOL: sub_8565C
void __fastcall sub_8565C(std::exception *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::exception::~exception(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0x856e4
// SYMBOL: sub_856E4
int __fastcall sub_856E4(int a1)
{
  int v2; // r0
  bool v3; // zf
  unsigned int v5; // r1
  int v6; // r0
  _DWORD *v7; // r0
  bool v8; // zf
  int v9; // r5
  int v10; // r1
  int v11; // r0
  int *i; // r5
  __int64 v13; // kr00_8
  void *v14; // r4
  int v15; // r0
  int v16; // [sp+34h] [bp-2Ch] BYREF
  int v17; // [sp+38h] [bp-28h]
  int v18; // [sp+3Ch] [bp-24h]
  int v19; // [sp+44h] [bp-1Ch]

  sub_84A98((_DWORD *)a1);
  v2 = dword_1A4434;
  v3 = dword_1A4434 == 0;
  if ( dword_1A4434 )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(dword_1A4434 + 944) + 16);
    v3 = v2 == 0;
  }
  if ( !v3 )
  {
    v5 = *(unsigned __int16 *)(a1 + 92);
    if ( v5 <= 0x3E8 )
    {
      v6 = *(_DWORD *)(v2 + 4 * v5 + 1004);
      if ( v6 )
      {
        v7 = *(_DWORD **)(v6 + 4);
        v8 = v7 == 0;
        v18 = 0;
        v16 = 0;
        v17 = 0;
        if ( v7 )
        {
          v7 = (_DWORD *)v7[5];
          v8 = v7 == 0;
        }
        if ( !v8 )
        {
          v9 = v7[12];
          v10 = v7[13];
          v11 = v7[14];
          v16 = v9;
          v17 = v10;
          v18 = v11;
        }
        v13 = *(_QWORD *)sub_85328(a1);
        for ( i = (int *)v13; i != (int *)HIDWORD(v13); ++i )
        {
          if ( sub_7DB4C(*i) )
          {
            v14 = off_1ABF60;
            v15 = sub_7DB44(*i);
            ((void (__fastcall *)(int, int *, _DWORD, _DWORD))v14)(v15, &v16, 0, 0);
          }
        }
      }
    }
  }
  return v19;
}


// ======================================================================
// ADDR: 0x857fc
// SYMBOL: sub_857FC
int __fastcall sub_857FC(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  bool v6; // zf
  unsigned int v8; // r1
  int v9; // r0
  _DWORD *v10; // r0
  bool v11; // zf
  int v12; // r2
  int v13; // r1
  int v14; // r0
  void (__fastcall *v15)(int, int *, int *, int *); // r5
  int v16; // r0
  int v17; // [sp+34h] [bp-2Ch] BYREF
  int v18; // [sp+38h] [bp-28h]
  int v19; // [sp+3Ch] [bp-24h]
  int v20; // [sp+44h] [bp-1Ch]

  v4 = (unsigned __int8)byte_1ABE2C;
  __dmb(0xBu);
  if ( !(v4 << 31) && j___cxa_guard_acquire((__guard *)&byte_1ABE2C) )
  {
    dword_1ABE20 = 0;
    *(_DWORD *)algn_1ABE24 = 0;
    dword_1ABE28 = 0;
    j___cxa_guard_release((__guard *)&byte_1ABE2C);
  }
  sub_7E314(a1, a2);
  v5 = dword_1A4434;
  v6 = dword_1A4434 == 0;
  if ( dword_1A4434 )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(dword_1A4434 + 944) + 16);
    v6 = v5 == 0;
  }
  if ( !v6 )
  {
    v8 = *(unsigned __int16 *)(a1 + 92);
    if ( v8 <= 0x3E8 )
    {
      v9 = *(_DWORD *)(v5 + 4 * v8 + 1004);
      if ( v9 )
      {
        v10 = *(_DWORD **)(v9 + 4);
        v11 = v10 == 0;
        v19 = 0;
        v17 = 0;
        v18 = 0;
        if ( v10 )
        {
          v10 = (_DWORD *)v10[5];
          v11 = v10 == 0;
        }
        if ( !v11 )
        {
          v12 = v10[12];
          v13 = v10[13];
          v14 = v10[14];
          v17 = v12;
          v18 = v13;
          v19 = v14;
        }
        v15 = (void (__fastcall *)(int, int *, int *, int *))off_1ABF60;
        v16 = sub_7DB44(a2);
        v15(v16, &v17, &dword_1ABE20, &dword_1ABE20);
      }
    }
  }
  return v20;
}


// ======================================================================
// ADDR: 0x85934
// SYMBOL: sub_85934
void __fastcall sub_85934(int a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  v1 = (void *)sub_7E094(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0x859bc
// SYMBOL: sub_859BC
int __fastcall sub_859BC(int a1)
{
  _DWORD *v2; // r0
  bool v3; // zf
  unsigned int v5; // r1
  bool v6; // zf
  int v7; // r0
  bool v8; // zf
  _DWORD *v9; // r0
  bool v10; // zf
  int v11; // r5
  int v12; // r1
  int v13; // r0
  int *i; // r5
  __int64 v15; // kr00_8
  void *v16; // r4
  int v17; // r0
  int v18; // [sp+34h] [bp-2Ch] BYREF
  int v19; // [sp+38h] [bp-28h]
  int v20; // [sp+3Ch] [bp-24h]
  int v21; // [sp+44h] [bp-1Ch]

  sub_84A98((_DWORD *)a1);
  v2 = (_DWORD *)dword_1A4434;
  v3 = dword_1A4434 == 0;
  if ( dword_1A4434 )
  {
    v2 = **(_DWORD ***)(dword_1A4434 + 944);
    v3 = v2 == 0;
  }
  if ( !v3 )
  {
    v5 = *(unsigned __int16 *)(a1 + 92);
    if ( v5 <= 0x3EC )
    {
      v6 = *((_BYTE *)v2 + v5 + 4020) == 0;
      if ( *((_BYTE *)v2 + v5 + 4020) )
      {
        v2 = (_DWORD *)v2[v5 + 1];
        v6 = v2 == 0;
      }
      if ( !v6 )
      {
        v7 = *v2;
        v8 = v7 == 0;
        if ( v7 )
        {
          v7 = *(_DWORD *)(v7 + 296);
          v8 = v7 == 0;
        }
        if ( !v8 )
        {
          v9 = *(_DWORD **)(v7 + 4);
          v10 = v9 == 0;
          v20 = 0;
          v18 = 0;
          v19 = 0;
          if ( v9 )
          {
            v9 = (_DWORD *)v9[5];
            v10 = v9 == 0;
          }
          if ( !v10 )
          {
            v11 = v9[12];
            v12 = v9[13];
            v13 = v9[14];
            v18 = v11;
            v19 = v12;
            v20 = v13;
          }
          v15 = *(_QWORD *)sub_85328(a1);
          for ( i = (int *)v15; i != (int *)HIDWORD(v15); ++i )
          {
            if ( sub_7DB4C(*i) )
            {
              v16 = off_1ABF60;
              v17 = sub_7DB44(*i);
              ((void (__fastcall *)(int, int *, _DWORD, _DWORD))v16)(v17, &v18, 0, 0);
            }
          }
        }
      }
    }
  }
  return v21;
}


// ======================================================================
// ADDR: 0x85ae8
// SYMBOL: sub_85AE8
int __fastcall sub_85AE8(int a1, int a2)
{
  int v4; // r0
  _DWORD *v5; // r0
  bool v6; // zf
  unsigned int v8; // r1
  bool v9; // zf
  int v10; // r0
  bool v11; // zf
  _DWORD *v12; // r0
  bool v13; // zf
  int v14; // r2
  int v15; // r1
  int v16; // r0
  void (__fastcall *v17)(int, int *, int *, int *); // r5
  int v18; // r0
  int v19; // [sp+34h] [bp-2Ch] BYREF
  int v20; // [sp+38h] [bp-28h]
  int v21; // [sp+3Ch] [bp-24h]
  int v22; // [sp+44h] [bp-1Ch]

  v4 = (unsigned __int8)byte_1ABE3C;
  __dmb(0xBu);
  if ( !(v4 << 31) && j___cxa_guard_acquire((__guard *)&byte_1ABE3C) )
  {
    dword_1ABE30 = 0;
    *(_DWORD *)algn_1ABE34 = 0;
    dword_1ABE38 = 0;
    j___cxa_guard_release((__guard *)&byte_1ABE3C);
  }
  sub_7E314(a1, a2);
  v5 = (_DWORD *)dword_1A4434;
  v6 = dword_1A4434 == 0;
  if ( dword_1A4434 )
  {
    v5 = **(_DWORD ***)(dword_1A4434 + 944);
    v6 = v5 == 0;
  }
  if ( !v6 )
  {
    v8 = *(unsigned __int16 *)(a1 + 92);
    if ( v8 <= 0x3EC )
    {
      v9 = *((_BYTE *)v5 + v8 + 4020) == 0;
      if ( *((_BYTE *)v5 + v8 + 4020) )
      {
        v5 = (_DWORD *)v5[v8 + 1];
        v9 = v5 == 0;
      }
      if ( !v9 )
      {
        v10 = *v5;
        v11 = v10 == 0;
        if ( v10 )
        {
          v10 = *(_DWORD *)(v10 + 296);
          v11 = v10 == 0;
        }
        if ( !v11 )
        {
          v12 = *(_DWORD **)(v10 + 4);
          v13 = v12 == 0;
          v21 = 0;
          v19 = 0;
          v20 = 0;
          if ( v12 )
          {
            v12 = (_DWORD *)v12[5];
            v13 = v12 == 0;
          }
          if ( !v13 )
          {
            v14 = v12[12];
            v15 = v12[13];
            v16 = v12[14];
            v19 = v14;
            v20 = v15;
            v21 = v16;
          }
          v17 = (void (__fastcall *)(int, int *, int *, int *))off_1ABF60;
          v18 = sub_7DB44(a2);
          v17(v18, &v19, &dword_1ABE30, &dword_1ABE30);
        }
      }
    }
  }
  return v22;
}


// ======================================================================
// ADDR: 0x85c38
// SYMBOL: sub_85C38
void __fastcall sub_85C38(int a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  v1 = (void *)sub_7E094(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0x85d1c
// SYMBOL: sub_85D1C
int __fastcall sub_85D1C(int a1, int a2)
{
  int v4; // r0
  int (__fastcall *v5)(int, int, int *, int *); // r6
  int v6; // r0

  v4 = (unsigned __int8)byte_1ABE4C;
  __dmb(0xBu);
  if ( !(v4 << 31) && j___cxa_guard_acquire((__guard *)&byte_1ABE4C) )
  {
    dword_1ABE40 = 0;
    *(_DWORD *)algn_1ABE44 = 0;
    dword_1ABE48 = 0;
    j___cxa_guard_release((__guard *)&byte_1ABE4C);
  }
  sub_7E314(a1, a2);
  v5 = (int (__fastcall *)(int, int, int *, int *))off_1ABF60;
  v6 = sub_7DB44(a2);
  return v5(v6, a1 + 92, &dword_1ABE40, &dword_1ABE40);
}


// ======================================================================
// ADDR: 0x85d9c
// SYMBOL: sub_85D9C
void __fastcall sub_85D9C(int a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  v1 = (void *)sub_7E094(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0x85e24
// SYMBOL: sub_85E24
int __fastcall sub_85E24(int a1)
{
  int v2; // r0
  bool v3; // zf
  unsigned int v5; // r1
  bool v6; // zf
  _DWORD *v7; // r0
  bool v8; // zf
  int v9; // r5
  int v10; // r1
  int v11; // r0
  int *i; // r5
  __int64 v13; // kr00_8
  void *v14; // r4
  int v15; // r0
  int v16; // [sp+34h] [bp-2Ch] BYREF
  int v17; // [sp+38h] [bp-28h]
  int v18; // [sp+3Ch] [bp-24h]
  int v19; // [sp+44h] [bp-1Ch]

  sub_84A98((_DWORD *)a1);
  v2 = dword_1A4434;
  v3 = dword_1A4434 == 0;
  if ( dword_1A4434 )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(dword_1A4434 + 944) + 4);
    v3 = v2 == 0;
  }
  if ( !v3 )
  {
    v5 = *(unsigned __int16 *)(a1 + 92);
    if ( v5 >> 4 <= 0x7C )
    {
      v6 = *(_BYTE *)(v2 + v5 + 40000) == 0;
      if ( *(_BYTE *)(v2 + v5 + 40000) )
      {
        v2 = *(_DWORD *)(v2 + 4 * v5);
        v6 = v2 == 0;
      }
      if ( !v6 )
      {
        v7 = *(_DWORD **)(v2 + 4);
        v8 = v7 == 0;
        v18 = 0;
        v16 = 0;
        v17 = 0;
        if ( v7 )
        {
          v7 = (_DWORD *)v7[5];
          v8 = v7 == 0;
        }
        if ( !v8 )
        {
          v9 = v7[12];
          v10 = v7[13];
          v11 = v7[14];
          v16 = v9;
          v17 = v10;
          v18 = v11;
        }
        v13 = *(_QWORD *)sub_85328(a1);
        for ( i = (int *)v13; i != (int *)HIDWORD(v13); ++i )
        {
          if ( sub_7DB4C(*i) )
          {
            v14 = off_1ABF60;
            v15 = sub_7DB44(*i);
            ((void (__fastcall *)(int, int *, _DWORD, _DWORD))v14)(v15, &v16, 0, 0);
          }
        }
      }
    }
  }
  return v19;
}


// ======================================================================
// ADDR: 0x85f44
// SYMBOL: sub_85F44
int __fastcall sub_85F44(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  bool v6; // zf
  unsigned int v8; // r1
  bool v9; // zf
  _DWORD *v10; // r0
  bool v11; // zf
  int v12; // r2
  int v13; // r1
  int v14; // r0
  void (__fastcall *v15)(int, int *, int *, int *); // r5
  int v16; // r0
  int v17; // [sp+34h] [bp-2Ch] BYREF
  int v18; // [sp+38h] [bp-28h]
  int v19; // [sp+3Ch] [bp-24h]
  int v20; // [sp+44h] [bp-1Ch]

  v4 = (unsigned __int8)byte_1ABE5C;
  __dmb(0xBu);
  if ( !(v4 << 31) && j___cxa_guard_acquire((__guard *)&byte_1ABE5C) )
  {
    dword_1ABE50 = 0;
    *(_DWORD *)algn_1ABE54 = 0;
    dword_1ABE58 = 0;
    j___cxa_guard_release((__guard *)&byte_1ABE5C);
  }
  sub_7E314(a1, a2);
  v5 = dword_1A4434;
  v6 = dword_1A4434 == 0;
  if ( dword_1A4434 )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(dword_1A4434 + 944) + 4);
    v6 = v5 == 0;
  }
  if ( !v6 )
  {
    v8 = *(unsigned __int16 *)(a1 + 92);
    if ( v8 >> 4 <= 0x7C )
    {
      v9 = *(_BYTE *)(v5 + v8 + 40000) == 0;
      if ( *(_BYTE *)(v5 + v8 + 40000) )
      {
        v5 = *(_DWORD *)(v5 + 4 * v8);
        v9 = v5 == 0;
      }
      if ( !v9 )
      {
        v10 = *(_DWORD **)(v5 + 4);
        v11 = v10 == 0;
        v19 = 0;
        v17 = 0;
        v18 = 0;
        if ( v10 )
        {
          v10 = (_DWORD *)v10[5];
          v11 = v10 == 0;
        }
        if ( !v11 )
        {
          v12 = v10[12];
          v13 = v10[13];
          v14 = v10[14];
          v17 = v12;
          v18 = v13;
          v19 = v14;
        }
        v15 = (void (__fastcall *)(int, int *, int *, int *))off_1ABF60;
        v16 = sub_7DB44(a2);
        v15(v16, &v17, &dword_1ABE50, &dword_1ABE50);
      }
    }
  }
  return v20;
}


// ======================================================================
// ADDR: 0x86084
// SYMBOL: sub_86084
void __fastcall sub_86084(int a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  v1 = (void *)sub_7E094(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0x86668
// SYMBOL: sub_86668
int sub_86668()
{
  dword_1ABE64 = 0;
  dword_1ABE68 = 0;
  dword_1ABE6C = 0;
  _cxa_atexit((void (*)(void *))sub_7F514, &dword_1ABE64, &off_110560);
  dword_1ABE70 = 0;
  dword_1ABE74 = 0;
  dword_1ABE78 = 0;
  _cxa_atexit((void (*)(void *))sub_7F514, &dword_1ABE70, &off_110560);
  dword_1ABE7C = 0;
  dword_1ABE80 = 0;
  dword_1ABE84 = 0;
  return sub_10C188(sub_7F514, &dword_1ABE7C, &off_110560);
}


// ======================================================================
// ADDR: 0x86a58
// SYMBOL: sub_86A58
int sub_86A58()
{
  dword_1ABE8C = 0;
  dword_1ABE90 = 0;
  dword_1ABE94 = 0;
  _cxa_atexit((void (*)(void *))sub_7F514, &dword_1ABE8C, &off_110560);
  dword_1ABE98 = 0;
  dword_1ABE9C = 0;
  dword_1ABEA0 = 0;
  return sub_10C188(sub_7F514, &dword_1ABE98, &off_110560);
}


// ======================================================================
// ADDR: 0x86b14
// SYMBOL: sub_86B14
_DWORD *__fastcall sub_86B14(_DWORD *a1)
{
  _DWORD *v2; // r0
  __int64 v3; // kr00_8
  bool v4; // zf
  int v5; // r2
  _DWORD *v6; // r1
  _DWORD *v7; // r5

  if ( a1[2] )
  {
    v3 = *(_QWORD *)a1;
    v2 = (_DWORD *)a1[1];
    v4 = a1[1] == (_DWORD)a1;
    v5 = *(_DWORD *)a1[1];
    *(_DWORD *)(v5 + 4) = *(_DWORD *)(*a1 + 4);
    v6 = *(_DWORD **)(v3 + 4);
    a1[2] = 0;
    *v6 = v5;
    if ( !v4 )
    {
      do
      {
        v7 = (_DWORD *)v2[1];
        operator delete(v2);
        v2 = v7;
      }
      while ( v7 != a1 );
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x86b48
// SYMBOL: sub_86B48
int sub_86B48()
{
  _cxa_atexit((void (*)(void *))std::mutex::~mutex, &unk_1ABEB0, &off_110560);
  dword_1ABEBC = 0;
  dword_1ABEB4 = (int)&dword_1ABEB4;
  unk_1ABEB8 = &dword_1ABEB4;
  return sub_10C188(sub_86B14, &dword_1ABEB4, &off_110560);
}


// ======================================================================
// ADDR: 0x876f4
// SYMBOL: sub_876F4
int sub_876F4()
{
  sub_87724(&unk_1ABEC0);
  return sub_10C188(sub_87734, &unk_1ABEC0, &off_110560);
}


// ======================================================================
// ADDR: 0x87734
// SYMBOL: sub_87734
pthread_mutex_t *__fastcall sub_87734(pthread_mutex_t *a1)
{
  pthread_mutex_destroy(a1);
  return a1;
}


// ======================================================================
// ADDR: 0x87748
// SYMBOL: sub_87748
void sub_87748()
{
  if ( byte_1ABEC4 )
    byte_1ABEC4 = 0;
}


// ======================================================================
// ADDR: 0x87780
// SYMBOL: sub_87780
int sub_87780()
{
  if ( !byte_1ABEC4 )
    byte_1ABEC4 = 1;
  return sub_10C188(sub_87748, &unk_1ABEC5, &off_110560);
}


// ======================================================================
// ADDR: 0x87b50
// SYMBOL: sub_87B50
int __fastcall sub_87B50(int a1)
{
  void *v2; // r0
  bool v3; // zf

  v2 = *(void **)(a1 + 8);
  v3 = v2 == 0;
  if ( v2 )
  {
    v2 = *(void **)a1;
    v3 = *(_DWORD *)a1 == 0;
  }
  if ( !v3 )
    operator delete[](v2);
  return a1;
}


// ======================================================================
// ADDR: 0x87b68
// SYMBOL: sub_87B68
int sub_87B68()
{
  dword_1ABECC = 0;
  unk_1ABED0 = 0;
  dword_1ABED4 = 0;
  return sub_10C188(sub_87B50, &dword_1ABECC, &off_110560);
}


// ======================================================================
// ADDR: 0x882e4
// SYMBOL: sub_882E4
int sub_882E4()
{
  if ( *(_DWORD *)(dword_1ACF68 + 11476) )
    return *(_DWORD *)&byte_8[dword_1ACF68 + 11476];
  else
    return 0;
}


// ======================================================================
// ADDR: 0x88300
// SYMBOL: sub_88300
size_t __fastcall sub_88300(int a1, char *s)
{
  int v3; // r2
  size_t *v4; // r4
  int v5; // r0
  int v6; // r6
  int (*v7)(void); // r5
  int v8; // r1
  signed int v9; // r5
  signed int v10; // r0
  signed int v11; // r10
  int v12; // r1
  int v13; // r6
  void *v14; // r0
  const void *v15; // r1
  size_t v16; // r8
  int v17; // r1
  size_t v18; // r0
  bool v19; // zf
  void *v20; // r0
  size_t result; // r0

  v3 = dword_1ACF68;
  v4 = (size_t *)(dword_1ACF68 + 11476);
  v5 = *(_DWORD *)(dword_1ACF68 + 11484);
  if ( v5 )
  {
    v6 = *(_DWORD *)(dword_1ACF68 + 880);
    *v4 = 0;
    v4[1] = 0;
    v7 = off_11724C;
    v8 = dword_1ACF70;
    *(_DWORD *)(v3 + 880) = v6 - 1;
    ((void (__fastcall *)(int, int))v7)(v5, v8);
    v4[2] = 0;
  }
  v9 = strlen(s);
  v10 = v4[1];
  v11 = v9 + 1;
  if ( v10 <= v9 )
  {
    if ( v10 )
      v12 = v10 + v10 / 2;
    else
      v12 = 8;
    v13 = v9 + 1;
    if ( v12 > v11 )
      v13 = v12;
    if ( v10 < v13 )
    {
      if ( dword_1ACF68 )
        ++*(_DWORD *)(dword_1ACF68 + 880);
      v14 = (void *)off_117248(v13, dword_1ACF70);
      v15 = (const void *)v4[2];
      v16 = (size_t)v14;
      if ( v15 )
      {
        j_memcpy(v14, v15, *v4);
        v18 = v4[2];
        v19 = v18 == 0;
        if ( v18 )
        {
          v17 = dword_1ACF68;
          v19 = dword_1ACF68 == 0;
        }
        if ( !v19 )
          --*(_DWORD *)(v17 + 880);
        off_11724C();
      }
      v4[1] = v13;
      v4[2] = v16;
    }
  }
  v20 = (void *)v4[2];
  *v4 = v11;
  j_memcpy(v20, s, v9);
  result = v4[2];
  *(_BYTE *)(result + v9) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x94238
// SYMBOL: sub_94238
int __fastcall sub_94238(int a1, int a2, char *s)
{
  int v3; // r3
  char *v4; // r1
  unsigned int v5; // r0
  int v6; // r4
  bool v7; // zf
  int v8; // r1
  int v9; // r3
  int result; // r0

  v3 = (unsigned __int8)*s;
  if ( *s )
  {
    v4 = s + 1;
    v5 = -1;
    do
    {
      v6 = v3;
      v3 = (unsigned __int8)*v4;
      v7 = v6 == 35;
      if ( v6 == 35 )
        v7 = v3 == 35;
      if ( v7 )
      {
        v3 = 35;
        if ( v4[1] == 35 )
          v5 = -1;
      }
      ++v4;
      v5 = dword_52D88[(unsigned __int8)v5 ^ v6] ^ (v5 >> 8);
    }
    while ( v3 );
    v8 = ~v5;
  }
  else
  {
    v8 = 0;
  }
  v9 = *(_DWORD *)(dword_1ACF68 + 11540);
  if ( !v9 )
    return sub_9A060(s);
  for ( result = *(_DWORD *)(dword_1ACF68 + 11548); *(_DWORD *)(result + 4) != v8; result += 28 )
  {
    if ( !--v9 )
      return sub_9A060(s);
  }
  return result;
}


// ======================================================================
// ADDR: 0x942c0
// SYMBOL: sub_942C0
int __fastcall sub_942C0(int a1, int a2, int a3, char *s)
{
  float v7; // s4
  float v8; // s2
  char v9; // r0
  int v11; // [sp+0h] [bp-20h] BYREF
  float v12; // [sp+4h] [bp-1Ch] BYREF
  float v13; // [sp+8h] [bp-18h] BYREF
  int v14; // [sp+Ch] [bp-14h]

  if ( sscanf(s, "Pos=%f,%f", &v13, &v12) == 2 )
  {
    *(_QWORD *)(a3 + 8) = __PAIR64__(LODWORD(v12), LODWORD(v13));
  }
  else if ( sscanf(s, "Size=%f,%f", &v13, &v12) == 2 )
  {
    v7 = *(float *)(a1 + 5424);
    v8 = *(float *)(a1 + 5420);
    if ( v12 >= v7 )
      v7 = v12;
    if ( v13 >= v8 )
      v8 = v13;
    *(float *)(a3 + 16) = v8;
    *(float *)(a3 + 20) = v7;
  }
  else if ( sscanf(s, "Collapsed=%d", &v11) == 1 )
  {
    v9 = v11;
    if ( v11 )
      v9 = 1;
    *(_BYTE *)(a3 + 24) = v9;
  }
  return v14;
}


// ======================================================================
// ADDR: 0x9438c
// SYMBOL: sub_9438C
int __fastcall sub_9438C(int a1, _DWORD *a2, size_t *a3)
{
  int v4; // r1
  int *v5; // r10
  int *v6; // r5
  int v7; // r6
  int v8; // r0
  int v9; // r4
  int v10; // r0
  int v11; // r1
  int result; // r0
  int v13; // r5
  void *v14; // r0
  const void *v15; // r1
  size_t v16; // r9
  int v17; // r1
  size_t v18; // r0
  bool v19; // zf
  int v20; // r6
  int i; // r4
  int v22; // r1
  int v23; // r5
  const char *v24; // r9
  char *v25; // r0

  v4 = *(_DWORD *)(a1 + 6508);
  v5 = (int *)(a1 + 11540);
  if ( v4 )
  {
    v6 = (int *)(a1 + 6508);
    v7 = 0;
    while ( 1 )
    {
      v9 = *(_DWORD *)(v6[2] + 4 * v7);
      if ( *(unsigned __int8 *)(v9 + 9) << 31 )
        goto LABEL_5;
      v10 = *(_DWORD *)(v9 + 632);
      if ( v10 != -1 )
        break;
      v11 = *(_DWORD *)(dword_1ACF68 + 11540);
      if ( v11 )
      {
        v8 = *(_DWORD *)(dword_1ACF68 + 11548);
        while ( *(_DWORD *)(v8 + 4) != *(_DWORD *)(v9 + 4) )
        {
          --v11;
          v8 += 28;
          if ( !v11 )
            goto LABEL_3;
        }
LABEL_9:
        if ( v8 )
          goto LABEL_4;
      }
LABEL_3:
      v8 = sub_9A060(*(char **)v9);
      *(_DWORD *)(v9 + 632) = -1227133513 * ((v8 - v5[2]) >> 2);
LABEL_4:
      *(_QWORD *)(v8 + 8) = *(_QWORD *)(v9 + 12);
      *(_QWORD *)(v8 + 16) = *(_QWORD *)(v9 + 28);
      v4 = *v6;
      *(_BYTE *)(v8 + 24) = *(_BYTE *)(v9 + 125);
LABEL_5:
      if ( ++v7 == v4 )
        goto LABEL_16;
    }
    v8 = v5[2] + 28 * v10;
    goto LABEL_9;
  }
LABEL_16:
  result = *v5;
  v13 = *a3 + 96 * *v5 - 1;
  if ( !*a3 )
    v13 = 96 * *v5;
  if ( (int)a3[1] < v13 )
  {
    if ( dword_1ACF68 )
      ++*(_DWORD *)(dword_1ACF68 + 880);
    v14 = (void *)off_117248(v13, dword_1ACF70);
    v15 = (const void *)a3[2];
    v16 = (size_t)v14;
    if ( v15 )
    {
      j_memcpy(v14, v15, *a3);
      v18 = a3[2];
      v19 = v18 == 0;
      if ( v18 )
      {
        v17 = dword_1ACF68;
        v19 = dword_1ACF68 == 0;
      }
      if ( !v19 )
        --*(_DWORD *)(v17 + 880);
      off_11724C(v18, dword_1ACF70);
    }
    result = *v5;
    a3[1] = v13;
    a3[2] = v16;
  }
  if ( result )
  {
    v20 = 0;
    for ( i = 0; i != result; ++i )
    {
      v22 = v5[2];
      v23 = v22 + v20;
      if ( *(float *)(v22 + v20 + 8) != 3.4028e38 )
      {
        v24 = *(const char **)(v22 + v20);
        v25 = strstr(v24, "###");
        if ( v25 )
          v24 = v25;
        sub_88F1C((int)a3, "[%s][%s]\n", *a2, v24);
        sub_88F1C((int)a3, "Pos=%d,%d\n", (int)*(float *)(v23 + 8), (int)*(float *)(v23 + 12));
        sub_88F1C((int)a3, "Size=%d,%d\n", (int)*(float *)(v23 + 16), (int)*(float *)(v23 + 20));
        sub_88F1C((int)a3, "Collapsed=%d\n", *(unsigned __int8 *)(v23 + 24));
        sub_88F1C((int)a3, "\n");
        result = *v5;
      }
      v20 += 28;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x9ad0c
// SYMBOL: sub_9AD0C
int __fastcall sub_9AD0C(int *a1, int *a2)
{
  int v2; // lr
  int v3; // r12
  int v4; // r1
  int v5; // r3
  bool v6; // zf
  int result; // r0

  v2 = *a2;
  v3 = *a1;
  v4 = *(_DWORD *)(*a2 + 8);
  v5 = *(_DWORD *)(*a1 + 8);
  result = (v5 & 0x4000000) - (v4 & 0x4000000);
  v6 = (v5 & 0x4000000) == (v4 & 0x4000000);
  if ( (v5 & 0x4000000) == (v4 & 0x4000000) )
  {
    result = (v5 & 0x2000000) - (v4 & 0x2000000);
    v6 = (v5 & 0x2000000) == (v4 & 0x2000000);
  }
  if ( v6 )
    return *(__int16 *)(v3 + 134) - *(__int16 *)(v2 + 134);
  return result;
}


// ======================================================================
// ADDR: 0xa52c8
// SYMBOL: sub_A52C8
int __fastcall sub_A52C8(int a1, int a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3
  int result; // r0
  unsigned int v5; // r2
  unsigned int v6; // r1

  v2 = *(unsigned __int16 *)(a2 + 6);
  v3 = *(unsigned __int16 *)(a1 + 6);
  if ( v3 > v2 )
    return -1;
  if ( v3 < v2 )
    return 1;
  v5 = *(unsigned __int16 *)(a1 + 4);
  v6 = *(unsigned __int16 *)(a2 + 4);
  result = v5 < v6;
  if ( v5 > v6 )
    return -1;
  return result;
}


// ======================================================================
// ADDR: 0xa52f0
// SYMBOL: sub_A52F0
int __fastcall sub_A52F0(int a1, int a2)
{
  int v2; // r2
  int v3; // r1
  int result; // r0

  v2 = *(_DWORD *)(a1 + 12);
  v3 = *(_DWORD *)(a2 + 12);
  result = v2 > v3;
  if ( v2 < v3 )
    return -1;
  return result;
}


// ======================================================================
// ADDR: 0xafdf0
// SYMBOL: sub_AFDF0
int __fastcall sub_AFDF0(int a1)
{
  sub_B0798();
  return a1;
}


// ======================================================================
// ADDR: 0xc0b2c
// SYMBOL: sub_C0B2C
int __fastcall sub_C0B2C(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r6
  int v7; // r7
  int v8; // r2

  *(_WORD *)(v7 + a4) = v7;
  *(_DWORD *)(v6 + 40) = a4;
  v8 = *(_DWORD *)(loc_C0BA0 + 56);
  *(_BYTE *)(loc_C0BA0 + 21) = a1;
  return sub_C0B3C(a1, a2, v8, a4, a5, a6);
}


// ======================================================================
// ADDR: 0xe29fc
// SYMBOL: sub_E29FC
const char *sub_E29FC()
{
  return "iostream";
}


// ======================================================================
// ADDR: 0xe2a08
// SYMBOL: sub_E2A08
_DWORD *__fastcall sub_E2A08(_DWORD *a1, int a2, int a3)
{
  if ( a3 == 1 || a3 >= 4096 )
    return sub_5FBF8(a1, "unspecified iostream_category error");
  else
    return (_DWORD *)sub_FC90C();
}


// ======================================================================
// ADDR: 0xe2f34
// SYMBOL: sub_E2F34
void __fastcall sub_E2F34(std::error_category *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::error_category::~error_category(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xe8050
// SYMBOL: sub_E8050
void __noreturn sub_E8050(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        ...)
{
  int v11; // r0
  va_list va; // [sp+1Ch] [bp+1Ch] BYREF

  va_start(va, a11);
  v11 = std::string::~string((char *)va);
  j___cxa_end_cleanup(v11);
}


// ======================================================================
// ADDR: 0xee63c
// SYMBOL: sub_EE63C
void __fastcall sub_EE63C(int a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  v1 = (void *)sub_EE5E8(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf5df4
// SYMBOL: sub_F5DF4
void __fastcall sub_F5DF4(std::__shared_weak_count *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::__shared_weak_count::~__shared_weak_count(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf5e04
// SYMBOL: sub_F5E04
void __fastcall sub_F5E04(std::__shared_weak_count *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::__shared_weak_count::~__shared_weak_count(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf5e14
// SYMBOL: sub_F5E14
void __fastcall sub_F5E14(std::__shared_weak_count *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::__shared_weak_count::~__shared_weak_count(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf5e24
// SYMBOL: sub_F5E24
void __fastcall sub_F5E24(std::__shared_weak_count *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::__shared_weak_count::~__shared_weak_count(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf5e38
// SYMBOL: sub_F5E38
void __fastcall sub_F5E38(std::__shared_weak_count *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::__shared_weak_count::~__shared_weak_count(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf5e4c
// SYMBOL: sub_F5E4C
void __fastcall sub_F5E4C(std::__shared_weak_count *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::__shared_weak_count::~__shared_weak_count(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf5e72
// SYMBOL: sub_F5E72
void __fastcall sub_F5E72(int a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  v1 = (void *)sub_F5E5C(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf5e82
// SYMBOL: sub_F5E82
int __fastcall sub_F5E82(int a1)
{
  return std::__time_get_storage<char>::__do_date_order(a1 + 12);
}


// ======================================================================
// ADDR: 0xf5e88
// SYMBOL: sub_F5E88
int __fastcall sub_F5E88(int a1)
{
  return a1 + 16;
}


// ======================================================================
// ADDR: 0xf5e8c
// SYMBOL: sub_F5E8C
int __fastcall sub_F5E8C(int a1)
{
  return a1 + 184;
}


// ======================================================================
// ADDR: 0xf5e90
// SYMBOL: sub_F5E90
int __fastcall sub_F5E90(int a1)
{
  return a1 + 472;
}


// ======================================================================
// ADDR: 0xf5e96
// SYMBOL: sub_F5E96
int __fastcall sub_F5E96(int a1)
{
  return a1 + 496;
}


// ======================================================================
// ADDR: 0xf5e9c
// SYMBOL: sub_F5E9C
int __fastcall sub_F5E9C(int a1)
{
  return a1 + 508;
}


// ======================================================================
// ADDR: 0xf5ea2
// SYMBOL: sub_F5EA2
int __fastcall sub_F5EA2(int a1)
{
  return a1 + 520;
}


// ======================================================================
// ADDR: 0xf5ea8
// SYMBOL: sub_F5EA8
int __fastcall sub_F5EA8(int a1)
{
  return a1 + 532;
}


// ======================================================================
// ADDR: 0xf5eae
// SYMBOL: sub_F5EAE
int __fastcall sub_F5EAE(int a1)
{
  return a1 + 8;
}


// ======================================================================
// ADDR: 0xf5eb2
// SYMBOL: sub_F5EB2
int __fastcall sub_F5EB2(int a1)
{
  return a1 + 176;
}


// ======================================================================
// ADDR: 0xf5eb6
// SYMBOL: sub_F5EB6
int __fastcall sub_F5EB6(int a1)
{
  return a1 + 464;
}


// ======================================================================
// ADDR: 0xf5ebc
// SYMBOL: sub_F5EBC
int __fastcall sub_F5EBC(int a1)
{
  return a1 + 488;
}


// ======================================================================
// ADDR: 0xf5ec2
// SYMBOL: sub_F5EC2
int __fastcall sub_F5EC2(int a1)
{
  return a1 + 500;
}


// ======================================================================
// ADDR: 0xf5ec8
// SYMBOL: sub_F5EC8
int __fastcall sub_F5EC8(int a1)
{
  return a1 + 512;
}


// ======================================================================
// ADDR: 0xf5ece
// SYMBOL: sub_F5ECE
int __fastcall sub_F5ECE(int a1)
{
  return a1 + 524;
}


// ======================================================================
// ADDR: 0xf5eea
// SYMBOL: sub_F5EEA
void __fastcall sub_F5EEA(int a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  v1 = (void *)sub_F5ED4(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf5efa
// SYMBOL: sub_F5EFA
int __fastcall sub_F5EFA(int a1)
{
  return std::__time_get_storage<wchar_t>::__do_date_order(a1 + 12);
}


// ======================================================================
// ADDR: 0xf5f00
// SYMBOL: sub_F5F00
int __fastcall sub_F5F00(int a1)
{
  return a1 + 16;
}


// ======================================================================
// ADDR: 0xf5f04
// SYMBOL: sub_F5F04
int __fastcall sub_F5F04(int a1)
{
  return a1 + 184;
}


// ======================================================================
// ADDR: 0xf5f08
// SYMBOL: sub_F5F08
int __fastcall sub_F5F08(int a1)
{
  return a1 + 472;
}


// ======================================================================
// ADDR: 0xf5f0e
// SYMBOL: sub_F5F0E
int __fastcall sub_F5F0E(int a1)
{
  return a1 + 496;
}


// ======================================================================
// ADDR: 0xf5f14
// SYMBOL: sub_F5F14
int __fastcall sub_F5F14(int a1)
{
  return a1 + 508;
}


// ======================================================================
// ADDR: 0xf5f1a
// SYMBOL: sub_F5F1A
int __fastcall sub_F5F1A(int a1)
{
  return a1 + 520;
}


// ======================================================================
// ADDR: 0xf5f20
// SYMBOL: sub_F5F20
int __fastcall sub_F5F20(int a1)
{
  return a1 + 532;
}


// ======================================================================
// ADDR: 0xf5f26
// SYMBOL: sub_F5F26
int __fastcall sub_F5F26(int a1)
{
  return a1 + 8;
}


// ======================================================================
// ADDR: 0xf5f2a
// SYMBOL: sub_F5F2A
int __fastcall sub_F5F2A(int a1)
{
  return a1 + 176;
}


// ======================================================================
// ADDR: 0xf5f2e
// SYMBOL: sub_F5F2E
int __fastcall sub_F5F2E(int a1)
{
  return a1 + 464;
}


// ======================================================================
// ADDR: 0xf5f34
// SYMBOL: sub_F5F34
int __fastcall sub_F5F34(int a1)
{
  return a1 + 488;
}


// ======================================================================
// ADDR: 0xf5f3a
// SYMBOL: sub_F5F3A
int __fastcall sub_F5F3A(int a1)
{
  return a1 + 500;
}


// ======================================================================
// ADDR: 0xf5f40
// SYMBOL: sub_F5F40
int __fastcall sub_F5F40(int a1)
{
  return a1 + 512;
}


// ======================================================================
// ADDR: 0xf5f46
// SYMBOL: sub_F5F46
int __fastcall sub_F5F46(int a1)
{
  return a1 + 524;
}


// ======================================================================
// ADDR: 0xf5f4c
// SYMBOL: sub_F5F4C
void sub_F5F4C()
{
  __int64 v0; // r0

  v0 = sub_F5F6C();
  operator delete((void *)v0, (const std::nothrow_t *)HIDWORD(v0));
}


// ======================================================================
// ADDR: 0xf5f5c
// SYMBOL: sub_F5F5C
void sub_F5F5C()
{
  __int64 v0; // r0

  v0 = sub_F5F92();
  operator delete((void *)v0, (const std::nothrow_t *)HIDWORD(v0));
}


// ======================================================================
// ADDR: 0xf5f82
// SYMBOL: sub_F5F82
void __fastcall sub_F5F82(int a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  v1 = (void *)sub_F5F6C(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf5fa8
// SYMBOL: sub_F5FA8
void __fastcall sub_F5FA8(int a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  v1 = (void *)sub_F5F92(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf5fb8
// SYMBOL: sub_F5FB8
void __fastcall sub_F5FB8(std::__shared_weak_count *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::__shared_weak_count::~__shared_weak_count(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf5fc8
// SYMBOL: sub_F5FC8
void __fastcall sub_F5FC8(std::__shared_weak_count *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::__shared_weak_count::~__shared_weak_count(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf5fd8
// SYMBOL: sub_F5FD8
void __fastcall sub_F5FD8(std::__shared_weak_count *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::__shared_weak_count::~__shared_weak_count(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf5fec
// SYMBOL: sub_F5FEC
void __fastcall sub_F5FEC(std::__shared_weak_count *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::__shared_weak_count::~__shared_weak_count(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf6048
// SYMBOL: sub_F6048
void __fastcall sub_F6048(_DWORD *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  v1 = (void *)sub_F5FFC(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf60a4
// SYMBOL: sub_F60A4
void __fastcall sub_F60A4(_DWORD *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  v1 = (void *)sub_F6058(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf6100
// SYMBOL: sub_F6100
void __fastcall sub_F6100(_DWORD *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  v1 = (void *)sub_F60B4(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf615c
// SYMBOL: sub_F615C
void __fastcall sub_F615C(_DWORD *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  v1 = (void *)sub_F6110(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf616c
// SYMBOL: sub_F616C
void __fastcall sub_F616C(std::__shared_weak_count *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::__shared_weak_count::~__shared_weak_count(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf617c
// SYMBOL: sub_F617C
void __fastcall sub_F617C(std::__shared_weak_count *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::__shared_weak_count::~__shared_weak_count(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf618c
// SYMBOL: sub_F618C
void __fastcall sub_F618C(std::__shared_weak_count *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::__shared_weak_count::~__shared_weak_count(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf619c
// SYMBOL: sub_F619C
void __fastcall sub_F619C(std::__shared_weak_count *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::__shared_weak_count::~__shared_weak_count(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf61ac
// SYMBOL: sub_F61AC
void __fastcall sub_F61AC(std::__shared_weak_count *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::__shared_weak_count::~__shared_weak_count(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf61bc
// SYMBOL: sub_F61BC
void __fastcall sub_F61BC(std::__shared_weak_count *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::__shared_weak_count::~__shared_weak_count(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf61cc
// SYMBOL: sub_F61CC
void __fastcall sub_F61CC(std::__shared_weak_count *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::__shared_weak_count::~__shared_weak_count(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf61dc
// SYMBOL: sub_F61DC
void __fastcall sub_F61DC(std::__shared_weak_count *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::__shared_weak_count::~__shared_weak_count(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf6204
// SYMBOL: sub_F6204
int sub_F6204()
{
  int i; // r4
  int result; // r0

  for ( i = 156; i != -12; result = i + 12 )
  {
    std::string::~string((char *)&unk_1AEF8C + i);
    i -= 12;
  }
  return result;
}


// ======================================================================
// ADDR: 0xf6224
// SYMBOL: sub_F6224
int sub_F6224()
{
  int i; // r4
  int result; // r0

  for ( i = 156; i != -12; result = i + 12 )
  {
    std::wstring::~wstring((char *)&unk_1AF034 + i);
    i -= 12;
  }
  return result;
}


// ======================================================================
// ADDR: 0xf6244
// SYMBOL: sub_F6244
int sub_F6244()
{
  int i; // r4
  int result; // r0

  for ( i = 276; i != -12; result = i + 12 )
  {
    std::string::~string((char *)&unk_1AF0DC + i);
    i -= 12;
  }
  return result;
}


// ======================================================================
// ADDR: 0xf6264
// SYMBOL: sub_F6264
int sub_F6264()
{
  int i; // r4
  int result; // r0

  for ( i = 276; i != -12; result = i + 12 )
  {
    std::wstring::~wstring((char *)&unk_1AF1FC + i);
    i -= 12;
  }
  return result;
}


// ======================================================================
// ADDR: 0xf6284
// SYMBOL: sub_F6284
int sub_F6284()
{
  int i; // r4
  int result; // r0

  for ( i = 28; i != 4; i -= 12 )
    result = std::string::~string((char *)&unk_1AF5A8 + i);
  return result;
}


// ======================================================================
// ADDR: 0xf62a0
// SYMBOL: sub_F62A0
int sub_F62A0()
{
  int i; // r4
  int result; // r0

  for ( i = 52; i != 28; i -= 12 )
    result = std::wstring::~wstring((char *)&unk_1AF5A8 + i);
  return result;
}


// ======================================================================
// ADDR: 0xf6738
// SYMBOL: sub_F6738
int __fastcall sub_F6738(_DWORD **a1)
{
  _DWORD *v1; // r0
  int (__fastcall *v2)(_DWORD); // r1
  int v3; // r3
  _DWORD *v4; // r0

  v1 = (_DWORD *)**a1;
  v2 = (int (__fastcall *)(_DWORD))v1[1];
  v3 = v1[2];
  v4 = (_DWORD *)(*v1 + (v3 >> 1));
  if ( v3 << 31 )
    v2 = *(int (__fastcall **)(_DWORD))((char *)v2 + *v4);
  return v2(v4);
}


// ======================================================================
// ADDR: 0xf68da
// SYMBOL: sub_F68DA
void __fastcall sub_F68DA(int a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  v1 = (void *)std::ctype_byname<char>::~ctype_byname(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xf68ea
// SYMBOL: sub_F68EA
void __fastcall sub_F68EA(int a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  v1 = (void *)std::ctype_byname<wchar_t>::~ctype_byname(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xfc998
// SYMBOL: sub_FC998
const char *sub_FC998()
{
  return "generic";
}


// ======================================================================
// ADDR: 0xfc9a4
// SYMBOL: sub_FC9A4
_DWORD *__fastcall sub_FC9A4(_DWORD *a1, int a2, int a3)
{
  if ( a3 < 4096 )
    return (_DWORD *)sub_FC90C(a1, a2, a3);
  else
    return sub_5FBF8(a1, "unspecified generic_category error");
}


// ======================================================================
// ADDR: 0xfca04
// SYMBOL: sub_FCA04
const char *sub_FCA04()
{
  return "system";
}


// ======================================================================
// ADDR: 0xfca10
// SYMBOL: sub_FCA10
_DWORD *__fastcall sub_FCA10(_DWORD *a1, int a2, int a3)
{
  if ( a3 < 4096 )
    return (_DWORD *)sub_FC90C(a1, a2, a3);
  else
    return sub_5FBF8(a1, "unspecified system_category error");
}


// ======================================================================
// ADDR: 0xfca30
// SYMBOL: sub_FCA30
int *__fastcall sub_FCA30(int *a1, int a2, int a3)
{
  int *result; // r0

  if ( a3 < 4096 )
  {
    std::generic_category((std::__ndk1 *)a1);
    result = &dword_1AF668;
  }
  else
  {
    std::system_category((std::__ndk1 *)a1);
    result = &dword_1AF670;
  }
  *a1 = a3;
  a1[1] = (int)result;
  return result;
}


// ======================================================================
// ADDR: 0xfd26e
// SYMBOL: sub_FD26E
void __fastcall sub_FD26E(std::__thread_struct *a1, const std::nothrow_t *a2)
{
  if ( a1 )
    std::__thread_struct::~__thread_struct(a1);
  operator delete(a1, a2);
}


// ======================================================================
// ADDR: 0xfd538
// SYMBOL: sub_FD538
const char *sub_FD538()
{
  return "future";
}


// ======================================================================
// ADDR: 0xfd544
// SYMBOL: sub_FD544
_DWORD *__fastcall sub_FD544(_DWORD *a1, int a2, unsigned int a3)
{
  char *v3; // r1

  if ( a3 > 4 )
    v3 = "unspecified future_errc value\n";
  else
    v3 = off_113084[a3];
  return sub_5FBF8(a1, v3);
}


// ======================================================================
// ADDR: 0xfdd64
// SYMBOL: sub_FDD64
void __fastcall sub_FDD64(std::error_category *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::error_category::~error_category(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0xffb06
// SYMBOL: sub_FFB06
int sub_FFB06()
{
  return 0;
}


// ======================================================================
// ADDR: 0xffb0a
// SYMBOL: sub_FFB0A
int sub_FFB0A()
{
  return 0;
}


// ======================================================================
// ADDR: 0xffb0e
// SYMBOL: sub_FFB0E
int sub_FFB0E()
{
  return 0;
}


// ======================================================================
// ADDR: 0xffb14
// SYMBOL: sub_FFB14
int __fastcall sub_FFB14(int a1, int a2)
{
  sub_FFB40(a2, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12));
  return sub_FE074(*(unsigned __int8 **)(a1 + 16), a2);
}


// ======================================================================
// ADDR: 0xffb34
// SYMBOL: sub_FFB34
_DWORD *__fastcall sub_FFB34(_DWORD *result)
{
  *result = 0;
  result[1] = 0;
  return result;
}


// ======================================================================
// ADDR: 0xffb70
// SYMBOL: sub_FFB70
int __fastcall sub_FFB70(int a1, int a2)
{
  sub_FFB40(a2, "construction vtable for ", "");
  sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
  sub_FFB40(a2, "-in-", "");
  return sub_FE074(*(unsigned __int8 **)(a1 + 12), a2);
}


// ======================================================================
// ADDR: 0x100444
// SYMBOL: sub_100444
int __fastcall sub_100444(int a1, int a2)
{
  return sub_FFB40(a2, *(_BYTE **)(a1 + 8), *(_BYTE **)(a1 + 12));
}


// ======================================================================
// ADDR: 0x100450
// SYMBOL: sub_100450
_QWORD *__fastcall sub_100450(_QWORD *result, int a2)
{
  *result = *(_QWORD *)(a2 + 8);
  return result;
}


// ======================================================================
// ADDR: 0x100460
// SYMBOL: sub_100460
int __fastcall sub_100460(int a1, int a2)
{
  sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
  sub_FFB40(a2, "::", "");
  return sub_FE074(*(unsigned __int8 **)(a1 + 12), a2);
}


// ======================================================================
// ADDR: 0x10048c
// SYMBOL: sub_10048C
int __fastcall sub_10048C(int a1, int a2)
{
  return (*(int (**)(void))(**(_DWORD **)(a2 + 12) + 24))();
}


// ======================================================================
// ADDR: 0x1005a0
// SYMBOL: sub_1005A0
int __fastcall sub_1005A0(int a1)
{
  int result; // r0

  if ( *(_BYTE *)(a1 + 16) )
    return 0;
  *(_BYTE *)(a1 + 16) = 1;
  result = sub_10068A(*(_DWORD *)(a1 + 12));
  *(_BYTE *)(a1 + 16) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x1005c6
// SYMBOL: sub_1005C6
int __fastcall sub_1005C6(int a1)
{
  int result; // r0

  if ( *(_BYTE *)(a1 + 16) )
    return 0;
  *(_BYTE *)(a1 + 16) = 1;
  result = sub_10069E(*(_DWORD *)(a1 + 12));
  *(_BYTE *)(a1 + 16) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x1005ec
// SYMBOL: sub_1005EC
int __fastcall sub_1005EC(int a1)
{
  int result; // r0

  if ( *(_BYTE *)(a1 + 16) )
    return 0;
  *(_BYTE *)(a1 + 16) = 1;
  result = sub_1006B2(*(_DWORD *)(a1 + 12));
  *(_BYTE *)(a1 + 16) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x100612
// SYMBOL: sub_100612
int __fastcall sub_100612(int a1)
{
  int v1; // r4
  int v2; // r0

  v1 = a1;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 1;
    v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 12) + 12))(*(_DWORD *)(a1 + 12));
    *(_BYTE *)(v1 + 16) = 0;
    return v2;
  }
  return v1;
}


// ======================================================================
// ADDR: 0x10063a
// SYMBOL: sub_10063A
int __fastcall sub_10063A(int a1)
{
  int result; // r0

  result = *(unsigned __int8 *)(a1 + 16);
  if ( !result )
  {
    *(_BYTE *)(a1 + 16) = 1;
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 12) + 16))(*(_DWORD *)(a1 + 12));
    result = 0;
    *(_BYTE *)(a1 + 16) = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x100660
// SYMBOL: sub_100660
int __fastcall sub_100660(int a1)
{
  int result; // r0

  result = *(unsigned __int8 *)(a1 + 16);
  if ( !result )
  {
    *(_BYTE *)(a1 + 16) = 1;
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 12) + 20))(*(_DWORD *)(a1 + 12));
    result = 0;
    *(_BYTE *)(a1 + 16) = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x102ebc
// SYMBOL: sub_102EBC
int __fastcall sub_102EBC(int a1, int a2)
{
  _BYTE *v4; // r1
  _BYTE *v5; // r0
  _BYTE *v6; // r2
  __int64 v7; // kr08_8
  int result; // r0

  if ( (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >= 4 )
  {
    sub_FFB40(a2, "(", "");
    sub_FFB40(a2, *(_BYTE **)(a1 + 8), *(_BYTE **)(a1 + 12));
    sub_FFB40(a2, ")", "");
  }
  v4 = *(_BYTE **)(a1 + 16);
  if ( *v4 == 110 )
  {
    sub_FFB40(a2, "-", "");
    v6 = *(_BYTE **)(a1 + 20);
    v5 = *(_BYTE **)(a1 + 16);
    v4 = v6;
    if ( v6 != v5 )
      v4 = v5 + 1;
  }
  else
  {
    v6 = *(_BYTE **)(a1 + 20);
  }
  sub_FFB40(a2, v4, v6);
  v7 = *(_QWORD *)(a1 + 8);
  result = HIDWORD(v7) - v7;
  if ( (unsigned int)(HIDWORD(v7) - v7) <= 3 )
    return sub_FFB40(a2, (_BYTE *)v7, (_BYTE *)HIDWORD(v7));
  return result;
}


// ======================================================================
// ADDR: 0x102f50
// SYMBOL: sub_102F50
int __fastcall sub_102F50(int a1, int a2)
{
  bool v2; // zf
  char *v4; // r1
  char *v5; // r2

  v2 = *(_BYTE *)(a1 + 8) == 0;
  v4 = "true";
  v5 = "";
  if ( v2 )
  {
    v4 = "false";
    v5 = "";
  }
  return sub_FFB40(a2, v4, v5);
}


// ======================================================================
// ADDR: 0x102fa8
// SYMBOL: sub_102FA8
int __fastcall sub_102FA8(int a1, int a2)
{
  __int64 v3; // kr00_8
  char *v4; // r1
  int i; // r0
  int v6; // r3
  int v7; // r5
  char v8; // r6
  int v9; // r0
  float v11; // [sp+Ch] [bp-34h] BYREF
  _BYTE v12[16]; // [sp+10h] [bp-30h] BYREF
  int v13; // [sp+20h] [bp-20h]
  int v14; // [sp+24h] [bp-1Ch]
  int v15; // [sp+2Ch] [bp-14h]

  v3 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)(HIDWORD(v3) - v3 + 1) >= 9 )
  {
    v4 = (char *)&v11;
    for ( i = 0; i != 8; i += 2 )
    {
      v6 = *(unsigned __int8 *)(v3 + HIDWORD(v3));
      if ( (unsigned int)(v6 - 58) < 0xFFFFFFF6 )
        LOBYTE(v6) = v6 + 9;
      v7 = *(unsigned __int8 *)(v3 + HIDWORD(v3) + 1);
      v8 = -48;
      if ( (unsigned int)(v7 - 58) < 0xFFFFFFF6 )
        v8 = -87;
      *v4++ = v7 + v8 + 16 * v6;
    }
    sub_F7238((char *)&v11, v4);
    v14 = 0;
    memset(v12, 0, sizeof(v12));
    v13 = 0;
    v9 = sub_10306C(v12, 24, 24, "%af", v11);
    sub_FFB40(a2, v12, &v12[v9]);
  }
  return v15;
}


// ======================================================================
// ADDR: 0x1030b0
// SYMBOL: sub_1030B0
int __fastcall sub_1030B0(int a1, int a2)
{
  __int64 v3; // kr00_8
  char *v4; // r1
  int i; // r0
  int v6; // r3
  int v7; // r5
  char v8; // r6
  int v9; // r0
  double v11; // [sp+8h] [bp-40h] BYREF
  _BYTE v12[36]; // [sp+10h] [bp-38h] BYREF
  int v13; // [sp+34h] [bp-14h]

  v3 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)(HIDWORD(v3) - v3 + 1) >= 0x11 )
  {
    v4 = (char *)&v11;
    for ( i = 0; i != 16; i += 2 )
    {
      v6 = *(unsigned __int8 *)(v3 + HIDWORD(v3));
      if ( (unsigned int)(v6 - 58) < 0xFFFFFFF6 )
        LOBYTE(v6) = v6 + 9;
      v7 = *(unsigned __int8 *)(v3 + HIDWORD(v3) + 1);
      v8 = -48;
      if ( (unsigned int)(v7 - 58) < 0xFFFFFFF6 )
        v8 = -87;
      *v4++ = v7 + v8 + 16 * v6;
    }
    sub_F7238((char *)&v11, v4);
    memset(v12, 0, 32);
    v9 = sub_10306C((int)v12, 32, 32, "%a", v11);
    sub_FFB40(a2, v12, &v12[v9]);
  }
  return v13;
}


// ======================================================================
// ADDR: 0x10316c
// SYMBOL: sub_10316C
int __fastcall sub_10316C(int a1, int a2)
{
  __int64 v3; // kr00_8
  char *v4; // r1
  int i; // r0
  int v6; // r3
  int v7; // r5
  char v8; // r6
  int v9; // r0
  long double v11; // [sp+8h] [bp-48h] BYREF
  _BYTE v12[32]; // [sp+10h] [bp-40h] BYREF
  int v13; // [sp+30h] [bp-20h]
  int v14; // [sp+34h] [bp-1Ch]
  int v15; // [sp+3Ch] [bp-14h]

  v3 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)(HIDWORD(v3) - v3 + 1) >= 0x11 )
  {
    v4 = (char *)&v11;
    for ( i = 0; i != 16; i += 2 )
    {
      v6 = *(unsigned __int8 *)(v3 + HIDWORD(v3));
      if ( (unsigned int)(v6 - 58) < 0xFFFFFFF6 )
        LOBYTE(v6) = v6 + 9;
      v7 = *(unsigned __int8 *)(v3 + HIDWORD(v3) + 1);
      v8 = -48;
      if ( (unsigned int)(v7 - 58) < 0xFFFFFFF6 )
        v8 = -87;
      *v4++ = v7 + v8 + 16 * v6;
    }
    sub_F7238((char *)&v11, v4);
    v14 = 0;
    memset(v12, 0, sizeof(v12));
    v13 = 0;
    v9 = sub_10306C((int)v12, 40, 40, "%LaL", v11);
    sub_FFB40(a2, v12, &v12[v9]);
  }
  return v15;
}


// ======================================================================
// ADDR: 0x103230
// SYMBOL: sub_103230
int __fastcall sub_103230(int a1, int a2)
{
  sub_FFB40(a2, "\"<", "");
  sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
  return sub_FFB40(a2, ">\"", "");
}


// ======================================================================
// ADDR: 0x1034f0
// SYMBOL: sub_1034F0
int __fastcall sub_1034F0(int a1, int a2)
{
  sub_FFB40(a2, "'unnamed", "");
  sub_FFB40(a2, *(_BYTE **)(a1 + 8), *(_BYTE **)(a1 + 12));
  return sub_FFB40(a2, "'", "");
}


// ======================================================================
// ADDR: 0x103724
// SYMBOL: sub_103724
int __fastcall sub_103724(int a1, int a2)
{
  return sub_FFB40(a2, "typename ", "");
}


// ======================================================================
// ADDR: 0x103738
// SYMBOL: sub_103738
int __fastcall sub_103738(int a1, int a2)
{
  return sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
}


// ======================================================================
// ADDR: 0x103744
// SYMBOL: sub_103744
int __fastcall sub_103744(int a1, int a2)
{
  int result; // r0

  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 12) + 16))(*(_DWORD *)(a1 + 12), a2);
  result = sub_10068A(*(_DWORD *)(a1 + 12));
  if ( !result )
    return sub_FFB40(a2, " ", "");
  return result;
}


// ======================================================================
// ADDR: 0x103778
// SYMBOL: sub_103778
int __fastcall sub_103778(int a1, int a2)
{
  sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
  return (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 12) + 20))(*(_DWORD *)(a1 + 12), a2);
}


// ======================================================================
// ADDR: 0x103798
// SYMBOL: sub_103798
int __fastcall sub_103798(int a1, int a2)
{
  sub_FFB40(a2, "template<", "");
  sub_1037E0(a1 + 12, a2);
  return sub_FFB40(a2, "> typename ", "");
}


// ======================================================================
// ADDR: 0x1037d4
// SYMBOL: sub_1037D4
int __fastcall sub_1037D4(int a1, int a2)
{
  return sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
}


// ======================================================================
// ADDR: 0x103844
// SYMBOL: sub_103844
int __fastcall sub_103844(int a1, int a2)
{
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8), a2);
  return sub_FFB40(a2, "...", "");
}


// ======================================================================
// ADDR: 0x103874
// SYMBOL: sub_103874
int __fastcall sub_103874(int a1, int a2)
{
  sub_FFB40(a2, "'lambda", "");
  sub_FFB40(a2, *(_BYTE **)(a1 + 24), *(_BYTE **)(a1 + 28));
  sub_FFB40(a2, "'", "");
  return sub_1038C0(a1, a2);
}


// ======================================================================
// ADDR: 0x103924
// SYMBOL: sub_103924
int __fastcall sub_103924(int a1, int a2)
{
  int v4; // r0

  sub_FFB40(a2, "[]", "");
  v4 = *(_DWORD *)(a1 + 8);
  if ( *(_BYTE *)(v4 + 4) == 45 )
    sub_1038C0((_DWORD *)v4, a2);
  return sub_FFB40(a2, "{...}", "");
}


// ======================================================================
// ADDR: 0x103964
// SYMBOL: sub_103964
int __fastcall sub_103964(unsigned __int8 **a1, int a2)
{
  sub_FFB40(a2, "(", "");
  sub_FE074(a1[2], a2);
  sub_FFB40(a2, ")", "");
  return sub_FFB40(a2, a1[3], a1[4]);
}


// ======================================================================
// ADDR: 0x1039e4
// SYMBOL: sub_1039E4
int __fastcall sub_1039E4(int a1, int a2)
{
  sub_FFB40(a2, "fp", "");
  return sub_FFB40(a2, *(_BYTE **)(a1 + 8), *(_BYTE **)(a1 + 12));
}


// ======================================================================
// ADDR: 0x103a14
// SYMBOL: sub_103A14
__int64 __fastcall sub_103A14(int a1, __int64 *a2, int a3, int a4)
{
  __int64 v6; // r0
  unsigned __int8 *v7; // r0
  __int64 v8; // r0
  _DWORD v10[5]; // [sp+4h] [bp-14h] BYREF

  v10[2] = a4;
  v10[0] = a2;
  v10[1] = a1;
  v6 = sub_FE09A(a2, 40);
  if ( *(_BYTE *)(a1 + 24) )
  {
    v7 = *(unsigned __int8 **)(a1 + 12);
    if ( v7 )
    {
      sub_FE074(v7, (int)a2);
      sub_FE09A(a2, 32);
      sub_FFB40((int)a2, *(_BYTE **)(a1 + 16), *(_BYTE **)(a1 + 20));
      sub_FE09A(a2, 32);
    }
    sub_FFB40((int)a2, "... ", "");
    sub_FFB40((int)a2, *(_BYTE **)(a1 + 16), *(_BYTE **)(a1 + 20));
    v8 = sub_FE09A(a2, 32);
    sub_103B00(v10, HIDWORD(v8));
  }
  else
  {
    sub_103B00(v10, HIDWORD(v6));
    sub_FE09A(a2, 32);
    sub_FFB40((int)a2, *(_BYTE **)(a1 + 16), *(_BYTE **)(a1 + 20));
    sub_FFB40((int)a2, " ...", "");
    if ( *(_DWORD *)(a1 + 12) )
    {
      sub_FE09A(a2, 32);
      sub_FFB40((int)a2, *(_BYTE **)(a1 + 16), *(_BYTE **)(a1 + 20));
      sub_FE09A(a2, 32);
      sub_FE074(*(unsigned __int8 **)(a1 + 12), (int)a2);
    }
  }
  return sub_FE09A(a2, 41);
}


// ======================================================================
// ADDR: 0x103bf8
// SYMBOL: sub_103BF8
int __fastcall sub_103BF8(unsigned __int8 **a1, int a2)
{
  unsigned __int8 **v3; // r8
  const char *v6; // [sp+0h] [bp-28h] BYREF
  char *v7; // [sp+4h] [bp-24h]
  int v8; // [sp+8h] [bp-20h]

  v3 = a1 + 3;
  v6 = ">";
  v7 = "";
  if ( sub_103CFC(a1 + 3, &v6) )
    sub_FFB40(a2, "(", "");
  sub_FFB40(a2, "(", "");
  sub_FE074(a1[2], a2);
  sub_FFB40(a2, ") ", "");
  sub_FFB40(a2, a1[3], a1[4]);
  sub_FFB40(a2, " (", "");
  sub_FE074(a1[5], a2);
  sub_FFB40(a2, ")", "");
  v6 = ">";
  v7 = "";
  if ( sub_103CFC(v3, &v6) )
    return sub_FFB40(a2, ")", "");
  else
    return v8;
}


// ======================================================================
// ADDR: 0x103d20
// SYMBOL: sub_103D20
int __fastcall sub_103D20(_BYTE **a1, int a2)
{
  sub_FFB40(a2, a1[2], a1[3]);
  sub_FFB40(a2, "(", "");
  sub_FE074(a1[4], a2);
  return sub_FFB40(a2, ")", "");
}


// ======================================================================
// ADDR: 0x103d70
// SYMBOL: sub_103D70
int __fastcall sub_103D70(int a1, int a2)
{
  sub_FFB40(a2, *(_BYTE **)(a1 + 8), *(_BYTE **)(a1 + 12));
  sub_FFB40(a2, "<", "");
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 16) + 16))(*(_DWORD *)(a1 + 16), a2);
  sub_FFB40(a2, ">(", "");
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 20) + 16))(*(_DWORD *)(a1 + 20), a2);
  return sub_FFB40(a2, ")", "");
}


// ======================================================================
// ADDR: 0x103dd8
// SYMBOL: sub_103DD8
int __fastcall sub_103DD8(int a1, int a2)
{
  sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
  sub_FFB40(a2, "(", "");
  sub_1037E0((_DWORD *)(a1 + 12), a2);
  return sub_FFB40(a2, ")", "");
}


// ======================================================================
// ADDR: 0x103e4c
// SYMBOL: sub_103E4C
int __fastcall sub_103E4C(int a1, int a2)
{
  sub_FFB40(a2, "(", "");
  sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
  sub_FFB40(a2, ")(", "");
  sub_1037E0((_DWORD *)(a1 + 12), a2);
  return sub_FFB40(a2, ")", "");
}


// ======================================================================
// ADDR: 0x103eac
// SYMBOL: sub_103EAC
int __fastcall sub_103EAC(int a1, int a2)
{
  if ( *(_BYTE *)(a1 + 12) )
    sub_FFB40(a2, "::", "");
  sub_FFB40(a2, "delete", "");
  if ( *(_BYTE *)(a1 + 13) )
    sub_FFB40(a2, "[] ", "");
  return sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
}


// ======================================================================
// ADDR: 0x10423c
// SYMBOL: sub_10423C
int __fastcall sub_10423C(int a1, int a2)
{
  sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
  sub_FFB40(a2, "::", "");
  return sub_FE074(*(unsigned __int8 **)(a1 + 12), a2);
}


// ======================================================================
// ADDR: 0x104268
// SYMBOL: sub_104268
int __fastcall sub_104268(int a1, int a2)
{
  return (*(int (**)(void))(**(_DWORD **)(a2 + 12) + 24))();
}


// ======================================================================
// ADDR: 0x104b9c
// SYMBOL: sub_104B9C
int __fastcall sub_104B9C(int a1, int a2)
{
  sub_FFB40(a2, "~", "");
  return (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8), a2);
}


// ======================================================================
// ADDR: 0x104d44
// SYMBOL: sub_104D44
int __fastcall sub_104D44(int a1, int a2)
{
  sub_FFB40(a2, "operator ", "");
  return sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
}


// ======================================================================
// ADDR: 0x104d70
// SYMBOL: sub_104D70
int __fastcall sub_104D70(int a1, int a2)
{
  sub_FFB40(a2, "operator\"\" ", "");
  return sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
}


// ======================================================================
// ADDR: 0x104d9c
// SYMBOL: sub_104D9C
int __fastcall sub_104D9C(int a1, int a2)
{
  sub_FFB40(a2, "::", "");
  return sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
}


// ======================================================================
// ADDR: 0x104dc0
// SYMBOL: sub_104DC0
int __fastcall sub_104DC0(int a1, int a2)
{
  return (*(int (**)(void))(**(_DWORD **)(a2 + 8) + 24))();
}


// ======================================================================
// ADDR: 0x104dd2
// SYMBOL: sub_104DD2
int __fastcall sub_104DD2(unsigned __int8 **a1, int a2)
{
  sub_FE074(a1[2], a2);
  sub_FFB40(a2, a1[3], a1[4]);
  return sub_FE074(a1[5], a2);
}


// ======================================================================
// ADDR: 0x104dfc
// SYMBOL: sub_104DFC
int __fastcall sub_104DFC(int a1, int a2)
{
  sub_FFB40(a2, "(", "");
  sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
  sub_FFB40(a2, ")[", "");
  sub_FE074(*(unsigned __int8 **)(a1 + 12), a2);
  return sub_FFB40(a2, "]", "");
}


// ======================================================================
// ADDR: 0x104e98
// SYMBOL: sub_104E98
int __fastcall sub_104E98(int a1, __int64 *a2)
{
  unsigned __int8 *v4; // r0

  if ( *(_BYTE *)(a1 + 16) )
  {
    sub_FE09A(a2, 91);
    sub_FE074(*(unsigned __int8 **)(a1 + 8), (int)a2);
    sub_FE09A(a2, 93);
  }
  else
  {
    sub_FE09A(a2, 46);
    sub_FE074(*(unsigned __int8 **)(a1 + 8), (int)a2);
  }
  v4 = *(unsigned __int8 **)(a1 + 12);
  if ( (unsigned int)v4[4] - 73 >= 2 )
  {
    sub_FFB40((int)a2, " = ", "");
    v4 = *(unsigned __int8 **)(a1 + 12);
  }
  return sub_FE074(v4, (int)a2);
}


// ======================================================================
// ADDR: 0x104ef8
// SYMBOL: sub_104EF8
int __fastcall sub_104EF8(unsigned __int8 **a1, __int64 *a2)
{
  unsigned __int8 *v4; // r0

  sub_FE09A(a2, 91);
  sub_FE074(a1[2], (int)a2);
  sub_FFB40((int)a2, " ... ", "");
  sub_FE074(a1[3], (int)a2);
  sub_FE09A(a2, 93);
  v4 = a1[4];
  if ( (unsigned int)v4[4] - 73 >= 2 )
  {
    sub_FFB40((int)a2, " = ", "");
    v4 = a1[4];
  }
  return sub_FE074(v4, (int)a2);
}


// ======================================================================
// ADDR: 0x104f5c
// SYMBOL: sub_104F5C
__int64 __fastcall sub_104F5C(int a1, __int64 *a2)
{
  unsigned __int8 *v3; // r0

  v3 = *(unsigned __int8 **)(a1 + 8);
  if ( v3 )
    sub_FE074(v3, (int)a2);
  sub_FE09A(a2, 123);
  sub_1037E0((_DWORD *)(a1 + 12), (int)a2);
  return sub_FE09A(a2, 125);
}


// ======================================================================
// ADDR: 0x104f90
// SYMBOL: sub_104F90
int __fastcall sub_104F90(unsigned __int8 **a1, int a2)
{
  sub_FFB40(a2, "(", "");
  sub_FE074(a1[2], a2);
  sub_FFB40(a2, ")", "");
  return sub_FFB40(a2, a1[3], a1[4]);
}


// ======================================================================
// ADDR: 0x105010
// SYMBOL: sub_105010
int __fastcall sub_105010(int a1, __int64 *a2)
{
  int result; // r0

  if ( *(_BYTE *)(a1 + 28) )
    sub_FFB40((int)a2, "::operator ", "");
  sub_FFB40((int)a2, "new", "");
  if ( *(_BYTE *)(a1 + 29) )
    sub_FFB40((int)a2, "[]", "");
  sub_FE09A(a2, 32);
  if ( *(_DWORD *)(a1 + 12) )
  {
    sub_FFB40((int)a2, "(", "");
    sub_1037E0((_DWORD *)(a1 + 8), (int)a2);
    sub_FFB40((int)a2, ")", "");
  }
  sub_FE074(*(unsigned __int8 **)(a1 + 16), (int)a2);
  result = *(_DWORD *)(a1 + 24);
  if ( result )
  {
    sub_FFB40((int)a2, "(", "");
    sub_1037E0((_DWORD *)(a1 + 20), (int)a2);
    return sub_FFB40((int)a2, ")", "");
  }
  return result;
}


// ======================================================================
// ADDR: 0x1050d4
// SYMBOL: sub_1050D4
int __fastcall sub_1050D4(_BYTE **a1, int a2)
{
  sub_FFB40(a2, a1[2], a1[3]);
  sub_FE074(a1[4], a2);
  return sub_FFB40(a2, a1[5], a1[6]);
}


// ======================================================================
// ADDR: 0x105100
// SYMBOL: sub_105100
int __fastcall sub_105100(unsigned __int8 **a1, int a2)
{
  sub_FFB40(a2, "(", "");
  sub_FE074(a1[2], a2);
  sub_FFB40(a2, ") ? (", "");
  sub_FE074(a1[3], a2);
  sub_FFB40(a2, ") : (", "");
  sub_FE074(a1[4], a2);
  return sub_FFB40(a2, ")", "");
}


// ======================================================================
// ADDR: 0x10517c
// SYMBOL: sub_10517C
int __fastcall sub_10517C(int a1, int a2, int a3, int a4)
{
  _DWORD v7[2]; // [sp+0h] [bp-18h] BYREF
  int v8; // [sp+8h] [bp-10h]
  int v9; // [sp+Ch] [bp-Ch]

  v8 = a3;
  v9 = a4;
  sub_FFB40(a2, "sizeof...(", "");
  v7[1] = 16843042;
  v7[0] = &off_113578;
  v8 = *(_DWORD *)(a1 + 8);
  sub_103B60((int)v7, a2);
  return sub_FFB40(a2, ")", "");
}


// ======================================================================
// ADDR: 0x1051f4
// SYMBOL: sub_1051F4
int __fastcall sub_1051F4(int a1, int a2)
{
  return sub_1037E0((_DWORD *)(a1 + 8), a2);
}


// ======================================================================
// ADDR: 0x105200
// SYMBOL: sub_105200
int __fastcall sub_105200(int a1, int a2)
{
  sub_FFB40(a2, "throw ", "");
  return sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
}


// ======================================================================
// ADDR: 0x105228
// SYMBOL: sub_105228
int __fastcall sub_105228(int a1, int a2)
{
  sub_FFB40(a2, "__uuidof(", "");
  sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
  return sub_FFB40(a2, ")", "");
}


// ======================================================================
// ADDR: 0x1052a4
// SYMBOL: sub_1052A4
int __fastcall sub_1052A4(int a1, int a2)
{
  int result; // r0
  char *v3; // r3
  char *v4; // r2

  result = *(_DWORD *)(a1 + 8);
  v3 = "std::allocator";
  v4 = "";
  switch ( result )
  {
    case 0:
      goto LABEL_8;
    case 1:
      v3 = "std::basic_string";
      v4 = "";
      goto LABEL_8;
    case 2:
      v3 = "std::basic_string<char, std::char_traits<char>, std::allocator<char> >";
      v4 = "";
      goto LABEL_8;
    case 3:
      v3 = "std::basic_istream<char, std::char_traits<char> >";
      goto LABEL_6;
    case 4:
      v3 = "std::basic_ostream<char, std::char_traits<char> >";
LABEL_6:
      v4 = v3 + 49;
      goto LABEL_8;
    case 5:
      v3 = "std::basic_iostream<char, std::char_traits<char> >";
      v4 = "";
LABEL_8:
      result = sub_FFB40(a2, v3, v4);
      break;
    default:
      return result;
  }
  return result;
}


// ======================================================================
// ADDR: 0x105314
// SYMBOL: sub_105314
_DWORD *__fastcall sub_105314(_DWORD *a1, int a2)
{
  return sub_FE1E4(a1, off_114108[*(_DWORD *)(a2 + 8)]);
}


// ======================================================================
// ADDR: 0x105330
// SYMBOL: sub_105330
void __fastcall __spoils<R2,R3,R12> sub_105330(int a1, int a2, _BYTE *a3, int a4)
{
  _BYTE *v6; // [sp+4h] [bp-14h] BYREF
  _BYTE *v7; // [sp+8h] [bp-10h]
  int v8; // [sp+Ch] [bp-Ch]

  v7 = a3;
  v8 = a4;
  if ( *(_BYTE *)(a1 + 12) )
    sub_FFB40(a2, "~", "");
  (*(void (__fastcall **)(_BYTE **))(**(_DWORD **)(a1 + 8) + 24))(&v6);
  sub_FFB40(a2, v6, v7);
}


// ======================================================================
// ADDR: 0x1053f0
// SYMBOL: sub_1053F0
int __fastcall sub_1053F0(int a1, int a2)
{
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8), a2);
  sub_FFB40(a2, "[abi:", "");
  sub_FFB40(a2, *(_BYTE **)(a1 + 12), *(_BYTE **)(a1 + 16));
  return sub_FFB40(a2, "]", "");
}


// ======================================================================
// ADDR: 0x105440
// SYMBOL: sub_105440
__int64 __fastcall sub_105440(int a1, __int64 *a2)
{
  sub_FE09A(a2, 91);
  sub_1037E0((_DWORD *)(a1 + 8), (int)a2);
  return sub_FE09A(a2, 93);
}


// ======================================================================
// ADDR: 0x105500
// SYMBOL: sub_105500
int __fastcall sub_105500(int a1, int a2)
{
  sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
  sub_FFB40(a2, "::", "");
  return sub_FE074(*(unsigned __int8 **)(a1 + 12), a2);
}


// ======================================================================
// ADDR: 0x10555c
// SYMBOL: sub_10555C
int __fastcall sub_10555C(int a1, int a2)
{
  int result; // r0
  char *v3; // r3
  char *v4; // r2

  result = *(_DWORD *)(a1 + 8);
  v3 = "std::allocator";
  v4 = "";
  switch ( result )
  {
    case 0:
      goto LABEL_8;
    case 1:
      v3 = "std::basic_string";
      v4 = "";
      goto LABEL_8;
    case 2:
      v3 = "std::string";
      v4 = "";
      goto LABEL_8;
    case 3:
      v3 = "std::istream";
      goto LABEL_6;
    case 4:
      v3 = "std::ostream";
LABEL_6:
      v4 = v3 + 12;
      goto LABEL_8;
    case 5:
      v3 = "std::iostream";
      v4 = "";
LABEL_8:
      result = sub_FFB40(a2, v3, v4);
      break;
    default:
      return result;
  }
  return result;
}


// ======================================================================
// ADDR: 0x1055cc
// SYMBOL: sub_1055CC
_DWORD *__fastcall sub_1055CC(_DWORD *a1, int a2)
{
  return sub_FE1E4(a1, off_114120[*(_DWORD *)(a2 + 8)]);
}


// ======================================================================
// ADDR: 0x1055e8
// SYMBOL: sub_1055E8
int __fastcall sub_1055E8(int a1, int a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r2

  v2 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(a2 + 16) == -1 )
  {
    v3 = 0;
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 16) = v2;
  }
  else
  {
    v3 = *(_DWORD *)(a2 + 12);
  }
  if ( v3 < v2 )
    return sub_10068A(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v3));
  else
    return 0;
}


// ======================================================================
// ADDR: 0x10560e
// SYMBOL: sub_10560E
int __fastcall sub_10560E(int a1, int a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r2

  v2 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(a2 + 16) == -1 )
  {
    v3 = 0;
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 16) = v2;
  }
  else
  {
    v3 = *(_DWORD *)(a2 + 12);
  }
  if ( v3 < v2 )
    return sub_10069E(*(unsigned __int8 **)(*(_DWORD *)(a1 + 8) + 4 * v3));
  else
    return 0;
}


// ======================================================================
// ADDR: 0x105634
// SYMBOL: sub_105634
int __fastcall sub_105634(int a1, int a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r2

  v2 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(a2 + 16) == -1 )
  {
    v3 = 0;
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 16) = v2;
  }
  else
  {
    v3 = *(_DWORD *)(a2 + 12);
  }
  if ( v3 < v2 )
    return sub_1006B2(*(unsigned __int8 **)(*(_DWORD *)(a1 + 8) + 4 * v3));
  else
    return 0;
}


// ======================================================================
// ADDR: 0x10565a
// SYMBOL: sub_10565A
int __fastcall sub_10565A(int result, int a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r2
  int v4; // r0

  v2 = *(_DWORD *)(result + 12);
  if ( *(_DWORD *)(a2 + 16) == -1 )
  {
    v3 = 0;
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 16) = v2;
  }
  else
  {
    v3 = *(_DWORD *)(a2 + 12);
  }
  if ( v3 < v2 )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(result + 8) + 4 * v3);
    return (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
  return result;
}


// ======================================================================
// ADDR: 0x105680
// SYMBOL: sub_105680
int __fastcall sub_105680(int result, int a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r2
  int v4; // r0

  v2 = *(_DWORD *)(result + 12);
  if ( *(_DWORD *)(a2 + 16) == -1 )
  {
    v3 = 0;
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 16) = v2;
  }
  else
  {
    v3 = *(_DWORD *)(a2 + 12);
  }
  if ( v3 < v2 )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(result + 8) + 4 * v3);
    return (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 16))(v4);
  }
  return result;
}


// ======================================================================
// ADDR: 0x1056a6
// SYMBOL: sub_1056A6
int __fastcall sub_1056A6(int result, int a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r2
  int v4; // r0

  v2 = *(_DWORD *)(result + 12);
  if ( *(_DWORD *)(a2 + 16) == -1 )
  {
    v3 = 0;
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 16) = v2;
  }
  else
  {
    v3 = *(_DWORD *)(a2 + 12);
  }
  if ( v3 < v2 )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(result + 8) + 4 * v3);
    return (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4);
  }
  return result;
}


// ======================================================================
// ADDR: 0x1056d0
// SYMBOL: sub_1056D0
int __fastcall sub_1056D0(int a1, _DWORD *a2)
{
  int v4; // r0

  sub_FFB40((int)a2, "<", "");
  sub_1037E0((_DWORD *)(a1 + 8), (int)a2);
  v4 = a2[1];
  if ( v4 && *(_BYTE *)(v4 + *a2 - 1) == 62 )
    sub_FFB40((int)a2, " ", "");
  return sub_FFB40((int)a2, ">", "");
}


// ======================================================================
// ADDR: 0x10572c
// SYMBOL: sub_10572C
int __fastcall sub_10572C(int a1, int a2)
{
  sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
  return sub_FE074(*(unsigned __int8 **)(a1 + 12), a2);
}


// ======================================================================
// ADDR: 0x105746
// SYMBOL: sub_105746
int __fastcall sub_105746(int a1, int a2)
{
  return (*(int (**)(void))(**(_DWORD **)(a2 + 8) + 24))();
}


// ======================================================================
// ADDR: 0x105758
// SYMBOL: sub_105758
int __fastcall sub_105758(int a1, int a2)
{
  sub_FFB40(a2, "std::", "");
  return sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
}


// ======================================================================
// ADDR: 0x10577c
// SYMBOL: sub_10577C
int __fastcall sub_10577C(int a1, int a2)
{
  return (*(int (**)(void))(**(_DWORD **)(a2 + 8) + 24))();
}


// ======================================================================
// ADDR: 0x10578e
// SYMBOL: sub_10578E
int __fastcall sub_10578E(int a1, int a2)
{
  return sub_1037E0((_DWORD *)(a1 + 8), a2);
}


// ======================================================================
// ADDR: 0x105798
// SYMBOL: sub_105798
__int64 __fastcall sub_105798(int a1, __int64 *a2)
{
  sub_FFB40((int)a2, " [enable_if:", "");
  sub_1037E0((_DWORD *)(a1 + 8), (int)a2);
  return sub_FE09A(a2, 93);
}


// ======================================================================
// ADDR: 0x1057cc
// SYMBOL: sub_1057CC
int sub_1057CC()
{
  return 1;
}


// ======================================================================
// ADDR: 0x1057d0
// SYMBOL: sub_1057D0
int sub_1057D0()
{
  return 1;
}


// ======================================================================
// ADDR: 0x1057d4
// SYMBOL: sub_1057D4
int __fastcall sub_1057D4(int a1, int a2)
{
  int v3; // r0

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 )
  {
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v3 + 16))(v3, a2);
    if ( !sub_10068A(*(_DWORD *)(a1 + 8)) )
      sub_FFB40(a2, " ", "");
  }
  return sub_FE074(*(unsigned __int8 **)(a1 + 12), a2);
}


// ======================================================================
// ADDR: 0x105810
// SYMBOL: sub_105810
unsigned __int8 *__fastcall sub_105810(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  char *v7; // r1
  char *v8; // r2
  unsigned __int8 *result; // r0

  sub_FFB40(a2, "(", "");
  sub_1037E0((_DWORD *)(a1 + 16), a2);
  sub_FFB40(a2, ")", "");
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v4 + 20))(v4, a2);
  v5 = *(_DWORD *)(a1 + 28);
  if ( v5 << 31 )
  {
    sub_FFB40(a2, " const", "");
    v5 = *(_DWORD *)(a1 + 28);
  }
  if ( (v5 & 2) != 0 )
  {
    sub_FFB40(a2, " volatile", "");
    v5 = *(_DWORD *)(a1 + 28);
  }
  if ( (v5 & 4) != 0 )
    sub_FFB40(a2, " restrict", "");
  v6 = *(unsigned __int8 *)(a1 + 32);
  if ( v6 == 1 )
  {
    v7 = " &";
    v8 = "";
  }
  else
  {
    if ( v6 != 2 )
      goto LABEL_14;
    v7 = " &&";
    v8 = "";
  }
  sub_FFB40(a2, v7, v8);
LABEL_14:
  result = *(unsigned __int8 **)(a1 + 24);
  if ( result )
    return (unsigned __int8 *)sub_FE074(result, a2);
  return result;
}


// ======================================================================
// ADDR: 0x1058d0
// SYMBOL: sub_1058D0
int __fastcall sub_1058D0(unsigned __int8 **a1, int a2)
{
  sub_FE074(a1[2], a2);
  sub_FFB40(a2, " (", "");
  sub_FFB40(a2, a1[3], a1[4]);
  return sub_FFB40(a2, ")", "");
}


// ======================================================================
// ADDR: 0x105de8
// SYMBOL: sub_105DE8
int __fastcall sub_105DE8(int a1, int a2)
{
  sub_FFB40(a2, "noexcept(", "");
  sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
  return sub_FFB40(a2, ")", "");
}


// ======================================================================
// ADDR: 0x105e24
// SYMBOL: sub_105E24
__int64 __fastcall sub_105E24(int a1, __int64 *a2)
{
  sub_FFB40((int)a2, "throw(", "");
  sub_1037E0((_DWORD *)(a1 + 8), (int)a2);
  return sub_FE09A(a2, 41);
}


// ======================================================================
// ADDR: 0x105e58
// SYMBOL: sub_105E58
int sub_105E58()
{
  return 1;
}


// ======================================================================
// ADDR: 0x105e5c
// SYMBOL: sub_105E5C
int sub_105E5C()
{
  return 1;
}


// ======================================================================
// ADDR: 0x105e60
// SYMBOL: sub_105E60
int __fastcall sub_105E60(int a1, int a2)
{
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8), a2);
  return sub_FFB40(a2, " ", "");
}


// ======================================================================
// ADDR: 0x105e84
// SYMBOL: sub_105E84
int __fastcall sub_105E84(int a1, __int64 *a2)
{
  int v4; // r0
  int v5; // r0
  char *v6; // r1
  char *v7; // r2
  int result; // r0

  sub_FFB40((int)a2, "(", "");
  sub_1037E0((_DWORD *)(a1 + 12), (int)a2);
  sub_FFB40((int)a2, ")", "");
  (*(void (__fastcall **)(_DWORD, __int64 *))(**(_DWORD **)(a1 + 8) + 20))(*(_DWORD *)(a1 + 8), a2);
  v4 = *(_DWORD *)(a1 + 20);
  if ( v4 << 31 )
  {
    sub_FFB40((int)a2, " const", "");
    v4 = *(_DWORD *)(a1 + 20);
  }
  if ( (v4 & 2) != 0 )
  {
    sub_FFB40((int)a2, " volatile", "");
    v4 = *(_DWORD *)(a1 + 20);
  }
  if ( (v4 & 4) != 0 )
    sub_FFB40((int)a2, " restrict", "");
  v5 = *(unsigned __int8 *)(a1 + 24);
  if ( v5 == 1 )
  {
    v6 = " &";
    v7 = "";
  }
  else
  {
    if ( v5 != 2 )
      goto LABEL_12;
    v6 = " &&";
    v7 = "";
  }
  sub_FFB40((int)a2, v6, v7);
LABEL_12:
  result = *(_DWORD *)(a1 + 28);
  if ( result )
  {
    sub_FE09A(a2, 32);
    return sub_FE074(*(unsigned __int8 **)(a1 + 28), (int)a2);
  }
  return result;
}


// ======================================================================
// ADDR: 0x105f4c
// SYMBOL: sub_105F4C
int __fastcall sub_105F4C(unsigned __int8 **a1, int a2)
{
  sub_FE074(a1[2], a2);
  sub_FFB40(a2, "<", "");
  sub_FFB40(a2, a1[3], a1[4]);
  return sub_FFB40(a2, ">", "");
}


// ======================================================================
// ADDR: 0x105f98
// SYMBOL: sub_105F98
int __fastcall sub_105F98(unsigned __int8 **a1, int a2)
{
  sub_FE074(a1[2], a2);
  sub_FFB40(a2, " ", "");
  return sub_FFB40(a2, a1[3], a1[4]);
}


// ======================================================================
// ADDR: 0x105fc8
// SYMBOL: sub_105FC8
int __fastcall sub_105FC8(int a1)
{
  return sub_10068A(*(_DWORD *)(a1 + 12));
}


// ======================================================================
// ADDR: 0x105fce
// SYMBOL: sub_105FCE
int __fastcall sub_105FCE(int a1)
{
  return sub_10069E(*(unsigned __int8 **)(a1 + 12));
}


// ======================================================================
// ADDR: 0x105fd4
// SYMBOL: sub_105FD4
int __fastcall sub_105FD4(int a1)
{
  return sub_1006B2(*(unsigned __int8 **)(a1 + 12));
}


// ======================================================================
// ADDR: 0x105fdc
// SYMBOL: sub_105FDC
int __fastcall sub_105FDC(int a1, int a2)
{
  int v4; // r0
  int result; // r0

  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 12) + 16))(*(_DWORD *)(a1 + 12), a2);
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 << 31 )
  {
    sub_FFB40(a2, " const", "");
    v4 = *(_DWORD *)(a1 + 8);
  }
  if ( (v4 & 2) != 0 )
  {
    sub_FFB40(a2, " volatile", "");
    v4 = *(_DWORD *)(a1 + 8);
  }
  result = v4 << 29;
  if ( result < 0 )
    return sub_FFB40(a2, " restrict", "");
  return result;
}


// ======================================================================
// ADDR: 0x1060a8
// SYMBOL: sub_1060A8
int __fastcall sub_1060A8(int a1, int a2)
{
  sub_FFB40(a2, "pixel vector[", "");
  sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
  return sub_FFB40(a2, "]", "");
}


// ======================================================================
// ADDR: 0x1060e4
// SYMBOL: sub_1060E4
int __fastcall sub_1060E4(int a1, int a2)
{
  unsigned __int8 *v4; // r0

  sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
  sub_FFB40(a2, " vector[", "");
  v4 = *(unsigned __int8 **)(a1 + 12);
  if ( v4 )
    sub_FE074(v4, a2);
  return sub_FFB40(a2, "]", "");
}


// ======================================================================
// ADDR: 0x106128
// SYMBOL: sub_106128
int sub_106128()
{
  return 1;
}


// ======================================================================
// ADDR: 0x10612c
// SYMBOL: sub_10612C
int sub_10612C()
{
  return 1;
}


// ======================================================================
// ADDR: 0x106130
// SYMBOL: sub_106130
int __fastcall sub_106130(int a1)
{
  return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8));
}


// ======================================================================
// ADDR: 0x106138
// SYMBOL: sub_106138
int __fastcall sub_106138(int a1, _DWORD *a2)
{
  int v3; // r0
  unsigned __int8 *v5; // r0

  v3 = a2[1];
  if ( !v3 || *(_BYTE *)(v3 + *a2 - 1) != 93 )
    sub_FFB40((int)a2, " ", "");
  sub_FFB40((int)a2, "[", "");
  v5 = *(unsigned __int8 **)(a1 + 12);
  if ( v5 )
    sub_FE074(v5, (int)a2);
  sub_FFB40((int)a2, "]", "");
  return (*(int (__fastcall **)(_DWORD, _DWORD *))(**(_DWORD **)(a1 + 8) + 20))(*(_DWORD *)(a1 + 8), a2);
}


// ======================================================================
// ADDR: 0x10619c
// SYMBOL: sub_10619C
int __fastcall sub_10619C(int a1)
{
  return sub_10068A(*(_DWORD *)(a1 + 12));
}


// ======================================================================
// ADDR: 0x1061a4
// SYMBOL: sub_1061A4
int __fastcall sub_1061A4(int a1, int a2)
{
  char *v4; // r6
  char *v5; // r8

  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 12) + 16))(*(_DWORD *)(a1 + 12), a2);
  v4 = "(";
  v5 = "";
  if ( !sub_10069E(*(unsigned __int8 **)(a1 + 12)) && !sub_1006B2(*(unsigned __int8 **)(a1 + 12)) )
  {
    v4 = " ";
    v5 = "";
  }
  sub_FFB40(a2, v4, v5);
  sub_FE074(*(unsigned __int8 **)(a1 + 8), a2);
  return sub_FFB40(a2, "::*", "");
}


// ======================================================================
// ADDR: 0x106210
// SYMBOL: sub_106210
int __fastcall sub_106210(int a1, int a2)
{
  if ( sub_10069E(*(unsigned __int8 **)(a1 + 12)) || sub_1006B2(*(unsigned __int8 **)(a1 + 12)) )
    sub_FFB40(a2, ")", "");
  return (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 12) + 20))(*(_DWORD *)(a1 + 12), a2);
}


// ======================================================================
// ADDR: 0x10624c
// SYMBOL: sub_10624C
int __fastcall sub_10624C(_BYTE **a1, __int64 *a2)
{
  sub_FFB40((int)a2, a1[2], a1[3]);
  sub_FE09A(a2, 32);
  return sub_FE074(a1[4], (int)a2);
}


// ======================================================================
// ADDR: 0x106276
// SYMBOL: sub_106276
int __fastcall sub_106276(int a1)
{
  return sub_10068A(*(_DWORD *)(a1 + 8));
}


// ======================================================================
// ADDR: 0x10627c
// SYMBOL: sub_10627C
int __fastcall sub_10627C(int a1, int a2)
{
  _BYTE *v3; // r0
  int v5; // r6
  char *v6; // r5
  char *v7; // r9
  char *v8; // r8
  char *v9; // r10

  v3 = *(_BYTE **)(a1 + 8);
  if ( v3[4] == 10 )
  {
    if ( sub_10637C() )
    {
      v5 = *(_DWORD *)(a1 + 8);
      sub_FFB40(a2, "id<", "");
      v7 = *(char **)(v5 + 16);
      v6 = *(char **)(v5 + 12);
      v8 = "";
      v9 = ">";
LABEL_9:
      sub_FFB40(a2, v6, v7);
      return sub_FFB40(a2, v9, v8);
    }
    v3 = *(_BYTE **)(a1 + 8);
  }
  (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v3 + 16))(v3, a2);
  if ( sub_10069E(*(unsigned __int8 **)(a1 + 8)) )
    sub_FFB40(a2, " ", "");
  v6 = "(";
  v8 = &byte_4CC4B;
  v7 = "";
  v9 = &byte_4CC4A;
  if ( sub_10069E(*(unsigned __int8 **)(a1 + 8)) || sub_1006B2(*(unsigned __int8 **)(a1 + 8)) )
    goto LABEL_9;
  return sub_FFB40(a2, v9, v8);
}


// ======================================================================
// ADDR: 0x10632c
// SYMBOL: sub_10632C
int __fastcall sub_10632C(int a1, int a2)
{
  unsigned __int8 *v3; // r0
  int result; // r0

  v3 = *(unsigned __int8 **)(a1 + 8);
  if ( v3[4] == 10 )
  {
    result = sub_10637C();
    if ( result )
      return result;
    v3 = *(unsigned __int8 **)(a1 + 8);
  }
  if ( sub_10069E(v3) || sub_1006B2(*(unsigned __int8 **)(a1 + 8)) )
    sub_FFB40(a2, ")", "");
  return (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 20))(*(_DWORD *)(a1 + 8), a2);
}


// ======================================================================
// ADDR: 0x1063d4
// SYMBOL: sub_1063D4
int __fastcall sub_1063D4(int a1)
{
  return sub_10068A(*(_DWORD *)(a1 + 8));
}


// ======================================================================
// ADDR: 0x1063dc
// SYMBOL: sub_1063DC
int __fastcall sub_1063DC(int a1, int a2)
{
  unsigned __int8 *v4; // r6
  size_t v5; // r0
  size_t v6; // r0
  char *v7; // r6
  size_t v8; // r0
  int v10; // [sp+4h] [bp-1Ch] BYREF
  unsigned __int8 *v11; // [sp+8h] [bp-18h]
  int v12; // [sp+Ch] [bp-14h]

  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 1;
    sub_106564(&v10, a1, a2);
    v4 = v11;
    (*(void (__fastcall **)(unsigned __int8 *, int))(*(_DWORD *)v11 + 16))(v11, a2);
    if ( sub_10069E(v4) )
    {
      v5 = _strlen_chk(" ", 2u);
      sub_FFB40(a2, " ", &asc_4B4F4[v5]);
    }
    if ( sub_10069E(v4) || sub_1006B2(v4) )
    {
      v6 = _strlen_chk("(", 2u);
      sub_FFB40(a2, "(", &asc_4F675[v6]);
    }
    v7 = "&&";
    if ( !v10 )
      v7 = "&";
    v8 = _strlen_chk(v7, 3u);
    sub_FFB40(a2, v7, &v7[v8]);
    *(_BYTE *)(a1 + 16) = 0;
  }
  return v12;
}


// ======================================================================
// ADDR: 0x1064c8
// SYMBOL: sub_1064C8
int __fastcall sub_1064C8(int a1, int a2)
{
  unsigned __int8 *v4; // r8
  size_t v5; // r0
  _BYTE v7[4]; // [sp+4h] [bp-1Ch] BYREF
  unsigned __int8 *v8; // [sp+8h] [bp-18h]
  int v9; // [sp+Ch] [bp-14h]

  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 1;
    sub_106564(v7, a1, a2);
    v4 = v8;
    if ( sub_10069E(v8) || sub_1006B2(v4) )
    {
      v5 = _strlen_chk(")", 2u);
      sub_FFB40(a2, ")", &asc_50037[v5]);
    }
    (*(void (__fastcall **)(unsigned __int8 *, int))(*(_DWORD *)v4 + 20))(v4, a2);
    *(_BYTE *)(a1 + 16) = 0;
  }
  return v9;
}


// ======================================================================
// ADDR: 0x10659a
// SYMBOL: sub_10659A
int __fastcall sub_10659A(int a1, int a2)
{
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8), a2);
  return sub_FFB40(a2, *(_BYTE **)(a1 + 12), *(_BYTE **)(a1 + 16));
}


// ======================================================================
// ADDR: 0x1066c8
// SYMBOL: sub_1066C8
int __fastcall sub_1066C8(int a1, int a2)
{
  if ( a1 != 1 )
    sub_106E00(*(_DWORD *)(a2 - 20));
  return sub_10C62C(a2 + 88);
}


// ======================================================================
// ADDR: 0x106a54
// SYMBOL: sub_106A54
int __fastcall sub_106A54(int a1, int a2)
{
  if ( a1 != 1 )
    sub_106E00(*(_DWORD *)(a2 - 20));
  j___cxa_decrement_exception_refcount(*(_DWORD *)(a2 - 36));
  return _cxa_free_dependent_exception_0(a2 - 40);
}


// ======================================================================
// ADDR: 0x106f48
// SYMBOL: sub_106F48
void __noreturn sub_106F48()
{
  off_1172AC = "unexpected";
  std::terminate();
}


// ======================================================================
// ADDR: 0x1079ac
// SYMBOL: sub_1079AC
// attributes: thunk
int sub_1079AC()
{
  return sub_10C650();
}


// ======================================================================
// ADDR: 0x1079b6
// SYMBOL: sub_1079B6
void __fastcall sub_1079B6(std::type_info *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::type_info::~type_info(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0x1079c6
// SYMBOL: sub_1079C6
void __fastcall sub_1079C6(std::type_info *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::type_info::~type_info(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0x1079d6
// SYMBOL: sub_1079D6
void __fastcall sub_1079D6(std::type_info *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::type_info::~type_info(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0x1079e6
// SYMBOL: sub_1079E6
void __fastcall sub_1079E6(std::type_info *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::type_info::~type_info(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0x1079f6
// SYMBOL: sub_1079F6
void __fastcall sub_1079F6(std::type_info *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::type_info::~type_info(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0x107a06
// SYMBOL: sub_107A06
void __fastcall sub_107A06(std::type_info *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::type_info::~type_info(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0x107a16
// SYMBOL: sub_107A16
void __fastcall sub_107A16(std::type_info *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::type_info::~type_info(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0x107a26
// SYMBOL: sub_107A26
void __fastcall sub_107A26(std::type_info *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::type_info::~type_info(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0x107a36
// SYMBOL: sub_107A36
void __fastcall sub_107A36(std::type_info *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::type_info::~type_info(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0x107a46
// SYMBOL: sub_107A46
void __fastcall sub_107A46(std::type_info *a1)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::type_info::~type_info(a1);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0x107a56
// SYMBOL: sub_107A56
bool __fastcall sub_107A56(int a1, int a2)
{
  return *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4);
}


// ======================================================================
// ADDR: 0x107a8a
// SYMBOL: sub_107A8A
int sub_107A8A()
{
  return 0;
}


// ======================================================================
// ADDR: 0x107a8e
// SYMBOL: sub_107A8E
int sub_107A8E()
{
  return 0;
}


// ======================================================================
// ADDR: 0x107a92
// SYMBOL: sub_107A92
bool __fastcall sub_107A92(int a1, int a2)
{
  return *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4);
}


// ======================================================================
// ADDR: 0x107b7c
// SYMBOL: sub_107B7C
int __fastcall sub_107B7C(int a1, int a2, int a3, int a4)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  if ( result == *(_DWORD *)(*(_DWORD *)(a2 + 8) + 4) )
    return sub_107B4C(result, a2, a3, a4);
  return result;
}


// ======================================================================
// ADDR: 0x107b94
// SYMBOL: sub_107B94
int __fastcall sub_107B94(int a1, int a2, int a3, int a4)
{
  if ( *(_DWORD *)(a1 + 4) == *(_DWORD *)(*(_DWORD *)(a2 + 8) + 4) )
    return sub_107B4C(a1, a2, a3, a4);
  else
    return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 28))(*(_DWORD *)(a1 + 8));
}


// ======================================================================
// ADDR: 0x107bec
// SYMBOL: sub_107BEC
int __fastcall sub_107BEC(_DWORD *a1, int a2, _DWORD *a3, int a4)
{
  int v7; // r4
  int result; // r0
  unsigned int v9; // r4
  _DWORD *v10; // r5
  bool v11; // cf
  int v12; // [sp+0h] [bp-20h]

  if ( a1[1] == *(_DWORD *)(*(_DWORD *)(a2 + 8) + 4) )
    return sub_107B4C(v12, a2, (int)a3, a4);
  v7 = a1[3];
  result = sub_107BB8(a1 + 4, a2, a3);
  if ( v7 >= 2 )
  {
    v9 = (unsigned int)&a1[2 * v7 + 4];
    v10 = a1 + 8;
    do
    {
      sub_107BB8(v10 - 2, a2, a3);
      result = *(unsigned __int8 *)(a2 + 54);
      if ( *(_BYTE *)(a2 + 54) )
        break;
      result = (int)(v10 + 2);
      v11 = (unsigned int)v10 >= v9;
      v10 += 2;
    }
    while ( !v11 );
  }
  return result;
}


// ======================================================================
// ADDR: 0x107cac
// SYMBOL: sub_107CAC
int __fastcall sub_107CAC(int a1, char **lpsrc, _DWORD **a3)
{
  _DWORD *v6; // r0
  _BOOL4 v7; // r5
  void *v9; // r0
  void *v10; // r9
  int v11; // r0
  int v12; // r1
  bool v13; // zf
  _DWORD *v14; // r0
  char *v15; // r2
  void *v16; // r0
  const void *v17; // r0
  void *v18; // r0
  const void *v19; // r0
  void *v20; // r0
  void *v21; // r6
  const void *v22; // r0
  void *v23; // r0
  _DWORD v24[4]; // [sp+0h] [bp-58h] BYREF
  _DWORD *v25; // [sp+10h] [bp-48h]
  __int64 v26; // [sp+14h] [bp-44h]
  __int64 v27; // [sp+1Ch] [bp-3Ch]
  __int64 v28; // [sp+24h] [bp-34h]
  __int64 v29; // [sp+2Ch] [bp-2Ch]
  int v30; // [sp+34h] [bp-24h]

  if ( lpsrc[1] == "Dn" )
  {
    v6 = 0;
    goto LABEL_6;
  }
  if ( sub_107C5C(a1, lpsrc) )
  {
    if ( !*a3 )
      return 1;
    v6 = (_DWORD *)**a3;
LABEL_6:
    *a3 = v6;
    return 1;
  }
  v7 = 0;
  v9 = j___dynamic_cast(
         lpsrc,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_type_info,
         0);
  if ( !v9 )
    return v7;
  v10 = v9;
  if ( *a3 )
    *a3 = (_DWORD *)**a3;
  v11 = *(_DWORD *)(a1 + 8);
  v12 = *((_DWORD *)v10 + 2);
  v13 = (v12 & ~v11) << 29 == 0;
  if ( !((v12 & ~v11) << 29) )
    v13 = (v11 & ~v12 & 0x60) == 0;
  if ( !v13 )
    return 0;
  v14 = *(_DWORD **)(a1 + 12);
  v15 = (char *)v14[1];
  if ( v15 == *(char **)(*((_DWORD *)v10 + 3) + 4) )
    return 1;
  if ( v15 == "v" )
    return j___dynamic_cast(
             *((const void **)v10 + 3),
             (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
             (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__function_type_info,
             0) == 0;
  v16 = j___dynamic_cast(
          v14,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_type_info,
          0);
  if ( v16 )
  {
    if ( !(*(unsigned __int8 *)(a1 + 8) << 31) )
      return 0;
    return sub_107EB0((int)v16, *((void **)v10 + 3));
  }
  else
  {
    v17 = *(const void **)(a1 + 12);
    if ( !v17 )
      return 0;
    v18 = j___dynamic_cast(
            v17,
            (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
            (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
            0);
    if ( !v18 )
    {
      v19 = *(const void **)(a1 + 12);
      if ( v19 )
      {
        v7 = 0;
        v20 = j___dynamic_cast(
                v19,
                (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
                (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__class_type_info,
                0);
        if ( !v20 )
          return v7;
        v21 = v20;
        v22 = (const void *)*((_DWORD *)v10 + 3);
        if ( v22 )
        {
          v7 = 0;
          v23 = j___dynamic_cast(
                  v22,
                  (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
                  (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__class_type_info,
                  0);
          if ( v23 )
          {
            v24[0] = v23;
            v24[1] = 0;
            v25 = 0;
            v26 = 0LL;
            v27 = 0LL;
            v28 = 0LL;
            v29 = 0x100000000LL;
            v30 = 0;
            v24[2] = v21;
            v24[3] = -1;
            (*(void (__fastcall **)(void *, _DWORD *, _DWORD, int))(*(_DWORD *)v23 + 28))(v23, v24, *a3, 1);
            v7 = HIDWORD(v26) == 1;
            if ( HIDWORD(v26) == 1 )
            {
              if ( *a3 )
                *a3 = v25;
            }
          }
          return v7;
        }
      }
      return 0;
    }
    if ( !(*(unsigned __int8 *)(a1 + 8) << 31) )
      return 0;
    return sub_107F48((int)v18, *((void **)v10 + 3));
  }
}


// ======================================================================
// ADDR: 0x107fa0
// SYMBOL: sub_107FA0
bool __fastcall sub_107FA0(_DWORD *a1, char **lpsrc, _DWORD *a3)
{
  int v5; // r5
  _DWORD *v6; // r0
  int v7; // r1
  int v8; // r2
  bool v9; // zf
  const void *v10; // r0
  void *v12; // r0

  if ( lpsrc[1] == "Dn" )
  {
    v10 = (const void *)a1[3];
    if ( v10
      && j___dynamic_cast(
           v10,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__function_type_info,
           0) )
    {
      v12 = &unk_5F454;
    }
    else
    {
      v12 = &unk_5F45C;
    }
    *a3 = v12;
    return 1;
  }
  if ( sub_107C5C((int)a1, lpsrc) )
    return 1;
  v5 = 0;
  v6 = j___dynamic_cast(
         lpsrc,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
         0);
  if ( v6 )
  {
    v7 = a1[2];
    v8 = v6[2];
    v9 = (v8 & ~v7) << 29 == 0;
    if ( !((v8 & ~v7) << 29) )
      v9 = (v7 & ~v8 & 0x60) == 0;
    return v9 && *(_DWORD *)(a1[3] + 4) == *(_DWORD *)(v6[3] + 4) && *(_DWORD *)(a1[4] + 4) == *(_DWORD *)(v6[4] + 4);
  }
  return v5;
}


// ======================================================================
// ADDR: 0x108190
// SYMBOL: sub_108190
int __fastcall sub_108190(int a1, int a2, int a3, int a4, int a5)
{
  __int64 v9; // r0
  bool v10; // zf
  int v11; // r11
  int v12; // r0
  unsigned int v13; // r11
  unsigned int v14; // r6
  int v15; // r0
  unsigned int v16; // r6
  int v17; // r11
  int v18; // r10
  bool v19; // zf
  int v20; // r0
  unsigned int v22; // [sp+8h] [bp-20h]

  if ( sub_107A64(a1, *(_DWORD *)(a2 + 8), a5) )
  {
    LODWORD(v9) = *(_DWORD *)(a2 + 4);
    if ( (_DWORD)v9 == a3 )
    {
      LODWORD(v9) = *(_DWORD *)(a2 + 28);
      if ( (_DWORD)v9 != 1 )
        *(_DWORD *)(a2 + 28) = a4;
    }
    return v9;
  }
  if ( !sub_107A64(a1, *(_DWORD *)a2, a5) )
  {
    v11 = *(_DWORD *)(a1 + 12);
    LODWORD(v9) = sub_108378(a1 + 16, a2, a3, a4);
    if ( v11 >= 2 )
    {
      v12 = *(_DWORD *)(a1 + 8);
      v13 = a1 + 16 + 8 * v11;
      v14 = a1 + 24;
      if ( (v12 & 2) != 0 || *(_DWORD *)(a2 + 36) == 1 )
      {
        do
        {
          LODWORD(v9) = *(unsigned __int8 *)(a2 + 54);
          if ( *(_BYTE *)(a2 + 54) )
            break;
          LODWORD(v9) = sub_108378(v14, a2, a3, a4);
          v14 += 8;
        }
        while ( v14 < v13 );
      }
      else if ( v12 << 31 )
      {
        do
        {
          LODWORD(v9) = *(unsigned __int8 *)(a2 + 54);
          if ( *(_BYTE *)(a2 + 54) )
            break;
          LODWORD(v9) = *(_DWORD *)(a2 + 36);
          v19 = (_DWORD)v9 == 1;
          if ( (_DWORD)v9 == 1 )
          {
            LODWORD(v9) = *(_DWORD *)(a2 + 24);
            v19 = (_DWORD)v9 == 1;
          }
          if ( v19 )
            break;
          LODWORD(v9) = sub_108378(v14, a2, a3, a4);
          v14 += 8;
        }
        while ( v14 < v13 );
      }
      else
      {
        do
        {
          LODWORD(v9) = *(unsigned __int8 *)(a2 + 54);
          if ( *(_BYTE *)(a2 + 54) )
            break;
          LODWORD(v9) = *(_DWORD *)(a2 + 36);
          if ( (_DWORD)v9 == 1 )
            break;
          LODWORD(v9) = sub_108378(v14, a2, a3, a4);
          v14 += 8;
        }
        while ( v14 < v13 );
      }
    }
    return v9;
  }
  LODWORD(v9) = *(_DWORD *)(a2 + 16);
  v10 = (_DWORD)v9 == a3;
  if ( (_DWORD)v9 != a3 )
  {
    LODWORD(v9) = *(_DWORD *)(a2 + 20);
    v10 = (_DWORD)v9 == a3;
  }
  if ( v10 )
  {
    if ( a4 == 1 )
    {
      LODWORD(v9) = 1;
      *(_DWORD *)(a2 + 32) = 1;
    }
    return v9;
  }
  v15 = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a2 + 32) = a4;
  if ( v15 == 4 )
    goto LABEL_49;
  v16 = a1 + 16;
  v17 = 0;
  v18 = 0;
  v22 = a1 + 16 + 8 * *(_DWORD *)(a1 + 12);
  while ( 1 )
  {
    if ( v16 >= v22 || (*(_WORD *)(a2 + 52) = 0, sub_10833E(v16, a2, a3, a3), *(_BYTE *)(a2 + 54)) )
    {
      if ( !(v17 << 31) )
      {
        v20 = 4;
        v17 = v18;
        goto LABEL_48;
      }
LABEL_33:
      v17 = v18;
      goto LABEL_47;
    }
    if ( *(_BYTE *)(a2 + 53) )
      break;
LABEL_31:
    v16 += 8;
  }
  if ( !*(_BYTE *)(a2 + 52) )
  {
    if ( !(*(unsigned __int8 *)(a1 + 8) << 31) )
      goto LABEL_33;
    v17 = 1;
    goto LABEL_31;
  }
  if ( *(_DWORD *)(a2 + 24) != 1 )
  {
    v17 = 1;
    v18 = 1;
    if ( (*(_BYTE *)(a1 + 8) & 2) == 0 )
      goto LABEL_47;
    goto LABEL_31;
  }
  v17 = 1;
LABEL_47:
  v20 = 3;
LABEL_48:
  *(_DWORD *)(a2 + 44) = v20;
  LODWORD(v9) = v17 << 31;
  if ( !(v17 << 31) )
  {
LABEL_49:
    v9 = *(_QWORD *)(a2 + 36);
    *(_DWORD *)(a2 + 20) = a3;
    *(_DWORD *)(a2 + 40) = HIDWORD(v9) + 1;
    if ( (_DWORD)v9 == 1 )
    {
      LODWORD(v9) = *(_DWORD *)(a2 + 24);
      if ( (_DWORD)v9 == 2 )
      {
        LODWORD(v9) = 1;
        *(_BYTE *)(a2 + 54) = 1;
      }
    }
  }
  return v9;
}


// ======================================================================
// ADDR: 0x1083ae
// SYMBOL: sub_1083AE
int __fastcall sub_1083AE(int a1, int a2, int a3, int a4, int a5)
{
  __int64 v9; // r0
  bool v10; // zf
  int v11; // r0

  if ( sub_107A64(a1, *(_DWORD *)(a2 + 8), a5) )
  {
    LODWORD(v9) = *(_DWORD *)(a2 + 4);
    if ( (_DWORD)v9 == a3 )
    {
      LODWORD(v9) = *(_DWORD *)(a2 + 28);
      if ( (_DWORD)v9 != 1 )
        *(_DWORD *)(a2 + 28) = a4;
    }
  }
  else
  {
    if ( !sub_107A64(a1, *(_DWORD *)a2, a5) )
    {
      LODWORD(v9) = (*(int (__fastcall **)(_DWORD, int, int, int))(**(_DWORD **)(a1 + 8) + 24))(
                      *(_DWORD *)(a1 + 8),
                      a2,
                      a3,
                      a4);
      return v9;
    }
    LODWORD(v9) = *(_DWORD *)(a2 + 16);
    v10 = (_DWORD)v9 == a3;
    if ( (_DWORD)v9 != a3 )
    {
      LODWORD(v9) = *(_DWORD *)(a2 + 20);
      v10 = (_DWORD)v9 == a3;
    }
    if ( v10 )
    {
      if ( a4 == 1 )
      {
        LODWORD(v9) = 1;
        *(_DWORD *)(a2 + 32) = 1;
      }
    }
    else
    {
      v11 = *(_DWORD *)(a2 + 44);
      *(_DWORD *)(a2 + 32) = a4;
      if ( v11 != 4 )
      {
        *(_WORD *)(a2 + 52) = 0;
        (*(void (__fastcall **)(_DWORD, int, int, int))(**(_DWORD **)(a1 + 8) + 20))(*(_DWORD *)(a1 + 8), a2, a3, a3);
        if ( *(_BYTE *)(a2 + 53) )
        {
          LODWORD(v9) = 3;
          if ( *(_BYTE *)(a2 + 52) )
          {
            *(_DWORD *)(a2 + 44) = 3;
            return v9;
          }
        }
        else
        {
          LODWORD(v9) = 4;
        }
        *(_DWORD *)(a2 + 44) = v9;
      }
      v9 = *(_QWORD *)(a2 + 36);
      *(_DWORD *)(a2 + 20) = a3;
      *(_DWORD *)(a2 + 40) = HIDWORD(v9) + 1;
      if ( (_DWORD)v9 == 1 )
      {
        LODWORD(v9) = *(_DWORD *)(a2 + 24);
        if ( (_DWORD)v9 == 2 )
        {
          LODWORD(v9) = 1;
          *(_BYTE *)(a2 + 54) = 1;
        }
      }
    }
  }
  return v9;
}


// ======================================================================
// ADDR: 0x10846e
// SYMBOL: sub_10846E
int __fastcall sub_10846E(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0
  bool v10; // zf
  __int64 v11; // r0
  bool v12; // zf

  if ( sub_107A64(a1, *(_DWORD *)(a2 + 8), a5) )
  {
    result = *(_DWORD *)(a2 + 4);
    if ( result == a3 )
    {
      result = *(_DWORD *)(a2 + 28);
      if ( result != 1 )
        *(_DWORD *)(a2 + 28) = a4;
    }
  }
  else
  {
    result = sub_107A64(a1, *(_DWORD *)a2, a5);
    if ( result )
    {
      result = *(_DWORD *)(a2 + 16);
      v10 = result == a3;
      if ( result != a3 )
      {
        result = *(_DWORD *)(a2 + 20);
        v10 = result == a3;
      }
      if ( v10 )
      {
        if ( a4 == 1 )
        {
          result = 1;
          *(_DWORD *)(a2 + 32) = 1;
        }
      }
      else
      {
        v11 = *(_QWORD *)(a2 + 36);
        *(_DWORD *)(a2 + 20) = a3;
        *(_DWORD *)(a2 + 32) = a4;
        *(_DWORD *)(a2 + 40) = HIDWORD(v11) + 1;
        v12 = (_DWORD)v11 == 1;
        if ( (_DWORD)v11 == 1 )
          v12 = *(_DWORD *)(a2 + 24) == 2;
        if ( v12 )
          *(_BYTE *)(a2 + 54) = 1;
        result = 4;
        *(_DWORD *)(a2 + 44) = 4;
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1084e8
// SYMBOL: sub_1084E8
int __fastcall sub_1084E8(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v10; // r0
  int result; // r0
  char v12; // r8
  int v13; // r1
  int v14; // r8
  int v15; // r5
  _DWORD *v16; // r6
  int v17; // [sp+10h] [bp-28h]
  unsigned int v18; // [sp+10h] [bp-28h]
  char v19; // [sp+18h] [bp-20h]

  v10 = sub_107A64(a1, *(_DWORD *)(a2 + 8), a6);
  if ( v10 )
    return sub_108138(v10, a2, a3, a4, a5);
  v19 = *(_BYTE *)(a2 + 52);
  v12 = *(_BYTE *)(a2 + 53);
  *(_WORD *)(a2 + 52) = 0;
  v17 = *(_DWORD *)(a1 + 12);
  sub_10833E((_DWORD *)(a1 + 16), a2);
  result = *(unsigned __int8 *)(a2 + 53);
  v13 = *(unsigned __int8 *)(a2 + 52);
  v14 = (unsigned __int8)(result | v12);
  v15 = (unsigned __int8)(v19 | v13);
  if ( v17 >= 2 )
  {
    v16 = (_DWORD *)(a1 + 24);
    v18 = a1 + 16 + 8 * v17;
    while ( !*(_BYTE *)(a2 + 54) )
    {
      if ( v13 )
      {
        result = *(_DWORD *)(a2 + 24);
        if ( result == 1 )
          break;
        result = *(unsigned __int8 *)(a1 + 8) << 30;
        if ( (*(_BYTE *)(a1 + 8) & 2) == 0 )
          break;
      }
      else if ( result )
      {
        result = *(unsigned __int8 *)(a1 + 8) << 31;
        if ( !result )
          break;
      }
      *(_WORD *)(a2 + 52) = 0;
      sub_10833E(v16, a2);
      v13 = *(unsigned __int8 *)(a2 + 52);
      v16 += 2;
      result = *(unsigned __int8 *)(a2 + 53);
      v15 |= v13;
      v14 |= result;
      if ( (unsigned int)v16 >= v18 )
        break;
    }
  }
  *(_BYTE *)(a2 + 53) = v14 != 0;
  *(_BYTE *)(a2 + 52) = v15 != 0;
  return result;
}


// ======================================================================
// ADDR: 0x1085e4
// SYMBOL: sub_1085E4
int __fastcall sub_1085E4(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v10; // r0

  v10 = sub_107A64(a1, *(_DWORD *)(a2 + 8), a6);
  if ( v10 )
    return sub_108138(v10, a2, a3, a4, a5);
  else
    return (*(int (__fastcall **)(_DWORD, int, int, int))(**(_DWORD **)(a1 + 8) + 20))(*(_DWORD *)(a1 + 8), a2, a3, a4);
}


// ======================================================================
// ADDR: 0x108630
// SYMBOL: sub_108630
int __fastcall sub_108630(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // r0

  result = sub_107A64(a1, *(_DWORD *)(a2 + 8), a6);
  if ( result )
    return sub_108138(a5, a2, a3, a4, a5);
  return result;
}


// ======================================================================
// ADDR: 0x108a30
// SYMBOL: sub_108A30
int __fastcall sub_108A30(unsigned int a1, unsigned int a2, int a3, int a4)
{
  if ( a1 >= a2 )
    ++a4;
  return a4;
}


// ======================================================================
// ADDR: 0x108ff0
// SYMBOL: sub_108FF0
int sub_108FF0()
{
  int result; // r0

  if ( pthread_key_create((pthread_key_t *)&dword_1AF8AC, (void (*)(void *))sub_109028) )
    abort();
  result = 1;
  byte_1AF8A8 = 1;
  return result;
}


// ======================================================================
// ADDR: 0x109028
// SYMBOL: sub_109028
void __fastcall sub_109028(int *pointer)
{
  int v2; // r0
  unsigned int v3; // r0
  unsigned int i; // r6
  int v5; // r1

  v2 = *pointer;
  if ( v2 )
  {
    *pointer = v2 - 1;
    pthread_setspecific(dword_1AF8AC, pointer);
  }
  else
  {
    v3 = pointer[1];
    if ( v3 )
    {
      for ( i = 0; i < v3; ++i )
      {
        v5 = pointer[i + 2];
        if ( v5 )
        {
          free(*(void **)(v5 - 4));
          v3 = pointer[1];
        }
      }
    }
    free(pointer);
  }
}


// ======================================================================
// ADDR: 0x1092bc
// SYMBOL: sub_1092BC
int __fastcall sub_1092BC(unsigned int a1, unsigned int a2, unsigned int *a3, int a4)
{
  if ( a1 >= a2 )
  {
    ++a4;
    a1 -= a2;
  }
  *a3 = a1;
  return a4;
}


// ======================================================================
// ADDR: 0x10a39c
// SYMBOL: sub_10A39C
int __fastcall sub_10A39C(int a1, int a2, int a3)
{
  return sub_10A3B4(a2, a3);
}


// ======================================================================
// ADDR: 0x10a5fc
// SYMBOL: sub_10A5FC
int __fastcall sub_10A5FC(int a1, int a2, int a3)
{
  return sub_10A3B4(a2, a3);
}


// ======================================================================
// ADDR: 0x10a614
// SYMBOL: sub_10A614
int __fastcall sub_10A614(int a1, int a2, int a3)
{
  return sub_10A3B4(a2, a3);
}


// ======================================================================
// ADDR: 0x10adf4
// SYMBOL: sub_10ADF4
bool __fastcall sub_10ADF4(int a1, int a2)
{
  return (unsigned int)(a2 + 2) < 0x12;
}


// ======================================================================
// ADDR: 0x10ae08
// SYMBOL: sub_10AE08
int __fastcall sub_10AE08(_DWORD *a1, unsigned int a2)
{
  int result; // r0

  switch ( a2 )
  {
    case 0xFFFFFFFE:
    case 0xDu:
      result = a1[15];
      break;
    case 0xFFFFFFFF:
    case 0xFu:
      result = a1[17];
      break;
    case 0xEu:
      result = a1[16];
      break;
    default:
      if ( a2 > 0xC )
      {
        fprintf((FILE *)((char *)&_sF + 168), "libunwind: %s - %s\n", "getRegister", "unsupported arm register");
        fflush((FILE *)((char *)&_sF + 168));
        abort();
      }
      result = a1[a2 + 2];
      break;
  }
  return result;
}


// ======================================================================
// ADDR: 0x10aef0
// SYMBOL: sub_10AEF0
_DWORD *__fastcall sub_10AEF0(_DWORD *result, unsigned int a2, int a3)
{
  switch ( a2 )
  {
    case 0xFFFFFFFE:
    case 0xDu:
      result[15] = a3;
      break;
    case 0xFFFFFFFF:
    case 0xFu:
      result[17] = a3;
      break;
    case 0xEu:
      result[16] = a3;
      break;
    default:
      if ( a2 > 0xC )
      {
        if ( a2 != 143 )
        {
          fprintf((FILE *)((char *)&_sF + 168), "libunwind: %s - %s\n", "setRegister", "unsupported arm register");
          fflush((FILE *)((char *)&_sF + 168));
          abort();
        }
        result[18] = a3;
      }
      else
      {
        result += a2;
        result[2] = a3;
      }
      break;
  }
  return result;
}


// ======================================================================
// ADDR: 0x10afd8
// SYMBOL: sub_10AFD8
bool __fastcall sub_10AFD8(int a1, int a2)
{
  return (a2 & 0xFFFFFFE0) == 256;
}


// ======================================================================
// ADDR: 0x10afec
// SYMBOL: sub_10AFEC
__int64 __fastcall sub_10AFEC(unsigned __int8 *a1, int a2)
{
  int v5; // r1
  unsigned __int8 *v6; // r0

  if ( (a2 & 0xFFFFFFF0) == 0x110 )
  {
    if ( !a1[78] )
    {
      a1[78] = 1;
      sub_10C138(a1 + 216);
    }
    return *(_QWORD *)&a1[8 * a2 - 1960];
  }
  else
  {
    if ( (a2 & 0xFFFFFFF0) != 0x100 )
    {
      fprintf((FILE *)((char *)&_sF + 168), "libunwind: %s - %s\n", "getFloatRegister", "Unknown ARM float register");
      fflush((FILE *)((char *)&_sF + 168));
      abort();
    }
    if ( a1[77] )
    {
      return *(_QWORD *)&a1[8 * a2 - 1968];
    }
    else
    {
      v5 = a1[76];
      a1[77] = 1;
      v6 = a1 + 80;
      if ( v5 )
        sub_10C130(v6);
      else
        sub_10C128(v6);
      return *(_QWORD *)&a1[8 * a2 - 1968];
    }
  }
}


// ======================================================================
// ADDR: 0x10b0e4
// SYMBOL: sub_10B0E4
unsigned __int8 *__fastcall sub_10B0E4(unsigned __int8 *a1, int a2, __int64 a3)
{
  unsigned __int8 *result; // r0
  int v7; // r1
  unsigned __int8 *v8; // r0

  if ( (a2 & 0xFFFFFFF0) == 0x110 )
  {
    if ( !a1[78] )
    {
      a1[78] = 1;
      sub_10C138(a1 + 216);
    }
    result = &a1[8 * a2 - 1960];
    *(_QWORD *)result = a3;
  }
  else
  {
    if ( (a2 & 0xFFFFFFF0) != 0x100 )
    {
      fprintf((FILE *)((char *)&_sF + 168), "libunwind: %s - %s\n", "setFloatRegister", "Unknown ARM float register");
      fflush((FILE *)((char *)&_sF + 168));
      abort();
    }
    if ( a1[77] )
    {
      result = &a1[8 * a2 - 1968];
      *(_QWORD *)result = a3;
    }
    else
    {
      v7 = a1[76];
      a1[77] = 1;
      v8 = a1 + 80;
      if ( v7 )
        sub_10C130(v8);
      else
        sub_10C128(v8);
      result = &a1[8 * a2 - 1968];
      *(_QWORD *)result = a3;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x10b1e4
// SYMBOL: sub_10B1E4
bool __fastcall sub_10B1E4(int a1, int a2, int a3, int a4)
{
  unsigned int *v6; // r0
  unsigned int *v7; // r0
  int v8; // r0
  int v9; // r6
  unsigned int v10; // [sp+0h] [bp-18h] BYREF
  unsigned int v11[5]; // [sp+4h] [bp-14h] BYREF

  if ( *(_BYTE *)(a1 + 384) )
    return 0;
  v6 = *(unsigned int **)(a1 + 376);
  v11[0] = 0;
  v10 = 0;
  v7 = sub_1096C8(v6, (int *)&v10, (int *)v11, a4);
  v8 = sub_109748(a1, (int)v7, v10, v11[0]);
  v9 = v8 - 8;
  if ( v8 == 8 && ((*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 52))(a1, 1), *(_BYTE *)(a1 + 384)) )
    return 0;
  else
    return v9 == 0;
}


// ======================================================================
// ADDR: 0x10b278
// SYMBOL: sub_10B278
__int64 *__fastcall sub_10B278(int a1, int a2)
{
  __int64 *result; // r0
  int v3; // r1
  __int64 *v4; // r0
  __int64 v5; // d16
  __int64 v6; // d17
  __int64 v7; // d18
  __int64 v8; // d19
  __int64 v9; // d20
  _QWORD *v10; // r1

  if ( *(_BYTE *)(a1 + 384) )
  {
    result = 0;
    *(_DWORD *)(a2 + 36) = 0;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    v3 = a2 + 16;
    *(_QWORD *)v3 = 0LL;
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_DWORD *)(v3 + 16) = 0;
  }
  else
  {
    v4 = (__int64 *)(a1 + 344);
    v5 = *v4;
    v6 = v4[1];
    v4 += 2;
    v7 = *v4;
    v8 = v4[1];
    result = v4 + 2;
    v9 = *result;
    *(_QWORD *)a2 = v5;
    *(_QWORD *)(a2 + 8) = v6;
    v10 = (_QWORD *)(a2 + 16);
    *v10 = v7;
    v10[1] = v8;
    v10[2] = v9;
  }
  return result;
}


// ======================================================================
// ADDR: 0x10b2c0
// SYMBOL: sub_10B2C0
int __fastcall sub_10B2C0(_BYTE *a1)
{
  _BYTE *v2; // r0

  if ( a1[77] )
  {
    v2 = a1 + 80;
    if ( !a1[76] )
    {
      sub_10C0F8(v2);
      if ( !a1[78] )
        return sub_10C0E4(a1 + 8);
      goto LABEL_5;
    }
    sub_10C100(v2);
  }
  if ( a1[78] )
LABEL_5:
    sub_10C108(a1 + 216);
  return sub_10C0E4(a1 + 8);
}


// ======================================================================
// ADDR: 0x10b320
// SYMBOL: sub_10B320
int __fastcall sub_10B320(int a1)
{
  return *(unsigned __int8 *)(a1 + 385);
}


// ======================================================================
// ADDR: 0x10b328
// SYMBOL: sub_10B328
int __fastcall sub_10B328(int a1)
{
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 12))(a1, -1);
  return 0;
}


// ======================================================================
// ADDR: 0x10b348
// SYMBOL: sub_10B348
int __fastcall sub_10B348(_BYTE *a1, int a2)
{
  unsigned int v4; // r0
  int v5; // r5
  int exidx; // r0
  bool v7; // zf
  int result; // r0
  _DWORD v9[2]; // [sp+4h] [bp-14h] BYREF
  _DWORD v10[3]; // [sp+Ch] [bp-Ch] BYREF

  v4 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 12))(a1, -1) & 0xFFFFFFFE;
  if ( !v4 )
    goto LABEL_6;
  v5 = v4 - a2;
  v10[0] = 0;
  exidx = dl_unwind_find_exidx(v5, v10);
  v7 = exidx == 0;
  v9[0] = exidx;
  if ( exidx )
    v7 = 8 * v10[0] == 0;
  v9[1] = 8 * v10[0];
  if ( v7 || (result = sub_10B3F0(a1, v5, v9)) == 0 )
  {
LABEL_6:
    result = 1;
    a1[384] = 1;
  }
  return result;
}


// ======================================================================
// ADDR: 0x10b3dc
// SYMBOL: sub_10B3DC
const char *__fastcall sub_10B3DC(int a1, int a2)
{
  int v3; // r1

  v3 = a2 + 2;
  if ( (unsigned int)(a2 + 2) >> 1 > 0x90 )
    return "unknown register";
  else
    return (const char *)((int (__fastcall *)(const char *))((char *)dword_10B65C + dword_10B65C[v3]))("pc");
}


// ======================================================================
// ADDR: 0x10b3e4
// SYMBOL: sub_10B3E4
int __fastcall sub_10B3E4(int result)
{
  *(_BYTE *)(result + 76) = 1;
  return result;
}


// ======================================================================
// ADDR: 0x10baf0
// SYMBOL: sub_10BAF0
const char *sub_10BAF0()
{
  return "r0";
}


// ======================================================================
// ADDR: 0x10bafc
// SYMBOL: sub_10BAFC
const char *sub_10BAFC()
{
  return "r1";
}


// ======================================================================
// ADDR: 0x10bb08
// SYMBOL: sub_10BB08
const char *sub_10BB08()
{
  return "r2";
}


// ======================================================================
// ADDR: 0x10bb14
// SYMBOL: sub_10BB14
const char *sub_10BB14()
{
  return "r3";
}


// ======================================================================
// ADDR: 0x10bb20
// SYMBOL: sub_10BB20
const char *sub_10BB20()
{
  return "r4";
}


// ======================================================================
// ADDR: 0x10bb2c
// SYMBOL: sub_10BB2C
const char *sub_10BB2C()
{
  return "r5";
}


// ======================================================================
// ADDR: 0x10bb38
// SYMBOL: sub_10BB38
const char *sub_10BB38()
{
  return "r6";
}


// ======================================================================
// ADDR: 0x10bb44
// SYMBOL: sub_10BB44
const char *sub_10BB44()
{
  return "r7";
}


// ======================================================================
// ADDR: 0x10bb50
// SYMBOL: sub_10BB50
const char *sub_10BB50()
{
  return "r8";
}


// ======================================================================
// ADDR: 0x10bb5c
// SYMBOL: sub_10BB5C
const char *sub_10BB5C()
{
  return "r9";
}


// ======================================================================
// ADDR: 0x10bb68
// SYMBOL: sub_10BB68
const char *sub_10BB68()
{
  return "r10";
}


// ======================================================================
// ADDR: 0x10bb74
// SYMBOL: sub_10BB74
const char *sub_10BB74()
{
  return "r11";
}


// ======================================================================
// ADDR: 0x10bb80
// SYMBOL: sub_10BB80
const char *sub_10BB80()
{
  return "r12";
}


// ======================================================================
// ADDR: 0x10bb8c
// SYMBOL: sub_10BB8C
const char *sub_10BB8C()
{
  return "lr";
}


// ======================================================================
// ADDR: 0x10bba4
// SYMBOL: sub_10BBA4
const char *sub_10BBA4()
{
  return "s0";
}


// ======================================================================
// ADDR: 0x10bbb0
// SYMBOL: sub_10BBB0
const char *sub_10BBB0()
{
  return "s1";
}


// ======================================================================
// ADDR: 0x10bbbc
// SYMBOL: sub_10BBBC
const char *sub_10BBBC()
{
  return "s2";
}


// ======================================================================
// ADDR: 0x10bbc8
// SYMBOL: sub_10BBC8
const char *sub_10BBC8()
{
  return "s3";
}


// ======================================================================
// ADDR: 0x10bbd4
// SYMBOL: sub_10BBD4
const char *sub_10BBD4()
{
  return "s4";
}


// ======================================================================
// ADDR: 0x10bbe0
// SYMBOL: sub_10BBE0
const char *sub_10BBE0()
{
  return "s5";
}


// ======================================================================
// ADDR: 0x10bbec
// SYMBOL: sub_10BBEC
const char *sub_10BBEC()
{
  return "s6";
}


// ======================================================================
// ADDR: 0x10bbf8
// SYMBOL: sub_10BBF8
const char *sub_10BBF8()
{
  return "s7";
}


// ======================================================================
// ADDR: 0x10bc04
// SYMBOL: sub_10BC04
const char *sub_10BC04()
{
  return "s8";
}


// ======================================================================
// ADDR: 0x10bc10
// SYMBOL: sub_10BC10
const char *sub_10BC10()
{
  return "s9";
}


// ======================================================================
// ADDR: 0x10bc1c
// SYMBOL: sub_10BC1C
const char *sub_10BC1C()
{
  return "s10";
}


// ======================================================================
// ADDR: 0x10bc28
// SYMBOL: sub_10BC28
const char *sub_10BC28()
{
  return "s11";
}


// ======================================================================
// ADDR: 0x10bc34
// SYMBOL: sub_10BC34
const char *sub_10BC34()
{
  return "s12";
}


// ======================================================================
// ADDR: 0x10bc40
// SYMBOL: sub_10BC40
const char *sub_10BC40()
{
  return "s13";
}


// ======================================================================
// ADDR: 0x10bc4c
// SYMBOL: sub_10BC4C
const char *sub_10BC4C()
{
  return "s14";
}


// ======================================================================
// ADDR: 0x10bc58
// SYMBOL: sub_10BC58
const char *sub_10BC58()
{
  return "s15";
}


// ======================================================================
// ADDR: 0x10bc64
// SYMBOL: sub_10BC64
const char *sub_10BC64()
{
  return "s16";
}


// ======================================================================
// ADDR: 0x10bc70
// SYMBOL: sub_10BC70
const char *sub_10BC70()
{
  return "s17";
}


// ======================================================================
// ADDR: 0x10bc7c
// SYMBOL: sub_10BC7C
const char *sub_10BC7C()
{
  return "s18";
}


// ======================================================================
// ADDR: 0x10bc88
// SYMBOL: sub_10BC88
const char *sub_10BC88()
{
  return "s19";
}


// ======================================================================
// ADDR: 0x10bc94
// SYMBOL: sub_10BC94
const char *sub_10BC94()
{
  return "s20";
}


// ======================================================================
// ADDR: 0x10bca0
// SYMBOL: sub_10BCA0
const char *sub_10BCA0()
{
  return "s21";
}


// ======================================================================
// ADDR: 0x10bcac
// SYMBOL: sub_10BCAC
const char *sub_10BCAC()
{
  return "s22";
}


// ======================================================================
// ADDR: 0x10bcb8
// SYMBOL: sub_10BCB8
const char *sub_10BCB8()
{
  return "s23";
}


// ======================================================================
// ADDR: 0x10bcc4
// SYMBOL: sub_10BCC4
const char *sub_10BCC4()
{
  return "s24";
}


// ======================================================================
// ADDR: 0x10bcd0
// SYMBOL: sub_10BCD0
const char *sub_10BCD0()
{
  return "s25";
}


// ======================================================================
// ADDR: 0x10bcdc
// SYMBOL: sub_10BCDC
const char *sub_10BCDC()
{
  return "s26";
}


// ======================================================================
// ADDR: 0x10bce8
// SYMBOL: sub_10BCE8
const char *sub_10BCE8()
{
  return "s27";
}


// ======================================================================
// ADDR: 0x10bcf4
// SYMBOL: sub_10BCF4
const char *sub_10BCF4()
{
  return "s28";
}


// ======================================================================
// ADDR: 0x10bd00
// SYMBOL: sub_10BD00
const char *sub_10BD00()
{
  return "s29";
}


// ======================================================================
// ADDR: 0x10bd0c
// SYMBOL: sub_10BD0C
const char *sub_10BD0C()
{
  return "s30";
}


// ======================================================================
// ADDR: 0x10bd18
// SYMBOL: sub_10BD18
const char *sub_10BD18()
{
  return "s31";
}


// ======================================================================
// ADDR: 0x10bd24
// SYMBOL: sub_10BD24
const char *sub_10BD24()
{
  return "d0";
}


// ======================================================================
// ADDR: 0x10bd30
// SYMBOL: sub_10BD30
const char *sub_10BD30()
{
  return "d1";
}


// ======================================================================
// ADDR: 0x10bd3c
// SYMBOL: sub_10BD3C
const char *sub_10BD3C()
{
  return "d2";
}


// ======================================================================
// ADDR: 0x10bd48
// SYMBOL: sub_10BD48
const char *sub_10BD48()
{
  return "d3";
}


// ======================================================================
// ADDR: 0x10bd54
// SYMBOL: sub_10BD54
const char *sub_10BD54()
{
  return "d4";
}


// ======================================================================
// ADDR: 0x10bd60
// SYMBOL: sub_10BD60
const char *sub_10BD60()
{
  return "d5";
}


// ======================================================================
// ADDR: 0x10bd6c
// SYMBOL: sub_10BD6C
const char *sub_10BD6C()
{
  return "d6";
}


// ======================================================================
// ADDR: 0x10bd78
// SYMBOL: sub_10BD78
const char *sub_10BD78()
{
  return "d7";
}


// ======================================================================
// ADDR: 0x10bd84
// SYMBOL: sub_10BD84
const char *sub_10BD84()
{
  return "d8";
}


// ======================================================================
// ADDR: 0x10bd90
// SYMBOL: sub_10BD90
const char *sub_10BD90()
{
  return "d9";
}


// ======================================================================
// ADDR: 0x10bd9c
// SYMBOL: sub_10BD9C
const char *sub_10BD9C()
{
  return "d10";
}


// ======================================================================
// ADDR: 0x10bda8
// SYMBOL: sub_10BDA8
const char *sub_10BDA8()
{
  return "d11";
}


// ======================================================================
// ADDR: 0x10bdb4
// SYMBOL: sub_10BDB4
const char *sub_10BDB4()
{
  return "d12";
}


// ======================================================================
// ADDR: 0x10bdc0
// SYMBOL: sub_10BDC0
const char *sub_10BDC0()
{
  return "d13";
}


// ======================================================================
// ADDR: 0x10bdcc
// SYMBOL: sub_10BDCC
const char *sub_10BDCC()
{
  return "d14";
}


// ======================================================================
// ADDR: 0x10bdd8
// SYMBOL: sub_10BDD8
const char *sub_10BDD8()
{
  return "d15";
}


// ======================================================================
// ADDR: 0x10bde4
// SYMBOL: sub_10BDE4
const char *sub_10BDE4()
{
  return "d16";
}


// ======================================================================
// ADDR: 0x10bdf0
// SYMBOL: sub_10BDF0
const char *sub_10BDF0()
{
  return "d17";
}


// ======================================================================
// ADDR: 0x10bdfc
// SYMBOL: sub_10BDFC
const char *sub_10BDFC()
{
  return "d18";
}


// ======================================================================
// ADDR: 0x10be08
// SYMBOL: sub_10BE08
const char *sub_10BE08()
{
  return "d19";
}


// ======================================================================
// ADDR: 0x10be14
// SYMBOL: sub_10BE14
const char *sub_10BE14()
{
  return "d20";
}


// ======================================================================
// ADDR: 0x10be20
// SYMBOL: sub_10BE20
const char *sub_10BE20()
{
  return "d21";
}


// ======================================================================
// ADDR: 0x10be2c
// SYMBOL: sub_10BE2C
const char *sub_10BE2C()
{
  return "d22";
}


// ======================================================================
// ADDR: 0x10be38
// SYMBOL: sub_10BE38
const char *sub_10BE38()
{
  return "d23";
}


// ======================================================================
// ADDR: 0x10be44
// SYMBOL: sub_10BE44
const char *sub_10BE44()
{
  return "d24";
}


// ======================================================================
// ADDR: 0x10be50
// SYMBOL: sub_10BE50
const char *sub_10BE50()
{
  return "d25";
}


// ======================================================================
// ADDR: 0x10be5c
// SYMBOL: sub_10BE5C
const char *sub_10BE5C()
{
  return "d26";
}


// ======================================================================
// ADDR: 0x10be68
// SYMBOL: sub_10BE68
const char *sub_10BE68()
{
  return "d27";
}


// ======================================================================
// ADDR: 0x10be74
// SYMBOL: sub_10BE74
const char *sub_10BE74()
{
  return "d28";
}


// ======================================================================
// ADDR: 0x10be80
// SYMBOL: sub_10BE80
const char *sub_10BE80()
{
  return "d29";
}


// ======================================================================
// ADDR: 0x10be8c
// SYMBOL: sub_10BE8C
const char *sub_10BE8C()
{
  return "d30";
}


// ======================================================================
// ADDR: 0x10be98
// SYMBOL: sub_10BE98
const char *sub_10BE98()
{
  return "d31";
}


// ======================================================================
// ADDR: 0x10c660
// SYMBOL: sub_10C660
void sub_10C660()
{
  JUMPOUT(0);
}


// ======================================================================
