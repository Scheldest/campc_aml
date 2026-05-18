// ADDR: 0x181c76
// SYMBOL: sub_181C76
_QWORD *__fastcall sub_181C76(_QWORD *result, int a2)
{
  *result = *(_QWORD *)(a2 + 564);
  return result;
}


// ======================================================================
// ADDR: 0x181c80
// SYMBOL: sub_181C80
int __fastcall sub_181C80(int *a1, int a2, int a3, int a4)
{
  int v5; // r0
  unsigned __int16 v6; // r10
  int v8; // r11
  int v9; // r4
  unsigned int v10; // r6
  int v11; // r0
  int v12; // r0
  int result; // r0
  __int64 v14; // kr00_8
  _DWORD v15[9]; // [sp+4h] [bp-24h] BYREF

  v5 = *(unsigned __int16 *)(a2 + 8);
  v6 = -1;
  v15[0] = a3;
  v15[1] = a4;
  if ( v5 )
  {
    v8 = -1;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      if ( sub_17E580(*(_DWORD *)(a2 + 832) + v9 + 4, (int)v15) || sub_17E580((int)v15, (int)&unk_BE944) )
      {
        v11 = *(_DWORD *)(a2 + 832);
        if ( *(_BYTE *)(v11 + v9) )
        {
          v14 = *(_QWORD *)(v11 + v9 + 12);
          result = *(_DWORD *)(v11 + v9 + 16);
          *a1 = v14;
          goto LABEL_12;
        }
        v12 = v11 + v9;
        v6 = *(_WORD *)(v12 + 16);
        v8 = *(_DWORD *)(v12 + 12);
      }
      ++v10;
      v9 += 2112;
      if ( v10 >= *(unsigned __int16 *)(a2 + 8) )
        goto LABEL_10;
    }
  }
  v8 = -1;
LABEL_10:
  result = v6;
  *a1 = v8;
LABEL_12:
  a1[1] = result;
  return result;
}


// ======================================================================
