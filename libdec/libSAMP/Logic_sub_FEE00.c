// ADDR: 0x128fec
// SYMBOL: sub_128FEC
int *__fastcall sub_128FEC(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r5
  int *result; // r0

  v2 = *(unsigned __int16 *)(a1 + 38);
  if ( v2 == 4795 || v2 == 15965 )
  {
    word_314134 = v2;
    v3 = word_B3CB4[sub_129074() ^ 2];
    *(_WORD *)(a1 + 38) = v3;
    dword_314138 = *(_DWORD *)(sub_163768(v3) + 4 * *(unsigned __int16 *)(a1 + 38));
    v4 = sub_163768(dword_314138);
    v5 = *(_DWORD *)(v4 + 4 * (unsigned __int16)word_314134);
    result = (int *)sub_163768(v4);
    result[*(unsigned __int16 *)(a1 + 38)] = v5;
  }
  else
  {
    result = &dword_314138;
    dword_314138 = 0;
    word_314134 = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x1290e0
// SYMBOL: sub_1290E0
int *__fastcall sub_1290E0(int *result)
{
  __int16 v1; // r1
  int *v2; // r4
  int v3; // r6

  v1 = word_314134;
  if ( word_314134 )
  {
    v2 = result;
    result = &dword_314138;
    v3 = dword_314138;
    if ( dword_314138 )
    {
      result = (int *)sub_163768(&dword_314138);
      v1 = word_314134;
      result[*((unsigned __int16 *)v2 + 19)] = v3;
    }
    *((_WORD *)v2 + 19) = v1;
  }
  return result;
}


// ======================================================================
