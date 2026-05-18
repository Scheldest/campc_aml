// ADDR: 0x77a44
// SYMBOL: sub_77A44
int __fastcall sub_77A44(unsigned __int8 *a1, int a2, unsigned __int8 *a3)
{
  unsigned int v5; // r0
  unsigned __int8 *v6; // r1
  unsigned int v7; // r2
  int v8; // r0
  __int64 v9; // d16
  unsigned int v10; // r1
  unsigned int v11; // r0
  uint8x8_t *v12; // r5
  unsigned __int8 *v13; // r2
  uint32x4_t v14; // q8
  uint32x4_t v15; // q9
  int64x2_t v16; // q10
  unsigned int v17; // r3
  uint8x8_t *v18; // r1
  int16x8_t v19; // q12
  uint16x8_t v20; // q13
  int16x8_t v21; // q14
  unsigned __int8 *v22; // r0
  int v23; // r1
  _BYTE v25[8]; // [sp+0h] [bp-20h] BYREF
  void *v26; // [sp+8h] [bp-18h]
  int v27; // [sp+Ch] [bp-14h]

  sub_77B7C((int)v25, a2, "=");
  v5 = *a3;
  v6 = (unsigned __int8 *)*((_DWORD *)a3 + 2);
  v7 = *((_DWORD *)a3 + 1);
  if ( (v5 & 1) == 0 )
  {
    v6 = a3 + 1;
    v7 = v5 >> 1;
  }
  v8 = std::string::append(v25, v6, v7, v5 & 1);
  v9 = *(_QWORD *)v8;
  *((_DWORD *)a1 + 2) = *(_DWORD *)(v8 + 8);
  *(_QWORD *)a1 = v9;
  *(_DWORD *)v8 = 0;
  *(_DWORD *)(v8 + 4) = 0;
  *(_DWORD *)(v8 + 8) = 0;
  if ( v25[0] << 31 )
    operator delete(v26);
  v10 = *a1;
  v12 = (uint8x8_t *)*((_DWORD *)a1 + 2);
  v11 = *((_DWORD *)a1 + 1);
  if ( (v10 & 1) == 0 )
  {
    v11 = v10 >> 1;
    v12 = (uint8x8_t *)(a1 + 1);
  }
  if ( v11 )
  {
    if ( v11 >= 0x10 )
    {
      v14.n128_u64[0] = 0xFFFFFFBFFFFFFFBFLL;
      v14.n128_u64[1] = 0xFFFFFFBFFFFFFFBFLL;
      v15.n128_u64[0] = 0x1A0000001ALL;
      v15.n128_u64[1] = 0x1A0000001ALL;
      v13 = (unsigned __int8 *)v12 + (v11 & 0xFFFFFFF0);
      v16.n128_u64[0] = 0x2020202020202020LL;
      v16.n128_u64[1] = 0x2020202020202020LL;
      v17 = v11 & 0xFFFFFFF0;
      v18 = v12;
      do
      {
        v17 -= 16;
        v19 = vmovl_u8(v18[1]);
        v20 = vmovl_u8((uint8x8_t)v18->n64_u64[0]);
        *(int16x4_t *)&v21.n128_i8[8] = vmovn_s32(vcgtq_u32(v15, vaddw_u16(v14, *(uint16x4_t *)&v19.n128_i8[8])));
        v21.n128_u64[0] = vmovn_s32(vcgtq_u32(v15, vaddw_u16(v14, (uint16x4_t)v19.n128_u64[0]))).n64_u64[0];
        *(int16x4_t *)&v19.n128_i8[8] = vmovn_s32(vcgtq_u32(v15, vaddw_u16(v14, *(uint16x4_t *)&v20.n128_i8[8])));
        v19.n128_u64[0] = vmovn_s32(vcgtq_u32(v15, vaddw_u16(v14, (uint16x4_t)v20.n128_u64[0]))).n64_u64[0];
        *(int8x8_t *)&v21.n128_i8[8] = vmovn_s16(v21);
        v21.n128_u64[0] = vmovn_s16(v19).n64_u64[0];
        *(int64x2_t *)v18->n64_u64 = vbslq_s64(
                                       v21,
                                       vorrq_s64(*(int64x2_t *)v18->n64_u64, v16),
                                       *(int64x2_t *)v18->n64_u64);
        v18 += 2;
      }
      while ( v17 );
      if ( v11 == (v11 & 0xFFFFFFF0) )
        return v27;
    }
    else
    {
      v13 = (unsigned __int8 *)v12;
    }
    v22 = (unsigned __int8 *)v12 + v11;
    do
    {
      v23 = *v13;
      if ( (unsigned int)(v23 - 65) < 0x1A )
        LOBYTE(v23) = v23 | 0x20;
      *v13++ = v23;
    }
    while ( v13 != v22 );
  }
  return v27;
}


