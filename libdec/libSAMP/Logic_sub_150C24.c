// ADDR: 0x150ef2
// SYMBOL: sub_150EF2
void __fastcall sub_150EF2(int *a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r1
  bool v5; // zf
  __int64 v6; // kr08_8

  if ( a1[2] )
  {
    v3 = a1[1];
    v2 = *a1;
    v4 = *(_DWORD *)a1[1];
    v5 = a1[1] == (_DWORD)a1;
    a1[2] = 0;
    *(_DWORD *)(v4 + 4) = *(_DWORD *)(v2 + 4);
    **(_DWORD **)(v2 + 4) = v4;
    if ( !v5 )
    {
      do
      {
        v6 = *(_QWORD *)(v3 + 4);
        *(_DWORD *)(v3 + 8) = 0;
        if ( HIDWORD(v6) )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v6) + 4))(HIDWORD(v6));
        operator delete((void *)v3);
        v3 = v6;
      }
      while ( (int *)v6 != a1 );
    }
  }
}


// ======================================================================
