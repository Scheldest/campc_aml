// ADDR: 0xf0830
// SYMBOL: sub_F0830
int sub_F0830()
{
  int v0; // r4
  int v1; // r4
  _BYTE *v2; // r4
  int v3; // r4
  int v4; // r4
  int v5; // r0
  _BYTE *v6; // r5
  _BYTE *v7; // r4
  _BYTE *v8; // r5
  _BYTE *v9; // r0
  _BYTE *v10; // r6
  int v11; // r0
  int result; // r0
  int v13; // r4
  int *v14; // r0
  char *v15; // r9
  int v16; // r8
  int *v17; // r0
  int v18; // r5
  int *v19; // r6
  int v20; // r10
  int *v21; // r0
  char *v22; // r2
  int *v23; // r5
  char *v24; // r10
  int v25; // r9
  int v26; // r8
  int *v27; // r6
  char *v28; // r4
  int v29; // r11
  int *v30; // r0
  char *v31; // r3

  if ( !byte_23DF2C )
  {
    v0 = operator new(0x14u);
    sub_107348();
    dword_23DEFC = v0;
    v1 = operator new(8u);
    sub_10137C();
    dword_23DF00 = v1;
    v2 = (_BYTE *)operator new(1u);
    sub_E301C(v2);
    dword_23DF04 = (int)v2;
    sub_E3024(v2);
    v3 = operator new(0x38u);
    sub_147D7C();
    dword_23DF0C = v3;
    v4 = operator new(0x8D30u);
    sub_E31FC(v4);
    v5 = dword_23DEEC;
    v6 = *(_BYTE **)(dword_23DEEC + 92);
    dword_23DF08 = v4;
    if ( v6[80] )
    {
      (*(void (__fastcall **)(_BYTE *, _DWORD))(*(_DWORD *)v6 + 36))(v6, 0);
      v5 = dword_23DEEC;
    }
    v7 = *(_BYTE **)(v5 + 96);
    v6[80] = 0;
    if ( v7[80] != 1 )
    {
      (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v7 + 36))(v7, 1);
      v5 = dword_23DEEC;
    }
    v8 = *(_BYTE **)(v5 + 132);
    v7[80] = 1;
    if ( v8[80] != 1 )
      (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v8 + 36))(v8, 1);
    v8[80] = 1;
    if ( (dword_23DF1C & 0xFFFFFFFB) != 0 || !*(_BYTE *)(dword_381BF4 + 132) )
      v9 = *(_BYTE **)(dword_23DEEC + 108);
    else
      v9 = *(_BYTE **)(dword_23DEEC + 128);
    v10 = v9 + 80;
    if ( v9[80] != 1 )
      (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v9 + 36))(v9, 1);
    *v10 = 1;
    sub_F93F8(dword_23DEF0);
    sub_F9444(dword_23DEF0);
    sub_F9474(dword_23DEF0, 0);
    if ( byte_23DF19 )
    {
      sub_F8708(*(_DWORD *)(dword_23DEF0 + 4));
      sub_F85F0(*(_DWORD *)(dword_23DEF0 + 4));
      sub_F97A8(dword_23DEF0, 1);
      sub_F9478(dword_23DEF0, 0);
      v11 = sub_E35A0(dword_23DEF0);
      (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v11 + 16))(v11, -994344960, -994344960, 1115160576);
    }
    byte_23DF2C = 1;
  }
  result = (unsigned __int8)byte_23DF19 | (unsigned __int8)byte_23DF1A;
  if ( !result )
  {
    v13 = operator new(0x3B8u);
    v14 = sub_E4EF8();
    v15 = (char *)v14[2];
    if ( !(*(unsigned __int8 *)v14 << 31) )
      v15 = (char *)v14 + 1;
    v16 = sub_E4F04();
    v17 = sub_E4F1C();
    v18 = v17[2];
    v19 = v17;
    v20 = *(unsigned __int8 *)v17;
    v21 = sub_E4F10();
    v22 = (char *)v21[2];
    if ( !(*(unsigned __int8 *)v21 << 31) )
      v22 = (char *)v21 + 1;
    if ( !(v20 << 31) )
      v18 = (int)v19 + 1;
    sub_141948(v13, v15, v16, v18, v22);
    dword_23DEF4 = v13;
    v23 = sub_E4EF8();
    v24 = (char *)v23[2];
    v25 = *(unsigned __int8 *)v23;
    v26 = sub_E4F04();
    v27 = sub_E4F1C();
    v28 = (char *)v27[2];
    v29 = *(unsigned __int8 *)v27;
    v30 = sub_E4F10();
    v31 = (char *)v30[2];
    if ( !(*(unsigned __int8 *)v30 << 31) )
      v31 = (char *)v30 + 1;
    if ( !(v29 << 31) )
      v28 = (char *)v27 + 1;
    if ( !(v25 << 31) )
      v24 = (char *)v23 + 1;
    _android_log_print(4, "AXL", "connected: %s, %i, %s, %s", v24, v26, v28, v31);
    result = 1;
    byte_23DF1A = 1;
  }
  return result;
}


