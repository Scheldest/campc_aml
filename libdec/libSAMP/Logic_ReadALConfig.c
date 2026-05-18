// ADDR: 0x1d8154
// SYMBOL: sub_1D8154
char *__fastcall sub_1D8154(FILE *stream)
{
  FILE *v1; // r8
  int v2; // r6
  char *result; // r0
  size_t v4; // r0
  unsigned __int8 v5; // r6
  char *v6; // r2
  int v7; // r0
  char *v8; // r1
  char *v9; // r7
  int v10; // r1
  bool v11; // zf
  int v12; // r6
  unsigned int v14; // r5
  unsigned int v15; // r4
  const char *v16; // r7
  int i; // r5
  char *v18; // r0
  bool v19; // zf
  bool v20; // zf
  int v21; // r6
  const char *v22; // r8
  int v23; // t1
  char *v24; // r7
  unsigned int v25; // r5
  char *v26; // r6
  _DWORD *v27; // r0
  _DWORD *v28; // r6
  int v29; // r4
  size_t v30; // r0
  int j; // r5
  int v32; // r0
  bool v33; // zf
  int v34; // r4
  _DWORD *v35; // r6
  int v36; // r0
  int v37; // r4
  const char *v38; // r7
  int v39; // r6
  int v40; // t1
  FILE *v41; // [sp+64h] [bp-54h]
  int v42; // [sp+98h] [bp-20h]

  v1 = stream;
  v2 = dword_382930;
  result = fgets(byte_382938, 1024, stream);
  if ( result )
  {
    v41 = v1;
    while ( 1 )
    {
      v38 = (char *)&dword_382934 + 3;
      v42 = v2;
      do
      {
        v40 = *(unsigned __int8 *)++v38;
        v39 = v40;
      }
      while ( isspace(v40) );
      if ( !v39 || v39 == 35 )
        break;
      v4 = strlen(v38);
      j_memmove(byte_382938, v38, v4 + 1);
      v5 = byte_382938[0];
      if ( byte_382938[0] == 91 )
      {
        v6 = byte_382939;
        v7 = 0;
        do
        {
          v8 = &byte_382938[v7];
          v9 = v6;
          ++v7;
          v10 = (unsigned __int8)v8[1];
          v11 = v10 == 93;
          if ( v10 != 93 )
          {
            ++v6;
            v11 = v10 == 0;
          }
        }
        while ( !v11 );
        if ( v10 )
        {
          byte_382938[v7] = 0;
          while ( 1 )
          {
            v12 = (unsigned __int8)v9[1];
            if ( !v9[1] )
              break;
            if ( !isspace((unsigned __int8)*++v9) )
            {
              if ( v12 != 35 && (unsigned int)LogLevel >= 2 )
                j_al_print("LoadConfigFromFile", "config warning: extra data after block: \"%s\"\n", v9);
              break;
            }
          }
          v14 = dword_382934;
          if ( dword_382934 )
          {
            v15 = 0;
            v2 = dword_382930;
            while ( 1 )
            {
              v16 = *(const char **)v2;
              if ( !strcasecmp(*(const char **)v2, byte_382939) )
                break;
              ++v15;
              v2 += 12;
              if ( v15 >= v14 )
                goto LABEL_67;
            }
            if ( (unsigned int)LogLevel >= 3 )
              j_al_print("LoadConfigFromFile", "found block '%s'\n", v16);
            if ( v2 )
              goto LABEL_83;
            v14 = dword_382934;
          }
          else
          {
            v14 = 0;
          }
LABEL_67:
          v35 = realloc((void *)dword_382930, 12 * v14 + 12);
          if ( v35 )
          {
            v36 = dword_382934;
            dword_382930 = (int)v35;
            ++dword_382934;
            v37 = 3 * v36;
            v35[v37] = strdup(byte_382939);
            v2 = (int)&v35[v37];
            *(_DWORD *)(v2 + 4) = 0;
            *(_DWORD *)(v2 + 8) = 0;
            if ( (unsigned int)LogLevel >= 3 )
              j_al_print("LoadConfigFromFile", "found new block '%s'\n");
            goto LABEL_83;
          }
          if ( !LogLevel )
            break;
          j_al_print("LoadConfigFromFile", "config parse error: error reallocating config blocks\n");
          v2 = v42;
        }
        else
        {
          if ( !LogLevel )
            break;
          j_al_print("LoadConfigFromFile", "config parse error: bad line \"%s\"\n", byte_382938);
          v2 = v42;
        }
      }
      else
      {
        for ( i = 0; ; ++i )
        {
          if ( !v5 )
            goto LABEL_32;
          v19 = v5 == 35;
          if ( v5 != 35 )
            v19 = v5 == 61;
          if ( v19 || isspace(v5) )
            break;
          v18 = &byte_382938[i];
          v5 = v18[1];
        }
        v20 = i == 0;
        if ( i )
          v20 = v5 == 35;
        if ( v20 )
        {
LABEL_32:
          if ( LogLevel )
            j_al_print("LoadConfigFromFile", "config parse error: malformed option line: \"%s\"\n", byte_382938);
          v2 = v42;
        }
        else
        {
          if ( v5 != 61 )
          {
            byte_382938[i] = 0;
            do
              v21 = (unsigned __int8)byte_382938[++i];
            while ( isspace(v21) );
            if ( v21 != 61 )
            {
              if ( LogLevel )
                j_al_print("LoadConfigFromFile", "config parse error: option without a value: \"%s\"\n", byte_382938);
              goto LABEL_77;
            }
          }
          byte_382938[i] = 0;
          v22 = &byte_382938[i];
          do
            v23 = *(unsigned __int8 *)++v22;
          while ( isspace(v23) );
          v24 = *(char **)(v42 + 4);
          v25 = *(_DWORD *)(v42 + 8);
          v26 = v24;
          if ( v25 )
          {
            v26 = *(char **)(v42 + 4);
            do
            {
              if ( !strcasecmp(*(const char **)v26, byte_382938) )
                break;
              v26 += 8;
            }
            while ( (v26 - v24) >> 3 < v25 );
          }
          if ( (v26 - v24) >> 3 >= v25 )
          {
            v27 = realloc(v24, 8 * v25 + 8);
            v28 = v27;
            if ( !v27 )
            {
              if ( LogLevel )
                j_al_print("LoadConfigFromFile", "config parse error: error reallocating config entries\n");
LABEL_77:
              v2 = v42;
              v1 = v41;
              goto LABEL_83;
            }
            v29 = *(_DWORD *)(v42 + 8);
            *(_DWORD *)(v42 + 4) = v27;
            *(_DWORD *)(v42 + 8) = v29 + 1;
            v27[2 * v29] = strdup(byte_382938);
            v26 = (char *)&v28[2 * v29];
            *((_DWORD *)v26 + 1) = 0;
          }
          v30 = strlen(v22);
          j_memmove(byte_382938, v22, v30 + 1);
          v1 = v41;
          for ( j = 0; ; ++j )
          {
            v32 = (unsigned __int8)byte_382938[j];
            if ( !byte_382938[j] )
              break;
            v33 = v32 == 35;
            if ( v32 != 35 )
              v33 = v32 == 10;
            if ( v33 )
              break;
          }
          do
          {
            v34 = j;
            if ( j < 1 )
              break;
            --j;
          }
          while ( isspace((unsigned __int8)byte_382938[v34 - 1]) );
          byte_382938[v34] = 0;
          free(*((void **)v26 + 1));
          *((_DWORD *)v26 + 1) = strdup(byte_382938);
          if ( (unsigned int)LogLevel > 2 )
            j_al_print("LoadConfigFromFile", "found '%s' = '%s'\n", *(_DWORD *)v26);
          v2 = v42;
        }
      }
LABEL_83:
      result = fgets(byte_382938, 1024, v1);
      if ( !result )
        return result;
    }
    v2 = v42;
    goto LABEL_83;
  }
  return result;
}


// ======================================================================
