// ADDR: 0xe28c4
// SYMBOL: sub_E28C4
int __fastcall sub_E28C4(int result, __int64 *a2)
{
  unsigned int v2; // r2
  char *v3; // r1
  int v4; // r3
  int v5; // r1
  unsigned __int8 *v6; // r6
  __int64 v7; // kr00_8
  int v8; // r4
  unsigned int v9; // t1
  unsigned int v10; // [sp+18h] [bp-138h] BYREF
  int v11; // [sp+1Ch] [bp-134h]
  _UNKNOWN **v12; // [sp+20h] [bp-130h] BYREF
  _BYTE *v13; // [sp+24h] [bp-12Ch]
  int v14; // [sp+28h] [bp-128h]
  int v15; // [sp+2Ch] [bp-124h]
  int v16; // [sp+30h] [bp-120h]
  _BYTE v17[284]; // [sp+34h] [bp-11Ch] BYREF

  v2 = *((_DWORD *)a2 + 2);
  if ( v2 - 9 <= 0x1E && ((1 << (v2 - 9)) & 0x42000013) != 0 || v2 == 92 )
  {
    result += 2;
  }
  else
  {
    if ( v2 <= 0xFF )
    {
      v3 = "\\x{:02x}";
LABEL_8:
      v11 = 0;
      v10 = v2;
      v15 = 256;
      v16 = result;
      v12 = &off_22A5E0;
      v14 = 0;
      v13 = v17;
      sub_DCAC4((int)&v12, v3, 8, 2, 2, 0, (int)&v10, 0, 0);
      return v14 + v16;
    }
    if ( !HIWORD(v2) )
    {
      v10 = *((_DWORD *)a2 + 2);
      v11 = 0;
      v14 = 0;
      v15 = 256;
      v13 = v17;
      v16 = result;
      v12 = &off_22A5E0;
      sub_DCAC4((int)&v12, "\\u{:04x}", 8, 0, 2, 0, (int)&v10, 0, 0);
      return v14 + v16;
    }
    v4 = HIWORD(v2);
    if ( HIWORD(v2) <= 0x10u )
    {
      v3 = "\\U{:08x}";
      goto LABEL_8;
    }
    v7 = *a2;
    v5 = *((_DWORD *)a2 + 1);
    v6 = (unsigned __int8 *)v7;
    v8 = v5 - v7;
    if ( v5 != (_DWORD)v7 )
    {
      do
      {
        v9 = *v6++;
        v16 = result;
        v10 = v9;
        v11 = 0;
        v14 = 0;
        v15 = 256;
        v12 = &off_22A5E0;
        v13 = v17;
        sub_DCAC4((int)&v12, "\\x{:02x}", 8, v4, 2, 0, (int)&v10, 0, 0);
        --v8;
        result = v14 + v16;
      }
      while ( v8 );
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xe29fc
// SYMBOL: sub_E29FC
int __fastcall sub_E29FC(unsigned int a1, unsigned int a2, int a3)
{
  unsigned int v5; // r4
  unsigned int v6; // r6
  int result; // r0
  int v8; // r5
  _DWORD *v9; // r6
  int v10; // r1
  _DWORD v11[2]; // [sp+4h] [bp-24h] BYREF
  _DWORD v12[7]; // [sp+Ch] [bp-1Ch] BYREF

  v5 = a1;
  v12[0] = a3;
  if ( a2 >= 4 )
  {
    v6 = a1 + a2 - 3;
    v5 = a1;
    while ( v5 < v6 )
    {
      result = sub_E2A7C(v12, v5, v5);
      v5 = result;
      if ( !result )
        return result;
    }
  }
  result = a1 + a2;
  v8 = a1 + a2 - v5;
  if ( a1 + a2 != v5 )
  {
    memset(v11, 0, 7);
    _memcpy_chk(v11, v5, v8, 7);
    v9 = v11;
    do
    {
      result = sub_E2A7C(v12, v9, v5);
      if ( !result )
        break;
      v10 = result - (_DWORD)v9;
      v9 = (_DWORD *)result;
      v5 += v10;
    }
    while ( result - (int)v11 < v8 );
  }
  return result;
}


// ======================================================================
