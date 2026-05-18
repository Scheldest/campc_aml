// ADDR: 0x121d38
// SYMBOL: sub_121D38
int __fastcall sub_121D38(int a1, int a2, int a3)
{
  int v5; // r4
  __int64 v6; // r0
  int v7; // r2
  __int64 v8; // r0
  int v9; // r2
  __int64 v10; // r0
  int v11; // r2
  int v12; // r2
  __int64 v13; // r0
  char *v14; // r3
  __int64 v15; // r0
  int v16; // r2
  int v17; // r11
  __int64 v18; // r0
  int v19; // r2
  __int64 v20; // r0
  int v21; // r2
  __int64 v22; // r0
  int v23; // r2
  __int64 v24; // r0
  int v25; // r2
  char *v26; // r3
  char *v27; // r3
  __int64 v28; // r0
  int v29; // r2
  __int64 v30; // r0
  int v31; // r2
  __int64 v32; // r0
  int v33; // r2
  __int64 v34; // r0
  int v35; // r2
  __int64 v36; // r0
  int v37; // r2
  __int64 v38; // r0
  int v39; // r2
  __int64 v40; // r0
  int v41; // r2
  __int64 v42; // r0
  int v43; // r2
  __int64 v44; // r0
  __int64 v45; // r0
  int v46; // r2
  char *v47; // r5
  char *v48; // r3
  __int64 v49; // r0
  int v50; // r2
  int v52; // [sp+4h] [bp-2Ch]

  sub_123338(a1, a2, a3, "precision mediump float;");
  v5 = a1 + 4;
  _strcat_chk(v5, &byte_2639B4, 0x2000);
  LODWORD(v6) = _strcat_chk(v5, "\n", 0x2000);
  if ( (a2 & 0x20) != 0 )
  {
    sub_123338(v6, SHIDWORD(v6), v7, "uniform sampler2D Diffuse;");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v8 = _strcat_chk(v5, "\n", 0x2000);
    sub_123338(v8, SHIDWORD(v8), v9, "varying mediump vec2 Out_Tex0;");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v6 = _strcat_chk(v5, "\n", 0x2000);
  }
  v52 = a2 & 0x1000040;
  if ( (a2 & 0x1000040) != 0 )
  {
    sub_123338(a2 & 0x1000040, SHIDWORD(v6), v7, "uniform sampler2D EnvMap;");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v10 = _strcat_chk(v5, "\n", 0x2000);
    sub_123338(v10, SHIDWORD(v10), v11, "uniform lowp float EnvMapCoefficient;");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    _strcat_chk(v5, "\n", 0x2000);
    HIDWORD(v13) = a2 << 25;
    LODWORD(v13) = "varying mediump vec2 Out_Tex1;";
    v14 = "varying mediump vec3 Out_Refl;";
    if ( (a2 & 0x40) != 0 )
      v14 = "varying mediump vec2 Out_Tex1;";
  }
  else
  {
    if ( (a2 & 0x10000) == 0 )
      goto LABEL_10;
    sub_123338(a2 << 15, SHIDWORD(v6), v7, "uniform sampler2D EnvMap;");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v13 = _strcat_chk(v5, "\n", 0x2000);
    v14 = "uniform float DetailTiling;";
  }
  sub_123338(v13, SHIDWORD(v13), v12, v14);
  _strcat_chk(v5, &byte_2639B4, 0x2000);
  v6 = _strcat_chk(v5, "\n", 0x2000);
LABEL_10:
  LODWORD(v6) = a2 & 0x400;
  if ( (a2 & 0x400) != 0 )
  {
    sub_123338(v6, SHIDWORD(v6), v7, "varying mediump float Out_FogAmt;");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v15 = _strcat_chk(v5, "\n", 0x2000);
    sub_123338(v15, SHIDWORD(v15), v16, "uniform lowp vec3 FogColor;");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v6 = _strcat_chk(v5, "\n", 0x2000);
  }
  if ( (a2 & 0x12) != 0 )
  {
    sub_123338(v6, SHIDWORD(v6), v7, "varying lowp vec4 Out_Color;");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v6 = _strcat_chk(v5, "\n", 0x2000);
  }
  if ( (a2 & 0x2000) != 0 )
  {
    sub_123338(a2 & 0x2000, SHIDWORD(v6), v7, "varying lowp vec3 Out_Spec;");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v6 = _strcat_chk(v5, "\n", 0x2000);
  }
  LODWORD(v6) = a2 & 4;
  if ( (a2 & 4) != 0 )
  {
    sub_123338(v6, SHIDWORD(v6), v7, "uniform lowp float AlphaModulate;");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v6 = _strcat_chk(v5, "\n", 0x2000);
  }
  v17 = a2 & 0x80000;
  if ( (a2 & 0x80000) != 0 )
  {
    sub_123338(v6, SHIDWORD(v6), v7, "varying mediump vec2 Out_WaterDetail;");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v18 = _strcat_chk(v5, "\n", 0x2000);
    sub_123338(v18, SHIDWORD(v18), v19, "varying mediump vec2 Out_WaterDetail2;");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v20 = _strcat_chk(v5, "\n", 0x2000);
    sub_123338(v20, SHIDWORD(v20), v21, "varying mediump float Out_WaterAlphaBlend;");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v6 = _strcat_chk(v5, "\n", 0x2000);
  }
  sub_123338(v6, SHIDWORD(v6), v7, "void main() {");
  _strcat_chk(v5, &byte_2639B4, 0x2000);
  v22 = _strcat_chk(v5, "\n", 0x2000);
  sub_123338(v22, SHIDWORD(v22), v23, "lowp vec4 fcolor;");
  _strcat_chk(v5, &byte_2639B4, 0x2000);
  v24 = _strcat_chk(v5, "\n", 0x2000);
  if ( (a2 & 0x20) == 0 )
  {
    LODWORD(v24) = "fcolor = Out_Color;";
    v26 = "fcolor = 0.0;";
    if ( (a2 & 0x12) != 0 )
      v26 = "fcolor = Out_Color;";
    goto LABEL_38;
  }
  LODWORD(v24) = a2 << 20;
  if ( (a2 & 0x800) != 0 )
  {
    v27 = "lowp vec4 diffuseColor = texture2D(Diffuse, Out_Tex0, -1.5);";
  }
  else
  {
    LODWORD(v24) = *(unsigned __int8 *)sub_163F8C(v24, HIDWORD(v24));
    HIDWORD(v24) = "lowp vec4 diffuseColor = texture2D(Diffuse, Out_Tex0);";
    v27 = "lowp vec4 diffuseColor = texture2D(Diffuse, Out_Tex0, -0.5);";
    if ( (_DWORD)v24 )
      v27 = "lowp vec4 diffuseColor = texture2D(Diffuse, Out_Tex0);";
  }
  sub_123338(v24, SHIDWORD(v24), v25, v27);
  _strcat_chk(v5, &byte_2639B4, 0x2000);
  v28 = _strcat_chk(v5, "\n", 0x2000);
  sub_123338(v28, SHIDWORD(v28), v29, "fcolor = diffuseColor;");
  _strcat_chk(v5, &byte_2639B4, 0x2000);
  v24 = _strcat_chk(v5, "\n", 0x2000);
  if ( (a2 & 0x12) != 0 )
  {
    LODWORD(v24) = a2 << 15;
    if ( (a2 & 0x10000) != 0 )
    {
      if ( !v17 )
      {
        v26 = "fcolor *= vec4(Out_Color.xyz * texture2D(EnvMap, Out_Tex0.xy * DetailTiling, -0.5).xyz * 2.0, Out_Color.w);";
LABEL_38:
        sub_123338(v24, SHIDWORD(v24), v25, v26);
        _strcat_chk(v5, &byte_2639B4, 0x2000);
        v24 = _strcat_chk(v5, "\n", 0x2000);
        goto LABEL_39;
      }
      sub_123338(
        v24,
        SHIDWORD(v24),
        v25,
        "float waterDetail = texture2D(EnvMap, Out_WaterDetail, -1.0).x + texture2D(EnvMap, Out_WaterDetail2, -1.0).x;");
      _strcat_chk(v5, &byte_2639B4, 0x2000);
      v30 = _strcat_chk(v5, "\n", 0x2000);
      sub_123338(v30, SHIDWORD(v30), v31, "fcolor *= vec4(Out_Color.xyz * waterDetail * 1.1, Out_Color.w);");
      _strcat_chk(v5, &byte_2639B4, 0x2000);
      v24 = _strcat_chk(v5, "\n", 0x2000);
LABEL_37:
      v26 = "fcolor.a += Out_WaterAlphaBlend;";
      goto LABEL_38;
    }
    sub_123338(v24, SHIDWORD(v24), v25, "fcolor *= Out_Color;");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v24 = _strcat_chk(v5, "\n", 0x2000);
  }
  if ( v17 )
    goto LABEL_37;
LABEL_39:
  if ( (a2 & 0x40) != 0 )
  {
    sub_123338(
      a2 << 25,
      SHIDWORD(v24),
      v25,
      "fcolor.xyz = mix(fcolor.xyz, texture2D(EnvMap, Out_Tex1).xyz, EnvMapCoefficient);");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v24 = _strcat_chk(v5, "\n", 0x2000);
  }
  LODWORD(v24) = a2 << 7;
  if ( (a2 & 0x1000000) != 0 )
  {
    sub_123338(v24, SHIDWORD(v24), v25, "vec2 ReflPos = normalize(Out_Refl.xy) * (Out_Refl.z * 0.5 + 0.5);");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v32 = _strcat_chk(v5, "\n", 0x2000);
    sub_123338(v32, SHIDWORD(v32), v33, "ReflPos = (ReflPos * vec2(0.5,0.5)) + vec2(0.5,0.5);");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v34 = _strcat_chk(v5, "\n", 0x2000);
    sub_123338(v34, SHIDWORD(v34), v35, "lowp vec4 ReflTexture =  texture2D(EnvMap, ReflPos);");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v36 = _strcat_chk(v5, "\n", 0x2000);
    sub_123338(v36, SHIDWORD(v36), v37, "fcolor.xyz = mix(fcolor.xyz,ReflTexture.xyz, EnvMapCoefficient);");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v38 = _strcat_chk(v5, "\n", 0x2000);
    sub_123338(v38, SHIDWORD(v38), v39, "fcolor.w += ReflTexture.b * 0.125;");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v24 = _strcat_chk(v5, "\n", 0x2000);
  }
  if ( !*(_BYTE *)sub_163F54(v24, HIDWORD(v24)) )
  {
    if ( (a2 & 0x2000) != 0 && v52 )
    {
      sub_123338(v52, SHIDWORD(v40), v41, "fcolor.xyz += Out_Spec;");
      _strcat_chk(v5, &byte_2639B4, 0x2000);
      v40 = _strcat_chk(v5, "\n", 0x2000);
    }
    if ( (a2 & 0x400) != 0 )
    {
      sub_123338(a2 & 0x400, SHIDWORD(v40), v41, "fcolor.xyz = mix(fcolor.xyz, FogColor, Out_FogAmt);");
      _strcat_chk(v5, &byte_2639B4, 0x2000);
      v40 = _strcat_chk(v5, "\n", 0x2000);
    }
  }
  LODWORD(v40) = 32 * a2;
  if ( (a2 & 0x4000000) != 0 )
  {
    sub_123338(v40, SHIDWORD(v40), v41, "fcolor.xyz += fcolor.xyz * 0.5;");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v40 = _strcat_chk(v5, "\n", 0x2000);
  }
  sub_123338(v40, SHIDWORD(v40), v41, "gl_FragColor = fcolor;");
  _strcat_chk(v5, &byte_2639B4, 0x2000);
  v42 = _strcat_chk(v5, "\n", 0x2000);
  if ( a2 << 31 )
  {
    sub_123338(a2 << 31, SHIDWORD(v42), v43, "/*ATBEGIN*/");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v44 = _strcat_chk(v5, "\n", 0x2000);
    LODWORD(v45) = sub_163F1C(v44, HIDWORD(v44));
    if ( (a2 & 0x20) != 0 && (_DWORD)v45 == 13 )
    {
      if ( (a2 & 0x800) != 0 )
      {
        v47 = "if (diffuseColor.a < 0.8) { discard; }";
        goto LABEL_65;
      }
      LODWORD(v45) = a2 << 22;
      if ( (a2 & 0x200) == 0 )
      {
        v47 = "if (diffuseColor.a < 0.2) { discard; }";
LABEL_65:
        sub_123338(v45, SHIDWORD(v45), v46, v47);
        _strcat_chk(v5, &byte_2639B4, 0x2000);
        v49 = _strcat_chk(v5, "\n", 0x2000);
        sub_123338(v49, SHIDWORD(v49), v50, "/*ATEND*/");
        _strcat_chk(v5, &byte_2639B4, 0x2000);
        v42 = _strcat_chk(v5, "\n", 0x2000);
        goto LABEL_66;
      }
      v47 = "if (diffuseColor.a < 0.5) { discard; }";
      v48 = "gl_FragColor.a = Out_Color.a;";
    }
    else
    {
      if ( (a2 & 0x800) != 0 )
      {
        v47 = "if (gl_FragColor.a < 0.8) { discard; }";
        goto LABEL_65;
      }
      LODWORD(v45) = a2 << 22;
      if ( (a2 & 0x200) == 0 )
      {
        v47 = "if (gl_FragColor.a < 0.2) { discard; }";
        goto LABEL_65;
      }
      v47 = "gl_FragColor.a = Out_Color.a;";
      v48 = "if (gl_FragColor.a < 0.5) { discard; }";
    }
    sub_123338(v45, SHIDWORD(v45), v46, v48);
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v45 = _strcat_chk(v5, "\n", 0x2000);
    goto LABEL_65;
  }
LABEL_66:
  LODWORD(v42) = a2 & 4;
  if ( (a2 & 4) != 0 )
  {
    sub_123338(a2 & 4, SHIDWORD(v42), v43, "gl_FragColor.a *= AlphaModulate;");
    _strcat_chk(v5, &byte_2639B4, 0x2000);
    v42 = _strcat_chk(v5, "\n", 0x2000);
  }
  sub_123338(v42, SHIDWORD(v42), v43, "}");
  _strcat_chk(v5, &byte_2639B4, 0x2000);
  return sub_22431C(v5, "\n", 0x2000);
}


