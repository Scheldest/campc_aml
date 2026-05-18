// ADDR: 0xfdd9c
// SYMBOL: sub_FDD9C
bool __fastcall sub_FDD9C(int *a1, _DWORD *a2)
{
  int v4; // r0
  _DWORD *v5; // r1
  int v6; // r0
  bool v7; // zf
  int *v8; // r2
  int v9; // r10
  int v10; // r8
  int v11; // r9
  int v12; // r1
  int v13; // r1
  bool v14; // zf
  _BOOL4 result; // r0

  v4 = sub_1082E4();
  if ( !dword_23DEF4 )
    return 0;
  v5 = (_DWORD *)v4;
  v6 = *a1;
  if ( a2 && (_DWORD *)v6 != v5 && *a2 == dword_23DF24 + 6720164 )
    return 1;
  v7 = v5 == a2;
  if ( v5 != a2 )
    v7 = v6 == (_DWORD)v5;
  if ( !v7 )
    return 0;
  v8 = *(int **)(dword_23DEF4 + 944);
  v9 = *v8;
  v10 = *(_DWORD *)(*v8 + 5052);
  if ( v5 == a2 )
  {
    v11 = sub_FB50C(v6);
    sub_1416FC(v10, v11, a1[1], a1[3], a1[2]);
    if ( a1[3] != 54 )
      goto LABEL_20;
    return 1;
  }
  v11 = sub_FB50C((int)a2);
  if ( v11 != 0xFFFF )
  {
    sub_1417BC(v10, v11, a1[1], a1[3], a1[2]);
    if ( !*(_BYTE *)(**(_DWORD **)(v9 + 4 * v11 + 4) + 24) )
      goto LABEL_20;
    return 1;
  }
  if ( !a2 )
  {
LABEL_19:
    v11 = 0xFFFF;
    goto LABEL_20;
  }
  v12 = 0;
  while ( *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 28) + 5000 + 4 * v12) != a2 )
  {
    if ( ++v12 == 1000 )
      goto LABEL_19;
  }
  v11 = 0xFFFF;
  if ( (unsigned __int16)v12 != 0xFFFF )
  {
    sub_14187C(v10, (unsigned __int16)v12, a1[1], a1[3], a1[2]);
    return 1;
  }
LABEL_20:
  if ( !*(_BYTE *)(*(_DWORD *)(dword_23DEF4 + 524) + 27) )
    return 0;
  v13 = 0xFFFF;
  v14 = v11 == 0xFFFF;
  if ( v11 != 0xFFFF )
  {
    v13 = *(unsigned __int8 *)(*(_DWORD *)(v9 + 5052) + 18);
    v14 = v13 == 255;
  }
  result = 0;
  if ( !v14 )
    return *(unsigned __int8 *)(**(_DWORD **)(v9 + 4 * v11 + 4) + 18) == v13;
  return result;
}


// ======================================================================
