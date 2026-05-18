// ADDR: 0x7e47c
// SYMBOL: sub_7E47C
int sub_7E47C()
{
  int result; // r0
  int v1; // r0
  int v2; // [sp+4h] [bp-14h] BYREF
  int optval; // [sp+8h] [bp-10h] BYREF

  if ( byte_1A45F3 )
    return 0;
  sub_80664("[sv:dbg:network:init] : module initializing...");
  v1 = socket(2, 2, 17);
  dword_116E00 = v1;
  if ( v1 == -1 )
    return 0;
  optval = 0x10000;
  v2 = 0x200000;
  if ( setsockopt(v1, 1, 7, &optval, 4) == -1 || setsockopt(dword_116E00, 1, 8, &v2, 4) == -1 )
    return 0;
  dword_1A45F4 = 0;
  sub_80664("[sv:dbg:network:init] : module initialized");
  result = 1;
  byte_1A45F3 = 1;
  return result;
}


// ======================================================================
// ADDR: 0x7e534
// SYMBOL: sub_7E534
int sub_7E534()
{
  int result; // r0
  int v1; // r0
  int v2; // r1
  int v3; // r2
  int v4; // r0
  int v5; // r6
  int v6; // r1
  void **v7; // r4
  void *v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r0
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r5
  int v16; // r1
  void **v17; // r4
  void *v18; // r0

  result = (unsigned __int8)byte_1A45F3;
  if ( byte_1A45F3 )
  {
    sub_80664("[sv:dbg:network:free] : module releasing...");
    dword_1A45F4 = 0;
    if ( dword_1A45F8 )
      std::thread::detach((std::thread *)&dword_1A45F8);
    close(dword_116E00);
    dword_116E00 = -1;
    if ( (unsigned __int8)dword_1A4600 << 31 )
    {
      *(_BYTE *)dword_1A4608 = 0;
      dword_1A4604 = 0;
    }
    else
    {
      LOWORD(dword_1A4600) = 0;
    }
    dword_1A460C = 0;
    sub_10967C(dword_1A4610, dword_1A4614 - dword_1A4610);
    sub_10967C(dword_1A461C, dword_1A4620 - dword_1A461C);
    while ( 1 )
    {
      v2 = dword_1A4700;
      __dmb(0xBu);
      v3 = dword_1A4780;
      __dmb(0xBu);
      v4 = dword_1A4680;
      if ( !((dword_1A4680 & ((v2 - v3) >> 31)) + v2 - v3) )
        break;
      v5 = dword_1A4780;
      v6 = dword_1A4684 + 4 * dword_1A4780;
      v7 = *(void ***)(v6 + 128);
      *(_DWORD *)(v6 + 128) = 0;
      if ( v7 )
      {
        v8 = *v7;
        if ( *v7 )
        {
          v7[1] = v8;
          operator delete(v8);
        }
        operator delete(v7);
        v4 = dword_1A4680;
      }
      v1 = v5 + 1 - v4;
      if ( v1 )
        v1 = v5 + 1;
      __dmb(0xBu);
      dword_1A4780 = v1;
    }
    v9 = dword_1A4880;
    __dmb(0xBu);
    v10 = dword_1A4900;
    __dmb(0xBu);
    v11 = dword_1A4800;
    if ( (dword_1A4800 & ((v9 - v10) >> 31)) + v9 - v10 )
    {
      do
      {
        v15 = dword_1A4900;
        v16 = dword_1A4804 + 4 * dword_1A4900;
        v17 = *(void ***)(v16 + 128);
        *(_DWORD *)(v16 + 128) = 0;
        if ( v17 )
        {
          v18 = *v17;
          if ( *v17 )
          {
            v17[1] = v18;
            operator delete(v18);
          }
          operator delete(v17);
          v11 = dword_1A4800;
        }
        v12 = v15 + 1 - v11;
        if ( v12 )
          v12 = v15 + 1;
        __dmb(0xBu);
        dword_1A4900 = v12;
        v13 = dword_1A4880;
        __dmb(0xBu);
        v14 = dword_1A4900;
        __dmb(0xBu);
        v11 = dword_1A4800;
      }
      while ( (dword_1A4800 & ((v13 - v14) >> 31)) + v13 - v14 );
    }
    sub_80664("[sv:dbg:network:free] : module released");
    result = 0;
    byte_1A45F3 = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x7e9bc
// SYMBOL: sub_7E9BC
int __fastcall sub_7E9BC(int a1)
{
  int v2; // r4
  _DWORD *v3; // r1
  int v4; // r5
  unsigned int v5; // r0
  _DWORD *v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r4

  if ( !byte_1A45F3 )
    return -1;
  v2 = dword_1A4984;
  if ( dword_1A4984 == dword_1A4980 )
  {
LABEL_7:
    if ( dword_1A4984 >= (unsigned int)dword_1A4988 )
    {
      sub_7F678(&dword_1A4980, a1);
      v8 = dword_1A4984;
      return -1431655765 * ((v8 - dword_1A4980) >> 3) - 1;
    }
    v6 = (_DWORD *)(a1 + 16);
    v7 = *(_DWORD *)(a1 + 16);
    if ( v7 )
    {
      if ( a1 == v7 )
      {
        *(_DWORD *)(dword_1A4984 + 16) = dword_1A4984;
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*v6 + 12))(*v6, v2);
        goto LABEL_20;
      }
      *(_DWORD *)(dword_1A4984 + 16) = v7;
    }
    else
    {
      v6 = (_DWORD *)(dword_1A4984 + 16);
    }
    *v6 = 0;
LABEL_20:
    v8 = v2 + 24;
    dword_1A4984 = v2 + 24;
    return -1431655765 * ((v8 - dword_1A4980) >> 3) - 1;
  }
  v3 = (_DWORD *)(dword_1A4980 + 16);
  v4 = 0;
  v5 = (dword_1A4984 - dword_1A4980) / 24;
  if ( v5 <= 1 )
    v5 = 1;
  while ( *v3 )
  {
    ++v4;
    v3 += 6;
    if ( v5 == v4 )
      goto LABEL_7;
  }
  *v3 = 0;
  v9 = *(_DWORD *)(a1 + 16);
  if ( v9 )
  {
    if ( a1 == v9 )
    {
      *v3 = v3 - 4;
      (*(void (__fastcall **)(_DWORD, _DWORD *))(**(_DWORD **)(a1 + 16) + 12))(*(_DWORD *)(a1 + 16), v3 - 4);
      return v4;
    }
    *v3 = v9;
    v3 = (_DWORD *)(a1 + 16);
  }
  *v3 = 0;
  return v4;
}