// ======================================================================
// ADDR: 0x12257c
// SYMBOL: sub_12257C
size_t __fastcall sub_12257C(int a1, int a2, int a3)
{
  char *v5; // r5
  char *v6; // r0
  size_t v7; // r0
  int v8; // r1
  int v9; // r2
  char *v10; // r0
  size_t v11; // r0
  int v12; // r1
  int v13; // r2
  char *v14; // r0
  size_t v15; // r0
  int v16; // r1
  int v17; // r2
  char *v18; // r0
  size_t v19; // r0
  int v20; // r1
  int v21; // r2
  char *v22; // r0
  size_t v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r11
  char *v27; // r0
  size_t v28; // r0
  int v29; // r1
  int v30; // r2
  char *v31; // r0
  size_t v32; // r0
  int v33; // r1
  int v34; // r2
  char *v35; // r0
  size_t v36; // r0
  int v37; // r1
  int v38; // r2
  char *v39; // r0
  char *v40; // r0
  size_t v41; // r0
  int v42; // r2
  char *v43; // r0
  char *v44; // r0
  size_t v45; // r0
  char *v46; // r0
  size_t v47; // r0
  int v48; // r2
  char *v49; // r0
  char *v50; // r0
  size_t v51; // r0
  int v52; // r2
  char *v53; // r0
  char *v54; // r0
  size_t v55; // r0
  int v56; // r1
  int v57; // r2
  char *v58; // r0
  int v59; // r1
  int v60; // r2
  int v61; // r0
  char *v62; // r3
  char *v63; // r0
  char *v64; // r0
  int v65; // r1
  int v66; // r2
  char *v67; // r0
  size_t v68; // r0
  int v69; // r6
  int v70; // r1
  int v71; // r2
  char *v72; // r0
  __int64 v73; // r0
  int v74; // r2
  char *v75; // r0
  char *v76; // r0
  size_t v77; // r0
  char *v78; // r0
  size_t v79; // r0
  char *v80; // r0
  char *v81; // r3
  char *v82; // r0
  char *v83; // r0
  size_t v84; // r0
  char *v85; // r0
  size_t v86; // r0
  int v87; // r2
  char *v88; // r0
  char *v89; // r0
  size_t v90; // r0
  int v91; // r6
  int v92; // r2
  char *v93; // r0
  size_t v94; // r0
  int v95; // r1
  int v96; // r2
  char *v97; // r0
  size_t v98; // r0
  int v99; // r1
  int v100; // r2
  char *v101; // r0
  char *v102; // r0
  size_t v103; // r0
  int v104; // r2
  char *v105; // r0
  char *v106; // r0
  size_t v107; // r0
  bool v108; // zf
  int v109; // r0
  char *v110; // r0
  char *v111; // r0
  int v112; // r1
  int v113; // r2
  int v114; // r0
  char *v115; // r0
  size_t v116; // r0
  int v117; // r11
  int v118; // r1
  int v119; // r2
  char *v120; // r0
  size_t v121; // r0
  int v122; // r1
  int v123; // r2
  char *v124; // r0
  size_t v125; // r0
  int v126; // r1
  int v127; // r2
  char *v128; // r0
  size_t v129; // r0
  int v130; // r1
  int v131; // r2
  char *v132; // r0
  size_t v133; // r0
  int v134; // r1
  int v135; // r2
  char *v136; // r0
  size_t v137; // r0
  int v138; // r1
  int v139; // r2
  char *v140; // r0
  size_t v141; // r0
  int v142; // r1
  int v143; // r2
  char *v144; // r0
  size_t v145; // r0
  int v146; // r1
  int v147; // r2
  char *v148; // r0
  size_t v149; // r0
  int v150; // r1
  int v151; // r2
  char *v152; // r0
  size_t v153; // r0
  int v154; // r1
  int v155; // r2
  char *v156; // r0
  size_t v157; // r0
  int v158; // r1
  int v159; // r2
  char *v160; // r0
  char *v161; // r3
  char *v162; // r0
  size_t v163; // r0
  int v164; // r6
  int v165; // r2
  char *v166; // r0
  size_t v167; // r0
  int v168; // r1
  int v169; // r2
  char *v170; // r0
  int v171; // r8
  char *v172; // r0
  const char *v173; // r1
  int v174; // r2
  const char *v175; // r0
  char *v176; // r3
  char *v177; // r11
  char *v178; // r0
  size_t v179; // r0
  int v180; // r2
  char *v181; // r0
  int v182; // r4
  size_t v183; // r0
  int v184; // r1
  int v185; // r2
  char *v186; // r0
  int v187; // r11
  int v188; // r1
  int v189; // r2
  const char *v190; // r0
  int v191; // r8
  char *v192; // r3
  char *v193; // r0
  _BYTE *v194; // r0
  int v195; // r2
  int v196; // r1
  char *v197; // r0
  size_t v198; // r0
  const char *v199; // r2
  char *v200; // r3
  char *v201; // r0
  size_t v202; // r0
  char *v203; // r0
  size_t v204; // r0
  int v205; // r2
  char *v206; // r0
  int v207; // r2
  char *v208; // r3
  char *v209; // r0
  int v210; // r0
  char *v211; // r0
  int v212; // r0
  int v213; // r6
  char *v214; // r3
  char *v215; // r0
  int v216; // r0
  char *v217; // r3
  char *v218; // r0
  size_t v219; // r0
  int v220; // r0
  int v221; // r2
  char *v222; // r3
  char *v223; // r0
  size_t v224; // r0
  char *v225; // r0
  size_t v226; // r0
  char *v227; // r0
  size_t v228; // r0
  char *v229; // r3
  char *v230; // r0
  char *v231; // r0
  _BYTE *v232; // r0
  int v233; // r2
  int v234; // r1
  int v235; // r0
  int v236; // r1
  int v237; // r2
  char *v238; // r0
  size_t v239; // r0
  int v240; // r2
  char *v241; // r0
  int v242; // r0
  char *v243; // r0
  size_t v244; // r0
  int v245; // r6
  int v246; // r2
  char *v247; // r0
  size_t v248; // r0
  int v249; // r1
  int v250; // r2
  char *v251; // r0
  char *v252; // r0
  size_t result; // r0
  int v254; // [sp+Ch] [bp-4Ch]
  int v255; // [sp+14h] [bp-44h]
  int v256; // [sp+20h] [bp-38h]
  int v257; // [sp+2Ch] [bp-2Ch]
  int v258; // [sp+38h] [bp-20h]

  sub_123338(a1, a2, a3, "#version 100\n");
  v5 = (char *)(a1 + 8196);
  v6 = strcat((char *)(a1 + 8196), byte_2639B4);
  v7 = strlen(v6);
  *(_WORD *)&v5[v7] = 10;
  sub_123338(v7, v8, v9, "precision highp float;");
  v10 = strcat((char *)(a1 + 8196), byte_2639B4);
  v11 = strlen(v10);
  *(_WORD *)&v5[v11] = 10;
  sub_123338(v11, v12, v13, "uniform mat4 ProjMatrix;");
  v14 = strcat((char *)(a1 + 8196), byte_2639B4);
  v15 = strlen(v14);
  *(_WORD *)&v5[v15] = 10;
  sub_123338(v15, v16, v17, "uniform mat4 ViewMatrix;");
  v18 = strcat((char *)(a1 + 8196), byte_2639B4);
  v19 = strlen(v18);
  *(_WORD *)&v5[v19] = 10;
  sub_123338(v19, v20, v21, "uniform mat4 ObjMatrix;");
  v22 = strcat((char *)(a1 + 8196), byte_2639B4);
  v23 = strlen(v22);
  v26 = a2 & 2;
  *(_WORD *)&v5[v23] = 10;
  if ( (a2 & 2) != 0 )
  {
    sub_123338(v23, v24, v25, "uniform lowp vec3 AmbientLightColor;");
    v27 = strcat((char *)(a1 + 8196), byte_2639B4);
    v28 = strlen(v27);
    *(_WORD *)&v5[v28] = 10;
    sub_123338(v28, v29, v30, "uniform lowp vec4 MaterialEmissive;");
    v31 = strcat((char *)(a1 + 8196), byte_2639B4);
    v32 = strlen(v31);
    *(_WORD *)&v5[v32] = 10;
    sub_123338(v32, v33, v34, "uniform lowp vec4 MaterialAmbient;");
    v35 = strcat((char *)(a1 + 8196), byte_2639B4);
    v36 = strlen(v35);
    *(_WORD *)&v5[v36] = 10;
    sub_123338(v36, v37, v38, "uniform lowp vec4 MaterialDiffuse;");
    v39 = strcat((char *)(a1 + 8196), byte_2639B4);
    *(_WORD *)&v5[strlen(v39)] = 10;
    if ( (a2 & 0x2000) != 0 )
    {
      sub_123338(a2 << 18, v24, v25, "uniform lowp vec3 DirLightDiffuseColor;");
      v40 = strcat((char *)(a1 + 8196), byte_2639B4);
      v41 = strlen(v40);
      *(_WORD *)(a1 + 8196 + v41) = 10;
      sub_123338(v41, 8196, v42, "uniform vec3 DirLightDirection;");
      v43 = strcat((char *)(a1 + 8196), byte_2639B4);
      *(_WORD *)(a1 + 8196 + strlen(v43)) = 10;
      v26 = a2 & 2;
      if ( (a2 & 0x1180) != 0 && sub_163FC0() == 3 )
      {
        sub_123338(3, v24, v25, "uniform vec3 DirBackLightDirection;");
        v44 = strcat((char *)(a1 + 8196), byte_2639B4);
        v45 = strlen(v44);
        v24 = 8196;
        v25 = 10;
        *(_WORD *)(v45 + a1 + 8196) = 10;
      }
    }
    if ( (a2 & 0x4000) != 0 )
    {
      sub_123338(a2 << 17, v24, v25, "uniform lowp vec3 DirLight2DiffuseColor;");
      v46 = strcat((char *)(a1 + 8196), byte_2639B4);
      v47 = strlen(v46);
      *(_WORD *)(a1 + 8196 + v47) = 10;
      sub_123338(v47, 8196, v48, "uniform vec3 DirLight2Direction;");
      v49 = strcat((char *)(a1 + 8196), byte_2639B4);
      *(_WORD *)(a1 + 8196 + strlen(v49)) = 10;
      v26 = a2 & 2;
    }
    v23 = a2 << 16;
    if ( (a2 & 0x8000) != 0 )
    {
      sub_123338(v23, v24, v25, "uniform lowp vec3 DirLight3DiffuseColor;");
      v50 = strcat((char *)(a1 + 8196), byte_2639B4);
      v51 = strlen(v50);
      *(_WORD *)(a1 + 8196 + v51) = 10;
      sub_123338(v51, 8196, v52, "uniform vec3 DirLight3Direction;");
      v53 = strcat((char *)(a1 + 8196), byte_2639B4);
      v23 = strlen(v53);
      *(_WORD *)(a1 + 8196 + v23) = 10;
      v26 = a2 & 2;
    }
  }
  sub_123338(v23, v24, v25, "attribute vec3 Position;");
  v54 = strcat((char *)(a1 + 8196), byte_2639B4);
  v55 = strlen(v54);
  *(_WORD *)&v5[v55] = 10;
  sub_123338(v55, v56, v57, "attribute vec3 Normal;");
  v58 = strcat((char *)(a1 + 8196), byte_2639B4);
  *(_WORD *)&v5[strlen(v58)] = 10;
  v61 = a2 & 0x20;
  if ( (a2 & 0x20) != 0 )
  {
    v62 = "attribute vec2 TexCoord0;";
    if ( (a2 & 0x40000) != 0 )
      v62 = "attribute vec4 TexCoord0;";
    sub_123338((int)"attribute vec4 TexCoord0;", a2 << 13, v60, v62);
    v63 = strcat((char *)(a1 + 8196), byte_2639B4);
    v61 = strlen(v63) + a1;
    v59 = 8196;
    v60 = 10;
    *(_WORD *)(v61 + 8196) = 10;
  }
  sub_123338(v61, v59, v60, "attribute vec4 GlobalColor;");
  v64 = strcat((char *)(a1 + 8196), byte_2639B4);
  *(_WORD *)(strlen(v64) + a1 + 8196) = 10;
  if ( (a2 & 0x180) != 0 )
  {
    sub_123338(a2 & 0x180, v65, v66, "attribute vec4 BoneWeight;");
    v67 = strcat((char *)(a1 + 8196), byte_2639B4);
    v68 = strlen(v67);
    v69 = a1 + 8196;
    *(_WORD *)(a1 + 8196 + v68) = 10;
    sub_123338(v68, v70, v71, "attribute vec4 BoneIndices;");
    v72 = strcat((char *)(a1 + 8196), byte_2639B4);
    *(_WORD *)(v69 + strlen(v72)) = 10;
    v73 = sub_163FA8();
    sub_123338(3 * *(_DWORD *)v73, SHIDWORD(v73), v74, "uniform highp vec4 Bones[%d];");
    v75 = strcat((char *)(a1 + 8196), byte_2639B4);
    *(_WORD *)(v69 + strlen(v75)) = 10;
  }
  if ( (a2 & 0x20) != 0 )
  {
    sub_123338(a2 & 0x20, v65, v66, "varying mediump vec2 Out_Tex0;");
    v76 = strcat((char *)(a1 + 8196), byte_2639B4);
    v77 = strlen(v76);
    v65 = 8196;
    v66 = 10;
    *(_WORD *)(v77 + a1 + 8196) = 10;
  }
  v254 = a2 & 0x2000000;
  if ( (a2 & 0x2000000) != 0 )
  {
    sub_123338(a2 & 0x2000000, v65, v66, "uniform mat3 NormalMatrix;");
    v78 = strcat((char *)(a1 + 8196), byte_2639B4);
    v79 = strlen(v78);
    v65 = 8196;
    v66 = 10;
    *(_WORD *)(v79 + a1 + 8196) = 10;
  }
  v258 = a2 & 0x1000040;
  if ( (a2 & 0x1000040) != 0 )
  {
    sub_123338(a2 & 0x1000040, v65, v66, "uniform lowp float EnvMapCoefficient;");
    v80 = strcat((char *)(a1 + 8196), byte_2639B4);
    *(_WORD *)(a1 + 8196 + strlen(v80)) = 10;
    v81 = "varying mediump vec3 Out_Refl;";
    if ( (a2 & 0x40) != 0 )
      v81 = "varying mediump vec2 Out_Tex1;";
    sub_123338(a2 << 25, (int)"varying mediump vec2 Out_Tex1;", 8196, v81);
    v82 = strcat((char *)(a1 + 8196), byte_2639B4);
    *(_WORD *)(a1 + 8196 + strlen(v82)) = 10;
  }
  if ( (a2 & 0x1880640) != 0 )
  {
    sub_123338(25691712, v65, v66, "uniform vec3 CameraPosition;");
    v83 = strcat((char *)(a1 + 8196), byte_2639B4);
    v84 = strlen(v83);
    v65 = 8196;
    v66 = 10;
    *(_WORD *)(v84 + a1 + 8196) = 10;
  }
  if ( (a2 & 0x400) != 0 )
  {
    sub_123338(a2 & 0x400, v65, v66, "varying mediump float Out_FogAmt;");
    v85 = strcat((char *)(a1 + 8196), byte_2639B4);
    v86 = strlen(v85);
    *(_WORD *)(a1 + 8196 + v86) = 10;
    sub_123338(v86, 8196, v87, "uniform vec3 FogDistances;");
    v88 = strcat((char *)(a1 + 8196), byte_2639B4);
    *(_WORD *)(a1 + 8196 + strlen(v88)) = 10;
  }
  v256 = a2 & 0x80000;
  if ( (a2 & 0x80000) != 0 )
  {
    sub_123338(a2 & 0x80000, v65, v66, "uniform vec3 WaterSpecs;");
    v89 = strcat((char *)(a1 + 8196), byte_2639B4);
    v90 = strlen(v89);
    v91 = a1 + 8196;
    *(_WORD *)(a1 + 8196 + v90) = 10;
    sub_123338(v90, 8196, v92, "varying mediump vec2 Out_WaterDetail;");
    v93 = strcat((char *)(a1 + 8196), byte_2639B4);
    v94 = strlen(v93);
    *(_WORD *)(v91 + v94) = 10;
    sub_123338(v94, v95, v96, "varying mediump vec2 Out_WaterDetail2;");
    v97 = strcat((char *)(a1 + 8196), byte_2639B4);
    v98 = strlen(v97);
    *(_WORD *)(v91 + v98) = 10;
    sub_123338(v98, v99, v100, "varying mediump float Out_WaterAlphaBlend;");
    v101 = strcat((char *)(a1 + 8196), byte_2639B4);
    *(_WORD *)(v91 + strlen(v101)) = 10;
  }
  v255 = a2 & 0x100000;
  if ( (a2 & 0x100000) != 0 )
  {
    sub_123338(a2 & 0x100000, v65, v66, "attribute vec4 Color2;");
    v102 = strcat((char *)(a1 + 8196), byte_2639B4);
    v103 = strlen(v102);
    *(_WORD *)(a1 + 8196 + v103) = 10;
    sub_123338(v103, 8196, v104, "uniform lowp float ColorInterp;");
    v105 = strcat((char *)(a1 + 8196), byte_2639B4);
    *(_WORD *)(a1 + 8196 + strlen(v105)) = 10;
  }
  if ( (a2 & 0x12) != 0 )
  {
    sub_123338(a2 & 0x12, v65, v66, "varying lowp vec4 Out_Color;");
    v106 = strcat((char *)(a1 + 8196), byte_2639B4);
    v107 = strlen(v106);
    v65 = 8196;
    v66 = 10;
    *(_WORD *)(v107 + a1 + 8196) = 10;
  }
  v109 = a2 & 0x2000;
  v108 = v109 == 0;
  if ( (a2 & 0x2000) != 0 )
  {
    v109 = a2 & 0x1000040;
    v108 = v258 == 0;
  }
  if ( !v108 )
  {
    sub_123338(v109, v65, v66, "varying lowp vec3 Out_Spec;");
    v110 = strcat((char *)(a1 + 8196), byte_2639B4);
    v109 = strlen(v110) + a1;
    v65 = 8196;
    v66 = 10;
    *(_WORD *)(v109 + 8196) = 10;
  }
  sub_123338(v109, v65, v66, "void main() {");
  v111 = strcat((char *)(a1 + 8196), byte_2639B4);
  v257 = a1;
  *(_WORD *)(strlen(v111) + a1 + 8196) = 10;
  v114 = a2 & 0x180;
  if ( (a2 & 0x180) != 0 )
  {
    sub_123338(a2 & 0x180, v112, v113, "\tivec4 BlendIndexArray = ivec4(BoneIndices);");
    v115 = strcat((char *)(a1 + 8196), byte_2639B4);
    v116 = strlen(v115);
    v117 = a1 + 8196;
    *(_WORD *)(a1 + 8196 + v116) = 10;
    sub_123338(v116, v118, v119, "\tmat4 BoneToLocal;");
    v120 = strcat((char *)(a1 + 8196), byte_2639B4);
    v121 = strlen(v120);
    *(_WORD *)(v117 + v121) = 10;
    sub_123338(v121, v122, v123, "\tBoneToLocal[0] = Bones[BlendIndexArray.x*3] * BoneWeight.x;");
    v124 = strcat((char *)(a1 + 8196), byte_2639B4);
    v125 = strlen(v124);
    *(_WORD *)(v117 + v125) = 10;
    sub_123338(v125, v126, v127, "\tBoneToLocal[1] = Bones[BlendIndexArray.x*3+1] * BoneWeight.x;");
    v128 = strcat((char *)(a1 + 8196), byte_2639B4);
    v129 = strlen(v128);
    *(_WORD *)(v117 + v129) = 10;
    sub_123338(v129, v130, v131, "\tBoneToLocal[2] = Bones[BlendIndexArray.x*3+2] * BoneWeight.x;");
    v132 = strcat((char *)(a1 + 8196), byte_2639B4);
    v133 = strlen(v132);
    *(_WORD *)(v117 + v133) = 10;
    sub_123338(v133, v134, v135, "\tBoneToLocal[3] = vec4(0.0,0.0,0.0,1.0);");
    v136 = strcat((char *)(a1 + 8196), byte_2639B4);
    v137 = strlen(v136);
    *(_WORD *)(v117 + v137) = 10;
    sub_123338(v137, v138, v139, "\tBoneToLocal[0] += Bones[BlendIndexArray.y*3] * BoneWeight.y;");
    v140 = strcat((char *)(a1 + 8196), byte_2639B4);
    v141 = strlen(v140);
    *(_WORD *)(v117 + v141) = 10;
    sub_123338(v141, v142, v143, "\tBoneToLocal[1] += Bones[BlendIndexArray.y*3+1] * BoneWeight.y;");
    v144 = strcat((char *)(a1 + 8196), byte_2639B4);
    v145 = strlen(v144);
    *(_WORD *)(v117 + v145) = 10;
    sub_123338(v145, v146, v147, "\tBoneToLocal[2] += Bones[BlendIndexArray.y*3+2] * BoneWeight.y;");
    v148 = strcat((char *)(a1 + 8196), byte_2639B4);
    v149 = strlen(v148);
    *(_WORD *)(v117 + v149) = 10;
    sub_123338(v149, v150, v151, "\tBoneToLocal[0] += Bones[BlendIndexArray.z*3] * BoneWeight.z;");
    v152 = strcat((char *)(a1 + 8196), byte_2639B4);
    v153 = strlen(v152);
    *(_WORD *)(v117 + v153) = 10;
    sub_123338(v153, v154, v155, "\tBoneToLocal[1] += Bones[BlendIndexArray.z*3+1] * BoneWeight.z;");
    v156 = strcat((char *)(a1 + 8196), byte_2639B4);
    v157 = strlen(v156);
    *(_WORD *)(v117 + v157) = 10;
    sub_123338(v157, v158, v159, "\tBoneToLocal[2] += Bones[BlendIndexArray.z*3+2] * BoneWeight.z;");
    v160 = strcat((char *)(a1 + 8196), byte_2639B4);
    *(_WORD *)(v117 + strlen(v160)) = 10;
    v114 = a2 << 23;
    if ( (a2 & 0x100) != 0 )
    {
      sub_123338(v114, v112, v113, "\tBoneToLocal[0] += Bones[BlendIndexArray.w*3] * BoneWeight.w;");
      v162 = strcat((char *)(a1 + 8196), byte_2639B4);
      v163 = strlen(v162);
      v164 = a1 + 8196;
      *(_WORD *)(a1 + 8196 + v163) = 10;
      sub_123338(v163, 8196, v165, "\tBoneToLocal[1] += Bones[BlendIndexArray.w*3+1] * BoneWeight.w;");
      v166 = strcat((char *)(a1 + 8196), byte_2639B4);
      v167 = strlen(v166);
      *(_WORD *)(v164 + v167) = 10;
      sub_123338(v167, v168, v169, "\tBoneToLocal[2] += Bones[BlendIndexArray.w*3+2] * BoneWeight.w;");
      v170 = strcat((char *)(a1 + 8196), byte_2639B4);
      v114 = strlen(v170);
      *(_WORD *)(v164 + v114) = 10;
    }
    v161 = "\tvec4 WorldPos = ObjMatrix * (vec4(Position,1.0) * BoneToLocal);";
    v26 = a2 & 2;
  }
  else
  {
    v161 = "\tvec4 WorldPos = ObjMatrix * vec4(Position,1.0);";
  }
  v171 = v26;
  sub_123338(v114, v112, v113, v161);
  v172 = strcat(v5, byte_2639B4);
  *(_WORD *)(strlen(v172) + v257 + 8196) = 10;
  if ( (a2 & 0x800000) != 0 )
  {
    sub_123338(a2 << 8, (int)v173, v174, "\tvec3 ReflVector = WorldPos.xyz - CameraPosition.xyz;");
    v178 = strcat(v5, byte_2639B4);
    v179 = strlen(v178);
    *(_WORD *)(v257 + 8196 + v179) = 10;
    sub_123338(v179, 8196, v180, "\tvec3 ReflPos = normalize(ReflVector);");
    v181 = strcat(v5, byte_2639B4);
    v175 = (const char *)strlen(v181);
    v173 = "\tgl_Position = vec4(ReflPos.xy, length(ReflVector) * 0.002, 1.0);";
    *(_WORD *)&v175[v257 + 8196] = 10;
    v176 = "\tReflPos.xy = normalize(ReflPos.xy) * (ReflPos.z * 0.5 + 0.5);";
    v177 = "\tgl_Position = vec4(ReflPos.xy, length(ReflVector) * 0.002, 1.0);";
  }
  else
  {
    v175 = "\tgl_Position = ProjMatrix * ViewPos;";
    v176 = "\tvec4 ViewPos = ViewMatrix * WorldPos;";
    v177 = "\tgl_Position = ProjMatrix * ViewPos;";
  }
  sub_123338((int)v175, (int)v173, v174, v176);
  strcat(v5, byte_2639B4);
  v182 = v257 + 8196;
  v183 = strlen(v5);
  *(_WORD *)(v182 + v183) = 10;
  sub_123338(v183, v184, v185, v177);
  v186 = strcat(v5, byte_2639B4);
  v187 = v171;
  *(_WORD *)(v182 + strlen(v186)) = 10;
  if ( v171 )
  {
    v188 = a2 & 0x201;
    if ( v188 == 513 && (v190 = (const char *)(a2 & 0xE000), (a2 & 0xE000) != 0) )
    {
      v191 = v257;
      v192 = "vec3 WorldNormal = normalize(vec3(WorldPos.xy - CameraPosition.xy, 0.0001)) * 0.85;";
    }
    else
    {
      v188 = a2 & 0x180;
      v190 = "vec3 WorldNormal = mat3(ObjMatrix) * (Normal * mat3(BoneToLocal));";
      v192 = "vec3 WorldNormal = (ObjMatrix * vec4(Normal,0.0)).xyz;";
      if ( (a2 & 0x180) != 0 )
        v192 = "vec3 WorldNormal = mat3(ObjMatrix) * (Normal * mat3(BoneToLocal));";
      v191 = v257;
    }
    goto LABEL_56;
  }
  v190 = (const char *)(a2 & 0x1000040);
  v191 = v257;
  if ( v258 )
  {
    v192 = "vec3 WorldNormal = vec3(0.0, 0.0, 0.0);";
LABEL_56:
    sub_123338((int)v190, v188, v189, v192);
    v193 = strcat(v5, byte_2639B4);
    v190 = (const char *)(strlen(v193) + v191);
    v188 = 8196;
    *((_WORD *)v190 + 4098) = 10;
  }
  v194 = (_BYTE *)sub_163F54(v190, v188);
  v196 = a2 & 0x400;
  if ( (a2 & 0x400) != 0 && !*v194 )
  {
    sub_123338(
      0,
      a2 & 0x400,
      v195,
      "Out_FogAmt = clamp((length(WorldPos.xyz - CameraPosition.xyz) - FogDistances.x) * FogDistances.z, 0.0, 0.90);");
    v197 = strcat(v5, byte_2639B4);
    v198 = strlen(v197);
    v196 = 8196;
    v195 = 10;
    *(_WORD *)(v198 + v191 + 8196) = 10;
  }
  if ( (a2 & 0x20) != 0 )
  {
    v199 = "TexCoord0";
    if ( (a2 & 0x20000) != 0 )
      v199 = "TexCoord0 / 512.0";
    if ( (a2 & 0x40000) != 0 )
      v199 = "TexCoord0.xy / TexCoord0.w";
    v200 = "Out_Tex0 = %s;";
    if ( v254 )
      v200 = "Out_Tex0 = (NormalMatrix * vec3(%s, 1.0)).xy;";
    sub_123338(v254, (int)"TexCoord0.xy / TexCoord0.w", (int)v199, v200);
    v201 = strcat(v5, byte_2639B4);
    v202 = strlen(v201);
    v196 = 8196;
    v195 = 10;
    *(_WORD *)(v202 + v191 + 8196) = 10;
  }
  if ( v258 )
  {
    sub_123338(v258, v196, v195, "vec3 reflVector = normalize(WorldPos.xyz - CameraPosition.xyz);");
    v203 = strcat(v5, byte_2639B4);
    v204 = strlen(v203);
    *(_WORD *)(v191 + 8196 + v204) = 10;
    sub_123338(v204, 8196, v205, "reflVector = reflVector - 2.0 * dot(reflVector, WorldNormal) * WorldNormal;");
    v206 = strcat(v5, byte_2639B4);
    *(_WORD *)(v191 + 8196 + strlen(v206)) = 10;
    v208 = "Out_Tex1 = vec2(length(reflVector.xy), (reflVector.z * 0.5) + 0.25);";
    if ( (a2 & 0x1000000) != 0 )
      v208 = "Out_Refl = reflVector;";
    sub_123338(a2 << 7, (int)"Out_Refl = reflVector;", v207, v208);
    v209 = strcat(v5, byte_2639B4);
    *(_WORD *)(v191 + 8196 + strlen(v209)) = 10;
  }
  v210 = a2 & 0x100000;
  if ( v255 )
  {
    sub_123338(v255, v196, v195, "lowp vec4 InterpColor = mix(GlobalColor, Color2, ColorInterp);");
    v211 = strcat(v5, byte_2639B4);
    v210 = strlen(v211) + v191;
    v196 = 8196;
    v195 = 10;
    *(_WORD *)(v210 + 8196) = 10;
  }
  if ( v187 )
  {
    sub_123338(v210, v196, v195, "vec3 Out_LightingColor;");
    v215 = strcat(v5, byte_2639B4);
    v213 = a2 & 0x2000;
    *(_WORD *)(strlen(v215) + v191 + 8196) = 10;
    v216 = a2 << 28;
    if ( (a2 & 8) != 0 )
    {
      v216 = a2 << 22;
      if ( (a2 & 0x200) != 0 )
        v217 = "Out_LightingColor = AmbientLightColor * MaterialAmbient.xyz * 1.5;";
      else
        v217 = "Out_LightingColor = AmbientLightColor * MaterialAmbient.xyz + %s.xyz;";
    }
    else
    {
      v217 = "Out_LightingColor = AmbientLightColor * MaterialAmbient.xyz + MaterialEmissive.xyz;";
    }
    sub_123338(v216, 8196, 10, v217);
    v218 = strcat(v5, byte_2639B4);
    v219 = strlen(v218);
    v196 = 8196;
    *(_WORD *)(v219 + v191 + 8196) = 10;
    if ( (a2 & 0xE000) != 0 )
    {
      if ( (a2 & 0x2000) != 0 )
      {
        v220 = sub_163FC0();
        v222 = "Out_LightingColor += (max(dot(DirLightDirection, WorldNormal), 0.0) + max(dot(DirBackLightDirection, Worl"
               "dNormal), 0.0)) * DirLightDiffuseColor;";
        if ( v220 != 3 )
          v222 = "Out_LightingColor += max(dot(DirLightDirection, WorldNormal), 0.0) * DirLightDiffuseColor;";
        if ( (a2 & 0x1180) == 0 )
          v222 = "Out_LightingColor += max(dot(DirLightDirection, WorldNormal), 0.0) * DirLightDiffuseColor;";
        sub_123338(
          v220,
          (int)"Out_LightingColor += max(dot(DirLightDirection, WorldNormal), 0.0) * DirLightDiffuseColor;",
          v221,
          v222);
        v223 = strcat(v5, byte_2639B4);
        v224 = strlen(v223);
        v196 = 8196;
        *(_WORD *)(v224 + v191 + 8196) = 10;
      }
      if ( (a2 & 0x4000) != 0 )
      {
        sub_123338(
          a2 << 17,
          8196,
          10,
          "Out_LightingColor += max(dot(DirLight2Direction, WorldNormal), 0.0) * DirLight2DiffuseColor;");
        v225 = strcat(v5, byte_2639B4);
        v226 = strlen(v225);
        v196 = 8196;
        *(_WORD *)(v226 + v191 + 8196) = 10;
      }
      if ( (a2 & 0x8000) != 0 )
      {
        sub_123338(
          a2 << 16,
          8196,
          10,
          "Out_LightingColor += max(dot(DirLight3Direction, WorldNormal), 0.0) * DirLight3DiffuseColor;");
        v227 = strcat(v5, byte_2639B4);
        v228 = strlen(v227);
        v196 = 8196;
        *(_WORD *)(v228 + v191 + 8196) = 10;
      }
    }
    v212 = a2 & 0x12;
    if ( (a2 & 0x12) != 0 )
    {
      if ( (a2 & 0x10) != 0 )
        v229 = "Out_Color = vec4((Out_LightingColor.xyz + %s.xyz * 1.5) * MaterialDiffuse.xyz, (MaterialAmbient.w) * %s.w);";
      else
        v229 = "Out_Color = vec4(Out_LightingColor * MaterialDiffuse.xyz, MaterialAmbient.w * %s.w);";
      sub_123338(a2 << 27, 8196, 10, v229);
      v230 = strcat(v5, byte_2639B4);
      v212 = strlen(v230) + v191;
      v196 = 8196;
      v195 = 10;
      v214 = "Out_Color = clamp(Out_Color, 0.0, 1.0);";
      *(_WORD *)(v212 + 8196) = 10;
      goto LABEL_98;
    }
  }
  else
  {
    v212 = a2 & 0x12;
    v213 = a2 & 0x2000;
    if ( (a2 & 0x12) != 0 )
    {
      v214 = "Out_Color = %s;";
LABEL_98:
      sub_123338(v212, v196, v195, v214);
      v231 = strcat(v5, byte_2639B4);
      v212 = strlen(v231) + v191;
      v196 = 8196;
      *(_WORD *)(v212 + 8196) = 10;
    }
  }
  v232 = (_BYTE *)sub_163F54(v212, v196);
  v234 = a2 & 0x1000040;
  if ( v258 && v213 && !*v232 )
  {
    v235 = *(unsigned __int8 *)sub_163F70();
    sub_123338(
      v235,
      v236,
      v237,
      "float specAmt = max(pow(dot(reflVector, DirLightDirection), %.1f), 0.0) * EnvMapCoefficient * 2.0;");
    v238 = strcat(v5, byte_2639B4);
    v239 = strlen(v238);
    *(_WORD *)(v191 + 8196 + v239) = 10;
    sub_123338(v239, 8196, v240, "Out_Spec = specAmt * DirLightDiffuseColor;");
    v241 = strcat(v5, byte_2639B4);
    *(_WORD *)(v191 + 8196 + strlen(v241)) = 10;
  }
  v242 = a2 & 0x80000;
  if ( v256 )
  {
    sub_123338(v256, v234, v233, "Out_WaterDetail = (Out_Tex0 * 4.0) + vec2(WaterSpecs.x * -0.3, WaterSpecs.x * 0.21);");
    v243 = strcat(v5, byte_2639B4);
    v244 = strlen(v243);
    v245 = v191 + 8196;
    *(_WORD *)(v191 + 8196 + v244) = 10;
    sub_123338(
      v244,
      8196,
      v246,
      "Out_WaterDetail2 = (Out_Tex0 * -8.0) + vec2(WaterSpecs.x * 0.12, WaterSpecs.x * -0.05);");
    v247 = strcat(v5, byte_2639B4);
    v248 = strlen(v247);
    *(_WORD *)(v245 + v248) = 10;
    sub_123338(v248, v249, v250, "Out_WaterAlphaBlend = distance(WorldPos.xy, CameraPosition.xy) * WaterSpecs.y;");
    v251 = strcat(v5, byte_2639B4);
    v242 = strlen(v251);
    *(_WORD *)(v245 + v242) = 10;
  }
  sub_123338(v242, v234, v233, "}");
  v252 = strcat(v5, byte_2639B4);
  result = strlen(v252) + v191;
  *(_WORD *)(result + 8196) = 10;
  return result;
}


// ======================================================================
