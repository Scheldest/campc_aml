// ADDR: 0xdc924
// SYMBOL: sub_DC924
void __fastcall __noreturn sub_DC924(void *a1)
{
  j___cxa_begin_catch(a1);
  std::terminate();
}


// ======================================================================
// ADDR: 0xe3934
// SYMBOL: sub_E3934
int __fastcall sub_E3934(int a1)
{
  int v2; // r2
  int v3; // r5

  v2 = *(unsigned __int8 *)(a1 + 44);
  *(_DWORD *)(a1 + 64) = &off_22A640;
  *(_DWORD *)(a1 + 8) = &off_22A62C;
  *(_DWORD *)(a1 + 12) = &off_22A710;
  v3 = a1 + 12;
  *(_DWORD *)a1 = &off_22A618;
  if ( v2 << 31 )
    operator delete(*(void **)(a1 + 52));
  std::streambuf::~streambuf(v3);
  std::iostream::~basic_iostream(a1, off_22A64C);
  std::ios::~ios(a1 + 64);
  return a1;
}


// ======================================================================
// ADDR: 0xe6674
// SYMBOL: sub_E6674
_DWORD *__fastcall sub_E6674(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1

  sub_E6790(a1 + 8);
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
// ADDR: 0xea406
// SYMBOL: sub_EA406
void __fastcall sub_EA406(int a1, unsigned __int8 *a2)
{
  const std::nothrow_t *v3; // r1

  v3 = (const std::nothrow_t *)*(unsigned __int8 *)(a1 + 4);
  if ( *(_BYTE *)(a1 + 4) )
    sub_E5EAC(*(_DWORD *)a1, a2 + 16);
  if ( a2 )
    operator delete(a2, v3);
}


// ======================================================================
// ADDR: 0xede5c
// SYMBOL: sub_EDE5C
_DWORD *__fastcall sub_EDE5C(_DWORD *a1)
{
  _DWORD *v2; // r5

  a1[24] = &off_22A938;
  v2 = a1 + 24;
  *a1 = &off_22A924;
  sub_E50B0((int)(a1 + 1));
  std::ostream::~ostream(a1, off_22A944);
  std::ios::~ios(v2);
  return a1;
}


// ======================================================================
// ADDR: 0xf415e
// SYMBOL: sub_F415E
int __fastcall sub_F415E(int a1)
{
  __int64 v2; // kr00_8

  v2 = *(_QWORD *)(a1 + 4);
  if ( HIDWORD(v2) != (_DWORD)v2 )
    *(_DWORD *)(a1 + 8) = HIDWORD(v2) + 16 * ~((unsigned int)(HIDWORD(v2) - v2 - 16) >> 4);
  if ( *(_DWORD *)a1 )
    operator delete(*(void **)a1);
  return a1;
}


// ======================================================================
// ADDR: 0xf726c
// SYMBOL: sub_F726C
unsigned __int8 *__fastcall sub_F726C(unsigned __int8 *a1)
{
  if ( a1[12] << 31 )
    operator delete(*((void **)a1 + 5));
  if ( *a1 << 31 )
    operator delete(*((void **)a1 + 2));
  return a1;
}


// ======================================================================
// ADDR: 0xf7950
// SYMBOL: sub_F7950
void __fastcall sub_F7950(int a1, int a2)
{
  if ( *(_BYTE *)(a1 + 4) )
  {
    if ( *(unsigned __int8 *)(a2 + 16) << 31 )
      operator delete(*(void **)(a2 + 24));
  }
  else if ( !a2 )
  {
    return;
  }
  operator delete((void *)a2, (const std::nothrow_t *)a2);
}


// ======================================================================
// ADDR: 0xf9aac
// SYMBOL: sub_F9AAC
int __fastcall sub_F9AAC(int a1, int a2, float a3, float a4, float a5)
{
  int v6; // [sp+14h] [bp-Ch]
  int v7; // [sp+18h] [bp-8h]

  return sub_107188(
           &unk_B2D2C,
           a2,
           COERCE_UNSIGNED_INT64(a3),
           HIDWORD(COERCE_UNSIGNED_INT64(a3)),
           COERCE_UNSIGNED_INT64(a4),
           HIDWORD(COERCE_UNSIGNED_INT64(a4)),
           COERCE_UNSIGNED_INT64(a5),
           HIDWORD(COERCE_UNSIGNED_INT64(a5)),
           a2,
           v6,
           v7);
}


// ======================================================================
// ADDR: 0xfa924
// SYMBOL: sub_FA924
_DWORD *__fastcall sub_FA924(_DWORD *a1)
{
  std::__shared_weak_count *v2; // r0

  v2 = (std::__shared_weak_count *)a1[2];
  *a1 = &off_22AE84;
  if ( v2 )
    std::__shared_weak_count::__release_weak(v2);
  return a1;
}


// ======================================================================
// ADDR: 0xfcaa4
// SYMBOL: sub_FCAA4
int __fastcall sub_FCAA4(int a1)
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
// ADDR: 0xfcb74
// SYMBOL: sub_FCB74
_BYTE *__fastcall sub_FCB74(_BYTE *a1)
{
  if ( *a1 )
    sub_161204();
  return a1;
}


// ======================================================================
// ADDR: 0x1009fe
// SYMBOL: sub_1009FE
void __fastcall sub_1009FE(void **a1, void *a2)
{
  void *v2; // r4
  const std::nothrow_t *v3; // r1

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    sub_100A1C(v2, 0);
    operator delete(v2, v3);
  }
}


