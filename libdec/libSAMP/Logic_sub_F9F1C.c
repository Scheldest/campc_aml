// ADDR: 0x109470
// SYMBOL: sub_109470
int __fastcall sub_109470(int a1, int a2, int a3, int a4, float a5, float a6, char a7)
{
  int v11; // r8
  int v12; // r0
  int v13; // r0
  int v14; // r1
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r0
  unsigned int v28; // r6
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r4
  int v33; // r0
  int v34; // r2
  int v36; // r1
  int v37; // r2
  int v38; // r3
  int v39; // r3
  int v40; // r3
  int v41; // r3
  __int64 v42; // r0
  int v43; // r0
  int *v44; // r0
  int *v45; // r0
  int v46; // r0
  int v47; // r1
  int v48; // r2
  int v49; // r3
  std::runtime_error *exception; // r4
  int v52; // [sp+0h] [bp-C8h]
  int v53; // [sp+0h] [bp-C8h]
  int v54; // [sp+0h] [bp-C8h]
  int v55; // [sp+0h] [bp-C8h]
  int v56; // [sp+0h] [bp-C8h]
  int v57; // [sp+0h] [bp-C8h]
  int v58; // [sp+0h] [bp-C8h]
  int v59; // [sp+0h] [bp-C8h]
  int v60; // [sp+0h] [bp-C8h]
  int v61; // [sp+0h] [bp-C8h]
  int v62; // [sp+0h] [bp-C8h]
  int v63; // [sp+4h] [bp-C4h]
  int v64; // [sp+4h] [bp-C4h]
  int v65; // [sp+4h] [bp-C4h]
  int v66; // [sp+4h] [bp-C4h]
  int v67; // [sp+4h] [bp-C4h]
  int v68; // [sp+4h] [bp-C4h]
  int v69; // [sp+4h] [bp-C4h]
  int v70; // [sp+4h] [bp-C4h]
  int v71; // [sp+4h] [bp-C4h]
  int v72; // [sp+4h] [bp-C4h]
  int v73; // [sp+4h] [bp-C4h]
  int v74; // [sp+8h] [bp-C0h]
  int v75; // [sp+8h] [bp-C0h]
  int v76; // [sp+8h] [bp-C0h]
  int v77; // [sp+8h] [bp-C0h]
  int v78; // [sp+8h] [bp-C0h]
  int v79; // [sp+8h] [bp-C0h]
  int v80; // [sp+8h] [bp-C0h]
  int v81; // [sp+8h] [bp-C0h]
  int v82; // [sp+8h] [bp-C0h]
  int v83; // [sp+8h] [bp-C0h]
  int v84; // [sp+8h] [bp-C0h]
  int v85; // [sp+Ch] [bp-BCh]
  int v86; // [sp+Ch] [bp-BCh]
  int v87; // [sp+Ch] [bp-BCh]
  int v88; // [sp+Ch] [bp-BCh]
  int v89; // [sp+Ch] [bp-BCh]
  int v90; // [sp+Ch] [bp-BCh]
  int v91; // [sp+Ch] [bp-BCh]
  int v92; // [sp+Ch] [bp-BCh]
  int v93; // [sp+Ch] [bp-BCh]
  int v94; // [sp+Ch] [bp-BCh]
  int v95; // [sp+Ch] [bp-BCh]
  int v96; // [sp+10h] [bp-B8h]
  int v97; // [sp+10h] [bp-B8h]
  int v98; // [sp+10h] [bp-B8h]
  int v99; // [sp+10h] [bp-B8h]
  int v100; // [sp+10h] [bp-B8h]
  int v101; // [sp+10h] [bp-B8h]
  int v102; // [sp+10h] [bp-B8h]
  int v103; // [sp+10h] [bp-B8h]
  int v104; // [sp+10h] [bp-B8h]
  int v105; // [sp+10h] [bp-B8h]
  int v106; // [sp+10h] [bp-B8h]
  int v107; // [sp+14h] [bp-B4h]
  int v108; // [sp+14h] [bp-B4h]
  int v109; // [sp+14h] [bp-B4h]
  int v110; // [sp+14h] [bp-B4h]
  int v111; // [sp+14h] [bp-B4h]
  int v112; // [sp+14h] [bp-B4h]
  int v113; // [sp+14h] [bp-B4h]
  int v114; // [sp+14h] [bp-B4h]
  int v115; // [sp+14h] [bp-B4h]
  int v116; // [sp+14h] [bp-B4h]
  int v117; // [sp+14h] [bp-B4h]
  int v118; // [sp+18h] [bp-B0h]
  int v119; // [sp+18h] [bp-B0h]
  int v120; // [sp+18h] [bp-B0h]
  int v121; // [sp+18h] [bp-B0h]
  int v122; // [sp+18h] [bp-B0h]
  int v123; // [sp+18h] [bp-B0h]
  int v124; // [sp+18h] [bp-B0h]
  int v125; // [sp+18h] [bp-B0h]
  int v126; // [sp+18h] [bp-B0h]
  int v127; // [sp+18h] [bp-B0h]
  int v128; // [sp+18h] [bp-B0h]
  int v129; // [sp+18h] [bp-B0h]
  int v130[4]; // [sp+44h] [bp-84h] BYREF
  arg6_F894A v131; // [sp+54h] [bp-74h]
  int v132; // [sp+5Ch] [bp-6Ch]
  int v133; // [sp+60h] [bp-68h]
  arg9_F894A v134; // [sp+64h] [bp-64h]
  int v135; // [sp+6Ch] [bp-5Ch]
  int v136; // [sp+70h] [bp-58h]
  arg12_F894A v137; // [sp+74h] [bp-54h]
  int v138; // [sp+7Ch] [bp-4Ch]
  int v139[17]; // [sp+84h] [bp-44h] BYREF

  word_263040 = a2;
  v139[0] = 0;
  *(_DWORD *)a1 = &off_22B258;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  if ( a2 > 568 )
  {
    if ( (unsigned int)(a2 - 569) < 2 )
    {
      if ( dword_263044 )
      {
        v12 = *(_DWORD *)(dword_263044 + 1512);
        *(_DWORD *)(a1 + 12) = v12;
        if ( v12 )
        {
          v13 = sub_10833C();
          v14 = *(_DWORD *)(a1 + 12);
          *(_DWORD *)(a1 + 4) = v14;
          *(_DWORD *)(a1 + 8) = v13;
          dword_263044 = v14;
          goto LABEL_28;
        }
        *(_DWORD *)(a1 + 12) = 0;
        *(_DWORD *)(a1 + 4) = 0;
        dword_263044 = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 12) = 0;
        *(_DWORD *)(a1 + 4) = 0;
      }
      return a1;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 449:
        v11 = 9;
        goto LABEL_12;
      case 537:
        v11 = 3;
        goto LABEL_12;
      case 538:
        v11 = 5;
LABEL_12:
        sub_F9CBC(538, (int)&off_22B258, a3, a4, v52, v63, v74, v85, v96, v107, v118);
        sub_F9CBC(570, v15, v16, v17, v53, v64, v75, v86, v97, v108, v119);
        sub_F9CBC(537, v18, v19, v20, v54, v65, v76, v87, v98, v109, v120);
        sub_F9CBC(569, v21, v22, v23, v55, v66, v77, v88, v99, v110, v121);
        v27 = sub_F9CBC(449, v24, v25, v26, v56, v67, v78, v89, v100, v111, v122);
        v28 = 0;
        sub_F9CCC(v27, v29, v30, v31, v57, v68, v79, v90, v101, v112, v123);
        while ( 1 )
        {
          v32 = sub_F9CD8(538, 5000);
          if ( !v32 )
            _android_log_print(5, "AXL", "Can't load train model %d", 538);
          if ( !sub_F9CD8(570, 5000) )
          {
            _android_log_print(5, "AXL", "Can't load train model %d", 570);
            v32 = 0;
          }
          if ( !sub_F9CD8(537, 5000) )
          {
            _android_log_print(5, "AXL", "Can't load train model %d", 537);
            v32 = 0;
          }
          if ( !sub_F9CD8(569, 5000) )
          {
            _android_log_print(5, "AXL", "Can't load train model %d", 569);
            v32 = 0;
          }
          if ( sub_F9CD8(449, 5000) )
          {
            if ( v32 || v28 >= 5 )
            {
LABEL_27:
              sub_107188(
                word_B3D5A,
                v11,
                COERCE_UNSIGNED_INT64(*(float *)&a3),
                HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&a3)),
                COERCE_UNSIGNED_INT64(*(float *)&a4),
                HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&a4)),
                COERCE_UNSIGNED_INT64(a5),
                HIDWORD(COERCE_UNSIGNED_INT64(a5)),
                a6 > 180.0,
                (int)v139,
                v124);
              v33 = sub_108354(v139[0]);
              v34 = v139[0];
              *(_DWORD *)(a1 + 12) = v33;
              dword_263044 = v33;
              *(_DWORD *)(a1 + 4) = v33;
              *(_DWORD *)(a1 + 8) = v34;
              sub_108EF8(v33);
              goto LABEL_28;
            }
          }
          else
          {
            _android_log_print(5, "AXL", "Can't load train model %d", 449);
            if ( v28 > 4 )
              goto LABEL_27;
          }
          ++v28;
        }
    }
  }
  if ( !sub_F9C94(a2) )
  {
    v46 = sub_F9CBC(a2, v36, v37, v38, v52, v63, v74, v85, v96, v107, v118);
    sub_F9CCC(v46, v47, v48, v49, v62, v73, v84, v95, v106, v117, v129);
    while ( !sub_F9C94(a2) )
    {
      usleep(0x3E8u);
      if ( dword_263048++ >= 200 )
      {
        dword_263048 = 0;
        exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
        std::runtime_error::runtime_error(exception, "error loading vehicle model");
        j___cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::runtime_error,
          (void (*)(void *))std::underflow_error::~underflow_error);
      }
    }
  }
  sub_107188(
    word_B3CF6,
    a2,
    COERCE_UNSIGNED_INT64(*(float *)&a3),
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&a3)),
    COERCE_UNSIGNED_INT64(*(float *)&a4),
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&a4)),
    COERCE_UNSIGNED_INT64(a5),
    HIDWORD(COERCE_UNSIGNED_INT64(a5)),
    (int)v139,
    v107,
    v118);
  sub_107188(
    word_B3D0A,
    v139[0],
    COERCE_UNSIGNED_INT64(a6),
    HIDWORD(COERCE_UNSIGNED_INT64(a6)),
    v58,
    v69,
    v80,
    v91,
    v102,
    v113,
    v125);
  sub_107188(word_B3D1E, v139[0], 0, v39, v59, v70, v81, v92, v103, v114, v126);
  sub_107188(word_B3D32, v139[0], 0, v40, v60, v71, v82, v93, v104, v115, v127);
  sub_107188(word_B3D46, v139[0], 0, v41, v61, v72, v83, v94, v105, v116, v128);
  LODWORD(v42) = sub_108354(v139[0]);
  HIDWORD(v42) = v139[0];
  *(_DWORD *)(a1 + 12) = v42;
  *(_QWORD *)(a1 + 4) = v42;
  sub_F89BC(a1, 0, 0, 0);
  v43 = *(_DWORD *)(a1 + 12);
  if ( v43 )
  {
    *(_DWORD *)(v43 + 1212) = 0;
    *(_DWORD *)(v43 + 1288) = 0;
    *(_BYTE *)(a1 + 33) = 0;
    sub_F8910(a1, v130);
    v44 = *(int **)(a1 + 12);
    if ( !v44 || sub_10837C(v44) != 2 && ((v45 = *(int **)(a1 + 12)) == 0 || sub_10837C(v45) != 6) )
      *(float *)&v138 = *(float *)&v138 + 0.25;
    sub_F894A(a1, v130[0], v130[1], v130[2], v130[3], v131, v132, v133, v134, v135, v136, v137, v138);
    *(_BYTE *)(a1 + 20) = a7;
  }
LABEL_28:
  *(_DWORD *)(a1 + 24) = -1;
  *(_DWORD *)(a1 + 28) = -1;
  *(_QWORD *)(a1 + 41) = 0LL;
  *(_QWORD *)(a1 + 49) = 0LL;
  *(_QWORD *)(a1 + 57) = 0LL;
  *(_QWORD *)(a1 + 65) = 0LL;
  *(_BYTE *)(a1 + 36) = 0;
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 39) = 0;
  *(_WORD *)(a1 + 34) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  return a1;
}


// ======================================================================
