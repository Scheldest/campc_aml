// ADDR: 0x7e420
// SYMBOL: sub_7E420
int sub_7E420()
{
  return (unsigned __int8)byte_1A45F1;
}


// ======================================================================
// ADDR: 0x7e6e0
// SYMBOL: sub_7E6E0
int __fastcall sub_7E6E0(__int16 a1, int a2, int a3)
{
  bool v6; // zf
  int v7; // r4
  __int16 v9; // [sp+6h] [bp-12Ah] BYREF
  _BYTE v10[276]; // [sp+8h] [bp-128h] BYREF

  if ( dword_1A45F4 != 3 )
    return 0;
  sub_86B90(v10);
  LOBYTE(v9) = -34;
  sub_86D52(v10, &v9, 8, 1);
  v9 = a1;
  sub_86D52(v10, &v9, 16, 1);
  v9 = a3;
  sub_86D52(v10, &v9, 16, 1);
  v6 = a2 == 0;
  if ( a2 )
    v6 = a3 == 0;
  if ( !v6 )
    sub_86C1C(v10, a2, a3);
  v7 = (*(int (__fastcall **)(_DWORD, _BYTE *, int, int, _DWORD))(**(_DWORD **)(dword_1A4434 + 528) + 32))(
         *(_DWORD *)(dword_1A4434 + 528),
         v10,
         1,
         8,
         0);
  sub_86BF8(v10);
  return v7;
}


// ======================================================================
// ADDR: 0x7e7bc
// SYMBOL: sub_7E7BC
bool __fastcall sub_7E7BC(const void *a1, size_t a2)
{
  _BOOL4 result; // r0
  const void *v5; // r6
  size_t v6; // r4

  result = 0;
  if ( a1 && (a2 - 1) >> 5 <= 0x2A && dword_1A45F4 == 3 )
  {
    *(_WORD *)(dword_1A461C + 18) = a2;
    sub_8613E();
    v5 = (const void *)dword_1A461C;
    j_memcpy((void *)(dword_1A461C + 24), a1, a2);
    v6 = sub_860BA(v5);
    result = sendto(dword_116E00, v5, v6, 0, 0, 0) == v6;
    ++*(_DWORD *)(dword_1A461C + 20);
  }
  return result;
}


