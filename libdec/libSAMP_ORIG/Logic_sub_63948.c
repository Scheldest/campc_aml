// ADDR: 0x7eefc
// SYMBOL: sub_7EEFC
int __fastcall sub_7EEFC(char *a1, int a2)
{
  __int16 v3; // r9
  int v5; // r4
  int i; // r6
  int *v7; // r0
  int v8; // r1
  __int16 v9; // [sp+2h] [bp-1Eh] BYREF
  int v10; // [sp+4h] [bp-1Ch]

  v3 = a2;
  if ( byte_1A45F3 )
  {
    sub_80664("[dbg:raknet:client:connect] : connecting to game server '%s:%i'...", a1, a2);
    std::string::assign((int)&dword_1A4600, a1);
    if ( !dword_1A45F4 )
    {
      v5 = dword_1A4984;
      for ( i = dword_1A4980; i != v5; i += 24 )
      {
        v7 = *(int **)(i + 16);
        if ( v7 )
        {
          v8 = *v7;
          v9 = v3;
          (*(void (__fastcall **)(int *, int *, __int16 *))(v8 + 24))(v7, &dword_1A4600, &v9);
        }
      }
    }
    dword_1A45F4 = 1;
    sub_80664("[err:raknet:client:connect] : No pluginInit received. Hiding microphone icon.");
    byte_1A49B0 = 0;
    sub_80664("[dbg:raknet:client:connect] : connected");
  }
  return v10;
}


// ======================================================================
// ADDR: 0x8775c
// SYMBOL: sub_8775C
char *__fastcall sub_8775C(int a1, char *name)
{
  struct hostent *v2; // r0
  bool v3; // zf

  v2 = gethostbyname(name);
  v3 = v2 == 0;
  if ( v2 )
  {
    v2 = (struct hostent *)*v2->h_addr_list;
    v3 = v2 == 0;
  }
  if ( v3 )
    return 0;
  else
    return inet_ntoa((struct in_addr)v2->h_name);
}


// ======================================================================
