// ADDR: 0x105a58
// SYMBOL: sub_105A58
int __fastcall sub_105A58(int a1)
{
  int v2; // r0
  __int16 v3; // r9
  int v4; // r0
  __int16 v5; // r2
  int v6; // r0
  int v7; // r1
  void (__fastcall *v8)(int, int, _DWORD *, _DWORD *, int, int, int, int, int); // r5
  int v9; // r0
  _DWORD *v10; // r2
  _DWORD *v11; // r3
  int result; // r0
  int v13; // [sp+0h] [bp-50h]
  int v14; // [sp+4h] [bp-4Ch]
  int v15; // [sp+8h] [bp-48h]
  int v16; // [sp+Ch] [bp-44h]
  int v17; // [sp+10h] [bp-40h]
  char v18; // [sp+14h] [bp-3Ch]
  _DWORD v19[3]; // [sp+1Ch] [bp-34h] BYREF
  _DWORD v20[10]; // [sp+28h] [bp-28h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 96);
  if ( v2 )
  {
    v18 = *(_BYTE *)dword_2402D0;
    *(_BYTE *)dword_2402D0 = sub_F8224(v2);
    v3 = *(_WORD *)dword_2402DC;
    v4 = sub_F8224(*(unsigned __int8 *)(a1 + 96));
    v5 = v4 - 4;
    if ( v4 != 4 )
      v5 = v4;
    *(_WORD *)dword_2402DC = v5;
    sub_F82C8();
    sub_F82F8(*(unsigned __int8 *)(a1 + 96));
    sub_F8280();
    sub_F8230(*(unsigned __int8 *)(a1 + 96));
    sub_F83C8();
    sub_F8400(*(unsigned __int8 *)(a1 + 96));
  }
  else
  {
    v3 = 0;
    v18 = 0;
  }
  v6 = *(unsigned __int8 *)(a1 + 12);
  dword_25C9E0 = a1;
  if ( v6 )
    v6 = a1 + 16;
  dword_25C9E4 = v6;
  memset(v20, 0, 12);
  memset(v19, 0, sizeof(v19));
  if ( sub_104648(a1, &dword_25C9E0) == 34 )
  {
    v7 = *(_DWORD *)(a1 + 92);
    v8 = (void (__fastcall *)(int, int, _DWORD *, _DWORD *, int, int, int, int, int))(dword_23DF24 + 6149873);
    if ( v7 )
    {
      v9 = v7 + 28 * *(unsigned __int8 *)(v7 + 1820) + 1444;
    }
    else
    {
      v9 = 0;
      v7 = 0;
    }
    v10 = 0;
    v11 = 0;
  }
  else
  {
    sub_105BD0(a1, 0, v20, v19);
    v7 = *(_DWORD *)(a1 + 92);
    if ( v7 )
      v9 = v7 + 28 * *(unsigned __int8 *)(v7 + 1820) + 1444;
    else
      v9 = 0;
    v17 = 1;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v8 = (void (__fastcall *)(int, int, _DWORD *, _DWORD *, int, int, int, int, int))(dword_23DF24 + 6144297);
    v10 = v20;
    v11 = v19;
  }
  v8(v9, v7, v10, v11, v13, v14, v15, v16, v17);
  result = *(unsigned __int8 *)(a1 + 96);
  dword_25C9E4 = 0;
  dword_25C9E0 = 0;
  if ( result )
  {
    *(_BYTE *)dword_2402D0 = v18;
    *(_WORD *)dword_2402DC = v3;
    sub_F8298();
    sub_F8268();
    return sub_F8390();
  }
  return result;
}


// ======================================================================
// ADDR: 0x1490ce
// SYMBOL: sub_1490CE
_DWORD *__fastcall sub_1490CE(int a1)
{
  int v1; // r8
  int v2; // r6
  int i; // r5
  _DWORD *result; // r0
  int v5; // r4

  v1 = a1 + 5064;
  v2 = a1 + 4020;
  for ( i = 0; i != 1004; ++i )
  {
    result = (_DWORD *)*(unsigned __int8 *)(v2 + i);
    if ( *(_BYTE *)(v2 + i) )
    {
      result = *(_DWORD **)(v2 + 4 * i - 4016);
      if ( result )
      {
        result = (_DWORD *)*result;
        if ( result )
        {
          v5 = result[74];
          if ( v5 )
          {
            result = (_DWORD *)sub_104108(result[74]);
            if ( !result )
            {
              *(_BYTE *)(v1 + i) = sub_F8EF0(v5);
              result = sub_F8EC0(v5, 1);
            }
          }
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x14912c
// SYMBOL: sub_14912C
_DWORD *__fastcall sub_14912C(int a1)
{
  int v1; // r8
  int v2; // r6
  int i; // r5
  _DWORD *result; // r0
  int v5; // r4

  v1 = a1 + 5064;
  v2 = a1 + 4020;
  for ( i = 0; i != 1004; ++i )
  {
    result = (_DWORD *)*(unsigned __int8 *)(v2 + i);
    if ( *(_BYTE *)(v2 + i) )
    {
      result = *(_DWORD **)(v2 + 4 * i - 4016);
      if ( result )
      {
        result = (_DWORD *)*result;
        if ( result )
        {
          v5 = result[74];
          if ( v5 )
          {
            result = (_DWORD *)sub_104108(result[74]);
            if ( !result )
              result = sub_F8EC0(v5, *(unsigned __int8 *)(v1 + i));
          }
        }
      }
    }
  }
  return result;
}


// ======================================================================
