
// Address: 0x18b9f0
// Original: j__ZN7ZIPFile12ReadExistingEPviS0_j
// Demangled: ZIPFile::ReadExisting(void *,int,void *,uint)
// attributes: thunk
int __fastcall ZIPFile::ReadExisting(ZIPFile *this, AndroidFile *a2, int a3, void *a4, unsigned int a5)
{
  return _ZN7ZIPFile12ReadExistingEPviS0_j(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x18e528
// Original: j__ZN7ZIPFile15FindFromStorageEPKcPPS_
// Demangled: ZIPFile::FindFromStorage(char const*,ZIPFile**)
// attributes: thunk
int __fastcall ZIPFile::FindFromStorage(ZIPFile *this, const char *a2, ZIPFile **a3)
{
  return _ZN7ZIPFile15FindFromStorageEPKcPPS_(this, a2, a3);
}


// ============================================================

// Address: 0x197174
// Original: j__ZN7ZIPFileD2Ev
// Demangled: ZIPFile::~ZIPFile()
// attributes: thunk
void __fastcall ZIPFile::~ZIPFile(ZIPFile *this)
{
  _ZN7ZIPFileD2Ev(this);
}


// ============================================================

// Address: 0x19fa10
// Original: j__ZN7ZIPFile10InitializeEPKc
// Demangled: ZIPFile::Initialize(char const*)
// attributes: thunk
int __fastcall ZIPFile::Initialize(ZIPFile *this, const char *a2)
{
  return _ZN7ZIPFile10InitializeEPKc(this, a2);
}


// ============================================================

// Address: 0x267038
// Original: _ZN7ZIPFile15OpenFromStorageEPKc16OSFileAccessType
// Demangled: ZIPFile::OpenFromStorage(char const*,OSFileAccessType)
AndroidFile *__fastcall ZIPFile::OpenFromStorage(ZIPFile *a1, int a2, ZIPFile **a3)
{
  int v3; // r8
  int v4; // r9
  int v5; // r5
  int v6; // r6
  int v7; // r0
  AndroidFile *v8; // r4
  off_t v9; // r5
  int v10; // r6
  int v11; // r0
  int v13; // [sp+0h] [bp-20h] BYREF
  AndroidFile *v14; // [sp+4h] [bp-1Ch] BYREF

  v3 = ZIPFile::FindFromStorage(a1, (const char *)&v13, a3);
  if ( v3 == -1 )
    return 0;
  v4 = v13;
  v5 = 21;
  v6 = v13 + 16;
  do
  {
    if ( !OS_FileOpen(0, &v14, v6) )
      break;
    usleep(0x1Eu);
    --v5;
  }
  while ( v5 > 1 );
  v7 = *(_DWORD *)(v4 + 12);
  v8 = v14;
  v9 = *(_DWORD *)(v7 + 12 * v3);
  v10 = *(_DWORD *)(v7 + 12 * v3 + 4);
  OS_FileSetPosition(v14, v9);
  v11 = *((_DWORD *)v8 + 7) + v9;
  *((_DWORD *)v8 + 6) = v10;
  *((_DWORD *)v8 + 7) = v11;
  return v8;
}


// ============================================================

// Address: 0x26aa08
// Original: _ZN7ZIPFile15FindFromStorageEPKcPPS_
// Demangled: ZIPFile::FindFromStorage(char const*,ZIPFile**)
int __fastcall ZIPFile::FindFromStorage(ZIPFile *this, char *a2, ZIPFile **a3)
{
  int v5; // r6
  int v6; // r4
  int v7; // r6

  v5 = storageMutex;
  if ( !storageMutex )
  {
    v5 = operator new(8u);
    pthread_mutexattr_init((pthread_mutexattr_t *)(v5 + 4));
    pthread_mutexattr_settype();
    pthread_mutex_init((pthread_mutex_t *)v5, (const pthread_mutexattr_t *)(v5 + 4));
    storageMutex = v5;
  }
  pthread_mutex_lock((pthread_mutex_t *)v5);
  if ( dword_6D7168 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = (***(int (__fastcall ****)(_DWORD, ZIPFile *))(dword_6D716C + 4 * v6))(
             *(_DWORD *)(dword_6D716C + 4 * v6),
             this);
      if ( v7 != -1 )
        break;
      if ( ++v6 >= (unsigned int)dword_6D7168 )
        goto LABEL_7;
    }
    *(_DWORD *)a2 = *(_DWORD *)(dword_6D716C + 4 * v6);
    pthread_mutex_unlock((pthread_mutex_t *)storageMutex);
  }
  else
  {
LABEL_7:
    pthread_mutex_unlock((pthread_mutex_t *)storageMutex);
    v7 = -1;
    *(_DWORD *)a2 = 0;
  }
  return v7;
}


// ============================================================

// Address: 0x26f5ac
// Original: _ZN7ZIPFile12EntryCompareEPKvS1_
// Demangled: ZIPFile::EntryCompare(void const*,void const*)
int __fastcall ZIPFile::EntryCompare(const char **this, const char **a2, const void *a3)
{
  return j_strcasecmp(this[2], a2[2]);
}


// ============================================================

// Address: 0x26f5b4
// Original: _ZN7ZIPFile11SortEntriesEv
// Demangled: ZIPFile::SortEntries(void)
void __fastcall ZIPFile::SortEntries(ZIPFile *this)
{
  size_t v1; // r9
  const char **v2; // r8
  unsigned int v3; // r4
  const char **v4; // r5
  const char *v5; // r0
  const char *v6; // r6

  v1 = *((_DWORD *)this + 2);
  if ( v1 >= 2 )
  {
    v2 = (const char **)*((_DWORD *)this + 3);
    v3 = 1;
    v4 = v2 + 5;
    v5 = v2[2];
    while ( 1 )
    {
      v6 = *v4;
      if ( strcasecmp(v5, *v4) >= 1 )
        break;
      ++v3;
      v4 += 3;
      v5 = v6;
      if ( v3 >= v1 )
        return;
    }
    j_qsort(v2, v1, 0xCu, (int (*)(const void *, const void *))ZIPFile::EntryCompare);
  }
}


// ============================================================

// Address: 0x26f60c
// Original: _ZN7ZIPFileD2Ev
// Demangled: ZIPFile::~ZIPFile()
void __fastcall ZIPFile::~ZIPFile(ZIPFile *this)
{
  void *v2; // r0
  _DWORD *v3; // r8
  unsigned int v4; // r6
  int v5; // r5
  void *v6; // r0

  v2 = (void *)*((_DWORD *)this + 69);
  *(_DWORD *)this = &off_661E38;
  if ( v2 )
  {
    free(v2);
    v3 = (_DWORD *)((char *)this + 8);
    *((_DWORD *)this + 69) = 0;
  }
  else
  {
    v3 = (_DWORD *)((char *)this + 8);
    if ( *((_DWORD *)this + 2) )
    {
      v4 = 0;
      v5 = 8;
      do
      {
        free(*(void **)(*((_DWORD *)this + 3) + v5));
        ++v4;
        v5 += 12;
      }
      while ( v4 < *((_DWORD *)this + 2) );
    }
  }
  *v3 = 0;
  v6 = (void *)*((_DWORD *)this + 3);
  if ( v6 )
  {
    free(v6);
    *((_DWORD *)this + 3) = 0;
  }
  *((_DWORD *)this + 1) = 0;
}


// ============================================================

// Address: 0x26f678
// Original: _ZN7ZIPFile10InitializeEPKc
// Demangled: ZIPFile::Initialize(char const*)
int __fastcall ZIPFile::Initialize(ZIPFile *this, const char *a2)
{
  int v4; // r5
  AndroidFile *v5; // r6
  char *v6; // r10
  int v7; // r0
  int v8; // r2
  int v9; // r4
  int v10; // r0
  bool v11; // zf
  AndroidFile *v12; // r10
  char *v13; // r2
  int v14; // r11
  unsigned int v15; // r0
  _DWORD *v16; // r0
  void *v17; // r8
  _DWORD *v18; // r5
  char *v19; // r0
  size_t *v20; // r0
  size_t *v21; // r5
  AndroidFile *v22; // r11
  signed int v23; // r8
  double v24; // d17
  size_t v25; // r4
  size_t v26; // r11
  void *v27; // r0
  void *v28; // r6
  void *v29; // r8
  const char **v30; // r8
  unsigned int v31; // r5
  const char **v32; // r4
  const char *v33; // r0
  const char *v34; // r6
  unsigned int *v35; // r4
  unsigned int v36; // r0
  char *v37; // r4
  int v38; // r10
  unsigned int v39; // t1
  void *v40; // r0
  void *v41; // r5
  void *v42; // r11
  int v43; // r6
  void *v44; // r0
  void *v45; // r5
  void *v46; // r11
  char *v47; // r11
  int v48; // r5
  size_t v49; // r6
  char *v50; // r4
  int v51; // r0
  unsigned int v52; // r0
  __time_t tv_sec; // r5
  void *v54; // r0
  void *v55; // r6
  void *v56; // r8
  __time_t v57; // r4
  int v58; // r5
  unsigned int v59; // r10
  void *v60; // r0
  void *v61; // r6
  void *v62; // r8
  int v63; // r0
  __time_t v64; // r4
  char *v65; // r6
  int v66; // r4
  char *v67; // r0
  __time_t v68; // r6
  char *v69; // r5
  int v70; // r0
  unsigned int v72; // [sp+4h] [bp-24Ch]
  char *v73; // [sp+8h] [bp-248h]
  unsigned int v74; // [sp+Ch] [bp-244h]
  int *p; // [sp+10h] [bp-240h]
  unsigned int *pa; // [sp+10h] [bp-240h]
  _WORD ptr[3]; // [sp+14h] [bp-23Ch] BYREF
  __int16 v78; // [sp+1Ah] [bp-236h] BYREF
  unsigned __int16 n; // [sp+1Ch] [bp-234h] BYREF
  char n_2; // [sp+1Eh] [bp-232h] BYREF
  AndroidFile *v81; // [sp+20h] [bp-230h] BYREF
  AndroidFile *v82; // [sp+24h] [bp-22Ch] BYREF
  struct timeval tv; // [sp+28h] [bp-228h] BYREF
  char v84[512]; // [sp+30h] [bp-220h] BYREF

  v4 = 0;
  if ( !OS_FileOpen(0, &v82, a2) )
  {
    strcpy((char *)this + 16, a2);
    sub_5E6B74(v84, 512, "%s.idx", (const char *)this + 16);
    if ( OS_FileOpen(0, &v81, v84) )
    {
      v5 = v82;
      OS_FileSetPosition(v82, 0);
      OS_FileRead(v5, &tv, 4u);
      if ( tv.tv_sec == 67324752 )
      {
        v6 = 0;
        p = (int *)((char *)this + 8);
        do
        {
          OS_FileSetPosition(v5, (off_t)(v6 + 6));
          OS_FileRead(v5, &n_2, 2u);
          OS_FileSetPosition(v5, (off_t)(v6 + 18));
          OS_FileRead(v5, &v81, 4u);
          OS_FileRead(v5, ptr, 4u);
          OS_FileRead(v5, &n, 2u);
          OS_FileRead(v5, &v78, 2u);
          if ( n )
          {
            OS_FileRead(v5, v84, (__int16)n);
            v7 = n;
          }
          else
          {
            v7 = 0;
          }
          v8 = (int)&v6[(__int16)v7 + v78];
          v84[(__int16)v7] = 0;
          v9 = v8 + 30;
          if ( v7 )
          {
            v10 = (unsigned __int8)v84[(__int16)v7 - 1];
            v11 = v10 == 47;
            if ( v10 != 47 )
              v11 = v10 == 92;
            if ( !v11 )
            {
              v12 = v81;
              v13 = j_strdup(v84);
              v14 = *p;
              v15 = *p + 1;
              if ( *((_DWORD *)this + 1) >= v15 )
              {
                v18 = (_DWORD *)*((_DWORD *)this + 3);
              }
              else
              {
                v73 = v13;
                v72 = 4 * v15 / 3 + 3;
                v16 = malloc(12 * v72);
                v17 = (void *)*((_DWORD *)this + 3);
                v18 = v16;
                if ( v17 )
                {
                  memcpy_0(v16, *((const void **)this + 3), 12 * v14);
                  free(v17);
                  v14 = *p;
                }
                *((_DWORD *)this + 3) = v18;
                *((_DWORD *)this + 1) = v72;
                v13 = v73;
              }
              v18[3 * v14] = v9;
              v19 = (char *)&v18[3 * v14];
              *((_DWORD *)v19 + 1) = v12;
              *((_DWORD *)v19 + 2) = v13;
              ++*p;
            }
          }
          v6 = (char *)v81 + v9;
          if ( (n_2 & 8) != 0 )
          {
            OS_FileSetPosition(v5, (off_t)v81 + v9);
            OS_FileRead(v5, &tv, 4u);
            if ( tv.tv_sec == 134695760 )
              v6 += 4;
            v6 += 12;
          }
          OS_FileSetPosition(v5, (off_t)v6);
          OS_FileRead(v5, &tv, 4u);
        }
        while ( tv.tv_sec == 67324752 );
        v20 = (size_t *)((char *)this + 4);
        v21 = (size_t *)((char *)this + 8);
      }
      else
      {
        v21 = (size_t *)((char *)this + 8);
        v20 = (size_t *)((char *)this + 4);
      }
      v25 = *v21;
      v26 = *v20;
      if ( *v20 != *v21 )
      {
        v27 = malloc(12 * v25);
        v28 = (void *)*((_DWORD *)this + 3);
        v29 = v27;
        v26 = v25;
        if ( v28 )
        {
          memcpy_0(v27, *((const void **)this + 3), 12 * v25);
          free(v28);
          v26 = *v21;
        }
        *((_DWORD *)this + 3) = v29;
        *((_DWORD *)this + 1) = v25;
      }
      if ( v26 >= 2 )
      {
        v30 = (const char **)*((_DWORD *)this + 3);
        v31 = 1;
        v32 = v30 + 5;
        v33 = v30[2];
        while ( 1 )
        {
          v34 = *v32;
          if ( strcasecmp(v33, *v32) >= 1 )
            break;
          ++v31;
          v32 += 3;
          v33 = v34;
          if ( v31 >= v26 )
            return 1;
        }
        qsort(v30, v26, 0xCu, (int (*)(const void *, const void *))ZIPFile::EntryCompare);
      }
    }
    else
    {
      v22 = v81;
      v23 = OS_FileSize(v81);
      gettimeofday(&tv, 0);
      if ( tv.tv_usec > 0xF4240u )
        v24 = dbl_6D70D8 - (double)(unsigned int)dbl_6D70D8 + 0.00033;
      else
        v24 = (double)tv.tv_usec / 1000000.0;
      dbl_6D70D8 = v24 + (double)tv.tv_sec;
      if ( dbl_6D70D8 - unk_6D70E0 > 5.0 )
        unk_6D70E0 = v24 + (double)tv.tv_sec;
      if ( v23 >= 0x200000 )
      {
        OS_FileRead(v22, &tv, 4u);
        v52 = *((_DWORD *)this + 1);
        tv_sec = tv.tv_sec;
        if ( v52 >= tv.tv_sec )
        {
          v57 = tv.tv_sec;
        }
        else
        {
          v54 = malloc(12 * tv.tv_sec);
          v55 = (void *)*((_DWORD *)this + 3);
          v56 = v54;
          v57 = tv_sec;
          if ( v55 )
          {
            memcpy_0(v54, *((const void **)this + 3), 12 * *((_DWORD *)this + 2));
            free(v55);
            v57 = tv.tv_sec;
          }
          v52 = tv_sec;
          *((_DWORD *)this + 3) = v56;
          *((_DWORD *)this + 1) = tv_sec;
        }
        v58 = *((_DWORD *)this + 2);
        if ( v52 < v58 + v57 )
        {
          v59 = 4 * (v58 + v57) / 3u + 3;
          v60 = malloc(12 * v59);
          v61 = (void *)*((_DWORD *)this + 3);
          v62 = v60;
          if ( v61 )
          {
            memcpy_0(v60, *((const void **)this + 3), 12 * v58);
            free(v61);
            v58 = *((_DWORD *)this + 2);
          }
          *((_DWORD *)this + 3) = v62;
          *((_DWORD *)this + 1) = v59;
        }
        *((_DWORD *)this + 2) = v58 + v57;
        v63 = OS_FileSize(v22);
        v64 = tv.tv_sec;
        v65 = (char *)malloc(v63 - 9 * tv.tv_sec);
        *((_DWORD *)this + 69) = v65;
        if ( v64 >= 1 )
        {
          OS_FileRead(v22, *((void **)this + 3), 4u);
          OS_FileRead(v22, (void *)(*((_DWORD *)this + 3) + 4), 4u);
          ptr[0] = 0;
          OS_FileRead(v22, ptr, 2u);
          *(_DWORD *)(*((_DWORD *)this + 3) + 8) = v65;
          OS_FileRead(v22, *(void **)(*((_DWORD *)this + 3) + 8), ptr[0]);
          *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 3) + 8) + ptr[0]) = 0;
          if ( tv.tv_sec >= 2 )
          {
            v66 = 20;
            v67 = &v65[ptr[0]];
            v68 = 1;
            v69 = v67 + 1;
            do
            {
              OS_FileRead(v22, (void *)(*((_DWORD *)this + 3) + v66 - 8), 4u);
              OS_FileRead(v22, (void *)(*((_DWORD *)this + 3) + v66 - 4), 4u);
              ptr[0] = 0;
              OS_FileRead(v22, ptr, 2u);
              *(_DWORD *)(*((_DWORD *)this + 3) + v66) = v69;
              OS_FileRead(v22, *(void **)(*((_DWORD *)this + 3) + v66), ptr[0]);
              ++v68;
              v70 = *(_DWORD *)(*((_DWORD *)this + 3) + v66);
              v66 += 12;
              *(_BYTE *)(v70 + ptr[0]) = 0;
              v69 += ptr[0] + 1;
            }
            while ( v68 < tv.tv_sec );
          }
        }
        OS_FileClose(v22);
      }
      else
      {
        v35 = (unsigned int *)malloc(v23);
        OS_FileRead(v22, v35, v23);
        OS_FileClose(v22);
        v36 = *((_DWORD *)this + 1);
        pa = v35;
        v39 = *v35;
        v37 = (char *)(v35 + 1);
        v38 = v39;
        if ( v36 < v39 )
        {
          v40 = malloc(12 * v38);
          v41 = (void *)*((_DWORD *)this + 3);
          v42 = v40;
          if ( v41 )
          {
            memcpy_0(v40, *((const void **)this + 3), 12 * *((_DWORD *)this + 2));
            free(v41);
          }
          v36 = v38;
          *((_DWORD *)this + 3) = v42;
          *((_DWORD *)this + 1) = v38;
        }
        v43 = *((_DWORD *)this + 2);
        if ( v36 < v43 + v38 )
        {
          v74 = 4 * (v43 + v38) / 3u + 3;
          v44 = malloc(12 * v74);
          v45 = (void *)*((_DWORD *)this + 3);
          v46 = v44;
          if ( v45 )
          {
            memcpy_0(v44, *((const void **)this + 3), 12 * v43);
            free(v45);
            v43 = *((_DWORD *)this + 2);
          }
          *((_DWORD *)this + 3) = v46;
          *((_DWORD *)this + 1) = v74;
        }
        *((_DWORD *)this + 2) = v43 + v38;
        v47 = (char *)malloc(-9 * v38 + v23);
        *((_DWORD *)this + 69) = v47;
        if ( v38 >= 1 )
        {
          v48 = 8;
          do
          {
            *(_DWORD *)(*((_DWORD *)this + 3) + v48 - 8) = *(_DWORD *)v37;
            *(_DWORD *)(*((_DWORD *)this + 3) + v48 - 4) = *((_DWORD *)v37 + 1);
            v49 = *((unsigned __int16 *)v37 + 4);
            v50 = v37 + 10;
            *(_DWORD *)(*((_DWORD *)this + 3) + v48) = v47;
            memcpy_1(*(void **)(*((_DWORD *)this + 3) + v48), v50, v49);
            v37 = &v50[v49];
            --v38;
            v51 = *(_DWORD *)(*((_DWORD *)this + 3) + v48);
            v48 += 12;
            *(_BYTE *)(v51 + v49) = 0;
            v47 += v49 + 1;
          }
          while ( v38 );
        }
        free(pa);
      }
    }
    return 1;
  }
  return v4;
}