// ======================================================================
// ADDR: 0x7e84c
// SYMBOL: sub_7E84C
int sub_7E84C()
{
  int result; // r0

  result = (unsigned __int8)byte_1A45F3;
  if ( byte_1A45F3 )
  {
    result = dword_1A461C;
    *(_DWORD *)(dword_1A461C + 20) = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x7e86c
// SYMBOL: sub_7E86C
int __fastcall sub_7E86C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r1
  int result; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int *v9; // r1
  int v10; // r8
  int v11; // r9
  int v12; // r1
  void **v13; // r5
  void *v14; // r0
  int v15; // r0

  if ( byte_1A45F3 )
  {
    v2 = dword_1A4700;
    __dmb(0xBu);
    v3 = dword_1A4780;
    __dmb(0xBu);
    v4 = v2 - v3;
    result = 0;
    if ( (dword_1A4680 & (v4 >> 31)) + v4 )
    {
      v6 = dword_1A4780;
      v7 = dword_1A4700;
      __dmb(0xBu);
      v8 = dword_1A4684 + 4 * v6;
      v9 = (int *)(v7 - v6);
      if ( v9 )
        v9 = (int *)(v8 + 128);
      v10 = *v9;
      *v9 = 0;
      v11 = dword_1A4780;
      v12 = dword_1A4684 + 4 * dword_1A4780;
      v13 = *(void ***)(v12 + 128);
      *(_DWORD *)(v12 + 128) = 0;
      if ( v13 )
      {
        v14 = *v13;
        if ( *v13 )
        {
          v13[1] = v14;
          operator delete(v14);
        }
        operator delete(v13);
      }
      v15 = v11 + 1 - dword_1A4680;
      if ( v11 + 1 != dword_1A4680 )
        v15 = v11 + 1;
      __dmb(0xBu);
      dword_1A4780 = v15;
      result = v10;
    }
  }
  else
  {
    result = 0;
  }
  *a1 = result;
  return result;
}


// ======================================================================
// ADDR: 0x7e914
// SYMBOL: sub_7E914
int __fastcall sub_7E914(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r1
  int result; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int *v9; // r1
  int v10; // r8
  int v11; // r9
  int v12; // r1
  void **v13; // r5
  void *v14; // r0
  int v15; // r0

  if ( byte_1A45F3 )
  {
    v2 = dword_1A4880;
    __dmb(0xBu);
    v3 = dword_1A4900;
    __dmb(0xBu);
    v4 = v2 - v3;
    result = 0;
    if ( (dword_1A4800 & (v4 >> 31)) + v4 )
    {
      v6 = dword_1A4900;
      v7 = dword_1A4880;
      __dmb(0xBu);
      v8 = dword_1A4804 + 4 * v6;
      v9 = (int *)(v7 - v6);
      if ( v9 )
        v9 = (int *)(v8 + 128);
      v10 = *v9;
      *v9 = 0;
      v11 = dword_1A4900;
      v12 = dword_1A4804 + 4 * dword_1A4900;
      v13 = *(void ***)(v12 + 128);
      *(_DWORD *)(v12 + 128) = 0;
      if ( v13 )
      {
        v14 = *v13;
        if ( *v13 )
        {
          v13[1] = v14;
          operator delete(v14);
        }
        operator delete(v13);
      }
      v15 = v11 + 1 - dword_1A4800;
      if ( v11 + 1 != dword_1A4800 )
        v15 = v11 + 1;
      __dmb(0xBu);
      dword_1A4900 = v15;
      result = v10;
    }
  }
  else
  {
    result = 0;
  }
  *a1 = result;
  return result;
}


// ======================================================================
// ADDR: 0x7efdc
// SYMBOL: sub_7EFDC
int sub_7EFDC()
{
  return dword_1A45F4;
}


// ======================================================================
// ADDR: 0x80290
// SYMBOL: sub_80290
int sub_80290()
{
  int result; // r0

  result = (unsigned __int8)byte_1A49B4;
  if ( byte_1A49B4 )
  {
    off_1ABF14(dword_1A4404 + 9775316, 0, dword_1A4404 + 9775300, dword_1A4404 + 9775284);
    return off_1ABF18();
  }
  return result;
}


// ======================================================================
// ADDR: 0x80df0
// SYMBOL: sub_80DF0
int __fastcall sub_80DF0(int a1)
{
  int *v3; // r5
  int *v4; // r6
  unsigned int v5; // r0
  int *v6; // r1
  int *v7; // r2
  unsigned int v8; // r2
  const char *v9; // r0
  int *v10; // r5
  int *v11; // r6
  unsigned int v12; // r0
  int *v13; // r1
  int *v14; // r2
  unsigned int v15; // r2
  int v16; // r12
  const char *v17; // r6
  int *v18; // r5
  int *v19; // r6
  unsigned int v20; // r0
  int *v21; // r1
  int *v22; // r2
  unsigned int v23; // r2
  int v24; // r12
  const char *v25; // r6
  int *v26; // r5
  int *v27; // r6
  unsigned int v28; // r0
  int *v29; // r1
  int *v30; // r2
  unsigned int v31; // r2
  int v32; // r12
  const char *v33; // r6
  int *v34; // r5
  int *v35; // r6
  unsigned int v36; // r0
  int *v37; // r1
  int *v38; // r2
  unsigned int v39; // r2
  int v40; // r5
  unsigned int v41; // r1
  int *v42; // r0
  unsigned int v43; // r6
  int *v44; // r2
  int v45; // r2
  int v46; // r4
  int v47; // r5
  unsigned int v48; // r1
  int *v49; // r0
  unsigned int v50; // r6
  int *v51; // r2
  int v52; // r2
  int v53; // r5
  unsigned int v54; // r1
  int *v55; // r0
  unsigned int v56; // r6
  int *v57; // r2
  int v58; // r2
  int v59; // r5
  unsigned int v60; // r1
  int *v61; // r0
  unsigned int v62; // r6
  int *v63; // r2
  int v64; // r2
  int v65; // r5
  unsigned int v66; // r1
  int *v67; // r0
  unsigned int v68; // r6
  int *v69; // r2
  int v70; // r2
  int v71; // r5
  unsigned int v72; // r1
  int *v73; // r0
  unsigned int v74; // r6
  int *v75; // r2
  int v76; // r2
  int *v77; // r8
  int v78; // r0
  int *v79; // r1
  int v80; // r0
  int v81; // r0
  int v82; // r0
  int v83; // r1
  int v84; // r0
  _DWORD *v85; // r0
  int v86; // r1
  int *v87; // r8
  int v88; // r0
  int *v89; // r1
  int v90; // r0
  int v91; // r0
  int v92; // r0
  int v93; // r1
  int v94; // r0
  int *v95; // r8
  int v96; // r0
  int *v97; // r1
  int v98; // r0
  int v99; // r0
  int v100; // r0
  int v101; // r1
  int v102; // r0
  int *v103; // r8
  int v104; // r0
  int *v105; // r1
  int v106; // r0
  int v107; // r0
  int v108; // r0
  int v109; // r1
  int v110; // r0
  int *v111; // r8
  int v112; // r0
  int *v113; // r1
  int v114; // r0
  int v115; // r0
  int v116; // r0
  int v117; // r1
  int v118; // r0
  int v119; // [sp+24h] [bp-114h] BYREF
  _DWORD v120[4]; // [sp+28h] [bp-110h] BYREF
  _DWORD *v121; // [sp+38h] [bp-100h]
  _DWORD v122[4]; // [sp+40h] [bp-F8h] BYREF
  _DWORD *v123; // [sp+50h] [bp-E8h]
  _DWORD v124[4]; // [sp+58h] [bp-E0h] BYREF
  _DWORD *v125; // [sp+68h] [bp-D0h]
  _DWORD v126[4]; // [sp+70h] [bp-C8h] BYREF
  _DWORD *v127; // [sp+80h] [bp-B8h]
  _DWORD v128[4]; // [sp+88h] [bp-B0h] BYREF
  _DWORD *v129; // [sp+98h] [bp-A0h]
  _DWORD v130[4]; // [sp+A0h] [bp-98h] BYREF
  _DWORD *v131; // [sp+B0h] [bp-88h]
  _DWORD v132[4]; // [sp+B8h] [bp-80h] BYREF
  _DWORD *v133; // [sp+C8h] [bp-70h]
  _DWORD v134[4]; // [sp+D0h] [bp-68h] BYREF
  _DWORD *v135; // [sp+E0h] [bp-58h]
  _DWORD v136[4]; // [sp+E8h] [bp-50h] BYREF
  _DWORD *v137; // [sp+F8h] [bp-40h]
  _DWORD v138[4]; // [sp+100h] [bp-38h] BYREF
  _DWORD *v139; // [sp+110h] [bp-28h]
  int v140; // [sp+11Ch] [bp-1Ch]

  switch ( *(_WORD *)a1 )
  {
    case 2:
      if ( !*(_WORD *)(a1 + 2) )
      {
        sub_80664("[sv:dbg:plugin:muteenable]");
        byte_1A49E5 = 0;
        byte_1A49E4 = 1;
        byte_1A49E6 = 0;
      }
      return v140;
    case 3:
      if ( !*(_WORD *)(a1 + 2) )
      {
        sub_80664("[sv:dbg:plugin:mutedisable]");
        byte_1A49E4 = 0;
      }
      return v140;
    case 4:
      if ( !*(_WORD *)(a1 + 2) )
      {
        sub_80664("[sv:dbg:plugin:startrecord]");
        if ( !byte_1A49E4 )
        {
          byte_1A49E5 = 1;
          byte_1A49E6 = 1;
          sub_8345C();
        }
      }
      return v140;
    case 5:
      if ( !*(_WORD *)(a1 + 2) )
      {
        sub_80664("[sv:dbg:plugin:stoprecord]");
        if ( !byte_1A49E4 )
        {
          byte_1A49E6 = 0;
          byte_1A49E5 = 0;
        }
      }
      return v140;
    case 6:
      if ( *(_WORD *)(a1 + 2) != 1 )
        return v140;
      sub_80664("[sv:dbg:plugin:addkey] : keyid(0x%hhx)", *(unsigned __int8 *)(a1 + 4));
      return sub_80664("[dbg:keyfilter] : adding key (0x%hhx)", *(unsigned __int8 *)(a1 + 4));
    case 7:
      if ( *(_WORD *)(a1 + 2) != 1 )
        return v140;
      sub_80664("[sv:dbg:plugin:removekey] : keyid(0x%hhx)", *(unsigned __int8 *)(a1 + 4));
      return sub_80664("[dbg:keyfilter] : removing key (0x%hhx)", *(unsigned __int8 *)(a1 + 4));
    case 8:
      if ( *(_WORD *)(a1 + 2) )
        return v140;
      sub_80664("[sv:dbg:plugin:removeallkeys]");
      return sub_80664("[dbg:keyfilter] : removing all keys");
    case 9:
      if ( *(unsigned __int16 *)(a1 + 2) < 8u )
        return v140;
      sub_80664("[sv:dbg:plugin:creategstream] : stream(%p), color(0x%x), name(%s)", *(_DWORD *)(a1 + 4));
      sub_81BC0(&v119, a1 + 8, a1 + 12);
      v3 = &dword_1A49DC;
      v4 = (int *)dword_1A49DC;
      if ( !dword_1A49DC )
      {
        v4 = &dword_1A49DC;
        goto LABEL_150;
      }
      v5 = *(_DWORD *)(a1 + 4);
      v6 = &dword_1A49DC;
      while ( 2 )
      {
        v8 = v4[4];
        if ( v5 >= v8 )
        {
          if ( v8 >= v5 || (v6 = v4 + 1, (v7 = (int *)v4[1]) == 0) )
          {
            v3 = v4;
            v4 = v6;
            goto LABEL_150;
          }
          ++v4;
          goto LABEL_22;
        }
        v7 = (int *)*v4;
        if ( *v4 )
        {
LABEL_22:
          v6 = v4;
          v4 = v7;
          continue;
        }
        break;
      }
      v3 = v4;
LABEL_150:
      v77 = (int *)*v4;
      if ( !*v4 )
      {
        v77 = (int *)operator new(0x18u);
        v77[5] = 0;
        *v77 = 0;
        v77[1] = 0;
        v77[2] = (int)v3;
        *v4 = (int)v77;
        v78 = *(_DWORD *)dword_1A49D8;
        v77[4] = *(_DWORD *)(a1 + 4);
        if ( v78 )
        {
          dword_1A49D8 = v78;
          v79 = (int *)*v4;
        }
        else
        {
          v79 = v77;
        }
        sub_77D8A((int *)dword_1A49DC, v79);
        ++dword_1A49E0;
      }
      v80 = v77[5];
      v77[5] = v119;
      v119 = 0;
      if ( v80 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v80 + 4))(v80);
        v81 = v119;
        v119 = 0;
        if ( v81 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v81 + 4))(v81);
      }
      v82 = v77[5];
      v139 = v138;
      v138[0] = &off_11139C;
      v138[1] = sub_841B0;
      sub_850DC(v82, v138);
      if ( v138 == v139 )
      {
        v83 = 4;
      }
      else
      {
        if ( !v139 )
          goto LABEL_163;
        v83 = 5;
      }
      (*(void (**)(void))(*v139 + 4 * v83))();
