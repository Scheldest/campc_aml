// ADDR: 0x955fc
// SYMBOL: sub_955FC
bool sub_955FC()
{
  int v0; // r0

  v0 = *(_DWORD *)(dword_1ACF68 + 6608);
  return v0 && v0 == *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6572) + 264);
}


// ======================================================================
// ADDR: 0x970fc
// SYMBOL: sub_970FC
unsigned int __fastcall sub_970FC(float a1)
{
  float v1; // s0
  int v2; // r2
  int v3; // r5
  int v4; // r6
  __int64 v5; // r0
  int v6; // r4
  int v7; // r1
  int (__fastcall *v8)(int, int); // r12
  int v9; // r1
  void *v10; // r0
  const void *v11; // r1
  void *v12; // r8
  int v13; // r1
  int v14; // r0
  bool v15; // zf
  int v16; // r1
  unsigned int result; // r0

  v1 = a1;
  v2 = dword_1ACF68;
  v3 = dword_1ACF68 + 6572;
  v4 = *(_DWORD *)(dword_1ACF68 + 6572);
  if ( a1 == 0.0 )
    v1 = *(float *)(v4 + 564);
  v5 = *(_QWORD *)(v4 + 388);
  *(float *)(v4 + 368) = v1;
  if ( (_DWORD)v5 == HIDWORD(v5) )
  {
    v6 = v5 + 1;
    if ( (_DWORD)v5 )
      v7 = v5 + (int)v5 / 2;
    else
      v7 = 8;
    if ( v7 > v6 )
      v6 = v7;
    if ( (int)v5 < v6 )
    {
      v8 = off_117248;
      v9 = dword_1ACF70;
      ++*(_DWORD *)(v2 + 880);
      v10 = (void *)v8(4 * v6, v9);
      v11 = *(const void **)(v4 + 396);
      v12 = v10;
      if ( v11 )
      {
        j_memcpy(v10, v11, 4 * *(_DWORD *)(v4 + 388));
        v14 = *(_DWORD *)(v4 + 396);
        v15 = v14 == 0;
        if ( v14 )
        {
          v13 = dword_1ACF68;
          v15 = dword_1ACF68 == 0;
        }
        if ( !v15 )
          --*(_DWORD *)(v13 + 880);
        off_11724C(v14, dword_1ACF70);
      }
      LODWORD(v5) = *(_DWORD *)(v4 + 388);
      *(_DWORD *)(v4 + 392) = v6;
      *(_DWORD *)(v4 + 396) = v12;
    }
  }
  *(_DWORD *)(*(_DWORD *)(v4 + 396) + 4 * v5) = *(_DWORD *)(v4 + 368);
  v16 = *(_DWORD *)(v3 + 188);
  ++*(_DWORD *)(v4 + 388);
  result = v16 & 0xFFFFFFFE;
  *(_DWORD *)(v3 + 188) = v16 & 0xFFFFFFFE;
  return result;
}


// ======================================================================
// ADDR: 0x971e8
// SYMBOL: sub_971E8
int sub_971E8()
{
  int result; // r0
  int v1; // r1
  _DWORD *v2; // r1

  result = *(_DWORD *)(dword_1ACF68 + 6572);
  v1 = *(_DWORD *)(result + 388);
  *(_BYTE *)(result + 124) = 1;
  *(_DWORD *)(result + 388) = v1 - 1;
  if ( v1 == 1 )
    v2 = (_DWORD *)(result + 564);
  else
    v2 = (_DWORD *)(*(_DWORD *)(result + 396) + 4 * v1 - 8);
  *(_DWORD *)(result + 368) = *v2;
  return result;
}


// ======================================================================
// ADDR: 0x977ec
// SYMBOL: sub_977EC
float *__fastcall sub_977EC(float *result)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3
  float v4; // s2
  float v5; // s4
  int v6; // r2
  float v7; // s2
  float v8; // s0

  v1 = *(_DWORD *)(dword_1ACF68 + 6572);
  v2 = *(_DWORD *)(v1 + 448);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 12);
    v4 = *(float *)(v2 + 20);
    v5 = *(float *)(v2 + 24);
    v6 = *(_DWORD *)(v2 + 68);
    if ( v3 > -2 )
      ++v3;
    v7 = (float)(*(float *)(v1 + 12) + (float)(v4 + (float)((float)(v5 - v4) * *(float *)(v6 + 28 * v3))))
       - *(float *)(v1 + 52);
  }
  else
  {
    v7 = *(float *)(v1 + 552);
  }
  v8 = *(float *)(v1 + 556) - *(float *)(v1 + 204);
  *result = v7 - *(float *)(v1 + 200);
  result[1] = v8;
  return result;
}


