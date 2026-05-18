// ADDR: 0x6c2c0
// SYMBOL: sub_6C2C0
// write access to const memory has been detected, the output may be wrong!
int sub_6C2C0()
{
  int i; // r5
  int v1; // r6
  int v2; // r0
  int v3; // r4
  char *v4; // r5
  int v5; // r9
  int v6; // r4
  _BYTE *v7; // r4
  int v8; // r0
  int v9; // r4
  char *v10; // r0
  int v11; // r0
  int v12; // r6
  int *v13; // r0
  int v14; // r4
  float v15; // s16
  int v16; // r1
  int v17; // r4
  int v18; // r1
  unsigned __int8 *v19; // r0
  int v20; // r1
  bool v21; // zf
  _QWORD v23[2]; // [sp+8h] [bp-40h] BYREF
  int v24; // [sp+1Ch] [bp-2Ch]

  if ( !byte_1A4438 )
  {
    _android_log_print(4, "SAMP_ORIG", "Initializing game...");
    sub_80664("[dbg:samp:load] : module loading...");
    v1 = dword_1ABE90;
    for ( i = dword_1ABE8C; i != v1; i += 24 )
    {
      v2 = *(_DWORD *)(i + 16);
      if ( v2 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 24))(v2);
    }
    byte_1ABEA4 = 1;
    sub_80664("[dbg:samp:load] : module loaded");
    byte_1A4438 = 1;
  }
  if ( !byte_1A4439 )
  {
    _android_log_print(4, "SAMP_ORIG", "Initializing netgame...");
    v3 = operator new(0x3B8u);
    v4 = a127001;
    if ( (unsigned int)(unsigned __int8)a127001[0] - 51 <= 0xFFFFFFFC )
    {
      v4 = (char *)sub_8775C((int)&unk_1ABEC5, a127001);
      if ( !v4 )
      {
        _android_log_print(4, "SAMP_ORIG", "Failed to convert host %s to IP", a127001);
        v4 = a127001;
      }
    }
    v5 = dword_116CE0;
    _android_log_print(4, "SAMP_ORIG", "CNetGame::CNetGame()");
    ((void (__fastcall *)(int, char *, int, char *, void *))(dword_1A4408 + 1317193))(
      v3,
      v4,
      v5,
      aSampPlayer,
      &byte_1A443B);
    dword_1A4434 = v3;
    v6 = dword_1A4408 + 2350836;
    if ( sub_AF9C0(dword_1A4408 + 2350836, 4096, 7) )
      sub_AF9C0(v6, 4096, 3);
    else
      _android_log_print(4, "Memory", "protectAddr (_PROT_RWX_) failed: 0x%X -> using _PROT_RW_", v6);
    *(_DWORD *)(dword_1A4408 + 2350836) = dword_1A4434;
    v7 = (_BYTE *)operator new(1u);
    sub_600B0(v7);
    dword_1A4430 = (int)v7;
    sub_600C0(v7);
    sub_6C73C("{FFFFFF}SA-MP {808080}0.3.7 {FFFFFF}Started");
    sub_6C73C("{FFFFFF}Use {C80018}/ccmds {FFFFFF}for client commands");
    sub_6C73C(" ");
    sub_692A8();
    byte_1A3A01 = 1;
    sub_767F0();
    v8 = dword_1A41D8;
    *(float *)(dword_1A4404 + 6987568) = (float)(*(float *)&dword_1A44FC / 3000.0) + 0.001;
    if ( v8 )
    {
      sub_69A58();
      sub_69A82();
    }
    if ( byte_1A4480 )
    {
      sub_68F78();
    }
    else
    {
      sub_68F78();
      *(_BYTE *)(*(_DWORD *)(dword_1A442C + 136) + 8) = 1;
    }
    if ( byte_1A4480 )
    {
      v9 = dword_1A41D8;
      v10 = strndup(byte_1A452C, 6u);
      sub_69AAC(v9, v10);
    }
    else
    {
      sub_63A74((float *)v23, byte_1A452C);
      unk_1A3A88 = v23[0];
      unk_1A3A90 = v23[1];
    }
    ((void (__fastcall *)(int))((char *)&loc_E4F34 + dword_1A4408 + 48))(dword_1A4524);
    ((void (__fastcall *)(int))((char *)&loc_E4F34 + dword_1A4408))(dword_1A4528);
    v11 = dword_1A4408;
    v12 = *(_DWORD *)(dword_1A4408 + 2350828);
    if ( !v12 )
    {
      _android_log_print(4, "SAMP_ORIG", "UI pointer is null");
      v11 = dword_1A4408;
    }
    v13 = (int *)(v11 + 2350828);
    v14 = *v13;
    v15 = *(float *)(*(_DWORD *)(v12 + 96) + 2268) * (float)(unsigned int)dword_1A4528;
    if ( *v13 )
    {
      *(float *)(*(_DWORD *)(v14 + 96) + 40) = v15;
    }
    else
    {
      _android_log_print(4, "SAMP_ORIG", "UI pointer is null");
      v14 = *(_DWORD *)(dword_1A4408 + 2350828);
      *(float *)&word_28 = v15;
      if ( !v14 )
      {
        _android_log_print(4, "SAMP_ORIG", "UI pointer is null");
        operator delete(0);
        j___cxa_end_cleanup();
      }
      v13 = (int *)(dword_1A4408 + 2350828);
    }
    v16 = *(_DWORD *)(v14 + 96);
    v17 = *v13;
    *(float *)(v16 + 32) = v15;
    if ( !v17 )
      _android_log_print(4, "SAMP_ORIG", "UI pointer is null");
    *(float *)(*(_DWORD *)(v17 + 96) + 24) = v15;
    byte_1A4439 = 1;
  }
  if ( dword_1A442C )
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_1A442C + 48))(dword_1A442C);
  v18 = dword_1A4434;
  if ( dword_1A4434 )
  {
    if ( dword_1A4430 )
    {
      sub_6014C();
      v19 = (unsigned __int8 *)dword_1A4430;
      v18 = dword_1A4434;
    }
    else
    {
      v19 = 0;
    }
    v20 = *(_DWORD *)(v18 + 536);
    v21 = v20 == 5;
    if ( v20 != 5 )
      v21 = v19 == 0;
    if ( !v21 && byte_1174AF )
      sub_60318(v19, 1);
  }
  return v24;
}


// ======================================================================
