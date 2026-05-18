// ADDR: 0x125d30
// SYMBOL: sub_125D30
int __fastcall sub_125D30(int a1, int a2)
{
  int v2; // r4
  int v3; // r0

  if ( a2 < 162 || (v2 = a2 - 162, a2 - 162 >= dword_238E94) )
  {
    if ( dword_263C44 )
    {
      return dword_263C44 + 224 * dword_238E90 + 20;
    }
    else
    {
      _android_log_print(
        5,
        "AXL",
        "CHandlingHook: fail to call %s. Custom pool not allocated",
        "static char *CHandlingHook::getBikeStart()");
      return 0;
    }
  }
  else
  {
    if ( dword_263C44 )
    {
      v3 = dword_263C44 + 224 * dword_238E90 + 20;
    }
    else
    {
      _android_log_print(
        5,
        "AXL",
        "CHandlingHook: fail to call %s. Custom pool not allocated",
        "static char *CHandlingHook::getBikeStart()");
      v3 = 0;
    }
    return v3 + (v2 << 6);
  }
}


// ======================================================================
// ADDR: 0x125dcc
// SYMBOL: sub_125DCC
unsigned int __fastcall sub_125DCC(int *a1, int a2)
{
  char *v2; // r5
  int v4; // r0
  bool v5; // zf
  __int64 v6; // kr00_8
  int v7; // r1
  bool v8; // zf
  unsigned int v9; // r6
  unsigned int v10; // r0
  unsigned int v11; // r1
  char v12; // t1
  int v13; // r1
  unsigned int result; // r0
  int v15; // r1
  unsigned int v16; // t1
  unsigned int v17; // r2
  unsigned int v18; // r3

  v2 = (char *)(a2 + 1);
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  while ( 1 )
  {
    v4 = (unsigned __int8)*(v2 - 1);
    v5 = v4 == 9;
    if ( v4 != 9 )
      v5 = v4 == 32;
    if ( !v5 )
      break;
    ++v2;
  }
  while ( (unsigned __int8)v4 > 0xDu || ((1 << v4) & 0x2401) == 0 )
  {
    v6 = *(_QWORD *)a1;
    if ( (_DWORD)v6 == HIDWORD(v6) )
    {
      if ( (unsigned int)v6 >= a1[2] )
      {
        sub_F4BBC(a1, &byte_8F794);
      }
      else
      {
        sub_DC6DC((_DWORD *)v6, &byte_8F794);
        a1[1] = v6 + 12;
      }
    }
    v7 = (unsigned __int8)*(v2 - 1);
    v8 = v7 == 32;
    if ( v7 != 32 )
      v8 = v7 == 9;
    if ( v8 )
    {
      v9 = a1[1];
      v10 = *(unsigned __int8 *)(v9 - 12);
      v11 = *(_DWORD *)(v9 - 8);
      if ( !(v10 << 31) )
        v11 = v10 >> 1;
      if ( v11 )
      {
        if ( v9 >= a1[2] )
        {
          sub_F4BBC(a1, &byte_8F794);
        }
        else
        {
          sub_DC6DC((_DWORD *)a1[1], &byte_8F794);
          a1[1] = v9 + 12;
        }
      }
    }
    else
    {
      std::string::push_back(a1[1] - 12, v7);
    }
    v12 = *v2++;
    LOBYTE(v4) = v12;
  }
  v13 = a1[1];
  v16 = *(unsigned __int8 *)(v13 - 12);
  v15 = v13 - 12;
  result = v16;
  v17 = *(_DWORD *)(v15 + 4);
  v18 = v16 << 31;
  if ( !(v16 << 31) )
    v17 = result >> 1;
  if ( !v17 )
    return sub_125F2C(a1, v15, 0, v18);
  return result;
}


// ======================================================================
