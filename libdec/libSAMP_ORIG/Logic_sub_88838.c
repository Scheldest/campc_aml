// ADDR: 0x88448
// SYMBOL: sub_88448
int __fastcall sub_88448(int *a1, unsigned __int8 *a2, int a3)
{
  int v3; // r12
  int v4; // r1
  unsigned int v6; // r2
  unsigned __int8 v7; // r1
  int v8; // r12
  unsigned int v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // lr
  unsigned __int8 v12; // r1
  unsigned __int8 v13; // r12
  unsigned __int8 v14; // r1
  int v15; // r2

  v3 = *a2;
  if ( (v3 & 0x80) == 0 )
  {
    v4 = 1;
LABEL_3:
    *a1 = v3;
    return v4;
  }
  if ( (v3 & 0xE0) == 0xC0 )
  {
    *a1 = 65533;
    if ( a3 && a3 - (int)a2 < 2 )
    {
      return 1;
    }
    else
    {
      v6 = *a2;
      if ( v6 >= 0xC2 )
      {
        v7 = a2[1];
        if ( (v7 & 0xC0) == 0x80 )
        {
          v3 = v7 & 0x3F | ((v6 & 0x1F) << 6);
          v4 = 2;
          goto LABEL_3;
        }
      }
      return 2;
    }
  }
  else if ( (v3 & 0xF0) == 0xE0 )
  {
    *a1 = 65533;
    if ( a3 && a3 - (int)a2 < 3 )
      return 1;
    v8 = *a2;
    if ( v8 == 224 )
    {
      LOBYTE(v9) = a2[1];
      if ( (unsigned __int8)(v9 + 64) < 0xE0u )
        return 3;
    }
    else if ( v8 == 237 )
    {
      v9 = a2[1];
      if ( v9 > 0x9F )
        return 3;
    }
    else
    {
      LOBYTE(v9) = a2[1];
    }
    if ( (v9 & 0xC0) == 0x80 )
    {
      v12 = a2[2];
      if ( (v12 & 0xC0) == 0x80 )
      {
        v3 = (v12 & 0x3F) + (((v8 & 0xF) << 12) | ((v9 & 0x3F) << 6));
        v4 = 3;
        goto LABEL_3;
      }
      return 3;
    }
    else
    {
      return 3;
    }
  }
  else
  {
    if ( (v3 & 0xF8) != 0xF0 )
    {
      v3 = 0;
      v4 = 0;
      goto LABEL_3;
    }
    *a1 = 65533;
    if ( a3 && a3 - (int)a2 < 4 )
      return 1;
    v10 = *a2;
    if ( v10 <= 0xF4 )
    {
      if ( v10 == 240 )
      {
        LOBYTE(v11) = a2[1];
        if ( (unsigned __int8)(v11 + 64) < 0xD0u )
          return 4;
      }
      else if ( v10 == 244 )
      {
        v11 = a2[1];
        if ( v11 > 0x8F )
          return 4;
      }
      else
      {
        LOBYTE(v11) = a2[1];
      }
      if ( (v11 & 0xC0) != 0x80 )
        return 4;
      v13 = a2[2];
      if ( (v13 & 0xC0) == 0x80 )
      {
        v14 = a2[3];
        if ( (v14 & 0xC0) == 0x80 )
        {
          v15 = ((v10 & 7) << 18) | ((v13 & 0x3F) << 6) & 0xFFF | ((v11 & 0x3F) << 12);
          if ( (v15 & 0x1FF800) != 0xD800 )
          {
            v3 = v14 & 0x3F | v15;
            v4 = 4;
            goto LABEL_3;
          }
        }
      }
    }
    return 4;
  }
}


// ======================================================================
