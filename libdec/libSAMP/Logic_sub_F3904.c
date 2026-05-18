// ADDR: 0xf32e0
// SYMBOL: sub_F32E0
int __fastcall sub_F32E0(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  _DWORD v6[4]; // [sp+0h] [bp-30h] BYREF
  _DWORD *v7; // [sp+10h] [bp-20h]

  v2 = dword_23DF24;
  if ( !dword_23DF24 )
  {
    v2 = sub_163FF8("libGTASA.so");
    dword_23DF24 = v2;
  }
  j_memcpy(&dword_23FCE0, (const void *)(v2 + 7288724), 0x2F8u);
  sub_1641C4(v2 + 6788220);
  v3 = dword_23DF24;
  *(_DWORD *)(dword_23DF24 + 6788220) = &dword_23FCE0;
  sub_164196(v3 + 6763748, sub_F34B0, &off_23FFE0);
  sub_164196(dword_23DF24 + 6748832, sub_F3598, &dword_23FFE4);
  sub_164196(dword_23DF24 + 6768356, sub_F35C8, &dword_23FFE8);
  sub_164196(dword_23DF24 + 6743524, sub_F3698, &dword_23FFEC);
  sub_164196(dword_23DF24 + 6763352, sub_F37A4, &dword_23FFF0);
  sub_164196(dword_23DF24 + 6750896, sub_F37DC, &dword_23FFF4);
  dword_23FFF8 = (int)&unk_2AFB79 + dword_23DF24;
  dword_240004 = (int)&unk_2B27F1 + dword_23DF24;
  dword_240000 = (int)&unk_2AFB79 + dword_23DF24 + 1240;
  dword_24000C = (int)&unk_2B27F1 + dword_23DF24 + 92;
  off_23FFFC = (_UNKNOWN *)((char *)&unk_2AFB79 + dword_23DF24 + 748);
  dword_240008 = (int)&unk_2B27F1 + dword_23DF24 + 52;
  v7 = v6;
  v6[0] = &off_22AC44;
  sub_1642EC(dword_23DF24 + 2818048, v6);
  if ( v6 == v7 )
  {
    v4 = 4;
    goto LABEL_7;
  }
  if ( v7 )
  {
    v4 = 5;
LABEL_7:
    (*(void (**)(void))(*v7 + 4 * v4))();
  }
  return a1;
}


// ======================================================================
