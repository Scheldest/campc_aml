// ADDR: 0x60c34
// SYMBOL: sub_60C34
int sub_60C34()
{
  int result; // r0
  bool v1; // zf
  bool v2; // zf
  bool v3; // zf
  bool v4; // zf
  int v5; // r0
  _DWORD *v6; // r4
  int v7; // r5
  int v8; // r0
  _DWORD *v9; // r4
  int v10; // r5
  const char *v11; // r1
  const char *v12; // r2
  int v13; // r0
  _DWORD *v14; // r4
  int v15; // r5
  int v16; // r0
  int v17; // r5
  int v18; // [sp+4h] [bp-24h]
  int v19; // [sp+8h] [bp-20h]
  int v20; // [sp+10h] [bp-18h]

  result = dword_1A4434;
  if ( !dword_1A4434 )
    return result;
  result = *(_DWORD *)(dword_1A4434 + 536);
  if ( result != 5 )
    return result;
  result = (unsigned __int8)byte_11751B;
  if ( byte_11751B != byte_117518 )
  {
    byte_11751B = byte_117518;
    _android_log_print(4, "SAMP_ORIG", "Process %u", (unsigned __int8)byte_117518);
    result = (unsigned __int8)byte_117518;
  }
  v1 = result == 25;
  if ( result == 25 )
    v1 = byte_117519 == 0;
  if ( v1 )
  {
    byte_117519 = 1;
    v8 = sub_6C844();
    v9 = *(_DWORD **)(v8 + 8);
    if ( !v9 )
    {
      v10 = v8;
      v9 = (_DWORD *)operator new(0x2F0u);
      *v9 = &off_11056C;
      ((void (__fastcall *)(_DWORD *))(dword_1A4408 + 1063817))(v9);
      *(_DWORD *)(v10 + 8) = v9;
    }
    v11 = "CRRY_PRTIAL";
    v18 = 0;
    v12 = "CARRY";
    v19 = 0;
    v20 = 1;
    return sub_60E78(v9, v11, v12, 1082340147, 0, v18, v19, 1, v20);
  }
  v2 = result == 25;
  if ( result != 25 )
    v2 = byte_117519 == 0;
  if ( !v2 )
  {
    v13 = sub_6C844();
    v14 = *(_DWORD **)(v13 + 8);
    if ( !v14 )
    {
      v15 = v13;
      v14 = (_DWORD *)operator new(0x2F0u);
      *v14 = &off_11056C;
      ((void (__fastcall *)(_DWORD *))(dword_1A4408 + 1063817))(v14);
      *(_DWORD *)(v15 + 8) = v14;
    }
    result = sub_60E78(v14, "crry_prtial", "CARRY", 1082130432, 0, 0, 0, 0, 1);
    byte_117519 = 0;
    return result;
  }
  v3 = result == 10;
  if ( result == 10 )
    v3 = byte_11751A == 0;
  if ( v3 )
  {
    byte_11751A = 1;
    v16 = sub_6C844();
    v9 = *(_DWORD **)(v16 + 8);
    if ( !v9 )
    {
      v17 = v16;
      v9 = (_DWORD *)operator new(0x2F0u);
      *v9 = &off_11056C;
      ((void (__fastcall *)(_DWORD *))(dword_1A4408 + 1063817))(v9);
      *(_DWORD *)(v17 + 8) = v9;
    }
    v11 = "HANDSUP";
    v18 = 1;
    v12 = "PED";
    v19 = 1;
    v20 = -1;
    return sub_60E78(v9, v11, v12, 1082340147, 0, v18, v19, 1, v20);
  }
  v4 = result == 10;
  if ( result != 10 )
    v4 = byte_11751A == 0;
  if ( !v4 )
  {
    v5 = sub_6C844();
    v6 = *(_DWORD **)(v5 + 8);
    if ( !v6 )
    {
      v7 = v5;
      v6 = (_DWORD *)operator new(0x2F0u);
      *v6 = &off_11056C;
      ((void (__fastcall *)(_DWORD *))(dword_1A4408 + 1063817))(v6);
      *(_DWORD *)(v7 + 8) = v6;
    }
    ((void (__fastcall *)(_DWORD *, int))(dword_1A4408 + 1065501))(v6, 1);
    result = 0;
    byte_11751A = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x73608
// SYMBOL: sub_73608
char *sub_73608()
{
  _BYTE *v0; // r8
  int v1; // r0
  _DWORD *v2; // r5
  int v3; // r6
  int v4; // r0
  bool v5; // zf
  int v6; // r0
  _DWORD *v7; // r5
  int v8; // r6
  int v9; // r0
  bool v10; // zf
  int v11; // r0
  _DWORD *v12; // r5
  int v13; // r6
  int v14; // r0
  bool v15; // zf
  char *result; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0

  v0 = (_BYTE *)sub_6C880();
  if ( !byte_1A44D0 )
    goto LABEL_8;
  v1 = sub_6C844();
  v2 = *(_DWORD **)(v1 + 8);
  if ( !v2 )
  {
    v3 = v1;
    v2 = (_DWORD *)operator new(0x2F0u);
    *v2 = &off_11056C;
    ((void (__fastcall *)(_DWORD *))(dword_1A4408 + 1063817))(v2);
    *(_DWORD *)(v3 + 8) = v2;
  }
  v4 = v2[23];
  v5 = v4 == 0;
  if ( v4 )
    v5 = *(unsigned __int8 *)(v4 + 1157) << 31 == 0;
  if ( v5 )
  {
LABEL_8:
    v17 = (unsigned __int8)byte_1A44D0;
    v0[14] = byte_1A44D0;
  }
  else
  {
    v17 = (unsigned __int8)byte_1A44D0;
    v0[6] = byte_1A44D0;
  }
  if ( v17 )
    byte_1A44D0 = 0;
  if ( !byte_1A44D1 )
    goto LABEL_18;
  v6 = sub_6C844();
  v7 = *(_DWORD **)(v6 + 8);
  if ( !v7 )
  {
    v8 = v6;
    v7 = (_DWORD *)operator new(0x2F0u);
    *v7 = &off_11056C;
    ((void (__fastcall *)(_DWORD *))(dword_1A4408 + 1063817))(v7);
    *(_DWORD *)(v8 + 8) = v7;
  }
  v9 = v7[23];
  v10 = v9 == 0;
  if ( v9 )
    v10 = *(unsigned __int8 *)(v9 + 1157) << 31 == 0;
  if ( v10 )
  {
LABEL_18:
    v18 = (unsigned __int8)byte_1A44D1;
    v0[7] = byte_1A44D1;
  }
  else
  {
    v18 = (unsigned __int8)byte_1A44D1;
    v0[11] = byte_1A44D1;
  }
  if ( v18 )
    byte_1A44D1 = 0;
  if ( byte_1A44D2 )
  {
    v0[8] = 1;
    byte_1A44D2 = 0;
  }
  if ( !byte_1A44D3 )
    goto LABEL_30;
  v11 = sub_6C844();
  v12 = *(_DWORD **)(v11 + 8);
  if ( !v12 )
  {
    v13 = v11;
    v12 = (_DWORD *)operator new(0x2F0u);
    *v12 = &off_11056C;
    ((void (__fastcall *)(_DWORD *))(dword_1A4408 + 1063817))(v12);
    *(_DWORD *)(v13 + 8) = v12;
  }
  v14 = v12[23];
  v15 = v14 == 0;
  if ( v14 )
    v15 = *(unsigned __int8 *)(v14 + 1157) << 31 == 0;
  if ( v15 )
  {
LABEL_30:
    v19 = (unsigned __int8)byte_1A44D3;
    v0[21] = byte_1A44D3;
  }
  else
  {
    v19 = (unsigned __int8)byte_1A44D3;
    v0[5] = byte_1A44D3;
  }
  if ( v19 )
    byte_1A44D3 = 0;
  if ( byte_1A44D4 )
  {
    v0[13] = 1;
    byte_1A44D4 = 0;
  }
  if ( byte_1A44D5 )
  {
    v0[19] = 1;
    byte_1A44D5 = 0;
  }
  result = &byte_1A44D6;
  if ( byte_1A44D6 )
  {
    v0[20] = 1;
    byte_1A44D6 = 0;
  }
  return result;
}


// ======================================================================
