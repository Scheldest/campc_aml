// ADDR: 0x13e9bc
// SYMBOL: sub_13E9BC
int __fastcall sub_13E9BC(int a1)
{
  int v2; // r0
  int *v3; // r6
  int v4; // r0
  int v5; // r0
  int v6; // r6
  int v7; // r0
  int v8; // r12
  __int64 v9; // r2
  _BOOL4 v10; // r0
  int v11; // r0
  int v12; // r8
  unsigned int v13; // r0
  unsigned int v14; // r0
  int v15; // r2
  int v16; // r3
  unsigned int v17; // r10
  int v18; // r1
  _BYTE *v19; // r5
  int v20; // r0
  bool v21; // zf
  int v22; // r0
  int v23; // r0
  int v24; // r1
  bool v25; // zf
  unsigned int v26; // r0
  int v27; // r2
  int v28; // r3
  int v30; // r8
  int v31; // r0
  int v32; // r12
  __int64 v33; // r2
  int v34; // r0
  int v35; // r5
  int v36; // r0
  int v37; // r1
  int v38; // r0
  char v39; // r0
  unsigned int v40; // r5
  unsigned int v41; // r9
  int v42; // r8
  unsigned int v43; // r5
  unsigned int v44; // r5
  int v45; // [sp+0h] [bp-28h]
  int v46; // [sp+0h] [bp-28h]
  int v47; // [sp+4h] [bp-24h]
  int v48; // [sp+8h] [bp-20h] BYREF
  int v49; // [sp+Ch] [bp-1Ch] BYREF
  int v50; // [sp+10h] [bp-18h]
  int v51; // [sp+14h] [bp-14h]
  int v52; // [sp+18h] [bp-10h]

  if ( !*(_BYTE *)(a1 + 19) )
  {
    v10 = 1;
LABEL_45:
    if ( *(_BYTE *)(a1 + 432) && v10 )
    {
      if ( *(_BYTE *)(a1 + 45) )
      {
        *(_BYTE *)(a1 + 45) = 0;
        if ( dword_23DEEC )
        {
          v19 = *(_BYTE **)(dword_23DEEC + 100);
          if ( v19[80] )
            (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v19 + 36))(*(_DWORD *)(dword_23DEEC + 100), 0);
          v19[80] = 0;
        }
      }
      sub_13F8EC(a1);
      return 1;
    }
    goto LABEL_53;
  }
  v3 = (int *)(a1 + 28);
  v2 = *(_DWORD *)(a1 + 28);
  if ( !v2 )
  {
LABEL_53:
    if ( !*(_BYTE *)(a1 + 32) || sub_10414A(*(_DWORD *)(a1 + 28)) == 55 || sub_10414A(*(_DWORD *)(a1 + 28)) == 54 )
    {
      if ( sub_10414A(*(_DWORD *)(a1 + 28)) != 55 && sub_10414A(*(_DWORD *)(a1 + 28)) != 54 )
      {
        v20 = *(_DWORD *)(dword_23DEF4 + 536);
        v21 = v20 == 5;
        if ( v20 == 5 )
          v21 = *(_BYTE *)(a1 + 19) == 0;
        if ( v21 && !*(_BYTE *)(a1 + 432) )
          sub_14081C(a1);
      }
    }
    else
    {
      if ( sub_104000(*(_DWORD *)(a1 + 28)) )
        sub_104026(*(_DWORD *)(a1 + 28));
      if ( *(_BYTE *)(a1 + 33) && *(_DWORD *)(dword_23DEF4 + 536) == 5 )
      {
        if ( COERCE_FLOAT(sub_1042D8(*(_DWORD *)(a1 + 28))) > 0.0 )
          sub_140610(a1);
      }
      else
      {
        *(_BYTE *)(a1 + 32) = 0;
        sub_1407EC(a1);
      }
    }
    return 1;
  }
  if ( *(_BYTE *)(a1 + 32) )
  {
LABEL_6:
    if ( sub_1041FA(v2) )
      goto LABEL_7;
    v11 = *v3;
    HIBYTE(v48) = 0;
    v12 = sub_104BA4(v11, (_WORD *)&v49 + 1, &v49, (char *)&v48 + 3, 0);
    if ( sub_104108(*v3) )
    {
      if ( (v13 = *(unsigned __int8 *)(a1 + 26), v13 <= 0x17) && ((1 << v13) & 0xF001E0) != 0 || v13 == 68 )
        *(_BYTE *)(a1 + 26) = 0;
    }
    sub_106B84(*v3);
    sub_1060D4(*v3);
    if ( sub_1064BC(*v3) )
      sub_10421C(*v3, 1);
    nullsub_8();
    v14 = sub_104550(*(_DWORD *)(a1 + 28));
    if ( v14 )
    {
      *(_BYTE *)(a1 + 44) = 0;
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 40) || !*(_BYTE *)(a1 + 44) )
      {
LABEL_31:
        v17 = sub_F0B30();
        v18 = dword_23902C + 1;
        if ( dword_23902C != -1 )
        {
          v18 = 5001;
          if ( v17 - dword_23902C >= 0x1389 && !sub_104108(*v3) )
          {
            sub_F85F0(*(_DWORD *)(dword_23DEF0 + 4));
            dword_23902C = -1;
          }
        }
        if ( v17 >= *(_DWORD *)(a1 + 436) )
          sub_F9480(
            dword_23DEF0,
            *(unsigned __int8 *)(*(_DWORD *)(dword_23DEF4 + 524) + 26),
            *(_DWORD *)(dword_23DEF4 + 524),
            v16,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52);
        sub_F9804(dword_23DEF0, v18, v15, v16);
        if ( v17 - *(_DWORD *)(a1 + 440) > 0x3E8 )
        {
          sub_13F564(a1);
          *(_DWORD *)(a1 + 440) = v17;
        }
        sub_13F5E8(a1);
        if ( sub_F97D0(dword_23DEF0) != *(unsigned __int8 *)(a1 + 468) )
          sub_13F790(a1);
        sub_13F810(a1);
        if ( *(_BYTE *)(a1 + 432) )
        {
          sub_13F8EC(a1);
LABEL_43:
          *(_BYTE *)(a1 + 35) = 0;
LABEL_44:
          v10 = *(unsigned __int8 *)(a1 + 19) == 0;
          goto LABEL_45;
        }
        if ( sub_10414A(*v3) != 50 || sub_10411A(*v3) )
        {
          if ( sub_10414A(*v3) == 1 || sub_10414A(*v3) == 12 )
          {
            sub_13FE54(a1);
            if ( *(_BYTE *)(a1 + 34) )
            {
              v22 = *(_DWORD *)(a1 + 28);
              *(_BYTE *)(a1 + 34) = 0;
              (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
            }
            sub_140090(a1);
            v23 = *(unsigned __int16 *)(a1 + 470);
            if ( v23 != 0xFFFF )
            {
              *(_WORD *)(a1 + 470) = -1;
              *(_WORD *)(a1 + 24) = v23;
            }
            if ( *(unsigned __int16 *)(a1 + 162) != v12 )
              goto LABEL_82;
            v24 = *(unsigned __int16 *)(a1 + 160);
            v25 = v24 == HIWORD(v49);
            if ( v24 == HIWORD(v49) )
              v25 = *(unsigned __int16 *)(a1 + 158) == (unsigned __int16)v49;
            if ( !v25 || (v40 = v17 - *(_DWORD *)(a1 + 444), v40 > sub_140128(a1)) )
            {
LABEL_82:
              *(_DWORD *)(a1 + 444) = sub_F0B30();
              sub_140170(a1);
            }
            if ( (v12 & 0x84) != 0 )
            {
              v26 = v17 - *(_DWORD *)(a1 + 448);
              if ( dword_314320 == 2 )
              {
                if ( v26 <= dword_239044 )
                  goto LABEL_43;
              }
              else if ( v26 <= 0x64 )
              {
                goto LABEL_43;
              }
            }
            else if ( v17 - *(_DWORD *)(a1 + 448) <= 0x3E8 )
            {
              goto LABEL_43;
            }
            *(_DWORD *)(a1 + 448) = v17;
            sub_13FB70(a1);
            goto LABEL_43;
          }
          if ( sub_10414A(*v3) != 50 || !sub_10411A(*v3) )
            goto LABEL_44;
          if ( *(_BYTE *)(a1 + 34) )
          {
            v34 = *(_DWORD *)(a1 + 28);
            *(_BYTE *)(a1 + 34) = 0;
            (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 8))(v34);
          }
          v35 = dword_23FFDC;
          v36 = sub_104648(*(_DWORD *)(a1 + 28), dword_23FCE0);
          v37 = dword_23DF24;
          *(_DWORD *)(v35 + 168) = (unsigned int)(v36 - 16) < 3 || (unsigned int)(v36 - 22) < 0xD;
          v38 = ((int (__fastcall *)(int, _DWORD, int))((char *)&unk_2B0CBD + v37))(191, 0, 1);
          if ( *(_BYTE *)(a1 + 35) )
          {
            if ( (!sub_104648(*v3, *(unsigned __int8 *)(a1 + 35)) || !sub_104680(*(_DWORD *)(a1 + 28)))
              && *(_BYTE *)(a1 + 35) )
            {
              sub_1046BC(*v3);
              v39 = 0;
LABEL_135:
              *(_BYTE *)(a1 + 35) = v39;
            }
          }
          else if ( v38 && sub_104700(*v3) )
          {
            v39 = 1;
            goto LABEL_135;
          }
          v44 = v17 - *(_DWORD *)(a1 + 444);
          if ( v44 > sub_13FE10(a1) )
          {
            *(_DWORD *)(a1 + 444) = sub_F0B30();
            sub_140448(a1);
          }
          goto LABEL_44;
        }
        sub_104834(*(_DWORD *)(a1 + 28));
        if ( v17 - *(_DWORD *)(a1 + 448) > 0x3E8 )
        {
          *(_DWORD *)(a1 + 448) = v17;
          sub_13FB70(a1);
        }
        v30 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
        if ( v30 )
        {
          v31 = sub_104326(*v3);
          LOWORD(v32) = -1;
          if ( v31 )
          {
            v33 = *(_QWORD *)(v30 + 60000);
            if ( (_DWORD)v33 != HIDWORD(v33) )
            {
              while ( *(_DWORD *)(v30 + 4 * *(_DWORD *)v33 + 8000) != v31 )
              {
                LODWORD(v33) = v33 + 4;
                if ( (_DWORD)v33 == HIDWORD(v33) )
                  goto LABEL_121;
              }
            }
            if ( (_DWORD)v33 != HIDWORD(v33) )
              v32 = *(_DWORD *)v33;
          }
LABEL_121:
          *(_WORD *)(a1 + 470) = v32;
        }
        else
        {
          LOWORD(v32) = *(_WORD *)(a1 + 470);
        }
        sub_13FCD8(a1, (unsigned __int16)v32);
        v41 = *(unsigned __int16 *)(a1 + 470);
        if ( v41 >> 4 <= 0x7C
          && sub_F2396(v30, *(unsigned __int16 *)(a1 + 470))
          && (v42 = *(_DWORD *)(v30 + 4 * v41)) != 0 )
        {
          if ( !*(_BYTE *)(a1 + 34) )
          {
            if ( sub_109A0C(v42) )
            {
              (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 28) + 12))(*(_DWORD *)(a1 + 28));
              *(_BYTE *)(a1 + 34) = 1;
            }
            else if ( !*(_BYTE *)(a1 + 34) )
            {
              goto LABEL_130;
            }
          }
          if ( COERCE_FLOAT(sub_109AB4(v42)) != 0.0 )
          {
LABEL_130:
            v43 = v17 - *(_DWORD *)(a1 + 444);
            if ( v43 > sub_13FE10(a1) )
            {
              *(_DWORD *)(a1 + 444) = sub_F0B30();
              sub_13F048(a1);
            }
            goto LABEL_43;
          }
        }
        else if ( !*(_BYTE *)(a1 + 34) )
        {
          goto LABEL_130;
        }
        sub_1042F4(*v3, 0);
        sub_104154(*v3);
        goto LABEL_130;
      }
      v14 = 0;
    }
    *(_DWORD *)(a1 + 40) = v14;
    goto LABEL_31;
  }
  if ( sub_10414A(v2) != 54 )
  {
    v2 = *v3;
    goto LABEL_6;
  }
