// ADDR: 0x877e0
// SYMBOL: sub_877E0
int *__fastcall sub_877E0(int *a1)
{
  int *v2; // r6
  int v3; // r1
  int v4; // r0
  int v5; // r0
  int v6; // r1
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r5
  __int64 v11; // r0
  int v13; // [sp+0h] [bp-20h] BYREF
  _DWORD v14[2]; // [sp+4h] [bp-1Ch] BYREF

  *((_BYTE *)a1 + 20) = 0;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v2 = (int *)operator new(0x804u);
  sub_87146(v2);
  sub_8732C(v2, (int)&unk_116E48);
  v3 = *((unsigned __int8 *)a1 + 20);
  v4 = a1[4];
  v13 = 0;
  if ( v3 && !v4 )
  {
    v5 = *a1;
    v6 = a1[3];
LABEL_13:
    *(_DWORD *)(v5 + 8 * v6 + 4) = v2;
    return a1;
  }
  v7 = a1[1];
  if ( v7 )
  {
    v8 = v7 - 1;
    v5 = *a1;
    v9 = 0;
    v6 = v7 / 2;
    while ( 1 )
    {
      v10 = *(_DWORD *)(v5 + 8 * v6);
      if ( !v10 )
        break;
      if ( v10 <= 0 )
        v9 = v6 + 1;
      else
        v8 = v6 - 1;
      v6 = v9 + (v8 - v9) / 2;
      if ( v8 < v9 )
        goto LABEL_11;
    }
    *((_BYTE *)a1 + 20) = 1;
    a1[3] = v6;
    a1[4] = 0;
    goto LABEL_13;
  }
LABEL_11:
  v14[1] = v2;
  v14[0] = 0;
  LODWORD(v11) = sub_879D4(a1, &v13, v14);
  HIDWORD(v11) = v13;
  *((_BYTE *)a1 + 20) = 1;
  *(_QWORD *)(a1 + 3) = v11;
  return a1;
}


// ======================================================================