// ======================================================================
// ADDR: 0x7eaa8
// SYMBOL: sub_7EAA8
int __fastcall sub_7EAA8(int a1)
{
  int v2; // r4
  _DWORD *v3; // r1
  int v4; // r5
  unsigned int v5; // r0
  _DWORD *v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r4

  if ( !byte_1A45F3 )
    return -1;
  v2 = dword_1A4990;
  if ( dword_1A4990 == dword_1A498C )
  {
LABEL_7:
    if ( dword_1A4990 >= (unsigned int)dword_1A4994 )
    {
      sub_7F828(&dword_1A498C, a1);
      v8 = dword_1A4990;
      return -1431655765 * ((v8 - dword_1A498C) >> 3) - 1;
    }
    v6 = (_DWORD *)(a1 + 16);
    v7 = *(_DWORD *)(a1 + 16);
    if ( v7 )
    {
      if ( a1 == v7 )
      {
        *(_DWORD *)(dword_1A4990 + 16) = dword_1A4990;
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*v6 + 12))(*v6, v2);
        goto LABEL_20;
      }
      *(_DWORD *)(dword_1A4990 + 16) = v7;
    }
    else
    {
      v6 = (_DWORD *)(dword_1A4990 + 16);
    }
    *v6 = 0;
LABEL_20:
    v8 = v2 + 24;
    dword_1A4990 = v2 + 24;
    return -1431655765 * ((v8 - dword_1A498C) >> 3) - 1;
  }
  v3 = (_DWORD *)(dword_1A498C + 16);
  v4 = 0;
  v5 = (dword_1A4990 - dword_1A498C) / 24;
  if ( v5 <= 1 )
    v5 = 1;
  while ( *v3 )
  {
    ++v4;
    v3 += 6;
    if ( v5 == v4 )
      goto LABEL_7;
  }
  *v3 = 0;
  v9 = *(_DWORD *)(a1 + 16);
  if ( v9 )
  {
    if ( a1 == v9 )
    {
      *v3 = v3 - 4;
      (*(void (__fastcall **)(_DWORD, _DWORD *))(**(_DWORD **)(a1 + 16) + 12))(*(_DWORD *)(a1 + 16), v3 - 4);
      return v4;
    }
    *v3 = v9;
    v3 = (_DWORD *)(a1 + 16);
  }
  *v3 = 0;
  return v4;
}


