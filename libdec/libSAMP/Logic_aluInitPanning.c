// ADDR: 0x1d9604
// SYMBOL: sub_1D9604
unsigned int __fastcall sub_1D9604(const char *a1, float *a2, int a3, int a4)
{
  char *v7; // r10
  const char *v8; // r5
  int v9; // t1
  int v10; // r0
  char *v11; // r0
  const char *v12; // r9
  bool v13; // zf
  const char *v14; // r7
  char *v15; // r6
  int v16; // t1
  int v17; // r0
  int v18; // r7
  int v19; // t1
  int v20; // r0
  float *v21; // r6
  int v22; // r3
  float *v23; // r7
  int v24; // r6
  int v25; // r2
  float *v26; // r0
  int v27; // r1
  int v28; // r3
  float v29; // s0
  float v30; // r0
  int v31; // r0
  const char *v33; // [sp+4h] [bp-4Ch]
  char *v34; // [sp+10h] [bp-40h]
  char *s[12]; // [sp+20h] [bp-30h] BYREF

  if ( j_ConfigValueStr(0, a1, s) || j_ConfigValueStr(0, "layout", s) )
  {
    v33 = a1;
    v34 = strdup(s[0]);
    if ( v34 )
    {
      v7 = v34;
      while ( 1 )
      {
        v8 = v7;
        if ( !*v7 )
          break;
        v7 = strchr(v7, 44);
        if ( v7 )
        {
          *v7 = 0;
          do
          {
            do
            {
              v9 = (unsigned __int8)*++v7;
              v10 = isspace(v9);
            }
            while ( v9 == 44 );
          }
          while ( v10 );
        }
        else
        {
          v7 = 0;
        }
        v11 = strchr(v8, 61);
        v12 = v11;
        v13 = v11 == 0;
        if ( v11 )
          v13 = v8 == v11;
        if ( v13 )
        {
          if ( !LogLevel )
            goto LABEL_52;
          j_al_print("SetSpeakerArrangement", "Malformed speaker key: %s\n", v8);
          if ( !v7 )
            break;
        }
        else
        {
          v14 = v11 - 1;
          v15 = v11 - 1;
          do
          {
            v16 = (unsigned __int8)*v15--;
            v17 = isspace(v16);
            if ( v8 == v14 )
              break;
            v14 = v15;
          }
          while ( v17 );
          v18 = 0;
          v15[2] = 0;
          if ( !strcmp(v8, (const char *)&dword_1D9A94)
            || !strcmp(v8, "front-left")
            || (v18 = 1, !strcmp(v8, "fr"))
            || !strcmp(v8, "front-right")
            || (v18 = 2, !strcmp(v8, "fc"))
            || !strcmp(v8, "front-center")
            || (v18 = 4, !strcmp(v8, "bl"))
            || !strcmp(v8, "back-left")
            || (v18 = 5, !strcmp(v8, "br"))
            || !strcmp(v8, "back-right")
            || (v18 = 6, !strcmp(v8, "bc"))
            || !strcmp(v8, "back-center")
            || (v18 = 7, !strcmp(v8, "sl"))
            || !strcmp(v8, "side-left")
            || (v18 = 8, !strcmp(v8, "sr"))
            || !strcmp(v8, "side-right") )
          {
            *v12 = 0;
            do
              v19 = *(unsigned __int8 *)++v12;
            while ( isspace(v19) );
            if ( a4 < 1 )
              goto LABEL_52;
            v20 = 0;
            v21 = a2;
            while ( *(_DWORD *)(a3 + 4 * v20) != v18 )
            {
              ++v20;
              ++v21;
              if ( v20 >= a4 )
                goto LABEL_52;
            }
            v22 = strtol(v12, 0, 10);
            if ( (unsigned int)(v22 + 180) > 0x168 )
            {
              if ( LogLevel )
                j_al_print("SetSpeakerArrangement", "Invalid angle for speaker \"%s\": %ld\n", v8);
              goto LABEL_52;
            }
            *v21 = (float)v22 * 0.017453;
            if ( !v7 )
              break;
          }
          else if ( LogLevel )
          {
            j_al_print("SetSpeakerArrangement", "Unknown speaker for %s: \"%s\"\n", v33, v8);
            if ( !v7 )
              break;
          }
          else
          {
LABEL_52:
            if ( !v7 )
              break;
          }
        }
      }
    }
    free(v34);
    if ( a4 >= 1 )
    {
      v23 = a2 + 1;
      v24 = 0;
      do
      {
        v25 = v24++;
        if ( v24 < a4 )
        {
          v26 = v23;
          v27 = v24;
          v28 = v25;
          do
          {
            v29 = *v26++;
            if ( v29 < a2[v28] )
              v28 = v27;
            ++v27;
          }
          while ( a4 != v27 );
          if ( v28 != v25 )
          {
            v30 = a2[v25];
            a2[v25] = a2[v28];
            a2[v28] = v30;
            v31 = *(_DWORD *)(a3 + 4 * v25);
            *(_DWORD *)(a3 + 4 * v25) = *(_DWORD *)(a3 + 4 * v28);
            *(_DWORD *)(a3 + 4 * v28) = v31;
          }
        }
        ++v23;
      }
      while ( v24 != a4 );
    }
  }
  return _stack_chk_guard - (unsigned int)s[1];
}


// ======================================================================
