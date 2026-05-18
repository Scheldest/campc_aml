// ADDR: 0x1070dc
// SYMBOL: sub_1070DC
int sub_1070DC()
{
  int v0; // r0
  int v1; // r1

  v0 = sub_10AA78();
  v1 = 9;
  if ( !v0 )
    return 8;
  return v1;
}


// ======================================================================
// ADDR: 0x1070f0
// SYMBOL: sub_1070F0
int __fastcall sub_1070F0(int a1, char a2, int a3, void *a4, int a5)
{
  int v9; // r11
  int v10; // r0
  int v11; // r0
  unsigned __int8 *v12; // r4
  int v13; // r0
  int v14; // r1
  int v15; // r5
  int v16; // r0
  int v17; // r4
  unsigned __int8 *v18; // r1
  int v19; // r2
  int v20; // r0
  int v21; // r0
  int v22; // r5
  unsigned int v23; // r9
  int v24; // r0
  unsigned int v25; // r1
  unsigned int v26; // r6
  int v27; // r8
  int v28; // r10
  int v29; // r0
  bool v30; // cf
  int v31; // r8
  int v32; // r0
  int v33; // r6
  _DWORD *v34; // r0
  int v35; // r4
  int v36; // r1
  int v37; // r0
  int v38; // r3
  int v39; // r4
  int v40; // r4
  int v41; // r0
  int *v43; // r4
  int v44; // r0
  int v45; // r1
  int v46; // r0
  int v47; // [sp+Ch] [bp-54h]
  void *v48; // [sp+10h] [bp-50h]
  char v49; // [sp+14h] [bp-4Ch]
  int *v50; // [sp+1Ch] [bp-44h]
  int v51; // [sp+20h] [bp-40h]
  int v52; // [sp+24h] [bp-3Ch]
  int v53; // [sp+28h] [bp-38h]
  int v54; // [sp+2Ch] [bp-34h]
  unsigned int v55; // [sp+2Ch] [bp-34h]
  int v56; // [sp+30h] [bp-30h] BYREF
  int i; // [sp+34h] [bp-2Ch] BYREF
  unsigned int v58; // [sp+38h] [bp-28h] BYREF
  _DWORD v59[9]; // [sp+3Ch] [bp-24h] BYREF

  *(_QWORD *)(a1 + 20) = 0x300000000LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v9 = a2 & 1;
  *(_DWORD *)(a1 + 16) = 0;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 0xE) == 0 )
      goto LABEL_7;
  }
  else if ( (a2 & 2) != 0 )
  {
    if ( (a2 & 4) != 0 && (a2 & 8) != 0 )
    {
      v10 = 2;
LABEL_13:
      *(_DWORD *)(a1 + 24) = v10;
      return v59[1];
    }
LABEL_7:
    v11 = sub_10AA08(a5);
    if ( !v11 )
    {
      v10 = 8;
      goto LABEL_13;
    }
    v12 = (unsigned __int8 *)v11;
    *(_DWORD *)(a1 + 12) = v11;
    v49 = a2;
    v54 = sub_1073C0(a5, 15);
    v13 = sub_10AA34(a5);
    v14 = *v12;
    v15 = v13;
    v59[0] = v12 + 1;
    v16 = sub_1075C0(v59, v14);
    v17 = ~v15;
    v18 = (unsigned __int8 *)(v59[0] + 1);
    v19 = *(unsigned __int8 *)v59[0]++;
    if ( !v16 )
      v16 = v15;
    v51 = v16;
    v48 = a4;
    v52 = a3;
    v50 = (int *)a1;
    if ( v19 == 255 )
    {
      v21 = 0;
    }
    else
    {
      v20 = sub_107664(v59);
      v18 = (unsigned __int8 *)v59[0];
      v21 = v20 + v59[0];
    }
    v22 = *v18;
    v23 = (v54 & 0xFFFFFFFE) + v17;
    v53 = v21;
    v59[0] = v18 + 1;
    v24 = sub_107664(v59);
    v25 = v59[0];
    v58 = v59[0];
    v55 = v24 + v59[0];
    while ( 1 )
    {
      if ( v25 >= v55 )
LABEL_59:
        sub_1073FC(v52, v48);
      v26 = sub_1075C0(&v58, v22);
      v27 = sub_1075C0(&v58, v22);
      v28 = sub_1075C0(&v58, v22);
      v29 = sub_107664(&v58);
      v30 = v26 >= v23;
      if ( v26 <= v23 )
        v30 = v23 >= v27 + v26;
      if ( !v30 )
        break;
      if ( v23 < v26 )
        goto LABEL_59;
      v25 = v58;
    }
    if ( v28 )
    {
      if ( v29 )
      {
        v47 = v28 + v51;
        v31 = v29 + v55 - 1;
        for ( i = v31; ; i = v40 + v41 )
        {
          v32 = sub_1076F8(&i);
          v33 = v32;
          if ( v32 < 1 )
          {
            if ( v32 <= -1 )
            {
              if ( v52 )
              {
                v37 = sub_107730(v48);
                if ( !v37 || (v38 = *((_DWORD *)v48 - 8)) == 0 )
                {
LABEL_61:
                  v46 = 1;
                  goto LABEL_62;
                }
                v39 = v37;
                if ( sub_107688(v33, v33 >> 31, v53, v38, v37, v48) )
                {
                  if ( v9 )
                  {
                    v50[4] = v47;
                    v50[5] = v39;
                    v50[6] = 6;
                    *(_QWORD *)v50 = v33;
                    v50[2] = v31;
                    return v59[1];
                  }
                  goto LABEL_46;
                }
              }
              else
              {
                if ( (v49 & 5) != 0 )
                {
LABEL_56:
                  v43 = v50;
                  v50[4] = v47;
                  v44 = v33 >> 31;
                  *v50 = v33;
                  goto LABEL_57;
                }
                if ( (v49 & 8) == 0 )
                {
                  v46 = 0;
LABEL_62:
                  sub_1073FC(v46, v48);
                }
              }
            }
            else if ( (v49 & 6) == 2 )
            {
              v43 = v50;
              v44 = 0;
              v50[4] = v47;
              *v50 = 0;
LABEL_57:
              v43[1] = v44;
              v43[2] = v31;
              v43[5] = sub_107730(v48);
              v43[6] = 6;
              return v59[1];
            }
          }
          else
          {
            if ( !v53 )
              goto LABEL_60;
            v34 = (_DWORD *)(v53 - 4 * v32);
            if ( *v34 && (v35 = *(_DWORD *)((char *)v34 + *v34)) != 0 )
            {
              if ( v52 )
              {
                v56 = sub_107730(v48);
                if ( !v56 )
                  goto LABEL_61;
                v36 = *((_DWORD *)v48 - 8);
                if ( !v36 )
                  goto LABEL_61;
                if ( (*(int (__fastcall **)(int, int, int *))(*(_DWORD *)v35 + 16))(v35, v36, &v56) )
                {
                  if ( v9 )
                  {
                    v45 = v56;
                    v50[6] = 6;
                    v50[4] = v47;
                    v50[5] = v45;
                    *(_QWORD *)v50 = v33;
                    v50[2] = v31;
                    return v59[1];
                  }
LABEL_46:
                  if ( (v49 & 8) == 0 )
                    goto LABEL_61;
                }
              }
            }
            else
            {
              if ( (v49 & 5) != 0 )
                goto LABEL_56;
              if ( (v49 & 8) == 0 )
              {
LABEL_60:
                v46 = v52;
                goto LABEL_62;
              }
            }
          }
          v40 = i;
          v56 = i;
          v41 = sub_1076F8(&v56);
          if ( !v41 )
            goto LABEL_54;
          v31 = v40 + v41;
        }
      }
      if ( (v49 & 6) == 2 )
      {
        *v50 = 0;
        v50[1] = 0;
        v50[6] = 6;
        v50[4] = v28 + v51;
        return v59[1];
      }
    }
LABEL_54:
    v50[6] = 8;
  }
  return v59[1];
}


// ======================================================================
// ADDR: 0x1073c0
// SYMBOL: sub_1073C0
int __fastcall sub_1073C0(int a1, int a2)
{
  int v3; // [sp+8h] [bp-8h] BYREF

  sub_109C50(a1, 0, a2, 0, &v3);
  return v3;
}


// ======================================================================
// ADDR: 0x1073fc
// SYMBOL: sub_1073FC
void __fastcall __noreturn sub_1073FC(int a1, void *a2)
{
  j___cxa_begin_catch(a2);
  if ( a1 )
    sub_106E00(*((void (**)(void))a2 - 5));
  std::terminate();
}


// ======================================================================
// ADDR: 0x107418
// SYMBOL: sub_107418
int __fastcall sub_107418(int a1, int a2, _DWORD *a3)
{
  int v5; // r5
  int v6; // r2

  sub_107758(a2, 0, a1);
  sub_107758(a2, 1, *a3);
  v5 = a3[4];
  v6 = sub_1073C0(a2, 15) & 1 | v5;
  return sub_107758(a2, 15, v6);
}


// ======================================================================
