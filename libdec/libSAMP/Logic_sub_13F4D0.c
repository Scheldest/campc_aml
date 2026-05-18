// ADDR: 0x105f20
// SYMBOL: sub_105F20
unsigned int __fastcall sub_105F20(int a1, __int16 *a2)
{
  __int16 v4; // r10
  int v5; // r0
  __int64 v6; // kr00_8
  _DWORD **v7; // r11
  unsigned int v8; // r6
  unsigned int v9; // r1
  bool v10; // cc
  int v11; // r1
  int v12; // r0
  int v13; // r0
  _DWORD *v14; // r1
  _DWORD *v15; // r2
  int v16; // r0
  _DWORD *v17; // r1
  _DWORD *v18; // r2
  int v19; // r0
  _DWORD *v20; // r1
  _DWORD *v21; // r2
  bool v22; // zf
  bool v23; // zf
  bool v25; // zf

  v4 = -1;
  if ( !dword_23DEF4 )
    goto LABEL_35;
  v5 = *(_DWORD *)(a1 + 92);
  if ( !v5 )
    goto LABEL_35;
  v6 = *(_QWORD *)*(_DWORD *)(dword_23DEF4 + 944);
  v7 = (_DWORD **)(HIDWORD(v6) + 60000);
  v8 = (unsigned __int8)*(_DWORD *)(v5 + 1896);
  v9 = *(_DWORD *)(v5 + 1896) & 0xFE;
  v10 = v9 > 0x32;
  if ( v9 != 50 )
    v10 = v8 > 0x2A;
  if ( !v10 )
  {
    v11 = *(_DWORD *)(v5 + 1900);
    if ( v11 )
    {
      v12 = sub_148F74(v6, v11, 0);
      if ( v12 != 0xFFFF )
        goto LABEL_46;
      v13 = *(_DWORD *)(*(_DWORD *)(a1 + 92) + 1900);
      if ( v13 )
      {
        v15 = *(_DWORD **)(HIDWORD(v6) + 60004);
        v14 = *v7;
        if ( *v7 != v15 )
        {
          while ( *(_DWORD *)(HIDWORD(v6) + 4 * *v14 + 8000) != v13 )
          {
            if ( ++v14 == v15 )
              goto LABEL_35;
          }
        }
        v22 = v14 == v15;
        if ( v14 != v15 )
          v22 = *(unsigned __int16 *)v14 == 0xFFFF;
        if ( !v22 )
        {
          v12 = sub_148F74(v6, *(_DWORD *)(v13 + 1124), 0);
          if ( v12 != 0xFFFF )
            goto LABEL_46;
        }
      }
    }
    goto LABEL_35;
  }
  if ( v8 == 54 )
  {
    v19 = *(_DWORD *)(v5 + 1900);
    if ( !v19 )
      goto LABEL_35;
    v21 = *(_DWORD **)(HIDWORD(v6) + 60004);
    v20 = *v7;
    if ( *v7 != v21 )
    {
      while ( *(_DWORD *)(HIDWORD(v6) + 4 * *v20 + 8000) != v19 )
      {
        ++v20;
        v8 = 54;
        if ( v20 == v21 )
          goto LABEL_36;
      }
    }
    v25 = v20 == v21;
    if ( v20 != v21 )
      v25 = *(unsigned __int16 *)v20 == 0xFFFF;
    if ( v25 )
    {
      v8 = 54;
      goto LABEL_36;
    }
    v12 = sub_148F74(v6, *(_DWORD *)(v19 + 1124), 0);
    if ( v12 == 0xFFFF )
      goto LABEL_35;
    v8 = 54;
LABEL_46:
    v4 = v12;
    goto LABEL_36;
  }
  if ( v8 != 53 )
  {
    if ( v8 == 49 )
    {
      v16 = *(_DWORD *)(v5 + 1900);
      if ( v16 )
      {
        v18 = *(_DWORD **)(HIDWORD(v6) + 60004);
        v17 = *v7;
        if ( *v7 != v18 )
        {
          while ( *(_DWORD *)(HIDWORD(v6) + 4 * *v17 + 8000) != v16 )
          {
            if ( ++v17 == v18 )
              goto LABEL_35;
          }
        }
        v23 = v17 == v18;
        if ( v17 != v18 )
          v23 = *(unsigned __int16 *)v17 == 0xFFFF;
        if ( !v23 )
        {
          v12 = sub_148F74(v6, *(_DWORD *)(v16 + 1124), 0);
          if ( v12 != 0xFFFF )
          {
            v8 = 49;
            goto LABEL_46;
          }
        }
      }
    }
LABEL_35:
    v8 = 255;
  }
LABEL_36:
  *a2 = v4;
  return v8;
}


// ======================================================================
