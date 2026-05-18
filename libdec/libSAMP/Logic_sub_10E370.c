// ADDR: 0x10e434
// SYMBOL: sub_10E434
int __fastcall sub_10E434(int a1, int a2, unsigned int *a3, _DWORD *a4)
{
  unsigned int *v4; // r4
  int v5; // r5
  unsigned int v6; // r12
  int v7; // r6
  int v9; // r8
  int v10; // r9
  unsigned int *v11; // r5
  int *v12; // r6
  int v13; // r1
  int v14; // t1
  int v15; // t1
  unsigned int v16; // r1
  unsigned __int64 v17; // r0
  unsigned int v18; // kr00_4
  unsigned int v19; // kr08_4
  _DWORD v21[9]; // [sp+0h] [bp-40h] BYREF
  unsigned int v22; // [sp+24h] [bp-1Ch] BYREF
  int v23; // [sp+28h] [bp-18h] BYREF

  v4 = (unsigned int *)&v23;
  v5 = 0;
  while ( 1 )
  {
    v6 = *(unsigned __int8 *)(a1 + v5) - 48;
    if ( v6 >= 0xA )
      break;
    *--v4 = v6;
    v7 = v5 + 1;
    if ( a1 + v5 + 1 != a2 && v5++ != 9 )
      continue;
    v9 = a1 + v7;
    v10 = 10 - v7;
    goto LABEL_8;
  }
  v9 = a1 + v5;
  v6 = *v4;
  v10 = 10 - v5;
LABEL_8:
  v11 = &v21[v10 + 1];
  if ( v11 < &v22 )
  {
    v12 = &dword_B4318;
    do
    {
      v14 = *v11++;
      v13 = v14;
      v15 = *v12++;
      v6 += v15 * v13;
    }
    while ( v11 < &v22 );
  }
  v16 = v22;
  *a3 = v6;
  v18 = v16;
  v19 = dword_B4314[9 - v10];
  v17 = v16 * (unsigned __int64)v19;
  *a4 = v17;
  if ( !is_mul_ok(v18, v19) )
    HIDWORD(v17) = 1;
  return v9 - HIDWORD(v17);
}


// ======================================================================