// ======================================================================
// ADDR: 0x148198
// SYMBOL: sub_148198
unsigned int __fastcall sub_148198(int a1)
{
  unsigned int v2; // r0
  int v3; // r1
  _DWORD *v4; // r0
  __int64 v5; // d16
  int v6; // r1
  int v7; // r0
  int v8; // r0
  __int64 v9; // d16
  __int64 v10; // d16
  __int64 v11; // d16
  unsigned int result; // r0

  if ( *(_BYTE *)(a1 + 52) )
  {
    if ( *(_DWORD *)a1 == 1 )
    {
      v7 = sub_E35A0(dword_23DEF0);
      v8 = sub_105696(v7, *(_DWORD *)(a1 + 4));
      if ( v8 )
      {
        v9 = *(_QWORD *)(a1 + 16);
        *(_DWORD *)(v8 + 16) = *(_DWORD *)(a1 + 24);
        *(_QWORD *)(v8 + 8) = v9;
        v10 = *(_QWORD *)(a1 + 28);
        *(_DWORD *)(v8 + 28) = *(_DWORD *)(a1 + 36);
        *(_QWORD *)(v8 + 20) = v10;
        v11 = *(_QWORD *)(a1 + 40);
        *(_DWORD *)(v8 + 40) = *(_DWORD *)(a1 + 48);
        *(_QWORD *)(v8 + 32) = v11;
        *(_BYTE *)(a1 + 52) = 0;
      }
    }
    else if ( *(_DWORD *)a1 == 2 )
    {
      v2 = *(unsigned __int16 *)(a1 + 8);
      if ( v2 <= 0x3E8 )
      {
        v3 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 16);
        if ( *(_BYTE *)(v3 + v2 + 4) )
        {
          v4 = *(_DWORD **)(v3 + 4 * v2 + 1004);
          if ( v4 )
          {
            v5 = *(_QWORD *)(a1 + 16);
            v6 = *(_DWORD *)(v4[1] + 20);
            *(_DWORD *)(v6 + 56) = *(_DWORD *)(a1 + 24);
            *(_QWORD *)(v6 + 48) = v5;
            sub_1019BC(v4, (float *)(a1 + 28));
            *(_WORD *)(a1 + 52) = 256;
          }
        }
      }
    }
  }
  result = *(unsigned __int8 *)(a1 + 53);
  if ( *(_BYTE *)(a1 + 53) )
  {
    result = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == 2 )
    {
      result = sub_F0B30() - *(_DWORD *)(a1 + 12);
      if ( result >= 0xFB )
      {
        sub_147F30(a1, 2);
        *(_BYTE *)(a1 + 53) = 0;
        result = sub_F0B30();
        *(_DWORD *)(a1 + 12) = result;
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x14f44c
// SYMBOL: sub_14F44C
unsigned int __fastcall sub_14F44C(int a1)
{
  unsigned __int16 *v2; // r5
  unsigned int result; // r0
  unsigned __int16 *v4; // r6

  v2 = *(unsigned __int16 **)(a1 + 9216);
  result = a1 + 9216;
  v4 = *(unsigned __int16 **)(result + 4);
  while ( v2 != v4 )
  {
    result = *(_DWORD *)(a1 + 4 * *v2);
    if ( result )
      result = sub_107E7A((char *)result);
    ++v2;
  }
  return result;
}


// ======================================================================
