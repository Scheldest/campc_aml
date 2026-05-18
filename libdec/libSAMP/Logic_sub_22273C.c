// ADDR: 0x222828
// SYMBOL: sub_222828
int __fastcall sub_222828(int a1, int a2, _DWORD *a3, char a4)
{
  int i; // r6
  int v8; // r7
  int result; // r0
  int (__fastcall *v10)(int, _DWORD *, int); // r3
  int v11; // r1
  int v12; // r2
  int v13; // [sp+4h] [bp-4Ch] BYREF
  _DWORD v14[3]; // [sp+8h] [bp-48h] BYREF
  int (__fastcall *v15)(int, _DWORD *, int); // [sp+14h] [bp-3Ch]
  int v16; // [sp+1Ch] [bp-34h]
  int v17; // [sp+28h] [bp-28h]
  _DWORD v18[8]; // [sp+30h] [bp-20h] BYREF

  sub_222BB0(a2, a1);
  for ( i = 1; ; --i )
  {
    v8 = 1;
    if ( (a4 & 1) != 0 )
    {
      v8 = 2;
      if ( !i )
      {
        sub_222CE4(a2, -1, a3[4]);
        a4 = 0;
      }
    }
    sub_222C8C(a2, -2, v18);
    result = sub_222E9C(a2, v14);
    if ( result )
      break;
    v10 = v15;
    if ( v15 )
    {
      v11 = v16;
      v12 = v17;
      a3[18] = v14[0];
      a3[19] = v12;
      a3[20] = v11;
      result = v10(v8, a3, a2);
      if ( result != 8 )
      {
        if ( result == 7 )
        {
          sub_222C8C(a2, -1, &v13);
          a3[4] = v13;
          return sub_222ED0(a2);
        }
        else if ( result == 9 )
        {
          abort();
        }
        return result;
      }
      if ( v18[0] == a3[8] )
      {
        fprintf(
          (FILE *)((char *)&_sF + 168),
          "libunwind: %s - %s\n",
          "unwind_phase2",
          "during phase1 personality function said it would stop here, but now in phase2 it did not stop here");
        fflush((FILE *)((char *)&_sF + 168));
        abort();
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x222bb0
// SYMBOL: sub_222BB0
int __fastcall sub_222BB0(int a1, __int64 *a2)
{
  __int64 v3; // r2
  int v4; // r0
  __int64 *v5; // r1
  __int64 v6; // d16
  __int64 v7; // d17
  __int64 v8; // d18
  __int64 v9; // d19
  __int64 v10; // d20
  __int64 v11; // d21
  __int64 v12; // d22
  __int64 v13; // d23
  int v14; // r0
  unsigned int v15; // r5
  int exidx; // r0
  bool v17; // zf
  _DWORD v19[2]; // [sp+4h] [bp-1Ch] BYREF
  _DWORD v20[5]; // [sp+Ch] [bp-14h] BYREF

  *(_BYTE *)(a1 + 78) = 0;
  HIDWORD(v3) = &unk_384194;
  LODWORD(v3) = off_2346D4;
  *(_WORD *)(a1 + 76) = 0;
  v4 = a1 + 8;
  *(_QWORD *)a1 = v3;
  v6 = *a2;
  v7 = a2[1];
  v5 = a2 + 2;
  v8 = *v5;
  v9 = v5[1];
  v5 += 2;
  v10 = *v5;
  v11 = v5[1];
  v5 += 2;
  v12 = *v5;
  v13 = v5[1];
  *(_QWORD *)v4 = v6;
  *(_QWORD *)(v4 + 8) = v7;
  v4 += 16;
  *(_QWORD *)v4 = v8;
  *(_QWORD *)(v4 + 8) = v9;
  v4 += 16;
  *(_QWORD *)v4 = v10;
  *(_QWORD *)(v4 + 8) = v11;
  v4 += 16;
  *(_QWORD *)v4 = v12;
  *(_QWORD *)(v4 + 8) = v13;
  *(_DWORD *)(v4 + 16) = 0;
  sub_22178C((void *)(a1 + 80), 0x132u);
  v14 = *(_DWORD *)(a1 + 68);
  v15 = v14 & 0xFFFFFFFE;
  if ( (v14 & 0xFFFFFFFE) == 0 )
    goto LABEL_6;
  v20[0] = 0;
  exidx = dl_unwind_find_exidx(v14 & 0xFFFFFFFE, v20);
  v17 = exidx == 0;
  v19[0] = exidx;
  if ( exidx )
    v17 = 8 * v20[0] == 0;
  v19[1] = 8 * v20[0];
  if ( v17 || !sub_223500(a1, v15, v19) )
LABEL_6:
    *(_BYTE *)(a1 + 384) = 1;
  return 0;
}


// ======================================================================
// ADDR: 0x224220
// SYMBOL: sub_224220
int __fastcall sub_224220(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4
  int v6; // r5
  int v7; // r6
  int v8; // r7
  int v9; // r8
  int v10; // r9
  int v11; // r10
  int v12; // r11
  int v13; // r12
  int v14; // lr

  *a1 = a1;
  a1[1] = a2;
  a1[2] = a3;
  a1[3] = a4;
  a1[4] = v5;
  a1[5] = v6;
  a1[6] = v7;
  a1[7] = v8;
  a1[8] = v9;
  a1[9] = v10;
  a1[10] = v11;
  a1[11] = v12;
  a1[12] = v13;
  a1[13] = &a5;
  a1[14] = v14;
  a1[15] = v14;
  return 0;
}


// ======================================================================
