// ADDR: 0x10a1e4
// SYMBOL: sub_10A1E4
bool __fastcall sub_10A1E4(int a1)
{
  int v2; // r0
  _BOOL4 result; // r0

  result = 0;
  if ( *(_DWORD *)(a1 + 12) )
  {
    if ( sub_108354(*(_DWORD *)(a1 + 8)) )
    {
      v2 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 1124);
      if ( v2 )
      {
        if ( *(unsigned __int8 *)(v2 + 1157) << 31 && !*(_DWORD *)(v2 + 1436) )
          return 1;
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x144876
// SYMBOL: sub_144876
int __fastcall sub_144876(int result, unsigned int a2, char a3)
{
  int v3; // r4
  int v6; // r6
  int v7; // r6
  int v8; // r0
  _BYTE v9[276]; // [sp+8h] [bp-1D0h] BYREF
  __int16 v10; // [sp+11Ch] [bp-BCh] BYREF
  char v11; // [sp+11Eh] [bp-BAh]
  double v12; // [sp+11Fh] [bp-B9h]
  int v13; // [sp+127h] [bp-B1h]
  double v14; // [sp+12Bh] [bp-ADh]
  int v15; // [sp+133h] [bp-A5h]
  double v16; // [sp+137h] [bp-A1h]
  int v17; // [sp+13Fh] [bp-99h]
  double v18; // [sp+143h] [bp-95h]
  int v19; // [sp+14Bh] [bp-8Dh]
  double v20; // [sp+14Fh] [bp-89h]
  int v21; // [sp+157h] [bp-81h]
  double v22; // [sp+160h] [bp-78h] BYREF
  int v23; // [sp+168h] [bp-70h]
  double v24; // [sp+170h] [bp-68h] BYREF
  int v25; // [sp+178h] [bp-60h]
  double v26; // [sp+180h] [bp-58h] BYREF
  int v27; // [sp+188h] [bp-50h]
  double v28; // [sp+190h] [bp-48h]
  int v29; // [sp+198h] [bp-40h]
  double v30; // [sp+1B0h] [bp-28h]
  int v31; // [sp+1B8h] [bp-20h]
  char v32[17]; // [sp+1C7h] [bp-11h] BYREF

  if ( a2 <= 0x7D0 )
  {
    v3 = result;
    result = *(_DWORD *)(result + 536);
    if ( result == 5 )
    {
      result = a2 >> 4;
      if ( a2 >> 4 <= 0x7C )
      {
        v6 = *(_DWORD *)(*(_DWORD *)(v3 + 944) + 4);
        result = sub_F2396(v6, a2);
        if ( result )
        {
          v7 = *(_DWORD *)(v6 + 4 * a2);
          if ( v7 )
          {
            sub_F8910(v7, &v26);
            sub_F8994(v7, &v24);
            sub_F89E0(v7, &v22);
            v15 = v29;
            v17 = v31;
            v19 = v25;
            v14 = v28;
            v21 = v23;
            v12 = v26;
            v16 = v30;
            v18 = v24;
            v20 = v22;
            v13 = v27;
            v11 = a3;
            v10 = a2;
            v8 = sub_17D4A8(v9);
            v32[0] = -47;
            sub_17D628(v8, v32, 8, 1);
            sub_17D566(v9, &v10, 67);
            (*(void (__fastcall **)(_DWORD, _BYTE *, int, int, int))(**(_DWORD **)(v3 + 528) + 32))(
              *(_DWORD *)(v3 + 528),
              v9,
              1,
              7,
              1);
            return sub_17D542(v9);
          }
        }
      }
    }
  }
  return result;
}


// ======================================================================
