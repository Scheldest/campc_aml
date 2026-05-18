// ADDR: 0x109e84
// SYMBOL: sub_109E84
int __fastcall sub_109E84(int a1, int a2, __int64 a3)
{
  int v3; // r7
  unsigned int v4; // r5
  int v6; // r6
  unsigned int v8; // r6
  unsigned int v9; // r5
  unsigned int v10; // r10
  _DWORD *v11; // r0
  unsigned int v12; // r4
  int v13; // r5
  int v14; // r2
  int v15; // r2
  int v16; // r2
  int v17; // r2
  int v18; // r2
  int v19; // r2
  int v20; // r2
  int v21; // r2
  int v22; // r2
  int v23; // r2
  int v24; // r2
  int v25; // r2
  int v26; // r2
  int v27; // r2
  int v28; // r2
  unsigned int v29; // r4
  _DWORD *v30; // r0
  int v31; // r2
  _DWORD *v32; // r2
  int v33; // r2
  int v34; // r0
  int v35; // r1
  _BOOL4 v36; // r0
  int v37; // [sp+4h] [bp-2Ch]
  int v38; // [sp+8h] [bp-28h] BYREF
  _DWORD *v39; // [sp+Ch] [bp-24h] BYREF
  int *v40; // [sp+10h] [bp-20h] BYREF

  v3 = HIDWORD(a3);
  v4 = a3;
  if ( a2 == 5 )
  {
    v6 = 2;
    if ( !a3 && !sub_10AB7C(a1, 13, &v38) )
    {
      sub_10ABD4(a1, 13, v38 + 4);
      return 2;
    }
    return v6;
  }
  if ( a2 != 1 )
  {
    if ( a2 )
    {
      fprintf((FILE *)((char *)&_sF + 168), "libunwind: %s - %s\n", "_Unwind_VRS_Pop", "unsupported register class");
      fflush((FILE *)((char *)&_sF + 168));
      abort();
    }
    v6 = 2;
    if ( HIDWORD(a3) )
      return v6;
    if ( !sub_10AB7C(a1, 13, &v40) )
    {
      if ( (v4 & 1) == 0 || (v14 = *v40, ++v40, !sub_10ABD4(a1, 0, v14)) )
      {
        if ( (v4 & 2) == 0 || (v15 = *v40, ++v40, !sub_10ABD4(a1, 1, v15)) )
        {
          if ( (v4 & 4) != 0 )
          {
            v6 = 2;
            v16 = *v40++;
            if ( sub_10ABD4(a1, 2, v16) )
              return v6;
          }
          if ( (v4 & 8) == 0 || (v17 = *v40, ++v40, !sub_10ABD4(a1, 3, v17)) )
          {
            if ( (v4 & 0x10) == 0 || (v18 = *v40, ++v40, !sub_10ABD4(a1, 4, v18)) )
            {
              if ( (v4 & 0x20) == 0 || (v19 = *v40, ++v40, !sub_10ABD4(a1, 5, v19)) )
              {
                if ( (v4 & 0x40) == 0 || (v20 = *v40, ++v40, !sub_10ABD4(a1, 6, v20)) )
                {
                  if ( (v4 & 0x80) == 0 || (v21 = *v40, ++v40, !sub_10ABD4(a1, 7, v21)) )
                  {
                    if ( (v4 & 0x100) == 0 || (v22 = *v40, ++v40, !sub_10ABD4(a1, 8, v22)) )
                    {
                      if ( (v4 & 0x200) == 0 || (v23 = *v40, ++v40, !sub_10ABD4(a1, 9, v23)) )
                      {
                        if ( (v4 & 0x400) == 0 || (v24 = *v40, ++v40, !sub_10ABD4(a1, 10, v24)) )
                        {
                          if ( (v4 & 0x800) == 0 || (v25 = *v40, ++v40, !sub_10ABD4(a1, 11, v25)) )
                          {
                            if ( (v4 & 0x1000) == 0 || (v26 = *v40, ++v40, !sub_10ABD4(a1, 12, v26)) )
                            {
                              if ( (v4 & 0x2000) == 0 || (v27 = *v40, ++v40, !sub_10ABD4(a1, 13, v27)) )
                              {
                                if ( (v4 & 0x4000) == 0 || (v28 = *v40, ++v40, v6 = 2, !sub_10ABD4(a1, 14, v28)) )
                                {
                                  if ( (v4 & 0x8000) != 0 )
                                  {
                                    v33 = *v40++;
                                    v34 = sub_10ABD4(a1, 15, v33);
                                    v35 = v34 | v4 & 0x2000;
                                    v36 = v34 != 0;
                                    if ( v35 )
                                      return 2 * v36;
LABEL_64:
                                    v36 = sub_10ABD4(a1, 13, v40) != 0;
                                    return 2 * v36;
                                  }
                                  v6 = 0;
                                  if ( (v4 & 0x2000) == 0 )
                                    goto LABEL_64;
                                }
                                return v6;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return 2;
  }
  v6 = 2;
  if ( (HIDWORD(a3) & 0xFFFFFFFB) != 1 )
    return v6;
  v6 = 2;
  if ( sub_10AB7C(a1, 13, &v39) )
    return v6;
  if ( (_WORD)v4 )
  {
    v8 = HIWORD(v4);
    v9 = HIWORD(v4) + (unsigned __int16)v4;
    if ( v3 == 1 )
    {
      v10 = 16 - v8;
      if ( v8 > 0x10 )
        v10 = 0;
      while ( 1 )
      {
        v11 = v39;
        v12 = v9;
        v13 = *v39;
        v39 += 2;
        if ( !v10 )
          break;
        v37 = v11[1];
        sub_10ADE0(a1);
        if ( sub_10AD14(a1, v8 + 256, v13, v37) )
          break;
        ++v8;
        --v10;
        v9 = v12;
        if ( v8 >= v12 )
          goto LABEL_59;
      }
    }
    else
    {
      v29 = 32 - v8;
      if ( v8 > 0x20 )
        v29 = 0;
      while ( 1 )
      {
        v30 = v39;
        v31 = *v39;
        v39 += 2;
        if ( !v29 || sub_10AD14(a1, v8 + 256, v31, v30[1]) )
          break;
        ++v8;
        --v29;
        if ( v8 >= v9 )
          goto LABEL_59;
      }
    }
    return 2;
  }
LABEL_59:
  if ( v3 == 1 )
    v32 = ++v39;
  else
    v32 = v39;
  return 2 * (sub_10ABD4(a1, 13, v32) != 0);
}


// ======================================================================
// ADDR: 0x10ab7c
// SYMBOL: sub_10AB7C
int __fastcall sub_10AB7C(int a1, int a2, _DWORD *a3)
{
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1) )
    return -6542;
  *a3 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 12))(a1, a2);
  return 0;
}


// ======================================================================
// ADDR: 0x10abd4
// SYMBOL: sub_10ABD4
int __fastcall sub_10ABD4(int a1, int a2, int a3)
{
  int v7; // r0
  int v8; // [sp+0h] [bp-38h] BYREF
  int v9; // [sp+10h] [bp-28h]

  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1) )
    return -6542;
  (*(void (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 16))(a1, a2, a3);
  if ( a2 != -1 )
    return 0;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 36))(a1, &v8);
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 52))(a1, 0);
  if ( !v9 )
    return 0;
  v7 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 12))(a1, -2);
  (*(void (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 16))(a1, -2, v9 + v7);
  return 0;
}


// ======================================================================
// ADDR: 0x10ad14
// SYMBOL: sub_10AD14
int __fastcall sub_10AD14(int a1, int a2, int a3, int a4)
{
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1) )
    return -6542;
  (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)a1 + 28))(a1, a2, a3, a4);
  return 0;
}


// ======================================================================