LABEL_7:
  if ( *(_BYTE *)(a1 + 432) )
    sub_140610(a1);
  v4 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 4) = -1;
  *(_BYTE *)(a1 + 17) = 0;
  *(_BYTE *)(a1 + 432) = 0;
  *(_BYTE *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 26) = 0;
  sub_10421C(v4, 1);
  if ( *(_BYTE *)(a1 + 34) )
  {
    v5 = *(_DWORD *)(a1 + 28);
    *(_BYTE *)(a1 + 34) = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
  }
  if ( sub_104108(*v3) && !sub_10411A(*v3) )
  {
    sub_13F048(a1);
    v6 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
    v7 = sub_104326(*(_DWORD *)(a1 + 28));
    LOWORD(v8) = -1;
    if ( v7 )
    {
      v9 = *(_QWORD *)(v6 + 60000);
      if ( (_DWORD)v9 != HIDWORD(v9) )
      {
        while ( *(_DWORD *)(v6 + 4 * *(_DWORD *)v9 + 8000) != v7 )
        {
          LODWORD(v9) = v9 + 4;
          if ( (_DWORD)v9 == HIDWORD(v9) )
            goto LABEL_90;
        }
      }
      if ( (_DWORD)v9 != HIDWORD(v9) )
        v8 = *(_DWORD *)v9;
    }
LABEL_90:
    *(_WORD *)(a1 + 24) = v8;
  }
  nullsub_7();
  sub_13F4D0(a1);
  *(_BYTE *)(a1 + 32) = 1;
  *(_BYTE *)(a1 + 19) = 0;
  sub_F9480(dword_23DEF0, 0, v27, v28, v45, v47, v48, v49, v50, v51, v52);
  return 1;
}