// ============================================================

// Address: 0x26fce4
// Original: _ZN7ZIPFile4FindEPKc
// Demangled: ZIPFile::Find(char const*)
int __fastcall ZIPFile::Find(ZIPFile *this, const char *a2)
{
  const char *v3; // r5
  int v4; // r0
  bool v5; // zf
  size_t v6; // r0
  size_t v7; // r2
  int v8; // r3
  char *v9; // r3
  int v10; // r5
  int v11; // r4
  int v12; // r6
  int v13; // r0
  char v15[128]; // [sp+4h] [bp-9Ch] BYREF

  v3 = a2;
  if ( *a2 == 46 )
  {
    v4 = *((unsigned __int8 *)a2 + 1);
    v5 = v4 == 92;
    if ( v4 != 92 )
      v5 = v4 == 47;
    if ( v5 )
      v3 = a2 + 2;
  }
  v6 = strlen(v3);
  v7 = 0;
  do
  {
    v8 = (unsigned __int8)v3[v7];
    if ( v8 == 92 )
      LOBYTE(v8) = 47;
    v15[v7++] = v8;
  }
  while ( v7 <= v6 );
  for ( ; v6; *(v9 - 1) = 0 )
  {
    v9 = &v15[v6];
    if ( v15[v6 - 1] != 32 )
      break;
    --v6;
  }
  v10 = 0;
  v11 = *((_DWORD *)this + 2) - 1;
  while ( v11 >= v10 )
  {
    v12 = v10 + (v11 - v10) / 2;
    v13 = strcasecmp(v15, *(const char **)(*((_DWORD *)this + 3) + 12 * v12 + 8));
    if ( v13 >= 1 )
    {
      v10 = v12 + 1;
    }
    else
    {
      v11 = v12 - 1;
      if ( !v13 )
        return v12;
    }
  }
  return -1;
}


