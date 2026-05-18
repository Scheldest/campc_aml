// ADDR: 0xe301c
// SYMBOL: sub_E301C
_BYTE *__fastcall sub_E301C(_BYTE *result)
{
  *result = 0;
  return result;
}


// ======================================================================
// ADDR: 0xe3024
// SYMBOL: sub_E3024
bool __fastcall sub_E3024(_BYTE *a1)
{
  int v2; // r5

  dword_23DAD8 = 0;
  sub_164A14();
  v2 = sub_164A00(-1, 44100, 0);
  if ( v2 )
  {
    sub_1649D8(16, "SA-MP/0.3");
    sub_1649C4(21, 1);
    sub_1649C4(11, 10000);
    *a1 = 1;
  }
  return v2 != 0;
}


// ======================================================================
// ADDR: 0xe31fc
// SYMBOL: sub_E31FC
int __fastcall sub_E31FC(int result)
{
  int v1; // r3
  _DWORD *v2; // r2
  int v3; // r1
  int v4; // r2
  int v5; // r3
  _DWORD *v6; // r3

  v1 = 0;
  do
  {
    v2 = (_DWORD *)(result + v1);
    v1 += 36;
    v2[1] = 0;
    v2[2] = 0;
    v2[3] = 0;
  }
  while ( v1 != 36144 );
  v3 = result + 8;
  v4 = 1004;
  do
  {
    v5 = *(unsigned __int8 *)(v3 - 4);
    *(_BYTE *)(v3 - 8) = 0;
    if ( v5 << 31 )
    {
      **(_BYTE **)(v3 + 4) = 0;
      *(_DWORD *)v3 = 0;
    }
    else
    {
      *(_WORD *)(v3 - 4) = 0;
    }
    --v4;
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)(v3 + 16) = 0LL;
    v6 = (_DWORD *)(v3 + 24);
    v3 += 36;
    *v6 = 0;
  }
  while ( v4 );
  return result;
}


// ======================================================================
// ADDR: 0xe4ef8
// SYMBOL: sub_E4EF8
int *sub_E4EF8()
{
  return &dword_23DC18;
}


// ======================================================================
// ADDR: 0xe4f04
// SYMBOL: sub_E4F04
int sub_E4F04()
{
  return (unsigned __int16)word_23DC24;
}


// ======================================================================
// ADDR: 0xe4f10
// SYMBOL: sub_E4F10
int *sub_E4F10()
{
  return &dword_23DC28;
}


// ======================================================================
// ADDR: 0xe4f1c
// SYMBOL: sub_E4F1C
int *sub_E4F1C()
{
  return &dword_23DC38;
}


// ======================================================================
// ADDR: 0xf8708
// SYMBOL: sub_F8708
int __fastcall sub_F8708(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  *(_DWORD *)(a1 + 4) = 0;
  return sub_107188(&unk_B2BCE, &unk_B2BCE, 0, a4, a5, a6, a7, a8, a9, a10, a11);
}


// ======================================================================
// ADDR: 0xf93f8
// SYMBOL: sub_F93F8
int sub_F93F8()
{
  _android_log_print(4, "AXL", "CGame initializing..");
  ((void (*)(void))(dword_23DF24 + 2790129))();
  dword_24735C = (int)malloc(0x201u);
  return sub_107138();
}


// ======================================================================
// ADDR: 0xf9444
// SYMBOL: sub_F9444
int sub_F9444()
{
  ((void (*)(void))(dword_23DF24 + 3139105))();
  ((void (*)(void))(dword_23DF24 + 3139003))();
  return ((int (*)(void))(dword_23DF24 + 3138973))();
}


// ======================================================================
// ADDR: 0xf9474
// SYMBOL: sub_F9474
int __fastcall sub_F9474(int result, char a2)
{
  *(_BYTE *)(result + 12) = a2;
  return result;
}


// ======================================================================
// ADDR: 0xf9478
// SYMBOL: sub_F9478
int __fastcall sub_F9478(int result, char a2)
{
  *(_BYTE *)(result + 12) = a2;
  return result;
}


// ======================================================================
// ADDR: 0xf97a8
// SYMBOL: sub_F97A8
int __fastcall sub_F97A8(int a1, char a2)
{
  int result; // r0

  *(_BYTE *)(dword_23DF24 + 8494472) = a2;
  result = dword_23DF24;
  *(_BYTE *)(dword_23DF24 + 10035160) = a2 ^ 1;
  return result;
}


// ======================================================================
// ADDR: 0x10137c
// SYMBOL: sub_10137C
_DWORD *__fastcall sub_10137C(_DWORD *a1)
{
  *a1 = 0;
  a1[1] = 0;
  sub_101394(a1);
  return a1;
}


// ======================================================================
// ADDR: 0x107348
// SYMBOL: sub_107348
int __fastcall sub_107348(int a1)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  sub_107364(a1);
  return a1;
}


