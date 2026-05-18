// ADDR: 0x95f20
// SYMBOL: sub_95F20
int __fastcall sub_95F20(int a1, int a2)
{
  int *v3; // r5
  int v4; // r1
  int v5; // r0
  _DWORD *v6; // r9
  int v7; // r6
  int v8; // r1
  int (__fastcall *v9)(int, int); // r4
  void *v10; // r0
  const void *v11; // r1
  int v12; // r8
  int v13; // r1
  int v14; // r0
  bool v15; // zf
  int v16; // r0
  __int64 v18; // [sp+0h] [bp-38h]
  int v19; // [sp+8h] [bp-30h]
  int v20; // [sp+Ch] [bp-2Ch]

  if ( 0x1F9BCDu >> a1 << 31 )
  {
    LODWORD(v18) = a1;
    v3 = (int *)(dword_1ACF68 + 6788);
    v4 = dword_536AC[3 * a1 + 2] + dword_1ACF68;
    v5 = *(_DWORD *)(dword_1ACF68 + 6788);
    v6 = (_DWORD *)(v4 + 5400);
    HIDWORD(v18) = *(_DWORD *)(v4 + 5400);
    if ( v5 == *(_DWORD *)(dword_1ACF68 + 6792) )
    {
      v7 = v5 + 1;
      if ( v5 )
        v8 = v5 + v5 / 2;
      else
        v8 = 8;
      if ( v8 > v7 )
        v7 = v8;
      if ( v5 < v7 )
      {
        v9 = off_117248;
        ++*(_DWORD *)(dword_1ACF68 + 880);
        v10 = (void *)v9(12 * v7, dword_1ACF70);
        v11 = (const void *)v3[2];
        v12 = (int)v10;
        if ( v11 )
        {
          j_memcpy(v10, v11, 12 * *v3);
          v14 = v3[2];
          v15 = v14 == 0;
          if ( v14 )
          {
            v13 = dword_1ACF68;
            v15 = dword_1ACF68 == 0;
          }
          if ( !v15 )
            --*(_DWORD *)(v13 + 880);
          off_11724C(v14, dword_1ACF70);
        }
        v5 = *v3;
        v3[1] = v7;
        v3[2] = v12;
      }
    }
    v16 = v3[2] + 12 * v5;
    *(_QWORD *)v16 = v18;
    *(_DWORD *)(v16 + 8) = v19;
    ++*v3;
    *v6 = a2;
  }
  return v20;
}


// ======================================================================
