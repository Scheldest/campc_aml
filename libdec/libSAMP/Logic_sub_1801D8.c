// ADDR: 0x181978
// SYMBOL: sub_181978
int __fastcall sub_181978(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0
  int v8; // r0
  int v9; // r10
  int v10; // r5
  unsigned int v11; // r6
  int v12; // r0
  char v13; // [sp+7h] [bp-21h] BYREF
  _DWORD v14[8]; // [sp+8h] [bp-20h] BYREF

  v14[0] = a2;
  v14[1] = a3;
  if ( sub_17E580((int)v14, (int)&unk_BE944) )
    return 0;
  if ( a4 )
  {
    v8 = sub_182454(a1 + 836, v14, &v13);
    if ( v13 )
      return *(_DWORD *)(a1 + 832) + 2112 * *(_DWORD *)(*(_DWORD *)(a1 + 836) + 12 * v8 + 8);
    return 0;
  }
  if ( !*(_WORD *)(a1 + 8) )
    return 0;
  v9 = -1;
  v10 = 0;
  v11 = 0;
  do
  {
    if ( sub_17E580(*(_DWORD *)(a1 + 832) + v10 + 4, (int)v14) )
    {
      v12 = *(_DWORD *)(a1 + 832);
      if ( *(_BYTE *)(v12 + v10) )
        return v12 + v10;
      if ( v9 == -1 )
        v9 = v11;
    }
    ++v11;
    v10 += 2112;
  }
  while ( v11 < *(unsigned __int16 *)(a1 + 8) );
  result = 0;
  if ( v9 != -1 && !a5 )
    return *(_DWORD *)(a1 + 832) + 2112 * v9;
  return result;
}


// ======================================================================
// ADDR: 0x1824b6
// SYMBOL: sub_1824B6
int __fastcall sub_1824B6(int a1)
{
  __int64 v2; // kr00_8
  int v3; // r6

  v2 = *(_QWORD *)(a1 + 4);
  if ( *(_DWORD *)(v2 + 288) == HIDWORD(v2) || *(_BYTE *)(*(_DWORD *)(v2 + 288) + 284) )
  {
    v3 = *(_DWORD *)(v2 + 288);
    *(_DWORD *)(v2 + 288) = operator new(0x124u);
    *(_DWORD *)(*(_DWORD *)(v2 + 288) + 288) = v3;
  }
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(v2 + 288);
  return v2;
}


// ======================================================================
