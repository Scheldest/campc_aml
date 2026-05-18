
// Address: 0x18f8c8
// Original: j__ZNK24_rpGeometryStreamBuilder15WriteStreamInfoEP8RwStream
// Demangled: _rpGeometryStreamBuilder::WriteStreamInfo(RwStream *)
// attributes: thunk
int _rpGeometryStreamBuilder::WriteStreamInfo()
{
  return _ZNK24_rpGeometryStreamBuilder15WriteStreamInfoEP8RwStream();
}


// ============================================================

// Address: 0x220eaa
// Original: _ZNK24_rpGeometryStreamBuilder15WriteStreamInfoEP8RwStream
// Demangled: _rpGeometryStreamBuilder::WriteStreamInfo(RwStream *)
bool _rpGeometryStreamBuilder::WriteStreamInfo()
{
  return RwStreamWriteInt32()
      && RwStreamWriteInt32()
      && RwStreamWriteInt32()
      && RwStreamWriteInt32()
      && RwStreamWriteInt32()
      && RwStreamWriteInt32();
}


// ============================================================
