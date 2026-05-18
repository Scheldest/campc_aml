// ADDR: 0x124b0c
// SYMBOL: sub_124B0C
int __fastcall sub_124B0C(int a1, char *s)
{
  int v2; // lr
  int v5; // r10
  int v6; // r4
  int v7; // r5
  const char *v8; // r6
  int v9; // r6
  int v10; // r0
  const char *v11; // r2

  if ( s && *s )
  {
    v5 = dword_23DF24;
    v6 = dword_238E90;
    if ( dword_238E90 < 1 )
      goto LABEL_10;
    v7 = 0;
    v8 = (const char *)dword_263C48;
    while ( strncasecmp(v8, s, 0xEu) )
    {
      ++v7;
      v8 += 14;
      if ( v6 == v7 )
        goto LABEL_10;
    }
    if ( v6 == v7 )
    {
LABEL_10:
      v9 = v2 - v5;
      if ( v2 - v5 > 4667564 )
      {
        if ( v9 == 4667565 )
        {
          sub_125590(a1, s);
          v10 = dword_238EA8;
          v11 = "CHandlingHook: Handling id for flying \"%s\" not registered. Register it at %d";
          goto LABEL_19;
        }
        if ( v9 == 4668145 )
        {
          sub_1253B8(a1, s);
          v10 = dword_238EA0;
          v11 = "CHandlingHook: Handling id for bike \"%s\" not registered. Register it at %d";
          goto LABEL_19;
        }
      }
      else
      {
        if ( v9 == 4666161 )
        {
          sub_12528C(a1, s);
          v10 = dword_238EA0;
          v11 = "CHandlingHook: Handling id for car \"%s\" not registered. Register it at %d";
          goto LABEL_19;
        }
        if ( v9 == 4666919 )
        {
          sub_125788(a1, s);
          v10 = dword_238EAC;
          v11 = "CHandlingHook: Handling id for boat \"%s\" not registered. Register it at %d";
LABEL_19:
          _android_log_print(4, "AXL", v11, s, v10);
          return dword_238EA0;
        }
      }
      sub_125AF0(dword_238EA0 + 1, s);
      _android_log_print(
        5,
        "AXL",
        "CHandlingHook: Handling id for %08X \"%s\" not registered. Register it at %d",
        v2 - v5,
        s,
        dword_238EA0);
      return dword_238EA0;
    }
  }
  else
  {
    _android_log_print(
      6,
      "AXL",
      "%s passed empty line!",
      "int CHandlingHook::FindExactWord(const char *, char *, int, int)");
    return dword_238E90;
  }
  return v7;
}


// ======================================================================
// ADDR: 0x125a8c
// SYMBOL: sub_125A8C
int __fastcall sub_125A8C(int a1, char *s1)
{
  int v3; // r5
  int v4; // r11
  int v5; // r6
  int v6; // r4
  int v7; // r10
  const char *v8; // r1

  v3 = 0;
  v4 = dword_238E90;
  v5 = dword_263C48;
  v6 = dword_263C48;
  v7 = ((dword_238E90 - 1) & ~((dword_238E90 - 1) >> 31)) + 1;
  while ( 1 )
  {
    v8 = (const char *)v5;
    if ( v5 )
      v8 = (const char *)v6;
    if ( v4 <= v3 )
      v8 = 0;
    if ( !strncasecmp(s1, v8, 0xEu) )
      break;
    ++v3;
    v6 += 14;
    if ( v7 == v3 )
      return v7;
  }
  return v3;
}


// ======================================================================
