// ADDR: 0xf8994
// SYMBOL: sub_F8994
int __fastcall sub_F8994(int a1, _DWORD *a2)
{
  _DWORD *v2; // r0
  int result; // r0

  v2 = *(_DWORD **)(a1 + 4);
  if ( !v2 )
    return sub_2242C8(6, "AXL", "CEntity: Can't read speed vector - m_pEntity is nullptr");
  *a2 = v2[18];
  a2[1] = v2[19];
  result = v2[20];
  a2[2] = result;
  return result;
}


// ======================================================================
// ADDR: 0x104300
// SYMBOL: sub_104300
int __fastcall sub_104300(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + 92);
  if ( v1 )
    return *(_DWORD *)(v1 + 1356);
  else
    return 0;
}


// ======================================================================
// ADDR: 0x109ad0
// SYMBOL: sub_109AD0
int __fastcall sub_109AD0(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 12);
  if ( result )
    *(_DWORD *)(result + 1228) = a2;
  return result;
}


// ======================================================================
// ADDR: 0x109c00
// SYMBOL: sub_109C00
int __fastcall sub_109C00(int result, int a2)
{
  *(_DWORD *)(result + 16) = a2;
  return result;
}


// ======================================================================
// ADDR: 0x109e00
// SYMBOL: sub_109E00
int __fastcall sub_109E00(int a1)
{
  unsigned int v1; // r5
  int v2; // r0
  int v3; // r1
  int result; // r0
  int v5; // r4
  _DWORD *v6; // r0
  _DWORD *v7; // r2
  bool v8; // zf

  v2 = *(_DWORD *)(a1 + 12);
  if ( !v2 )
    return 0;
  v3 = *(_DWORD *)(v2 + 1236);
  result = 0;
  if ( v3 && dword_23DEF4 )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
    if ( v5 )
    {
      v7 = *(_DWORD **)(v5 + 60004);
      v6 = *(_DWORD **)(v5 + 60000);
      if ( v6 != v7 )
      {
        while ( 1 )
        {
          v1 = *(_DWORD *)(v5 + 4 * *v6 + 8000);
          if ( v1 == v3 )
            break;
          if ( ++v6 == v7 )
            return 0;
        }
      }
      v8 = v6 == v7;
      if ( v6 != v7 )
      {
        v1 = *(unsigned __int16 *)v6;
        v8 = v1 == 0xFFFF;
      }
      if ( !v8 && v1 >> 4 <= 0x7C && sub_F2396(v5, v1) )
        return *(_DWORD *)(v5 + 4 * v1);
    }
    return 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x109e78
// SYMBOL: sub_109E78
int __fastcall sub_109E78(int a1)
{
  unsigned int v1; // r5
  int *v3; // r0
  unsigned int v4; // r0
  int v5; // r1
  int result; // r0
  int v7; // r4
  _DWORD *v8; // r0
  _DWORD *v9; // r2
  bool v10; // zf

  v3 = *(int **)(a1 + 12);
  if ( !v3 )
    return 0;
  v4 = sub_10837C(v3) - 2;
  if ( v4 < 6 )
  {
    if ( 0x35u >> v4 << 31 )
      return 0;
  }
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 1232);
  result = 0;
  if ( v5 && dword_23DEF4 )
  {
    v7 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
    if ( v7 )
    {
      v9 = *(_DWORD **)(v7 + 60004);
      v8 = *(_DWORD **)(v7 + 60000);
      if ( v8 != v9 )
      {
        while ( 1 )
        {
          v1 = *(_DWORD *)(v7 + 4 * *v8 + 8000);
          if ( v1 == v5 )
            break;
          if ( ++v8 == v9 )
            return 0;
        }
      }
      v10 = v8 == v9;
      if ( v8 != v9 )
      {
        v1 = *(unsigned __int16 *)v8;
        v10 = v1 == 0xFFFF;
      }
      if ( !v10 && v1 >> 4 <= 0x7C && sub_F2396(v7, v1) )
        return *(_DWORD *)(v7 + 4 * v1);
    }
    return 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x109f08
// SYMBOL: sub_109F08
int __fastcall sub_109F08(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 )
    return *(_DWORD *)(v1 + 1464);
  else
    return 0;
}


// ======================================================================
// ADDR: 0x109f24
// SYMBOL: sub_109F24
int __fastcall sub_109F24(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 )
    return *(unsigned __int16 *)(v1 + 2176);
  else
    return 0;
}