LABEL_163:
      v84 = v77[5];
      v137 = v136;
      v136[0] = &off_11139C;
      v136[1] = sub_8423C;
      sub_851AA(v84, v136);
      v85 = v137;
      if ( v136 == v137 )
        goto LABEL_164;
      goto LABEL_180;
    case 0xA:
      if ( *(unsigned __int16 *)(a1 + 2) < 0x18u )
        return v140;
      v9 = &byte_4FDB8;
      if ( *(_DWORD *)(a1 + 24) )
        v9 = (const char *)(a1 + 28);
      sub_80664(
        "[sv:dbg:plugin:createlpstream] : stream(%p), dist(%.2f), pos(%.2f;%.2f;%.2f), color(0x%x), name(%s)",
        *(const void **)(a1 + 4),
        *(float *)(a1 + 8),
        *(float *)(a1 + 12),
        *(float *)(a1 + 16),
        *(float *)(a1 + 20),
        *(_DWORD *)(a1 + 24),
        v9);
      sub_81C80(&v119, a1 + 24, a1 + 28, a1 + 8, a1 + 12);
      v10 = &dword_1A49DC;
      v11 = (int *)dword_1A49DC;
      if ( !dword_1A49DC )
      {
        v11 = &dword_1A49DC;
        goto LABEL_166;
      }
      v12 = *(_DWORD *)(a1 + 4);
      v13 = &dword_1A49DC;
      while ( 2 )
      {
        v15 = v11[4];
        if ( v12 >= v15 )
        {
          if ( v15 >= v12 || (v13 = v11 + 1, (v14 = (int *)v11[1]) == 0) )
          {
            v10 = v11;
            v11 = v13;
            goto LABEL_166;
          }
          ++v11;
          goto LABEL_33;
        }
        v14 = (int *)*v11;
        if ( *v11 )
        {
LABEL_33:
          v13 = v11;
          v11 = v14;
          continue;
        }
        break;
      }
      v10 = v11;