// ======================================================================
// ADDR: 0x7eb94
// SYMBOL: sub_7EB94
int __fastcall sub_7EB94(int a1)
{
  int v2; // r4
  _DWORD *v3; // r1
  int v4; // r5
  unsigned int v5; // r0
  _DWORD *v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r4

  if ( !byte_1A45F3 )
    return -1;
  v2 = dword_1A499C;
  if ( dword_1A499C == dword_1A4998 )
  {
LABEL_7:
    if ( dword_1A499C >= (unsigned int)dword_1A49A0 )
    {
      sub_7F9D8(&dword_1A4998, a1);
      v8 = dword_1A499C;
      return -1431655765 * ((v8 - dword_1A4998) >> 3) - 1;
    }
    v6 = (_DWORD *)(a1 + 16);
    v7 = *(_DWORD *)(a1 + 16);
    if ( v7 )
    {
      if ( a1 == v7 )
      {
        *(_DWORD *)(dword_1A499C + 16) = dword_1A499C;
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*v6 + 12))(*v6, v2);
        goto LABEL_20;
      }
      *(_DWORD *)(dword_1A499C + 16) = v7;
    }
    else
    {
      v6 = (_DWORD *)(dword_1A499C + 16);
    }
    *v6 = 0;
LABEL_20:
    v8 = v2 + 24;
    dword_1A499C = v2 + 24;
    return -1431655765 * ((v8 - dword_1A4998) >> 3) - 1;
  }
  v3 = (_DWORD *)(dword_1A4998 + 16);
  v4 = 0;
  v5 = (dword_1A499C - dword_1A4998) / 24;
  if ( v5 <= 1 )
    v5 = 1;
  while ( *v3 )
  {
    ++v4;
    v3 += 6;
    if ( v5 == v4 )
      goto LABEL_7;
  }
  *v3 = 0;
  v9 = *(_DWORD *)(a1 + 16);
  if ( v9 )
  {
    if ( a1 == v9 )
    {
      *v3 = v3 - 4;
      (*(void (__fastcall **)(_DWORD, _DWORD *))(**(_DWORD **)(a1 + 16) + 12))(*(_DWORD *)(a1 + 16), v3 - 4);
      return v4;
    }
    *v3 = v9;
    v3 = (_DWORD *)(a1 + 16);
  }
  *v3 = 0;
  return v4;
}


// ======================================================================
// ADDR: 0x7ec80
// SYMBOL: sub_7EC80
int __fastcall sub_7EC80(int a1)
{
  int v2; // r4
  _DWORD *v3; // r1
  int v4; // r5
  unsigned int v5; // r0
  _DWORD *v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r4

  if ( !byte_1A45F3 )
    return -1;
  v2 = dword_1A49A8;
  if ( dword_1A49A8 == dword_1A49A4 )
  {
LABEL_7:
    if ( dword_1A49A8 >= (unsigned int)dword_1A49AC )
    {
      sub_7FB88(&dword_1A49A4, a1);
      v8 = dword_1A49A8;
      return -1431655765 * ((v8 - dword_1A49A4) >> 3) - 1;
    }
    v6 = (_DWORD *)(a1 + 16);
    v7 = *(_DWORD *)(a1 + 16);
    if ( v7 )
    {
      if ( a1 == v7 )
      {
        *(_DWORD *)(dword_1A49A8 + 16) = dword_1A49A8;
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*v6 + 12))(*v6, v2);
        goto LABEL_20;
      }
      *(_DWORD *)(dword_1A49A8 + 16) = v7;
    }
    else
    {
      v6 = (_DWORD *)(dword_1A49A8 + 16);
    }
    *v6 = 0;
