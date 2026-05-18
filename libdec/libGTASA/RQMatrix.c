
// Address: 0x1a0c68
// Original: j__ZN8RQMatrixmLERKS_
// Demangled: RQMatrix::operator*=(RQMatrix const&)
// attributes: thunk
int RQMatrix::operator*=()
{
  return _ZN8RQMatrixmLERKS_();
}


// ============================================================

// Address: 0x1bb0a0
// Original: _ZN8RQMatrixmLERKS_
// Demangled: RQMatrix::operator*=(RQMatrix const&)
float32x4_t *__fastcall RQMatrix::operator*=(float32x4_t *a1, const float *a2)
{
  unsigned __int64 v4; // d16
  unsigned __int64 v5; // d17
  unsigned __int64 v6; // d20
  unsigned __int64 v7; // d21
  unsigned __int64 v8; // d23
  unsigned __int64 v9; // d18
  unsigned __int64 v10; // d19
  const float *v11; // r1
  const float *v12; // r2
  const float *v13; // r3
  const float *v14; // r1
  const float *v15; // r1
  const float *v16; // r1
  const float *v17; // r2
  const float *v18; // r2
  const float *v19; // r2
  float32x4_t v20; // q13
  float32x4_t v21; // q15
  const float *v22; // r2
  float32x4_t v23; // q9
  const float *v24; // r1
  float32x4_t v25; // q14
  float32x4_t v26; // q11
  float32x4_t v27; // q10
  float32x4_t v28; // q13
  float32x4_t v29; // q8
  float32x4_t v30; // q10
  float32x4_t v31; // q14
  const float *v32; // r3
  float32x4_t v33; // q9
  const float *v34; // r3
  float32x4_t v35; // q13
  float32x4_t v36; // q10
  const float *v37; // r3
  float32x4_t v38; // q8
  const float *v39; // r3
  float32x4_t v41; // 0:d0.8,8:d1.8
  float32x4_t v42; // 0:d0.8,8:d1.8
  float32x4_t v43; // 0:d0.8,8:d1.8
  float32x4_t v44; // 0:d2.8,8:d3.8
  float32x4_t v45; // 0:d2.8,8:d3.8
  float32x4_t v46; // 0:d2.8,8:d3.8
  float32x4_t v47; // 0:d2.8,8:d3.8
  float32x4_t v48; // 0:d16.8,8:d17.8
  float32x4_t v49; // 0:d18.8,8:d19.8
  float32x4_t v50; // 0:d22.8,8:d23.8
  float32x4_t v51; // 0:d24.8,8:d25.8
  float32x4_t v52; // 0:d24.8,8:d25.8
  float32x4_t v53; // 0:d28.8,8:d29.8
  float32x4_t v54; // 0:d28.8,8:d29.8
  float32x4_t v55; // 0:d28.8,8:d29.8
  float32x4_t v56; // 0:d30.8,8:d31.8
  float32x4_t v57; // 0:d30.8,8:d31.8

  if ( operator==() == 1 )
  {
    v4 = *(_QWORD *)a2;
    v5 = *((_QWORD *)a2 + 1);
    v6 = *((_QWORD *)a2 + 2);
    v7 = *((_QWORD *)a2 + 3);
    v8 = *((_QWORD *)a2 + 7);
    v9 = *((_QWORD *)a2 + 4);
    v10 = *((_QWORD *)a2 + 5);
    a1[3].n128_u64[0] = *((_QWORD *)a2 + 6);
    a1[3].n128_u64[1] = v8;
    a1[2].n128_u64[0] = v9;
    a1[2].n128_u64[1] = v10;
    a1->n128_u64[0] = v4;
    a1->n128_u64[1] = v5;
    a1[1].n128_u64[0] = v6;
    a1[1].n128_u64[1] = v7;
  }
  else
  {
    v11 = a2;
    v49 = (float32x4_t)vld1q_dup_f32(v11);
    v11 += 4;
    v12 = a2 + 12;
    v13 = a2 + 14;
    v53 = (float32x4_t)vld1q_dup_f32(v11);
    v14 = a2 + 4;
    v56 = (float32x4_t)vld1q_dup_f32(v14);
    v15 = a2 + 5;
    v41 = (float32x4_t)vld1q_dup_f32(v15);
    v16 = a2 + 9;
    v50 = (float32x4_t)vld1q_dup_f32(v12);
    v17 = a2 + 13;
    v51 = (float32x4_t)vld1q_dup_f32(v17);
    v18 = a2 + 6;
    v48 = (float32x4_t)vld1q_dup_f32(v18);
    v19 = a2 + 2;
    v20 = a1[1];
    v21 = vaddq_f32(vmulq_f32(*a1, v56), vmulq_f32(v20, v41));
    v42 = (float32x4_t)vld1q_dup_f32(v19);
    v22 = a2 + 10;
    v23 = vaddq_f32(vmulq_f32(v49, *a1), vmulq_f32(v53, v20));
    v54 = (float32x4_t)vld1q_dup_f32(v16);
    v24 = a2 + 8;
    v25 = vmulq_f32(v20, v54);
    v44 = (float32x4_t)vld1q_dup_f32(v24);
    v26 = vaddq_f32(vmulq_f32(*a1, v50), vmulq_f32(v20, v51));
    v27 = vmulq_f32(*a1, v44);
    v28 = a1[2];
    v45 = (float32x4_t)vld1q_dup_f32(v22);
    v29 = vmulq_f32(v28, v48);
    v52 = a1[3];
    v30 = vaddq_f32(v27, v25);
    v31 = vmulq_f32(v28, v45);
    v46 = (float32x4_t)vld1q_dup_f32(v13);
    v32 = a2 + 3;
    v33 = vaddq_f32(v23, vmulq_f32(v42, v28));
    v43 = (float32x4_t)vld1q_dup_f32(v32);
    v34 = a2 + 11;
    v35 = vmulq_f32(v28, v46);
    v36 = vaddq_f32(v30, v31);
    v55 = (float32x4_t)vld1q_dup_f32(v34);
    v37 = a2 + 7;
    v38 = vaddq_f32(v21, v29);
    v57 = (float32x4_t)vld1q_dup_f32(v37);
    v39 = a2 + 15;
    v47 = (float32x4_t)vld1q_dup_f32(v39);
    a1[4].n128_u8[0] = 1;
    *a1 = vaddq_f32(v33, vmulq_f32(v43, v52));
    a1[1] = vaddq_f32(v38, vmulq_f32(v52, v57));
    a1[2] = vaddq_f32(v36, vmulq_f32(v52, v55));
    a1[3] = vaddq_f32(vaddq_f32(v26, v35), vmulq_f32(v52, v47));
  }
  a1[4].n128_u8[0] = 1;
  return a1;
}


// ============================================================