LABEL_166:
      v87 = (int *)*v11;
      if ( !*v11 )
      {
        v87 = (int *)operator new(0x18u);
        v87[5] = 0;
        *v87 = 0;
        v87[1] = 0;
        v87[2] = (int)v10;
        *v11 = (int)v87;
        v88 = *(_DWORD *)dword_1A49D8;
        v87[4] = *(_DWORD *)(a1 + 4);
        if ( v88 )
        {
          dword_1A49D8 = v88;
          v89 = (int *)*v11;
        }
        else
        {
          v89 = v87;
        }
        sub_77D8A((int *)dword_1A49DC, v89);
        ++dword_1A49E0;
      }
      v90 = v87[5];
      v87[5] = v119;
      v119 = 0;
      if ( v90 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v90 + 4))(v90);
        v91 = v119;
        v119 = 0;
        if ( v91 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v91 + 4))(v91);
      }
      v92 = v87[5];
      v135 = v134;
      v134[0] = &off_11139C;
      v134[1] = sub_841B0;
      sub_850DC(v92, v134);
      if ( v134 == v135 )
      {
        v93 = 4;
      }
      else
      {
        if ( !v135 )
          goto LABEL_179;
        v93 = 5;
      }
      (*(void (**)(void))(*v135 + 4 * v93))();
LABEL_179:
      v94 = v87[5];
      v133 = v132;
      v132[0] = &off_11139C;
      v132[1] = sub_8423C;
      sub_851AA(v94, v132);
      v85 = v133;
      if ( v132 != v133 )
        goto LABEL_180;
      goto LABEL_164;
    case 0xB:
      if ( *(unsigned __int16 *)(a1 + 2) < 0x10u )
        return v140;
      v16 = *(_DWORD *)(a1 + 16);
      v17 = &byte_4FDB8;
      if ( v16 )
        v17 = (const char *)(a1 + 20);
      sub_80664(
        "[sv:dbg:plugin:createlstreamatvehicle] : stream(%p), dist(%.2f), vehicle(%hu), color(0x%x), name(%s)",
        *(const void **)(a1 + 4),
        *(float *)(a1 + 8),
        *(_DWORD *)(a1 + 12),
        v16,
        v17);
      sub_81D50(&v119, a1 + 16, a1 + 20, a1 + 8, a1 + 12);
      v18 = &dword_1A49DC;
      v19 = (int *)dword_1A49DC;
      if ( !dword_1A49DC )
      {
        v19 = &dword_1A49DC;
        goto LABEL_185;
      }
      v20 = *(_DWORD *)(a1 + 4);
      v21 = &dword_1A49DC;
      while ( 2 )
      {
        v23 = v19[4];
        if ( v20 >= v23 )
        {
          if ( v23 >= v20 || (v21 = v19 + 1, (v22 = (int *)v19[1]) == 0) )
          {
            v18 = v19;
            v19 = v21;
            goto LABEL_185;
          }
          ++v19;
          goto LABEL_44;
        }
        v22 = (int *)*v19;
        if ( *v19 )
        {
LABEL_44:
          v21 = v19;
          v19 = v22;
          continue;
        }
        break;
      }
      v18 = v19;
LABEL_185:
      v95 = (int *)*v19;
      if ( !*v19 )
      {
        v95 = (int *)operator new(0x18u);
        v95[5] = 0;
        *v95 = 0;
        v95[1] = 0;
        v95[2] = (int)v18;
        *v19 = (int)v95;
        v96 = *(_DWORD *)dword_1A49D8;
        v95[4] = *(_DWORD *)(a1 + 4);
        if ( v96 )
        {
          dword_1A49D8 = v96;
          v97 = (int *)*v19;
        }
        else
        {
          v97 = v95;
        }
        sub_77D8A((int *)dword_1A49DC, v97);
        ++dword_1A49E0;
      }
      v98 = v95[5];
      v95[5] = v119;
      v119 = 0;
      if ( v98 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v98 + 4))(v98);
        v99 = v119;
        v119 = 0;
        if ( v99 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v99 + 4))(v99);
      }
      v100 = v95[5];
      v131 = v130;
      v130[0] = &off_11139C;
      v130[1] = sub_841B0;
      sub_850DC(v100, v130);
      if ( v130 == v131 )
      {
        v101 = 4;
      }
      else
      {
        if ( !v131 )
          goto LABEL_198;
        v101 = 5;
      }
      (*(void (**)(void))(*v131 + 4 * v101))();
