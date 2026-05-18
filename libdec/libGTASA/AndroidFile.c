
// Address: 0x18c0cc
// Original: j__ZN11AndroidFile10UpdateReadEi
// Demangled: AndroidFile::UpdateRead(int)
// attributes: thunk
int __fastcall AndroidFile::UpdateRead(AndroidFile *this, int a2)
{
  return _ZN11AndroidFile10UpdateReadEi(this, a2);
}


// ============================================================

// Address: 0x18edac
// Original: j__ZN11AndroidFile10AsyncFlushEv
// Demangled: AndroidFile::AsyncFlush(void)
// attributes: thunk
int __fastcall AndroidFile::AsyncFlush(AndroidFile *this)
{
  return _ZN11AndroidFile10AsyncFlushEv(this);
}


// ============================================================

// Address: 0x27c918
// Original: _ZN11AndroidFile10UpdateReadEi
// Demangled: AndroidFile::UpdateRead(int)
int __fastcall AndroidFile::UpdateRead(__int64 **this, int a2)
{
  __int64 *v4; // r9
  signed int v5; // r5
  __int64 v6; // kr00_8
  off_t v7; // r10
  off_t v8; // r5
  signed int v9; // r2
  __int64 v10; // kr08_8
  off_t Length; // r10
  off_t v13; // r6
  signed int v14; // r0

  pthread_mutex_lock((pthread_mutex_t *)fileMutex);
  v4 = this[3];
  if ( !v4 )
  {
LABEL_16:
    pthread_mutex_unlock((pthread_mutex_t *)fileMutex);
    return 1;
  }
  v5 = (signed int)this[4];
  v6 = **this;
  if ( v5 <= a2 )
  {
    if ( (_DWORD)v6 == 1 )
    {
      fread(this[3], 1u, (size_t)this[4], (FILE *)HIDWORD(v6));
    }
    else
    {
      Length = AAsset_getLength((AAsset *)HIDWORD(v6));
      v13 = AAsset_getLength((AAsset *)HIDWORD(v6));
      v14 = AAsset_getRemainingLength((AAsset *)HIDWORD(v6)) - v13 + Length;
      if ( v5 > v14 )
        v5 = v14;
      AAsset_read((AAsset *)HIDWORD(v6), v4, v5);
    }
    this[3] = 0;
    goto LABEL_16;
  }
  if ( (_DWORD)v6 == 1 )
  {
    fread(this[3], 1u, a2, (FILE *)HIDWORD(v6));
  }
  else
  {
    v7 = AAsset_getLength((AAsset *)HIDWORD(v6));
    v8 = AAsset_getLength((AAsset *)HIDWORD(v6));
    v9 = AAsset_getRemainingLength((AAsset *)HIDWORD(v6)) - v8 + v7;
    if ( v9 >= a2 )
      v9 = a2;
    AAsset_read((AAsset *)HIDWORD(v6), v4, v9);
  }
  v10 = *(_QWORD *)(this + 3);
  this[3] = (__int64 *)(v10 + a2);
  this[4] = (__int64 *)(HIDWORD(v10) - a2);
  pthread_mutex_unlock((pthread_mutex_t *)fileMutex);
  return 0;
}


// ============================================================

// Address: 0x27ca0c
// Original: _ZN11AndroidFile10AsyncFlushEv
// Demangled: AndroidFile::AsyncFlush(void)
int __fastcall AndroidFile::AsyncFlush(__int64 **this)
{
  __int64 *v2; // r5
  signed int v3; // r8
  __int64 v4; // kr00_8
  off_t Length; // r9
  off_t v6; // r10
  signed int v7; // r0

  pthread_mutex_lock((pthread_mutex_t *)fileMutex);
  v2 = this[3];
  if ( v2 )
  {
    v3 = (signed int)this[4];
    v4 = **this;
    if ( (_DWORD)v4 == 1 )
    {
      fread(this[3], 1u, (size_t)this[4], (FILE *)HIDWORD(v4));
    }
    else
    {
      Length = AAsset_getLength((AAsset *)HIDWORD(v4));
      v6 = AAsset_getLength((AAsset *)HIDWORD(v4));
      v7 = AAsset_getRemainingLength((AAsset *)HIDWORD(v4)) - v6 + Length;
      if ( v3 > v7 )
        v3 = v7;
      AAsset_read((AAsset *)HIDWORD(v4), v2, v3);
    }
    this[3] = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)fileMutex);
  return 0;
}


// ============================================================