// ======================================================================
// ADDR: 0x100a36
// SYMBOL: sub_100A36
int *__fastcall sub_100A36(int *a1)
{
  int *result; // r0
  int v3; // r1
  int v4; // r2
  _DWORD *v5; // r1
  int *v6; // r5

  result = (int *)a1[2];
  if ( result )
  {
    result = (int *)a1[1];
    v3 = *a1;
    v4 = *result;
    *(_DWORD *)(v4 + 4) = *(_DWORD *)(*a1 + 4);
    v5 = *(_DWORD **)(v3 + 4);
    a1[2] = 0;
    *v5 = v4;
    if ( result != a1 )
    {
      do
      {
        v6 = (int *)result[1];
        operator delete(result);
        result = v6;
      }
      while ( v6 != a1 );
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x10b2dc
// SYMBOL: sub_10B2DC
int __fastcall sub_10B2DC(int a1)
{
  std::__shared_weak_count *v1; // r5
  unsigned int *v3; // r0
  unsigned int v4; // r1

  v1 = *(std::__shared_weak_count **)(a1 + 4);
  if ( v1 )
  {
    v3 = (unsigned int *)((char *)v1 + 4);
    __dmb(0xBu);
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 - 1, v3) );
    __dmb(0xBu);
    if ( !v4 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v1 + 8))(v1);
      std::__shared_weak_count::__release_weak(v1);
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x10bde6
// SYMBOL: sub_10BDE6
int __fastcall sub_10BDE6(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  void *v4; // r0

  v2 = *(_DWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = *(void **)a1;
  *(_DWORD *)a1 = 0;
  if ( v4 )
    operator delete(v4);
  return a1;
}


// ======================================================================
// ADDR: 0x10d618
// SYMBOL: sub_10D618
int __fastcall sub_10D618(int a1)
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
// ADDR: 0x10e060
// SYMBOL: sub_10E060
int __fastcall sub_10E060(int a1)
{
  std::__shared_weak_count *v1; // r5
  unsigned int *v3; // r0
  unsigned int v4; // r1

  v1 = *(std::__shared_weak_count **)(a1 + 4);
  if ( v1 )
  {
    v3 = (unsigned int *)((char *)v1 + 4);
    __dmb(0xBu);
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 - 1, v3) );
    __dmb(0xBu);
    if ( !v4 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v1 + 8))(v1);
      std::__shared_weak_count::__release_weak(v1);
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x10e292
// SYMBOL: sub_10E292
void __fastcall sub_10E292(int a1, int a2)
{
  if ( *(_BYTE *)(a1 + 4) )
  {
    if ( *(unsigned __int8 *)(a2 + 20) << 31 )
      operator delete(*(void **)(a2 + 28));
  }
  else if ( !a2 )
  {
    return;
  }
  operator delete((void *)a2, (const std::nothrow_t *)a2);
}


// ======================================================================
// ADDR: 0x10f6a8
// SYMBOL: sub_10F6A8
void **__fastcall sub_10F6A8(void **a1)
{
  if ( *a1 )
  {
    sub_10F6C2(a1);
    operator delete(*a1);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x111930
// SYMBOL: sub_111930
int __fastcall sub_111930(const char *a1, int a2)
{
  size_t v4; // r0

  v4 = strlen(a1);
  return sub_112034(2, a1, v4, a2);
}


// ======================================================================
// ADDR: 0x1119de
// SYMBOL: sub_1119DE
int __fastcall sub_1119DE(int a1)
{
  sub_1630A8(a1);
  return a1;
}


// ======================================================================
// ADDR: 0x111bfc
// SYMBOL: sub_111BFC
int __fastcall sub_111BFC(const char *a1, int a2)
{
  size_t v4; // r0

  v4 = strlen(a1);
  return sub_112034(2, a1, v4, a2);
}


// ======================================================================
// ADDR: 0x111ce6
// SYMBOL: sub_111CE6
int __fastcall sub_111CE6(int a1)
{
  std::__shared_weak_count *v1; // r5
  unsigned int *v3; // r0
  unsigned int v4; // r1

  v1 = *(std::__shared_weak_count **)(a1 + 4);
  if ( v1 )
  {
    v3 = (unsigned int *)((char *)v1 + 4);
    __dmb(0xBu);
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 - 1, v3) );
    __dmb(0xBu);
    if ( !v4 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v1 + 8))(v1);
      std::__shared_weak_count::__release_weak(v1);
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x1130d8
// SYMBOL: sub_1130D8
int __fastcall sub_1130D8(int a1)
{
  std::__shared_weak_count *v1; // r5
  unsigned int *v3; // r0
  unsigned int v4; // r1

  v1 = *(std::__shared_weak_count **)(a1 + 4);
  if ( v1 )
  {
    v3 = (unsigned int *)((char *)v1 + 4);
    __dmb(0xBu);
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 - 1, v3) );
    __dmb(0xBu);
    if ( !v4 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v1 + 8))(v1);
      std::__shared_weak_count::__release_weak(v1);
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x113110
// SYMBOL: sub_113110
_DWORD *__fastcall sub_113110(_DWORD *a1)
{
  std::__shared_weak_count *v2; // r0
  std::__shared_weak_count *v3; // r0
  std::__shared_weak_count *v4; // r0
  std::__shared_weak_count *v5; // r0
  std::__shared_weak_count *v6; // r0
  std::__shared_weak_count *v7; // r0
  std::__shared_weak_count *v8; // r0
  std::__shared_weak_count *v9; // r0
  std::__shared_weak_count *v10; // r0
  std::__shared_weak_count *v11; // r0

  v2 = (std::__shared_weak_count *)a1[29];
  a1[27] = &off_22AE84;
  if ( v2 )
    std::__shared_weak_count::__release_weak(v2);
  v3 = (std::__shared_weak_count *)a1[26];
  a1[24] = &off_22AE84;
  if ( v3 )
    std::__shared_weak_count::__release_weak(v3);
  v4 = (std::__shared_weak_count *)a1[23];
  a1[21] = &off_22AE84;
  if ( v4 )
    std::__shared_weak_count::__release_weak(v4);
  v5 = (std::__shared_weak_count *)a1[20];
  a1[18] = &off_22AE84;
  if ( v5 )
    std::__shared_weak_count::__release_weak(v5);
  v6 = (std::__shared_weak_count *)a1[17];
  a1[15] = &off_22AE84;
  if ( v6 )
    std::__shared_weak_count::__release_weak(v6);
  v7 = (std::__shared_weak_count *)a1[14];
  a1[12] = &off_22AE84;
  if ( v7 )
    std::__shared_weak_count::__release_weak(v7);
  v8 = (std::__shared_weak_count *)a1[11];
  a1[9] = &off_22AE84;
  if ( v8 )
    std::__shared_weak_count::__release_weak(v8);
  v9 = (std::__shared_weak_count *)a1[8];
  a1[6] = &off_22AE84;
  if ( v9 )
    std::__shared_weak_count::__release_weak(v9);
  v10 = (std::__shared_weak_count *)a1[5];
  a1[3] = &off_22AE84;
  if ( v10 )
    std::__shared_weak_count::__release_weak(v10);
  v11 = (std::__shared_weak_count *)a1[2];
  *a1 = &off_22AE84;
  if ( v11 )
    std::__shared_weak_count::__release_weak(v11);
  return a1;
}


// ======================================================================
// ADDR: 0x1131be
// SYMBOL: sub_1131BE
int sub_1131BE()
{
  return sub_163C8C(0);
}


// ======================================================================
// ADDR: 0x1133ac
// SYMBOL: sub_1133AC
int __fastcall sub_1133AC(int a1)
{
  std::__shared_weak_count *v1; // r5
  unsigned int *v3; // r0
  unsigned int v4; // r1

  v1 = *(std::__shared_weak_count **)(a1 + 4);
  if ( v1 )
  {
    v3 = (unsigned int *)((char *)v1 + 4);
    __dmb(0xBu);
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 - 1, v3) );
    __dmb(0xBu);
    if ( !v4 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v1 + 8))(v1);
      std::__shared_weak_count::__release_weak(v1);
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x114fc4
// SYMBOL: sub_114FC4
int __fastcall sub_114FC4(int a1)
{
  *(_DWORD *)a1 = &off_22B9F0;
  sub_115466(a1);
  sub_111E8A((unsigned int **)(a1 + 8));
  std::mutex::~mutex((std::mutex *)(a1 + 4));
  return a1;
}


// ======================================================================
// ADDR: 0x116158
// SYMBOL: sub_116158
int __fastcall sub_116158(int a1)
{
  int v2; // r2
  int v3; // r5

  v2 = *(unsigned __int8 *)(a1 + 36);
  *(_DWORD *)a1 = &off_22BC50;
  *(_DWORD *)(a1 + 4) = &off_22A710;
  v3 = a1 + 4;
  *(_DWORD *)(a1 + 56) = &off_22BC64;
  if ( v2 << 31 )
    operator delete(*(void **)(a1 + 44));
  std::streambuf::~streambuf(v3);
  std::ostream::~ostream(a1, off_22BC70);
  std::ios::~ios(a1 + 56);
  return a1;
}


// ======================================================================
// ADDR: 0x1177f8
// SYMBOL: sub_1177F8
_DWORD *__fastcall sub_1177F8(_DWORD *a1)
{
  void *v3[5]; // [sp+4h] [bp-14h] BYREF

  *a1 = &off_22BDA8;
  sub_116964(v3, a1);
  sub_10B7B4(1, "Remove HUD {}", 13, (unsigned __int8 *)v3);
  if ( LOBYTE(v3[0]) << 31 )
    operator delete(v3[2]);
  return a1;
}


// ======================================================================
// ADDR: 0x117ad0
// SYMBOL: sub_117AD0
_DWORD *__fastcall sub_117AD0(_DWORD *a1)
{
  *a1 = &off_22B8FC;
  sub_1630A8(a1 + 2);
  sub_1630A8(a1 + 1);
  return a1;
}


// ======================================================================
// ADDR: 0x117b00
// SYMBOL: sub_117B00
_DWORD *__fastcall sub_117B00(_DWORD *a1)
{
  *a1 = &off_22B918;
  sub_1630A8(a1 + 1);
  return a1;
}


// ======================================================================
// ADDR: 0x117b24
// SYMBOL: sub_117B24
_DWORD *__fastcall sub_117B24(_DWORD *a1)
{
  *a1 = &off_22B930;
  sub_1630A8(a1 + 1);
  return a1;
}


// ======================================================================
// ADDR: 0x1188cc
// SYMBOL: sub_1188CC
_DWORD *__fastcall sub_1188CC(_DWORD *a1)
{
  *a1 = &off_22B978;
  sub_1630A8(a1 + 2);
  sub_1630A8(a1 + 1);
  return a1;
}


// ======================================================================
// ADDR: 0x1188fc
// SYMBOL: sub_1188FC
_DWORD *__fastcall sub_1188FC(_DWORD *a1)
{
  *a1 = &off_22B994;
  sub_1630A8(a1 + 1);
  return a1;
}


// ======================================================================
// ADDR: 0x118920
// SYMBOL: sub_118920
_DWORD *__fastcall sub_118920(_DWORD *a1)
{
  *a1 = &off_22B9AC;
  sub_1630A8(a1 + 1);
  return a1;
}


// ======================================================================
// ADDR: 0x11bf74
// SYMBOL: sub_11BF74
void __fastcall sub_11BF74(int a1, _DWORD *a2)
{
  const std::nothrow_t *v4; // r1

  if ( a2 )
  {
    sub_11BF74(a1, *a2);
    sub_11BF74(a1, a2[1]);
    operator delete(a2, v4);
  }
}


// ======================================================================
// ADDR: 0x126b86
// SYMBOL: sub_126B86
int __fastcall sub_126B86(int a1)
{
  sub_127108();
  return a1;
}


// ======================================================================
// ADDR: 0x12860e
// SYMBOL: sub_12860E
void **__fastcall sub_12860E(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  *a1 = 0;
  if ( v2 )
    operator delete[](v2);
  return a1;
}


// ======================================================================
// ADDR: 0x128624
// SYMBOL: sub_128624
void **__fastcall sub_128624(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  *a1 = 0;
  if ( v2 )
    operator delete[](v2);
  return a1;
}


// ======================================================================
// ADDR: 0x12863a
// SYMBOL: sub_12863A
void **__fastcall sub_12863A(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  *a1 = 0;
  if ( v2 )
    operator delete[](v2);
  return a1;
}


// ======================================================================
// ADDR: 0x12a6b4
// SYMBOL: sub_12A6B4
int __fastcall sub_12A6B4(char *a1, _DWORD *a2)
{
  size_t v4; // r0

  v4 = strlen(a1);
  return sub_112034(3, a1, v4, a2);
}


// ======================================================================
// ADDR: 0x12a6d0
// SYMBOL: sub_12A6D0
int __fastcall sub_12A6D0(char *a1, _DWORD *a2)
{
  size_t v4; // r0

  v4 = strlen(a1);
  return sub_112034(3, a1, v4, a2);
}


// ======================================================================
// ADDR: 0x12a6ec
// SYMBOL: sub_12A6EC
int __fastcall sub_12A6EC(char *a1, _DWORD *a2)
{
  size_t v4; // r0

  v4 = strlen(a1);
  return sub_112034(3, a1, v4, a2);
}


// ======================================================================
// ADDR: 0x12a708
// SYMBOL: sub_12A708
int __fastcall sub_12A708(char *a1, _DWORD *a2)
{
  size_t v4; // r0

  v4 = strlen(a1);
  return sub_112034(3, a1, v4, a2);
}


// ======================================================================
// ADDR: 0x12a724
// SYMBOL: sub_12A724
int __fastcall sub_12A724(char *a1, _DWORD *a2)
{
  size_t v4; // r0

  v4 = strlen(a1);
  return sub_112034(3, a1, v4, a2);
}


// ======================================================================
// ADDR: 0x12a740
// SYMBOL: sub_12A740
int __fastcall sub_12A740(char *a1, _DWORD *a2)
{
  size_t v4; // r0

  v4 = strlen(a1);
  return sub_112034(3, a1, v4, a2);
}


// ======================================================================
// ADDR: 0x12aa54
// SYMBOL: sub_12AA54
int __fastcall sub_12AA54(char *a1, _DWORD *a2)
{
  size_t v4; // r0

  v4 = strlen(a1);
  return sub_112034(3, a1, v4, a2);
}


// ======================================================================
// ADDR: 0x12bce4
// SYMBOL: sub_12BCE4
_DWORD *__fastcall sub_12BCE4(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r6

  v3 = (_DWORD *)a1[18];
  v2 = (_DWORD *)a1[17];
  *a1 = &off_22D930;
  if ( v2 != v3 )
  {
    do
    {
      if ( *v2 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 44))(*v2);
      ++v2;
    }
    while ( v2 != v3 );
    v2 = (_DWORD *)a1[17];
  }
  if ( v2 )
  {
    a1[18] = v2;
    operator delete(v2);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x12d788
// SYMBOL: sub_12D788
int __fastcall sub_12D788(int a1)
{
  if ( *(unsigned __int8 *)(a1 + 28) << 31 )
    operator delete(*(void **)(a1 + 36));
  if ( *(unsigned __int8 *)(a1 + 16) << 31 )
    operator delete(*(void **)(a1 + 24));
  if ( *(unsigned __int8 *)(a1 + 4) << 31 )
    operator delete(*(void **)(a1 + 12));
  return a1;
}


// ======================================================================
// ADDR: 0x12e1ea
// SYMBOL: sub_12E1EA
int __fastcall sub_12E1EA(int a1)
{
  std::__shared_weak_count *v1; // r5
  unsigned int *v3; // r0
  unsigned int v4; // r1

  v1 = *(std::__shared_weak_count **)(a1 + 4);
  if ( v1 )
  {
    v3 = (unsigned int *)((char *)v1 + 4);
    __dmb(0xBu);
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 - 1, v3) );
    __dmb(0xBu);
    if ( !v4 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v1 + 8))(v1);
      std::__shared_weak_count::__release_weak(v1);
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x1331ec
// SYMBOL: sub_1331EC
_DWORD *__fastcall sub_1331EC(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1

  v2 = (_DWORD *)a1[26];
  *a1 = &off_22EEF4;
  if ( a1 + 22 == v2 )
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
  return sub_12BCE4(a1);
}


// ======================================================================
// ADDR: 0x137358
// SYMBOL: sub_137358
_UNKNOWN **__fastcall sub_137358(int a1, _DWORD *a2)
{
  _UNKNOWN **result; // r0

  result = &off_22EAAC;
  *a2 = &off_22EAAC;
  return result;
}


// ======================================================================
// ADDR: 0x137b76
// SYMBOL: sub_137B76
int __fastcall sub_137B76(int a1)
{
  if ( *(unsigned __int8 *)(a1 + 16) << 31 )
    operator delete(*(void **)(a1 + 24));
  if ( *(unsigned __int8 *)(a1 + 4) << 31 )
    operator delete(*(void **)(a1 + 12));
  return a1;
}


// ======================================================================
// ADDR: 0x138a84
// SYMBOL: sub_138A84
int __fastcall sub_138A84(int a1)
{
  void **i; // r5
  void **v3; // r6
  void *v4; // t1

  sub_138AB2();
  v3 = *(void ***)(a1 + 8);
  for ( i = *(void ***)(a1 + 4); i != v3; ++i )
  {
    v4 = *i;
    operator delete(v4);
  }
  return sub_138B72(a1);
}


// ======================================================================
// ADDR: 0x138d34
// SYMBOL: sub_138D34
void __fastcall sub_138D34(int a1, int a2)
{
  if ( *(_BYTE *)(a1 + 4) )
  {
    if ( *(unsigned __int8 *)(a2 + 16) << 31 )
      operator delete(*(void **)(a2 + 24));
  }
  else if ( !a2 )
  {
    return;
  }
  operator delete((void *)a2, (const std::nothrow_t *)a2);
}


// ======================================================================
// ADDR: 0x13ae4c
// SYMBOL: sub_13AE4C
void **__fastcall sub_13AE4C(void **a1)
{
  void *v2; // r0

  sub_13AE68();
  v2 = *a1;
  *a1 = 0;
  if ( v2 )
    operator delete(v2);
  return a1;
}


// ======================================================================
// ADDR: 0x13c4ce
// SYMBOL: sub_13C4CE
int __fastcall sub_13C4CE(int a1)
{
  __int64 v2; // kr00_8

  v2 = *(_QWORD *)(a1 + 4);
  if ( HIDWORD(v2) != (_DWORD)v2 )
    *(_DWORD *)(a1 + 8) = HIDWORD(v2) + 8 * ~((unsigned int)(HIDWORD(v2) - v2 - 8) >> 3);
  if ( *(_DWORD *)a1 )
    operator delete(*(void **)a1);
  return a1;
}


// ======================================================================
// ADDR: 0x13ce0a
// SYMBOL: sub_13CE0A
int __fastcall sub_13CE0A(int a1)
{
  __int64 v2; // kr00_8

  v2 = *(_QWORD *)(a1 + 4);
  if ( HIDWORD(v2) != (_DWORD)v2 )
    *(_DWORD *)(a1 + 8) = HIDWORD(v2) + 8 * ~((unsigned int)(HIDWORD(v2) - v2 - 8) >> 3);
  if ( *(_DWORD *)a1 )
    operator delete(*(void **)a1);
  return a1;
}


// ======================================================================
// ADDR: 0x13e220
// SYMBOL: sub_13E220
_DWORD *__fastcall sub_13E220(int a1, _DWORD *a2)
{
  _DWORD *v2; // r10
  _DWORD *v3; // r4
  _DWORD *v4; // r9
  int v5; // r6
  _DWORD *v6; // r8
  int v7; // r3
  int v8; // r4
  int v9; // r5
  int v10; // r3
  int v11; // r4
  int v12; // r5
  int v13; // r6
  int v14; // r3
  int v15; // r4
  int v16; // r5
  int v17; // r6
  int v18; // r1
  _DWORD *v19; // r0

  v2 = *(_DWORD **)(a1 + 4);
  v3 = a2 + 15;
  v4 = a2;
  v5 = a1;
  if ( a2 + 15 == v2 )
  {
    v6 = a2;
    do
    {
LABEL_6:
      sub_13E4F0(v3 - 1, 0);
      v3 -= 15;
    }
    while ( v3 != v6 );
    goto LABEL_7;
  }
  do
  {
    v6 = v4 + 15;
    v7 = v4[16];
    v8 = v4[17];
    v9 = v4[18];
    *v4 = v4[15];
    v4[1] = v7;
    v4[2] = v8;
    v4[3] = v9;
    v10 = v4[20];
    v11 = v4[21];
    v12 = v4[22];
    v13 = v4[23];
    v4[4] = v4[19];
    v4[5] = v10;
    v4[6] = v11;
    v4[7] = v12;
    v4[8] = v13;
    v14 = v4[25];
    v15 = v4[26];
    v16 = v4[27];
    v17 = v4[28];
    v4[9] = v4[24];
    v4[10] = v14;
    v4[11] = v15;
    v4[12] = v16;
    v4[13] = v17;
    v18 = v4[29];
    v4[29] = 0;
    sub_13E4F0(v4 + 14, v18);
    v19 = v4 + 30;
    v4 += 15;
  }
  while ( v19 != v2 );
  v5 = a1;
  v4 = a2;
  v3 = *(_DWORD **)(a1 + 4);
  if ( v6 != v3 )
    goto LABEL_6;
LABEL_7:
  *(_DWORD *)(v5 + 4) = v6;
  return v4;
}


// ======================================================================
// ADDR: 0x13e4f0
// SYMBOL: sub_13E4F0
void __fastcall sub_13E4F0(int *a1, int a2)
{
  int v3; // r0
  __int64 v4; // r0

  v3 = *a1;
  *a1 = a2;
  if ( v3 )
  {
    v4 = sub_163020();
    operator delete((void *)v4, (const std::nothrow_t *)HIDWORD(v4));
  }
}


// ======================================================================
// ADDR: 0x14131c
// SYMBOL: sub_14131C
int sub_14131C()
{
  _BYTE v1[292]; // [sp+1Ch] [bp-124h] BYREF

  sub_17D4A8(v1);
  (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(dword_23DEF4 + 528) + 108))(
    *(_DWORD *)(dword_23DEF4 + 528),
    &unk_23C748,
    v1,
    1,
    8,
    0,
    0,
    -1,
    0xFFFF,
    0xFFFF,
    0);
  return sub_17D542(v1);
}


