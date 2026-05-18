// ADDR: 0xfcb8c
// SYMBOL: sub_FCB8C
int __fastcall sub_FCB8C(const void *a1)
{
  unsigned int v1; // r9
  __int64 v3; // kr00_8
  __int64 v4; // r0
  bool v5; // zf
  int v7; // r0
  const void *v8; // r4
  int v9; // r0
  int v10; // r6
  int v11; // r1
  unsigned int v12; // r1
  unsigned int v13; // r0
  int v14; // r0

  if ( !dword_23DEF4 || !a1 )
    return 0;
  v3 = *(_QWORD *)*(_DWORD *)(dword_23DEF4 + 944);
  v4 = *(_QWORD *)(HIDWORD(v3) + 60000);
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    while ( *(const void **)(HIDWORD(v3) + 4 * *(_DWORD *)v4 + 8000) != a1 )
    {
      LODWORD(v4) = v4 + 4;
      if ( (_DWORD)v4 == HIDWORD(v4) )
        return 0;
    }
  }
  v5 = (_DWORD)v4 == HIDWORD(v4);
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    v1 = *(unsigned __int16 *)v4;
    v5 = v1 == 0xFFFF;
  }
  if ( v5 )
    return 0;
  if ( v1 >> 4 > 0x7C )
    return 0;
  if ( !sub_F2396(SHIDWORD(v3), v1) )
    return 0;
  v7 = *(_DWORD *)(HIDWORD(v3) + 4 * v1);
  if ( !v7 )
    return 0;
  v8 = *(const void **)(v7 + 4);
  if ( v8 != a1 )
  {
    _android_log_print(
      6,
      "AXL",
      "%s: find invalid vehicle. Search id for %p, found id for %p",
      "NotifyEnterVehicle",
      a1,
      v8);
    return 0;
  }
  if ( *(_BYTE *)(v7 + 34) )
    return 0;
  v9 = *(_DWORD *)(v7 + 12);
  if ( *(_WORD *)(v9 + 38) == 570 )
    return 0;
  v10 = *(_DWORD *)(**(_DWORD **)(dword_23DEF4 + 944) + 5052);
  if ( v10 )
  {
    v11 = *(_DWORD *)(v10 + 28);
    if ( v11 )
    {
      if ( *(_BYTE *)(v11 + 66) || *(_BYTE *)(v11 + 67) )
        return 0;
    }
  }
  v12 = *(_DWORD *)(v9 + 1124);
  if ( v12 )
  {
    if ( *(_DWORD *)(v12 + 1436) )
      return 0;
    v13 = sub_148F74(v3, v12, 0);
    if ( v13 <= 0x3EC )
    {
      v12 = v13;
      if ( *(_BYTE *)(v13 + v3 + 4020) )
      {
        if ( sub_148EBA(v3, v13) )
          return 0;
      }
    }
  }
  v14 = *(_DWORD *)(v10 + 28);
  if ( v14 )
  {
    if ( sub_104648(v14, v12) == 46 )
      sub_10479C(*(_DWORD *)(v10 + 28), 0, 0);
  }
  sub_141154(v10, v1, 0);
  return 1;
}


// ======================================================================
