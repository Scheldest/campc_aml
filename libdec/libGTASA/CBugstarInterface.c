
// Address: 0x18c6dc
// Original: j__ZN17CBugstarInterfaceD2Ev
// Demangled: CBugstarInterface::~CBugstarInterface()
// attributes: thunk
void __fastcall CBugstarInterface::~CBugstarInterface(CBugstarInterface *this)
{
  _ZN17CBugstarInterfaceD2Ev(this);
}


// ============================================================

// Address: 0x18d854
// Original: j__ZN17CBugstarInterface7SendMsgEjPvj
// Demangled: CBugstarInterface::SendMsg(uint,void *,uint)
// attributes: thunk
int __fastcall CBugstarInterface::SendMsg(CBugstarInterface *this, unsigned int a2, void *a3, unsigned int a4)
{
  return _ZN17CBugstarInterface7SendMsgEjPvj(this, a2, a3, a4);
}


// ============================================================

// Address: 0x3be5ac
// Original: _ZN17CBugstarInterfaceC2EP15CBugstarNetwork
// Demangled: CBugstarInterface::CBugstarInterface(CBugstarNetwork *)
_DWORD *__fastcall CBugstarInterface::CBugstarInterface(_DWORD *result, int a2)
{
  *result = &off_66796C;
  result[1] = a2;
  return result;
}


// ============================================================

// Address: 0x3be5c0
// Original: _ZN17CBugstarInterfaceD2Ev
// Demangled: CBugstarInterface::~CBugstarInterface()
void __fastcall CBugstarInterface::~CBugstarInterface(CBugstarInterface *this)
{
  ;
}


// ============================================================

// Address: 0x3be5c2
// Original: _ZN17CBugstarInterfaceD0Ev
// Demangled: CBugstarInterface::~CBugstarInterface()
void __fastcall __noreturn CBugstarInterface::~CBugstarInterface(CBugstarInterface *this)
{
  __debugbreak();
}


// ============================================================

// Address: 0x3be5c4
// Original: _ZN17CBugstarInterface7SendMsgEjPvj
// Demangled: CBugstarInterface::SendMsg(uint,void *,uint)
int __fastcall CBugstarInterface::SendMsg(CBugstarInterface *this, unsigned int a2, void *a3, unsigned int a4)
{
  int v7; // r1
  unsigned int v9; // [sp+4h] [bp-24h] BYREF
  int v10; // [sp+8h] [bp-20h] BYREF
  _DWORD v11[7]; // [sp+Ch] [bp-1Ch] BYREF

  v9 = a2;
  v7 = (*(int (__fastcall **)(_DWORD, _DWORD, char *))(**((_DWORD **)this + 1) + 8))(
         *((_DWORD *)this + 1),
         *((_DWORD *)this + 2),
         (char *)this + 154);
  *((_DWORD *)this + 3) = v7;
  if ( v7 )
  {
    v11[0] = 4;
    (*(void (__fastcall **)(_DWORD, int, _DWORD *, int))(**((_DWORD **)this + 1) + 16))(
      *((_DWORD *)this + 1),
      v7,
      v11,
      4);
    (*(void (__fastcall **)(_DWORD, _DWORD, unsigned int *, _DWORD))(**((_DWORD **)this + 1) + 16))(
      *((_DWORD *)this + 1),
      *((_DWORD *)this + 3),
      &v9,
      v11[0]);
    v10 = 0;
    (*(void (__fastcall **)(_DWORD, _DWORD, int *, int))(**((_DWORD **)this + 1) + 16))(
      *((_DWORD *)this + 1),
      *((_DWORD *)this + 3),
      &v10,
      4);
    v11[0] = a4;
    (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD *, int))(**((_DWORD **)this + 1) + 16))(
      *((_DWORD *)this + 1),
      *((_DWORD *)this + 3),
      v11,
      4);
    (*(void (__fastcall **)(_DWORD, _DWORD, void *, _DWORD))(**((_DWORD **)this + 1) + 16))(
      *((_DWORD *)this + 1),
      *((_DWORD *)this + 3),
      a3,
      v11[0]);
    v10 = 0;
    (*(void (__fastcall **)(_DWORD, _DWORD, int *, int))(**((_DWORD **)this + 1) + 16))(
      *((_DWORD *)this + 1),
      *((_DWORD *)this + 3),
      &v10,
      4);
    (*(void (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 1) + 12))(
      *((_DWORD *)this + 1),
      *((_DWORD *)this + 3));
    *((_DWORD *)this + 3) = 0;
  }
  return 0;
}


