
// Address: 0x3bed4c
// Original: _ZN10CBugstarPC4InitEv
// Demangled: CBugstarPC::Init(void)
int __fastcall CBugstarPC::Init(CBugstarPC *this)
{
  int v1; // r1

  v1 = *(_DWORD *)this;
  *((_DWORD *)this + 2) = 3490;
  return (*(int (**)(void))(v1 + 16))();
}


// ============================================================

// Address: 0x3bed58
// Original: _ZN10CBugstarPC14ReadConfigDataEv
// Demangled: CBugstarPC::ReadConfigData(void)
void __fastcall CBugstarPC::ReadConfigData(CBugstarPC *this)
{
  _BYTE *v2; // r5
  FILE *v3; // r6
  _BYTE *v4; // r4
  char v5; // r0
  _BYTE *v6; // r4
  char v7; // r0
  _BYTE *v8; // r4
  char v9; // r0
  _BYTE *v10; // r4
  char v11; // r0

  v2 = (_BYTE *)operator new[](0x64u);
  v3 = fopen("bugstar.cnf", "r");
  if ( v3 )
  {
    v4 = v2;
    do
    {
      v5 = fgetc(v3);
      *v4++ = v5;
    }
    while ( v5 != 10 );
    *v4 = 0;
    (*(void (__fastcall **)(CBugstarPC *, _BYTE *))(*(_DWORD *)this + 20))(this, v2);
    v6 = v2;
    do
    {
      v7 = fgetc(v3);
      *v6++ = v7;
    }
    while ( v7 != 10 );
    *v6 = 0;
    (*(void (__fastcall **)(CBugstarPC *, _BYTE *))(*(_DWORD *)this + 20))(this, v2);
    v8 = v2;
    do
    {
      v9 = fgetc(v3);
      *v8++ = v9;
    }
    while ( v9 != 10 );
    *v8 = 0;
    (*(void (__fastcall **)(CBugstarPC *, _BYTE *))(*(_DWORD *)this + 20))(this, v2);
    v10 = v2;
    do
    {
      v11 = fgetc(v3);
      *v10++ = v11;
    }
    while ( v11 != 10 );
    *v10 = 0;
    (*(void (__fastcall **)(CBugstarPC *, _BYTE *))(*(_DWORD *)this + 20))(this, v2);
    fclose(v3);
    sub_18E920(v2);
  }
}


// ============================================================

// Address: 0x3bee2c
// Original: _ZN10CBugstarPCD0Ev
// Demangled: CBugstarPC::~CBugstarPC()
void __fastcall CBugstarPC::~CBugstarPC(CBugstarPC *this)
{
  void *v1; // r0

  CBugstarInterface::~CBugstarInterface(this);
  operator delete(v1);
}


// ============================================================