LABEL_198:
      v102 = v95[5];
      v129 = v128;
      v128[0] = &off_11139C;
      v128[1] = sub_8423C;
      sub_851AA(v102, v128);
      v85 = v129;
      if ( v128 == v129 )
        goto LABEL_164;
      goto LABEL_180;
    case 0xC:
      if ( *(unsigned __int16 *)(a1 + 2) < 0x10u )
        return v140;
      v24 = *(_DWORD *)(a1 + 16);
      v25 = &byte_4FDB8;
      if ( v24 )
        v25 = (const char *)(a1 + 20);
      sub_80664(
        "[sv:dbg:plugin:createlstreamatplayer] : stream(%p), dist(%.2f), player(%hu), color(0x%x), name(%s)",
        *(const void **)(a1 + 4),
        *(float *)(a1 + 8),
        *(_DWORD *)(a1 + 12),
        v24,
        v25);
      sub_81E1C(&v119, a1 + 16, a1 + 20, a1 + 8, a1 + 12);
      v26 = &dword_1A49DC;
      v27 = (int *)dword_1A49DC;
      if ( !dword_1A49DC )
      {
        v27 = &dword_1A49DC;
        goto LABEL_201;
      }
      v28 = *(_DWORD *)(a1 + 4);
      v29 = &dword_1A49DC;
      while ( 2 )
      {
        v31 = v27[4];
        if ( v28 >= v31 )
        {
          if ( v31 >= v28 || (v29 = v27 + 1, (v30 = (int *)v27[1]) == 0) )
          {
            v26 = v27;
            v27 = v29;
            goto LABEL_201;
          }
          ++v27;
          goto LABEL_55;
        }
        v30 = (int *)*v27;
        if ( *v27 )
        {
LABEL_55:
          v29 = v27;
          v27 = v30;
          continue;
        }
        break;
      }
      v26 = v27;
LABEL_201:
      v103 = (int *)*v27;
      if ( !*v27 )
      {
        v103 = (int *)operator new(0x18u);
        v103[5] = 0;
        *v103 = 0;
        v103[1] = 0;
        v103[2] = (int)v26;
        *v27 = (int)v103;
        v104 = *(_DWORD *)dword_1A49D8;
        v103[4] = *(_DWORD *)(a1 + 4);
        if ( v104 )
        {
          dword_1A49D8 = v104;
          v105 = (int *)*v27;
        }
        else
        {
          v105 = v103;
        }
        sub_77D8A((int *)dword_1A49DC, v105);
        ++dword_1A49E0;
      }
      v106 = v103[5];
      v103[5] = v119;
      v119 = 0;
      if ( v106 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v106 + 4))(v106);
        v107 = v119;
        v119 = 0;
        if ( v107 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v107 + 4))(v107);
      }
      v108 = v103[5];
      v127 = v126;
      v126[0] = &off_11139C;
      v126[1] = sub_841B0;
      sub_850DC(v108, v126);
      if ( v126 == v127 )
      {
        v109 = 4;
      }
      else
      {
        if ( !v127 )
          goto LABEL_214;
        v109 = 5;
      }
      (*(void (**)(void))(*v127 + 4 * v109))();
LABEL_214:
      v110 = v103[5];
      v125 = v124;
      v124[0] = &off_11139C;
      v124[1] = sub_8423C;
      sub_851AA(v110, v124);
      v85 = v125;
      if ( v124 == v125 )
        goto LABEL_164;
      goto LABEL_180;
    case 0xD:
      if ( *(unsigned __int16 *)(a1 + 2) < 0x10u )
        return v140;
      v32 = *(_DWORD *)(a1 + 16);
      v33 = &byte_4FDB8;
      if ( v32 )
        v33 = (const char *)(a1 + 20);
      sub_80664(
        "[sv:dbg:plugin:createlstreamatobject] : stream(%p), dist(%.2f), object(%hu), color(0x%x), name(%s)",
        *(const void **)(a1 + 4),
        *(float *)(a1 + 8),
        *(_DWORD *)(a1 + 12),
        v32,
        v33);
      sub_81EEC(&v119, a1 + 16, a1 + 20, a1 + 8, a1 + 12);
      v34 = &dword_1A49DC;
      v35 = (int *)dword_1A49DC;
      if ( !dword_1A49DC )
      {
        v35 = &dword_1A49DC;
        goto LABEL_217;
      }
      v36 = *(_DWORD *)(a1 + 4);
      v37 = &dword_1A49DC;
      while ( 2 )
      {
        v39 = v35[4];
        if ( v36 >= v39 )
        {
          if ( v39 >= v36 || (v37 = v35 + 1, (v38 = (int *)v35[1]) == 0) )
          {
            v34 = v35;
            v35 = v37;
            goto LABEL_217;
          }
          ++v35;
          goto LABEL_66;
        }
        v38 = (int *)*v35;
        if ( *v35 )
        {
LABEL_66:
          v37 = v35;
          v35 = v38;
          continue;
        }
        break;
      }
      v34 = v35;