// ============================================================

// Address: 0x3be668
// Original: _ZN17CBugstarInterface8SendDataEPvj
// Demangled: CBugstarInterface::SendData(void *,uint)
int __fastcall CBugstarInterface::SendData(CBugstarInterface *this, void *a2, unsigned int a3)
{
  int v6; // [sp+0h] [bp-18h] BYREF
  unsigned int v7[5]; // [sp+4h] [bp-14h] BYREF

  v7[0] = a3;
  (*(void (__fastcall **)(_DWORD, _DWORD, unsigned int *, int))(**((_DWORD **)this + 1) + 16))(
    *((_DWORD *)this + 1),
    *((_DWORD *)this + 3),
    v7,
    4);
  (*(void (__fastcall **)(_DWORD, _DWORD, void *, unsigned int))(**((_DWORD **)this + 1) + 16))(
    *((_DWORD *)this + 1),
    *((_DWORD *)this + 3),
    a2,
    v7[0]);
  v6 = 0;
  return (*(int (__fastcall **)(_DWORD, _DWORD, int *, int))(**((_DWORD **)this + 1) + 16))(
           *((_DWORD *)this + 1),
           *((_DWORD *)this + 3),
           &v6,
           4);
}


// ============================================================

// Address: 0x3be6b0
// Original: _ZN17CBugstarInterface9CreateBugEfffPcS0_Pvj
// Demangled: CBugstarInterface::CreateBug(float,float,float,char *,char *,void *,uint)
int __fastcall CBugstarInterface::CreateBug(
        CBugstarInterface *this,
        float a2,
        float a3,
        float a4,
        char *a5,
        char *a6,
        void *a7,
        size_t a8)
{
  size_t v8; // r5
  size_t v9; // r6
  _DWORD *v10; // r4
  void *v11; // r5
  size_t v12; // r9
  int v13; // r0
  size_t v14; // r8
  _WORD *v15; // r5
  int v16; // r0
  void *v17; // r6
  size_t v18; // r10
  void *v19; // r4
  __int64 v20; // d16
  size_t v21; // r6
  size_t v22; // r11
  size_t *v23; // r8
  size_t v24; // r5
  size_t v25; // r6
  int v26; // r0
  void *v27; // r10
  void *v28; // r4
  size_t v29; // r1
  void *v30; // r9
  char *v31; // r5
  size_t v32; // r1
  size_t v33; // r6
  size_t v34; // r4
  size_t *v35; // r8
  size_t v36; // r6
  size_t v37; // r5
  int v38; // r0
  void *v39; // r11
  void *v40; // r9
  size_t v41; // r1
  void *v42; // r10
  char *v43; // r6
  size_t v44; // r1
  size_t v45; // r6
  size_t v46; // r11
  size_t *v47; // r8
  size_t v48; // r6
  size_t v49; // r5
  int v50; // r0
  void *v51; // r9
  void *v52; // r4
  size_t v53; // r1
  void *v54; // r10
  char *v55; // r6
  size_t v56; // r1
  size_t v57; // r4
  size_t v58; // r9
  size_t *v59; // r6
  size_t v60; // r11
  unsigned int v61; // r5
  int v62; // r0
  void *v63; // r8
  void *v64; // r10
  size_t v65; // r1
  void *v66; // r4
  char *v67; // r6
  size_t v68; // r1
  size_t *v69; // r8
  size_t v70; // r5
  unsigned int v71; // r4
  int v72; // r0
  void *v73; // r9
  void *v74; // r6
  size_t v75; // r1
  void *v76; // r10
  char *v77; // r6
  size_t v78; // r1
  void *v84; // [sp+10h] [bp-80h] BYREF
  unsigned int v85; // [sp+14h] [bp-7Ch]
  char v86[68]; // [sp+18h] [bp-78h] BYREF
  int v87; // [sp+5Ch] [bp-34h]

  v8 = strlen(a6);
  v9 = v8 + 8;
  v10 = (_DWORD *)operator new[](v8 + 8);
  *v10 = 0;
  v10[1] = v8;
  memcpy_1(v10 + 2, a6, v8);
  v11 = (void *)operator new[](v8 + 8);
  memcpy_1(v11, v10, v9);
  v84 = v11;
  v85 = v9;
  operator delete[](v10);
  CBug::SetPlatform((CBug *)&v84, 1u);
  v12 = 10;
  v13 = operator new[](0xAu);
  v14 = v85;
  v15 = (_WORD *)v13;
  *(_DWORD *)v13 = 10;
  *(_DWORD *)(v13 + 4) = 2;
  *(_WORD *)(v13 + 8) = 16723;
  v16 = operator new[](v14 + 10);
  v17 = (void *)v16;
  v18 = v16 + v14;
  if ( v14 > 0xFFFFFFF5 )
    v12 = 0;
  v19 = v84;
  memset((void *)(v16 + v14), 0, v12);
  memcpy_1(v17, v19, v14);
  v20 = *(_QWORD *)v15;
  *(_WORD *)(v18 + 8) = v15[4];
  *(_QWORD *)v18 = v20;
  if ( v19 )
    operator delete[](v19);
  v84 = v17;
  v85 = v14 + 10;
  operator delete[](v15);
  sub_5E6BC0(v86, (const char *)&dword_3BEB50, a2);
  CBug::BeginField((CBug *)&v84, "XCoord", "text");
  v21 = strlen(v86);
  v22 = v21 + 4;
  v23 = (size_t *)operator new[](v21 + 4);
  *v23 = v21;
  memcpy_1(v23 + 1, v86, v21);
  v24 = v85;
  v25 = v85 + v22;
  v26 = operator new[](v85 + v22);
  v27 = (void *)v26;
  v28 = (void *)(v26 + v24);
  v29 = v22;
  if ( v25 <= v24 )
    v29 = 0;
  v30 = v84;
  memset((void *)(v26 + v24), 0, v29);
  memcpy_1(v27, v30, v24);
  memcpy_1(v28, v23, v22);
  if ( v30 )
    operator delete[](v30);
  operator delete[](v23);
  v31 = (char *)operator new[](v25 + 4);
  v32 = 4;
  if ( v25 > 0xFFFFFFFB )
    v32 = 0;
  memset(&v31[v25], 0, v32);
  memcpy_1(v31, v27, v25);
  *(_DWORD *)&v31[v25] = 0;
  operator delete[](v27);
  v84 = v31;
  v85 = v25 + 4;
  sub_5E6BC0(v86, (const char *)&dword_3BEB50, a3);
  CBug::BeginField((CBug *)&v84, "YCoord", "text");
  v33 = strlen(v86);
  v34 = v33 + 4;
  v35 = (size_t *)operator new[](v33 + 4);
  *v35 = v33;
  memcpy_1(v35 + 1, v86, v33);
  v36 = v85;
  v37 = v85 + v34;
  v38 = operator new[](v85 + v34);
  v39 = (void *)v38;
  v40 = (void *)(v38 + v36);
  v41 = v34;
  if ( v37 <= v36 )
    v41 = 0;
  v42 = v84;
  memset((void *)(v38 + v36), 0, v41);
  memcpy_1(v39, v42, v36);
  memcpy_1(v40, v35, v34);
  if ( v42 )
    operator delete[](v42);
  operator delete[](v35);
  v43 = (char *)operator new[](v37 + 4);
  v44 = 4;
  if ( v37 > 0xFFFFFFFB )
    v44 = 0;
  memset(&v43[v37], 0, v44);
  memcpy_1(v43, v39, v37);
  *(_DWORD *)&v43[v37] = 0;
  operator delete[](v39);
  v84 = v43;
  v85 = v37 + 4;
  sub_5E6BC0(v86, (const char *)&dword_3BEB50, a4);
  CBug::BeginField((CBug *)&v84, "ZCoord", "text");
  v45 = strlen(v86);
  v46 = v45 + 4;
  v47 = (size_t *)operator new[](v45 + 4);
  *v47 = v45;
  memcpy_1(v47 + 1, v86, v45);
  v48 = v85;
  v49 = v85 + v46;
  v50 = operator new[](v85 + v46);
  v51 = (void *)v50;
  v52 = (void *)(v50 + v48);
  v53 = v46;
  if ( v49 <= v48 )
    v53 = 0;
  v54 = v84;
  memset((void *)(v50 + v48), 0, v53);
  memcpy_1(v51, v54, v48);
  memcpy_1(v52, v47, v46);
  if ( v54 )
    operator delete[](v54);
  operator delete[](v47);
  v55 = (char *)operator new[](v49 + 4);
  v56 = 4;
  if ( v49 > 0xFFFFFFFB )
    v56 = 0;
  memset(&v55[v49], 0, v56);
  memcpy_1(v55, v51, v49);
  *(_DWORD *)&v55[v49] = 0;
  operator delete[](v51);
  v84 = v55;
  v85 = v49 + 4;
  CBug::BeginField((CBug *)&v84, "grid", "text");
  v57 = strlen(a5);
  v58 = v57 + 4;
  v59 = (size_t *)operator new[](v57 + 4);
  *v59 = v57;
  memcpy_1(v59 + 1, a5, v57);
  v60 = v85;
  v61 = v85 + v57 + 4;
  v62 = operator new[](v61);
  v63 = (void *)v62;
  v64 = (void *)(v62 + v60);
  v65 = v57 + 4;
  if ( v61 <= v60 )
    v65 = 0;
  v66 = v84;
  memset((void *)(v62 + v60), 0, v65);
  memcpy_1(v63, v66, v60);
  memcpy_1(v64, v59, v58);
  if ( v66 )
    operator delete[](v66);
  operator delete[](v59);
  v67 = (char *)operator new[](v61 + 4);
  v68 = 4;
  if ( v61 > 0xFFFFFFFB )
    v68 = 0;
  memset(&v67[v61], 0, v68);
  memcpy_1(v67, v63, v61);
  *(_DWORD *)&v67[v61] = 0;
  operator delete[](v63);
  v84 = v67;
  v85 = v61 + 4;
  CBug::BeginField((CBug *)&v84, "ScreenShot", "image");
  v69 = (size_t *)operator new[](a8 + 4);
  *v69 = a8;
  memcpy_1(v69 + 1, a7, a8);
  v70 = v85;
  v71 = v85 + a8 + 4;
  v72 = operator new[](v71);
  v73 = (void *)v72;
  v74 = (void *)(v72 + v70);
  v75 = a8 + 4;
  if ( v71 <= v70 )
    v75 = 0;
  v76 = v84;
  memset((void *)(v72 + v70), 0, v75);
  memcpy_1(v73, v76, v70);
  memcpy_1(v74, v69, a8 + 4);
  if ( v76 )
    operator delete[](v76);
  operator delete[](v69);
  v77 = (char *)operator new[](v71 + 4);
  v78 = 4;
  if ( v71 > 0xFFFFFFFB )
    v78 = 0;
  memset(&v77[v71], 0, v78);
  memcpy_1(v77, v73, v71);
  *(_DWORD *)&v77[v71] = 0;
  operator delete[](v73);
  CBugstarInterface::SendMsg(this, 0, v77, v71 + 4);
  operator delete[](v77);
  return _stack_chk_guard - v87;
}


