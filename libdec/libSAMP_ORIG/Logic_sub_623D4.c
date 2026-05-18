// ADDR: 0x62698
// SYMBOL: sub_62698
int __fastcall sub_62698(int *a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  unsigned int v5; // r8
  unsigned int v6; // r2
  int v7; // r3
  unsigned int v8; // r0
  size_t v9; // r5
  const void *v10; // r9
  int v11; // r11
  unsigned int v12; // r0
  void *v13; // r4
  unsigned __int8 *v14; // r1
  unsigned int v16; // r11
  int v17; // r0
  int v18; // [sp+0h] [bp-20h]

  v5 = *((_DWORD *)a3 + 1);
  v6 = *a2;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v7 = v6 & 1;
  v8 = *a3;
  v10 = (const void *)*((_DWORD *)a2 + 2);
  v9 = *((_DWORD *)a2 + 1);
  if ( (v6 & 1) == 0 )
    v9 = v6 >> 1;
  v11 = v8 & 1;
  if ( (v8 & 1) == 0 )
    v5 = v8 >> 1;
  v12 = v5 + v9;
  if ( (v6 & 1) == 0 )
    v10 = a2 + 1;
  if ( v12 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(a1);
  if ( v12 <= 0xA )
  {
    *(_BYTE *)a1 = 2 * v9;
    v13 = (char *)a1 + 1;
    if ( !v9 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v18 = v11;
  v16 = (v12 + 16) & 0xFFFFFFF0;
  v13 = (void *)operator new(v16);
  v17 = v16 | 1;
  v11 = v18;
  *a1 = v17;
  a1[1] = v9;
  a1[2] = (int)v13;
  if ( v9 )
LABEL_10:
    j_memcpy(v13, v10, v9);
LABEL_11:
  v14 = (unsigned __int8 *)*((_DWORD *)a3 + 2);
  *((_BYTE *)v13 + v9) = 0;
  if ( !v11 )
    v14 = a3 + 1;
  return std::string::append(a1, v14, v5, v7);
}


// ======================================================================
// ADDR: 0x68500
// SYMBOL: sub_68500
int __fastcall sub_68500(_DWORD *a1, int a2, int a3)
{
  size_t v4; // r0
  size_t v5; // r5
  void *v6; // r4
  unsigned int v7; // r6
  void *v8; // r0
  char v10[20]; // [sp+0h] [bp-28h] BYREF
  int v11; // [sp+14h] [bp-14h]

  sub_6858C(v10, a2, a3, a2);
  v4 = strlen(v10);
  if ( v4 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(a1);
  v5 = v4;
  if ( v4 >= 0xB )
  {
    v7 = (v4 + 16) & 0xFFFFFFF0;
    v8 = (void *)operator new(v7);
    *a1 = v7 + 1;
    a1[1] = v5;
    a1[2] = v8;
    v6 = v8;
  }
  else
  {
    *(_BYTE *)a1 = 2 * v4;
    v6 = (char *)a1 + 1;
    if ( !v4 )
      goto LABEL_7;
  }
  j_memcpy(v6, v10, v5);
LABEL_7:
  *((_BYTE *)v6 + v5) = 0;
  return v11;
}


// ======================================================================
// ADDR: 0x6c73c
// SYMBOL: sub_6C73C
int sub_6C73C(const char *a1, ...)
{
  void (__fastcall *v1)(_DWORD, _BYTE *); // r4
  int v2; // r5
  _BYTE v4[1024]; // [sp+8h] [bp-40Ch] BYREF
  int v5; // [sp+408h] [bp-Ch]
  va_list va; // [sp+41Ch] [bp+8h] BYREF

  va_start(va, a1);
  if ( *(_DWORD *)(dword_1A4408 + 2350828) )
  {
    _vsprintf_chk(v4, 0, 1024, a1, va, va);
    v1 = (void (__fastcall *)(_DWORD, _BYTE *))(dword_1A4408 + 1234409);
    v2 = *(_DWORD *)(dword_1A4408 + 2350828);
    if ( !v2 )
      _android_log_print(4, "SAMP_ORIG", "UI pointer is null");
    v1(*(_DWORD *)(v2 + 96), v4);
  }
  else
  {
    _android_log_print(4, "SAMP_ORIG", "UI pointer is null");
    _android_log_print(4, "SAMP_ORIG", "SAMP::addDebugMessage: UI pointer is null");
  }
  return v5;
}


// ======================================================================
