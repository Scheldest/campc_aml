// ADDR: 0x5f840
// SYMBOL: sub_5F840
int __fastcall sub_5F840(int a1, int a2, _DWORD *a3)
{
  int v6; // r0
  int v7; // r0
  _BYTE *v8; // r6
  char *v9; // r1
  char *v10; // r2
  const char *v11; // r1
  const char *v12; // r3
  const char *v13; // r1
  const char *v14; // r1
  const char *v16; // [sp+0h] [bp-48h]
  const char *v17; // [sp+Ch] [bp-3Ch] BYREF
  int v18; // [sp+10h] [bp-38h]
  const char *v19; // [sp+14h] [bp-34h]
  int v20; // [sp+18h] [bp-30h]
  unsigned __int8 v21; // [sp+1Ch] [bp-2Ch] BYREF
  _BYTE v22[11]; // [sp+1Dh] [bp-2Bh] BYREF
  int v23; // [sp+28h] [bp-20h]

  v6 = (unsigned __int8)byte_117390;
  __dmb(0xBu);
  if ( !(v6 << 31) && j___cxa_guard_acquire((__guard *)&byte_117390) )
  {
    sub_5FBF8((int)byte_117300, "SIGHUP");
    sub_5FBF8((int)&byte_117300[12], "SIGINT");
    sub_5FBF8((int)&byte_117300[24], "SIGQUIT");
    sub_5FBF8((int)&byte_117300[36], "SIGILL");
    sub_5FBF8((int)&byte_117300[48], "SIGTRAP");
    sub_5FBF8((int)&byte_117300[60], "SIGABRT");
    sub_5FBF8((int)&byte_117300[72], "SIGIOT");
    sub_5FBF8((int)&byte_117300[84], "SIGBUS");
    sub_5FBF8((int)&byte_117300[96], "SIGFPE");
    sub_5FBF8((int)&byte_117300[108], "SIGKILL");
    sub_5FBF8((int)&byte_117300[120], "SIGUSR1");
    sub_5FBF8((int)&byte_117300[132], "SIGSEGV");
    _cxa_atexit((void (*)(void *))sub_5FC58, byte_117300, &off_110560);
    j___cxa_guard_release((__guard *)&byte_117390);
  }
  sub_5F764(" ");
  sub_5F764("========== SA-MP Mobile Crashed ==========");
  strcpy(v22, "UNKNOWN");
  v21 = 14;
  if ( !*(_DWORD *)(a2 + 8) )
  {
    sub_5F764("Cause: killed by user");
    std::string::assign((int)&v21, "SI_USER");
  }
  if ( a1 == 11 )
  {
    v7 = *(_DWORD *)(a2 + 8);
    if ( v7 == 2 )
    {
      sub_5F764("Cause: read-only pointer");
      std::string::assign((int)&v21, "SEGV_ACCERR");
    }
    else if ( v7 == 1 )
    {
      sub_5F764("Cause: de-referencing a null pointer");
      std::string::assign((int)&v21, "SEGV_MAPERR");
    }
  }
  sub_5F764(" ");
  sub_5F764("Sigaction:");
  v8 = *(_BYTE **)&v22[7];
  v9 = (char *)&byte_117300[12 * a1];
  v10 = (char *)*((_DWORD *)v9 + 2);
  if ( !(v21 << 31) )
    v8 = v22;
  if ( !(byte_117300[12 * a1] << 31) )
    v10 = v9 + 1;
  sub_5F764("\tsignal %d (%s), code %d (%s), fault address 0x%X", a1, v10, *(_DWORD *)(a2 + 8), v8, a3[25]);
  sub_5F764(" ");
  sub_5F764("Register states:");
  sub_5F764("\tr0: 0x%X, r1: 0x%x, r2: 0x%X, r3: 0x%X", a3[8], a3[9], a3[10], a3[11]);
  sub_5F764("\tr4: 0x%X, r5: 0x%x, r6: 0x%X, r7: 0x%X", a3[12], a3[13], a3[14], a3[15]);
  sub_5F764("\tr9: 0x%X, r9: 0x%x, r10: 0x%X, fp: 0x%X", a3[16], a3[17], a3[18], a3[19]);
  sub_5F764("\tip: 0x%X, sp: 0x%x, lr: 0x%X, pc: 0x%X", a3[20], a3[21], a3[22], a3[23]);
  sub_5F764(" ");
  sub_5F764("BackTrace:");
  if ( dladdr(a3[23], &v17) )
  {
    v11 = v17;
    v12 = v19;
    if ( !v19 )
      v12 = "unknown symbol";
    if ( !v17 )
      v11 = "unknown file";
    sub_5F764("\tPC [\"%s\":0x%X] + 0x%X | [\"%s\"+%d]", v11, v18, a3[23] - v18, v12, a3[23] - v20);
  }
  if ( dladdr(a3[22], &v17) )
  {
    v13 = "unknown symbol";
    if ( v19 )
      v13 = v19;
    v16 = v13;
    v14 = "unknown file";
    if ( v17 )
      v14 = v17;
    sub_5F764("\tLR [\"%s\":0x%X] + 0x%X | [\"%s\"+%d]", v14, v18, a3[22] - v18, v16, a3[22] - v20);
  }
  if ( v21 << 31 )
    operator delete(*(void **)&v22[7]);
  return v23;
}


// ======================================================================
// ADDR: 0x5fd08
// SYMBOL: sub_5FD08
int __fastcall sub_5FD08(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r4
  int v7; // r6
  int v8; // r0
  const char *v9; // r1
  char *v10; // r8
  const char *v11; // r2
  const char *v12; // r0
  int v14; // [sp+14h] [bp-1D4h]
  _DWORD *v15; // [sp+18h] [bp-1D0h]
  int status; // [sp+1Ch] [bp-1CCh] BYREF
  const char *v17; // [sp+20h] [bp-1C8h] BYREF
  int v18; // [sp+24h] [bp-1C4h]
  const char *v19; // [sp+28h] [bp-1C0h]
  int v20; // [sp+2Ch] [bp-1BCh]
  _DWORD v21[2]; // [sp+30h] [bp-1B8h] BYREF
  _DWORD v22[100]; // [sp+38h] [bp-1B0h] BYREF
  int v23; // [sp+1C8h] [bp-20h] BYREF

  sub_5F764(" ");
  sub_5F764("BackTrace:");
  v21[0] = v22;
  v21[1] = &v23;
  sub_10BFE8(sub_5F7E0, v21);
  v4 = (v21[0] - (int)v22) >> 2;
  if ( a2 < v4 )
    v4 = a2 + 1;
  if ( v4 > a1 )
  {
    v5 = v4 - a1;
    v15 = &v22[a1];
    v6 = 0;
    v14 = v5;
    do
    {
      v7 = v15[v6];
      v8 = dladdr(v7, &v17);
      v9 = v19;
      status = 0;
      if ( !v19 )
        v9 = &byte_4FDB8;
      if ( !v8 )
        v9 = &byte_4FDB8;
      v10 = j___cxa_demangle(v9, 0, 0, &status);
      v11 = v17;
      v12 = v19;
      if ( !status )
        v12 = v10;
      if ( !v19 )
        v12 = "unknown symbol";
      if ( !v17 )
        v11 = "unknown file";
      sub_5F764("\t#%d [\"%s\":0x%X] + 0x%X | [\"%s\"+%d]", v6, v11, v18, v7 - v18, v12, v7 - v20);
      if ( v10 )
        free(v10);
      ++v6;
    }
    while ( v14 != v6 );
  }
  return v23;
}


// ======================================================================
