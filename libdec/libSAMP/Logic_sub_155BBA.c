// ADDR: 0x137f94
// SYMBOL: sub_137F94
int __fastcall sub_137F94(int a1, char a2)
{
  int v3; // r6
  int v4; // r0
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  int v8; // r0
  _BYTE v10[17]; // [sp+7h] [bp-11h] BYREF

  v10[0] = a2;
  v3 = dword_3141E0;
  v4 = sub_13934C(&qword_3141C8, v10);
  if ( !v4 )
    goto LABEL_10;
  v5 = *(_DWORD *)(*(_DWORD *)(v4 + 12) + 116);
  v6 = v3 == v5;
  if ( v3 == v5 )
    v6 = HIBYTE(word_3141DC) == 0;
  if ( v6 )
    sub_138038(1);
  v7 = sub_13934C(&qword_3141C8, v10);
  if ( !v7 || (sub_12BE22(a1, *(_DWORD *)(*(_DWORD *)(v7 + 12) + 168)), (v8 = sub_13934C(&qword_3141C8, v10)) == 0) )
LABEL_10:
    sub_EE13C((int)"unordered_map::at: key not found");
  sub_12BE22(a1, *(_DWORD *)(v8 + 12));
  sub_1393F2(&qword_3141C8, v10);
  return sub_137E48(a1);
}


// ======================================================================
