// ADDR: 0xe57fc
// SYMBOL: sub_E57FC
void __fastcall sub_E57FC(void ***a1, int a2)
{
  int v2; // r6
  void ***v3; // r5
  unsigned __int8 *v4; // r9
  unsigned __int8 *v5; // r10
  unsigned __int8 **v6; // r0
  unsigned __int8 *v7; // r1
  unsigned int v8; // r1
  int v9; // r3
  int v10; // r0
  unsigned __int8 *v11; // r1
  unsigned __int8 *v12; // r2
  unsigned __int8 *v13; // r2
  unsigned __int8 *v14; // r3
  unsigned __int8 *v15; // r6
  unsigned __int8 v16; // t1
  unsigned __int8 *v17; // r1
  unsigned __int8 *v18; // r3
  unsigned int v19; // r5
  _DWORD *v20; // r6
  int v21; // r9
  unsigned __int8 **v22; // r0
  unsigned __int8 *v23; // r1
  unsigned int v24; // r1
  int v25; // r3
  int v26; // r0
  unsigned __int8 *v27; // r1
  unsigned __int8 *v28; // r5
  unsigned __int8 *v29; // r2
  unsigned __int8 *v30; // r3
  unsigned __int8 *v31; // r5
  unsigned __int8 v32; // t1
  unsigned __int8 *v33; // r1
  unsigned __int8 *v34; // r3
  unsigned int v35; // r4
  _DWORD *v36; // r1
  int v37; // r1
  bool v38; // zf
  int v39; // r2
  _DWORD *v40; // t1
  unsigned __int8 *i; // r0
  __int64 v42; // kr08_8
  unsigned __int8 *v43; // r1
  unsigned __int8 *v44; // r0
  int v45; // r4
  _DWORD *v46; // r6
  int v47; // r10
  int v48; // r0
  unsigned int v49; // r1
  int v50; // r2
  int v51; // r0
  unsigned int v52; // r3
  unsigned __int8 *v53; // r0
  unsigned __int8 *v54; // r1
  unsigned __int8 *v55; // r1
  unsigned __int8 *v56; // r2
  unsigned __int8 *v57; // r3
  unsigned __int8 v58; // t1
  unsigned __int8 *v59; // r0
  unsigned __int8 *v60; // r2
  unsigned int v61; // r6
  _DWORD *v62; // r4
  _DWORD *v63; // r10
  _DWORD *v64; // r11
  int v65; // r0
  unsigned int v66; // r1
  int v67; // r2
  int v68; // r0
  unsigned int v69; // r3
  unsigned __int8 *v70; // r0
  unsigned __int8 *v71; // r3
  unsigned __int8 *v72; // r1
  unsigned __int8 *v73; // r2
  unsigned __int8 *v74; // r3
  unsigned __int8 v75; // t1
  unsigned __int8 *v76; // r0
  unsigned __int8 *v77; // r2
  unsigned int v78; // r6
  _DWORD *v79; // r0
  _DWORD *v80; // r1
  int v81; // r0
  int v82; // r2
  _DWORD *v83; // t1
  unsigned __int8 *j; // r0
  void **v85; // r0
  void *v86; // r0
  void *v87; // r1
  int v88; // [sp+4h] [bp-5Ch]
  unsigned __int8 v90[8]; // [sp+10h] [bp-50h] BYREF
  _DWORD *v91; // [sp+18h] [bp-48h]
  int v92; // [sp+1Ch] [bp-44h]
  unsigned __int8 *v93; // [sp+24h] [bp-3Ch] BYREF
  unsigned __int8 *v94; // [sp+28h] [bp-38h]
  unsigned int v95; // [sp+2Ch] [bp-34h] BYREF
  unsigned __int8 *v96; // [sp+30h] [bp-30h] BYREF
  unsigned __int8 *v97; // [sp+34h] [bp-2Ch]
  unsigned __int8 *v98; // [sp+38h] [bp-28h]
  unsigned int v99; // [sp+3Ch] [bp-24h]

  v2 = a2 - 1;
  v3 = a1;
  if ( (unsigned int)(a2 - 1) <= 1 )
  {
    v95 = 0;
    v93 = 0;
    v94 = 0;
    v88 = a2 - 1;
    if ( a2 == 2 )
    {
      sub_E5D44(&v93, ((_BYTE *)(*a1)[1] - (_BYTE *)**a1) >> 4);
      v4 = (unsigned __int8 *)(*v3)[1];
      v5 = (unsigned __int8 *)**v3;
      if ( v5 != v4 )
      {
        v6 = &v96;
        do
        {
          v7 = v94;
          if ( (unsigned int)v94 >= v95 )
          {
            v8 = ((v94 - v93) >> 4) + 1;
            if ( v8 >= 0x10000000 )
              std::__vector_base_common<true>::__throw_length_error(&v93);
            v9 = v95 - (_DWORD)v93;
            if ( v8 <= (int)(v95 - (_DWORD)v93) >> 3 )
              v8 = v9 >> 3;
            if ( (unsigned int)v9 >= 0x7FFFFFF0 )
              v8 = 0xFFFFFFF;
            v10 = sub_E5D88(v6, v8, (v94 - v93) >> 4, &v95);
            v11 = v97;
            v12 = v98;
            *v98 = *v5;
            *((_QWORD *)v12 + 1) = *((_QWORD *)v5 + 1);
            *((_DWORD *)v5 + 2) = 0;
            *((_DWORD *)v5 + 3) = 0;
            v13 = v93;
            v14 = v94;
            v15 = v98 + 16;
            *v5 = 0;
            v98 = v15;
            if ( v14 == v13 )
            {
              v18 = v13;
            }
            else
            {
              do
              {
                v16 = *(v14 - 16);
                v14 -= 16;
                *(v11 - 16) = v16;
                *((_QWORD *)v11 - 1) = *((_QWORD *)v14 + 1);
                *((_DWORD *)v14 + 2) = 0;
                *((_DWORD *)v14 + 3) = 0;
                v17 = v97;
                *v14 = 0;
                v11 = v17 - 16;
                v97 = v11;
              }
              while ( v14 != v13 );
              v18 = v93;
              v13 = v94;
              v15 = v98;
            }
            v19 = v99;
            v93 = v11;
            v94 = v15;
            v97 = v18;
            v98 = v13;
            v99 = v95;
            v95 = v19;
            v96 = v18;
            v6 = (unsigned __int8 **)sub_E5E26(v10);
          }
          else
          {
            *v94 = *v5;
            *((_QWORD *)v7 + 1) = *((_QWORD *)v5 + 1);
            *v5 = 0;
            *((_DWORD *)v5 + 2) = 0;
            *((_DWORD *)v5 + 3) = 0;
            v94 = v7 + 16;
          }
          v5 += 16;
        }
        while ( v5 != v4 );
      }
    }
    else
    {
      sub_E5D44(&v93, (*a1)[2]);
      v21 = (int)(*v3 + 1);
      v20 = **v3;
      if ( v20 != (_DWORD *)v21 )
      {
        v22 = &v96;
        do
        {
          v23 = v94;
          if ( (unsigned int)v94 >= v95 )
          {
            v24 = ((v94 - v93) >> 4) + 1;
            if ( v24 >= 0x10000000 )
              std::__vector_base_common<true>::__throw_length_error(&v93);
            v25 = v95 - (_DWORD)v93;
            if ( v24 <= (int)(v95 - (_DWORD)v93) >> 3 )
              v24 = v25 >> 3;
            if ( (unsigned int)v25 >= 0x7FFFFFF0 )
              v24 = 0xFFFFFFF;
            v26 = sub_E5D88(v22, v24, (v94 - v93) >> 4, &v95);
            v27 = v97;
            v28 = v98;
            *v98 = *((_BYTE *)v20 + 32);
            *((_QWORD *)v28 + 1) = *((_QWORD *)v20 + 5);
            v29 = v93;
            v30 = v94;
            v31 = v98 + 16;
            v20[10] = 0;
            v20[11] = 0;
            *((_BYTE *)v20 + 32) = 0;
            v98 = v31;
            if ( v30 == v29 )
            {
              v34 = v29;
            }
            else
            {
              do
              {
                v32 = *(v30 - 16);
                v30 -= 16;
                *(v27 - 16) = v32;
                *((_QWORD *)v27 - 1) = *((_QWORD *)v30 + 1);
                *((_DWORD *)v30 + 2) = 0;
                *((_DWORD *)v30 + 3) = 0;
                v33 = v97;
                *v30 = 0;
                v27 = v33 - 16;
                v97 = v27;
              }
              while ( v30 != v29 );
              v34 = v93;
              v29 = v94;
              v31 = v98;
            }
            v35 = v99;
            v93 = v27;
            v94 = v31;
            v97 = v34;
            v98 = v29;
            v99 = v95;
            v95 = v35;
            v96 = v34;
            v22 = (unsigned __int8 **)sub_E5E26(v26);
          }
          else
          {
            *v94 = *((_BYTE *)v20 + 32);
            *((_QWORD *)v23 + 1) = *((_QWORD *)v20 + 5);
            v20[10] = 0;
            v20[11] = 0;
            *((_BYTE *)v20 + 32) = 0;
            v94 = v23 + 16;
          }
          v36 = (_DWORD *)v20[1];
          if ( v36 )
          {
            do
            {
              v20 = v36;
              v36 = (_DWORD *)*v36;
            }
            while ( v36 );
          }
          else
          {
            v37 = (int)(v20 + 2);
            v38 = *(_DWORD *)v20[2] == (_DWORD)v20;
            v20 = (_DWORD *)v20[2];
            if ( !v38 )
            {
              do
              {
                v39 = *(_DWORD *)v37;
                v40 = *(_DWORD **)(*(_DWORD *)v37 + 8);
                v37 = *(_DWORD *)v37 + 8;
                v20 = v40;
              }
              while ( *v40 != v39 );
            }
          }
        }
        while ( v20 != (_DWORD *)v21 );
      }
    }
    for ( i = v94; v93 != v94; i = v94 )
    {
      v90[0] = *(i - 16);
      v42 = *((_QWORD *)i - 1);
      v91 = (_DWORD *)*((_DWORD *)i - 2);
      *((_DWORD *)i - 2) = 0;
      v92 = HIDWORD(v42);
      *((_DWORD *)i - 1) = 0;
      v43 = v94;
      *(i - 16) = 0;
      v44 = sub_E3F7A(v43 - 16);
      v94 = v44;
      if ( v90[0] == 1 )
      {
        v62 = v91;
        v64 = v91 + 1;
        v63 = (_DWORD *)*v91;
        if ( (_DWORD *)*v91 != v91 + 1 )
        {
          while ( 1 )
          {
            if ( (unsigned int)v44 >= v95 )
            {
              v65 = v44 - v93;
              v66 = (v65 >> 4) + 1;
              if ( v66 >= 0x10000000 )
                std::__vector_base_common<true>::__throw_length_error(&v93);
              v67 = v65 >> 4;
              v68 = v95 - (_DWORD)v93;
              LOWORD(v69) = -16;
              if ( v66 <= (int)(v95 - (_DWORD)v93) >> 3 )
                v66 = v68 >> 3;
              HIWORD(v69) = 0x7FFF;
              if ( v68 >= v69 )
                v66 = 0xFFFFFFF;
              sub_E5D88(&v96, v66, v67, &v95);
              v70 = v97;
              v71 = v98;
              *v98 = *((_BYTE *)v63 + 32);
              *((_QWORD *)v71 + 1) = *((_QWORD *)v63 + 5);
              v72 = v93;
              v73 = v94;
              v74 = v98 + 16;
              v63[10] = 0;
              v63[11] = 0;
              *((_BYTE *)v63 + 32) = 0;
              v98 = v74;
              if ( v73 == v72 )
              {
                v77 = v72;
              }
              else
              {
                do
                {
                  v75 = *(v73 - 16);
                  v73 -= 16;
                  *(v70 - 16) = v75;
                  *((_QWORD *)v70 - 1) = *((_QWORD *)v73 + 1);
                  *((_DWORD *)v73 + 2) = 0;
                  *((_DWORD *)v73 + 3) = 0;
                  v76 = v97;
                  *v73 = 0;
                  v70 = v76 - 16;
                  v97 = v70;
                }
                while ( v73 != v72 );
                v77 = v93;
                v72 = v94;
                v74 = v98;
              }
              v78 = v95;
              v93 = v70;
              v94 = v74;
              v95 = v99;
              v98 = v72;
              v99 = v78;
              v96 = v77;
              v97 = v77;
              sub_E5E26(&v96);
            }
            else
            {
              *v44 = *((_BYTE *)v63 + 32);
              *((_QWORD *)v44 + 1) = *((_QWORD *)v63 + 5);
              v63[10] = 0;
              v63[11] = 0;
              *((_BYTE *)v63 + 32) = 0;
              v94 = v44 + 16;
            }
            v79 = (_DWORD *)v63[1];
            if ( v79 )
            {
              do
              {
                v80 = v79;
                v79 = (_DWORD *)*v79;
              }
              while ( v79 );
            }
            else
            {
              v81 = (int)(v63 + 2);
              v80 = (_DWORD *)v63[2];
              if ( (_DWORD *)*v80 != v63 )
              {
                do
                {
                  v82 = *(_DWORD *)v81;
                  v83 = *(_DWORD **)(*(_DWORD *)v81 + 8);
                  v81 = *(_DWORD *)v81 + 8;
                  v80 = v83;
                }
                while ( *v83 != v82 );
              }
            }
            if ( v80 == v64 )
              break;
            v44 = v94;
            v63 = v80;
          }
          v62 = v91;
        }
        sub_E5E74(v62, v62[1]);
        v62[1] = 0;
        *v62 = v62 + 1;
        v62[2] = 0;
      }
      else if ( v90[0] == 2 )
      {
        v45 = *v91;
        v46 = v91 + 1;
        v47 = v91[1];
        if ( *v91 != v47 )
        {
          while ( 1 )
          {
            if ( (unsigned int)v44 >= v95 )
            {
              v48 = v44 - v93;
              v49 = (v48 >> 4) + 1;
              if ( v49 >= 0x10000000 )
                std::__vector_base_common<true>::__throw_length_error(&v93);
              v50 = v48 >> 4;
              v51 = v95 - (_DWORD)v93;
              LOWORD(v52) = -16;
              if ( v49 <= (int)(v95 - (_DWORD)v93) >> 3 )
                v49 = v51 >> 3;
              HIWORD(v52) = 0x7FFF;
              if ( v51 >= v52 )
                v49 = 0xFFFFFFF;
              sub_E5D88(&v96, v49, v50, &v95);
              v53 = v97;
              v54 = v98;
              *v98 = *(_BYTE *)v45;
              *((_QWORD *)v54 + 1) = *(_QWORD *)(v45 + 8);
              *(_DWORD *)(v45 + 8) = 0;
              *(_DWORD *)(v45 + 12) = 0;
              v55 = v93;
              v56 = v94;
              v57 = v98 + 16;
              *(_BYTE *)v45 = 0;
              v98 = v57;
              if ( v56 == v55 )
              {
                v60 = v55;
              }
              else
              {
                do
                {
                  v58 = *(v56 - 16);
                  v56 -= 16;
                  *(v53 - 16) = v58;
                  *((_QWORD *)v53 - 1) = *((_QWORD *)v56 + 1);
                  *((_DWORD *)v56 + 2) = 0;
                  *((_DWORD *)v56 + 3) = 0;
                  v59 = v97;
                  *v56 = 0;
                  v53 = v59 - 16;
                  v97 = v53;
                }
                while ( v56 != v55 );
                v60 = v93;
                v55 = v94;
                v57 = v98;
              }
              v61 = v95;
              v93 = v53;
              v94 = v57;
              v95 = v99;
              v98 = v55;
              v99 = v61;
              v96 = v60;
              v97 = v60;
              sub_E5E26(&v96);
            }
            else
            {
              *v44 = *(_BYTE *)v45;
              *((_QWORD *)v44 + 1) = *(_QWORD *)(v45 + 8);
              *(_BYTE *)v45 = 0;
              *(_DWORD *)(v45 + 8) = 0;
              *(_DWORD *)(v45 + 12) = 0;
              v94 = v44 + 16;
            }
            v45 += 16;
            if ( v45 == v47 )
              break;
            v44 = v94;
          }
          v45 = *v91;
          v46 = v91 + 1;
          for ( j = (unsigned __int8 *)v91[1]; j != (unsigned __int8 *)v45; j = sub_E3F7A(j - 16) )
            ;
        }
        *v46 = v45;
      }
      sub_E3F7A(v90);
    }
    sub_E5ECC(&v93);
    v2 = v88;
    v3 = a1;
  }
  switch ( v2 )
  {
    case 0:
      sub_E5E74(*v3, (*v3)[1]);
      goto LABEL_93;
    case 1:
      sub_E5ECC(*v3);
      goto LABEL_93;
    case 2:
      v85 = *v3;
      if ( !(*(unsigned __int8 *)*v3 << 31) )
        goto LABEL_94;
      v86 = v85[2];
      break;
    case 7:
      v85 = *v3;
      v87 = **v3;
      if ( !v87 )
        goto LABEL_94;
      v85[1] = v87;
      v86 = v87;
      break;
    default:
      return;
  }
  operator delete(v86);
LABEL_93:
  v85 = *v3;
LABEL_94:
  operator delete(v85);
}


// ======================================================================