LABEL_20:
    v8 = v2 + 24;
    dword_1A49A8 = v2 + 24;
    return -1431655765 * ((v8 - dword_1A49A4) >> 3) - 1;
  }
  v3 = (_DWORD *)(dword_1A49A4 + 16);
  v4 = 0;
  v5 = (dword_1A49A8 - dword_1A49A4) / 24;
  if ( v5 <= 1 )
    v5 = 1;
  while ( *v3 )
  {
    ++v4;
    v3 += 6;
    if ( v5 == v4 )
      goto LABEL_7;
  }
  *v3 = 0;
  v9 = *(_DWORD *)(a1 + 16);
  if ( v9 )
  {
    if ( a1 == v9 )
    {
      *v3 = v3 - 4;
      (*(void (__fastcall **)(_DWORD, _DWORD *))(**(_DWORD **)(a1 + 16) + 12))(*(_DWORD *)(a1 + 16), v3 - 4);
      return v4;
    }
    *v3 = v9;
    v3 = (_DWORD *)(a1 + 16);
  }
  *v3 = 0;
  return v4;
}


// ======================================================================
// ADDR: 0x80060
// SYMBOL: sub_80060
int sub_80060()
{
  int v0; // r0
  int v1; // r0
  int v2; // r4

  if ( byte_1A49B3 )
    return 0;
  v0 = sub_80664("[sv:dbg:playback:init] : module initializing...");
  if ( !sub_825CC(v0) )
  {
    sub_825FC(1);
    sub_82680(1);
    sub_8268C(100);
    sub_82698(0);
    sub_826A4(0);
  }
  v1 = sub_80664("[sv:dbg:playback:init] : module initialized");
  v2 = 1;
  byte_1A49B3 = 1;
  if ( !sub_800CC(v1) )
  {
    sub_80664("[sv:err:bassinithook] : failed to initializing bass");
    return 0;
  }
  return v2;
}


// ======================================================================
// ADDR: 0x862a4
// SYMBOL: sub_862A4
int sub_862A4()
{
  int result; // r0
  int v1; // r4
  int v2; // r5
  int v3; // r0
  int v4; // r5
  int v5; // r4
  int v6; // r1
  _DWORD *v7; // r0
  int v8; // r4
  int v9; // r6
  int v10; // r1
  _DWORD *v11; // r0
  int v12; // r5
  int v13; // r6
  int v14; // r1
  _DWORD *v15; // r0

  result = (unsigned __int8)byte_1ABE60;
  if ( byte_1ABE60 )
  {
    sub_80664("[dbg:render:free] : module releasing...");
    v1 = dword_1ABE7C;
    v2 = dword_1ABE80;
    while ( v1 != v2 )
    {
      v3 = *(_DWORD *)(v1 + 16);
      if ( v3 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 24))(v3);
      v1 += 24;
    }
    v4 = dword_1ABE64;
    v5 = dword_1ABE68;
    while ( v5 != v4 )
    {
      v7 = *(_DWORD **)(v5 - 8);
      v5 -= 24;
      if ( (_DWORD *)v5 == v7 )
      {
        v6 = 4;
        goto LABEL_9;
      }
      if ( v7 )
      {
        v6 = 5;
LABEL_9:
        (*(void (**)(void))(*v7 + 4 * v6))();
      }
    }
    dword_1ABE68 = v4;
    v8 = dword_1ABE70;
    v9 = dword_1ABE74;
    while ( v9 != v8 )
    {
      v11 = *(_DWORD **)(v9 - 8);
      v9 -= 24;
      if ( (_DWORD *)v9 == v11 )
      {
        v10 = 4;
        goto LABEL_16;
      }
      if ( v11 )
      {
        v10 = 5;
LABEL_16:
        (*(void (**)(void))(*v11 + 4 * v10))();
      }
    }
    v13 = dword_1ABE80;
    v12 = dword_1ABE7C;
    dword_1ABE74 = v8;
    while ( 1 )
    {
      if ( v13 == v12 )
      {
        dword_1ABE80 = v12;
        sub_80664("[dbg:render:free] : module released");
        result = 0;
        byte_1ABE60 = 0;
        return result;
      }
      v15 = *(_DWORD **)(v13 - 8);
      v13 -= 24;
      if ( (_DWORD *)v13 == v15 )
        break;
      if ( v15 )
      {
        v14 = 5;
LABEL_23:
        (*(void (**)(void))(*v15 + 4 * v14))();
      }
    }
    v14 = 4;
    goto LABEL_23;
  }
  return result;
}