// ======================================================================
// ADDR: 0x1441e8
// SYMBOL: sub_1441E8
int __fastcall sub_1441E8(char *a1, _DWORD *a2)
{
  size_t v4; // r0

  v4 = strlen(a1);
  return sub_112034(2, a1, v4, a2);
}


// ======================================================================
// ADDR: 0x150f66
// SYMBOL: sub_150F66
int __fastcall sub_150F66(int a1)
{
  std::__shared_weak_count *v1; // r5
  unsigned int *v3; // r0
  unsigned int v4; // r1

  v1 = *(std::__shared_weak_count **)(a1 + 4);
  if ( v1 )
  {
    v3 = (unsigned int *)((char *)v1 + 4);
    __dmb(0xBu);
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 - 1, v3) );
    __dmb(0xBu);
    if ( !v4 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v1 + 8))(v1);
      std::__shared_weak_count::__release_weak(v1);
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x15143c
// SYMBOL: sub_15143C
void __fastcall sub_15143C(int a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  int v3; // r0

  v2 = a2;
  if ( *(_BYTE *)(a1 + 4) )
  {
    v3 = a2[3];
    a2 = 0;
    v2[3] = 0;
    if ( v3 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  }
  else if ( !a2 )
  {
    return;
  }
  operator delete(v2, (const std::nothrow_t *)a2);
}


// ======================================================================
// ADDR: 0x151e72
// SYMBOL: sub_151E72
int __fastcall sub_151E72(int a1)
{
  std::__shared_weak_count *v1; // r5
  unsigned int *v3; // r0
  unsigned int v4; // r1

  v1 = *(std::__shared_weak_count **)(a1 + 4);
  if ( v1 )
  {
    v3 = (unsigned int *)((char *)v1 + 4);
    __dmb(0xBu);
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 - 1, v3) );
    __dmb(0xBu);
    if ( !v4 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v1 + 8))(v1);
      std::__shared_weak_count::__release_weak(v1);
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x152004
// SYMBOL: sub_152004
int __fastcall sub_152004(int a1, _DWORD *a2, _DWORD *a3)
{
  char v4[2055]; // [sp+9h] [bp-807h] BYREF

  sub_1523D6(v4, a2, a1, *a2, *a3);
  return sub_159B70(3, v4);
}


