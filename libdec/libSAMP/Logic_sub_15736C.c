// ADDR: 0x1573cc
// SYMBOL: sub_1573CC
int __fastcall sub_1573CC(int a1, int a2, _DWORD *a3, int a4, int a5, int a6)
{
  int v7; // r1
  int v8; // r5
  int v9; // r12
  unsigned int v10; // r8
  unsigned int v11; // r11
  unsigned int v12; // r5
  __int64 v13; // kr00_8
  unsigned int v14; // r3
  unsigned __int64 v15; // kr08_8
  unsigned __int64 v16; // kr10_8
  __int64 v17; // kr18_8
  int v18; // r2
  int v19; // r4
  unsigned __int64 v20; // kr30_8
  int v21; // r12
  __int64 v22; // kr40_8
  unsigned __int64 v23; // kr48_8
  unsigned __int64 v24; // kr50_8
  unsigned __int64 v25; // kr58_8
  unsigned __int64 v26; // kr60_8
  __int64 v27; // kr68_8
  unsigned int v28; // r3
  unsigned __int64 v29; // kr78_8
  int v31; // [sp+18h] [bp-78h]
  unsigned int v32; // [sp+30h] [bp-60h]
  unsigned int v36; // [sp+40h] [bp-50h] BYREF
  unsigned int v37; // [sp+44h] [bp-4Ch]
  int v38; // [sp+48h] [bp-48h]
  unsigned int v39; // [sp+50h] [bp-40h]
  unsigned int v40; // [sp+54h] [bp-3Ch]
  int v41; // [sp+58h] [bp-38h]
  unsigned int v42; // [sp+60h] [bp-30h]
  unsigned int v43; // [sp+64h] [bp-2Ch]
  int v44; // [sp+68h] [bp-28h]

  sub_15764A(&v36, a2, a5, a6);
  v7 = v44;
  v8 = (-61 - v44) * ((int)&elf_gnu_hash_chain[2155] + 1) / 0x40000;
  if ( -61 - v44 > 0 )
    v8 = (-61 - v44) * ((int)&elf_gnu_hash_chain[2155] + 1) / 0x40000 + 1;
  v9 = v38;
  v11 = v42;
  v10 = v43;
  v12 = (2 * (__int16)(v8 + 307 + (((unsigned int)(v8 + 307) >> 28) & 7))) & 0xFFFFFFF1;
  v13 = *(_QWORD *)((char *)&unk_B9EA0 + v12 + 4);
  v32 = v39;
  *a3 = -*(_DWORD *)((char *)&unk_B9EA0 + v12 + 12);
  v14 = *(_DWORD *)((char *)&unk_B9EA0 + v12);
  v31 = HIDWORD(v13) + 64 + v9;
  v15 = (unsigned int)v13 * (unsigned __int64)v36;
  v16 = v14 * (unsigned __int64)v37;
  v17 = (int)v13 * (__int64)(int)v37 + SHIDWORD(v16) + SHIDWORD(v15);
  v19 = ((unsigned int)v15 + ((v14 * (unsigned __int64)v36) >> 32) + (unsigned int)v16) >> 32;
  v18 = v15 + ((v14 * (unsigned __int64)v36) >> 32) + v16;
  v20 = (unsigned int)v13 * (unsigned __int64)v11;
  v21 = v14 * v10;
  v22 = (int)v13 * (__int64)(int)v10 + (int)((v14 * (unsigned __int64)v10) >> 32) + SHIDWORD(v20);
  v23 = (unsigned int)v20 + ((v14 * (unsigned __int64)v11) >> 32);
  v24 = __PAIR64__(
          (unsigned int)(__CFADD__(__CFADD__(v23 + v21, 0x80000000), (_DWORD)v22) | __CFADD__(
                                                                                      (v23 + (unsigned int)v21) >> 32,
                                                                                      __CFADD__(v23 + v21, 0x80000000)
                                                                                    + (_DWORD)v22))
        + HIDWORD(v22),
          ((v23 + (unsigned int)v21) >> 32) + __CFADD__(v23 + v21, 0x80000000) + (_DWORD)v22)
      - 1;
  v25 = v14 * (unsigned __int64)v40;
  v26 = (unsigned int)v13 * (unsigned __int64)v32;
  v27 = (int)v13 * (__int64)(int)v40 + SHIDWORD(v25) + SHIDWORD(v26);
  v28 = (v14 * (unsigned __int64)v32) >> 32;
  v29 = (unsigned int)v26 + (unsigned __int64)v28 + (unsigned int)v25;
  return sub_157736(
           a1,
           a2,
           a3,
           v28,
           HIDWORD(v29) + __CFADD__((_DWORD)v29, 0x80000000) + (_DWORD)v27 + 1,
           (__PAIR64__(
              (unsigned int)(__CFADD__(__CFADD__((_DWORD)v29, 0x80000000), (_DWORD)v27) | __CFADD__(
                                                                                            HIDWORD(v29),
                                                                                            __CFADD__(
                                                                                              (_DWORD)v29,
                                                                                              0x80000000)
                                                                                          + (_DWORD)v27))
            + HIDWORD(v27),
              HIDWORD(v29) + __CFADD__((_DWORD)v29, 0x80000000) + (unsigned int)v27)
          + 1) >> 32,
           HIDWORD(v13) + 64 + v41,
           0,
           v19 + __CFADD__(v18, 0x80000000) + (_DWORD)v17,
           (__CFADD__(__CFADD__(v18, 0x80000000), (_DWORD)v17) | __CFADD__(
                                                                   v19,
                                                                   __CFADD__(v18, 0x80000000) + (_DWORD)v17))
         + HIDWORD(v17),
           v31,
           0,
           v24,
           HIDWORD(v24),
           HIDWORD(v13) + 64 + v7,
           0,
           v32);
}


