// ADDR: 0x6797c
// SYMBOL: sub_6797C
std::__thread_struct ***__fastcall sub_6797C(std::__thread_struct ***a1)
{
  std::__thread_struct **v1; // r5
  std::__thread_struct *v3; // r0
  void *v4; // r0

  v1 = *a1;
  *a1 = 0;
  if ( v1 )
  {
    v3 = *v1;
    *v1 = 0;
    if ( v3 )
    {
      std::__thread_struct::~__thread_struct(v3);
      operator delete(v4);
    }
    operator delete(v1);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x679a2
// SYMBOL: sub_679A2
std::__thread_struct **__fastcall sub_679A2(std::__thread_struct **a1)
{
  std::__thread_struct *v2; // r0
  void *v3; // r0

  v2 = *a1;
  *a1 = 0;
  if ( v2 )
  {
    std::__thread_struct::~__thread_struct(v2);
    operator delete(v3);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x6b384
// SYMBOL: sub_6B384
int __fastcall sub_6B384(int a1)
{
  if ( *(unsigned __int8 *)(a1 + 56) << 31 )
    operator delete(*(void **)(a1 + 64));
  if ( *(unsigned __int8 *)(a1 + 40) << 31 )
    operator delete(*(void **)(a1 + 48));
  return a1;
}


// ======================================================================
// ADDR: 0x6ed9c
// SYMBOL: sub_6ED9C
int __fastcall sub_6ED9C(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 20) )
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  sub_6EDE2(a1);
  free(*(void **)(a1 + 32));
  v2 = *(void **)(a1 + 28);
  if ( v2 )
    operator delete(v2);
  return a1;
}


// ======================================================================
// ADDR: 0x6edc8
// SYMBOL: sub_6EDC8
int __fastcall sub_6EDC8(int a1)
{
  void *v2; // r0

  free(*(void **)(a1 + 8));
  v2 = *(void **)(a1 + 4);
  if ( v2 )
    operator delete(v2);
  return a1;
}


// ======================================================================
// ADDR: 0x6ef7a
// SYMBOL: sub_6EF7A
int __fastcall sub_6EF7A(int a1)
{
  void *v2; // r0

  free(*(void **)(a1 + 8));
  v2 = *(void **)(a1 + 4);
  if ( v2 )
    operator delete(v2);
  return a1;
}


// ======================================================================
// ADDR: 0x71ca8
// SYMBOL: sub_71CA8
int __fastcall sub_71CA8(int a1)
{
  int v2; // r5
  int v3; // r0

  *(_DWORD *)a1 = &off_1105C4;
  _android_log_print(4, "SAMP_ORIG", "ImGuiWrapper::shutdown");
  if ( *(_DWORD *)(a1 + 32) )
  {
    v2 = sub_8C514();
    off_11756C(*(_DWORD *)(a1 + 32));
    v3 = *(_DWORD *)(v2 + 140);
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(v3 + 8) = 0;
  }
  if ( *(unsigned __int8 *)(a1 + 12) << 31 )
    operator delete(*(void **)(a1 + 20));
  return a1;
}


// ======================================================================
// ADDR: 0x71d14
// SYMBOL: sub_71D14
void __fastcall __noreturn sub_71D14(void *a1)
{
  j___cxa_begin_catch(a1);
  std::terminate();
}


// ======================================================================
// ADDR: 0x72214
// SYMBOL: sub_72214
int __fastcall sub_72214(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
    sub_88614(v2);
  return a1;
}


// ======================================================================
// ADDR: 0x72de8
// SYMBOL: sub_72DE8
int __fastcall sub_72DE8(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
    sub_88614(v2);
  return a1;
}


// ======================================================================
// ADDR: 0x74c18
// SYMBOL: sub_74C18
int __fastcall sub_74C18(int a1)
{
  int v2; // r2
  int v3; // r5

  v2 = *(unsigned __int8 *)(a1 + 44);
  *(_DWORD *)(a1 + 64) = &off_110960;
  *(_DWORD *)(a1 + 8) = &off_11094C;
  *(_DWORD *)(a1 + 12) = &off_110A30;
  v3 = a1 + 12;
  *(_DWORD *)a1 = &off_110938;
  if ( v2 << 31 )
    operator delete(*(void **)(a1 + 52));
  std::streambuf::~streambuf(v3);
  std::iostream::~basic_iostream(a1, off_11096C);
  std::ios::~ios(a1 + 64);
  return a1;
}


// ======================================================================
// ADDR: 0x78110
// SYMBOL: sub_78110
void __fastcall sub_78110(int a1, unsigned __int8 *a2)
{
  const std::nothrow_t *v4; // r1

  if ( a2 )
  {
    sub_78110(a1, *(_DWORD *)a2);
    sub_78110(a1, *((_DWORD *)a2 + 1));
    if ( a2[16] << 31 )
      operator delete(*((void **)a2 + 6));
    operator delete(a2, v4);
  }
}


// ======================================================================
// ADDR: 0x78142
// SYMBOL: sub_78142
void __fastcall sub_78142(int a1, unsigned __int8 *a2)
{
  const std::nothrow_t *v4; // r1

  if ( a2 )
  {
    sub_78142(a1, *(_DWORD *)a2);
    sub_78142(a1, *((_DWORD *)a2 + 1));
    if ( a2[16] << 31 )
      operator delete(*((void **)a2 + 6));
    operator delete(a2, v4);
  }
}


// ======================================================================
// ADDR: 0x78174
// SYMBOL: sub_78174
void __fastcall sub_78174(int a1, unsigned __int8 *a2)
{
  const std::nothrow_t *v4; // r1

  if ( a2 )
  {
    sub_78174(a1, *(_DWORD *)a2);
    sub_78174(a1, *((_DWORD *)a2 + 1));
    if ( a2[28] << 31 )
      operator delete(*((void **)a2 + 9));
    if ( a2[16] << 31 )
      operator delete(*((void **)a2 + 6));
    operator delete(a2, v4);
  }
}


// ======================================================================
// ADDR: 0x79948
// SYMBOL: sub_79948
int sub_79948()
{
  int v0; // r4
  _DWORD *v1; // r5
  int v2; // r0
  unsigned __int16 v3; // r8
  int *v4; // r1
  __int64 *v5; // r4
  int *v6; // r1
  _DWORD *v7; // r5
  int *v8; // r0
  __int64 *v9; // r6
  int *v10; // r9
  __int64 *v11; // r10
  int *v12; // r11
  _DWORD *v13; // r12
  int *v14; // r2
  int v15; // r4
  int v16; // r1
  int v17; // r0
  int v18; // r8
  int v19; // r9
  int v20; // r10
  _DWORD *v21; // r1
  bool v22; // zf
  __int64 v23; // kr00_8
  int v24; // r0
  arg6_79824 v26; // [sp+4h] [bp-6Ch]
  arg6_79824 v27; // [sp+10h] [bp-60h]
  arg6_79824 v28; // [sp+1Ch] [bp-54h]
  int v29; // [sp+28h] [bp-48h]
  int v30; // [sp+2Ch] [bp-44h]
  int v31; // [sp+30h] [bp-40h]
  double v32; // [sp+40h] [bp-30h] BYREF
  _DWORD v33[10]; // [sp+48h] [bp-28h] BYREF

  v0 = sub_6C844();
  if ( !*(_DWORD *)(v0 + 8) )
  {
    v1 = (_DWORD *)operator new(0x2F0u);
    *v1 = &off_11056C;
    ((void (__fastcall *)(_DWORD *))(dword_1A4408 + 1063817))(v1);
    *(_DWORD *)(v0 + 8) = v1;
  }
  v2 = dword_1A4548;
  v3 = dword_116D38;
  if ( dword_1A4548 == 1 )
  {
    v4 = (int *)((char *)&unk_1176A0
               + 572 * *(unsigned __int16 *)(**(_DWORD **)(dword_1A4434 + 944) + 5024)
               + 52 * dword_116D38);
    v31 = *v4;
    v30 = v4[1];
    if ( byte_1A458C )
    {
      v29 = 1;
      v5 = &qword_116D3C;
      v6 = &dword_116D44;
      v7 = (_DWORD *)&qword_1A457C + 1;
      v8 = (int *)&qword_116D3C + 1;
      v9 = &qword_1A4574;
      v10 = (int *)&qword_1A4584 + 1;
      v11 = &qword_1A4584;
      v12 = (int *)&qword_1A457C;
      v13 = (_DWORD *)&qword_1A4574 + 1;
    }
    else
    {
      v14 = v4 + 9;
      v9 = (__int64 *)(v4 + 2);
      v13 = v4 + 3;
      v12 = v4 + 4;
      v7 = v4 + 5;
      v11 = (__int64 *)(v4 + 6);
      v10 = v4 + 7;
      v5 = (__int64 *)(v4 + 8);
      v6 = v4 + 10;
      v29 = 0;
      v8 = v14;
    }
    v28.arr[1] = *v8;
    v26.arr[1] = *v13;
    v26.arr[0] = *(_DWORD *)v9;
    v27.arr[0] = *v7;
    v27.arr[1] = *(_DWORD *)v11;
    v28.arr[0] = *(_DWORD *)v5;
    sub_79824(dword_1A4434, v29, dword_116D38, v31, v30, v26, *v12, v27, *v10, v28, *v6);
    v2 = dword_1A4548;
  }
  if ( v2 != 2 )
    goto LABEL_20;
  v15 = v3;
  if ( v3 <= 0x3E8u )
  {
    v16 = dword_1A4434;
    v17 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_1A4434 + 944) + 16) + 4 * v3 + 1004);
    if ( v17 )
    {
      v33[0] = 0;
      v32 = 0.0;
      if ( byte_1A458C )
      {
        v18 = unk_1A4558;
        v19 = unk_1A455C;
        v20 = unk_1A4560;
        v33[0] = dword_1A4570;
        *(_QWORD *)&v32 = unk_1A4568;
      }
      else
      {
        v21 = *(_DWORD **)(v17 + 4);
        v22 = v21 == 0;
        if ( v21 )
        {
          v21 = (_DWORD *)v21[5];
          v22 = v21 == 0;
        }
        if ( v22 )
        {
          v18 = 0;
          v19 = 0;
          v20 = 0;
        }
        else
        {
          v18 = v21[12];
          v19 = v21[13];
          v20 = v21[14];
        }
        ((void (__fastcall *)(int, double *, char *, _DWORD *))(dword_1A4408 + 1057265))(
          v17,
          &v32,
          (char *)&v32 + 4,
          v33);
        v16 = dword_1A4434;
      }
      sub_79BCC(v16, 0, v15, 1, v18, v19, v20, LODWORD(v32), HIDWORD(v32), v33[0]);
LABEL_20:
      byte_1A458C = 0;
      dword_116D38 = -1;
    }
  }
  v23 = *(_QWORD *)(dword_1A442C + 148);
  v24 = *(_DWORD *)(dword_1A442C + 156);
  *(_BYTE *)(HIDWORD(v23) + 8) = 0;
  *(_BYTE *)(v23 + 8) = 0;
  *(_BYTE *)(v24 + 8) = 0;
  byte_1A44AD = 0;
  return v33[2];
}