// ======================================================================
// ADDR: 0x152e90
// SYMBOL: sub_152E90
int __fastcall sub_152E90(int a1, unsigned __int16 *a2, _DWORD *a3, unsigned __int16 *a4, _DWORD *a5)
{
  char v6[2055]; // [sp+11h] [bp-807h] BYREF

  sub_1544A0(v6, *a2, a1, *a2, *a3, *a4, *a5);
  return sub_159B70(3, v6);
}


// ======================================================================
// ADDR: 0x152ec6
// SYMBOL: sub_152EC6
int __fastcall sub_152EC6(int a1)
{
  void *v2; // r0

  sub_152EE2(a1, *(void **)(a1 + 8));
  v2 = *(void **)a1;
  *(_DWORD *)a1 = 0;
  if ( v2 )
    operator delete(v2);
  return a1;
}


// ======================================================================
// ADDR: 0x152f10
// SYMBOL: sub_152F10
void **__fastcall sub_152F10(void **a1)
{
  void *v2; // r0

  sub_152F2C();
  v2 = *a1;
  *a1 = 0;
  if ( v2 )
    operator delete(v2);
  return a1;
}


// ======================================================================
// ADDR: 0x1530be
// SYMBOL: sub_1530BE
void __fastcall sub_1530BE(int a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  int v3; // r0

  v2 = a2;
  if ( *(_BYTE *)(a1 + 4) )
  {
    v3 = a2[3];
    a2 = 0;
    v2[3] = 0;
    if ( v3 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  }
  else if ( !a2 )
  {
    return;
  }
  operator delete(v2, (const std::nothrow_t *)a2);
}


// ======================================================================
// ADDR: 0x153314
// SYMBOL: sub_153314
void __fastcall sub_153314(int a1, char *a2)
{
  if ( *(_BYTE *)(a1 + 4) )
    sub_153336(a2 + 12, 0);
  if ( a2 )
    operator delete(a2, (const std::nothrow_t *)a2);
}


// ======================================================================
// ADDR: 0x154466
// SYMBOL: sub_154466
int __fastcall sub_154466(int a1)
{
  __int64 v2; // kr00_8

  v2 = *(_QWORD *)(a1 + 4);
  if ( HIDWORD(v2) != (_DWORD)v2 )
    *(_DWORD *)(a1 + 8) = HIDWORD(v2) + 516 * ~((HIDWORD(v2) - (int)v2 - 516) / 0x204u);
  if ( *(_DWORD *)a1 )
    operator delete(*(void **)a1);
  return a1;
}


// ======================================================================
// ADDR: 0x154890
// SYMBOL: sub_154890
int __fastcall sub_154890(int a1)
{
  sub_156178(a1, *(_DWORD *)(a1 + 4));
  return a1;
}


// ======================================================================
// ADDR: 0x1548a0
// SYMBOL: sub_1548A0
void **__fastcall sub_1548A0(void **a1)
{
  void *v1; // r1

  v1 = *a1;
  *a1 = 0;
  if ( v1 )
    sub_15611C((int)a1, v1);
  return a1;
}


// ======================================================================
// ADDR: 0x1548b8
// SYMBOL: sub_1548B8
int *__fastcall sub_1548B8(int *a1)
{
  int v1; // r1

  v1 = *a1;
  *a1 = 0;
  if ( v1 )
    sub_1561D2(a1);
  return a1;
}


// ======================================================================
// ADDR: 0x1548d0
// SYMBOL: sub_1548D0
int __fastcall sub_1548D0(int a1)
{
  std::__shared_weak_count *v2; // r0

  v2 = *(std::__shared_weak_count **)(a1 + 4);
  if ( v2 )
    std::__shared_weak_count::__release_weak(v2);
  return a1;
}


// ======================================================================
// ADDR: 0x15527c
// SYMBOL: sub_15527C
int __fastcall sub_15527C(int a1, _DWORD *a2)
{
  char v3[2055]; // [sp+1h] [bp-807h] BYREF

  sub_1561A8(v3, a2, a1, *a2);
  return sub_159B70(3, v3);
}


// ======================================================================
// ADDR: 0x155600
// SYMBOL: sub_155600
int __fastcall sub_155600(int a1, _DWORD *a2)
{
  char v3[2055]; // [sp+1h] [bp-807h] BYREF

  sub_1561A8(v3, a2, a1, *a2);
  return sub_159B70(3, v3);
}


// ======================================================================
// ADDR: 0x1563dc
// SYMBOL: sub_1563DC
int __fastcall sub_1563DC(int a1)
{
  std::__shared_weak_count *v1; // r5
  unsigned int *v3; // r0
  unsigned int v4; // r1

  v1 = *(std::__shared_weak_count **)(a1 + 4);
  if ( v1 )
  {
    v3 = (unsigned int *)((char *)v1 + 4);
    __dmb(0xBu);
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 - 1, v3) );
    __dmb(0xBu);
    if ( !v4 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v1 + 8))(v1);
      std::__shared_weak_count::__release_weak(v1);
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x158fe0
// SYMBOL: sub_158FE0
_DWORD **__fastcall sub_158FE0(_DWORD **a1)
{
  sub_158FC0(a1, 0);
  return a1;
}


