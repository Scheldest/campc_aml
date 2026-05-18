// ADDR: 0x17de2c
// SYMBOL: sub_17DE2C
int __fastcall sub_17DE2C(int a1, unsigned __int8 *a2, int a3, int *a4)
{
  int v6; // r6
  int v8; // t1
  int result; // r0
  int v10; // r2
  int v11; // r1

  if ( a3 )
  {
    v6 = a3;
    do
    {
      v8 = *a2++;
      sub_17D628((int)a4, *(_BYTE **)(a1 + 8 * v8 + 4), *(unsigned __int16 *)(a1 + 8 * v8 + 8), 0);
      --v6;
    }
    while ( v6 );
  }
  result = *a4;
  if ( *a4 << 29 )
  {
    v10 = ((result + ((unsigned int)(result >> 31) >> 29)) & 0xFFFFFFF8) - result + 8;
    result = 0;
    while ( 1 )
    {
      v11 = a1 + 8 * result;
      if ( *(unsigned __int16 *)(v11 + 8) > (unsigned int)(unsigned __int16)v10 )
        break;
      if ( ++result == 256 )
        return result;
    }
    return sub_17D628((int)a4, *(_BYTE **)(v11 + 4), v10, 0);
  }
  return result;
}


// ======================================================================
// ADDR: 0x186f1c
// SYMBOL: sub_186F1C
int __fastcall sub_186F1C(int a1, void *a2, int a3, _DWORD *a4)
{
  int *v8; // r4
  int v9; // r2
  int v10; // r0
  unsigned int v11; // r2
  unsigned int v12; // r0
  char *v13; // r1
  int v14; // r2
  int v16; // [sp+4h] [bp-44h]
  int v17; // [sp+1Ch] [bp-2Ch] BYREF
  _BYTE v18[4]; // [sp+24h] [bp-24h] BYREF
  _DWORD v19[8]; // [sp+28h] [bp-20h] BYREF

  sub_F06B2((int)v18);
  v8 = sub_F0734();
  if ( !(*(unsigned __int8 *)v8 << 31) )
  {
    *(_WORD *)v8 = 0;
LABEL_4:
    v11 = 9;
    goto LABEL_6;
  }
  *(_BYTE *)v8[2] = 0;
  v9 = *(unsigned __int8 *)v8;
  v10 = *v8;
  v8[1] = 0;
  if ( !(v9 << 31) )
    goto LABEL_4;
  v11 = (v10 - 2) & 0xFFFFFFFE;
LABEL_6:
  v19[0] = *a4;
  v19[1] = 0;
  sub_DCA40(&v17, (int)v8, v11, a2, a3, v16, 1, 0, (int)v19, 0);
  v12 = *(unsigned __int8 *)v8;
  v13 = (char *)v8[2];
  v14 = v8[1];
  if ( (v12 & 1) == 0 )
  {
    v13 = (char *)v8 + 1;
    v14 = v12 >> 1;
  }
  sub_ED4F8(a1, v13, v14);
  return sub_F0720((int)v18);
}


// ======================================================================
// ADDR: 0x18888c
// SYMBOL: sub_18888C
bool __fastcall sub_18888C(
        int a1,
        unsigned __int8 *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        __int64 a9)
{
  int v9; // r5
  unsigned int v10; // r9
  int v11; // r10
  int v13; // r0
  signed int v14; // r8
  int v16; // r6
  void *v17; // r0
  int v18; // r0
  int v19; // r5
  int v20; // r0
  _WORD *v21; // r0
  __int16 v22; // r1
  int v25; // [sp+Ch] [bp-2Ch] BYREF
  int v26; // [sp+10h] [bp-28h] BYREF
  int v27; // [sp+14h] [bp-24h] BYREF
  int v28[8]; // [sp+18h] [bp-20h] BYREF

  v9 = a4;
  v10 = a6;
  v11 = a5;
  if ( a4 > 4 )
    v9 = 1;
  v13 = a3 + 7;
  if ( a6 > 0x1F )
    v10 = 0;
  if ( a5 > 0xA )
    v11 = 8;
  v14 = v13 >> 3;
  v28[0] = v13 >> 3;
  if ( a3 )
  {
    v16 = sub_1889FC(a1 + 1696);
    *(_QWORD *)(v16 + 32) = a9;
    v27 = v16;
    if ( a7 )
    {
      v17 = (void *)operator new[](v14);
      *(_DWORD *)(v16 + 52) = v17;
      j_memcpy(v17, a2, v14);
    }
    else
    {
      *(_DWORD *)(v16 + 52) = a2;
    }
    *(_DWORD *)(v16 + 48) = a3;
    *(_DWORD *)(v16 + 40) = 0;
    *(_DWORD *)(v16 + 44) = 0;
    *(_DWORD *)(v16 + 28) = 0;
    *(_DWORD *)(v16 + 12) = v11;
    *(_WORD *)v16 = *(_WORD *)(a1 + 180);
    *(_DWORD *)(v16 + 8) = v9;
    if ( (unsigned int)(v11 - 7) > 3 )
      v18 = -7;
    else
      v18 = dword_91DF0[v11 - 7];
    v19 = v18 + a8 - 28;
    v26 = v19;
    if ( sub_17E0BA(a1 + 1044) )
    {
      v19 -= 16;
      v26 = v19;
    }
    if ( v14 <= v19 )
    {
      ++*(_DWORD *)(a1 + 844);
    }
    else
    {
      sub_18A52C(1, "Use plit packet for packet size {} > {}", 39, v28, &v26);
      if ( a2 )
      {
        v25 = *a2;
        sub_186F1C(1, "Packet id {}", 12, &v25);
      }
      ++*(_DWORD *)(a1 + 848);
    }
    v20 = *(_DWORD *)(v16 + 12);
    ++*(_WORD *)(a1 + 180);
    if ( v20 != 10 )
    {
      if ( v20 == 9 )
      {
        *(_BYTE *)(v16 + 16) = v10;
        v21 = (_WORD *)(a1 + 2 * v10 + 468);
        goto LABEL_26;
      }
      if ( v20 != 7 )
        goto LABEL_27;
    }
    *(_BYTE *)(v16 + 16) = v10;
    v21 = (_WORD *)(a1 + 2 * v10 + 532);
LABEL_26:
    v22 = (*v21)++;
    *(_WORD *)(v16 + 18) = v22;
LABEL_27:
    if ( v14 <= v19 )
      sub_17E430((_DWORD *)(a1 + 16 * *(_DWORD *)(v16 + 8) + 104), &v27);
    else
      sub_188A3C(a1, v16, a8);
  }
  return a3 != 0;
}


// ======================================================================
