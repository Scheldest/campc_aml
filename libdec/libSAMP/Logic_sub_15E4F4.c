// ADDR: 0x1380dc
// SYMBOL: sub_1380DC
int __fastcall sub_1380DC(int a1)
{
  _DWORD *i; // r5

  for ( i = (_DWORD *)dword_3141D0; i; i = (_DWORD *)*i )
  {
    sub_12BE22(a1, *(_DWORD *)(i[3] + 168));
    sub_12BE22(a1, i[3]);
  }
  sub_139568(&qword_3141C8);
  if ( HIBYTE(word_3141DC) )
    sub_138038(0);
  byte_3141E4 = 0;
  dword_3141E0 = 0;
  word_3141DC = 0;
  return sub_137E48(a1);
}


// ======================================================================
