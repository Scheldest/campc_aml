
// Address: 0x19f058
// Original: j__ZN16CCollisionPlugin12SetModelInfoEP15CClumpModelInfo
// Demangled: CCollisionPlugin::SetModelInfo(CClumpModelInfo *)
// attributes: thunk
int __fastcall CCollisionPlugin::SetModelInfo(CCollisionPlugin *this, CClumpModelInfo *a2)
{
  return _ZN16CCollisionPlugin12SetModelInfoEP15CClumpModelInfo(this, a2);
}


// ============================================================

// Address: 0x1a0f94
// Original: j__ZN16CCollisionPlugin12PluginAttachEv
// Demangled: CCollisionPlugin::PluginAttach(void)
// attributes: thunk
int __fastcall CCollisionPlugin::PluginAttach(CCollisionPlugin *this)
{
  return _ZN16CCollisionPlugin12PluginAttachEv(this);
}


// ============================================================

// Address: 0x2e0fc4
// Original: _ZN16CCollisionPlugin12PluginAttachEv
// Demangled: CCollisionPlugin::PluginAttach(void)
int __fastcall CCollisionPlugin::PluginAttach(CCollisionPlugin *this)
{
  RpClumpRegisterPlugin(
    0,
    0x253F2FAu,
    (void *(*)(void *, int, int))ClumpCollisionConstructor,
    (void *(*)(void *, int, int))ClumpCollisionDestructor,
    (void *(*)(void *, const void *, int, int))ClumpCollisionCopyConstructor);
  RpClumpRegisterPluginStream();
  return 1;
}


// ============================================================

// Address: 0x2e1104
// Original: _ZN16CCollisionPlugin12SetModelInfoEP15CClumpModelInfo
// Demangled: CCollisionPlugin::SetModelInfo(CClumpModelInfo *)
int __fastcall CCollisionPlugin::SetModelInfo(int this, CClumpModelInfo *a2)
{
  dword_7960FC = this;
  return this;
}


// ============================================================
