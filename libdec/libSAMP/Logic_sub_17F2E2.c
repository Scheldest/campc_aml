// ADDR: 0x182170
// SYMBOL: sub_182170
int __fastcall sub_182170(__int64 a1)
{
  int v1; // r4
  int v2; // r5

  if ( HIDWORD(a1) )
  {
    v1 = a1;
    LODWORD(a1) = *(_DWORD *)(a1 + 900);
    if ( (_DWORD)a1 )
    {
      v2 = 0;
      while ( *(_DWORD *)(*(_DWORD *)(v1 + 896) + 4 * v2) != HIDWORD(a1) )
      {
        if ( (_DWORD)a1 == ++v2 )
          return a1;
      }
      LODWORD(a1) = v2 + 1;
      if ( v2 != -1 )
      {
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)HIDWORD(a1) + 4))(HIDWORD(a1), v1);
        a1 = *(_QWORD *)(v1 + 896);
        *(_DWORD *)(v1 + 900) = --HIDWORD(a1);
        *(_DWORD *)(a1 + 4 * v2) = *(_DWORD *)(a1 + 4 * HIDWORD(a1));
      }
    }
  }
  return a1;
}


// ======================================================================
