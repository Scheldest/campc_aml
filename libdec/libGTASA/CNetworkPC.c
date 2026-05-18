
// Address: 0x450d68
// Original: _ZN10CNetworkPCC2Ev
// Demangled: CNetworkPC::CNetworkPC(void)
void __fastcall CNetworkPC::CNetworkPC(CNetworkPC *this)
{
  *(_DWORD *)this = &off_667DBC;
}


// ============================================================

// Address: 0x450d78
// Original: _ZN10CNetworkPCD2Ev
// Demangled: CNetworkPC::~CNetworkPC()
void __fastcall CNetworkPC::~CNetworkPC(CNetworkPC *this)
{
  ;
}


// ============================================================

// Address: 0x450d7a
// Original: _ZN10CNetworkPCD0Ev
// Demangled: CNetworkPC::~CNetworkPC()
// attributes: thunk
void __fastcall CNetworkPC::~CNetworkPC(CNetworkPC *this)
{
  operator delete(this);
}


// ============================================================

// Address: 0x450d80
// Original: _ZN10CNetworkPC12SetNetworkUpEb
// Demangled: CNetworkPC::SetNetworkUp(bool)
char __fastcall CNetworkPC::SetNetworkUp(char this, bool a2)
{
  CNetworkPC::sm_network_up = this;
  return this;
}


// ============================================================

// Address: 0x450d90
// Original: _ZN10CNetworkPC11IsNetworkUpEv
// Demangled: CNetworkPC::IsNetworkUp(void)
int __fastcall CNetworkPC::IsNetworkUp(CNetworkPC *this)
{
  return (unsigned __int8)CNetworkPC::sm_network_up;
}


// ============================================================

// Address: 0x450da0
// Original: _ZN10CNetworkPC11InitNetworkEv
// Demangled: CNetworkPC::InitNetwork(void)
int __fastcall CNetworkPC::InitNetwork(CNetworkPC *this)
{
  return 1;
}


// ============================================================

// Address: 0x450da4
// Original: _ZN10CNetworkPC11_CheckErrorEv
// Demangled: CNetworkPC::_CheckError(void)
int __fastcall CNetworkPC::_CheckError(CNetworkPC *this)
{
  return 0;
}


// ============================================================

// Address: 0x450da8
// Original: _ZN10CNetworkPC15ShutdownNetworkEv
// Demangled: CNetworkPC::ShutdownNetwork(void)
int __fastcall CNetworkPC::ShutdownNetwork(CNetworkPC *this)
{
  return 1;
}


// ============================================================

// Address: 0x450dac
// Original: _ZN10CNetworkPC7ConnectEjPc
// Demangled: CNetworkPC::Connect(uint,char *)
int __fastcall CNetworkPC::Connect(CNetworkPC *this, unsigned int a2, char *a3)
{
  return 0;
}


// ============================================================

// Address: 0x450db0
// Original: _ZN10CNetworkPC10DisconnectEi
// Demangled: CNetworkPC::Disconnect(int)
int __fastcall CNetworkPC::Disconnect(CNetworkPC *this, int a2)
{
  return 1;
}


// ============================================================

// Address: 0x450db4
// Original: _ZN10CNetworkPC9SendBytesEiPvm
// Demangled: CNetworkPC::SendBytes(int,void *,ulong)
int __fastcall CNetworkPC::SendBytes(CNetworkPC *this, int a2, void *a3, unsigned int a4)
{
  return 0;
}


// ============================================================

// Address: 0x450db8
// Original: _ZN10CNetworkPC9RecvBytesEiPvm
// Demangled: CNetworkPC::RecvBytes(int,void *,ulong)
int __fastcall CNetworkPC::RecvBytes(CNetworkPC *this, int a2, void *a3, unsigned int a4)
{
  return 0;
}


// ============================================================