LABEL_217:
      v111 = (int *)*v35;
      if ( !*v35 )
      {
        v111 = (int *)operator new(0x18u);
        v111[5] = 0;
        *v111 = 0;
        v111[1] = 0;
        v111[2] = (int)v34;
        *v35 = (int)v111;
        v112 = *(_DWORD *)dword_1A49D8;
        v111[4] = *(_DWORD *)(a1 + 4);
        if ( v112 )
        {
          dword_1A49D8 = v112;
          v113 = (int *)*v35;
        }
        else
        {
          v113 = v111;
        }
        sub_77D8A((int *)dword_1A49DC, v113);
        ++dword_1A49E0;
      }
      v114 = v111[5];
      v111[5] = v119;
      v119 = 0;
      if ( v114 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v114 + 4))(v114);
        v115 = v119;
        v119 = 0;
        if ( v115 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v115 + 4))(v115);
      }
      v116 = v111[5];
      v123 = v122;
      v122[0] = &off_11139C;
      v122[1] = sub_841B0;
      sub_850DC(v116, v122);
      if ( v122 == v123 )
      {
        v117 = 4;
      }
      else
      {
        if ( !v123 )
          goto LABEL_230;
        v117 = 5;
      }
      (*(void (**)(void))(*v123 + 4 * v117))();
LABEL_230:
      v118 = v111[5];
      v121 = v120;
      v120[0] = &off_11139C;
      v120[1] = sub_8423C;
      sub_851AA(v118, v120);
      v85 = v121;
      if ( v120 == v121 )
      {
LABEL_164:
        v86 = 4;
      }
      else
      {
LABEL_180:
        if ( !v85 )
          return v140;
        v86 = 5;
      }
      (*(void (**)(void))(*v85 + 4 * v86))();
      return v140;
    case 0xE:
      if ( *(_WORD *)(a1 + 2) != 8 )
        return v140;
      sub_80664(
        "[sv:dbg:plugin:updatelpstreamdistance] : stream(%p), dist(%.2f)",
        *(const void **)(a1 + 4),
        *(float *)(a1 + 8));
      v40 = dword_1A49DC;
      if ( !dword_1A49DC )
        return v140;
      v41 = *(_DWORD *)(a1 + 4);
      v42 = &dword_1A49DC;
      do
      {
        v43 = *(_DWORD *)(v40 + 16);
        v44 = (int *)v40;
        if ( v43 < v41 )
          v44 = (int *)(v40 + 4);
        v45 = *v44;
        if ( v43 >= v41 )
          v42 = (int *)v40;
        v40 = v45;
      }
      while ( v45 );
      if ( v42 == &dword_1A49DC || v41 < v42[4] )
        return v140;
      return sub_7E294(v42[5], *(_DWORD *)(a1 + 8));
    case 0xF:
      if ( *(_WORD *)(a1 + 2) != 16 )
        return v140;
      v46 = a1 + 8;
      sub_80664(
        "[sv:dbg:plugin:updatelpstreamcoords] : stream(%p), pos(%.2f;%.2f;%.2f)",
        *(const void **)(a1 + 4),
        *(float *)(a1 + 8),
        *(float *)(a1 + 12),
        *(float *)(a1 + 16));
      v47 = dword_1A49DC;
      if ( !dword_1A49DC )
        return v140;
      v48 = *(_DWORD *)(v46 - 4);
      v49 = &dword_1A49DC;
      do
      {
        v50 = *(_DWORD *)(v47 + 16);
        v51 = (int *)v47;
        if ( v50 < v48 )
          v51 = (int *)(v47 + 4);
        v52 = *v51;
        if ( v50 >= v48 )
          v49 = (int *)v47;
        v47 = v52;
      }
      while ( v52 );
      if ( v49 == &dword_1A49DC || v48 < v49[4] )
        return v140;
      return sub_85CCC(v49[5], v46, _stack_chk_guard);
    case 0x10:
      if ( *(_WORD *)(a1 + 2) == 4 )
      {
        sub_80664("[sv:dbg:plugin:deletestream] : stream(%p)", *(const void **)(a1 + 4));
        sub_82284(&dword_1A49D8, a1 + 4);
      }
      return v140;
    case 0x13:
      if ( *(_WORD *)(a1 + 2) != 12 )
        return v140;
      sub_80664(
        "[sv:dbg:plugin:streamsetparameter] : stream(%p), parameter(%hhu), value(%.2f)",
        *(const void **)(a1 + 4),
        *(_DWORD *)(a1 + 8),
        *(float *)(a1 + 12));
      v53 = dword_1A49DC;
      if ( !dword_1A49DC )
        return v140;
      v54 = *(_DWORD *)(a1 + 4);
      v55 = &dword_1A49DC;
      do
      {
        v56 = *(_DWORD *)(v53 + 16);
        v57 = (int *)v53;
        if ( v56 < v54 )
          v57 = (int *)(v53 + 4);
        v58 = *v57;
        if ( v56 >= v54 )
          v55 = (int *)v53;
        v53 = v58;
      }
      while ( v58 );
      if ( v55 == &dword_1A49DC || v54 < v55[4] )
        return v140;
      return sub_84DD6(v55[5], *(unsigned __int8 *)(a1 + 8), *(_DWORD *)(a1 + 12), v140);
    case 0x14:
      if ( *(_WORD *)(a1 + 2) == 20 )
      {
        sub_80664(
          "[sv:dbg:plugin:streamslideparameter] : stream(%p), parameter(%hhu), startvalue(%.2f), endvalue(%.2f), time(%u)",
          *(const void **)(a1 + 4),
          *(_DWORD *)(a1 + 8),
          *(float *)(a1 + 12),
          *(float *)(a1 + 16),
          *(_DWORD *)(a1 + 20));
        v59 = dword_1A49DC;
        if ( dword_1A49DC )
        {
          v60 = *(_DWORD *)(a1 + 4);
          v61 = &dword_1A49DC;
          do
          {
            v62 = *(_DWORD *)(v59 + 16);
            v63 = (int *)v59;
            if ( v62 < v60 )
              v63 = (int *)(v59 + 4);
            v64 = *v63;
            if ( v62 >= v60 )
              v61 = (int *)v59;
            v59 = v64;
          }
          while ( v64 );
          if ( v61 != &dword_1A49DC && v60 >= v61[4] )
            sub_84EA0(
              v61[5],
              *(unsigned __int8 *)(a1 + 8),
              *(_DWORD *)(a1 + 12),
              *(_DWORD *)(a1 + 16),
              *(_DWORD *)(a1 + 20));
        }
      }
      return v140;
    case 0x15:
      if ( *(unsigned __int16 *)(a1 + 2) >= 0x10u )
      {
        sub_80664(
          "[sv:dbg:plugin:effectcreate] : stream(%p), effect(%p), number(%hhu), priority(%d)",
          *(const void **)(a1 + 4),
          *(const void **)(a1 + 8),
          *(_DWORD *)(a1 + 12),
          *(_DWORD *)(a1 + 16));
        v65 = dword_1A49DC;
        if ( dword_1A49DC )
        {
          v66 = *(_DWORD *)(a1 + 4);
          v67 = &dword_1A49DC;
          do
          {
            v68 = *(_DWORD *)(v65 + 16);
            v69 = (int *)v65;
            if ( v68 < v66 )
              v69 = (int *)(v65 + 4);
            v70 = *v69;
            if ( v68 >= v66 )
              v67 = (int *)v65;
            v65 = v70;
          }
          while ( v70 );
          if ( v67 != &dword_1A49DC && v66 >= v67[4] )
            sub_84F78(
              v67[5],
              *(_DWORD *)(a1 + 8),
              *(_DWORD *)(a1 + 12),
              *(_DWORD *)(a1 + 16),
              a1 + 20,
              *(unsigned __int16 *)(a1 + 2) - 16);
        }
      }
      return v140;
    case 0x16:
      if ( *(_WORD *)(a1 + 2) != 8 )
        return v140;
      sub_80664(
        "[sv:dbg:plugin:effectdelete] : stream(%p), effect(%p)",
        *(const void **)(a1 + 4),
        *(const void **)(a1 + 8));
      v71 = dword_1A49DC;
      if ( !dword_1A49DC )
        return v140;
      v72 = *(_DWORD *)(a1 + 4);
      v73 = &dword_1A49DC;
      do
      {
        v74 = *(_DWORD *)(v71 + 16);
        v75 = (int *)v71;
        if ( v74 < v72 )
          v75 = (int *)(v71 + 4);
        v76 = *v75;
        if ( v74 >= v72 )
          v73 = (int *)v71;
        v71 = v76;
      }
      while ( v76 );
      if ( v73 == &dword_1A49DC || v72 < v73[4] )
        return v140;
      return sub_8509A(v73[5], *(_DWORD *)(a1 + 8));
    default:
      return v140;
  }
}