// ============================================================

// Address: 0x26fda4
// Original: _ZN7ZIPFile4OpenEi16OSFileAccessTypePj
// Demangled: ZIPFile::Open(int,OSFileAccessType,uint *)
AndroidFile *__fastcall ZIPFile::Open(int a1, int a2, int a3, _DWORD *a4)
{
  int v5; // r6
  int i; // r5
  int v9; // r0
  int v10; // r6
  AndroidFile *v11; // r4
  off_t v12; // r5
  int v13; // r9
  int v14; // r0
  AndroidFile *v16; // [sp+0h] [bp-20h] BYREF

  v5 = a1 + 16;
  for ( i = 21; i > 1; --i )
  {
    if ( !OS_FileOpen(0, &v16, v5) )
      break;
    usleep(0x1Eu);
  }
  v9 = *(_DWORD *)(a1 + 12);
  v10 = 3 * a2;
  v11 = v16;
  v12 = *(_DWORD *)(v9 + 12 * a2);
  v13 = *(_DWORD *)(v9 + 12 * a2 + 4);
  OS_FileSetPosition(v16, v12);
  v14 = *((_DWORD *)v11 + 7) + v12;
  *((_DWORD *)v11 + 6) = v13;
  *((_DWORD *)v11 + 7) = v14;
  if ( a4 )
    *a4 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * v10 + 4);
  return v11;
}


// ============================================================

// Address: 0x26fe1c
// Original: _ZN7ZIPFile12ReadExistingEPviS0_j
// Demangled: ZIPFile::ReadExisting(void *,int,void *,uint)
int __fastcall ZIPFile::ReadExisting(ZIPFile *this, AndroidFile *a2, int a3, FILE *a4, unsigned int a5)
{
  int v6; // r4

  v6 = 3 * a3;
  OS_FileSetPosition(a2, *(_DWORD *)(*((_DWORD *)this + 3) + 12 * a3));
  return OS_FileRead((FILE **)a2, a4, *(_DWORD *)(*((_DWORD *)this + 3) + 4 * v6 + 4));
}


// ============================================================
