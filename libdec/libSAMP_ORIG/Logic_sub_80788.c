// ADDR: 0x861b8
// SYMBOL: sub_861B8
bool sub_861B8()
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
  int v9; // r6
  int v10; // r4
  int v12; // r1
  _DWORD *v13; // r0

  v0 = (unsigned __int8)byte_1ABE60;
  if ( !byte_1ABE60 )
  {
    sub_80664("[dbg:render:init] : module initializing...");
    v1 = dword_1ABE64;
    v2 = dword_1ABE68;
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
    dword_1ABE68 = v1;
    v5 = dword_1ABE70;
    v6 = dword_1ABE74;
    while ( 1 )
    {
      if ( v6 == v5 )
      {
        dword_1ABE74 = v5;
        v9 = dword_1ABE7C;
        v10 = dword_1ABE80;
        if ( dword_1ABE80 == dword_1ABE7C )
        {
LABEL_17:
          dword_1ABE80 = v9;
          sub_80664("[dbg:render:init] : module initialized");
          byte_1ABE60 = 1;
          return v0 == 0;
        }
        while ( 2 )
        {
          v13 = *(_DWORD **)(v10 - 8);
          v10 -= 24;
          if ( (_DWORD *)v10 != v13 )
          {
            if ( v13 )
            {
              v12 = 5;
LABEL_20:
              (*(void (**)(void))(*v13 + 4 * v12))();
            }
            if ( v10 == v9 )
              goto LABEL_17;
            continue;
          }
          break;
        }
        v12 = 4;
        goto LABEL_20;
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
// ADDR: 0x863a4
// SYMBOL: sub_863A4
int __fastcall sub_863A4(int *a1)
{
  int v2; // r4
  int **v3; // r1
  int v4; // r5
  unsigned int v5; // r0
  _DWORD *v6; // r0
  int *v7; // r1
  int v8; // r0
  int *v9; // r4

  if ( !byte_1ABE60 )
    return -1;
  v2 = dword_1ABE68;
  if ( dword_1ABE68 == dword_1ABE64 )
  {
LABEL_7:
    if ( dword_1ABE68 >= (unsigned int)dword_1ABE6C )
    {
      sub_7FB88((void **)&dword_1ABE64, a1);
      v8 = dword_1ABE68;
      return -1431655765 * ((v8 - dword_1ABE64) >> 3) - 1;
    }
    v6 = a1 + 4;
    v7 = (int *)a1[4];
    if ( v7 )
    {
      if ( a1 == v7 )
      {
        *(_DWORD *)(dword_1ABE68 + 16) = dword_1ABE68;
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*v6 + 12))(*v6, v2);
        goto LABEL_20;
      }
      *(_DWORD *)(dword_1ABE68 + 16) = v7;
    }
    else
    {
      v6 = (_DWORD *)(dword_1ABE68 + 16);
    }
    *v6 = 0;
LABEL_20:
    v8 = v2 + 24;
    dword_1ABE68 = v2 + 24;
    return -1431655765 * ((v8 - dword_1ABE64) >> 3) - 1;
  }
  v3 = (int **)(dword_1ABE64 + 16);
  v4 = 0;
  v5 = (dword_1ABE68 - dword_1ABE64) / 24;
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
// ADDR: 0x86490
// SYMBOL: sub_86490
int __fastcall sub_86490(int *a1)
{
  int v2; // r4
  int **v3; // r1
  int v4; // r5
  unsigned int v5; // r0
  _DWORD *v6; // r0
  int *v7; // r1
  int v8; // r0
  int *v9; // r4

  if ( !byte_1ABE60 )
    return -1;
  v2 = dword_1ABE74;
  if ( dword_1ABE74 == dword_1ABE70 )
  {
LABEL_7:
    if ( dword_1ABE74 >= (unsigned int)dword_1ABE78 )
    {
      sub_7FB88((void **)&dword_1ABE70, a1);
      v8 = dword_1ABE74;
      return -1431655765 * ((v8 - dword_1ABE70) >> 3) - 1;
    }
    v6 = a1 + 4;
    v7 = (int *)a1[4];
    if ( v7 )
    {
      if ( a1 == v7 )
      {
        *(_DWORD *)(dword_1ABE74 + 16) = dword_1ABE74;
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*v6 + 12))(*v6, v2);
        goto LABEL_20;
      }
      *(_DWORD *)(dword_1ABE74 + 16) = v7;
    }
    else
    {
      v6 = (_DWORD *)(dword_1ABE74 + 16);
    }
    *v6 = 0;
LABEL_20:
    v8 = v2 + 24;
    dword_1ABE74 = v2 + 24;
    return -1431655765 * ((v8 - dword_1ABE70) >> 3) - 1;
  }
  v3 = (int **)(dword_1ABE70 + 16);
  v4 = 0;
  v5 = (dword_1ABE74 - dword_1ABE70) / 24;
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
// ADDR: 0x8657c
// SYMBOL: sub_8657C
int __fastcall sub_8657C(int *a1)
{
  int v2; // r4
  int **v3; // r1
  int v4; // r5
  unsigned int v5; // r0
  _DWORD *v6; // r0
  int *v7; // r1
  int v8; // r0
  int *v9; // r4

  if ( !byte_1ABE60 )
    return -1;
  v2 = dword_1ABE80;
  if ( dword_1ABE80 == dword_1ABE7C )
  {
LABEL_7:
    if ( dword_1ABE80 >= (unsigned int)dword_1ABE84 )
    {
      sub_7FB88((void **)&dword_1ABE7C, a1);
      v8 = dword_1ABE80;
      return -1431655765 * ((v8 - dword_1ABE7C) >> 3) - 1;
    }
    v6 = a1 + 4;
    v7 = (int *)a1[4];
    if ( v7 )
    {
      if ( a1 == v7 )
      {
        *(_DWORD *)(dword_1ABE80 + 16) = dword_1ABE80;
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*v6 + 12))(*v6, v2);
        goto LABEL_20;
      }
      *(_DWORD *)(dword_1ABE80 + 16) = v7;
    }
    else
    {
      v6 = (_DWORD *)(dword_1ABE80 + 16);
    }
    *v6 = 0;
LABEL_20:
    v8 = v2 + 24;
    dword_1ABE80 = v2 + 24;
    return -1431655765 * ((v8 - dword_1ABE7C) >> 3) - 1;
  }
  v3 = (int **)(dword_1ABE7C + 16);
  v4 = 0;
  v5 = (dword_1ABE80 - dword_1ABE7C) / 24;
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