// ======================================================================
// ADDR: 0x866cc
// SYMBOL: sub_866CC
bool sub_866CC()
{
  int v0; // r8
  int v1; // r6
  int v2; // r4
  int v3; // r1
  _DWORD *v4; // r0
  int v5; // r5
  int v6; // r4
  int v7; // r1
  _DWORD *v8; // r0

  v0 = (unsigned __int8)byte_1ABE88;
  if ( !byte_1ABE88 )
  {
    sub_80664("[dbg:samp:init] : module initializing...");
    v1 = dword_1ABE8C;
    v2 = dword_1ABE90;
    while ( v2 != v1 )
    {
      v4 = *(_DWORD **)(v2 - 8);
      v2 -= 24;
      if ( (_DWORD *)v2 == v4 )
      {
        v3 = 4;
        goto LABEL_4;
      }
      if ( v4 )
      {
        v3 = 5;
LABEL_4:
        (*(void (**)(void))(*v4 + 4 * v3))();
      }
    }
    dword_1ABE90 = v1;
    v5 = dword_1ABE98;
    v6 = dword_1ABE9C;
    while ( 1 )
    {
      if ( v6 == v5 )
      {
        dword_1ABE9C = v5;
        byte_1ABEA4 = 0;
        sub_80664("[dbg:samp:init] : module initialized");
        byte_1ABE88 = 1;
        return v0 == 0;
      }
      v8 = *(_DWORD **)(v6 - 8);
      v6 -= 24;
      if ( (_DWORD *)v6 == v8 )
        break;
      if ( v8 )
      {
        v7 = 5;
LABEL_11:
        (*(void (**)(void))(*v8 + 4 * v7))();
      }
    }
    v7 = 4;
    goto LABEL_11;
  }
  return v0 == 0;
}


// ======================================================================
// ADDR: 0x8679c
// SYMBOL: sub_8679C
int sub_8679C()
{
  int result; // r0
  __int64 i; // r4
  int v2; // r0
  int v3; // r4
  int v4; // r5
  int v5; // r1
  _DWORD *v6; // r0
  int v7; // r5
  int v8; // r6
  int v9; // r1
  _DWORD *v10; // r0

  result = (unsigned __int8)byte_1ABE88;
  if ( byte_1ABE88 )
  {
    sub_80664("[dbg:samp:free] : module releasing...");
    if ( byte_1ABEA4 )
    {
      for ( i = *(_QWORD *)&dword_1ABE98; (_DWORD)i != HIDWORD(i); LODWORD(i) = i + 24 )
      {
        v2 = *(_DWORD *)(i + 16);
        if ( v2 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 24))(v2);
      }
    }
    v3 = dword_1ABE8C;
    v4 = dword_1ABE90;
    byte_1ABEA4 = 0;
    while ( v4 != v3 )
    {
      v6 = *(_DWORD **)(v4 - 8);
      v4 -= 24;
      if ( (_DWORD *)v4 == v6 )
      {
        v5 = 4;
        goto LABEL_10;
      }
      if ( v6 )
      {
        v5 = 5;
LABEL_10:
        (*(void (**)(void))(*v6 + 4 * v5))();
      }
    }
    v8 = dword_1ABE9C;
    v7 = dword_1ABE98;
    dword_1ABE90 = v3;
    while ( 1 )
    {
      if ( v8 == v7 )
      {
        dword_1ABE9C = v7;
        sub_80664("[dbg:samp:free] : module released");
        result = 0;
        byte_1ABE88 = 0;
        return result;
      }
      v10 = *(_DWORD **)(v8 - 8);
      v8 -= 24;
      if ( (_DWORD *)v8 == v10 )
        break;
      if ( v10 )
      {
        v9 = 5;
LABEL_17:
        (*(void (**)(void))(*v10 + 4 * v9))();
      }
    }
    v9 = 4;
    goto LABEL_17;
  }
  return result;
}