// ============================================================

// Address: 0x3beb94
// Original: _ZN17CBugstarInterface4InitEv
// Demangled: CBugstarInterface::Init(void)
void __fastcall CBugstarInterface::Init(CBugstarInterface *this)
{
  ;
}


// ============================================================

// Address: 0x3beb96
// Original: _ZN17CBugstarInterface4TermEv
// Demangled: CBugstarInterface::Term(void)
void __fastcall CBugstarInterface::Term(CBugstarInterface *this)
{
  ;
}


// ============================================================

// Address: 0x3beb98
// Original: _ZN17CBugstarInterface8RecvDataEPPvPj
// Demangled: CBugstarInterface::RecvData(void **,uint *)
int __fastcall CBugstarInterface::RecvData(CBugstarInterface *this, void **a2, unsigned int *a3)
{
  int result; // r0
  unsigned int v7; // r4
  unsigned int v8[7]; // [sp+4h] [bp-1Ch] BYREF

  v8[0] = 0;
  result = (*(int (__fastcall **)(_DWORD, _DWORD, unsigned int *, int))(**((_DWORD **)this + 1) + 20))(
             *((_DWORD *)this + 1),
             *((_DWORD *)this + 3),
             v8,
             4);
  v7 = v8[0];
  if ( v8[0] )
  {
    *a2 = (void *)operator new[](v8[0]);
    *a3 = v7;
    (*(void (__fastcall **)(_DWORD, _DWORD, void **, unsigned int))(**((_DWORD **)this + 1) + 20))(
      *((_DWORD *)this + 1),
      *((_DWORD *)this + 3),
      a2,
      v7);
    (*(void (__fastcall **)(_DWORD, _DWORD, unsigned int *, int))(**((_DWORD **)this + 1) + 20))(
      *((_DWORD *)this + 1),
      *((_DWORD *)this + 3),
      v8,
      4);
    result = v8[0];
    if ( v8[0] )
    {
      if ( *a2 )
        operator delete(*a2);
      result = 0;
      *a2 = 0;
      *a3 = 0;
    }
  }
  return result;
}


