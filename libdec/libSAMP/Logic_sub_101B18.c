// ADDR: 0x101a1c
// SYMBOL: sub_101A1C
_DWORD *__fastcall sub_101A1C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r3
  _DWORD *v4; // r0
  int v5; // r2
  int v6; // r3
  _DWORD *v7; // r0
  int i; // r4
  _DWORD *v9; // r5
  int v10; // r0
  void *v11; // r0
  int v13; // [sp+0h] [bp-18h]
  int v14; // [sp+4h] [bp-14h]
  int v15; // [sp+8h] [bp-10h]
  int v16; // [sp+Ch] [bp-Ch]
  int v17; // [sp+10h] [bp-8h]
  int v18; // [sp+14h] [bp-4h]
  int savedregs; // [sp+18h] [bp+0h]

  v2 = a1[2];
  v3 = a1[176];
  *a1 = &off_22B0C8;
  word_25B202 = v3;
  v4 = (_DWORD *)sub_108324(v2);
  a1[1] = v4;
  if ( *(_DWORD *)(dword_23DEF0 + 4) )
  {
    if ( (_DWORD *)sub_F88F4(*(_DWORD *)(dword_23DEF0 + 4)) == a1 )
      sub_F885C(*(_DWORD *)(dword_23DEF0 + 4), 0);
    v4 = (_DWORD *)a1[1];
  }
  if ( v4 && *v4 != dword_23DF24 + 6716708 )
  {
    if ( sub_F8E0E((int)a1) )
    {
      v7 = (_DWORD *)a1[1];
      if ( v7 )
      {
        if ( v7[6] )
          (*(void (__fastcall **)(_DWORD *))(*v7 + 36))(v7);
      }
    }
    sub_107188(&unk_B340A, a1[2], v5, v6, v13, v14, v15, v16, v17, v18, savedregs);
    if ( !sub_108454(a1[176]) )
      sub_F9D44(a1[176], 0);
  }
  for ( i = 0; i != 16; ++i )
  {
    v9 = &a1[i];
    v10 = v9[11];
    if ( v10 && v10 != dword_25B204 )
    {
      sub_108CB8();
      v9[11] = 0;
    }
    v11 = (void *)v9[60];
    if ( v11 )
    {
      operator delete(v11);
      v9[60] = 0;
    }
  }
  return a1;
}


// ======================================================================
