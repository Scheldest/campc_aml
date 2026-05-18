// ADDR: 0x10fcdc
// SYMBOL: sub_10FCDC
_DWORD *__fastcall sub_10FCDC(_DWORD *a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r1
  int v5; // r1
  int v6; // r1
  _DWORD v8[4]; // [sp+0h] [bp-40h] BYREF
  _DWORD *v9; // [sp+10h] [bp-30h]
  _BYTE v10[16]; // [sp+18h] [bp-28h] BYREF
  _BYTE *v11; // [sp+28h] [bp-18h]

  *a1 = 0;
  a1[1] = 0;
  v9 = v8;
  v8[1] = a1;
  v8[0] = &off_22B4A8;
  sub_10FFF4(&off_22B4A8, 0);
  v2 = dword_263390;
  if ( !dword_263390 )
  {
    v3 = sub_11004C(v10, v8);
    sub_10FFF4(v3, v4);
    sub_110078(&unk_263380, v10);
    if ( v10 == v11 )
    {
      v5 = 4;
    }
    else
    {
      if ( !v11 )
        goto LABEL_7;
      v5 = 5;
    }
    (*(void (**)(void))(*(_DWORD *)v11 + 4 * v5))();
  }
LABEL_7:
  if ( v8 == v9 )
  {
    v6 = 4;
  }
  else
  {
    if ( !v9 )
      goto LABEL_12;
    v6 = 5;
  }
  (*(void (**)(void))(*v9 + 4 * v6))();
LABEL_12:
  if ( v2 )
    _android_log_print(
      6,
      "AXL",
      "StreamCleaner: Can't create hook for CStreaming::MakeSpaceFor - callback clear_stream_hook_t already used!");
  else
    sub_164196(dword_23DF24 + 6753820, sub_10FDC4, a1);
  return a1;
}


// ======================================================================