// ======================================================================
// ADDR: 0x158ff0
// SYMBOL: sub_158FF0
_DWORD *__fastcall sub_158FF0(_DWORD *a1)
{
  *a1 = &off_22F770;
  sub_15BC16(a1 + 6);
  return a1;
}


// ======================================================================
// ADDR: 0x15968c
// SYMBOL: sub_15968C
int __fastcall sub_15968C(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  void *v4; // r0

  v2 = *(_DWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = *(void **)a1;
  *(_DWORD *)a1 = 0;
  if ( v4 )
    operator delete(v4);
  return a1;
}


// ======================================================================
// ADDR: 0x15b22a
// SYMBOL: sub_15B22A
int __fastcall sub_15B22A(const char *a1, _DWORD *a2)
{
  char v3[2055]; // [sp+1h] [bp-807h] BYREF

  sub_15B2DC(v3, a2, a1, *a2);
  return sub_159B70(3, v3);
}


// ======================================================================
// ADDR: 0x15b774
// SYMBOL: sub_15B774
int __fastcall sub_15B774(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  void *v4; // r0

  v2 = *(_DWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = *(void **)a1;
  *(_DWORD *)a1 = 0;
  if ( v4 )
    operator delete(v4);
  return a1;
}


// ======================================================================
// ADDR: 0x15beb8
// SYMBOL: sub_15BEB8
// attributes: thunk
int __fastcall sub_15BEB8(int a1)
{
  return sub_15C902(a1);
}


// ======================================================================
// ADDR: 0x15bebc
// SYMBOL: sub_15BEBC
// attributes: thunk
int __fastcall sub_15BEBC(int a1)
{
  return sub_15C8C6(a1);
}


// ======================================================================
// ADDR: 0x15bec0
// SYMBOL: sub_15BEC0
// attributes: thunk
int __fastcall sub_15BEC0(int a1)
{
  return sub_15C8A0(a1);
}


// ======================================================================
// ADDR: 0x15d2d8
// SYMBOL: sub_15D2D8
void __fastcall sub_15D2D8(int a1, int a2)
{
  if ( *(_BYTE *)(a1 + 4) )
  {
    if ( *(unsigned __int8 *)(a2 + 12) << 31 )
      operator delete(*(void **)(a2 + 20));
  }
  else if ( !a2 )
  {
    return;
  }
  operator delete((void *)a2, (const std::nothrow_t *)a2);
}


// ======================================================================
// ADDR: 0x15f264
// SYMBOL: sub_15F264
void __fastcall sub_15F264(int a1, int *a2)
{
  if ( *(_BYTE *)(a1 + 4) )
    sub_F629E(a2 + 3, 0);
  if ( a2 )
    operator delete(a2, (const std::nothrow_t *)a2);
}


// ======================================================================
// ADDR: 0x15ff10
// SYMBOL: sub_15FF10
// attributes: thunk
int sub_15FF10()
{
  return sub_1606B0();
}


// ======================================================================
// ADDR: 0x160568
// SYMBOL: sub_160568
int __fastcall sub_160568(int a1)
{
  std::__shared_weak_count *v1; // r5
  unsigned int *v3; // r0
  unsigned int v4; // r1

  v1 = *(std::__shared_weak_count **)(a1 + 4);
  if ( v1 )
  {
    v3 = (unsigned int *)((char *)v1 + 4);
    __dmb(0xBu);
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 - 1, v3) );
    __dmb(0xBu);
    if ( !v4 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v1 + 8))(v1);
      std::__shared_weak_count::__release_weak(v1);
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x1606b0
// SYMBOL: sub_1606B0
void **__fastcall sub_1606B0(void **a1)
{
  if ( *a1 )
  {
    sub_1606CA(a1);
    operator delete(*a1);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x161352
// SYMBOL: sub_161352
int __fastcall sub_161352(const char *a1, int a2, int a3)
{
  size_t v6; // r0

  v6 = strlen(a1);
  return sub_1617C8(2, a1, v6, a2, a3);
}


// ======================================================================
// ADDR: 0x16137c
// SYMBOL: sub_16137C
unsigned int *__fastcall sub_16137C(unsigned int *result)
{
  unsigned int *v1; // r4
  unsigned int v2; // r1

  v1 = (unsigned int *)result[1];
  *result = 0;
  result[1] = 0;
  if ( v1 )
  {
    result = v1 + 1;
    __dmb(0xBu);
    do
      v2 = __ldrex(result);
    while ( __strex(v2 - 1, result) );
    __dmb(0xBu);
    if ( !v2 )
    {
      (*(void (__fastcall **)(unsigned int *))(*v1 + 8))(v1);
      return (unsigned int *)sub_2242E0(v1);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x161aae
// SYMBOL: sub_161AAE
int __fastcall sub_161AAE(const char *a1, int a2, int a3)
{
  size_t v6; // r0

  v6 = strlen(a1);
  return sub_161ED8(2, a1, v6, a2, a3);
}


// ======================================================================
// ADDR: 0x161ad8
// SYMBOL: sub_161AD8
unsigned int *__fastcall sub_161AD8(unsigned int *result)
{
  unsigned int *v1; // r4
  unsigned int v2; // r1

  v1 = (unsigned int *)result[1];
  *result = 0;
  result[1] = 0;
  if ( v1 )
  {
    result = v1 + 1;
    __dmb(0xBu);
    do
      v2 = __ldrex(result);
    while ( __strex(v2 - 1, result) );
    __dmb(0xBu);
    if ( !v2 )
    {
      (*(void (__fastcall **)(unsigned int *))(*v1 + 8))(v1);
      return (unsigned int *)sub_2242E0(v1);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x16245a
// SYMBOL: sub_16245A
int __fastcall sub_16245A(const char *a1, int a2, int a3)
{
  size_t v6; // r0

  v6 = strlen(a1);
  return sub_162814(2, a1, v6, a2, a3);
}


// ======================================================================
// ADDR: 0x162484
// SYMBOL: sub_162484
unsigned int *__fastcall sub_162484(unsigned int *result)
{
  unsigned int *v1; // r4
  unsigned int v2; // r1

  v1 = (unsigned int *)result[1];
  *result = 0;
  result[1] = 0;
  if ( v1 )
  {
    result = v1 + 1;
    __dmb(0xBu);
    do
      v2 = __ldrex(result);
    while ( __strex(v2 - 1, result) );
    __dmb(0xBu);
    if ( !v2 )
    {
      (*(void (__fastcall **)(unsigned int *))(*v1 + 8))(v1);
      return (unsigned int *)sub_2242E0(v1);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x162a62
// SYMBOL: sub_162A62
unsigned int *__fastcall sub_162A62(unsigned int *result)
{
  unsigned int *v1; // r4
  unsigned int v2; // r1

  v1 = (unsigned int *)result[1];
  *result = 0;
  result[1] = 0;
  if ( v1 )
  {
    result = v1 + 1;
    __dmb(0xBu);
    do
      v2 = __ldrex(result);
    while ( __strex(v2 - 1, result) );
    __dmb(0xBu);
    if ( !v2 )
    {
      (*(void (__fastcall **)(unsigned int *))(*v1 + 8))(v1);
      return (unsigned int *)sub_2242E0(v1);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1630a8
// SYMBOL: sub_1630A8
// attributes: thunk
int __fastcall sub_1630A8(int a1)
{
  return sub_1630AC(a1);
}


// ======================================================================
// ADDR: 0x1642c2
// SYMBOL: sub_1642C2
int __fastcall sub_1642C2(unsigned int a1, unsigned int a2, char a3)
{
  sub_164250(a1, (unsigned __int16)a2, a3, 0);
  return sub_164250(a1 + 4, HIWORD(a2), a3, 1);
}


// ======================================================================
// ADDR: 0x1652c8
// SYMBOL: sub_1652C8
int __fastcall sub_1652C8(int a1)
{
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0();
  }
  return a1;
}


// ======================================================================
// ADDR: 0x166b20
// SYMBOL: sub_166B20
_DWORD *__fastcall sub_166B20(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0

  sub_1728D8();
  v2 = a1[29];
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  v3 = a1[24];
  if ( v3 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v3, dword_381B60);
  }
  v4 = a1[21];
  if ( v4 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v4, dword_381B60);
  }
  v5 = a1[18];
  if ( v5 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v5, dword_381B60);
  }
  v6 = a1[8];
  if ( v6 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v6, dword_381B60);
  }
  v7 = a1[5];
  if ( v7 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v7, dword_381B60);
  }
  v8 = a1[2];
  if ( v8 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v8, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x166c60
// SYMBOL: sub_166C60
int __fastcall sub_166C60(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x166ca0
// SYMBOL: sub_166CA0
int __fastcall sub_166CA0(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x166ce0
// SYMBOL: sub_166CE0
int __fastcall sub_166CE0(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x166d20
// SYMBOL: sub_166D20
_DWORD *__fastcall sub_166D20(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0

  v2 = a1[55];
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  v3 = a1[52];
  if ( v3 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v3, dword_381B60);
  }
  v4 = a1[49];
  if ( v4 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v4, dword_381B60);
  }
  v5 = a1[46];
  if ( v5 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v5, dword_381B60);
  }
  v6 = a1[35];
  if ( v6 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v6, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x170fd0
// SYMBOL: sub_170FD0
int __fastcall sub_170FD0(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x171010
// SYMBOL: sub_171010
int __fastcall sub_171010(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x171050
// SYMBOL: sub_171050
int __fastcall sub_171050(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x171090
// SYMBOL: sub_171090
int __fastcall sub_171090(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x1710d0
// SYMBOL: sub_1710D0
int __fastcall sub_1710D0(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x171110
// SYMBOL: sub_171110
int __fastcall sub_171110(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x171150
// SYMBOL: sub_171150
int __fastcall sub_171150(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x1711a0
// SYMBOL: sub_1711A0
int __fastcall sub_1711A0(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x1711e0
// SYMBOL: sub_1711E0
int __fastcall sub_1711E0(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x171220
// SYMBOL: sub_171220
int __fastcall sub_171220(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x171260
// SYMBOL: sub_171260
int __fastcall sub_171260(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x1712a0
// SYMBOL: sub_1712A0
_DWORD *__fastcall sub_1712A0(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0

  v2 = a1[11];
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  v3 = a1[8];
  if ( v3 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v3, dword_381B60);
  }
  v4 = a1[5];
  if ( v4 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v4, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x171338
// SYMBOL: sub_171338
int __fastcall sub_171338(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x171378
// SYMBOL: sub_171378
int __fastcall sub_171378(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x1713b8
// SYMBOL: sub_1713B8
int __fastcall sub_1713B8(int a1)
{
  int v2; // r0
  int v3; // r0

  sub_17165C();
  v2 = *(_DWORD *)(a1 + 20);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v3, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x171440
// SYMBOL: sub_171440
int __fastcall sub_171440(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x171480
// SYMBOL: sub_171480
int __fastcall sub_171480(int a1)
{
  int i; // r5
  int v3; // r0

  for ( i = 20; i != -4; i -= 12 )
  {
    v3 = *(_DWORD *)(a1 + i);
    if ( v3 )
    {
      if ( dword_381B58 )
        --*(_DWORD *)(dword_381B58 + 880);
      off_2390B0(v3, dword_381B60);
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x1714d8
// SYMBOL: sub_1714D8
int __fastcall sub_1714D8(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x171518
// SYMBOL: sub_171518
int __fastcall sub_171518(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x171558
// SYMBOL: sub_171558
int __fastcall sub_171558(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x171598
// SYMBOL: sub_171598
int __fastcall sub_171598(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x1715d8
// SYMBOL: sub_1715D8
int __fastcall sub_1715D8(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 5384);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x17161c
// SYMBOL: sub_17161C
int __fastcall sub_17161C(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v2, dword_381B60);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x1785b4
// SYMBOL: sub_1785B4
int __fastcall sub_1785B4(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
    sub_165578(v2);
  return a1;
}


// ======================================================================
// ADDR: 0x1785ca
// SYMBOL: sub_1785CA
int __fastcall sub_1785CA(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
    sub_165578(v2);
  return a1;
}


// ======================================================================
// ADDR: 0x178862
// SYMBOL: sub_178862
int __fastcall sub_178862(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
    sub_165578(v2);
  return a1;
}


// ======================================================================
// ADDR: 0x178878
// SYMBOL: sub_178878
int __fastcall sub_178878(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
    sub_165578(v2);
  return a1;
}


// ======================================================================
// ADDR: 0x17888e
// SYMBOL: sub_17888E
_DWORD *__fastcall sub_17888E(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0

  sub_1785E0((int)a1);
  v2 = a1[10];
  if ( v2 )
    sub_165578(v2);
  v3 = a1[7];
  if ( v3 )
    sub_165578(v3);
  v4 = a1[2];
  if ( v4 )
    sub_165578(v4);
  return a1;
}


// ======================================================================
// ADDR: 0x17e4f4
// SYMBOL: sub_17E4F4
int __fastcall sub_17E4F4(int a1)
{
  sub_17E50E();
  if ( *(_DWORD *)(a1 + 12) && *(_DWORD *)a1 )
    operator delete[](*(void **)a1);
  return a1;
}


// ======================================================================
// ADDR: 0x17f662
// SYMBOL: sub_17F662
int __fastcall sub_17F662(int a1)
{
  return *(unsigned __int16 *)(a1 + 12148);
}


// ======================================================================
// ADDR: 0x17fa34
// SYMBOL: sub_17FA34
_DWORD *__fastcall sub_17FA34(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0

  *a1 = &off_22FEC4;
  sub_181656(a1);
  v2 = (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD))(*a1 + 40))(a1, 0, 0);
  v3 = sub_18CE94(v2);
  sub_18D35C(v3);
  if ( a1[627] )
  {
    v4 = (void *)a1[624];
    if ( v4 )
      operator delete[](v4);
  }
  sub_17F990((int)(a1 + 618));
  sub_1848C6(a1 + 517);
  sub_17E5E4((int)(a1 + 501));
  sub_17F9BC((int)(a1 + 495));
  sub_17F9E8((int)(a1 + 227));
  if ( a1[226] )
  {
    v5 = (void *)a1[224];
    if ( v5 )
      operator delete[](v5);
  }
  if ( a1[223] )
  {
    v6 = (void *)a1[221];
    if ( v6 )
      operator delete[](v6);
  }
  sub_18CB64(a1 + 220);
  sub_18CB64(a1 + 219);
  sub_18CB64(a1 + 212);
  sub_17FA18((int)(a1 + 209));
  sub_17D542((int)(a1 + 72));
  sub_17D542((int)(a1 + 3));
  return a1;
}


// ======================================================================
// ADDR: 0x17fdf0
// SYMBOL: sub_17FDF0
int __fastcall sub_17FDF0(int a1)
{
  sub_17E5E4(a1 + 2096);
  sub_17D542(a1 + 1796);
  sub_187574(a1 + 24);
  return a1;
}


// ======================================================================
// ADDR: 0x180bb4
// SYMBOL: sub_180BB4
int __fastcall sub_180BB4(char *a1, _DWORD *a2)
{
  size_t v4; // r0

  v4 = strlen(a1);
  return sub_112034(3, a1, v4, a2);
}


// ======================================================================
// ADDR: 0x182f46
// SYMBOL: sub_182F46
int __fastcall sub_182F46(char *a1, _DWORD *a2)
{
  size_t v4; // r0

  v4 = strlen(a1);
  return sub_112034(3, a1, v4, a2);
}


// ======================================================================
// ADDR: 0x187380
// SYMBOL: sub_187380
int __fastcall sub_187380(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 12) )
  {
    v2 = *(void **)a1;
    if ( *(_DWORD *)a1 )
      operator delete[](v2);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x1874fe
// SYMBOL: sub_1874FE
int __fastcall sub_1874FE(int a1)
{
  sub_18A274(a1, 0);
  if ( *(_DWORD *)(a1 + 8) && *(_DWORD *)a1 )
    operator delete[](*(void **)a1);
  return a1;
}


// ======================================================================
// ADDR: 0x18751a
// SYMBOL: sub_18751A
int __fastcall sub_18751A(int a1)
{
  if ( *(_DWORD *)(a1 + 16) )
  {
    sub_18A30C(a1);
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 20) = 0;
  }
  return sub_18A1B0(a1);
}


// ======================================================================
// ADDR: 0x187548
// SYMBOL: sub_187548
int __fastcall sub_187548(int a1)
{
  sub_18A188(a1, 0);
  return sub_18A16A(a1);
}


// ======================================================================
// ADDR: 0x18755e
// SYMBOL: sub_18755E
int __fastcall sub_18755E(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 8) )
  {
    v2 = *(void **)a1;
    if ( *(_DWORD *)a1 )
      operator delete[](v2);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x187574
// SYMBOL: sub_187574
int __fastcall sub_187574(int a1)
{
  void *v2; // r0
  void *v3; // r0
  int i; // r5
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0

  sub_187734();
  sub_17E4F4(a1 + 1696);
  if ( *(_DWORD *)(a1 + 1676) )
  {
    v2 = *(void **)(a1 + 1668);
    if ( v2 )
      operator delete[](v2);
  }
  nullsub_46();
  if ( *(_DWORD *)(a1 + 956) )
  {
    v3 = *(void **)(a1 + 944);
    if ( v3 )
      operator delete[](v3);
  }
  sub_17D542(a1 + 192);
  sub_1874FE(a1 + 168);
  for ( i = 0; i != -64; i -= 16 )
  {
    if ( *(_DWORD *)(a1 + i + 164) )
    {
      v5 = *(void **)(a1 + i + 152);
      if ( v5 )
        operator delete[](v5);
    }
  }
  if ( *(_DWORD *)(a1 + 100) )
  {
    v6 = *(void **)(a1 + 88);
    if ( v6 )
      operator delete[](v6);
  }
  sub_18751A(a1 + 64);
  sub_18A188(a1 + 28, 0);
  sub_18A16A(a1 + 28);
  if ( *(_DWORD *)(a1 + 24) )
  {
    v7 = *(void **)(a1 + 12);
    if ( v7 )
      operator delete[](v7);
  }
  if ( *(_DWORD *)(a1 + 8) && *(_DWORD *)a1 )
    operator delete[](*(void **)a1);
  return a1;
}


// ======================================================================
// ADDR: 0x18a16a
// SYMBOL: sub_18A16A
_DWORD *__fastcall sub_18A16A(_DWORD *a1)
{
  sub_18A188(a1, 0);
  if ( a1[2] && *a1 )
    operator delete[]((void *)(*a1 - 8));
  return a1;
}


// ======================================================================
// ADDR: 0x18a188
// SYMBOL: sub_18A188
unsigned int __fastcall sub_18A188(_DWORD *a1, int a2)
{
  unsigned int result; // r0

  result = a1[2];
  if ( result )
  {
    if ( result > 0x200 && !a2 )
    {
      if ( *a1 )
        operator delete[]((void *)(*a1 - 8));
      *a1 = 0;
      a1[2] = 0;
    }
    result = 0;
    a1[1] = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x18cfa2
// SYMBOL: sub_18CFA2
int __fastcall sub_18CFA2(int a1)
{
  *(_BYTE *)(a1 + 20) = 0;
  sub_18D110(a1, 0);
  return sub_18D0F4(a1);
}


// ======================================================================
// ADDR: 0x1e3da2
// SYMBOL: sub_1E3DA2
void __fastcall sub_1E3DA2(int a1, char *a2)
{
  const std::nothrow_t *v3; // r1

  v3 = (const std::nothrow_t *)*(unsigned __int8 *)(a1 + 4);
  if ( *(_BYTE *)(a1 + 4) )
    std::allocator_traits<std::allocator<std::__tree_node<std::__value_type<std::string,std::string>,void *>>>::__destroy<std::pair<std::string const,std::string>>(
      *(_DWORD *)a1,
      a2 + 16);
  if ( a2 )
    operator delete(a2, v3);
}


// ======================================================================
// ADDR: 0x1ee918
// SYMBOL: sub_1EE918
int __fastcall sub_1EE918(int a1)
{
  std::__shared_weak_count *v2; // r0

  v2 = *(std::__shared_weak_count **)(a1 + 4);
  if ( v2 )
    std::__shared_weak_count::__release_shared(v2);
  return a1;
}


// ======================================================================
// ADDR: 0x1fb070
// SYMBOL: sub_1FB070
int __fastcall sub_1FB070(std::locale *a1)
{
  return std::locale::use_facet(a1, (std::locale::id *)&std::num_get<char,std::istreambuf_iterator<char>>::id);
}


// ======================================================================
// ADDR: 0x1fb0c0
// SYMBOL: sub_1FB0C0
int __fastcall sub_1FB0C0(std::locale *a1)
{
  return std::locale::use_facet(a1, (std::locale::id *)&std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id);
}


// ======================================================================
// ADDR: 0x20e1ee
// SYMBOL: sub_20E1EE
int *__fastcall sub_20E1EE(int *a1)
{
  int v1; // r1
  int v3; // r0

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[2];
    a1[1] = v1;
    sub_20E22A(a1 + 4, v1, (v3 - v1) >> 2);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x214e50
// SYMBOL: sub_214E50
// attributes: thunk
int __fastcall sub_214E50(int a1)
{
  return sub_214F60(a1);
}


// ======================================================================
// ADDR: 0x214e54
// SYMBOL: sub_214E54
// attributes: thunk
int __fastcall sub_214E54(int a1)
{
  return sub_214F4C(a1);
}


// ======================================================================
// ADDR: 0x21da2c
// SYMBOL: sub_21DA2C
__int64 __fastcall sub_21DA2C(int a1)
{
  return *(_QWORD *)a1;
}


// ======================================================================
// ADDR: 0x21e148
// SYMBOL: sub_21E148
bool sub_21E148()
{
  return pthread_cond_broadcast((pthread_cond_t *)&unk_383F0C) != 0;
}


// ======================================================================
// ADDR: 0x21eef8
// SYMBOL: sub_21EEF8
bool __fastcall sub_21EEF8(int a1, _DWORD *lpsrc, _DWORD *a3)
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
// ADDR: 0x224328
// SYMBOL: sub_224328
void sub_224328()
{
  j___cxa_end_catch();
}


// ======================================================================
