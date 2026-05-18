// ADDR: 0x175354
// SYMBOL: sub_175354
int __fastcall sub_175354(int a1, char *s, int a3, void *a4, int a5)
{
  unsigned int v8; // r0
  int v9; // r0
  char *v10; // r2
  unsigned int v11; // r1
  int v12; // r11
  _DWORD *v13; // r4
  unsigned int v14; // r8
  __int16 v15; // r12
  unsigned int v16; // r0
  unsigned int v17; // t1
  int v18; // r5
  unsigned int v19; // r3
  unsigned int v20; // r6
  __int16 v21; // r3
  int v22; // r3
  int v23; // r6
  int v24; // r0
  int v25; // r3
  int v26; // r0
  int v27; // r3
  int v28; // r5

  v8 = (unsigned __int64)(1717986919LL * (int)(strlen(s) + 4)) >> 32;
  v9 = sub_1654B0(4 * ((v8 >> 1) + (v8 >> 31)));
  v11 = (unsigned __int8)*s;
  v12 = v9;
  if ( *s )
  {
    v10 = s + 2;
    v13 = (_DWORD *)v9;
    do
    {
      v14 = (unsigned __int8)*(v10 - 1);
      v15 = -35;
      v17 = (unsigned __int8)*v10;
      v10 += 5;
      v16 = v17;
      v18 = -35;
      v19 = (unsigned __int8)*(v10 - 3);
      v20 = (unsigned __int8)*(v10 - 4);
      if ( v19 > 0x5B )
        v15 = -36;
      v21 = v19 + v15;
      if ( v20 > 0x5B )
        v18 = -36;
      v22 = 85 * v21 + v20 + v18;
      v23 = -35;
      if ( v16 > 0x5B )
        v23 = -36;
      v24 = v16 + v23 + 85 * v22;
      v25 = -35;
      if ( v14 > 0x5B )
        v25 = -36;
      v26 = v25 + v14 + 85 * v24;
      v27 = -35;
      if ( v11 > 0x5B )
        v27 = -36;
      *v13++ = v11 + v27 + 85 * v26;
      v11 = (unsigned __int8)*(v10 - 2);
    }
    while ( *(v10 - 2) );
  }
  v28 = sub_1754E4(a1, v12, (int)v10, a3, a4, a5);
  sub_165578(v12);
  return v28;
}


// ======================================================================
