// ADDR: 0x1529e4
// SYMBOL: sub_1529E4
int __fastcall sub_1529E4(int a1, __int16 a2, _DWORD *a3, int a4, int a5, int a6)
{
  int v6; // r4
  int v9; // r4
  int v10; // r6
  int v11; // r0
  int v13; // [sp+Ch] [bp-34h] BYREF
  __int16 v14; // [sp+12h] [bp-2Eh] BYREF
  int *v15; // [sp+14h] [bp-2Ch] BYREF
  __int16 *v16; // [sp+18h] [bp-28h] BYREF
  _DWORD v17[9]; // [sp+1Ch] [bp-24h] BYREF

  v6 = a1 + 12;
  v14 = a2;
  if ( sub_15426C(a1 + 12, &v14) )
    return 0;
  v10 = operator new(0x90u);
  sub_153F7C(v10, *a3, a4, a5, a6);
  v13 = v10;
  v16 = &v14;
  v15 = &v13;
  sub_154074(v17, v6, &v14, &unk_B998D, &v16, &v15);
  v11 = v13;
  v9 = *(_DWORD *)(v17[0] + 12);
  v13 = 0;
  if ( v11 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 4))(v11);
  return v9;
}


// ======================================================================
