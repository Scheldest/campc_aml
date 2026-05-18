// ADDR: 0xe2f08
// SYMBOL: sub_E2F08
int __fastcall sub_E2F08(int a1, char *a2, int a3)
{
  int v3; // r4
  int v4; // r0
  int v7; // r1
  int v8; // r2
  char *v9; // r6
  int v10; // r2
  int v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r2
  double v16; // [sp+0h] [bp-38h] BYREF
  int v17; // [sp+8h] [bp-30h]
  double v18; // [sp+10h] [bp-28h] BYREF
  int v19; // [sp+18h] [bp-20h]

  v3 = a1;
  v4 = *(_DWORD *)(a1 + 8);
  v7 = v4 + 1;
  if ( *(_DWORD *)(v3 + 12) < (unsigned int)(v4 + 1) )
  {
    (**(void (__fastcall ***)(int))v3)(v3);
    v4 = *(_DWORD *)(v3 + 8);
    v7 = v4 + 1;
  }
  v8 = *(_DWORD *)(v3 + 4);
  v9 = &a2[a3];
  *(_DWORD *)(v3 + 8) = v7;
  *(_BYTE *)(v8 + v4) = 34;
  do
  {
    v19 = 0;
    *(_QWORD *)&v18 = (unsigned int)v9;
    sub_E29FC((unsigned int)a2, v9 - a2, (int)&v18);
    v17 = v19;
    v16 = v18;
    sub_DCF30(v3, a2, (char *)LODWORD(v18));
    a2 = (char *)HIDWORD(v16);
    if ( !HIDWORD(v16) )
      break;
    v3 = sub_DE078(v3, (unsigned __int8 **)&v16, v10, v11);
  }
  while ( a2 != v9 );
  v12 = *(_DWORD *)(v3 + 8);
  v13 = v12 + 1;
  if ( *(_DWORD *)(v3 + 12) < (unsigned int)(v12 + 1) )
  {
    (**(void (__fastcall ***)(int))v3)(v3);
    v12 = *(_DWORD *)(v3 + 8);
    v13 = v12 + 1;
  }
  v14 = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v3 + 8) = v13;
  *(_BYTE *)(v14 + v12) = 34;
  return v3;
}


// ======================================================================
