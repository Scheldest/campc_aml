// ADDR: 0x9e6e4
// SYMBOL: sub_9E6E4
int __fastcall sub_9E6E4(_DWORD *a1, unsigned int *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int64x2_t v5; // q9
  unsigned int v10; // lr
  unsigned __int32 *v11; // r4
  __int64 v12; // r0
  unsigned int v13; // r9
  bool v14; // cf
  unsigned int v15; // r3
  int64x2_t v16; // q8
  unsigned __int32 *v17; // r2
  int *v18; // r1
  int64x2_t *v19; // r0
  unsigned __int32 v20; // t1
  bool v21; // zf
  unsigned int v22; // r0
  int v23; // t1
  _DWORD v25[2]; // [sp+10h] [bp-98h] BYREF
  char v26; // [sp+18h] [bp-90h]
  int v27; // [sp+1Ch] [bp-8Ch]
  int v28; // [sp+20h] [bp-88h]
  int v29; // [sp+24h] [bp-84h]
  int v30; // [sp+28h] [bp-80h]
  char v31; // [sp+2Ch] [bp-7Ch]
  __int64 v32; // [sp+30h] [bp-78h]
  __int64 v33; // [sp+38h] [bp-70h]
  int v34; // [sp+40h] [bp-68h]
  int v35; // [sp+44h] [bp-64h]
  int v36; // [sp+48h] [bp-60h]
  char v37; // [sp+4Ch] [bp-5Ch]
  int v38; // [sp+50h] [bp-58h]
  int v39; // [sp+54h] [bp-54h]
  char v40[24]; // [sp+58h] [bp-50h] BYREF
  int v41; // [sp+70h] [bp-38h]
  __int64 v42; // [sp+74h] [bp-34h]
  __int64 v43; // [sp+7Ch] [bp-2Ch]
  int v44; // [sp+88h] [bp-20h]

  v10 = a1[6];
  if ( !v10 )
  {
    v11 = (unsigned __int32 *)a1[5];
    if ( !v11 )
    {
      if ( !a1[19] )
      {
        v32 = 0LL;
        v33 = 0LL;
        memset(v40, 0, sizeof(v40));
        v41 = 0;
        v42 = 0LL;
        v43 = 0LL;
        v34 = 0;
        v27 = 0;
        v25[0] = 0;
        v25[1] = 0;
        v35 = 0;
        v38 = 0;
        v39 = 1065353216;
        v37 = 0;
        v26 = 1;
        v36 = 2139095039;
        v30 = 1;
        v28 = 1095761920;
        v31 = 1;
        v29 = 1;
        sub_886C0(v40, 40, "ProggyClean.ttf, %dpx", 13);
        *(_DWORD *)(sub_9EA30((int)a1, a7Hv0qsLQ65N42C, 1095761920, (int)v25, (int)&unk_53880) + 52) = 1065353216;
      }
      sub_9F330(a1);
      v11 = (unsigned __int32 *)a1[5];
      if ( !v11 )
      {
        v10 = a1[6];
        goto LABEL_22;
      }
    }
    v10 = sub_885E4(4 * a1[7] * a1[8]);
    v12 = *(_QWORD *)(a1 + 7);
    a1[6] = v10;
    v13 = HIDWORD(v12) * v12;
    if ( HIDWORD(v12) * (int)v12 < 1 )
      goto LABEL_22;
    if ( v13 < 4 )
      goto LABEL_17;
    v14 = v10 >= (unsigned int)v11 + v13;
    if ( v10 < (unsigned int)v11 + v13 )
      v14 = (unsigned int)v11 >= v10 + 4 * v13;
    if ( !v14 )
    {
LABEL_17:
      v18 = (int *)v10;
      v17 = v11;
LABEL_18:
      v22 = v13 + 1;
      do
      {
        v23 = *(unsigned __int8 *)v17;
        v17 = (unsigned __int32 *)((char *)v17 + 1);
        --v22;
        *v18++ = (v23 << 24) | 0xFFFFFF;
      }
      while ( v22 > 1 );
      goto LABEL_22;
    }
    v15 = v13 & 0xFFFFFFFC;
    v16.n128_u64[0] = 0xFFFFFF00FFFFFFLL;
    v16.n128_u64[1] = 0xFFFFFF00FFFFFFLL;
    v17 = (unsigned __int32 *)((char *)v11 + (v13 & 0xFFFFFFFC));
    v18 = (int *)(v10 + 4 * (v13 & 0xFFFFFFFC));
    v19 = (int64x2_t *)v10;
    do
    {
      v20 = *v11++;
      v15 -= 4;
      v5.n128_u32[0] = v20;
      v5 = vorrq_s64(vshlq_n_s32(vmovl_u16((uint16x4_t)vmovl_u8((uint8x8_t)v5.n128_u64[0]).n128_u64[0]), 0x18u), v16);
      *v19++ = v5;
    }
    while ( v15 );
    v21 = v13 == (v13 & 0xFFFFFFFC);
    v13 &= 3u;
    if ( !v21 )
      goto LABEL_18;
  }
LABEL_22:
  *a2 = v10;
  if ( a3 )
    *a3 = a1[7];
  if ( a4 )
    *a4 = a1[8];
  if ( a5 )
    *a5 = 4;
  return v44;
}


// ======================================================================
