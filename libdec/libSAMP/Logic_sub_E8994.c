// ADDR: 0xe8a02
// SYMBOL: sub_E8A02
void __fastcall sub_E8A02(__int64 *a1, unsigned int a2)
{
  __int64 v3; // r0
  int v4; // r2
  void *v5; // r0
  int v6; // r5
  int v7; // r12
  int v8; // r2
  int v9; // r3
  _DWORD v10[2]; // [sp+4h] [bp-24h] BYREF
  _DWORD v11[2]; // [sp+Ch] [bp-1Ch] BYREF
  void *v12; // [sp+14h] [bp-14h] BYREF
  int v13; // [sp+18h] [bp-10h]
  int v14; // [sp+1Ch] [bp-Ch]

  if ( a2 > 32 * *((_DWORD *)a1 + 2) )
  {
    v14 = 0;
    v12 = 0;
    v13 = 0;
    sub_E8A66(&v12);
    v3 = *a1;
    v4 = *((_DWORD *)a1 + 1) & 0x1F;
    HIDWORD(v3) = *((_DWORD *)a1 + 1) >> 5;
    v11[0] = *(_DWORD *)a1;
    v11[1] = 0;
    v10[1] = v4;
    v10[0] = v3 + 4 * HIDWORD(v3);
    sub_E8A8C(&v12, v11, v10);
    v5 = *(void **)a1;
    v6 = *((_DWORD *)a1 + 1);
    v7 = *((_DWORD *)a1 + 2);
    v8 = v13;
    v9 = v14;
    *(_DWORD *)a1 = v12;
    *((_DWORD *)a1 + 1) = v8;
    *((_DWORD *)a1 + 2) = v9;
    v12 = v5;
    v13 = v6;
    v14 = v7;
    if ( v5 )
      operator delete(v5);
  }
}


// ======================================================================
