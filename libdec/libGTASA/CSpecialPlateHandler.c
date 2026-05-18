
// Address: 0x189d58
// Original: j__ZN20CSpecialPlateHandler3AddEiPc
// Demangled: CSpecialPlateHandler::Add(int,char *)
// attributes: thunk
int __fastcall CSpecialPlateHandler::Add(CSpecialPlateHandler *this, int a2, char *a3)
{
  return _ZN20CSpecialPlateHandler3AddEiPc(this, a2, a3);
}


// ============================================================

// Address: 0x18bf5c
// Original: j__ZN20CSpecialPlateHandler4FindEiPc
// Demangled: CSpecialPlateHandler::Find(int,char *)
// attributes: thunk
int __fastcall CSpecialPlateHandler::Find(CSpecialPlateHandler *this, int a2, char *a3)
{
  return _ZN20CSpecialPlateHandler4FindEiPc(this, a2, a3);
}


// ============================================================

// Address: 0x56d34c
// Original: _ZN20CSpecialPlateHandler4InitEv
// Demangled: CSpecialPlateHandler::Init(void)
int __fastcall CSpecialPlateHandler::Init(int this)
{
  *(_DWORD *)this = -1;
  *(_DWORD *)(this + 240) = 0;
  *(_BYTE *)(this + 4) = 0;
  *(_DWORD *)(this + 16) = -1;
  *(_BYTE *)(this + 20) = 0;
  *(_BYTE *)(this + 36) = 0;
  *(_DWORD *)(this + 32) = -1;
  *(_DWORD *)(this + 48) = -1;
  *(_BYTE *)(this + 52) = 0;
  *(_DWORD *)(this + 64) = -1;
  *(_BYTE *)(this + 68) = 0;
  *(_DWORD *)(this + 80) = -1;
  *(_BYTE *)(this + 84) = 0;
  *(_DWORD *)(this + 96) = -1;
  *(_BYTE *)(this + 100) = 0;
  *(_BYTE *)(this + 116) = 0;
  *(_DWORD *)(this + 112) = -1;
  *(_BYTE *)(this + 132) = 0;
  *(_DWORD *)(this + 128) = -1;
  *(_BYTE *)(this + 148) = 0;
  *(_DWORD *)(this + 144) = -1;
  *(_BYTE *)(this + 164) = 0;
  *(_DWORD *)(this + 160) = -1;
  *(_BYTE *)(this + 180) = 0;
  *(_DWORD *)(this + 176) = -1;
  *(_BYTE *)(this + 196) = 0;
  *(_DWORD *)(this + 192) = -1;
  *(_BYTE *)(this + 212) = 0;
  *(_DWORD *)(this + 208) = -1;
  *(_BYTE *)(this + 228) = 0;
  *(_DWORD *)(this + 224) = -1;
  return this;
}


// ============================================================

// Address: 0x56d3bc
// Original: _ZN20CSpecialPlateHandler4FindEiPc
// Demangled: CSpecialPlateHandler::Find(int,char *)
int __fastcall CSpecialPlateHandler::Find(CSpecialPlateHandler *this, int a2, char *a3)
{
  int v3; // r4

  *a3 = 0;
  if ( *((_DWORD *)this + 60) )
  {
    if ( *(_DWORD *)this == a2 )
    {
      v3 = 0;
LABEL_32:
      strcpy(a3, (const char *)this + 16 * v3 + 4);
      return v3;
    }
    if ( *((_DWORD *)this + 4) == a2 )
    {
      v3 = 1;
      goto LABEL_32;
    }
    if ( *((_DWORD *)this + 8) == a2 )
    {
      v3 = 2;
      goto LABEL_32;
    }
    if ( *((_DWORD *)this + 12) == a2 )
    {
      v3 = 3;
      goto LABEL_32;
    }
    if ( *((_DWORD *)this + 16) == a2 )
    {
      v3 = 4;
      goto LABEL_32;
    }
    if ( *((_DWORD *)this + 20) == a2 )
    {
      v3 = 5;
      goto LABEL_32;
    }
    if ( *((_DWORD *)this + 24) == a2 )
    {
      v3 = 6;
      goto LABEL_32;
    }
    if ( *((_DWORD *)this + 28) == a2 )
    {
      v3 = 7;
      goto LABEL_32;
    }
    if ( *((_DWORD *)this + 32) == a2 )
    {
      v3 = 8;
      goto LABEL_32;
    }
    if ( *((_DWORD *)this + 36) == a2 )
    {
      v3 = 9;
      goto LABEL_32;
    }
    if ( *((_DWORD *)this + 40) == a2 )
    {
      v3 = 10;
      goto LABEL_32;
    }
    if ( *((_DWORD *)this + 44) == a2 )
    {
      v3 = 11;
      goto LABEL_32;
    }
    if ( *((_DWORD *)this + 48) == a2 )
    {
      v3 = 12;
      goto LABEL_32;
    }
    if ( *((_DWORD *)this + 52) == a2 )
    {
      v3 = 13;
      goto LABEL_32;
    }
    if ( *((_DWORD *)this + 56) == a2 )
    {
      v3 = 14;
      goto LABEL_32;
    }
  }
  return -1;
}


// ============================================================

// Address: 0x56d486
// Original: _ZN20CSpecialPlateHandler3AddEiPc
// Demangled: CSpecialPlateHandler::Add(int,char *)
int __fastcall CSpecialPlateHandler::Add(CSpecialPlateHandler *this, int a2, char *a3)
{
  int result; // r0

  result = *((_DWORD *)this + 60);
  if ( result != 15 )
  {
    *((_DWORD *)this + 4 * result) = a2;
    strcpy((char *)this + 16 * *((_DWORD *)this + 60) + 4, a3);
    result = *((_DWORD *)this + 60) + 1;
    *((_DWORD *)this + 60) = result;
  }
  return result;
}


// ============================================================

// Address: 0x56d4b6
// Original: _ZN20CSpecialPlateHandler6RemoveEi
// Demangled: CSpecialPlateHandler::Remove(int)
int __fastcall CSpecialPlateHandler::Remove(int this, int a2)
{
  int v2; // r12
  int v3; // r3
  _QWORD *v4; // r1
  __int64 v5; // d17

  if ( a2 >= 0 && *(_DWORD *)(this + 240) )
  {
    v2 = this + 16 * a2;
    *(_DWORD *)v2 = -1;
    *(_BYTE *)(v2 + 4) = 0;
    v3 = *(_DWORD *)(this + 240);
    if ( v3 - 1 > a2 )
    {
      v4 = (_QWORD *)(this + 16 * (v3 - 1));
      v5 = v4[1];
      *(_QWORD *)v2 = *v4;
      *(_QWORD *)(v2 + 8) = v5;
      v3 = *(_DWORD *)(this + 240);
    }
    *(_DWORD *)(this + 240) = v3 - 1;
  }
  return this;
}


// ============================================================
