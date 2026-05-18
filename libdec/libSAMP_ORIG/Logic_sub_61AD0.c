// ADDR: 0x61dfe
// SYMBOL: sub_61DFE
int64x2_t *__fastcall sub_61DFE(int64x2_t *result)
{
  int64x2_t v1; // q9
  unsigned __int8 *v2; // r3
  unsigned __int8 v3; // r2
  int64x2_t v4; // q8
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // lr
  unsigned __int8 v7; // r2

  if ( result[1].n128_u8[5] )
  {
    v1.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
    v1.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
    v2 = &result[1].n128_u8[1];
    v3 = result[1].n128_u8[2];
    v4 = veorq_s64(*result, v1);
    v5 = result[1].n128_u8[3];
    v6 = result[1].n128_u8[4];
    result[1].n128_u8[5] ^= 0x5Au;
    result[1].n128_u8[2] = v3 ^ 0x5A;
    result[1].n128_u8[3] = v5 ^ 0x5A;
    result[1].n128_u8[4] = v6 ^ 0x5A;
    *result++ = v4;
    v7 = result->n128_u8[0];
    *v2 ^= 0x5Au;
    result->n128_u8[0] = v7 ^ 0x5A;
  }
  return result;
}


// ======================================================================
// ADDR: 0xafa08
// SYMBOL: sub_AFA08
int sub_AFA08(unsigned int a1, const char *a2, size_t a3, int a4, ...)
{
  const char *v5; // r11
  size_t v6; // r9
  int v8; // r0
  int *v9; // r6
  int *v10; // r10
  int *v11; // r0
  int *v12; // r1
  unsigned int v13; // r1
  const char *v14; // r2
  int v15; // r4
  __int64 v16; // r10
  int v17; // r5
  int v18; // r8
  int v19; // r9
  int v20; // r6
  int v21; // r0
  int v22; // r5
  int v23; // r10
  int v24; // r8
  int v25; // r6
  unsigned int v26; // r6
  int v27; // r0
  const char *v28; // r2
  int v29; // r8
  int v30; // r6
  unsigned int v31; // r6
  int v32; // r0
  int *v33; // r5
  int *v34; // r0
  int v35; // r0
  int *v36; // r1
  int *v37; // r6
  int *v38; // r10
  int *v39; // r0
  int *v40; // r1
  unsigned int v41; // r1
  int v42; // r10
  __int64 v43; // kr00_8
  int v44; // r5
  int v45; // r8
  bool v46; // zf
  int *v47; // r6
  int *v48; // r11
  int *v49; // r0
  int *v50; // r1
  unsigned int v51; // r1
  int *v52; // r5
  int *v53; // r0
  int v54; // r0
  int *v55; // r1
  int *v57; // r5
  int *v58; // r0
  int v59; // r0
  int *v60; // r1
  int v61; // [sp+Ch] [bp-74h]
  size_t v62; // [sp+10h] [bp-70h]
  const char *v63; // [sp+14h] [bp-6Ch]
  const char *v64; // [sp+14h] [bp-6Ch]
  __int64 v65; // [sp+18h] [bp-68h] BYREF
  int v66; // [sp+20h] [bp-60h]
  int v67; // [sp+24h] [bp-5Ch]
  int v68; // [sp+28h] [bp-58h]
  int v69; // [sp+2Ch] [bp-54h]
  unsigned __int8 v70; // [sp+40h] [bp-40h]
  void *v71; // [sp+48h] [bp-38h]
  unsigned __int8 v72; // [sp+50h] [bp-30h]
  void *v73; // [sp+58h] [bp-28h]

  if ( !a1 )
  {
    v14 = "memWrite err address (%p) is null";
LABEL_16:
    v15 = 0;
    _android_log_print(6, "KittyMemory", v14, 0);
    return v15;
  }
  v5 = a2;
  if ( !a2 )
  {
    v14 = "memWrite err buffer (%p) is null";
    goto LABEL_16;
  }
  v6 = a3;
  if ( !a3 )
  {
    _android_log_print(6, "KittyMemory", "memWrite err invalid len");
    return 0;
  }
  v8 = (unsigned __int8)byte_1AEE90;
  __dmb(0xBu);
  if ( !(v8 << 31) && j___cxa_guard_acquire((__guard *)&byte_1AEE90) )
  {
    dword_1AEE88 = 0;
    dword_1AEE8C = 0;
    dword_1AEE84 = (int)&dword_1AEE88;
    _cxa_atexit((void (*)(void *))sub_AFDF0, &dword_1AEE84, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1AEE90);
  }
  if ( !a4 )
  {
    v62 = v6;
    v63 = v5;
    sub_B0300(&v65, a1);
    v16 = v65;
    v17 = v66;
    v18 = v67;
    v19 = v68;
    v20 = v69;
    if ( v72 << 31 )
      operator delete(v73);
    if ( v70 << 31 )
      operator delete(v71);
    if ( !v19 )
      v20 = 0;
    v21 = v17 | v18;
    if ( v17 | v18 )
      v21 = v20;
    v22 = v16 | HIDWORD(v16);
    if ( v16 )
      v22 = v21;
    v6 = v62;
    v5 = v63;
    if ( v22 )
    {
      if ( (v22 & 2) != 0 )
        goto LABEL_81;
LABEL_30:
      v23 = a1 + v6 - 1;
      v24 = sysconf(40);
      v25 = v23 & -sysconf(40);
      v26 = v25 - (-sysconf(40) & a1);
      v27 = sysconf(40);
      if ( mprotect((void *)(-v24 & a1), v26 + v27, v22 | 2) )
      {
        v28 = "memWrite err couldn't add write perm to address (%p, len: %zu, prot: %d)";
      }
      else
      {
        j_memcpy((void *)a1, v5, v6);
        v29 = sysconf(40);
        v30 = v23 & -sysconf(40);
        v31 = v30 - (-sysconf(40) & a1);
        v32 = sysconf(40);
        if ( !mprotect((void *)(-v29 & a1), v31 + v32, v22) )
          return 1;
        v28 = "memWrite err couldn't revert protection of address (%p, len: %zu, prot: %d)";
      }
      _android_log_print(6, "KittyMemory", v28, a1, v6, v22);
      return 0;
    }
    goto LABEL_61;
  }
  v10 = &dword_1AEE88;
  v9 = (int *)dword_1AEE88;
  if ( !dword_1AEE88 )
  {
    v9 = &dword_1AEE88;
    goto LABEL_38;
  }
  v11 = &dword_1AEE88;
  while ( 1 )
  {
    v13 = v9[4];
    if ( v13 > a1 )
      break;
    if ( v13 >= a1 || (v11 = v9 + 1, (v12 = (int *)v9[1]) == 0) )
    {
      v10 = v9;
      v9 = v11;
      goto LABEL_38;
    }
    ++v9;
LABEL_9:
    v11 = v9;
    v9 = v12;
  }
  v12 = (int *)*v9;
  if ( *v9 )
    goto LABEL_9;
  v10 = v9;
LABEL_38:
  v33 = (int *)*v9;
  if ( !*v9 )
  {
    v34 = (int *)operator new(0x18u);
    v34[4] = a1;
    v33 = v34;
    *v34 = 0;
    v34[1] = 0;
    v34[2] = (int)v10;
    *v9 = (int)v34;
    v35 = *(_DWORD *)dword_1AEE84;
    v33[5] = 0;
    if ( v35 )
    {
      dword_1AEE84 = v35;
      v36 = (int *)*v9;
    }
    else
    {
      v36 = v33;
    }
    sub_77D8A((int *)dword_1AEE88, v36);
    ++dword_1AEE8C;
  }
  if ( v33[5] )
    goto LABEL_44;
  v64 = v5;
  sub_B0300(&v65, a1);
  v42 = v69;
  v43 = v65;
  v45 = v66;
  v44 = v67;
  v61 = v68;
  if ( v72 << 31 )
    operator delete(v73);
  if ( v70 << 31 )
    operator delete(v71);
  if ( !v43 )
    goto LABEL_61;
  v46 = (v45 | v44) == 0;
  if ( v45 | v44 )
    v46 = v61 == 0;
  if ( v46 || !v42 )
  {
LABEL_61:
    _android_log_print(6, "KittyMemory", "memWrite err couldn't find address (%p) in any map", a1);
    return 0;
  }
  v48 = &dword_1AEE88;
  v47 = (int *)dword_1AEE88;
  if ( !dword_1AEE88 )
  {
    v47 = &dword_1AEE88;
    goto LABEL_87;
  }
  v49 = &dword_1AEE88;
  while ( 2 )
  {
    v51 = v47[4];
    if ( v51 <= a1 )
    {
      if ( v51 >= a1 || (v49 = v47 + 1, (v50 = (int *)v47[1]) == 0) )
      {
        v48 = v47;
        v47 = v49;
        goto LABEL_87;
      }
      ++v47;
      goto LABEL_69;
    }
    v50 = (int *)*v47;
    if ( *v47 )
    {
LABEL_69:
      v49 = v47;
      v47 = v50;
      continue;
    }
    break;
  }
  v48 = v47;
LABEL_87:
  v57 = (int *)*v47;
  if ( !*v47 )
  {
    v58 = (int *)operator new(0x18u);
    v58[4] = a1;
    v57 = v58;
    *v58 = 0;
    v58[1] = 0;
    v58[2] = (int)v48;
    *v47 = (int)v58;
    v59 = *(_DWORD *)dword_1AEE84;
    v57[5] = 0;
    if ( v59 )
    {
      dword_1AEE84 = v59;
      v60 = (int *)*v47;
    }
    else
    {
      v60 = v57;
    }
    sub_77D8A((int *)dword_1AEE88, v60);
    ++dword_1AEE8C;
  }
  v5 = v64;
  v57[5] = v42;
LABEL_44:
  v38 = &dword_1AEE88;
  v37 = (int *)dword_1AEE88;
  if ( !dword_1AEE88 )
  {
    v37 = &dword_1AEE88;
    goto LABEL_75;
  }
  v39 = &dword_1AEE88;
  while ( 2 )
  {
    v41 = v37[4];
    if ( v41 <= a1 )
    {
      if ( v41 >= a1 || (v39 = v37 + 1, (v40 = (int *)v37[1]) == 0) )
      {
        v38 = v37;
        v37 = v39;
        goto LABEL_75;
      }
      ++v37;
      goto LABEL_47;
    }
    v40 = (int *)*v37;
    if ( *v37 )
    {
LABEL_47:
      v39 = v37;
      v37 = v40;
      continue;
    }
    break;
  }
  v38 = v37;
LABEL_75:
  v52 = (int *)*v37;
  if ( !*v37 )
  {
    v53 = (int *)operator new(0x18u);
    v53[4] = a1;
    v52 = v53;
    *v53 = 0;
    v53[1] = 0;
    v53[2] = (int)v38;
    *v37 = (int)v53;
    v54 = *(_DWORD *)dword_1AEE84;
    v52[5] = 0;
    if ( v54 )
    {
      dword_1AEE84 = v54;
      v55 = (int *)*v37;
    }
    else
    {
      v55 = v52;
    }
    sub_77D8A((int *)dword_1AEE88, v55);
    ++dword_1AEE8C;
  }
  v22 = v52[5];
  if ( (v22 & 2) == 0 )
    goto LABEL_30;
LABEL_81:
  j_memcpy((void *)a1, v5, v6);
  return 1;
}


// ======================================================================