// ======================================================================
// ADDR: 0x157528
// SYMBOL: sub_157528
char *__fastcall sub_157528(char *src, size_t n, signed int a3, int a4, int a5)
{
  int v6; // r6
  int v9; // r0
  char v10; // r1
  char *v11; // r0
  unsigned int v12; // r1
  __int64 v13; // r2
  unsigned int v14; // r1

  v6 = a3 + n;
  if ( a3 >= 0 && v6 <= a5 )
  {
    sub_22177C((int)&src[n], a3, 48);
    *(_WORD *)&src[v6] = 12334;
    return &src[v6 + 2];
  }
  if ( v6 >= 1 && v6 <= a5 )
  {
    j_memmove(&src[v6 + 1], &src[v6], -a3);
    src[v6] = 46;
    return &src[n + 1];
  }
  if ( v6 > a4 && v6 <= 0 )
  {
    j_memmove(&src[2 - v6], src, n);
    *(_WORD *)src = 11824;
    sub_22177C((int)(src + 2), -v6, 48);
    return &src[2 - v6 + n];
  }
  if ( n == 1 )
  {
    v9 = 1;
  }
  else
  {
    j_memmove(src + 2, src + 1, n - 1);
    src[1] = 46;
    v9 = n + 1;
  }
  src[v9] = 101;
  v10 = 43;
  v11 = &src[v9];
  if ( v6 < 1 )
    v10 = 45;
  v11[1] = v10;
  v12 = v6 - 1;
  if ( v6 < 1 )
    v12 = 1 - v6;
  if ( v12 <= 9 )
  {
    v11[3] = v12 + 48;
    v11[2] = 48;
    return v11 + 4;
  }
  if ( v12 <= 0x63 )
  {
    v11[2] = (unsigned __int8)v12 / 0xAu + 48;
    v11[3] = ((unsigned __int8)v12 % 0xAu) | 0x30;
    return v11 + 4;
  }
  v13 = 1374389535LL * v12;
  v14 = v12 % 0x64;
  v11[2] = (HIDWORD(v13) >> 5) + 48;
  v11[3] = ((unsigned __int8)v14 / 0xAu) | 0x30;
  v11[4] = ((unsigned __int8)v14 % 0xAu) | 0x30;
  return v11 + 5;
}


// ======================================================================
