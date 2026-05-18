// ADDR: 0x1485f0
// SYMBOL: sub_1485F0
unsigned int __fastcall sub_1485F0(int a1)
{
  int v2; // r8
  int v3; // r4
  int v4; // r6
  float v5; // r5
  unsigned int result; // r0

  if ( !dword_381A04 )
    dword_381A04 = sub_F0B30();
  v2 = sub_F0B30();
  v3 = a1 + 1004;
  v4 = 0;
  v5 = (float)(unsigned int)(v2 - dword_381A04) / 1000.0;
  do
  {
    result = *(unsigned __int8 *)(v3 + v4 - 1000);
    if ( *(_BYTE *)(v3 + v4 - 1000) )
      result = sub_101BA0(*(_DWORD *)(v3 + 4 * v4), v5);
    ++v4;
  }
  while ( v4 != 1000 );
  dword_381A04 = v2;
  return result;
}


// ======================================================================
// ADDR: 0x1486a6
// SYMBOL: sub_1486A6
int __fastcall sub_1486A6(int a1)
{
  int v1; // r4
  int i; // r5
  int result; // r0

  v1 = a1 + 1004;
  for ( i = 0; i != 1000; ++i )
  {
    result = *(_DWORD *)(v1 + 4 * i);
    if ( result )
    {
      if ( *(_BYTE *)(v1 + i - 1000) )
        result = sub_1024BC(result);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x14f5fc
// SYMBOL: sub_14F5FC
int __fastcall sub_14F5FC(int a1)
{
  unsigned __int16 *v2; // r5
  int result; // r0
  unsigned __int16 *v4; // r6

  v2 = *(unsigned __int16 **)(a1 + 9216);
  result = a1 + 9216;
  v4 = *(unsigned __int16 **)(result + 4);
  while ( v2 != v4 )
  {
    result = *(_DWORD *)(a1 + 4 * *v2);
    if ( result )
      result = sub_1081C8(result);
    ++v2;
  }
  return result;
}


// ======================================================================
// ADDR: 0x161028
// SYMBOL: sub_161028
int sub_161028()
{
  _QWORD *v0; // r0
  int *v1; // r0
  int v2; // r1
  int v3; // r0
  std::chrono::system_clock *address; // r0
  __int64 v6; // [sp+0h] [bp-10h] BYREF

  if ( *(_DWORD *)j___emutls_get_address(&unk_23904C) )
  {
    std::chrono::system_clock::now((std::chrono::system_clock *)&v6);
    if ( !*(_BYTE *)j___emutls_get_address(&unk_23906C) )
    {
      address = (std::chrono::system_clock *)j___emutls_get_address(&unk_23905C);
      std::chrono::system_clock::now(address);
      *(_BYTE *)j___emutls_get_address(&unk_23906C) = 1;
    }
    v0 = (_QWORD *)j___emutls_get_address(&unk_23905C);
    if ( v6 - *v0 >= 60000001 )
      *(_DWORD *)j___emutls_get_address(&unk_23904C) = 0;
  }
  v1 = (int *)j___emutls_get_address(&unk_23907C);
  v2 = *v1 + 1;
  *v1 = v2;
  v3 = sub_1610D4(v2);
  return *(unsigned __int8 *)(sub_1618E0(v3) + 192);
}


// ======================================================================
// ADDR: 0x161204
// SYMBOL: sub_161204
_DWORD *sub_161204()
{
  int v0; // r1
  int v1; // r4
  _DWORD *result; // r0

  v0 = *(_DWORD *)j___emutls_get_address(&unk_23907C);
  if ( v0 == -1 )
    return (_DWORD *)sub_2242C8(6, "AXL", "anti_crasher: Invalid count of save/drop states");
  v1 = v0 - 1;
  result = (_DWORD *)j___emutls_get_address(&unk_23907C);
  *result = v1;
  return result;
}


// ======================================================================
// ADDR: 0x17c8f4
// SYMBOL: sub_17C8F4
int sub_17C8F4()
{
  int v0; // r0
  int v1; // r4
  int result; // r0

  v0 = sub_17C080();
  if ( !v0 )
    return sub_2242C8(4, "AXL", "Env not loaded (exitGame)");
  v1 = v0;
  sub_17C1B8(v0);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 912))(v1);
  if ( result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 64))(v1);
    return (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 68))(v1);
  }
  return result;
}


// ======================================================================
