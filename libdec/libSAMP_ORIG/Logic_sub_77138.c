// ADDR: 0x75b88
// SYMBOL: sub_75B88
int __fastcall sub_75B88(FILE *stream, int (__fastcall *a2)(int, _QWORD *, char *, char *), int a3)
{
  FILE *v3; // r11
  int v4; // r5
  int v5; // r9
  bool v6; // zf
  int v7; // r6
  char *v8; // r4
  signed int v9; // r0
  char *v10; // r0
  unsigned int v11; // r1
  int v12; // r2
  int v13; // t1
  int v14; // r0
  bool v15; // cc
  int v16; // t1
  bool v17; // zf
  char *v18; // r11
  int v19; // r1
  bool v20; // zf
  signed int v21; // r0
  char *v22; // r0
  unsigned int v23; // r1
  int v24; // r2
  int v25; // t1
  int v26; // r0
  const char *v27; // r6
  unsigned __int8 *v28; // r1
  int v29; // t1
  _BOOL4 v30; // r2
  unsigned __int8 *v31; // r1
  int v32; // t1
  int v33; // r0
  bool v34; // zf
  unsigned __int8 *v35; // r0
  _BOOL4 v36; // r2
  int v37; // r1
  int v38; // r3
  int v39; // t1
  _BOOL4 v40; // r2
  int v41; // t1
  signed int v42; // r0
  const char *v43; // r0
  unsigned int v44; // r1
  int v45; // r2
  int v46; // t1
  unsigned __int8 *v47; // r2
  _BOOL4 v48; // r6
  int v49; // r3
  int v50; // t1
  FILE *streama; // [sp+4h] [bp-164h]
  _QWORD dest[6]; // [sp+10h] [bp-158h] BYREF
  __int16 v56; // [sp+40h] [bp-128h]
  _QWORD v57[6]; // [sp+48h] [bp-120h] BYREF
  __int16 v58; // [sp+78h] [bp-F0h]
  char s[3]; // [sp+80h] [bp-E8h] BYREF
  char v60; // [sp+83h] [bp-E5h] BYREF

  v3 = stream;
  memset(v57, 0, sizeof(v57));
  v58 = 0;
  memset(dest, 0, sizeof(dest));
  v56 = 0;
  v4 = 0;
  if ( fgets(s, 200, stream) )
  {
    v5 = 0;
    streama = v3;
    while ( 1 )
    {
      v7 = 0;
      v8 = s;
      if ( !((unsigned __int8)s[0] ^ 0xEF | v5 | (unsigned __int8)s[1] ^ 0xBB | (unsigned __int8)s[2] ^ 0xBF) )
      {
        v7 = 3;
        v8 = &v60;
      }
      v9 = strlen(v8);
      if ( v9 >= 1 )
      {
        v10 = &v8[v9];
        v11 = (unsigned int)v10;
        do
        {
          v13 = *(unsigned __int8 *)--v11;
          v12 = v13;
          if ( v13 != 32 && (unsigned int)(v12 - 14) < 0xFFFFFFFB )
            break;
          *(v10 - 1) = 0;
          v10 = (char *)v11;
        }
        while ( v11 > (unsigned int)v8 );
      }
      v14 = (unsigned __int8)s[v7];
      ++v5;
      if ( s[v7] )
      {
        while ( v14 == 32 || (unsigned int)(v14 - 14) >= 0xFFFFFFFB )
        {
          v16 = (unsigned __int8)*++v8;
          v14 = v16;
          if ( !v16 )
            goto LABEL_16;
        }
        v17 = v14 == 35;
        if ( v14 != 35 )
          v17 = v14 == 59;
        if ( v17 )
          goto LABEL_7;
      }
      else
      {
LABEL_16:
        v14 = 0;
      }
      v15 = LOBYTE(dest[0]) != 0;
      if ( LOBYTE(dest[0]) )
        v15 = v8 > s;
      if ( v15 && v14 )
      {
        if ( !(a2(a3, v57, (char *)dest, v8) | v4) )
          v4 = v5;
        goto LABEL_7;
      }
      if ( v14 <= 60 )
        break;
      if ( v14 != 91 )
      {
        v18 = v8;
        if ( v14 == 61 )
          goto LABEL_33;
        goto LABEL_63;
      }
      v33 = (unsigned __int8)v8[1];
      v34 = v33 == 0;
      if ( v8[1] )
        v34 = v33 == 93;
      if ( !v34 )
      {
        v47 = (unsigned __int8 *)(v8 + 2);
        v48 = 0;
        while ( !v48 || v33 != 59 )
        {
          v50 = *v47++;
          v49 = v50;
          if ( v50 != 93 )
          {
            v48 = (unsigned int)(v33 - 9) < 5 || v33 == 32;
            v33 = v49;
            if ( v49 )
              continue;
          }
          v35 = v47 - 1;
          if ( v49 != 93 )
            break;
          goto LABEL_87;
        }
LABEL_88:
        if ( !v4 )
          v4 = v5;
        goto LABEL_7;
      }
      v35 = (unsigned __int8 *)(v8 + 1);
      if ( v8[1] != 93 )
        goto LABEL_88;
LABEL_87:
      *v35 = 0;
      strncpy((char *)v57, v8 + 1, 0x32u);
      LOBYTE(dest[0]) = 0;
      HIBYTE(v58) = 0;
LABEL_7:
      if ( !fgets(s, 200, v3) )
        return v4;
    }
    if ( !v14 )
      goto LABEL_7;
    if ( v14 != 59 )
    {
LABEL_63:
      v36 = 0;
      v37 = v14;
      v18 = v8;
      do
      {
        if ( v36 && v37 == 59 )
          break;
        v39 = (unsigned __int8)*++v18;
        v38 = v39;
        if ( v39 == 61 )
          goto LABEL_33;
        v36 = (unsigned int)(v37 - 9) < 5 || v37 == 32;
        v37 = v38;
      }
      while ( v38 );
      v18 = v8;
      if ( v14 != 58 )
      {
        v40 = 0;
        v18 = v8;
        while ( !v40 || v14 != 59 )
        {
          v41 = (unsigned __int8)*++v18;
          v19 = v41;
          if ( v41 )
          {
            v40 = (unsigned int)(v14 - 9) < 5 || v14 == 32;
            v14 = v19;
            if ( v19 != 58 )
              continue;
          }
          goto LABEL_34;
        }
      }
LABEL_33:
      v19 = (unsigned __int8)*v18;
LABEL_34:
      v20 = v19 == 61;
      if ( v19 != 61 )
        v20 = v19 == 58;
      if ( v20 )
      {
        *v18 = 0;
        v21 = strlen(v8);
        if ( v21 >= 1 )
        {
          v22 = &v8[v21];
          v23 = (unsigned int)v22;
          do
          {
            v25 = *(unsigned __int8 *)--v23;
            v24 = v25;
            if ( v25 != 32 && (unsigned int)(v24 - 14) < 0xFFFFFFFB )
              break;
            *(v22 - 1) = 0;
            v22 = (char *)v23;
          }
          while ( v23 > (unsigned int)v8 );
        }
        v27 = v18 + 1;
        v26 = (unsigned __int8)v18[1];
        if ( v18[1] )
        {
          v28 = (unsigned __int8 *)(v18 + 2);
          while ( v26 == 32 || (unsigned int)(v26 - 14) > 0xFFFFFFFA )
          {
            v29 = *v28++;
            v26 = v29;
            if ( !v29 )
            {
              v27 = (const char *)(v28 - 1);
              goto LABEL_76;
            }
          }
          v27 = (const char *)(v28 - 1);
          v30 = 0;
          v31 = v28 - 1;
          while ( !v30 || v26 != 59 )
          {
            v32 = *++v31;
            v30 = (unsigned int)(v26 - 9) < 5 || v26 == 32;
            v26 = v32;
            if ( !v32 )
              goto LABEL_76;
          }
          *v31 = 0;
        }
LABEL_76:
        v42 = strlen(v27);
        if ( v42 >= 1 )
        {
          v43 = &v27[v42];
          v44 = (unsigned int)v43;
          do
          {
            v46 = *(unsigned __int8 *)--v44;
            v45 = v46;
            if ( v46 != 32 && (unsigned int)(v45 - 14) < 0xFFFFFFFB )
              break;
            *((_BYTE *)v43 - 1) = 0;
            v43 = (const char *)v44;
          }
          while ( v44 > (unsigned int)v27 );
        }
        strncpy((char *)dest, v8, 0x32u);
        HIBYTE(v56) = 0;
        v6 = (a2(a3, v57, v8, (char *)v27) | v4) == 0;
      }
      else
      {
        v6 = v4 == 0;
      }
      if ( v6 )
        v4 = v5;
    }
    v3 = streama;
    goto LABEL_7;
  }
  return v4;
}


// ======================================================================