// ======================================================================
// ADDR: 0x109f32
// SYMBOL: sub_109F32
int sub_109F32()
{
  return 0;
}


// ======================================================================
// ADDR: 0x140978
// SYMBOL: sub_140978
int __fastcall sub_140978(int a1, const void *a2, const void *a3, size_t a4)
{
  if ( (unsigned int)(sub_F0B30() - *(_DWORD *)(a1 + 452)) <= 0x1F4 && !memcmp(a2, a3, a4) )
    return 0;
  *(_DWORD *)(a1 + 452) = sub_F0B30();
  return 1;
}


// ======================================================================
// ADDR: 0x1409b8
// SYMBOL: sub_1409B8
int __fastcall sub_1409B8(int a1, unsigned int a2)
{
  int result; // r0
  int v5; // r5
  int v6; // r5
  int v7; // r0
  _BYTE v8[276]; // [sp+5Ch] [bp-1DCh] BYREF
  double v9; // [sp+170h] [bp-C8h] BYREF
  int v10; // [sp+178h] [bp-C0h]
  double v11; // [sp+180h] [bp-B8h] BYREF
  int v12; // [sp+188h] [bp-B0h]
  __int64 v13; // [sp+190h] [bp-A8h] BYREF
  __int64 v14; // [sp+198h] [bp-A0h]
  _DWORD v15[12]; // [sp+1A0h] [bp-98h] BYREF
  int v16; // [sp+1D0h] [bp-68h]
  int v17; // [sp+1D4h] [bp-64h]
  int v18; // [sp+1D8h] [bp-60h]
  _WORD src[29]; // [sp+1E0h] [bp-58h] BYREF
  char v20[29]; // [sp+21Bh] [bp-1Dh] BYREF

  result = a2 >> 4;
  if ( a2 >> 4 <= 0x7C )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
    result = sub_F2396(v5, a2);
    if ( result )
    {
      v6 = *(_DWORD *)(v5 + 4 * a2);
      if ( v6 )
      {
        sub_F8910(v6, v15);
        v13 = 1065353216LL;
        v14 = 0LL;
        sub_17D12C(
          &v13,
          v15[0],
          v15[1],
          v15[2],
          v15[3],
          v15[4],
          v15[5],
          v15[6],
          v15[7],
          v15[8],
          v15[9],
          v15[10],
          v15[11],
          v16,
          v17,
          v18);
        sub_17D2F2(&v13);
        *(_DWORD *)&src[3] = v17;
        *(_DWORD *)&src[1] = v16;
        src[0] = a2;
        *(_DWORD *)&src[5] = v18;
        *(_QWORD *)&src[7] = v13;
        *(_QWORD *)&src[11] = v14;
        sub_F8994(v6, &v11);
        *(_DWORD *)&src[19] = v12;
        *(double *)&src[15] = v11;
        sub_F89E0(v6, &v9);
        *(_DWORD *)&src[25] = v10;
        *(double *)&src[21] = v9;
        result = sub_140978(a1, (const void *)(a1 + 347), src, 0x36u);
        if ( result )
        {
          *(_DWORD *)(a1 + 452) = sub_F0B30();
          v7 = sub_17D4A8(v8);
          v20[0] = -46;
          sub_17D628(v7, v20, 8, 1);
          sub_17D566(v8, src, 54);
          (*(void (__fastcall **)(_DWORD, _BYTE *, int, int, int))(**(_DWORD **)(dword_23DEF4 + 528) + 32))(
            *(_DWORD *)(dword_23DEF4 + 528),
            v8,
            1,
            7,
            1);
          j_memcpy((void *)(a1 + 347), src, 0x36u);
          return sub_17D542(v8);
        }
      }
    }
  }
  return result;
}


// ======================================================================
