// ADDR: 0x1057cc
// SYMBOL: sub_1057CC
int __fastcall sub_1057CC(int a1)
{
  int v2; // r5
  int v3; // r8
  int result; // r0
  int v5; // r10
  int v6; // r11
  int v7; // r6
  float v8; // s0
  arg12_F894A v9; // [sp+58h] [bp-68h] BYREF
  int v10; // [sp+60h] [bp-60h]
  int v11[4]; // [sp+64h] [bp-5Ch] BYREF
  arg6_F894A v12; // [sp+74h] [bp-4Ch]
  int v13; // [sp+7Ch] [bp-44h]
  int v14; // [sp+80h] [bp-40h]
  arg9_F894A v15; // [sp+84h] [bp-3Ch]
  int v16; // [sp+8Ch] [bp-34h]
  int v17; // [sp+90h] [bp-30h]
  arg12_F894A v18; // [sp+94h] [bp-2Ch]
  int v19; // [sp+9Ch] [bp-24h]

  sub_F9104(a1);
  if ( sub_F8C70(a1) )
    sub_105984(a1);
  v2 = 0;
  v3 = 0;
  do
  {
    result = *(unsigned __int8 *)(a1 + v3 + 116);
    if ( *(_BYTE *)(a1 + v3 + 116) )
    {
      v5 = a1 + 4 * v3;
      result = *(_DWORD *)(v5 + 648);
      if ( result )
      {
        result = *(_DWORD *)(result + 4);
        if ( result )
        {
          if ( sub_F8C70(a1) )
          {
            v6 = a1 + v2;
            result = *(_DWORD *)(*(_DWORD *)(a1 + 92) + 4 * *(_DWORD *)(a1 + v2 + 132) + 1172);
            if ( !result )
              return result;
            v7 = *(_DWORD *)(result + 20);
            ((void (__fastcall *)(_DWORD))(dword_23DF24 + 4181981))(*(_DWORD *)(*(_DWORD *)(v5 + 648) + 4));
            sub_1059B4(a1, v11, v7);
            sub_108F30(&v9, v11, v6 + 136);
            v8 = *(float *)(v6 + 148);
            v18 = v9;
            v19 = v10;
            if ( v8 != 0.0 )
              sub_109038(v11, 0, LODWORD(v8));
            if ( *(float *)(v6 + 152) != 0.0 )
              sub_109038(v11, 1, *(_DWORD *)(v6 + 152));
            if ( *(float *)(v6 + 156) != 0.0 )
              sub_109038(v11, 2, *(_DWORD *)(v6 + 156));
            sub_10906C(v11, v6 + 160);
            sub_F894A(*(_DWORD *)(v5 + 648), v11[0], v11[1], v11[2], v11[3], v12, v13, v14, v15, v16, v17, v18, v19);
            sub_F8C14(*(_DWORD *)(v5 + 648));
            result = ((int (__fastcall *)(_DWORD))(dword_23DF24 + 4181485))(*(_DWORD *)(*(_DWORD *)(v5 + 648) + 4));
          }
          else
          {
            result = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(v5 + 648) + 16))(
                       *(_DWORD *)(v5 + 648),
                       0,
                       0,
                       0);
          }
        }
      }
    }
    v2 += 52;
    ++v3;
  }
  while ( v2 != 520 );
  return result;
}


// ======================================================================
