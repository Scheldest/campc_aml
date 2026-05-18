// ADDR: 0x162c60
// SYMBOL: sub_162C60
int __fastcall sub_162C60(llmo::mem *a1)
{
  int v2; // r0
  int v3; // r4
  llmo::mem *v4; // r0
  unsigned int v5; // r6
  llmo::mem *v6; // r0
  llmo::mem::prot *v7; // r5
  unsigned int v8; // r0
  bool v9; // r3
  llmo::mem *v10; // r0
  int v11; // r0

  v2 = -llmo::mem::pageSize(a1);
  v3 = (unsigned int)a1 & v2;
  v4 = (llmo::mem *)llmo::mem::pageSize((llmo::mem *)v2);
  if ( (unsigned int)v4 <= 0x2000 )
  {
    v5 = 0;
    do
    {
      v6 = (llmo::mem *)llmo::mem::pageSize(v4);
      v7 = (llmo::mem::prot *)(v3 - (_DWORD)v6);
      v8 = llmo::mem::pageSize(v6);
      v10 = (llmo::mem *)llmo::mem::prot::get(v7, v8, 0, v9);
      if ( (int)v10 >= 1 )
      {
        v10 = (llmo::mem *)llmo::mem::pageSize(v10);
        v3 -= (int)v10;
      }
      v11 = llmo::mem::pageSize(v10);
      v4 = (llmo::mem *)sub_220A6C(0x2000, v11);
      ++v5;
    }
    while ( v5 < (unsigned int)v4 );
  }
  return v3;
}


// ======================================================================
// ADDR: 0x162cb8
// SYMBOL: sub_162CB8
int __fastcall sub_162CB8(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // r5
  int v5; // r9
  llmo::mem::prot *v6; // r4
  llmo::mem::prot *v7; // r0
  bool v8; // zf
  bool v9; // r3
  llmo::mem::prot *v10; // r0
  __int64 v13; // [sp+8h] [bp-40h] BYREF
  __int64 v14; // [sp+10h] [bp-38h]

  if ( a3 != a2 )
  {
    v3 = a3;
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      v7 = (llmo::mem::prot *)*v3;
      if ( *v3 )
      {
        v8 = (*v3 & 1) == 0;
        if ( ((unsigned __int8)v7 & 1) != 0 )
          v8 = v6 == v7;
        if ( !v8 )
        {
          v13 = 0LL;
          v14 = 0LL;
          dladdr(*v3, &v13);
          if ( HIDWORD(v13) | HIDWORD(v14) )
          {
            v10 = (llmo::mem::prot *)*v3;
            if ( (!HIDWORD(v14) || HIDWORD(v14) <= (unsigned int)v10)
              && (llmo::mem::prot::get(v10, (char *)&dword_0 + 1, 0, v9) & 4) != 0 )
            {
              if ( v5 > 63 )
                return v5;
              (*(void (__fastcall **)(int, _DWORD, __int64 *, _DWORD))(*(_DWORD *)a1 + 12))(a1, *v3, &v13, 0);
              v6 = (llmo::mem::prot *)*v3;
              ++v5;
            }
          }
        }
      }
      if ( --v3 == a2 )
        return v5;
    }
  }
  return 0;
}


// ======================================================================
// ADDR: 0x162d58
// SYMBOL: sub_162D58
int __fastcall sub_162D58(int a1, void *a2, int a3, int *a4, int *a5, int *a6, int *a7, int *a8)
{
  int *v12; // r4
  int v13; // r3
  int v14; // r2
  unsigned int v15; // r2
  int v16; // r1
  int v17; // r5
  int v18; // r0
  int v19; // r6
  int v20; // r10
  unsigned int v21; // r0
  char *v22; // r1
  int v23; // r2
  int v25; // [sp+4h] [bp-6Ch]
  int v26; // [sp+1Ch] [bp-54h] BYREF
  _BYTE v27[4]; // [sp+24h] [bp-4Ch] BYREF
  _DWORD v28[18]; // [sp+28h] [bp-48h] BYREF

  sub_F06B2((int)v27);
  v12 = sub_F0734();
  if ( !(*(unsigned __int8 *)v12 << 31) )
  {
    *(_WORD *)v12 = 0;
LABEL_4:
    v15 = 9;
    goto LABEL_6;
  }
  *(_BYTE *)v12[2] = 0;
  v13 = *(unsigned __int8 *)v12;
  v14 = *v12;
  v12[1] = 0;
  if ( !(v13 << 31) )
    goto LABEL_4;
  v15 = (v14 - 2) & 0xFFFFFFFE;
LABEL_6:
  v16 = *a4;
  v17 = *a8;
  v18 = *a5;
  v19 = *a7;
  v20 = *a6;
  v28[9] = 0;
  v28[7] = 0;
  v28[8] = v17;
  v28[5] = 0;
  v28[6] = v19;
  v28[2] = v18;
  v28[3] = 0;
  v28[4] = v20;
  v28[0] = v16;
  v28[1] = 0;
  sub_DCA40(&v26, (int)v12, v15, a2, a3, v25, (int)"destroyEPNS_11__tree_nodeIS8_PvEE", 0, (int)v28, 0);
  v21 = *(unsigned __int8 *)v12;
  v22 = (char *)v12[2];
  v23 = v12[1];
  if ( (v21 & 1) == 0 )
  {
    v22 = (char *)v12 + 1;
    v23 = v21 >> 1;
  }
  sub_ED4F8(a1, v22, v23);
  return sub_F0720((int)v27);
}


// ======================================================================
// ADDR: 0x162e5c
// SYMBOL: sub_162E5C
int __fastcall sub_162E5C(int a1, void *a2, int a3, int *a4, _DWORD *a5)
{
  int *v9; // r4
  int v10; // r3
  int v11; // r1
  unsigned int v12; // r2
  int v13; // r1
  unsigned int v14; // r0
  char *v15; // r1
  int v16; // r2
  int v18; // [sp+4h] [bp-4Ch]
  int v19; // [sp+1Ch] [bp-34h] BYREF
  _BYTE v20[4]; // [sp+24h] [bp-2Ch] BYREF
  _DWORD v21[10]; // [sp+28h] [bp-28h] BYREF

  sub_F06B2((int)v20);
  v9 = sub_F0734();
  if ( !(*(unsigned __int8 *)v9 << 31) )
  {
    *(_WORD *)v9 = 0;
LABEL_4:
    v12 = 9;
    goto LABEL_6;
  }
  *(_BYTE *)v9[2] = 0;
  v10 = *(unsigned __int8 *)v9;
  v11 = *v9;
  v9[1] = 0;
  if ( !(v10 << 31) )
    goto LABEL_4;
  v12 = (v11 - 2) & 0xFFFFFFFE;
LABEL_6:
  v13 = *a4;
  v21[2] = *a5;
  v21[3] = 0;
  v21[0] = v13;
  v21[1] = 0;
  sub_DCA40(&v19, (int)v9, v12, a2, a3, v18, 18, 0, (int)v21, 0);
  v14 = *(unsigned __int8 *)v9;
  v15 = (char *)v9[2];
  v16 = v9[1];
  if ( (v14 & 1) == 0 )
  {
    v15 = (char *)v9 + 1;
    v16 = v14 >> 1;
  }
  sub_ED4F8(a1, v15, v16);
  return sub_F0720((int)v20);
}


// ======================================================================
