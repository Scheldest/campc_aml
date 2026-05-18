// ADDR: 0x139d94
// SYMBOL: sub_139D94
int __fastcall sub_139D94(int a1, int a2, int a3, int a4)
{
  __int64 v4; // r4
  int v5; // r1
  int result; // r0
  int v10; // r0
  _BYTE v11[8]; // [sp+4h] [bp-24h] BYREF
  void *v12; // [sp+Ch] [bp-1Ch]

  HIDWORD(v4) = a2;
  v5 = *(_DWORD *)(a1 + 84);
  if ( v5 )
    sub_12BE22(a1, v5);
  result = -1;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 88) = -1;
  switch ( HIDWORD(v4) )
  {
    case 0:
      LODWORD(v4) = operator new(0x64u);
      sub_13C4F8();
      sub_12BDF6(a1, v4);
      sub_13D450(*(_DWORD *)(v4 + 96), a3);
      goto LABEL_10;
    case 1:
    case 3:
      LODWORD(v4) = operator new(0x5Cu);
      std::string::basic_string(v11, a4);
      sub_13B750(v4, v11);
      if ( v11[0] << 31 )
        operator delete(v12);
      sub_12BDF6(a1, v4);
      sub_13B89C(v4, a3);
      goto LABEL_10;
    case 2:
    case 4:
      LODWORD(v4) = operator new(0x6Cu);
      sub_13B8BC();
      sub_12BDF6(a1, v4);
      sub_13B918(v4, a3);
      goto LABEL_10;
    case 5:
      LODWORD(v4) = operator new(0x6Cu);
      sub_13C5A8();
      sub_12BDF6(a1, v4);
      sub_13C604(v4, a3);
LABEL_10:
      v10 = *(unsigned __int8 *)(v4 + 80);
      *(_QWORD *)(a1 + 84) = v4;
      if ( v10 != 1 )
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)v4 + 36))(v4, 1);
      result = 1;
      *(_BYTE *)(v4 + 80) = 1;
      break;
    default:
      return result;
  }
  return result;
}


// ======================================================================
// ADDR: 0x139fc8
// SYMBOL: sub_139FC8
int __fastcall sub_139FC8(int a1, int a2)
{
  *(_DWORD *)(*((_DWORD *)j___dynamic_cast(
                            *(const void **)(a1 + 84),
                            (const struct __class_type_info *)&`typeinfo for'Widget,
                            (const struct __class_type_info *)&`typeinfo for'ListBox,
                            0)
              + 24)
            + 92) = a2;
  return sub_13DD80();
}


// ======================================================================
// ADDR: 0x13a558
// SYMBOL: sub_13A558
int __fastcall sub_13A558(int a1)
{
  int v2; // [sp+10h] [bp-10h] BYREF

  sub_13B500(&v2, a1);
  return v2 + 12;
}


// ======================================================================
// ADDR: 0x13b450
// SYMBOL: sub_13B450
int **__fastcall sub_13B450(_DWORD *a1, __int16 *a2)
{
  unsigned int v2; // r4
  unsigned int v4; // r5
  unsigned int v5; // r0
  unsigned int v6; // r9
  int v7; // r8
  int v8; // r1
  int ***v9; // r0
  int **i; // r6
  unsigned int v11; // r0
  unsigned int v12; // r1

  v2 = a1[1];
  if ( v2 )
  {
    v4 = *a2;
    v5 = ((v2 - ((v2 >> 1) & 0x55555555)) & 0x33333333) + (((v2 - ((v2 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v6 = (16843009 * ((v5 + (v5 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v6 > 1 )
    {
      if ( v2 <= v4 )
      {
        sub_221798(v4, v2);
        v7 = v8;
      }
      else
      {
        v7 = *a2;
      }
    }
    else
    {
      v7 = (v2 - 1) & v4;
    }
    v9 = *(int ****)(*a1 + 4 * v7);
    if ( v9 )
    {
      for ( i = *v9; i; i = (int **)*i )
      {
        v11 = (unsigned int)i[1];
        if ( v11 == v4 )
        {
          if ( *((unsigned __int16 *)i + 4) == (unsigned __int16)v4 )
            return i;
        }
        else
        {
          if ( v6 > 1 )
          {
            if ( v11 >= v2 )
            {
              sub_221798(v11, v2);
              v11 = v12;
            }
          }
          else
          {
            v11 &= v2 - 1;
          }
          if ( v11 != v7 )
            return 0;
        }
      }
    }
  }
  return 0;
}


// ======================================================================
// ADDR: 0x17c4d0
// SYMBOL: sub_17C4D0
int __fastcall sub_17C4D0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // r0
  int v9; // r4
  int v10; // r5
  int v11; // r6
  int v12; // r8
  int v13; // r10
  int result; // r0
  int v15; // [sp+1Ch] [bp-2Ch] BYREF
  int v16; // [sp+20h] [bp-28h] BYREF
  int v17; // [sp+24h] [bp-24h] BYREF
  _DWORD v18[8]; // [sp+28h] [bp-20h] BYREF

  v8 = sub_17C080();
  if ( !v8 )
    return sub_2242C8(4, "AXL", "Env not loaded (ShowPlayerDialog)");
  v9 = v8;
  sub_17C5B0(v8, a4, v18);
  sub_17C5B0(v9, a5, &v17);
  sub_17C5B0(v9, a6, &v16);
  sub_17C5B0(v9, a7, &v15);
  v10 = v17;
  v11 = v18[0];
  v13 = v15;
  v12 = v16;
  sub_17C1B8(v9);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v9 + 92))(v9, v11);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v9 + 92))(v9, v10);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v9 + 92))(v9, v12);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v9 + 92))(v9, v13);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 912))(v9);
  if ( result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 64))(v9);
    return (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 68))(v9);
  }
  return result;
}


// ======================================================================
