// ADDR: 0x10a534
// SYMBOL: sub_10A534
int __fastcall sub_10A534(const void **a1)
{
  std::__shared_weak_count *v2; // r0
  std::__shared_weak_count *v3; // r0
  std::__shared_weak_count *v4; // r5
  const void *v5; // r0
  unsigned int *v6; // r0
  unsigned int v7; // r1
  std::__shared_weak_count *v8; // r0
  std::__shared_weak_count *v9; // r5
  unsigned int *v10; // r0
  unsigned int v11; // r1
  std::__shared_weak_count *v12; // r0
  std::__shared_weak_count *v13; // r8
  const void *v14; // r5
  void *v15; // r0
  void *v16; // r9
  int v17; // r0
  unsigned int *v18; // r0
  unsigned int v19; // r1
  __int64 v20; // r0
  unsigned int *v21; // r2
  unsigned int v22; // r3
  int v24; // [sp+4h] [bp-2Ch] BYREF
  std::__shared_weak_count *v25; // [sp+8h] [bp-28h]
  void *v26; // [sp+Ch] [bp-24h]
  _DWORD v27[8]; // [sp+10h] [bp-20h] BYREF

  v2 = (std::__shared_weak_count *)a1[1];
  if ( v2 )
  {
    if ( *((_DWORD *)v2 + 1) != -1 )
    {
      v3 = (std::__shared_weak_count *)std::__shared_weak_count::lock(v2);
      v25 = v3;
      if ( v3 )
      {
        v4 = v3;
        v5 = *a1;
        v24 = (int)v5;
        if ( v5 )
        {
          v27[0] = v5;
          sub_10B6E4(1, "Activate HUD - {:08X}", 21, v27);
        }
        v6 = (unsigned int *)((char *)v4 + 4);
        __dmb(0xBu);
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
        __dmb(0xBu);
        if ( !v7 )
        {
          (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v4 + 8))(v4);
          std::__shared_weak_count::__release_weak(v4);
        }
      }
    }
  }
  if ( dword_263084 )
  {
    if ( *(_DWORD *)(dword_263084 + 4) != -1 )
    {
      v8 = (std::__shared_weak_count *)std::__shared_weak_count::lock((std::__shared_weak_count *)dword_263084);
      v25 = v8;
      if ( v8 )
      {
        v9 = v8;
        v24 = dword_263080;
        if ( dword_263080 )
          (*(void (__fastcall **)(int))(*(_DWORD *)dword_263080 + 12))(dword_263080);
        v10 = (unsigned int *)((char *)v9 + 4);
        __dmb(0xBu);
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        __dmb(0xBu);
        if ( !v11 )
        {
          (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v9 + 8))(v9);
          std::__shared_weak_count::__release_weak(v9);
        }
      }
    }
  }
  v12 = (std::__shared_weak_count *)a1[1];
  if ( !v12 || *((_DWORD *)v12 + 1) == -1 )
  {
    sub_ED4F8(1, "Activate default HUD", 20);
    goto LABEL_34;
  }
  v27[0] = 0;
  v13 = (std::__shared_weak_count *)std::__shared_weak_count::lock(v12);
  v27[1] = v13;
  if ( v13 && (v14 = *a1, (v27[0] = v14) != 0) )
  {
    (*(void (__fastcall **)(int *, const void *))(*(_DWORD *)v14 + 72))(&v24, v14);
    sub_10B7B4(1, "Activate HUD - {}", 17, &v24);
    if ( (unsigned __int8)v24 << 31 )
      operator delete(v26);
    (*(void (__fastcall **)(const void *, _DWORD))(*(_DWORD *)v14 + 20))(
      v14,
      (float)*(int *)(dword_23DF24 + 10471684) / 1620.0);
    (*(void (__fastcall **)(const void *, float, float))(*(_DWORD *)v14 + 28))(
      v14,
      (float)*(int *)(dword_23DF24 + 10471680),
      (float)*(int *)(dword_23DF24 + 10471684));
    v15 = j___dynamic_cast(
            v14,
            (const struct __class_type_info *)&`typeinfo for'ICustomHud,
            (const struct __class_type_info *)&`typeinfo for'IBgHud,
            0);
    if ( v15 )
    {
      v16 = v15;
      v17 = sub_10B56C();
      (*(void (__fastcall **)(void *, int))(*(_DWORD *)v16 + 76))(v16, v17);
    }
    (*(void (__fastcall **)(const void *))(*(_DWORD *)v14 + 8))(v14);
  }
  else
  {
    sub_ED4F8(1, "Activate default HUD", 20);
    if ( !v13 )
      goto LABEL_34;
  }
  v18 = (unsigned int *)((char *)v13 + 4);
  __dmb(0xBu);
  do
    v19 = __ldrex(v18);
  while ( __strex(v19 - 1, v18) );
  __dmb(0xBu);
  if ( !v19 )
  {
    (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v13 + 8))(v13);
    std::__shared_weak_count::__release_weak(v13);
  }
LABEL_34:
  v20 = *(_QWORD *)a1;
  if ( a1[1] )
  {
    v21 = (unsigned int *)(HIDWORD(v20) + 8);
    do
      v22 = __ldrex(v21);
    while ( __strex(v22 + 1, v21) );
  }
  dword_263080 = v20;
  LODWORD(v20) = dword_263084;
  dword_263084 = HIDWORD(v20);
  if ( (_DWORD)v20 )
    LODWORD(v20) = std::__shared_weak_count::__release_weak((std::__shared_weak_count *)v20);
  return v20;
}


// ======================================================================
