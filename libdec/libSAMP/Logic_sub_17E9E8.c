// ADDR: 0x17e954
// SYMBOL: sub_17E954
int __fastcall sub_17E954(int a1, char *a2, int a3, int a4, int a5, int a6)
{
  int v9; // r4
  int v10; // r5

  sub_180270(a1, 100, 0);
  sub_17FB94(a1, 1, a4, a6, 0);
  if ( (unsigned int)(unsigned __int8)*a2 - 51 <= 0xFFFFFFFC )
    a2 = (char *)sub_18CC56((int)&unk_382751, a2);
  v9 = a1 + 2792;
  v10 = 32;
  do
  {
    *(_WORD *)(v9 + 4) = -1;
    *(_DWORD *)v9 = -1;
    *(_BYTE *)(v9 + 288) = 0;
    sub_17D55E((_DWORD *)(v9 + 12));
    v9 += 292;
    --v10;
  }
  while ( v10 );
  return sub_180148(a1, a2, a3, *(_DWORD *)(a1 + 2528), (*(_DWORD *)(a1 + 2516) + 7) >> 3);
}


// ======================================================================
