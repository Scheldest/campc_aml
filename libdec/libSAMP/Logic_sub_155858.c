// ADDR: 0x155a20
// SYMBOL: sub_155A20
int *__fastcall sub_155A20(int *a1, int a2)
{
  int v2; // r5
  char *v5; // r0
  int v6; // r9
  unsigned int *v7; // r0
  unsigned int *v8; // r0
  unsigned int v9; // r1
  char *v10; // r6
  int v11; // r5
  int v12; // r0
  std::__shared_weak_count *v13; // r6
  unsigned int *v14; // r0
  unsigned int v15; // r1
  unsigned int *v16; // r0
  unsigned int v17; // r1
  std::__shared_weak_count *v19; // [sp+10h] [bp-288h]
  _DWORD *v20; // [sp+14h] [bp-284h] BYREF
  unsigned int *v21; // [sp+18h] [bp-280h]
  _BYTE v22[608]; // [sp+1Ch] [bp-27Ch] BYREF
  _BYTE v23[28]; // [sp+27Ch] [bp-1Ch] BYREF

  v2 = *a1;
  v5 = (char *)a1 + *(_DWORD *)(*a1 - 12);
  v6 = *((_DWORD *)v5 + 3);
  *((_DWORD *)v5 + 3) = 0;
  v7 = (unsigned int *)operator new(0x14u);
  v7[2] = 0;
  *v7 = (unsigned int)&off_22F498;
  v7[4] = (unsigned int)a1;
  v7[3] = (unsigned int)&off_22F4C0;
  v19 = (std::__shared_weak_count *)v7;
  v20 = v7 + 3;
  v21 = v7;
  v7[1] = 0;
  v8 = v7 + 1;
  do
    v9 = __ldrex(v8);
  while ( __strex(v9 + 1, v8) );
  v10 = (char *)a1 + *(_DWORD *)(v2 - 12);
  v11 = *((_DWORD *)v10 + 19);
  if ( v11 == -1 )
  {
    std::ios_base::getloc((std::ios_base *)v23);
    v12 = std::locale::use_facet((std::locale *)v23, (std::locale::id *)&std::ctype<char>::id);
    v11 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v12 + 28))(v12, 32);
    std::locale::~locale((std::locale *)v23);
    *((_DWORD *)v10 + 19) = v11;
  }
  sub_156334(v22, &v20, (unsigned __int8)v11, 0);
  v13 = (std::__shared_weak_count *)v21;
  if ( v21 )
  {
    v14 = v21 + 1;
    __dmb(0xBu);
    do
      v15 = __ldrex(v14);
    while ( __strex(v15 - 1, v14) );
    __dmb(0xBu);
    if ( !v15 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v13 + 8))(v13);
      std::__shared_weak_count::__release_weak(v13);
    }
  }
  if ( v19 )
  {
    v16 = (unsigned int *)((char *)v19 + 4);
    __dmb(0xBu);
    do
      v17 = __ldrex(v16);
    while ( __strex(v17 - 1, v16) );
    __dmb(0xBu);
    if ( !v17 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v19 + 8))(v19);
      std::__shared_weak_count::__release_weak(v19);
    }
  }
  sub_156414(v22, a2, v6 > 0, 0, v6 & ~(v6 >> 31), 0);
  sub_156A98(v22);
  return a1;
}


// ======================================================================