// ======================================================================
// ADDR: 0x8265c
// SYMBOL: sub_8265C
int sub_8265C()
{
  return (unsigned __int8)byte_116E10;
}


// ======================================================================
// ADDR: 0x83224
// SYMBOL: sub_83224
int sub_83224()
{
  int result; // r0
  int v1; // r2
  int v2; // r0

  result = (unsigned __int8)byte_1A49FC;
  if ( byte_1A49FC )
  {
    result = (unsigned __int8)byte_1A4A24;
    byte_1A6FA6 = 0;
    if ( !byte_1A4A24 )
    {
      off_1ABEF8(dword_1A4A1C);
      j_opus_encoder_ctl(dword_1A4A18, 4028, v1);
      sub_80664("[sv:dbg:record:stoprecording] : channel recording stoped");
      v2 = off_1ABF44(dword_1A4A1C, 0, 0);
      return off_1ABF44(dword_1A4A1C, 0, v2);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x832b0
// SYMBOL: sub_832B0
int sub_832B0()
{
  int result; // r0
  unsigned int v1; // r2
  int v2; // r2

  result = (unsigned __int8)byte_1A49FC;
  if ( byte_1A49FC )
  {
    result = (unsigned __int8)byte_1A4A24;
    if ( byte_1A4A24 )
    {
      v1 = off_1ABF44(dword_1A4A1C, 0, 0);
      result = v1 - 1;
      if ( v1 - 1 < 0xFFFFFFFE )
      {
        if ( v1 >= 0x2580 )
          v1 = 9600;
        v2 = off_1ABF44(dword_1A4A1C, &unk_1A4A26, v1);
        result = v2 - 1;
        if ( (unsigned int)(v2 - 1) <= 0xFFFFFFFD )
          return off_1ABF4C(dword_1A4A20, &unk_1A4A26, v2);
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x83340
// SYMBOL: sub_83340
int __fastcall sub_83340(int a1, int a2)
{
  int result; // r0
  int v5; // r0

  result = 0;
  if ( byte_1A49FC && byte_1A6FA6 && !byte_1A4A24 )
  {
    if ( (unsigned int)(off_1ABF44(dword_1A4A1C, 0, 0) + 1) > 0x2580
      && off_1ABF44(dword_1A4A1C, &unk_1A4A26, 9600) == 9600 )
    {
      v5 = j_opus_encode(dword_1A4A18, &unk_1A4A26, 4800, a1, a2);
      return v5 & ~(v5 >> 31);
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x8345c
// SYMBOL: sub_8345C
int sub_8345C()
{
  int result; // r0

  result = 0;
  if ( byte_1A49FC && !byte_1A6FA6 && !byte_1A4A24 )
  {
    if ( sub_8265C() )
    {
      sub_80664("[sv:dbg:record:startrecording] : channel recording starting...");
      off_1ABEF4(dword_1A4A1C, 0);
      result = 1;
      byte_1A6FA6 = 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x84c08
// SYMBOL: sub_84C08
int __fastcall sub_84C08(int *a1, int a2)
{
  _DWORD *v2; // r11
  int *v5; // r6
  int *v6; // r5
  int *v7; // r5
  int v8; // r6
  __int64 v9; // r0
  int v10; // r0
  void *v11; // r0
  __int64 v12; // r0
  int v13; // r2
  int v14; // r10
  _DWORD *v15; // r5
  unsigned __int8 *v16; // r0
  const char *v17; // r3
  int v18; // r10
  _BOOL4 v19; // r0
  bool v20; // zf
  int v21; // r10
  const void *v22; // r5
  unsigned __int8 *v23; // r0
  const char *v24; // r3
  __int16 v26; // r1
  int v27; // r0
  int v28; // [sp+0h] [bp-28h] BYREF
  __int16 v29; // [sp+6h] [bp-22h] BYREF
  int v30; // [sp+8h] [bp-20h]

  v5 = (int *)a1[7];
  v6 = (int *)a1[8];
  if ( v5 != v6 )
  {
    while ( sub_7DB5A(*v5) != *(unsigned __int16 *)(a2 + 16) )
    {
      if ( ++v5 == v6 )
        goto LABEL_4;
    }
    goto LABEL_27;
  }
LABEL_4:
  v7 = (int *)a1[8];
  v5 = (int *)a1[7];
  if ( v5 != v7 )
  {
    while ( sub_7DB4C(*v5) )
    {
      if ( ++v5 == v7 )
        goto LABEL_7;
    }
    v14 = *(unsigned __int16 *)(a2 + 16);
    v15 = (_DWORD *)*v5;
    v16 = (unsigned __int8 *)sub_860B6(a1 + 2);
    v17 = (const char *)*((_DWORD *)v16 + 2);
    if ( !(*v16 << 31) )
      v17 = (const char *)(v16 + 1);
    sub_80664("[sv:dbg:stream:push] : channel %p was occupied by player %hu (stream:%s)", v15, v14, v17);
    v18 = *v5;
    v19 = sub_7DB4C(*v5);
    v20 = !v19;
    if ( v19 )
    {
      v2 = (_DWORD *)a1[14];
      v15 = (_DWORD *)a1[13];
      v20 = v15 == v2;
    }
    if ( !v20 )
    {
      do
      {
        if ( v15[4] )
        {
          v26 = sub_7DB5A(v18);
          v27 = v15[4];
          v29 = v26;
          if ( !v27 )
            sub_85628();
          (*(void (__fastcall **)(int, int *, __int16 *))(*(_DWORD *)v27 + 24))(v27, a1, &v29);
        }
        v15 += 6;
      }
      while ( v15 != v2 );
    }
    sub_7DB48(*v5, *(_WORD *)(a2 + 16));
    goto LABEL_27;
  }
LABEL_7:
  v8 = operator new(0x25D0u);
  sub_7D980(v8, a1[1]);
  v9 = *((_QWORD *)a1 + 4);
  v28 = v8;
  if ( (unsigned int)v9 >= HIDWORD(v9) )
  {
    sub_8533C(a1 + 7, &v28);
  }
  else
  {
    v28 = 0;
    *(_DWORD *)v9 = v8;
    a1[8] = v9 + 4;
  }
  v10 = v28;
  v28 = 0;
  if ( v10 )
  {
    v11 = (void *)sub_7DACC(v10);
    operator delete(v11);
  }
  v12 = *(_QWORD *)(a1 + 7);
  if ( HIDWORD(v12) != (_DWORD)v12 )
  {
    v13 = (HIDWORD(v12) - (int)v12) >> 2;
    v5 = (int *)(v12 + 4 * v13 - 4);
    while ( --v13 )
    {
      LODWORD(v12) = v12 + 4;
      if ( (_DWORD)v12 == HIDWORD(v12) )
        return v30;
    }
    sub_7DB48(*v5, *(_WORD *)(a2 + 16));
    v21 = *(unsigned __int16 *)(a2 + 16);
    v22 = (const void *)*v5;
    v23 = (unsigned __int8 *)sub_860B6(a1 + 2);
    v24 = (const char *)*((_DWORD *)v23 + 2);
    if ( !(*v23 << 31) )
      v24 = (const char *)(v23 + 1);
    sub_80664("[sv:dbg:stream:push] : channel %p for player %hu created (stream:%s)", v22, v21, v24);
    (*(void (__fastcall **)(int *, int))(*a1 + 12))(a1, *v5);
LABEL_27:
    sub_7DBE4(*v5, *(_DWORD *)(a2 + 20), a2 + 24, *(unsigned __int16 *)(a2 + 18));
  }
  return v30;
}


// ======================================================================
// ADDR: 0x86790
// SYMBOL: sub_86790
int sub_86790()
{
  return (unsigned __int8)byte_1ABEA4;
}


// ======================================================================