// ======================================================================
// ADDR: 0x14933c
// SYMBOL: sub_14933C
unsigned int __fastcall sub_14933C(int a1)
{
  unsigned int result; // r0
  int v3; // r1
  int *v4; // r8
  unsigned int *v5; // r10
  _BYTE *v6; // r11
  int v7; // r0
  __int64 v8; // r2
  int v9; // r1
  char v10; // r5
  int v11; // r1
  int v12; // r5
  int v13; // r1
  __int64 v14; // r2
  int v15; // r0
  int v16; // r12
  int v17; // r8
  int v18; // r9
  char v19; // r6
  int v20; // r1
  int v21; // r1
  int v22; // r1
  int v23; // r9
  int v24; // r1
  char v25; // r5
  _BOOL4 v26; // r0
  char v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  unsigned int v31; // r0
  unsigned int v32; // r1
  int v33; // r0
  unsigned int v34; // r3
  __int16 v35; // r2
  __int16 v36; // r1
  int v37; // r0
  unsigned int v38; // r5
  int v39; // r12
  int v40; // r0
  _BOOL4 v41; // r5
  int v42; // r0
  int v43; // r1
  int v44; // r0
  int v45; // r5
  int v46; // r0
  __int64 v47; // r0
  int v48; // [sp+14h] [bp-ECh]
  int v49; // [sp+18h] [bp-E8h]
  int *v50; // [sp+4Ch] [bp-B4h]
  int v51; // [sp+50h] [bp-B0h] BYREF
  unsigned __int8 v52; // [sp+54h] [bp-ACh] BYREF
  unsigned __int8 v53; // [sp+55h] [bp-ABh] BYREF
  char v54; // [sp+56h] [bp-AAh] BYREF
  unsigned __int8 v55; // [sp+57h] [bp-A9h] BYREF
  _DWORD v56[3]; // [sp+58h] [bp-A8h] BYREF
  _BYTE v57[48]; // [sp+64h] [bp-9Ch] BYREF
  int v58; // [sp+94h] [bp-6Ch]
  __int64 v59; // [sp+98h] [bp-68h]
  int v60[4]; // [sp+A4h] [bp-5Ch] BYREF
  arg6_F894A v61; // [sp+B4h] [bp-4Ch]
  int v62; // [sp+BCh] [bp-44h]
  int v63; // [sp+C0h] [bp-40h]
  arg9_F894A v64; // [sp+C4h] [bp-3Ch]
  int v65; // [sp+CCh] [bp-34h]
  int v66; // [sp+D0h] [bp-30h]
  unsigned int v67; // [sp+D4h] [bp-2Ch]
  unsigned int v68; // [sp+D8h] [bp-28h]
  int v69; // [sp+DCh] [bp-24h]

  result = *(_DWORD *)(a1 + 296);
  if ( result )
  {
    v3 = *(unsigned __int8 *)(a1 + 25);
    if ( *(_BYTE *)(a1 + 25) )
    {
      v4 = (int *)(a1 + 296);
      v5 = (unsigned int *)(a1 + 122);
      if ( v3 == 17 )
      {
        v6 = (_BYTE *)(a1 + 26);
        if ( *(_BYTE *)(a1 + 26) != 16 )
          goto LABEL_53;
        if ( !sub_104108(result) )
        {
          v12 = *(_DWORD *)(a1 + 126);
          v13 = *(_DWORD *)(a1 + 154);
          v14 = *(_QWORD *)(a1 + 158);
          v15 = *(_DWORD *)(a1 + 296);
          v16 = *(_DWORD *)(a1 + 130);
          v50 = (int *)(a1 + 296);
          v17 = *(unsigned __int8 *)(a1 + 25);
          v18 = *(unsigned __int16 *)(a1 + 178);
          *(_DWORD *)(a1 + 40) = *v5;
          *(_DWORD *)(a1 + 44) = v12;
          *(_DWORD *)(a1 + 48) = v16;
          *(_DWORD *)(a1 + 52) = v13;
          *(_QWORD *)(a1 + 56) = v14;
          sub_F89BC(v15, v13, v14, SHIDWORD(v14));
          if ( v17 != 17 || (unsigned int)(v18 - 1) >= 0xBB7 )
            sub_149A00(a1);
          v19 = *(_BYTE *)(a1 + 152);
          v4 = (int *)(a1 + 296);
          if ( sub_F8C70(*(_DWORD *)(a1 + 296)) && sub_104648(*v50, v20) != (v19 & 0x3F) )
          {
            sub_10479C(*v50, v19 & 0x3F, 0);
            if ( sub_104648(*v50, v21) != (v19 & 0x3F) )
            {
              sub_104950(*v50, v19 & 0x3F, 9999);
              sub_10479C(*v50, v19 & 0x3F, 0);
            }
          }
          *(_DWORD *)(a1 + 4) = 0;
          goto LABEL_35;
        }
        v3 = *(unsigned __int8 *)(a1 + 25);
      }
      if ( v3 == 19 )
      {
        v6 = (_BYTE *)(a1 + 26);
        if ( *(_BYTE *)(a1 + 26) != 17 )
        {
LABEL_56:
          if ( sub_104108(*v4) )
          {
            v28 = *(_DWORD *)(a1 + 4);
            if ( v28
              && sub_F8A2C(v28) != 538
              && sub_F8A2C(*(_DWORD *)(a1 + 4)) != 537
              && sub_F8A2C(*(_DWORD *)(a1 + 4)) != 449 )
            {
              sub_14A0B8(a1);
            }
            v29 = *(_DWORD *)(a1 + 296);
            *(_BYTE *)(a1 + 28) = 0;
            sub_1051C0(v29);
            v30 = *(_DWORD *)(a1 + 4);
            if ( v30 && sub_109A0C(v30) )
              (*(void (__fastcall **)(int))(*(_DWORD *)*v4 + 12))(*v4);
            if ( *(_BYTE *)(a1 + 24) )
            {
              if ( *(float *)(a1 + 220) == 0.0 && *(float *)(a1 + 224) == 0.0 )
              {
                v46 = *(_DWORD *)(a1 + 4);
                if ( v46 )
                  sub_F89BC(v46, *(_DWORD *)(a1 + 220), *(_DWORD *)(a1 + 224), *(_DWORD *)(a1 + 228));
              }
            }
            sub_104B1C(
              *(_DWORD *)(a1 + 296),
              *(_WORD *)(a1 + 186),
              *(_WORD *)(a1 + 188),
              *(unsigned __int16 *)(a1 + 190));
            nullsub_10();
            if ( *(float *)(a1 + 220) == 0.0 && *(float *)(a1 + 228) == 0.0 )
            {
              if ( !*(_BYTE *)(a1 + 16) )
              {
                v31 = sub_F0B30() - *(_DWORD *)(a1 + 288);
                v32 = 3001;
LABEL_91:
                if ( v31 >= v32 )
                  *(_BYTE *)(a1 + 16) = 1;
              }
            }
            else if ( !*(_BYTE *)(a1 + 16) )
            {
              v31 = sub_F0B30() - *(_DWORD *)(a1 + 288);
              v32 = 1501;
              goto LABEL_91;
            }
LABEL_99:
            if ( *(_BYTE *)(a1 + 25) != 32 )
              sub_1042F4(*v4, 1148846080);
            result = sub_F0B30() - *(_DWORD *)(a1 + 288);
            if ( result <= 0x5DB )
            {
              result = 0;
              *(_BYTE *)(a1 + 16) = 0;
            }
            return result;
          }
          v3 = *(unsigned __int8 *)(a1 + 25);
LABEL_78:
          if ( v3 != 18 || !sub_104108(*v4) )
          {
            sub_104B1C(*(_DWORD *)(a1 + 296), 0, 0, 0);
            sub_F89BC(*(_DWORD *)(a1 + 296), 0, 0, 0);
            *(_BYTE *)(a1 + 28) = 0;
          }
          goto LABEL_99;
        }
        if ( sub_104108(*v4) )
        {
          result = *(_DWORD *)(a1 + 4);
          if ( !result )
            return result;
          result = sub_109FEA(result);
          if ( !result )
            return result;
          sub_17D2F2(a1 + 192);
          sub_17D238(a1 + 192, v57);
          v7 = *(_DWORD *)(a1 + 4);
          v8 = *(_QWORD *)(a1 + 212);
          v58 = *(_DWORD *)(a1 + 208);
          v59 = v8;
          if ( sub_F8A2C(v7) != 538 && sub_F8A2C(*(_DWORD *)(a1 + 4)) != 537 && sub_F8A2C(*(_DWORD *)(a1 + 4)) != 449 )
          {
            sub_149C18(a1, v57, a1 + 208, a1 + 220);
            sub_149CC4(a1);
          }
          if ( sub_F8A2C(*(_DWORD *)(a1 + 4)) == 520 && sub_109864(*(_DWORD *)(a1 + 4)) != 2 )
            sub_109864(*(_DWORD *)(a1 + 4));
          sub_109AD0(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 232));
          v9 = 63536;
          if ( (unsigned __int16)(*(_WORD *)(a1 + 241) - 2000) <= 0xF830u && sub_109E00(*(_DWORD *)(a1 + 4)) )
          {
            sub_1099D0(*(_DWORD *)(a1 + 4));
            sub_109C00(*(_DWORD *)(a1 + 4), 0);
          }
          v10 = *(_BYTE *)(a1 + 238);
          if ( sub_104648(*(_DWORD *)(a1 + 296), v9) != (v10 & 0x3F) )
          {
            sub_10479C(*v4, v10 & 0x3F, 0);
            if ( sub_104648(*v4, v11) != (v10 & 0x3F) )
            {
              sub_104950(*v4, v10 & 0x3F, 9999);
              sub_10479C(*v4, v10 & 0x3F, 0);
            }
          }
          goto LABEL_35;
        }
        v3 = *(unsigned __int8 *)(a1 + 25);
      }
      if ( v3 != 18 )
        goto LABEL_52;
      v6 = (_BYTE *)(a1 + 26);
      if ( *(_BYTE *)(a1 + 26) != 18 || !sub_104108(*v4) )
      {
LABEL_51:
        v3 = *(unsigned __int8 *)(a1 + 25);
LABEL_52:
        if ( v3 != 17 )
          goto LABEL_55;
LABEL_53:
        if ( sub_104108(*v4) )
        {
          v3 = *(unsigned __int8 *)(a1 + 25);
LABEL_55:
          if ( v3 != 19 )
            goto LABEL_78;
          goto LABEL_56;
        }
        sub_149F48(a1);
        v33 = *(_DWORD *)(a1 + 296);
        v34 = *(unsigned __int16 *)(a1 + 120);
        v35 = *(_WORD *)(a1 + 118);
        v36 = *(_WORD *)(a1 + 116);
        *(_BYTE *)(a1 + 28) = 0;
        sub_104B1C(v33, v36, v35, v34);
        if ( *(float *)(a1 + 154) == 0.0 && *(float *)(a1 + 158) == 0.0 && *(float *)(a1 + 162) == 0.0 )
          sub_F89BC(*v4, *(_DWORD *)(a1 + 154), *(_DWORD *)(a1 + 158), *(_DWORD *)(a1 + 162));
        if ( (unsigned int)(sub_F0B30() - *(_DWORD *)(a1 + 288)) < 0x5DD )
        {
          if ( !*(_BYTE *)(a1 + 16) )
          {
LABEL_84:
            v41 = ((unsigned __int16)(*(_WORD *)(a1 + 178) - 3000) < 0xF449u || *(_BYTE *)(a1 + 25) != 17)
               && *(_BYTE *)(a1 + 27) != 3;
            sub_F8F1C(*(_DWORD *)(a1 + 296), v41);
            sub_F8EC0(*(_DWORD *)(a1 + 296), v41);
            v42 = *(_DWORD *)(a1 + 32);
            v43 = *(_DWORD *)(a1 + 180);
            if ( v43 == v42 )
            {
              *(_DWORD *)(a1 + 4) = 0;
            }
            else
            {
              if ( v43 )
              {
                v44 = *(_DWORD *)(a1 + 296);
                v56[0] = *(_DWORD *)(a1 + 180);
                sub_104DD4(v44, (unsigned __int16 *)v56);
                v45 = *(_DWORD *)(a1 + 180);
              }
              else
              {
                v45 = 0;
                if ( v42 == 402916988 )
                {
                  LODWORD(v47) = *(_DWORD *)(a1 + 296);
                  v56[0] = 0;
                  v56[1] = 1074790400;
                  HIDWORD(v47) = "VEND_EAT_P";
                  v55 = 0;
                  v54 = 0;
                  v53 = 0;
                  v52 = 0;
                  v45 = -1;
                  v51 = -1;
                  sub_104F28(v47, "VENDING", v56, &v55, (int)&v54, &v53, &v52, &v51, v48, v49);
                  *(_DWORD *)(a1 + 180) = -1;
                }
              }
              *(_DWORD *)(a1 + 32) = v45;
              *(_BYTE *)(a1 + 17) = 0;
            }
            goto LABEL_99;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 16) = 1;
        }
        if ( (unsigned int)(sub_F0B30() - *(_DWORD *)(a1 + 288)) >= 0xBB9 )
        {
          v37 = *(_DWORD *)(a1 + 296);
          *(_DWORD *)(a1 + 116) = 0;
          sub_F89BC(v37, 0, 0, 0);
          sub_F8910(*(_DWORD *)(a1 + 296), v60);
          v38 = *(_DWORD *)(a1 + 126);
          v39 = *(_DWORD *)(a1 + 130);
          v40 = *(_DWORD *)(a1 + 296);
          v67 = *v5;
          v68 = v38;
          v69 = v39;
          sub_F894A(
            v40,
            v60[0],
            v60[1],
            v60[2],
            v60[3],
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            (arg12_F894A)__PAIR64__(v38, v67),
            v39);
        }
        goto LABEL_84;
      }
      result = *(_DWORD *)(a1 + 4);
      if ( !result )
        return result;
      result = sub_108354(*(_DWORD *)(result + 8));
      if ( !result )
        return result;
      if ( sub_F8C70(*v4) )
      {
        v22 = *(unsigned __int8 *)(a1 + 251);
        v23 = v22 & 0x3F;
        if ( sub_104648(*(_DWORD *)(a1 + 296), v22) != v23 )
        {
          sub_10479C(*v4, v23, 0);
          if ( sub_104648(*v4, v24) != v23 )
          {
            sub_104950(*v4, v23, 9999);
            sub_10479C(*v4, v23, 0);
          }
        }
      }
      if ( sub_10414A(*v4) == 50 )
      {
        v25 = *(_BYTE *)(a1 + 250);
        v26 = sub_106B50(*(_DWORD *)(a1 + 296));
        if ( (v25 & 0x40) != 0 )
        {
          if ( v26 || !sub_F8C70(*v4) || !sub_104700(*v4) )
            goto LABEL_35;
          v27 = 1;
        }
        else
        {
          if ( !v26 || !sub_F8C70(*v4) )
            goto LABEL_35;
          sub_1046BC(*v4);
          v27 = 0;
        }
        *(_BYTE *)(a1 + 28) = v27;
      }
LABEL_35:
      *v6 = 0;
      goto LABEL_51;
    }
  }
  if ( result )
  {
    sub_149278(a1);
    sub_F9E64(dword_23DEF0, *(unsigned __int8 **)(a1 + 296));
    result = 0;
    *(_DWORD *)(a1 + 296) = 0;
  }
  return result;
}


// ======================================================================
