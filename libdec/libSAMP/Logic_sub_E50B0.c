// ADDR: 0xe5108
// SYMBOL: sub_E5108
_DWORD *__fastcall sub_E5108(_DWORD *a1)
{
  FILE *v1; // r5
  int v3; // r8
  int v4; // r6
  int v5; // r0
  int v6; // r5

  v1 = (FILE *)a1[16];
  if ( !v1 )
    return 0;
  v3 = (*(int (__fastcall **)(_DWORD *))(*a1 + 24))(a1);
  v4 = fclose(v1);
  v5 = *a1;
  v6 = 0;
  a1[16] = 0;
  (*(void (__fastcall **)(_DWORD *, _DWORD, _DWORD))(v5 + 12))(a1, 0, 0);
  if ( !(v4 | v3) )
    return a1;
  return (_DWORD *)v6;
}


// ======================================================================