// ============================================================

// Address: 0x3bec0c
// Original: _ZN17CBugstarInterface18ParseParameterLineEPc
// Demangled: CBugstarInterface::ParseParameterLine(char *)
int __fastcall CBugstarInterface::ParseParameterLine(CBugstarInterface *this, char *s)
{
  int v4; // r1
  char *v5; // r0
  int v6; // r6
  int v7; // r2
  int v8; // r1
  _BYTE *v9; // r0
  char *v10; // r2
  int v11; // r1
  char *v12; // r2
  int v13; // r1
  char *v14; // r2
  int v15; // r1
  char *v16; // r2
  char v18[100]; // [sp+0h] [bp-78h] BYREF
  int v19; // [sp+64h] [bp-14h]

  puts(s);
  v4 = (unsigned __int8)*s;
  v5 = v18;
  if ( v4 == 58 )
  {
    v6 = 1;
  }
  else
  {
    v7 = 0;
    do
    {
      v18[v7] = v4;
      v4 = (unsigned __int8)s[++v7];
    }
    while ( v4 != 58 );
    v5 = &v18[v7];
    v6 = v7 + 1;
  }
  *v5 = 0;
  if ( !strcmp(v18, "target_ip") )
  {
    do
      v11 = (unsigned __int8)s[v6++];
    while ( v11 == 32 );
    v9 = (char *)this + 154;
    if ( v11 != 10 )
    {
      v12 = s;
      do
      {
        *v9++ = v11;
        v11 = (unsigned __int8)(v12++)[v6];
      }
      while ( v11 != 10 );
    }
    goto LABEL_29;
  }
  if ( !strcmp(v18, "target_name") )
  {
    do
      v13 = (unsigned __int8)s[v6++];
    while ( v13 == 32 );
    v9 = (char *)this + 90;
    if ( v13 != 10 )
    {
      v14 = s;
      do
      {
        *v9++ = v13;
        v13 = (unsigned __int8)(v14++)[v6];
      }
      while ( v13 != 10 );
    }
    goto LABEL_29;
  }
  if ( !strcmp(v18, "user_name") )
  {
    do
      v15 = (unsigned __int8)s[v6++];
    while ( v15 == 32 );
    v9 = (char *)this + 26;
    if ( v15 != 10 )
    {
      v16 = s;
      do
      {
        *v9++ = v15;
        v15 = (unsigned __int8)(v16++)[v6];
      }
      while ( v15 != 10 );
    }
    goto LABEL_29;
  }
  if ( !strcmp(v18, "method") )
  {
    do
      v8 = (unsigned __int8)s[v6++];
    while ( v8 == 32 );
    v9 = (char *)this + 16;
    if ( v8 != 10 )
    {
      v10 = s;
      do
      {
        *v9++ = v8;
        v8 = (unsigned __int8)(v10++)[v6];
      }
      while ( v8 != 10 );
    }
LABEL_29:
    *v9 = 0;
  }
  puts(s);
  return _stack_chk_guard - v19;
}


// ============================================================
