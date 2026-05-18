// ADDR: 0x105ce0
// SYMBOL: sub_105CE0
int __fastcall sub_105CE0(int result, __int64 *a2)
{
  _QWORD *v3; // r1
  __int64 v4; // d16
  __int64 v5; // d17
  int v6; // r6
  __int64 v7; // d17
  int v8; // r2
  int v9; // r1
  int v10; // r9
  int v11; // r1
  __int16 v12; // r11
  char v13; // r2
  _DWORD *v14; // r3
  int v15; // r10
  int v16; // r8
  int v17; // r0
  int v18; // r1
  int v19; // r2
  bool v20; // zf
  int v21; // r0
  int v22; // r1
  int v23; // r0
  float v24; // s0
  float v25; // s2
  __int64 v26; // d17
  __int64 v27; // d18
  __int64 v28; // d19
  int v29; // r0
  int v30; // [sp+8h] [bp-160h] BYREF
  int v31; // [sp+Ch] [bp-15Ch]
  float v32; // [sp+10h] [bp-158h]
  _DWORD v33[10]; // [sp+120h] [bp-48h] BYREF
  char v34[29]; // [sp+14Bh] [bp-1Dh] BYREF

  v3 = (_QWORD *)(result + 16);
  if ( !a2 )
  {
    *(_BYTE *)(result + 12) = 0;
    *(_DWORD *)(result + 52) = 0;
    *v3 = 0LL;
    *(_QWORD *)(result + 24) = 0LL;
    *(_QWORD *)(result + 32) = 0LL;
    *(_QWORD *)(result + 40) = 0LL;
    *(_DWORD *)(result + 48) = 0;
    return result;
  }
  v4 = *a2;
  v5 = a2[1];
  v6 = *((_DWORD *)a2 + 9);
  *(_BYTE *)(result + 12) = 1;
  *(_DWORD *)(result + 52) = v6;
  *v3 = v4;
  *(_QWORD *)(result + 24) = v5;
  v7 = a2[3];
  *(_QWORD *)(result + 32) = a2[2];
  *(_QWORD *)(result + 40) = v7;
  v8 = *(unsigned __int8 *)(result + 96);
  v9 = dword_23DEF4;
  *(_DWORD *)(result + 48) = *((_DWORD *)a2 + 8);
  if ( !v8 )
  {
    if ( v9 )
    {
      result = **(_DWORD **)(v9 + 944);
      if ( result )
      {
        result = *(_DWORD *)(result + 5052);
        v10 = *(_DWORD *)(result + 28);
        if ( v10 )
        {
          memset(v33, 0, sizeof(v33));
          result = sub_104648(v10, 0);
          v11 = *((_DWORD *)a2 + 9);
          v12 = -1;
          if ( result == 34 )
          {
            if ( !v11 )
              return result;
          }
          else if ( !v11 )
          {
            goto LABEL_33;
          }
          v13 = 0;
          v14 = *(_DWORD **)(dword_23DEF4 + 944);
          if ( !*v14 )
            goto LABEL_34;
          v15 = v14[1];
          if ( !v15 )
            goto LABEL_34;
          v16 = v14[4];
          if ( !v16 )
            goto LABEL_34;
          v17 = sub_148F74(*v14, v11, 0);
          if ( v17 != 0xFFFF )
          {
            v13 = 1;
LABEL_29:
            v12 = v17;
            goto LABEL_34;
          }
          v18 = *((_DWORD *)a2 + 9);
          if ( v18 )
          {
            v19 = *(_DWORD *)(v15 + 60004);
            v17 = *(_DWORD *)(v15 + 60000);
            if ( v17 != v19 )
            {
              while ( *(_DWORD *)(v15 + 4 * *(_DWORD *)v17 + 8000) != v18 )
              {
                v17 += 4;
                if ( v17 == v19 )
                  goto LABEL_25;
              }
            }
            v20 = v17 == v19;
            if ( v17 != v19 )
            {
              v17 = *(unsigned __int16 *)v17;
              v20 = v17 == 0xFFFF;
            }
            if ( !v20 )
            {
              v13 = 2;
              goto LABEL_29;
            }
          }
LABEL_25:
          v17 = sub_148684(v16, v18);
          if ( v17 != 0xFFFF )
          {
            v13 = 3;
            goto LABEL_29;
          }
          v21 = *((_DWORD *)a2 + 9);
          v30 = 0;
          v31 = 0;
          v22 = *(_DWORD *)(v21 + 20);
          v32 = 0.0;
          if ( v22 )
          {
            sub_108F30(&v30, v22, a2 + 3);
            v23 = v31;
            v24 = v32;
            *((_DWORD *)a2 + 6) = v30;
            *((_DWORD *)a2 + 7) = v23;
          }
          else
          {
            v25 = *(float *)(v21 + 8) + *((float *)a2 + 7);
            v24 = *(float *)(v21 + 12) + *((float *)a2 + 8);
            *((float *)a2 + 6) = *(float *)(v21 + 4) + *((float *)a2 + 6);
            *((float *)a2 + 7) = v25;
          }
          *((float *)a2 + 8) = v24;
LABEL_33:
          v13 = 0;
LABEL_34:
          v26 = a2[1];
          v27 = a2[2];
          v28 = a2[3];
          *(_QWORD *)((char *)v33 + 3) = *a2;
          *(_QWORD *)((char *)&v33[2] + 3) = v26;
          *(_QWORD *)((char *)&v33[4] + 3) = v27;
          *(_QWORD *)((char *)&v33[6] + 3) = v28;
          *(_DWORD *)((char *)&v33[8] + 3) = *((_DWORD *)a2 + 8);
          *(_WORD *)((char *)v33 + 1) = v12;
          LOBYTE(v33[0]) = v13;
          HIBYTE(v33[9]) = sub_104648(v10, *(_DWORD *)((char *)&v33[8] + 3));
          v29 = sub_17D4A8(&v30);
          v34[0] = -50;
          sub_17D628(v29, v34, 8, 1);
          sub_17D566(&v30, v33, 40);
          (*(void (__fastcall **)(_DWORD, int *, int, int, _DWORD))(**(_DWORD **)(dword_23DEF4 + 528) + 32))(
            *(_DWORD *)(dword_23DEF4 + 528),
            &v30,
            1,
            7,
            0);
          return sub_17D542(&v30);
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x108f30
// SYMBOL: sub_108F30
float *__fastcall sub_108F30(float *result, float *a2, float *a3)
{
  float v3; // s12
  float v4; // s14
  float v5; // s2
  float v6; // s4
  float v7; // s8
  float v8; // s6
  float v9; // s0

  v3 = a3[1];
  v4 = a3[2];
  v5 = a2[1];
  v6 = a2[2];
  v7 = (float)(v3 * a2[5]) + (float)(a2[9] * v4);
  v8 = a2[6];
  *result = (float)((float)((float)(a2[4] * v3) + (float)(a2[8] * v4)) + (float)(*a2 * *a3)) + a2[12];
  v9 = *a3;
  result[1] = (float)(v7 + (float)(v5 * *a3)) + a2[13];
  result[2] = a2[14] + (float)((float)((float)(v8 * a3[1]) + (float)(a2[10] * v4)) + (float)(v6 * v9));
  return result;
}


// ======================================================================
