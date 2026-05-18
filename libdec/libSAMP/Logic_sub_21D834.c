// ADDR: 0x21d9bc
// SYMBOL: sub_21D9BC
int __fastcall sub_21D9BC(__int64 a1, int a2)
{
  int *v2; // r5
  int v3; // r6
  int v5; // r1
  int result; // r0

  v2 = (int *)a1;
  v3 = *(_DWORD *)(HIDWORD(a1) + 12);
  LODWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 8);
  while ( 1 )
  {
    HIDWORD(a1) = *(_DWORD *)a1;
    *v2 = v3;
    v2[1] = a1;
    v5 = (*(int (__fastcall **)(_DWORD, int))(HIDWORD(a1) + 12))(a1, a2);
    result = *(unsigned __int8 *)(v5 + 4);
    if ( result != 12 )
      break;
    a1 = *(_QWORD *)(v5 + 8);
    if ( SHIDWORD(a1) < v3 )
      v3 = HIDWORD(a1);
  }
  return result;
}


// ======================================================================
