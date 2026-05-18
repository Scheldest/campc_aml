// ADDR: 0xf6920
// SYMBOL: sub_F6920
int __fastcall sub_F6920(const char *a1, const char *a2)
{
  int v4; // r0
  int v5; // r6
  unsigned __int8 *v6; // r5
  const char *v7; // r4
  const char *v8; // r1

  if ( strcmp(a1, a2) )
  {
    v4 = (unsigned __int8)byte_2402B0;
    __dmb(0xBu);
    if ( !(v4 << 31) && j___cxa_guard_acquire((__guard *)&byte_2402B0) )
    {
      sub_DC6DC(byte_2401F0, "_wad");
      sub_DC6DC(&byte_2401F0[12], "wad");
      sub_DC6DC(&byte_2401F0[24], "_wnd");
      sub_DC6DC(&byte_2401F0[36], "wnd");
      sub_DC6DC(&byte_2401F0[48], "_wdor_f");
      sub_DC6DC(&byte_2401F0[60], "wdor_f");
      sub_DC6DC(&byte_2401F0[72], "_wdor_r");
      sub_DC6DC(&byte_2401F0[84], "wdor_r");
      sub_DC6DC(&byte_2401F0[96], "_wnd_rr");
      sub_DC6DC(&byte_2401F0[108], "wnd_rr");
      sub_DC6DC(&byte_2401F0[120], "_wndfrl");
      sub_DC6DC(&byte_2401F0[132], "wndfrl");
      sub_DC6DC(&byte_2401F0[144], "_wndrrl");
      sub_DC6DC(&byte_2401F0[156], "wndrrl");
      sub_DC6DC(&byte_2401F0[168], "_wsup");
      sub_DC6DC(&byte_2401F0[180], "wsup");
      _cxa_atexit((void (*)(void *))sub_F6854, 0, &off_22A540);
      j___cxa_guard_release((__guard *)&byte_2402B0);
    }
    v5 = 0;
    while ( 1 )
    {
      v6 = &byte_2401F0[v5];
      v7 = *(const char **)&byte_2401F0[v5 + 8];
      if ( !(byte_2401F0[v5] << 31) )
        v7 = (const char *)(v6 + 1);
      if ( strstr(a2, v7) )
      {
        if ( strstr(a1, v7) )
          break;
        v8 = (const char *)*((_DWORD *)v6 + 5);
        if ( !(v6[12] << 31) )
          v8 = (const char *)(v6 + 13);
        if ( !strcmp(a1, v8) )
          break;
      }
      v5 += 24;
      if ( v5 == 192 )
        return 0;
    }
  }
  return 1;
}


