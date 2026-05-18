// ADDR: 0x9b5a0
// SYMBOL: sub_9B5A0
_QWORD *__fastcall sub_9B5A0(int a1)
{
  __int64 v1; // d2
  __int64 v2; // d3
  float32x4_t v3; // q8
  float32x4_t v4; // q10
  __int64 v5; // d22
  __int64 v6; // d23
  __int64 v7; // d24
  __int64 v8; // d25
  float32x4_t v9; // q1
  float32x4_t v10; // q0
  float32x4_t v11; // q1
  float32x4_t v12; // q9
  float32x4_t v13; // q10
  float32x4_t v14; // q12
  float32x4_t v15; // q13
  float32x4_t v16; // q14
  float32x4_t v17; // q11
  _DWORD *v18; // r3
  int v19; // r0
  _QWORD *result; // r0

  if ( !a1 )
    a1 = sub_8C524();
  *(_QWORD *)(a1 + 252) = 0x3EDC28F63EDC28F6LL;
  *(_QWORD *)(a1 + 260) = 0x3F0000003F000000LL;
  *(float *)&v1 = 1.0;
  *((float *)&v1 + 1) = 1.0;
  *(float *)&v2 = 1.0;
  *((float *)&v2 + 1) = 1.0;
  *(_QWORD *)(a1 + 268) = 0LL;
  *(_QWORD *)(a1 + 276) = 0LL;
  *(_QWORD *)(a1 + 284) = 0x3E947AE13E23D70ALL;
  *(_QWORD *)(a1 + 292) = 0x3F0A3D713EF5C28FLL;
  *(_QWORD *)(a1 + 172) = v1;
  *(_QWORD *)(a1 + 180) = v2;
  *(_QWORD *)(a1 + 188) = 0x3F0000003F000000LL;
  *(_QWORD *)(a1 + 196) = 0x3F8000003F000000LL;
  *(_QWORD *)(a1 + 204) = loc_9B7E0;
  *(_QWORD *)(a1 + 212) = loc_9B7E8;
  *(_QWORD *)(a1 + 220) = 0LL;
  *(_QWORD *)(a1 + 228) = 0LL;
  *(_QWORD *)(a1 + 236) = loc_9B7F0;
  *(_QWORD *)(a1 + 244) = loc_9B7F8;
  *(_QWORD *)(a1 + 300) = loc_9B800;
  *(_QWORD *)(a1 + 308) = loc_9B808;
  *(_QWORD *)(a1 + 316) = loc_9B810;
  *(_QWORD *)(a1 + 324) = loc_9B818;
  *(_QWORD *)(a1 + 332) = 0x3D23D70A3D23D70ALL;
  *(_QWORD *)(a1 + 340) = 0x3F8000003D23D70ALL;
  *(_QWORD *)(a1 + 348) = 0x3E947AE13E23D70ALL;
  *(_QWORD *)(a1 + 356) = 0x3F8000003EF5C28FLL;
  *(_QWORD *)(a1 + 364) = 0LL;
  *(_QWORD *)(a1 + 372) = 0x3F028F5C00000000LL;
  *(_QWORD *)(a1 + 380) = 0x3E0F5C293E0F5C29LL;
  *(_QWORD *)(a1 + 388) = 0x3F8000003E0F5C29LL;
  *(_QWORD *)(a1 + 396) = 0x3CA3D70A3CA3D70ALL;
  *(_QWORD *)(a1 + 404) = 0x3F07AE143CA3D70ALL;
  *(_QWORD *)(a1 + 412) = 0x3E9EB8523E9EB852LL;
  *(_QWORD *)(a1 + 420) = 0x3F8000003E9EB852LL;
  *(_QWORD *)(a1 + 428) = 0x3ED1EB853ED1EB85LL;
  *(_QWORD *)(a1 + 436) = 0x3F8000003ED1EB85LL;
  v3.n128_u64[0] = loc_9B8C0;
  v3.n128_u64[1] = loc_9B8C8;
  *(_QWORD *)(a1 + 444) = 0x3F028F5C3F028F5CLL;
  *(_QWORD *)(a1 + 452) = 0x3F8000003F028F5CLL;
  *(_QWORD *)(a1 + 460) = loc_9B8C0;
  *(_QWORD *)(a1 + 468) = loc_9B8C8;
  *(_QWORD *)(a1 + 476) = 0x3F051EB83E75C28FLL;
  *(_QWORD *)(a1 + 484) = 0x3F8000003F6147AELL;
  *(_QWORD *)(a1 + 492) = loc_9B8C0;
  *(_QWORD *)(a1 + 500) = loc_9B8C8;
  *(_QWORD *)(a1 + 508) = loc_9B800;
  *(_QWORD *)(a1 + 516) = loc_9B808;
  *(_QWORD *)(a1 + 524) = loc_9B8C0;
  *(_QWORD *)(a1 + 532) = loc_9B8C8;
  v4.n128_u64[0] = loc_9B8F0;
  v4.n128_u64[1] = loc_9B8F8;
  *(_QWORD *)(a1 + 540) = loc_9B8E0;
  *(_QWORD *)(a1 + 548) = loc_9B8E8;
  *(_QWORD *)(a1 + 556) = loc_9B8F0;
  *(_QWORD *)(a1 + 564) = loc_9B8F8;
  *(_QWORD *)(a1 + 572) = loc_9B900;
  *(_QWORD *)(a1 + 580) = loc_9B908;
  v5 = *(_QWORD *)(a1 + 572);
  v6 = *(_QWORD *)(a1 + 580);
  *(_QWORD *)(a1 + 588) = loc_9B8C0;
  *(_QWORD *)(a1 + 596) = loc_9B8C8;
  v7 = *(_QWORD *)(a1 + 252);
  v8 = *(_QWORD *)(a1 + 260);
  *(_QWORD *)(a1 + 620) = 0x3ECCCCCD3DCCCCCDLL;
  *(_QWORD *)(a1 + 628) = 0x3F47AE143F400000LL;
  *(_QWORD *)(a1 + 636) = 0x3ECCCCCD3DCCCCCDLL;
  *(_QWORD *)(a1 + 644) = 0x3F8000003F400000LL;
  *(_QWORD *)(a1 + 652) = loc_9B930;
  *(_QWORD *)(a1 + 660) = loc_9B938;
  *(_QWORD *)(a1 + 668) = loc_9B810;
  *(_QWORD *)(a1 + 676) = loc_9B818;
  v9.n128_u64[0] = 0xBF170A3DBE851EB8LL;
  v9.n128_u64[1] = 0xBE9EB852BF7AE148LL;
  *(_QWORD *)(a1 + 684) = loc_9B940;
  *(_QWORD *)(a1 + 692) = loc_9B948;
  v10 = *(float32x4_t *)(a1 + 348);
  v11 = vaddq_f32(v10, v9);
  v12.n128_u64[0] = 0x3F4CCCCD3F4CCCCDLL;
  v12.n128_u64[1] = 0x3F4CCCCD3F4CCCCDLL;
  *(_QWORD *)(a1 + 604) = v7;
  *(_QWORD *)(a1 + 612) = v8;
  v13 = vmlaq_f32(v4, v11, v12);
  v14.n128_u64[0] = 0x3ECCCCCD3ECCCCCDLL;
  v14.n128_u64[1] = 0x3ECCCCCD3ECCCCCDLL;
  v11.n128_f32[3] = v10.n128_f32[3] + -1.0;
  v15.n128_u64[0] = 0x3F19999A3F19999ALL;
  v15.n128_u64[1] = 0x3F19999A3F19999ALL;
  *(float32x4_t *)(a1 + 700) = v13;
  v16 = vmlaq_f32(v3, v11, v15);
  *(_QWORD *)(a1 + 716) = v5;
  *(_QWORD *)(a1 + 724) = v6;
  v17 = *(float32x4_t *)(a1 + 332);
  *(_DWORD *)(a1 + 740) = v16.n128_u32[2];
  *(_QWORD *)(a1 + 732) = v16.n128_u64[0];
  v18 = (_DWORD *)(a1 + 744);
  v19 = a1 + 748;
  *v18 = v16.n128_u32[3];
  *(float32x4_t *)v19 = vmlaq_f32(v13, vsubq_f32(v17, v13), v12);
  v19 += 16;
  *(float32x4_t *)v19 = vmlaq_f32(v16, vsubq_f32(v17, v16), v14);
  v19 += 16;
  *(_QWORD *)v19 = 0x3F1C28F63F1C28F6LL;
  *(_QWORD *)(v19 + 8) = 0x3F8000003F1C28F6LL;
  v19 += 16;
  *(_QWORD *)v19 = *(_QWORD *)"";
  *(_QWORD *)(v19 + 8) = 0x3F8000003EB33333LL;
  v19 += 16;
  strcpy((char *)v19, "fff?333?");
  *(_BYTE *)(v19 + 9) = 0;
  *(_WORD *)(v19 + 10) = 0;
  *(_DWORD *)(v19 + 12) = 1065353216;
  v19 += 16;
  *(_QWORD *)v19 = 0x3F19999A3F800000LL;
  *(_QWORD *)(v19 + 8) = 0x3F80000000000000LL;
  v19 += 16;
  *(_QWORD *)v19 = loc_9B9B0;
  *(_QWORD *)(v19 + 8) = loc_9B9B8;
  v19 += 16;
  *(_QWORD *)v19 = 0x3F8000003F800000LL;
  *(_QWORD *)(v19 + 8) = 0x3F66666600000000LL;
  v19 += 16;
  *(_QWORD *)v19 = loc_9B8C0;
  *(_QWORD *)(v19 + 8) = loc_9B8C8;
  v19 += 16;
  *(_QWORD *)v19 = 0x3F8000003F800000LL;
  *(_QWORD *)(v19 + 8) = 0x3F3333333F800000LL;
  v19 += 16;
  *(_QWORD *)v19 = loc_9BA00;
  *(_QWORD *)(v19 + 8) = loc_9BA08;
  result = (_QWORD *)(v19 + 16);
  *result = loc_9BA10;
  result[1] = loc_9BA18;
  return result;
}


// ======================================================================
