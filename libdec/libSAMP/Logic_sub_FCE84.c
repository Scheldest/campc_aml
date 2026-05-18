// ADDR: 0xfb50c
// SYMBOL: sub_FB50C
int __fastcall sub_FB50C(int a1)
{
  __int64 v2; // kr00_8
  int result; // r0
  __int64 v4; // r0
  bool v5; // zf
  int v6; // r2
  int v7; // r1
  int *v8; // r6
  int v9; // r6

  if ( !a1 )
    return 0xFFFF;
  v2 = *(_QWORD *)*(_DWORD *)(dword_23DEF4 + 944);
  result = sub_148F74(v2, a1, 0);
  if ( result != 0xFFFF )
    return result;
  v4 = *(_QWORD *)(HIDWORD(v2) + 60000);
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    while ( *(_DWORD *)(HIDWORD(v2) + 4 * *(_DWORD *)v4 + 8000) != a1 )
    {
      LODWORD(v4) = v4 + 4;
      if ( (_DWORD)v4 == HIDWORD(v4) )
        return 0xFFFF;
    }
  }
  v5 = (_DWORD)v4 == HIDWORD(v4);
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    LODWORD(v4) = *(unsigned __int16 *)v4;
    v5 = (_DWORD)v4 == 0xFFFF;
  }
  if ( v5 )
    return 0xFFFF;
  v6 = v2 + 4020;
  v7 = 0;
  while ( 1 )
  {
    if ( *(_BYTE *)(v6 + v7) )
    {
      v8 = *(int **)(v6 + 4 * v7 - 4016);
      if ( v8 )
      {
        v9 = *v8;
        if ( v9 )
        {
          if ( *(unsigned __int16 *)(v9 + 22) == (_DWORD)v4 )
            break;
        }
      }
    }
    if ( ++v7 == 1004 )
      return 0xFFFF;
  }
  return (unsigned __int16)v7;
}


// ======================================================================
// ADDR: 0xfcff0
// SYMBOL: sub_FCFF0
int *__fastcall sub_FCFF0(_DWORD *a1, int a2, int a3)
{
  int v6; // r0
  int *result; // r0

  v6 = sub_120334();
  sub_12034C(v6, 2, 101, 115, 20);
  sub_144A80(dword_23DEF4, a2, a3);
  result = &dword_2474F4;
  dword_2474F4 = *a1 + 1000;
  return result;
}


// ======================================================================
// ADDR: 0x109350
// SYMBOL: sub_109350
int __fastcall sub_109350(float a1, float a2, float a3, unsigned int a4)
{
  int v8; // r2
  int v9; // r0
  int v11; // [sp+20h] [bp-50h] BYREF
  _BYTE v12[12]; // [sp+24h] [bp-4Ch] BYREF
  float v13[3]; // [sp+30h] [bp-40h] BYREF
  float v14[13]; // [sp+3Ch] [bp-34h] BYREF

  v8 = (unsigned __int8)byte_26303C;
  __dmb(0xBu);
  if ( !(v8 << 31) && j___cxa_guard_acquire((__guard *)&byte_26303C) )
  {
    off_263038 = (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(dword_23DF24 + 4344645);
    j___cxa_guard_release((__guard *)&byte_26303C);
  }
  v14[2] = a3;
  v14[1] = a2;
  v14[0] = a1;
  sub_10920C(v14, v13);
  v11 = 0;
  v9 = sub_F7FE0();
  off_263038(v9 + 12, v13, v12, &v11, a4 & 1, (a4 >> 1) & 1, (a4 >> 2) & 1, (a4 >> 3) & 1, (a4 >> 4) & 1, 0, 0, 1);
  return v11;
}


// ======================================================================
// ADDR: 0x120334
// SYMBOL: sub_120334
int sub_120334()
{
  return ((int (*)(void))(dword_23DF24 + 2557005))();
}


// ======================================================================
// ADDR: 0x12034c
// SYMBOL: sub_12034C
int __fastcall sub_12034C(int a1, int a2, int a3, int a4, int a5)
{
  return ((int (__fastcall *)(int, int, int, int))((char *)&unk_270BD9 + dword_23DF24))(a1, a2, a3, a4);
}


// ======================================================================
// ADDR: 0x1386ec
// SYMBOL: sub_1386EC
bool sub_1386EC()
{
  return byte_3141F4 || (unsigned int)(sub_F0B30() - dword_3141F8) <= 0x1F4;
}


// ======================================================================
// ADDR: 0x144a80
// SYMBOL: sub_144A80
int __fastcall sub_144A80(int a1, char a2, int a3)
{
  int result; // r0
  int v7; // r0
  _BYTE v8[276]; // [sp+8h] [bp-128h] BYREF
  _DWORD v9[5]; // [sp+11Ch] [bp-14h] BYREF

  result = *(_DWORD *)(a1 + 536);
  if ( result == 5 )
  {
    v7 = sub_17D4A8(v8);
    LOBYTE(v9[0]) = -36;
    sub_17D628(v7, v9, 8, 1);
    LOBYTE(v9[0]) = a2;
    sub_17D628(v8, v9, 8, 1);
    v9[0] = a3;
    sub_17D628(v8, v9, 32, 1);
    (*(void (__fastcall **)(_DWORD, _BYTE *, int, int, int))(**(_DWORD **)(a1 + 528) + 32))(
      *(_DWORD *)(a1 + 528),
      v8,
      2,
      9,
      6);
    return sub_17D542(v8);
  }
  return result;
}


// ======================================================================
// ADDR: 0x148684
// SYMBOL: sub_148684
int __fastcall sub_148684(int a1, int a2)
{
  int v2; // r2
  int result; // r0
  int v4; // r3

  v2 = a1 + 1004;
  result = 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)(v2 + 4 * result);
    if ( v4 )
    {
      if ( *(_DWORD *)(v4 + 4) == a2 )
        break;
    }
    if ( ++result == 1000 )
    {
      LOWORD(result) = -1;
      return (unsigned __int16)result;
    }
  }
  return (unsigned __int16)result;
}


// ======================================================================
// ADDR: 0x17c1da
// SYMBOL: sub_17C1DA
int __fastcall sub_17C1DA(int a1, int a2)
{
  unsigned int v2; // r3
  bool v3; // r2
  bool v4; // zf
  bool v5; // cf

  v2 = 0;
  v3 = 1;
  do
  {
    if ( *(_BYTE *)(a1 + 104 + v2) )
    {
      if ( !a2 )
        break;
      v4 = v2 == 25;
      if ( v2 != 25 )
        v4 = (v2 & 0x7FFFFFFD) == 4;
      if ( !v4 )
        break;
    }
    v5 = v2++ >= 0x1B;
    v3 = !v5;
  }
  while ( v2 != 28 );
  return v3;
}


// ======================================================================