// ======================================================================
// ADDR: 0xf6d68
// SYMBOL: sub_F6D68
bool __fastcall sub_F6D68(int a1, unsigned __int8 *a2)
{
  unsigned __int8 *v3; // r10
  unsigned __int8 *v4; // r6
  unsigned int v5; // r0
  unsigned __int8 *v6; // r4
  size_t v7; // r5
  unsigned int v8; // r1
  unsigned int v9; // r0
  unsigned int v10; // r0
  int v11; // r1
  unsigned __int8 *v12; // r9
  int v13; // r8
  unsigned __int8 *v14; // r4
  unsigned __int8 *v15; // r11
  unsigned __int8 *v16; // r6
  __int64 v17; // d16
  int v18; // r0
  unsigned __int8 *v19; // r5
  __int64 v20; // d16
  bool v21; // zf
  int v23; // [sp+8h] [bp-30h] BYREF
  int *v24; // [sp+10h] [bp-28h]
  _DWORD v25[9]; // [sp+14h] [bp-24h] BYREF

  v23 = a1;
  v24 = &v23;
  sub_F7976(v25, &dword_2402C0);
  v24 = &v23;
  v3 = *(unsigned __int8 **)(v25[0] + 20);
  sub_F7976(v25, &dword_2402C0);
  v4 = *(unsigned __int8 **)(v25[0] + 24);
  if ( v3 != v4 )
  {
    v5 = *a2;
    v6 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
    v7 = *((_DWORD *)a2 + 1);
    if ( (v5 & 1) == 0 )
    {
      v6 = a2 + 1;
      v7 = v5 >> 1;
    }
    do
    {
      v8 = *v3;
      v9 = *((_DWORD *)v3 + 1);
      if ( (v8 & 1) == 0 )
        v9 = v8 >> 1;
      if ( v9 == v7 )
      {
        if ( (v8 & 1) != 0 )
        {
          if ( !v7 || !memcmp(*((const void **)v3 + 2), v6, v7) )
            goto LABEL_17;
        }
        else
        {
          if ( !v7 )
            goto LABEL_17;
          v10 = v8 >> 1;
          v11 = 0;
          while ( v3[v11 + 1] == v6[v11] )
          {
            if ( v10 == ++v11 )
              goto LABEL_17;
          }
        }
      }
      v3 += 28;
    }
    while ( v3 != v4 );
    v3 = v4;
  }
LABEL_17:
  v24 = &v23;
  sub_F7976(v25, &dword_2402C0);
  v12 = *(unsigned __int8 **)(v25[0] + 24);
  if ( v3 != v12 )
  {
    v24 = &v23;
    sub_F7976(v25, &dword_2402C0);
    v13 = v25[0];
    v14 = v3 + 28;
    v15 = *(unsigned __int8 **)(v25[0] + 24);
    if ( v3 + 28 == v15 )
    {
      v19 = v3;
    }
    else
    {
      v16 = v3;
      do
      {
        if ( *v16 << 31 )
          operator delete(*((void **)v16 + 2));
        v17 = *(_QWORD *)(v16 + 28);
        v18 = v16[12] << 31;
        *((_DWORD *)v16 + 2) = *((_DWORD *)v16 + 9);
        *((_WORD *)v16 + 14) = 0;
        *(_QWORD *)v16 = v17;
        if ( v18 )
          operator delete(*((void **)v16 + 5));
        v19 = v16 + 28;
        v20 = *((_QWORD *)v16 + 5);
        *(_QWORD *)(v16 + 20) = *((_QWORD *)v16 + 6);
        *((_WORD *)v16 + 20) = 0;
        v21 = v16 + 56 == v15;
        *(_QWORD *)(v16 + 12) = v20;
        v16 += 28;
      }
      while ( !v21 );
      v14 = *(unsigned __int8 **)(v13 + 24);
      if ( v19 == v14 )
        goto LABEL_30;
    }
    do
    {
      v14 -= 28;
      sub_F7A9E(v13 + 28, v14);
    }
    while ( v14 != v19 );
LABEL_30:
    *(_DWORD *)(v13 + 24) = v19;
  }
  return v3 != v12;
}


// ======================================================================
// ADDR: 0x15ea4c
// SYMBOL: sub_15EA4C
int __fastcall sub_15EA4C(int *a1, int a2, int a3)
{
  int result; // r0
  int v6; // r0
  _DWORD v7[3]; // [sp+Ch] [bp-1Ch] BYREF
  _DWORD v8[4]; // [sp+18h] [bp-10h] BYREF

  result = *a1;
  v7[0] = a3;
  if ( result )
  {
    v8[0] = a2;
    result = sub_15FAE4(result, v8);
    if ( result )
    {
      v6 = sub_15E798(a1, a2);
      v7[2] = v7;
      sub_15F2EE(v8, v6);
      result = v8[0];
      *(_DWORD *)(v8[0] + 12) = 0;
      *(_BYTE *)(result + 20) = 0;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x15ea98
// SYMBOL: sub_15EA98
int __fastcall sub_15EA98(int *a1, int a2, int a3)
{
  int result; // r0
  int v6; // r0
  _DWORD v7[3]; // [sp+Ch] [bp-1Ch] BYREF
  _DWORD v8[4]; // [sp+18h] [bp-10h] BYREF

  result = *a1;
  v7[0] = a3;
  if ( result )
  {
    v8[0] = a2;
    result = sub_15FAE4(result, v8);
    if ( result )
    {
      v6 = sub_15E798(a1, a2);
      v7[2] = v7;
      sub_15F2EE(v8, v6);
      result = v8[0];
      *(_BYTE *)(v8[0] + 21) = 0;
    }
  }
  return result;
}


// ======================================================================
