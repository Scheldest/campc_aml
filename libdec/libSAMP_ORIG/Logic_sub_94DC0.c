// ADDR: 0x97058
// SYMBOL: sub_97058
int sub_97058()
{
  int result; // r0
  int v1; // r4
  int v2; // r0
  void (__fastcall *v3)(_DWORD, void *); // r2
  void *v4; // r1
  int v5; // r2

  result = dword_1ACF68;
  if ( *(_BYTE *)(dword_1ACF68 + 11552) )
  {
    v1 = dword_1ACF68 + 11552;
    sub_99FEC("\n");
    v2 = *(_DWORD *)(v1 + 4);
    switch ( v2 )
    {
      case 4:
        if ( *(int *)(v1 + 12) >= 2 )
        {
          v3 = *(void (__fastcall **)(_DWORD, void *))(dword_1ACF68 + 204);
          if ( v3 )
          {
            v4 = &unk_1ACF6C;
            if ( *(_DWORD *)(v1 + 20) )
              v4 = *(void **)(v1 + 20);
            v3(*(_DWORD *)(dword_1ACF68 + 208), v4);
          }
        }
        break;
      case 2:
        fclose(*(FILE **)(v1 + 8));
        break;
      case 1:
        fflush(*(FILE **)(v1 + 8));
        break;
    }
    result = *(_DWORD *)(v1 + 20);
    *(_DWORD *)(v1 + 4) = 0;
    *(_DWORD *)(v1 + 8) = 0;
    *(_BYTE *)v1 = 0;
    if ( result )
    {
      v5 = dword_1ACF68;
      *(_DWORD *)(v1 + 12) = 0;
      *(_DWORD *)(v1 + 16) = 0;
      if ( v5 )
        --*(_DWORD *)(v5 + 880);
      off_11724C(result, dword_1ACF70);
      result = 0;
      *(_DWORD *)(v1 + 20) = 0;
    }
  }
  return result;
}


// ======================================================================
