// ADDR: 0x115290
// SYMBOL: sub_115290
int __fastcall sub_115290(int a1, int a2, int a3, int a4)
{
  int v6; // r4
  int v7; // r0
  int v8; // r2
  int v9; // r6
  int v10; // r0
  _BYTE *v11; // r0

  v6 = (*(int (__fastcall **)(int, int, int))(a1 + 68))(a2, a3, a4);
  v7 = sub_163C14(a2);
  if ( v7 )
  {
    v9 = v7;
    v10 = *(unsigned __int8 *)(a1 + 85);
    *(_DWORD *)(a1 + 80) = v9;
    if ( v10 )
    {
      sub_163C24(v9 + 8, "SquareTick", v8);
      v11 = (_BYTE *)(v9 + 32);
LABEL_6:
      *v11 = 1;
    }
  }
  else if ( *(_BYTE *)(a1 + 85) )
  {
    v11 = (_BYTE *)(a1 + 84);
    goto LABEL_6;
  }
  return v6;
}


// ======================================================================
