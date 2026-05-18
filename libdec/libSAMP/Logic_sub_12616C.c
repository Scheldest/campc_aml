// ADDR: 0xfd040
// SYMBOL: sub_FD040
int __fastcall sub_FD040(int a1, float a2, __int64 a3)
{
  float v4; // r4
  int v5; // r5
  int v7; // r9
  int v8; // r1
  bool v9; // zf
  _BOOL4 v10; // r11
  int result; // r0
  int v12; // s0
  int (**v13)(void); // r1
  int v14; // s2
  int v15; // r10
  int v16; // r1
  int v17; // r0
  int v18; // r2
  int v19; // r2
  int v20; // r0
  float v21; // r1
  int v22; // r2
  float v23; // r3
  float v24; // [sp+4h] [bp-2Ch] BYREF
  float v25; // [sp+8h] [bp-28h]
  int v26; // [sp+Ch] [bp-24h]
  float v27; // [sp+10h] [bp-20h]

  v4 = *((float *)&a3 + 1);
  v5 = a3;
  *(_QWORD *)&dword_2474EC = a3;
  if ( sub_F9B64() || !dword_23DEEC )
    return off_2474FC(a1, LODWORD(a2), v5, LODWORD(v4));
  v7 = *(_DWORD *)(dword_23DEEC + 88);
  v8 = *(_DWORD *)(dword_23DEEC + 104);
  v9 = v7 == 0;
  if ( v7 )
    v9 = *(_BYTE *)(v7 + 80) == 0;
  v10 = v9 && (!v8 || !*(_BYTE *)(v8 + 80));
  switch ( a1 )
  {
    case 3:
      v12 = LODWORD(v4);
      v13 = *(int (***)(void))dword_23DEEC;
      v14 = v5;
      break;
    case 2:
      v12 = LODWORD(v4);
      v13 = *(int (***)(void))dword_23DEEC;
      v14 = v5;
      break;
    case 1:
      v12 = LODWORD(v4);
      v13 = *(int (***)(void))dword_23DEEC;
      v14 = v5;
      break;
    default:
      v15 = 0;
      goto LABEL_20;
  }
  v25 = (float)v12;
  v24 = (float)v14;
  v15 = (*v13)();
LABEL_20:
  v16 = dword_23DEF4;
  if ( dword_23DEF4 )
    v16 = 1;
  if ( (v16 & v10) == 1 )
  {
    v17 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 24);
    if ( v17 )
    {
      v18 = LODWORD(a2);
      if ( a2 != 0.0 )
        v18 = 1;
      if ( !sub_14F534(v17, a1, v18, v5, v4) )
        return off_2474FC(1, 0, 0, 0);
    }
  }
  if ( v15 )
    return off_2474FC(1, 0, 0, 0);
  if ( !v7 )
    goto LABEL_32;
  v19 = LODWORD(a2);
  if ( a2 != 0.0 )
    v19 = 1;
  if ( !sub_1308D0(v7, a1, v19, v5, LODWORD(v4)) )
    return off_2474FC(1, 0, 0, 0);
LABEL_32:
  v26 = v5;
  v27 = v4;
  v24 = *(float *)&a1;
  v25 = a2;
  if ( !sub_FA4BC((int *)&v24) || (sub_FD1E4(&dword_2473C8, &v24), (result = sub_FA4BC((int *)&v24)) != 0) )
  {
    if ( *(_BYTE *)(dword_23DEF0 + 84) )
    {
      v20 = a1;
      v21 = a2;
      v22 = v5;
      v23 = v4;
    }
    else
    {
      v20 = 1;
      v21 = 0.0;
      v22 = 0;
      v23 = 0.0;
    }
    return off_2474FC(v20, LODWORD(v21), v22, LODWORD(v23));
  }
  return result;
}


// ======================================================================