// ======================================================================
// ADDR: 0x141948
// SYMBOL: sub_141948
int __fastcall sub_141948(int a1, const char *a2, int a3, int a4, int a5)
{
  char *v9; // r0
  int v10; // r5
  int v11; // r6
  char *v12; // r0
  int v13; // r6
  int v14; // r5
  int v15; // r6
  int v16; // r5
  int v17; // r6
  int v18; // r5
  int v19; // r6
  int v20; // r5
  int v21; // r2
  int v22; // r3
  int v23; // r0
  int result; // r0
  int v25; // [sp+0h] [bp-30h]
  unsigned __int64 s; // [sp+4h] [bp-2Ch] BYREF
  int v27[2]; // [sp+Ch] [bp-24h] BYREF
  void *v28; // [sp+14h] [bp-1Ch]
  int v29; // [sp+18h] [bp-18h]

  *(_DWORD *)(a1 + 948) = 0;
  _android_log_print(4, "AXL", "CNetGame initializing..");
  *(_DWORD *)(a1 + 524) = operator new(0x4Cu);
  sub_22178C(a1, 0x100u);
  sub_22178C(a1 + 257, 0x100u);
  strcpy((char *)a1, "SA-MP");
  v9 = strncpy((char *)(a1 + 257), a2, 0x101u);
  *(_DWORD *)(a1 + 516) = a3;
  *(_DWORD *)(a1 + 528) = sub_17F672(v9);
  sub_141C0C(a1);
  _strcpy_chk(**(_DWORD **)(a1 + 944) + 5026, a4, 25);
  sub_14780C(*(_DWORD *)(a1 + 528));
  sub_14E90C(*(_DWORD *)(a1 + 528));
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 528) + 20))(*(_DWORD *)(a1 + 528), a5);
  v10 = dword_381A0C;
  if ( !dword_381A0C )
  {
    sub_F0FA0();
    v10 = dword_381A0C;
  }
  v11 = *(_DWORD *)(a1 + 528);
  v12 = (char *)sub_F97EC();
  sub_1548E4(v10, v11, v12);
  v13 = dword_381BF4;
  v14 = sub_155C90(dword_381A0C);
  sub_F1E60(&s, (unsigned int)&unk_898D8, 0x1Du);
  sub_DC6DC(v27, (char *)s);
  sub_17C76C(v13, 0, 100, v14, v27);
  if ( LOBYTE(v27[0]) << 31 )
    operator delete(v28);
  v15 = dword_381BF4;
  v16 = sub_155D34(dword_381A0C);
  sub_F1E60(&s, (unsigned int)&unk_8ACED, 0x25u);
  sub_DC6DC(v27, (char *)s);
  sub_17C76C(v15, 0, 100, v16, v27);
  if ( LOBYTE(v27[0]) << 31 )
    operator delete(v28);
  v17 = dword_381BF4;
  v18 = sub_155DD0(dword_381A0C);
  sub_F1E60(&s, (unsigned int)&unk_898F6, 0x1Du);
  sub_DC6DC(v27, (char *)s);
  sub_17C76C(v17, 0, 100, v18, v27);
  if ( LOBYTE(v27[0]) << 31 )
    operator delete(v28);
  v19 = dword_381BF4;
  v20 = sub_155E64(dword_381A0C);
  sub_F1E60(&s, (unsigned int)&unk_883C2, 0x25u);
  sub_DC6DC(v27, (char *)s);
  sub_17C76C(v19, 0, 100, v20, v27);
  if ( LOBYTE(v27[0]) << 31 )
    operator delete(v28);
  sub_22178C(a1 + 544, 0x190u);
  sub_F9478(dword_23DEF0, 0);
  sub_F9480(dword_23DEF0, 0, v21, v22, v25, s, SHIDWORD(s), v27[0], v27[1], (int)v28, v29);
  v23 = *(_DWORD *)(a1 + 524);
  *(_DWORD *)(v23 + 37) = &elf_gnu_hash_indexes[1620];
  *(_WORD *)(v23 + 72) = 0;
  *(_BYTE *)(a1 + 532) = 1;
  *(_DWORD *)(a1 + 540) = 0;
  *(_BYTE *)(a1 + 521) = 0;
  *(_DWORD *)(v23 + 28) = 0;
  *(_DWORD *)(v23 + 32) = 1114636288;
  *(_DWORD *)(v23 + 4) = 0;
  *(_BYTE *)(v23 + 24) = 1;
  *(_BYTE *)(v23 + 16) = 0;
  *(_BYTE *)v23 = 0;
  *(_WORD *)(v23 + 25) = 0;
  *(_BYTE *)(v23 + 27) = 1;
  *(_DWORD *)(v23 + 12) = 1006834287;
  result = a1;
  *(_DWORD *)(a1 + 536) = 1;
  *(_BYTE *)(a1 + 520) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x147d7c
// SYMBOL: sub_147D7C
int __fastcall sub_147D7C(int a1)
{
  int result; // r0

  *(_BYTE *)(a1 + 10) = 0;
  *(_WORD *)(a1 + 8) = -1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = -1;
  *(_DWORD *)(a1 + 12) = sub_F0B30();
  result = a1;
  *(_WORD *)(a1 + 52) = 0;
  return result;
}


// ======================================================================