// ======================================================================
// ADDR: 0x79ce0
// SYMBOL: sub_79CE0
float *__fastcall sub_79CE0(float *result, int a2, int a3)
{
  int v3; // lr
  __int64 v4; // d8
  int v6; // r1
  int v7; // r12
  float v8; // s0
  bool v9; // zf
  bool v10; // zf
  bool v11; // zf
  float *v12; // lr
  int v13; // r2
  __int64 v14; // kr00_8
  float v15; // s0
  float *v16; // r1
  int v17; // r1
  float v18; // s2
  int v19; // r1
  float v20; // s4
  int v21; // s6
  __int64 v22; // kr08_8
  int v23; // r1
  float v24; // s2
  float *v25; // r1
  float v26; // s4
  float v27; // s6
  int v28; // r1
  int v29; // s2
  int v30; // r1
  float v31; // s4
  float v32; // s6
  float v33; // r2
  int v34; // r3
  float v35; // r1
  int v36; // r3
  int v37; // r1
  int v38; // r12
  int v39; // r4
  __int64 v40; // kr10_8
  int v41; // r0
  float v42; // s16
  float *v43; // r0
  double v44; // d17
  int v45; // r1
  double v46; // r2
  double v47; // d16
  float *v48; // r0
  float *v49; // r0
  float v50; // [sp+10h] [bp-28h] BYREF
  float v51; // [sp+14h] [bp-24h] BYREF
  float v52; // [sp+18h] [bp-20h] BYREF
  int v53; // [sp+1Ch] [bp-1Ch]
  __int64 v54; // [sp+20h] [bp-18h]
  int v55; // [sp+34h] [bp-4h]

  if ( !a2 )
    a2 = 1;
  if ( a2 == 3 )
  {
    if ( dword_1A4548 == 1 && (unsigned int)dword_116D38 >= 0x19 )
    {
      result = 0;
      v6 = *(_DWORD *)(dword_1A442C + 148);
      v7 = *(_DWORD *)(dword_1A442C + 156);
      *(_BYTE *)(*(_DWORD *)(dword_1A442C + 152) + 8) = 0;
      *(_BYTE *)(v6 + 8) = 0;
      byte_1A44AD = 0;
      dword_1A454C = 0;
      *(_BYTE *)(v7 + 8) = 0;
    }
    else
    {
      v8 = -*(float *)&dword_116C78;
      if ( result )
        v8 = *(float *)&dword_116C78;
      v9 = a3 == 3;
      if ( a3 == 3 )
        v9 = dword_1A4548 == 1;
      if ( v9 )
      {
        result = (float *)((char *)&unk_1176A0
                         + 572 * *(unsigned __int16 *)(**(_DWORD **)(dword_1A4434 + 944) + 5024)
                         + 52 * dword_116D38);
        result[8] = v8 + result[8];
      }
      else
      {
        v10 = a3 == 4;
        if ( a3 == 4 )
          v10 = dword_1A4548 == 1;
        if ( v10 )
        {
          result = (float *)((char *)&unk_1176A0
                           + 572 * *(unsigned __int16 *)(**(_DWORD **)(dword_1A4434 + 944) + 5024)
                           + 52 * dword_116D38);
          result[9] = v8 + result[9];
        }
        else
        {
          v11 = a3 == 5;
          if ( a3 == 5 )
            v11 = dword_1A4548 == 1;
          if ( v11 )
          {
            result = (float *)((char *)&unk_1176A0
                             + 572 * *(unsigned __int16 *)(**(_DWORD **)(dword_1A4434 + 944) + 5024)
                             + 52 * dword_116D38);
            result[10] = v8 + result[10];
          }
        }
      }
    }
    return result;
  }
  if ( a2 == 2 )
  {
    v55 = v3;
    v54 = v4;
    v36 = dword_1A4548;
    if ( dword_1A4548 == 1 && (unsigned int)dword_116D38 >= 0x19 )
    {
      v37 = *(_DWORD *)(dword_1A442C + 148);
      v38 = *(_DWORD *)(dword_1A442C + 156);
      *(_BYTE *)(*(_DWORD *)(dword_1A442C + 152) + 8) = 0;
      *(_BYTE *)(v37 + 8) = 0;
      byte_1A44AD = 0;
      dword_1A454C = 0;
      *(_BYTE *)(v38 + 8) = 0;
    }
    else
    {
      if ( dword_1A4548 == 2 )
      {
        if ( (unsigned __int16)dword_116D38 > 0x3E8u
          || (v39 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_1A4434 + 944) + 16)
                              + 4 * (unsigned __int16)dword_116D38
                              + 1004)) == 0 )
        {
          v40 = *(_QWORD *)(dword_1A442C + 148);
          v41 = *(_DWORD *)(dword_1A442C + 156);
          *(_BYTE *)(HIDWORD(v40) + 8) = 0;
          *(_BYTE *)(v40 + 8) = 0;
          byte_1A44AD = 0;
          dword_1A454C = 0;
          *(_BYTE *)(v41 + 8) = 0;
          return (float *)v53;
        }
      }
      else
      {
        v39 = 0;
      }
      v42 = -*(float *)&dword_116C74;
      if ( result )
        v42 = *(float *)&dword_116C74;
      switch ( a3 )
      {
        case 5:
          if ( dword_1A4548 == 2 )
          {
            ((void (__fastcall *)(int, float *, float *, float *))(dword_1A4408 + 1057265))(v39, &v52, &v51, &v50);
            sub_682E8(
              word_52394,
              *(_DWORD *)(v39 + 8),
              v52,
              v51,
              (float)(v42 + v50),
              (float)(v42 + v50),
              v51,
              v52,
              v53,
              v54);
          }
          else if ( dword_1A4548 == 1 )
          {
            v48 = (float *)((char *)&unk_1176A0
                          + 572 * *(unsigned __int16 *)(**(_DWORD **)(dword_1A4434 + 944) + 5024)
                          + 52 * dword_116D38);
            v48[7] = v42 + v48[7];
          }
          return (float *)v53;
        case 4:
          if ( dword_1A4548 != 2 )
          {
            if ( dword_1A4548 == 1 )
            {
              v49 = (float *)((char *)&unk_1176A0
                            + 572 * *(unsigned __int16 *)(**(_DWORD **)(dword_1A4434 + 944) + 5024)
                            + 52 * dword_116D38);
              v49[6] = v42 + v49[6];
            }
            return (float *)v53;
          }
          ((void (__fastcall *)(int, float *, float *, float *))(dword_1A4408 + 1057265))(v39, &v52, &v51, &v50);
          v45 = *(_DWORD *)(v39 + 8);
          v46 = v52;
          v47 = v50;
          v44 = (float)(v42 + v51);
          v51 = v42 + v51;
          break;
        case 3:
          if ( dword_1A4548 == 1 )
          {
            v43 = (float *)((char *)&unk_1176A0
                          + 572 * *(unsigned __int16 *)(**(_DWORD **)(dword_1A4434 + 944) + 5024)
                          + 52 * dword_116D38);
            v43[5] = v42 + v43[5];
          }
          if ( v36 != 2 )
            return (float *)v53;
          ((void (__fastcall *)(int, float *, float *, float *))(dword_1A4408 + 1057265))(v39, &v52, &v51, &v50);
          v44 = v51;
          v45 = *(_DWORD *)(v39 + 8);
          v46 = (float)(v42 + v52);
          v52 = v42 + v52;
          v47 = v50;
          break;
        default:
          return (float *)v53;
      }
      sub_682E8(word_52394, v45, v46, v44, v47, v50, v51, v52, v53, v54);
    }
    return (float *)v53;
  }
  if ( a2 != 1 )
    return (float *)sub_6C73C("Unknown mode");
  v55 = v3;
  v12 = result;
  if ( dword_1A4548 == 1 )
  {
    v13 = 0;
    if ( (unsigned int)dword_116D38 >= 0x19 )
    {
      v14 = *(_QWORD *)(dword_1A442C + 148);
      result = *(float **)(dword_1A442C + 156);
      *(_BYTE *)(HIDWORD(v14) + 8) = 0;
      *(_BYTE *)(v14 + 8) = 0;
      byte_1A44AD = 0;
      dword_1A454C = 0;
      *((_BYTE *)result + 8) = 0;
      return result;
    }
    result = (float *)*((_DWORD *)&unk_1176A0
                      + 143 * *(unsigned __int16 *)(**(_DWORD **)(dword_1A4434 + 944) + 5024)
                      + dword_116D38
                      + 133);
  }
  else if ( dword_1A4548 == 2 )
  {
    if ( (unsigned __int16)dword_116D38 > 0x3E8u
      || (result = *(float **)(*(_DWORD *)(*(_DWORD *)(dword_1A4434 + 944) + 16)
                             + 4 * (unsigned __int16)dword_116D38
                             + 1004)) == 0 )
    {
      v22 = *(_QWORD *)(dword_1A442C + 148);
      result = *(float **)(dword_1A442C + 156);
      *(_BYTE *)(HIDWORD(v22) + 8) = 0;
      *(_BYTE *)(v22 + 8) = 0;
      byte_1A44AD = 0;
      dword_1A454C = 0;
      *((_BYTE *)result + 8) = 0;
      return result;
    }
    v13 = 1;
  }
  else
  {
    v13 = 0;
    result = 0;
  }
  v15 = -*(float *)&dword_116C70;
  if ( v12 )
    v15 = *(float *)&dword_116C70;
  switch ( a3 )
  {
    case 5:
      if ( dword_1A4548 == 2 )
      {
        v23 = *((_DWORD *)result + 1);
        v24 = 0.0;
        if ( v23 )
        {
          v25 = *(float **)(v23 + 20);
          v26 = 0.0;
          v27 = 0.0;
          if ( v25 )
          {
            v24 = v25[14];
            v26 = v25[13];
            v27 = v25[12];
          }
        }
        else
        {
          v26 = 0.0;
          v27 = 0.0;
        }
        v35 = v27;
        v33 = v26;
        *(float *)&v34 = v15 + v24;
        return (float *)sub_66064((int)result, v35, v33, v34);
      }
      if ( dword_1A4548 == 1 )
      {
        result = (float *)((char *)&unk_1176A0
                         + 572 * *(unsigned __int16 *)(**(_DWORD **)(dword_1A4434 + 944) + 5024)
                         + 52 * dword_116D38);
        result[2] = v15 + result[2];
      }
      break;
    case 4:
      if ( dword_1A4548 == 2 )
      {
        v28 = *((_DWORD *)result + 1);
        *(float *)&v29 = 0.0;
        if ( v28 )
        {
          v30 = *(_DWORD *)(v28 + 20);
          v31 = 0.0;
          v32 = 0.0;
          if ( v30 )
          {
            v29 = *(int *)(v30 + 56);
            v31 = *(float *)(v30 + 52);
            v32 = *(float *)(v30 + 48);
          }
        }
        else
        {
          v31 = 0.0;
          v32 = 0.0;
        }
        v35 = v32;
        v34 = v29;
        v33 = v15 + v31;
        return (float *)sub_66064((int)result, v35, v33, v34);
      }
      if ( dword_1A4548 == 1 )
      {
        result = (float *)((char *)&unk_1176A0
                         + 572 * *(unsigned __int16 *)(**(_DWORD **)(dword_1A4434 + 944) + 5024)
                         + 52 * dword_116D38);
        result[3] = v15 + result[3];
      }
      break;
    case 3:
      if ( dword_1A4548 == 1 )
      {
        v16 = (float *)((char *)&unk_1176A0
                      + 572 * *(unsigned __int16 *)(**(_DWORD **)(dword_1A4434 + 944) + 5024)
                      + 52 * dword_116D38);
        v16[4] = v15 + v16[4];
      }
      if ( v13 )
      {
        v17 = *((_DWORD *)result + 1);
        v18 = 0.0;
        if ( v17 )
        {
          v19 = *(_DWORD *)(v17 + 20);
          v20 = 0.0;
          *(float *)&v21 = 0.0;
          if ( v19 )
          {
            v21 = *(int *)(v19 + 56);
            v20 = *(float *)(v19 + 52);
            v18 = *(float *)(v19 + 48);
          }
        }
        else
        {
          v20 = 0.0;
          *(float *)&v21 = 0.0;
        }
        v33 = v20;
        v34 = v21;
        v35 = v15 + v18;
        return (float *)sub_66064((int)result, v35, v33, v34);
      }
      break;
  }
  return result;
}


