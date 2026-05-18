// ADDR: 0x671a4
// SYMBOL: sub_671A4
int __fastcall sub_671A4(int a1, int a2)
{
  int v2; // r6
  int v4; // r12
  char *v5; // r4
  unsigned __int8 *v6; // r8
  char *v7; // r11
  int v8; // r10
  unsigned __int16 *v9; // r0
  int v10; // r9
  bool v11; // zf
  _DWORD *v12; // r1
  int v13; // r2
  int v14; // r0
  int v15; // r0
  int v16; // r0
  char *v17; // r5
  float v18; // s0
  int v19; // s0
  int v20; // s2
  float v21; // s4
  _DWORD *v22; // r1
  float *v23; // r0
  int v24; // r6
  int v25; // r3
  int v26; // r12
  int v27; // r1
  bool v28; // zf
  int v30; // [sp+0h] [bp-D0h]
  int v31; // [sp+4h] [bp-CCh]
  int v32; // [sp+18h] [bp-B8h]
  int v33; // [sp+20h] [bp-B0h]
  int v34; // [sp+24h] [bp-ACh]
  int v35; // [sp+28h] [bp-A8h]
  int v36; // [sp+30h] [bp-A0h]
  int v37; // [sp+30h] [bp-A0h]
  int v38; // [sp+38h] [bp-98h]
  int v39; // [sp+3Ch] [bp-94h]
  double v40; // [sp+40h] [bp-90h] BYREF
  float v41; // [sp+48h] [bp-88h]
  int v42; // [sp+50h] [bp-80h] BYREF
  int v43; // [sp+54h] [bp-7Ch]
  int v44; // [sp+58h] [bp-78h]
  int v45; // [sp+60h] [bp-70h]
  int v46; // [sp+64h] [bp-6Ch]
  int v47; // [sp+68h] [bp-68h]
  int v48; // [sp+70h] [bp-60h]
  int v49; // [sp+74h] [bp-5Ch]
  int v50; // [sp+78h] [bp-58h]
  double v51; // [sp+80h] [bp-50h]
  float v52; // [sp+88h] [bp-48h]
  int v53; // [sp+94h] [bp-3Ch]

  v2 = a1;
  if ( *(_DWORD *)(a1 + 92) && sub_685E0(*(_DWORD *)(a1 + 8)) )
  {
    v4 = 572 * a2;
    v5 = (char *)&unk_1176A0;
    v6 = (unsigned __int8 *)&unk_1178A8;
    v7 = (char *)&unk_1178B4;
    v8 = 10;
    v44 = 0;
    v47 = 0;
    v42 = 0;
    v43 = 0;
    v50 = 0;
    v45 = 0;
    v46 = 0;
    v52 = 0.0;
    v48 = 0;
    v49 = 0;
    v51 = 0.0;
    v41 = 0.0;
    v40 = 0.0;
    v36 = 0;
    v38 = 572 * a2;
    v39 = v2;
    do
    {
      v9 = (unsigned __int16 *)v6[v4];
      if ( !v6[v4] )
        goto LABEL_6;
      v10 = *(_DWORD *)&v7[v4];
      v11 = v10 == 0;
      if ( v10 )
      {
        v9 = *(unsigned __int16 **)(v10 + 4);
        v11 = v9 == 0;
      }
      if ( v11 )
        goto LABEL_6;
      v12 = *(_DWORD **)(v2 + 4);
      if ( v12
        && (v2 = v39, *v12 != dword_1A4404 + 6716708)
        && (v2 = v39, v12[46])
        && (unsigned __int16 *)(dword_1A4404 + 6716708) != v9 )
      {
        if ( !(v36 << 31) )
        {
          ((void (__fastcall *)(_DWORD *))(dword_1A4404 + 4112375))(v12);
          v9 = *(unsigned __int16 **)(v10 + 4);
        }
        (*(void (__fastcall **)(unsigned __int16 *))(*(_DWORD *)v9 + 16))(v9);
        v14 = *(_DWORD *)(v39 + 4);
        if ( v14 )
          v15 = *(_DWORD *)(v14 + 24);
        else
          v15 = 0;
        v16 = ((int (__fastcall *)(int))(dword_1A4404 + 6098977))(v15);
        ((void (__fastcall *)(int, int))(dword_1A4404 + 1846417))(v16, 4);
        v17 = &v5[v38];
        sub_67530(v39, &v42, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v39 + 92) + 4 * *(_DWORD *)&v5[v38 + 4] + 1172) + 20));
        sub_686A0(&v40, &v42, &v5[v38 + 8]);
        v18 = *(float *)&v5[v38 + 20];
        v52 = v41;
        v51 = v40;
        if ( v18 != 0.0 )
          sub_6875C(&v42, 0, LODWORD(v18));
        if ( *((float *)v17 + 6) != 0.0 )
          sub_6875C(&v42, 1, *((_DWORD *)v17 + 6));
        v2 = v39;
        if ( *((float *)v17 + 7) != 0.0 )
          sub_6875C(&v42, 2, *((_DWORD *)v17 + 7));
        sub_68790(&v42, v17 + 32);
        v19 = LODWORD(v51);
        if ( *(float *)&v51 <= 10000.0 )
        {
          v20 = HIDWORD(v51);
          v4 = v38;
          if ( *((float *)&v51 + 1) <= 10000.0 )
          {
            v21 = v52;
            v36 = 1;
            if ( v52 <= 10000.0 && *(float *)&v51 >= -10000.0 && *((float *)&v51 + 1) >= -10000.0 )
            {
              v22 = *(_DWORD **)(v10 + 4);
              if ( v22 )
              {
                v23 = (float *)v22[5];
                if ( v23 )
                {
                  v32 = v50;
                  v37 = v42;
                  v35 = v43;
                  v34 = v44;
                  v33 = v45;
                  v24 = v49;
                  *((_DWORD *)v23 + 8) = v48;
                  v26 = v46;
                  v25 = v47;
                  *((_DWORD *)v23 + 4) = v33;
                  *((_DWORD *)v23 + 2) = v34;
                  *((_DWORD *)v23 + 1) = v35;
                  *(_DWORD *)v23 = v37;
                  v23[14] = v21;
                  *((_DWORD *)v23 + 13) = v20;
                  *((_DWORD *)v23 + 9) = v24;
                  *((_DWORD *)v23 + 6) = v25;
                  *((_DWORD *)v23 + 5) = v26;
                  *((_DWORD *)v23 + 10) = v32;
                  *((_DWORD *)v23 + 12) = v19;
                }
                v2 = v39;
                if ( *v22 != dword_1A4404 + 6716708 )
                {
                  v27 = v22[6];
                  v28 = v27 == 0;
                  if ( v27 )
                    v28 = v23 == 0;
                  if ( !v28 )
                  {
                    ((void (__fastcall *)(float *, int, int, int, int, int))(dword_1A4404 + 4517359))(
                      v23,
                      *(_DWORD *)(v27 + 4) + 16,
                      dword_1A4404 + 4517359,
                      4517359,
                      v30,
                      v31);
                    ((void (__fastcall *)(_DWORD))(dword_1A4404 + 4112361))(*(_DWORD *)(v10 + 4));
                  }
                }
              }
              sub_66064(v10, *(float *)&v51, *((float *)&v51 + 1), SLODWORD(v52));
              (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v10 + 4) + 8))(*(_DWORD *)(v10 + 4));
              v36 = 1;
              v4 = v38;
            }
          }
          else
          {
            v36 = 1;
          }
          goto LABEL_6;
        }
        v36 = 1;
      }
      else
      {
        if ( *(_DWORD *)v9 == dword_1A4404 + 6716708 )
          goto LABEL_6;
        v13 = v9[19];
        if ( (unsigned int)(v13 - 537) < 2 || v13 == 449 )
        {
          v30 = 0;
          v31 = 0;
          sub_682E8(&unk_50D7E, *(_DWORD *)(v10 + 8));
        }
        else
        {
          (*(void (__fastcall **)(unsigned __int16 *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 60))(v9, 0, 0, 0);
          v2 = v39;
        }
      }
      v4 = v38;
LABEL_6:
      v5 += 52;
      v7 += 4;
      ++v6;
      --v8;
    }
    while ( v8 );
  }
  return v53;
}


// ======================================================================