// ======================================================================
// ADDR: 0x77c28
// SYMBOL: sub_77C28
int __fastcall sub_77C28(int a1, int **a2, int a3, int a4, _DWORD *a5)
{
  _DWORD **v7; // r0
  _DWORD *v8; // r6
  char v9; // r0
  _DWORD *v10; // r4
  int v11; // r2
  int v12; // r3
  int v13; // r0
  int *v14; // r0
  _DWORD *v15; // r1
  _DWORD v17[8]; // [sp+0h] [bp-20h] BYREF

  v7 = (_DWORD **)sub_77CCC(a2, v17);
  v8 = *v7;
  if ( *v7 )
  {
    v9 = 0;
  }
  else
  {
    v10 = v7;
    v8 = (_DWORD *)operator new(0x28u);
    std::string::basic_string(v8 + 4, *a5, v11, v12);
    v13 = v17[0];
    v8[7] = 0;
    v8[8] = 0;
    v8[9] = 0;
    *v8 = 0;
    v8[1] = 0;
    v8[2] = v13;
    *v10 = v8;
    v14 = (int *)**a2;
    if ( v14 )
    {
      *a2 = v14;
      v15 = (_DWORD *)*v10;
    }
    else
    {
      v15 = v8;
    }
    sub_77D8A(a2[1], v15);
    a2[2] = (int *)((char *)a2[2] + 1);
    v9 = 1;
  }
  *(_BYTE *)(a1 + 4) = v9;
  *(_DWORD *)a1 = v8;
  return v17[1];
}


// ======================================================================
// ADDR: 0x781b2
// SYMBOL: sub_781B2
int __fastcall sub_781B2(int a1, unsigned __int8 *a2)
{
  int **v2; // r4
  unsigned int v3; // r2
  const void *v4; // r8
  size_t v5; // r9
  size_t v6; // r5
  unsigned int v7; // r2
  size_t v8; // r6
  int *v9; // r10
  int v10; // r0
  int v11; // r0

  v2 = *(int ***)(a1 + 4);
  v3 = *a2;
  v4 = (const void *)*((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 1);
  if ( (v3 & 1) == 0 )
  {
    v4 = a2 + 1;
    v5 = v3 >> 1;
  }
  while ( v2 )
  {
    v6 = v5;
    v7 = *((unsigned __int8 *)v2 + 16);
    v8 = (size_t)v2[5];
    if ( (v7 & 1) == 0 )
      v8 = v7 >> 1;
    if ( v8 < v5 )
      v6 = v8;
    if ( v6 )
    {
      v9 = v2[6];
      if ( (v7 & 1) == 0 )
        v9 = (int *)((char *)v2 + 17);
      v10 = memcmp(v4, v9, v6);
      if ( v10 )
      {
        if ( v10 > -1 )
          goto LABEL_21;
      }
      else if ( v5 >= v8 )
      {
LABEL_21:
        v11 = memcmp(v9, v4, v6);
        if ( v11 )
        {
          if ( v11 > -1 )
            return 1;
        }
        else
        {
LABEL_22:
          if ( v8 >= v5 )
            return 1;
        }
        ++v2;
      }
    }
    else if ( v5 >= v8 )
    {
      goto LABEL_22;
    }
    v2 = (int **)*v2;
  }
  return 0;
}


// ======================================================================