// ======================================================================
// ADDR: 0x7c3b4
// SYMBOL: sub_7C3B4
_DWORD *__fastcall sub_7C3B4(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r6

  v3 = (_DWORD *)a1[19];
  v2 = (_DWORD *)a1[18];
  *a1 = &off_11101C;
  if ( v2 != v3 )
  {
    do
    {
      if ( *v2 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 40))(*v2);
      ++v2;
    }
    while ( v2 != v3 );
    v2 = (_DWORD *)a1[18];
  }
  if ( v2 )
  {
    a1[19] = v2;
    operator delete(v2);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x7daac
// SYMBOL: sub_7DAAC
_DWORD *__fastcall sub_7DAAC(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1

  v2 = (_DWORD *)a1[4];
  if ( a1 == v2 )
  {
    v3 = 4;
    goto LABEL_5;
  }
  if ( v2 )
  {
    v3 = 5;
LABEL_5:
    (*(void (**)(void))(*v2 + 4 * v3))();
  }
  return a1;
}


// ======================================================================
// ADDR: 0x7de14
// SYMBOL: sub_7DE14
int __fastcall sub_7DE14(int a1)
{
  sub_7DFFC();
  return a1;
}


// ======================================================================
// ADDR: 0x7de24
// SYMBOL: sub_7DE24
int __fastcall sub_7DE24(int a1)
{
  void *v2; // r0

  v2 = *(void **)a1;
  if ( v2 )
  {
    *(_DWORD *)(a1 + 4) = v2;
    operator delete(v2);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x7fe08
// SYMBOL: sub_7FE08
std::__thread_struct ***__fastcall sub_7FE08(std::__thread_struct ***a1)
{
  std::__thread_struct **v1; // r5
  std::__thread_struct *v3; // r0
  void *v4; // r0

  v1 = *a1;
  *a1 = 0;
  if ( v1 )
  {
    v3 = *v1;
    *v1 = 0;
    if ( v3 )
    {
      std::__thread_struct::~__thread_struct(v3);
      operator delete(v4);
    }
    operator delete(v1);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x81b78
// SYMBOL: sub_81B78
void **__fastcall sub_81B78(void **a1)
{
  void **v1; // r5
  void *v3; // r0

  v1 = (void **)*a1;
  *a1 = 0;
  if ( v1 )
  {
    v3 = *v1;
    if ( *v1 )
    {
      v1[1] = v3;
      operator delete(v3);
    }
    operator delete(v1);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x81b9c
// SYMBOL: sub_81B9C
void **__fastcall sub_81B9C(void **a1)
{
  void **v1; // r5
  void *v3; // r0

  v1 = (void **)*a1;
  *a1 = 0;
  if ( v1 )
  {
    v3 = *v1;
    if ( *v1 )
    {
      v1[1] = v3;
      operator delete(v3);
    }
    operator delete(v1);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x82f8c
// SYMBOL: sub_82F8C
_DWORD *__fastcall sub_82F8C(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1

  v2 = (_DWORD *)a1[4];
  if ( a1 == v2 )
  {
    v3 = 4;
    goto LABEL_5;
  }
  if ( v2 )
  {
    v3 = 5;
LABEL_5:
    (*(void (**)(void))(*v2 + 4 * v3))();
  }
  return a1;
}


// ======================================================================
// ADDR: 0x836b4
// SYMBOL: sub_836B4
int __fastcall sub_836B4(int a1)
{
  int v2; // r0
  __int64 v3; // kr00_8
  int v5; // r1

  v3 = *(_QWORD *)(a1 + 4);
  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 != (_DWORD)v3 )
  {
    do
    {
      v5 = v2 - 12;
      *(_DWORD *)(a1 + 8) = v2 - 12;
      if ( *(unsigned __int8 *)(v2 - 12) << 31 )
      {
        operator delete(*(void **)(v2 - 4));
        v5 = *(_DWORD *)(a1 + 8);
      }
      v2 = v5;
    }
    while ( v5 != (_DWORD)v3 );
  }
  if ( *(_DWORD *)a1 )
    operator delete(*(void **)a1);
  return a1;
}


// ======================================================================
// ADDR: 0x845f0
// SYMBOL: sub_845F0
int *__fastcall sub_845F0(int *a1)
{
  int v1; // r5
  bool v3; // zf

  v1 = *a1;
  *a1 = 0;
  if ( v1 )
  {
    v3 = *((_BYTE *)a1 + 8) == 0;
    if ( *((_BYTE *)a1 + 8) )
      v3 = *(unsigned __int8 *)(v1 + 20) << 31 == 0;
    if ( !v3 )
      operator delete(*(void **)(v1 + 28));
    operator delete((void *)v1);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x84dbc
// SYMBOL: sub_84DBC
int *__fastcall sub_84DBC(int *a1)
{
  int v2; // r0
  void *v3; // r0

  v2 = *a1;
  *a1 = 0;
  if ( v2 )
  {
    v3 = (void *)sub_7DACC(v2);
    operator delete(v3);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x85080
// SYMBOL: sub_85080
_DWORD **__fastcall sub_85080(_DWORD **a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0

  v2 = *a1;
  *a1 = 0;
  if ( v2 )
  {
    v3 = sub_7DE3C(v2);
    operator delete(v3);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x878c0
// SYMBOL: sub_878C0
int __fastcall sub_878C0(int a1)
{
  unsigned int v2; // r0
  void *v3; // r0

  v2 = *(_DWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 20) = 0;
  if ( !v2 )
    return a1;
  if ( v2 <= 0x200 )
  {
    v3 = *(void **)a1;
    *(_DWORD *)(a1 + 4) = 0;
    if ( v3 )
      operator delete[](v3);
    return a1;
  }
  if ( *(_DWORD *)a1 )
    operator delete[](*(void **)a1);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  return a1;
}


// ======================================================================
// ADDR: 0x88408
// SYMBOL: sub_88408
int __fastcall sub_88408(int a1)
{
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C();
  }
  return a1;
}


// ======================================================================
// ADDR: 0x889de
// SYMBOL: sub_889DE
int __fastcall sub_889DE(unsigned int a1, unsigned int a2)
{
  int result; // r0
  unsigned int v3; // r3
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r3
  int v7; // r3
  bool v8; // zf

  if ( a2 && a1 >= a2 )
    return 0;
  v3 = a1 + 2;
  result = 0;
  while ( 1 )
  {
    v4 = v3;
    v5 = *(unsigned __int16 *)(v3 - 2);
    if ( !v5 )
      break;
    if ( v5 > 0x7F )
    {
      if ( v5 >= 0x800 )
      {
        v7 = v5 & 0xFC00;
        if ( v7 == 56320 )
        {
          v6 = 0;
        }
        else
        {
          v8 = v7 == 55296;
          v6 = 3;
          if ( v8 )
            v6 = 4;
        }
      }
      else
      {
        v6 = 2;
      }
      result += v6;
    }
    else
    {
      ++result;
    }
    v3 = v4 + 2;
    if ( a2 )
    {
      if ( v4 >= a2 )
        break;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x8ab9c
// SYMBOL: sub_8AB9C
_DWORD *__fastcall sub_8AB9C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0

  sub_9BC18();
  v2 = a1[29];
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  v3 = a1[24];
  if ( v3 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v3, dword_1ACF70);
  }
  v4 = a1[21];
  if ( v4 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v4, dword_1ACF70);
  }
  v5 = a1[18];
  if ( v5 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v5, dword_1ACF70);
  }
  v6 = a1[8];
  if ( v6 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v6, dword_1ACF70);
  }
  v7 = a1[5];
  if ( v7 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v7, dword_1ACF70);
  }
  v8 = a1[2];
  if ( v8 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v8, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x8acec
// SYMBOL: sub_8ACEC
int __fastcall sub_8ACEC(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x8ad2c
// SYMBOL: sub_8AD2C
int __fastcall sub_8AD2C(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x8ad6c
// SYMBOL: sub_8AD6C
_DWORD *__fastcall sub_8AD6C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0

  v2 = a1[55];
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  v3 = a1[52];
  if ( v3 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v3, dword_1ACF70);
  }
  v4 = a1[49];
  if ( v4 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v4, dword_1ACF70);
  }
  v5 = a1[46];
  if ( v5 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v5, dword_1ACF70);
  }
  v6 = a1[35];
  if ( v6 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v6, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x8ae44
// SYMBOL: sub_8AE44
int __fastcall sub_8AE44(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 68);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9a560
// SYMBOL: sub_9A560
int __fastcall sub_9A560(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9a5a0
// SYMBOL: sub_9A5A0
int __fastcall sub_9A5A0(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9a5e0
// SYMBOL: sub_9A5E0
int __fastcall sub_9A5E0(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9a620
// SYMBOL: sub_9A620
int __fastcall sub_9A620(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9a660
// SYMBOL: sub_9A660
int __fastcall sub_9A660(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9a6a0
// SYMBOL: sub_9A6A0
int __fastcall sub_9A6A0(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9a6e0
// SYMBOL: sub_9A6E0
int __fastcall sub_9A6E0(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9a730
// SYMBOL: sub_9A730
int __fastcall sub_9A730(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9a770
// SYMBOL: sub_9A770
int __fastcall sub_9A770(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9a7b0
// SYMBOL: sub_9A7B0
int __fastcall sub_9A7B0(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9a7f0
// SYMBOL: sub_9A7F0
int __fastcall sub_9A7F0(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9a830
// SYMBOL: sub_9A830
_DWORD *__fastcall sub_9A830(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0

  v2 = a1[11];
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  v3 = a1[8];
  if ( v3 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v3, dword_1ACF70);
  }
  v4 = a1[5];
  if ( v4 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v4, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9a8cc
// SYMBOL: sub_9A8CC
int __fastcall sub_9A8CC(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9a90c
// SYMBOL: sub_9A90C
int __fastcall sub_9A90C(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9a94c
// SYMBOL: sub_9A94C
int __fastcall sub_9A94C(int a1)
{
  int v2; // r0
  int v3; // r0

  sub_9AC0C();
  v2 = *(_DWORD *)(a1 + 20);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v3, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9a9d8
// SYMBOL: sub_9A9D8
int __fastcall sub_9A9D8(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9aa18
// SYMBOL: sub_9AA18
int __fastcall sub_9AA18(int a1)
{
  int v2; // r0
  int v3; // r0

  v2 = *(_DWORD *)(a1 + 20);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v3, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9aa88
// SYMBOL: sub_9AA88
int __fastcall sub_9AA88(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9aac8
// SYMBOL: sub_9AAC8
int __fastcall sub_9AAC8(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9ab08
// SYMBOL: sub_9AB08
int __fastcall sub_9AB08(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9ab48
// SYMBOL: sub_9AB48
int __fastcall sub_9AB48(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9ab88
// SYMBOL: sub_9AB88
int __fastcall sub_9AB88(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 5384);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x9abcc
// SYMBOL: sub_9ABCC
int __fastcall sub_9ABCC(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_1ACF68 )
      --*(_DWORD *)(dword_1ACF68 + 880);
    off_11724C(v2, dword_1ACF70);
  }
  return a1;
}


// ======================================================================
// ADDR: 0xa310c
// SYMBOL: sub_A310C
int __fastcall sub_A310C(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
    sub_88614(v2);
  return a1;
}


// ======================================================================
// ADDR: 0xa3122
// SYMBOL: sub_A3122
int __fastcall sub_A3122(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
    sub_88614(v2);
  return a1;
}


// ======================================================================
// ADDR: 0xa3636
// SYMBOL: sub_A3636
int __fastcall sub_A3636(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
    sub_88614(v2);
  return a1;
}


// ======================================================================
// ADDR: 0xa364c
// SYMBOL: sub_A364C
int __fastcall sub_A364C(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
    sub_88614(v2);
  return a1;
}


// ======================================================================
// ADDR: 0xa3662
// SYMBOL: sub_A3662
int __fastcall sub_A3662(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0

  v2 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  if ( v2 )
  {
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 36) = 0;
    sub_88614(v2);
    *(_DWORD *)(a1 + 40) = 0;
  }
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 )
  {
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    sub_88614(v3);
    *(_DWORD *)(a1 + 8) = 0;
  }
  v4 = *(_DWORD *)(a1 + 28);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    sub_88614(v4);
    *(_DWORD *)(a1 + 28) = 0;
  }
  *(_BYTE *)(a1 + 84) = 1;
  v5 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  if ( v5 )
  {
    sub_88614(v5);
    v6 = *(_DWORD *)(a1 + 28);
    if ( v6 )
      sub_88614(v6);
  }
  v7 = *(_DWORD *)(a1 + 8);
  if ( v7 )
    sub_88614(v7);
  return a1;
}


// ======================================================================
// ADDR: 0xb00e0
// SYMBOL: sub_B00E0
void **__fastcall sub_B00E0(void **a1)
{
  void **v1; // r5
  void **v3; // r6
  void *v4; // r0

  v1 = (void **)*a1;
  if ( *a1 )
  {
    v3 = (void **)a1[1];
    if ( v3 == v1 )
    {
      v4 = *a1;
    }
    else
    {
      do
      {
        if ( *((unsigned __int8 *)v3 - 16) << 31 )
          operator delete(*(v3 - 2));
        if ( *((unsigned __int8 *)v3 - 32) << 31 )
          operator delete(*(v3 - 6));
        v3 -= 18;
      }
      while ( v3 != v1 );
      v4 = *a1;
    }
    a1[1] = v1;
    operator delete(v4);
  }
  return a1;
}


// ======================================================================
// ADDR: 0xb09c4
// SYMBOL: sub_B09C4
int __fastcall sub_B09C4(int a1)
{
  int i; // r5
  int v2; // r6

  v2 = *(_DWORD *)(a1 + 8);
  for ( i = *(_DWORD *)(a1 + 4); v2 != i; v2 = *(_DWORD *)(a1 + 8) )
  {
    *(_DWORD *)(a1 + 8) = v2 - 72;
    if ( *(unsigned __int8 *)(v2 - 16) << 31 )
      operator delete(*(void **)(v2 - 8));
    if ( *(unsigned __int8 *)(v2 - 32) << 31 )
      operator delete(*(void **)(v2 - 24));
  }
  if ( *(_DWORD *)a1 )
    operator delete(*(void **)a1);
  return a1;
}


// ======================================================================
// ADDR: 0xe2fa4
// SYMBOL: sub_E2FA4
int __fastcall sub_E2FA4(std::locale *a1)
{
  return std::locale::use_facet(a1, (std::locale::id *)&std::num_get<char,std::istreambuf_iterator<char>>::id);
}


// ======================================================================
// ADDR: 0xe2ff4
// SYMBOL: sub_E2FF4
int __fastcall sub_E2FF4(std::locale *a1)
{
  return std::locale::use_facet(a1, (std::locale::id *)&std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id);
}


// ======================================================================
// ADDR: 0xf62fe
// SYMBOL: sub_F62FE
int *__fastcall sub_F62FE(int *a1)
{
  int v1; // r1
  int v3; // r0

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[2];
    a1[1] = v1;
    sub_F633A(a1 + 4, v1, (v3 - v1) >> 2);
  }
  return a1;
}


// ======================================================================
// ADDR: 0xfd184
// SYMBOL: sub_FD184
// attributes: thunk
int __fastcall sub_FD184(int a1)
{
  return sub_FD294(a1);
}


// ======================================================================
// ADDR: 0xfd188
// SYMBOL: sub_FD188
// attributes: thunk
int __fastcall sub_FD188(int a1)
{
  return sub_FD280(a1);
}


// ======================================================================
// ADDR: 0x1065d4
// SYMBOL: sub_1065D4
__int64 __fastcall sub_1065D4(int a1)
{
  return *(_QWORD *)a1;
}


// ======================================================================
// ADDR: 0x106cf0
// SYMBOL: sub_106CF0
bool sub_106CF0()
{
  return pthread_cond_broadcast((pthread_cond_t *)&unk_1AF68C) != 0;
}


// ======================================================================
// ADDR: 0x107aa0
// SYMBOL: sub_107AA0
bool __fastcall sub_107AA0(int a1, _DWORD *lpsrc, _DWORD *a3)
{
  _BOOL4 v5; // r5
  void *v6; // r0
  _DWORD v8[4]; // [sp+4h] [bp-4Ch] BYREF
  int v9; // [sp+14h] [bp-3Ch]
  __int64 v10; // [sp+18h] [bp-38h]
  __int64 v11; // [sp+20h] [bp-30h]
  __int64 v12; // [sp+28h] [bp-28h]
  __int64 v13; // [sp+30h] [bp-20h]
  int v14; // [sp+38h] [bp-18h]

  if ( *(_DWORD *)(a1 + 4) == lpsrc[1] )
    return 1;
  v5 = 0;
  v6 = j___dynamic_cast(
         lpsrc,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__class_type_info,
         0);
  if ( v6 )
  {
    v8[0] = v6;
    v8[1] = 0;
    v9 = 0;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0x100000000LL;
    v14 = 0;
    v8[2] = a1;
    v8[3] = -1;
    (*(void (__fastcall **)(void *, _DWORD *, _DWORD, int))(*(_DWORD *)v6 + 28))(v6, v8, *a3, 1);
    v5 = HIDWORD(v10) == 1;
    if ( HIDWORD(v10) == 1 )
      *a3 = v9;
  }
  return v5;
}


// ======================================================================
// ADDR: 0x10c53c
// SYMBOL: sub_10C53C
void sub_10C53C()
{
  j___cxa_end_catch();
}


// ======================================================================