// ======================================================================
// ADDR: 0x86880
// SYMBOL: sub_86880
int __fastcall sub_86880(int *a1)
{
  int v2; // r4
  int **v3; // r1
  int v4; // r5
  unsigned int v5; // r0
  _DWORD *v6; // r0
  int *v7; // r1
  int v8; // r0
  int *v9; // r4

  if ( !byte_1ABE88 )
    return -1;
  v2 = dword_1ABE90;
  if ( dword_1ABE90 == dword_1ABE8C )
  {
LABEL_7:
    if ( dword_1ABE90 >= (unsigned int)dword_1ABE94 )
    {
      sub_7FB88((void **)&dword_1ABE8C, a1);
      v8 = dword_1ABE90;
      return -1431655765 * ((v8 - dword_1ABE8C) >> 3) - 1;
    }
    v6 = a1 + 4;
    v7 = (int *)a1[4];
    if ( v7 )
    {
      if ( a1 == v7 )
      {
        *(_DWORD *)(dword_1ABE90 + 16) = dword_1ABE90;
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*v6 + 12))(*v6, v2);
        goto LABEL_20;
      }
      *(_DWORD *)(dword_1ABE90 + 16) = v7;
    }
    else
    {
      v6 = (_DWORD *)(dword_1ABE90 + 16);
    }
    *v6 = 0;
LABEL_20:
    v8 = v2 + 24;
    dword_1ABE90 = v2 + 24;
    return -1431655765 * ((v8 - dword_1ABE8C) >> 3) - 1;
  }
  v3 = (int **)(dword_1ABE8C + 16);
  v4 = 0;
  v5 = (dword_1ABE90 - dword_1ABE8C) / 24;
  if ( v5 <= 1 )
    v5 = 1;
  while ( *v3 )
  {
    ++v4;
    v3 += 6;
    if ( v5 == v4 )
      goto LABEL_7;
  }
  *v3 = 0;
  v9 = (int *)a1[4];
  if ( v9 )
  {
    if ( a1 == v9 )
    {
      *v3 = (int *)(v3 - 4);
      (*(void (__fastcall **)(int, int **))(*(_DWORD *)a1[4] + 12))(a1[4], v3 - 4);
      return v4;
    }
    *v3 = v9;
    v3 = (int **)(a1 + 4);
  }
  *v3 = 0;
  return v4;
}


// ======================================================================
// ADDR: 0x8696c
// SYMBOL: sub_8696C
int __fastcall sub_8696C(int *a1)
{
  int v2; // r4
  int **v3; // r1
  int v4; // r5
  unsigned int v5; // r0
  _DWORD *v6; // r0
  int *v7; // r1
  int v8; // r0
  int *v9; // r4

  if ( !byte_1ABE88 )
    return -1;
  v2 = dword_1ABE9C;
  if ( dword_1ABE9C == dword_1ABE98 )
  {
LABEL_7:
    if ( dword_1ABE9C >= (unsigned int)dword_1ABEA0 )
    {
      sub_7FB88((void **)&dword_1ABE98, a1);
      v8 = dword_1ABE9C;
      return -1431655765 * ((v8 - dword_1ABE98) >> 3) - 1;
    }
    v6 = a1 + 4;
    v7 = (int *)a1[4];
    if ( v7 )
    {
      if ( a1 == v7 )
      {
        *(_DWORD *)(dword_1ABE9C + 16) = dword_1ABE9C;
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*v6 + 12))(*v6, v2);
        goto LABEL_20;
      }
      *(_DWORD *)(dword_1ABE9C + 16) = v7;
    }
    else
    {
      v6 = (_DWORD *)(dword_1ABE9C + 16);
    }
    *v6 = 0;
LABEL_20:
    v8 = v2 + 24;
    dword_1ABE9C = v2 + 24;
    return -1431655765 * ((v8 - dword_1ABE98) >> 3) - 1;
  }
  v3 = (int **)(dword_1ABE98 + 16);
  v4 = 0;
  v5 = (dword_1ABE9C - dword_1ABE98) / 24;
  if ( v5 <= 1 )
    v5 = 1;
  while ( *v3 )
  {
    ++v4;
    v3 += 6;
    if ( v5 == v4 )
      goto LABEL_7;
  }
  *v3 = 0;
  v9 = (int *)a1[4];
  if ( v9 )
  {
    if ( a1 == v9 )
    {
      *v3 = (int *)(v3 - 4);
      (*(void (__fastcall **)(int, int **))(*(_DWORD *)a1[4] + 12))(a1[4], v3 - 4);
      return v4;
    }
    *v3 = v9;
    v3 = (int **)(a1 + 4);
  }
  *v3 = 0;
  return v4;
}


// ======================================================================
