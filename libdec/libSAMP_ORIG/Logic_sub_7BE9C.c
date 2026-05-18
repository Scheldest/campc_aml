// ADDR: 0x7bc34
// SYMBOL: sub_7BC34
int __fastcall sub_7BC34(int a1)
{
  int v2; // r0
  int v3; // r5
  float v4; // s0
  unsigned int v5; // r9
  unsigned int v6; // r6
  float v7; // s2
  int v8; // r0
  int v9; // r2
  int v10; // r9
  size_t v11; // r0
  size_t v12; // r5
  char *v13; // r6
  unsigned int v14; // r4
  int v16; // [sp+1Ch] [bp-14Ch]
  float v17; // [sp+20h] [bp-148h] BYREF
  float v18; // [sp+24h] [bp-144h]
  char src[256]; // [sp+28h] [bp-140h] BYREF
  __int64 v20; // [sp+128h] [bp-40h] BYREF
  __int64 v21; // [sp+130h] [bp-38h]
  __int64 v22; // [sp+138h] [bp-30h]
  _BYTE v23[11]; // [sp+140h] [bp-28h]
  int v24; // [sp+14Ch] [bp-1Ch]

  sub_72440(a1 + 84);
  if ( !byte_1A4485 )
    return v24;
  v2 = ((int (*)(void))(dword_1A4404 + 1930785))();
  ((void (__fastcall *)(__int64 *, int))(dword_1A4404 + 1930709))(&v20, v2);
  v3 = dword_1A4404;
  v4 = (float)(int)v20 / 640.0;
  v5 = *(_DWORD *)(dword_1A4404 + 7940980);
  v6 = *(_DWORD *)(dword_1A4404 + 6840224);
  v7 = (float)((float)SHIDWORD(v20) / 448.0) * 225.0;
  v20 = unk_524E0;
  v21 = unk_524E8;
  v18 = v7;
  v17 = v4 * 4.0;
  v22 = unk_524F0;
  *(_QWORD *)v23 = unk_524F8;
  *(_DWORD *)&v23[7] = 1514045306;
  v8 = (unsigned __int8)byte_1A45E0;
  __dmb(0xBu);
  if ( !(v8 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A45E0) )
  {
    sub_7BFFC(byte_1A45BC, &v20);
    _cxa_atexit((void (*)(void *))sub_7C096, byte_1A45BC, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A45E0);
  }
  sub_7C0AC(byte_1A45BC);
  sub_7BBEC(
    src,
    5024,
    v9,
    byte_1A45BC,
    *(float *)(v3 + 9876748),
    (float)((float)v5 * 0.00000095367),
    (float)((float)v6 * 0.00000095367),
    *(unsigned __int16 *)(**(_DWORD **)(dword_1A4434 + 944) + 5024),
    v16,
    v17,
    v18);
  v10 = *(_DWORD *)(a1 + 160);
  v11 = strlen(src);
  if ( v11 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(&v20);
  v12 = v11;
  if ( v11 >= 0xB )
  {
    v14 = (v11 + 16) & 0xFFFFFFF0;
    v13 = (char *)operator new(v14);
    HIDWORD(v20) = v12;
    LODWORD(v21) = v13;
    LODWORD(v20) = v14 + 1;
  }
  else
  {
    v13 = (char *)&v20 + 1;
    LOBYTE(v20) = 2 * v11;
    if ( !v11 )
      goto LABEL_9;
  }
  j_memcpy(v13, src, v12);
LABEL_9:
  v13[v12] = 0;
  sub_7D3F4(v10, &v20);
  if ( (unsigned __int8)v20 << 31 )
    operator delete((void *)v21);
  sub_7C4A6(*(_DWORD *)(a1 + 160), &v17);
  sub_7D40C(*(_DWORD *)(a1 + 160), 0);
  return v24;
}


// ======================================================================