// ======================================================================
// ADDR: 0xa69b0
// SYMBOL: sub_A69B0
int __fastcall sub_A69B0(char *a1, float *a2)
{
  return sub_A67C0(a1, a2, 0);
}


// ======================================================================
// ADDR: 0xa74fc
// SYMBOL: sub_A74FC
int sub_A74FC()
{
  int v0; // r0
  int v1; // r1
  _DWORD v3[5]; // [sp+4h] [bp-14h] BYREF

  v0 = *(_DWORD *)(dword_1ACF68 + 6572);
  v1 = *(unsigned __int8 *)(v0 + 127);
  *(_BYTE *)(v0 + 124) = 1;
  if ( !v1 )
  {
    v3[0] = 0;
    v3[1] = 0;
    sub_8B104((unsigned int)v3);
  }
  return v3[2];
}


// ======================================================================
// ADDR: 0xa77b4
// SYMBOL: sub_A77B4
int sub_A77B4()
{
  int result; // r0
  int v1; // r1
  int v2; // r0

  result = *(_DWORD *)(dword_1ACF68 + 6572);
  if ( !*(_BYTE *)(result + 127) )
  {
    v1 = *(_DWORD *)(result + 348);
    v2 = 5;
    if ( !v1 )
      v2 = 6;
    return sub_A75DC(v2);
  }
  return result;
}


// ======================================================================
// ADDR: 0xa8070
// SYMBOL: sub_A8070
int __fastcall sub_A8070(char *a1, int *a2, int a3, int a4, int a5)
{
  char *v9; // r4
  int v10; // r2
  float v11; // s0
  char v12; // r9
  unsigned int v13; // r5
  int v14; // r8
  char *v15; // r0
  unsigned int v16; // r1
  unsigned __int64 v18; // [sp+0h] [bp-30h] BYREF
  __int64 v19; // [sp+8h] [bp-28h] BYREF

  v9 = 0;
  v10 = *a2;
  if ( *a2 >= 0 && v10 < a4 )
    v9 = *(char **)(a3 + 4 * v10);
  if ( a5 != -1 && (*(_BYTE *)(dword_1ACF68 + 6672) & 0x10) == 0 )
  {
    v19 = 0LL;
    if ( a5 < 1 )
      v11 = 3.4028e38;
    else
      v11 = (float)(*(float *)(dword_1ACF68 + 5408) + *(float *)(dword_1ACF68 + 5408))
          + (float)((float)((float)(*(float *)(dword_1ACF68 + 6344) + *(float *)(dword_1ACF68 + 5476)) * (float)a5)
                  - *(float *)(dword_1ACF68 + 5476));
    v18 = __PAIR64__(LODWORD(v11), 2139095039);
    sub_97734(&v19, (__int64 *)&v18, 0, 0);
  }
  v12 = 0;
  if ( sub_A77E0(a1, v9, 0) )
  {
    if ( a4 < 1 )
    {
      v12 = 0;
    }
    else
    {
      v13 = 0;
      v12 = 0;
      do
      {
        sub_97B74(v13);
        v14 = *a2;
        v15 = *(char **)(a3 + 4 * v13);
        v16 = __clz(v13 - *a2);
        v19 = 0LL;
        if ( sub_A7C88(v15, v16 >> 5, 0, (float *)&v19) )
        {
          *a2 = v13;
          v12 = 1;
        }
        if ( v13 == v14 )
          sub_97918();
        sub_97DAC();
        ++v13;
      }
      while ( a4 != v13 );
    }
    sub_989E8();
  }
  return v12 & 1;
}


// ======================================================================
// ADDR: 0xab738
// SYMBOL: sub_AB738
int __fastcall sub_AB738(unsigned int a1, int *a2, int a3, int a4, char *a5, float a6)
{
  int v7; // [sp+Ch] [bp-14h] BYREF
  int v8; // [sp+10h] [bp-10h] BYREF

  v7 = a4;
  v8 = a3;
  return sub_AB3C0(a1, 8, a2, &v8, &v7, a5, a6);
}


// ======================================================================
// ADDR: 0xab784
// SYMBOL: sub_AB784
int __fastcall sub_AB784(unsigned int a1, int *a2, int a3, int a4, char *a5)
{
  int v6; // [sp+Ch] [bp-14h] BYREF
  int v7; // [sp+10h] [bp-10h] BYREF

  v6 = a4;
  v7 = a3;
  return sub_AB3C0(a1, 4, a2, &v7, &v6, a5, 1.0);
}


// ======================================================================
