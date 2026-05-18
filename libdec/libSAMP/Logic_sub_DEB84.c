// ADDR: 0xdec40
// SYMBOL: sub_DEC40
int __fastcall sub_DEC40(int a1, unsigned int a2, int a3, int a4, int a5, unsigned __int8 *a6)
{
  unsigned __int8 *v6; // r4
  unsigned int v10; // r2
  unsigned int v11; // lr
  char *v12; // r8
  unsigned int v13; // r4
  char *v14; // r1
  unsigned int v15; // r3
  unsigned int v16; // lr
  char *v17; // r8
  unsigned int v18; // r6
  char *v19; // r1
  unsigned int v20; // r3
  unsigned int v21; // r2
  int v22; // r4
  unsigned int v23; // r2
  _UNKNOWN **v25; // [sp+0h] [bp-238h] BYREF
  void *v26; // [sp+4h] [bp-234h]
  int v27; // [sp+8h] [bp-230h]
  int v28; // [sp+Ch] [bp-22Ch]
  _BYTE v29[504]; // [sp+10h] [bp-228h] BYREF
  _DWORD v30[3]; // [sp+208h] [bp-30h] BYREF
  _DWORD v31[9]; // [sp+214h] [bp-24h] BYREF

  v6 = a6;
  v10 = a2;
  if ( a6[12] )
  {
    v28 = 500;
    v26 = v29;
    v27 = 0;
    v25 = &off_22A5C8;
    if ( a5 )
    {
      v11 = a3 - a4;
      v12 = (char *)v30 + a3 + 1;
      if ( a3 - a4 < 2 )
      {
        v15 = a2;
        v14 = v12;
      }
      else
      {
        v13 = (v11 >> 1) + 1;
        v14 = (char *)v30 + a3 + 1;
        do
        {
          --v13;
          v15 = v10 / 0x64;
          *((_WORD *)v14 - 1) = *(_WORD *)&a00010203040506[2 * (v10 % 0x64)];
          v14 -= 2;
          v10 /= 0x64u;
        }
        while ( v13 > 1 );
      }
      v6 = a6;
      if ( v11 << 31 )
      {
        v21 = v15 / 0xA;
        *--v14 = (v15 % 0xA) | 0x30;
      }
      else
      {
        v21 = v15;
      }
      *(v14 - 1) = a5;
      sub_DCEB4(v31, (int)&v14[-a4 - 1], v21, a4);
    }
    else
    {
      sub_DCEB4(v31, (int)v30, a2, a3);
      v12 = (char *)v31[1];
    }
    sub_DCF1C((int)v30, (int)v12, (int)&v25);
    sub_DDA0C(v6, a1, (char *)v26, a4);
    v22 = sub_DCF1C((int)v26 + a4, (int)v26 + v27, a1);
    if ( v26 != v29 )
      operator delete(v26);
  }
  else
  {
    if ( a5 )
    {
      v16 = a3 - a4;
      v17 = (char *)&v25 + a3 + 1;
      if ( a3 - a4 < 2 )
      {
        v20 = a2;
        v19 = v17;
      }
      else
      {
        v18 = (v16 >> 1) + 1;
        v19 = (char *)&v25 + a3 + 1;
        do
        {
          --v18;
          v20 = v10 / 0x64;
          *((_WORD *)v19 - 1) = *(_WORD *)&a00010203040506[2 * (v10 % 0x64)];
          v19 -= 2;
          v10 /= 0x64u;
        }
        while ( v18 > 1 );
      }
      if ( v16 << 31 )
      {
        v23 = v20 / 0xA;
        *--v19 = (v20 % 0xA) | 0x30;
      }
      else
      {
        v23 = v20;
      }
      *(v19 - 1) = a5;
      sub_DCEB4(v30, (int)&v19[-a4 - 1], v23, a4);
    }
    else
    {
      sub_DCEB4(v30, (int)&v25, a2, a3);
      v17 = (char *)v30[1];
    }
    return sub_DCF1C((int)&v25, (int)v17, a1);
  }
  return v22;
}


// ======================================================================
