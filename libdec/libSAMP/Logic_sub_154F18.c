// ADDR: 0x138284
// SYMBOL: sub_138284
void __fastcall sub_138284(int a1, __int16 a2, int a3, int a4, int a5)
{
  __int16 v7; // [sp+0h] [bp-28h] BYREF
  _BYTE v8[8]; // [sp+4h] [bp-24h] BYREF
  void *v9; // [sp+Ch] [bp-1Ch]
  int v10; // [sp+10h] [bp-18h]
  int v11; // [sp+14h] [bp-14h]

  v7 = a2;
  std::string::basic_string(v8, a3);
  v10 = a4;
  v11 = a5;
  sub_13959C(a1 + 84, &v7);
  if ( v8[0] << 31 )
    operator delete(v9);
}


// ======================================================================
// ADDR: 0x150588
// SYMBOL: sub_150588
_DWORD *__fastcall sub_150588(_DWORD *a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r6
  int **v4; // r5
  const struct __class_type_info *v5; // r4
  int v6; // r5
  int v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r1

  result = (_DWORD *)a1[3];
  if ( result )
  {
    v3 = (_DWORD *)a1[2];
    if ( v3 != a1 + 1 )
    {
      v4 = &`typeinfo for'AudioChannel;
      while ( !sub_1504C0(a1, v3[2]) )
      {
        result = (_DWORD *)sub_150640((int)(a1 + 1), v3);
        v3 = result;
LABEL_12:
        if ( v3 == a1 + 1 )
          return result;
      }
      v5 = (const struct __class_type_info *)v4;
      v6 = v3[2];
      v7 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1) ^ 1;
      v8 = v6;
      v4 = (int **)v5;
      sub_151D18(v8, v7);
      if ( j___dynamic_cast(a1, v5, (const struct __class_type_info *)&`typeinfo for'AudioChannelVehicle, 0) )
      {
        v9 = v3[2];
        v10 = *(_DWORD *)(dword_381A0C + 116);
      }
      else
      {
        result = j___dynamic_cast(a1, v5, (const struct __class_type_info *)&`typeinfo for'AudioChannelPoint3D, 0);
        if ( !result )
        {
LABEL_11:
          v3 = (_DWORD *)v3[1];
          goto LABEL_12;
        }
        v9 = v3[2];
        v10 = *(_DWORD *)(dword_381A0C + 120);
      }
      result = (_DWORD *)sub_151D54(v9, v10);
      goto LABEL_11;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x150cb4
// SYMBOL: sub_150CB4
int __fastcall sub_150CB4(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v5; // r1
  _DWORD v6[4]; // [sp+0h] [bp-20h] BYREF
  _DWORD *v7; // [sp+10h] [bp-10h]

  *(_BYTE *)(a1 + 73) = 1;
  v6[1] = a2;
  v6[2] = a3;
  v6[3] = a4;
  v7 = v6;
  v6[0] = &off_22F2AC;
  sub_150A8C((_DWORD *)a1, (int)v6);
  result = (int)v7;
  if ( v6 == v7 )
  {
    v5 = 4;
  }
  else
  {
    if ( !v7 )
      return result;
    v5 = 5;
  }
  return (*(int (**)(void))(*v7 + 4 * v5))();
}


// ======================================================================
// ADDR: 0x154694
// SYMBOL: sub_154694
// attributes: thunk
int __fastcall sub_154694(int a1)
{
  return sub_164A70(a1);
}


// ======================================================================
// ADDR: 0x1546ac
// SYMBOL: sub_1546AC
// attributes: thunk
int __fastcall sub_1546AC(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return sub_164A50(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}


// ======================================================================
// ADDR: 0x15e5bc
// SYMBOL: sub_15E5BC
int sub_15E5BC()
{
  if ( dword_23DEF0 )
    return sub_E35A0(dword_23DEF0);
  else
    return 0;
}


// ======================================================================
// ADDR: 0x15e620
// SYMBOL: sub_15E620
int sub_15E620()
{
  if ( dword_23DEF0 )
    return *(_DWORD *)(dword_23DEF0 + 4);
  else
    return 0;
}


// ======================================================================
// ADDR: 0x15e638
// SYMBOL: sub_15E638
int __fastcall sub_15E638(unsigned int a1)
{
  int v2; // r5

  if ( dword_23DEF4
    && (v2 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4)) != 0
    && a1 >> 4 <= 0x7C
    && sub_F2396(v2, a1) )
  {
    return *(_DWORD *)(v2 + 4 * a1);
  }
  else
  {
    return 0;
  }
}


// ======================================================================
// ADDR: 0x15e720
// SYMBOL: sub_15E720
int __fastcall sub_15E720(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0

  result = dword_23DEF8;
  if ( dword_23DEF8 )
    return sub_F146C(dword_23DEF8, a1, a2, a3, a4, a5);
  return result;
}


// ======================================================================
