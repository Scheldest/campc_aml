
// Address: 0x1937c4
// Original: j__ZN9ES2Shader12CheckCompileEjjPKc
// Demangled: ES2Shader::CheckCompile(uint,uint,char const*)
// attributes: thunk
int __fastcall ES2Shader::CheckCompile(ES2Shader *this, unsigned int a2, unsigned int a3, const char *a4)
{
  return _ZN9ES2Shader12CheckCompileEjjPKc(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19469c
// Original: j__ZN9ES2ShaderC2Ev
// Demangled: ES2Shader::ES2Shader(void)
// attributes: thunk
void __fastcall ES2Shader::ES2Shader(ES2Shader *this)
{
  _ZN9ES2ShaderC2Ev(this);
}


// ============================================================

// Address: 0x1947e4
// Original: j__ZN9ES2Shader22InitializeAfterCompileEv
// Demangled: ES2Shader::InitializeAfterCompile(void)
// attributes: thunk
int __fastcall ES2Shader::InitializeAfterCompile(ES2Shader *this)
{
  return _ZN9ES2Shader22InitializeAfterCompileEv(this);
}


// ============================================================

// Address: 0x1a0af8
// Original: j__ZN9ES2Shader5BuildEPKcS1_
// Demangled: ES2Shader::Build(char const*,char const*)
// attributes: thunk
int __fastcall ES2Shader::Build(ES2Shader *this, const char *a2, const char *a3)
{
  return _ZN9ES2Shader5BuildEPKcS1_(this, a2, a3);
}


// ============================================================

// Address: 0x1cc6f0
// Original: _ZN9ES2Shader12CheckCompileEjjPKc
// Demangled: ES2Shader::CheckCompile(uint,uint,char const*)
int __fastcall ES2Shader::CheckCompile(ES2Shader *this, unsigned int a2, unsigned int a3, const char *a4)
{
  unsigned __int8 v4; // r6
  const char *v6; // r1
  int v7; // r6
  int v8; // t1
  const char *v9; // r4
  unsigned int v10; // r0
  bool v11; // zf
  char v13[512]; // [sp+8h] [bp-220h] BYREF

  v4 = 0;
  glGetShaderiv();
LABEL_5:
  v9 = a4;
  while ( 1 )
  {
    v10 = *(unsigned __int8 *)a4;
    if ( v10 <= 0x7A )
      break;
    v11 = v10 == 123;
    if ( v10 != 123 )
      v11 = v10 == 125;
    if ( v11 )
    {
LABEL_2:
      v6 = &byte_61CD7E;
      v7 = v4 & (v10 != 125);
      if ( v7 )
        v6 = "    ";
      strcpy(v13, v6);
      strncat(v13, v9, (size_t)&a4[1 - (_DWORD)v9]);
      v8 = *(unsigned __int8 *)a4++;
      OS_DebugOut(v13);
      v4 = v7 | (v8 == 123);
      goto LABEL_5;
    }
LABEL_6:
    ++a4;
  }
  if ( *a4 )
  {
    if ( v10 == 59 )
      goto LABEL_2;
    goto LABEL_6;
  }
  glGetShaderInfoLog();
  return 0;
}


// ============================================================

// Address: 0x1cc7cc
// Original: _ZN9ES2Shader22InitializeAfterCompileEv
// Demangled: ES2Shader::InitializeAfterCompile(void)
int __fastcall ES2Shader::InitializeAfterCompile(ES2Shader *this)
{
  int result; // r0

  RQ_CheckThread();
  if ( (ES2Shader *)ES2Shader::activeShader != this )
  {
    ES2Shader::activeShader = (int)this;
    glUseProgram(*((_DWORD *)this + 250));
  }
  if ( glGetUniformLocation() != -1 )
    glUniform1i();
  if ( glGetUniformLocation() != -1 )
    glUniform1i();
  *((_DWORD *)this + 169) = glGetUniformLocation();
  *((_DWORD *)this + 188) = glGetUniformLocation();
  *((_DWORD *)this + 207) = glGetUniformLocation();
  *((_DWORD *)this + 226) = glGetUniformLocation();
  *((_DWORD *)this + 1) = glGetUniformLocation();
  *((_DWORD *)this + 8) = glGetUniformLocation();
  *((_DWORD *)this + 15) = glGetUniformLocation();
  *((_DWORD *)this + 22) = glGetUniformLocation();
  *((_DWORD *)this + 29) = glGetUniformLocation();
  *((_DWORD *)this + 36) = glGetUniformLocation();
  *((_DWORD *)this + 43) = glGetUniformLocation();
  *((_DWORD *)this + 50) = glGetUniformLocation();
  *((_DWORD *)this + 57) = glGetUniformLocation();
  *((_DWORD *)this + 64) = glGetUniformLocation();
  *((_DWORD *)this + 71) = glGetUniformLocation();
  *((_DWORD *)this + 78) = glGetUniformLocation();
  *((_DWORD *)this + 85) = glGetUniformLocation();
  *((_DWORD *)this + 92) = glGetUniformLocation();
  *((_DWORD *)this + 99) = glGetUniformLocation();
  *((_DWORD *)this + 162) = glGetUniformLocation();
  *((_DWORD *)this + 106) = glGetUniformLocation();
  *((_DWORD *)this + 113) = glGetUniformLocation();
  *((_DWORD *)this + 120) = glGetUniformLocation();
  *((_DWORD *)this + 127) = glGetUniformLocation();
  *((_DWORD *)this + 134) = glGetUniformLocation();
  *((_DWORD *)this + 141) = glGetUniformLocation();
  *((_DWORD *)this + 148) = glGetUniformLocation();
  *((_DWORD *)this + 155) = glGetUniformLocation();
  result = glGetUniformLocation();
  *((_DWORD *)this + 245) = result;
  return result;
}


// ============================================================

// Address: 0x1ccb00
// Original: _ZN9ES2Shader9SetActiveEv
// Demangled: ES2Shader::SetActive(void)
int __fastcall ES2Shader::SetActive(ES2Shader *this)
{
  int result; // r0

  RQ_CheckThread();
  result = ES2Shader::activeShader;
  if ( (ES2Shader *)ES2Shader::activeShader != this )
  {
    ES2Shader::activeShader = (int)this;
    return j_glUseProgram();
  }
  return result;
}


// ============================================================

// Address: 0x1ccb34
// Original: _ZN9ES2ShaderD2Ev
// Demangled: ES2Shader::~ES2Shader()
void __fastcall ES2Shader::~ES2Shader(ES2Shader *this)
{
  *(_DWORD *)this = &off_6608B0;
  if ( (ES2Shader *)ES2Shader::activeShader == this )
  {
    ES2Shader::activeShader = 0;
    glUseProgram(0);
  }
  glDeleteProgram();
  if ( *((_BYTE *)this + 988) )
    glDeleteShader();
  if ( *((_BYTE *)this + 996) )
    glDeleteShader();
}


// ============================================================

// Address: 0x1ccb98
// Original: _ZN9ES2ShaderD0Ev
// Demangled: ES2Shader::~ES2Shader()
void __fastcall ES2Shader::~ES2Shader(ES2Shader *this)
{
  *(_DWORD *)this = &off_6608B0;
  if ( (ES2Shader *)ES2Shader::activeShader == this )
  {
    ES2Shader::activeShader = 0;
    glUseProgram(0);
  }
  glDeleteProgram();
  if ( *((_BYTE *)this + 988) )
    glDeleteShader();
  if ( *((_BYTE *)this + 996) )
    glDeleteShader();
  operator delete(this);
}


// ============================================================

// Address: 0x1ccc04
// Original: _ZN9ES2Shader5BuildEPKcS1_
// Demangled: ES2Shader::Build(char const*,char const*)
int __fastcall ES2Shader::Build(ES2Shader *this, const char *a2, const char *a3)
{
  int v6; // r0
  unsigned int v7; // r3
  char *v8; // r2
  int v9; // r1
  ES2Shader *v10; // r0
  unsigned int v11; // r2
  int v12; // r8
  int v13; // r9
  int v14; // r4
  unsigned int v15; // r10
  void *v16; // r0
  size_t v17; // r2
  void *v18; // r9
  int v19; // r1
  int v20; // r0
  unsigned int v21; // r3
  char *v22; // r2
  int v23; // r1
  ES2Shader *v24; // r0
  unsigned int v25; // r2
  int v26; // r8
  int v27; // r9
  int v28; // r4
  unsigned int v29; // r10
  void *v30; // r0
  size_t v31; // r2
  void *v32; // r9
  int v33; // r1
  char v34; // r4
  char v36; // r10
  const char *v37; // r1
  int v38; // t1
  const char *v39; // r9
  unsigned int v40; // r0
  bool v41; // zf
  char v42; // r0
  char v43; // r4
  const char *v44; // r1
  int v45; // t1
  const char *v46; // r6
  unsigned int v47; // r1
  bool v48; // zf
  void *v49; // [sp+0h] [bp-228h]
  void *v50; // [sp+0h] [bp-228h]
  char v51[512]; // [sp+8h] [bp-220h] BYREF

  *((_DWORD *)this + 250) = glCreateProgram();
  v6 = HashString(a2);
  if ( !dword_6B8BD0 )
    goto LABEL_8;
  v7 = 0;
  v8 = (char *)(dword_6B8BD4 + 4);
  while ( *((_DWORD *)v8 - 1) != v6 )
  {
    ++v7;
    v8 += 8;
    if ( v7 >= dword_6B8BD0 )
      goto LABEL_8;
  }
  if ( v8 == &byte_4 )
  {
LABEL_8:
    *((_DWORD *)this + 246) = glCreateShader();
    *((_BYTE *)this + 988) = 1;
    *(_DWORD *)v51 = strlen(a2);
    glShaderSource();
    v10 = (ES2Shader *)glCompileShader();
    if ( ES2Shader::CheckCompile(v10, *((_DWORD *)this + 246), v11, a2) != 1 )
      return 0;
    v12 = HashString(a2);
    v13 = dword_6B8BD0;
    v14 = *((_DWORD *)this + 246);
    if ( pixelShaders < (unsigned int)(dword_6B8BD0 + 1) )
    {
      v15 = ((unsigned int)(3 * (dword_6B8BD0 + 1)) >> 1) + 3;
      if ( v15 != pixelShaders )
      {
        v16 = malloc(8 * v15);
        if ( dword_6B8BD4 )
        {
          v17 = 8 * v13;
          v49 = v16;
          v18 = (void *)dword_6B8BD4;
          memmove_1(v16, (const void *)dword_6B8BD4, v17);
          free(v18);
          v16 = v49;
          v13 = dword_6B8BD0;
        }
        dword_6B8BD4 = (int)v16;
        pixelShaders = v15;
      }
    }
    v19 = dword_6B8BD4;
    *(_DWORD *)(dword_6B8BD4 + 8 * v13) = v12;
    *(_DWORD *)(v19 + 8 * v13 + 4) = v14;
    ++dword_6B8BD0;
  }
  else
  {
    v9 = *(_DWORD *)v8;
    *((_BYTE *)this + 988) = 0;
    *((_DWORD *)this + 246) = v9;
  }
  v20 = HashString(a3);
  if ( dword_6B8BDC )
  {
    v21 = 0;
    v22 = (char *)(dword_6B8BE0 + 4);
    while ( *((_DWORD *)v22 - 1) != v20 )
    {
      ++v21;
      v22 += 8;
      if ( v21 >= dword_6B8BDC )
        goto LABEL_22;
    }
    if ( v22 != &byte_4 )
    {
      v23 = *(_DWORD *)v22;
      *((_BYTE *)this + 996) = 0;
      *((_DWORD *)this + 248) = v23;
      goto LABEL_29;
    }
  }
LABEL_22:
  *((_DWORD *)this + 248) = glCreateShader();
  *((_BYTE *)this + 996) = 1;
  *(_DWORD *)v51 = strlen(a3);
  glShaderSource();
  v24 = (ES2Shader *)glCompileShader();
  if ( ES2Shader::CheckCompile(v24, *((_DWORD *)this + 248), v25, a3) != 1 )
    return 0;
  v26 = HashString(a3);
  v27 = dword_6B8BDC;
  v28 = *((_DWORD *)this + 248);
  if ( vertexShaders < (unsigned int)(dword_6B8BDC + 1) )
  {
    v29 = ((unsigned int)(3 * (dword_6B8BDC + 1)) >> 1) + 3;
    if ( v29 != vertexShaders )
    {
      v30 = malloc(8 * v29);
      if ( dword_6B8BE0 )
      {
        v31 = 8 * v27;
        v50 = v30;
        v32 = (void *)dword_6B8BE0;
        memmove_1(v30, (const void *)dword_6B8BE0, v31);
        free(v32);
        v30 = v50;
        v27 = dword_6B8BDC;
      }
      dword_6B8BE0 = (int)v30;
      vertexShaders = v29;
    }
  }
  v33 = dword_6B8BE0;
  *(_DWORD *)(dword_6B8BE0 + 8 * v27) = v26;
  *(_DWORD *)(v33 + 8 * v27 + 4) = v28;
  ++dword_6B8BDC;
LABEL_29:
  glAttachShader();
  glAttachShader();
  v34 = 0;
  glBindAttribLocation();
  glBindAttribLocation();
  glBindAttribLocation();
  glBindAttribLocation();
  glBindAttribLocation();
  glBindAttribLocation();
  glBindAttribLocation();
  glLinkProgram();
  glGetProgramiv();
LABEL_34:
  v39 = a2;
  while ( 1 )
  {
    v40 = *(unsigned __int8 *)a2;
    if ( v40 <= 0x7A )
      break;
    v41 = v40 == 123;
    if ( v40 != 123 )
      v41 = v40 == 125;
    if ( v41 )
    {
LABEL_31:
      v36 = v34 & (v40 != 125);
      v37 = &byte_61CD7E;
      if ( v36 )
        v37 = "    ";
      strcpy(v51, v37);
      strncat(v51, v39, (size_t)&a2[1 - (_DWORD)v39]);
      v38 = *(unsigned __int8 *)a2++;
      OS_DebugOut(v51);
      v34 = v36 | (v38 == 123);
      goto LABEL_34;
    }
LABEL_35:
    ++a2;
  }
  if ( *a2 )
  {
    if ( v40 == 59 )
      goto LABEL_31;
    goto LABEL_35;
  }
  v42 = 0;
  while ( 2 )
  {
    v46 = a3;
LABEL_51:
    v47 = *(unsigned __int8 *)a3;
    if ( v47 > 0x7A )
    {
      v48 = v47 == 123;
      if ( v47 != 123 )
        v48 = v47 == 125;
      if ( v48 )
      {
LABEL_46:
        v43 = v42 & (v47 != 125);
        v44 = &byte_61CD7E;
        if ( v43 )
          v44 = "    ";
        strcpy(v51, v44);
        strncat(v51, v46, (size_t)&a3[1 - (_DWORD)v46]);
        v45 = *(unsigned __int8 *)a3++;
        OS_DebugOut(v51);
        v42 = (v45 == 123) | v43;
        continue;
      }
      goto LABEL_50;
    }
    break;
  }
  if ( *a3 )
  {
    if ( v47 == 59 )
      goto LABEL_46;
LABEL_50:
    ++a3;
    goto LABEL_51;
  }
  ES2Shader::InitializeAfterCompile(this);
  return 1;
}


// ============================================================

// Address: 0x1cd05c
// Original: _ZN9ES2Shader17SetVectorConstantE24RQShaderVectorConstantIDPKfi
// Demangled: ES2Shader::SetVectorConstant(RQShaderVectorConstantID,float const*,int)
int __fastcall ES2Shader::SetVectorConstant(int result, int a2, int a3, int a4)
{
  float v4; // s0
  _DWORD *v5; // r1
  __int64 v6; // d17
  int v7; // r1

  switch ( a4 )
  {
    case 1:
      v4 = *(float *)a3;
      result += 28 * a2;
      *(_DWORD *)(result + 28) = 1;
      if ( *(float *)(result + 12) != v4 )
      {
        *(float *)(result + 12) = v4;
        goto LABEL_14;
      }
      return result;
    case 2:
      result += 28 * a2;
      *(_DWORD *)(result + 28) = 2;
      if ( *(float *)a3 != *(float *)(result + 12) || *(float *)(a3 + 4) != *(float *)(result + 16) )
      {
        *(_DWORD *)(result + 12) = *(_DWORD *)a3;
        *(_DWORD *)(result + 16) = *(_DWORD *)(a3 + 4);
        goto LABEL_14;
      }
      return result;
    case 3:
      result += 28 * a2;
      *(_DWORD *)(result + 28) = 3;
      if ( *(float *)a3 != *(float *)(result + 12) )
      {
        v5 = (_DWORD *)(result + 16);
LABEL_18:
        *(_DWORD *)(result + 12) = *(_DWORD *)a3;
        *v5 = *(_DWORD *)(a3 + 4);
        v7 = *(_DWORD *)(a3 + 8);
        *(_BYTE *)(result + 8) = 1;
        *(_DWORD *)(result + 20) = v7;
        return result;
      }
      v5 = (_DWORD *)(result + 16);
      if ( *(float *)(a3 + 4) != *(float *)(result + 16) || *(float *)(a3 + 8) != *(float *)(result + 20) )
        goto LABEL_18;
      return result;
    case 4:
      result += 28 * a2;
      *(_DWORD *)(result + 28) = 4;
      if ( *(float *)a3 != *(float *)(result + 12)
        || *(float *)(a3 + 4) != *(float *)(result + 16)
        || *(float *)(a3 + 8) != *(float *)(result + 20)
        || *(float *)(a3 + 12) != *(float *)(result + 24) )
      {
        v6 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(result + 12) = *(_QWORD *)a3;
        *(_QWORD *)(result + 20) = v6;
LABEL_14:
        *(_BYTE *)(result + 8) = 1;
      }
      return result;
    default:
      return result;
  }
}


// ============================================================

// Address: 0x1cd1a4
// Original: _ZN9ES2Shader17SetColorAttributeEPKf
// Demangled: ES2Shader::SetColorAttribute(float const*)
_QWORD *__fastcall ES2Shader::SetColorAttribute(ES2Shader *this, const float *a2)
{
  __int64 v2; // d16
  __int64 v3; // d17
  _QWORD *result; // r0

  v2 = *(_QWORD *)a2;
  v3 = *((_QWORD *)a2 + 1);
  ES2Shader::aBindings = 1;
  result = &qword_6B8BBC;
  qword_6B8BBC = v2;
  unk_6B8BC4 = v3;
  return result;
}


// ============================================================

// Address: 0x1cd1c0
// Original: _ZN9ES2Shader17SetMatrixConstantE24RQShaderMatrixConstantIDPKf
// Demangled: ES2Shader::SetMatrixConstant(RQShaderMatrixConstantID,float const*)
int __fastcall ES2Shader::SetMatrixConstant(int a1, int a2, __int64 *a3)
{
  int v4; // r6
  int result; // r0
  __int64 v6; // d16
  __int64 v7; // d17
  __int64 v8; // d20
  __int64 v9; // d21
  __int64 v10; // d23
  __int64 v11; // d18
  __int64 v12; // d19

  v4 = a1 + 76 * a2;
  result = operator!=();
  if ( result == 1 )
  {
    v6 = *a3;
    v7 = a3[1];
    v8 = a3[2];
    v9 = a3[3];
    v10 = a3[7];
    v11 = a3[4];
    v12 = a3[5];
    *(_QWORD *)(v4 + 732) = a3[6];
    *(_QWORD *)(v4 + 740) = v10;
    *(_QWORD *)(v4 + 716) = v11;
    *(_QWORD *)(v4 + 724) = v12;
    result = 1;
    *(_QWORD *)(v4 + 684) = v6;
    *(_QWORD *)(v4 + 692) = v7;
    *(_QWORD *)(v4 + 700) = v8;
    *(_QWORD *)(v4 + 708) = v9;
    *(_BYTE *)(v4 + 680) = 1;
    *(_BYTE *)(v4 + 748) = 1;
  }
  return result;
}


// ============================================================

// Address: 0x1cd224
// Original: _ZN9ES2Shader16SetBonesConstantEiPKf
// Demangled: ES2Shader::SetBonesConstant(int,float const*)
unsigned int __fastcall ES2Shader::SetBonesConstant(ES2Shader *this, int a2, const float *a3)
{
  size_t v6; // r5
  int v7; // r0
  _DWORD *v8; // r2
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r6
  void *v13; // r0
  int v14; // r0
  int v15; // r4
  __int64 v16; // kr00_8
  unsigned int *v17; // r0
  unsigned int v18; // r2
  unsigned int result; // r0

  v6 = 16 * a2;
  v7 = renderQueue;
  if ( (unsigned int)(*(_DWORD *)(renderQueue + 624) + 16 * a2 + 67) > *(_DWORD *)(renderQueue + 612) )
  {
    RenderQueue::Flush((RenderQueue *)renderQueue);
    v7 = renderQueue;
  }
  v8 = *(_DWORD **)(v7 + 628);
  *(_DWORD *)(v7 + 632) = 17;
  *v8 = 17;
  *(_DWORD *)(v7 + 628) += 4;
  v9 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = this;
  *(_DWORD *)(v9 + 628) += 4;
  v10 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = 6;
  *(_DWORD *)(v10 + 628) += 4;
  v11 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = a2;
  *(_DWORD *)(v11 + 628) += 4;
  v12 = renderQueue;
  v13 = (void *)((*(_DWORD *)(renderQueue + 628) + 3) & 0xFFFFFFFC);
  *(_DWORD *)(renderQueue + 628) = v13;
  memcpy_1(v13, a3, v6);
  *(_DWORD *)(v12 + 628) += v6;
  v14 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = 8;
  *(_DWORD *)(v14 + 628) += 4;
  v15 = renderQueue;
  if ( *(_BYTE *)(renderQueue + 601) )
    OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
  v16 = *(_QWORD *)(v15 + 624);
  v17 = (unsigned int *)(v15 + 624);
  __dmb(0xBu);
  do
    v18 = __ldrex(v17);
  while ( __strex(v18 + HIDWORD(v16) - v16, v17) );
  __dmb(0xBu);
  if ( *(_BYTE *)(v15 + 601) )
    OS_MutexRelease(*(pthread_mutex_t **)(v15 + 604));
  if ( !*(_BYTE *)(v15 + 600) )
    RenderQueue::Process((RenderQueue *)v15);
  result = *(_DWORD *)(v15 + 612);
  if ( *(_DWORD *)(v15 + 624) + 1024 > result )
    return j_RenderQueue::Flush((RenderQueue *)v15);
  return result;
}


// ============================================================

// Address: 0x1cd368
// Original: _ZN9ES2Shader6SelectEv
// Demangled: ES2Shader::Select(void)
unsigned int __fastcall ES2Shader::Select(ES2Shader *this)
{
  int v2; // r0
  _DWORD *v3; // r2
  int v4; // r0
  bool v5; // zf
  int v6; // r1
  int v7; // r1
  int v8; // r0
  _QWORD *v9; // r1
  __int64 v10; // d16
  __int64 v11; // d17
  __int64 v12; // d18
  __int64 v13; // d19
  __int64 v14; // d20
  __int64 v15; // d21
  __int64 v16; // d23
  bool v17; // zf
  int v18; // r1
  int v19; // r1
  int v20; // r0
  _QWORD *v21; // r1
  __int64 v22; // d16
  __int64 v23; // d17
  __int64 v24; // d18
  __int64 v25; // d19
  __int64 v26; // d20
  __int64 v27; // d21
  __int64 v28; // d23
  bool v29; // zf
  int v30; // r1
  int v31; // r1
  int v32; // r0
  _QWORD *v33; // r1
  __int64 v34; // d16
  __int64 v35; // d17
  __int64 v36; // d18
  __int64 v37; // d19
  __int64 v38; // d20
  __int64 v39; // d21
  __int64 v40; // d23
  bool v41; // zf
  int v42; // r1
  int v43; // r1
  int v44; // r0
  _QWORD *v45; // r1
  __int64 v46; // d16
  __int64 v47; // d17
  __int64 v48; // d18
  __int64 v49; // d19
  __int64 v50; // d20
  __int64 v51; // d21
  __int64 v52; // d23
  int v53; // r1
  int v54; // r1
  int v55; // r0
  _QWORD *v56; // r2
  __int64 v57; // d17
  int v58; // r1
  int v59; // r4
  __int64 v60; // kr00_8
  unsigned int *v61; // r0
  unsigned int v62; // r2
  unsigned int result; // r0

  v2 = renderQueue;
  if ( (unsigned int)(*(_DWORD *)(renderQueue + 624) + 1027) > *(_DWORD *)(renderQueue + 612) )
  {
    RenderQueue::Flush((RenderQueue *)renderQueue);
    v2 = renderQueue;
  }
  v3 = *(_DWORD **)(v2 + 628);
  *(_DWORD *)(v2 + 632) = 17;
  *v3 = 17;
  *(_DWORD *)(v2 + 628) += 4;
  v4 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = this;
  *(_DWORD *)(v4 + 628) += 4;
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 4), 0);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 32), 1u);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 60), 2u);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 88), 3u);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 116), 4u);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 144), 5u);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 172), 6u);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 200), 7u);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 228), 8u);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 256), 9u);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 284), 0xAu);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 312), 0xBu);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 340), 0xCu);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 368), 0xDu);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 396), 0xEu);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 424), 0xFu);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 452), 0x10u);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 480), 0x11u);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 508), 0x12u);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 536), 0x13u);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 564), 0x14u);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 592), 0x15u);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 620), 0x16u);
  ES2VectorBinding::Apply((ES2Shader *)((char *)this + 648), 0x17u);
  v5 = *((_BYTE *)this + 680) == 0;
  if ( *((_BYTE *)this + 680) )
    v5 = *((_DWORD *)this + 169) == -1;
  if ( !v5 )
  {
    v6 = renderQueue;
    **(_DWORD **)(renderQueue + 628) = 5;
    *(_DWORD *)(v6 + 628) += 4;
    v7 = renderQueue;
    **(_DWORD **)(renderQueue + 628) = 0;
    *(_DWORD *)(v7 + 628) += 4;
    v8 = renderQueue;
    v9 = (_QWORD *)((*(_DWORD *)(renderQueue + 628) + 3) & 0xFFFFFFFC);
    *(_DWORD *)(renderQueue + 628) = v9;
    v10 = *(_QWORD *)((char *)this + 716);
    v11 = *(_QWORD *)((char *)this + 724);
    v12 = *(_QWORD *)((char *)this + 684);
    v13 = *(_QWORD *)((char *)this + 692);
    v14 = *(_QWORD *)((char *)this + 700);
    v15 = *(_QWORD *)((char *)this + 708);
    v16 = *(_QWORD *)((char *)this + 740);
    v9[6] = *(_QWORD *)((char *)this + 732);
    v9[7] = v16;
    v9[4] = v10;
    v9[5] = v11;
    *v9 = v12;
    v9[1] = v13;
    v9 += 2;
    *v9 = v14;
    v9[1] = v15;
    *(_DWORD *)(v8 + 628) += 64;
    *((_BYTE *)this + 680) = 0;
  }
  v17 = *((_BYTE *)this + 756) == 0;
  if ( *((_BYTE *)this + 756) )
    v17 = *((_DWORD *)this + 188) == -1;
  if ( !v17 )
  {
    v18 = renderQueue;
    **(_DWORD **)(renderQueue + 628) = 5;
    *(_DWORD *)(v18 + 628) += 4;
    v19 = renderQueue;
    **(_DWORD **)(renderQueue + 628) = 1;
    *(_DWORD *)(v19 + 628) += 4;
    v20 = renderQueue;
    v21 = (_QWORD *)((*(_DWORD *)(renderQueue + 628) + 3) & 0xFFFFFFFC);
    *(_DWORD *)(renderQueue + 628) = v21;
    v22 = *((_QWORD *)this + 99);
    v23 = *((_QWORD *)this + 100);
    v24 = *((_QWORD *)this + 95);
    v25 = *((_QWORD *)this + 96);
    v26 = *((_QWORD *)this + 97);
    v27 = *((_QWORD *)this + 98);
    v28 = *((_QWORD *)this + 102);
    v21[6] = *((_QWORD *)this + 101);
    v21[7] = v28;
    v21[4] = v22;
    v21[5] = v23;
    *v21 = v24;
    v21[1] = v25;
    v21 += 2;
    *v21 = v26;
    v21[1] = v27;
    *(_DWORD *)(v20 + 628) += 64;
    *((_BYTE *)this + 756) = 0;
  }
  v29 = *((_BYTE *)this + 832) == 0;
  if ( *((_BYTE *)this + 832) )
    v29 = *((_DWORD *)this + 207) == -1;
  if ( !v29 )
  {
    v30 = renderQueue;
    **(_DWORD **)(renderQueue + 628) = 5;
    *(_DWORD *)(v30 + 628) += 4;
    v31 = renderQueue;
    **(_DWORD **)(renderQueue + 628) = 2;
    *(_DWORD *)(v31 + 628) += 4;
    v32 = renderQueue;
    v33 = (_QWORD *)((*(_DWORD *)(renderQueue + 628) + 3) & 0xFFFFFFFC);
    *(_DWORD *)(renderQueue + 628) = v33;
    v34 = *(_QWORD *)((char *)this + 868);
    v35 = *(_QWORD *)((char *)this + 876);
    v36 = *(_QWORD *)((char *)this + 836);
    v37 = *(_QWORD *)((char *)this + 844);
    v38 = *(_QWORD *)((char *)this + 852);
    v39 = *(_QWORD *)((char *)this + 860);
    v40 = *(_QWORD *)((char *)this + 892);
    v33[6] = *(_QWORD *)((char *)this + 884);
    v33[7] = v40;
    v33[4] = v34;
    v33[5] = v35;
    *v33 = v36;
    v33[1] = v37;
    v33 += 2;
    *v33 = v38;
    v33[1] = v39;
    *(_DWORD *)(v32 + 628) += 64;
    *((_BYTE *)this + 832) = 0;
  }
  v41 = *((_BYTE *)this + 908) == 0;
  if ( *((_BYTE *)this + 908) )
    v41 = *((_DWORD *)this + 226) == -1;
  if ( !v41 )
  {
    v42 = renderQueue;
    **(_DWORD **)(renderQueue + 628) = 4;
    *(_DWORD *)(v42 + 628) += 4;
    v43 = renderQueue;
    **(_DWORD **)(renderQueue + 628) = 3;
    *(_DWORD *)(v43 + 628) += 4;
    v44 = renderQueue;
    v45 = (_QWORD *)((*(_DWORD *)(renderQueue + 628) + 3) & 0xFFFFFFFC);
    *(_DWORD *)(renderQueue + 628) = v45;
    v46 = *((_QWORD *)this + 118);
    v47 = *((_QWORD *)this + 119);
    v48 = *((_QWORD *)this + 114);
    v49 = *((_QWORD *)this + 115);
    v50 = *((_QWORD *)this + 116);
    v51 = *((_QWORD *)this + 117);
    v52 = *((_QWORD *)this + 121);
    v45[6] = *((_QWORD *)this + 120);
    v45[7] = v52;
    v45[4] = v46;
    v45[5] = v47;
    *v45 = v48;
    v45[1] = v49;
    v45 += 2;
    *v45 = v50;
    v45[1] = v51;
    *(_DWORD *)(v44 + 628) += 64;
    *((_BYTE *)this + 908) = 0;
  }
  if ( ES2Shader::aBindings )
  {
    v53 = renderQueue;
    **(_DWORD **)(renderQueue + 628) = 7;
    *(_DWORD *)(v53 + 628) += 4;
    v54 = renderQueue;
    **(_DWORD **)(renderQueue + 628) = 0;
    *(_DWORD *)(v54 + 628) += 4;
    v55 = renderQueue;
    v56 = (_QWORD *)((*(_DWORD *)(renderQueue + 628) + 3) & 0xFFFFFFFC);
    *(_DWORD *)(renderQueue + 628) = v56;
    v57 = unk_6B8BC4;
    *v56 = qword_6B8BBC;
    v56[1] = v57;
    *(_DWORD *)(v55 + 628) += 16;
    ES2Shader::aBindings = 0;
  }
  v58 = renderQueue;
  **(_DWORD **)(renderQueue + 628) = 8;
  *(_DWORD *)(v58 + 628) += 4;
  v59 = renderQueue;
  if ( *(_BYTE *)(renderQueue + 601) )
    OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
  v60 = *(_QWORD *)(v59 + 624);
  v61 = (unsigned int *)(v59 + 624);
  __dmb(0xBu);
  do
    v62 = __ldrex(v61);
  while ( __strex(v62 + HIDWORD(v60) - v60, v61) );
  __dmb(0xBu);
  if ( *(_BYTE *)(v59 + 601) )
    OS_MutexRelease(*(pthread_mutex_t **)(v59 + 604));
  if ( !*(_BYTE *)(v59 + 600) )
    RenderQueue::Process((RenderQueue *)v59);
  result = *(_DWORD *)(v59 + 612);
  if ( *(_DWORD *)(v59 + 624) + 1024 > result )
    return j_RenderQueue::Flush((RenderQueue *)v59);
  return result;
}


// ============================================================

// Address: 0x1cdec4
// Original: _ZN9ES2ShaderC2Ev
// Demangled: ES2Shader::ES2Shader(void)
void __fastcall ES2Shader::ES2Shader(ES2Shader *this)
{
  __int64 v1; // d18
  __int64 v2; // d19

  *(float *)&v1 = 1.0;
  *((float *)&v1 + 1) = 1.0;
  *(float *)&v2 = 1.0;
  *((float *)&v2 + 1) = 1.0;
  *((_DWORD *)this + 1) = -2;
  *((_BYTE *)this + 8) = 1;
  *((_DWORD *)this + 7) = 4;
  *((_DWORD *)this + 8) = -2;
  *((_BYTE *)this + 36) = 1;
  *((_BYTE *)this + 64) = 1;
  *((_DWORD *)this + 21) = 4;
  *((_DWORD *)this + 14) = 4;
  *((_DWORD *)this + 15) = -2;
  *(_QWORD *)((char *)this + 12) = v1;
  *(_QWORD *)((char *)this + 20) = v2;
  *((_QWORD *)this + 5) = v1;
  *((_QWORD *)this + 6) = v2;
  *(_QWORD *)((char *)this + 68) = v1;
  *(_QWORD *)((char *)this + 76) = v2;
  *((_BYTE *)this + 92) = 1;
  *((_QWORD *)this + 12) = v1;
  *((_QWORD *)this + 13) = v2;
  *((_DWORD *)this + 22) = -2;
  *(_DWORD *)this = &off_6608B0;
  *(_QWORD *)((char *)this + 124) = v1;
  *(_QWORD *)((char *)this + 132) = v2;
  *((_BYTE *)this + 120) = 1;
  *((_DWORD *)this + 28) = 4;
  *((_DWORD *)this + 29) = -2;
  *((_QWORD *)this + 19) = v1;
  *((_QWORD *)this + 20) = v2;
  *((_BYTE *)this + 148) = 1;
  *((_DWORD *)this + 35) = 4;
  *((_DWORD *)this + 36) = -2;
  *(_QWORD *)((char *)this + 180) = v1;
  *(_QWORD *)((char *)this + 188) = v2;
  *((_BYTE *)this + 176) = 1;
  *((_DWORD *)this + 42) = 4;
  *((_DWORD *)this + 43) = -2;
  *((_QWORD *)this + 26) = v1;
  *((_QWORD *)this + 27) = v2;
  *((_BYTE *)this + 204) = 1;
  *((_DWORD *)this + 49) = 4;
  *((_DWORD *)this + 50) = -2;
  *(_QWORD *)((char *)this + 236) = v1;
  *(_QWORD *)((char *)this + 244) = v2;
  *((_BYTE *)this + 232) = 1;
  *((_DWORD *)this + 56) = 4;
  *((_DWORD *)this + 57) = -2;
  *((_QWORD *)this + 33) = v1;
  *((_QWORD *)this + 34) = v2;
  *((_BYTE *)this + 260) = 1;
  *((_DWORD *)this + 63) = 4;
  *((_DWORD *)this + 64) = -2;
  *(_QWORD *)((char *)this + 292) = v1;
  *(_QWORD *)((char *)this + 300) = v2;
  *((_BYTE *)this + 288) = 1;
  *((_DWORD *)this + 70) = 4;
  *((_DWORD *)this + 71) = -2;
  *((_QWORD *)this + 40) = v1;
  *((_QWORD *)this + 41) = v2;
  *((_BYTE *)this + 316) = 1;
  *((_DWORD *)this + 77) = 4;
  *((_DWORD *)this + 78) = -2;
  *(_QWORD *)((char *)this + 348) = v1;
  *(_QWORD *)((char *)this + 356) = v2;
  *((_BYTE *)this + 344) = 1;
  *((_DWORD *)this + 84) = 4;
  *((_DWORD *)this + 85) = -2;
  *((_QWORD *)this + 47) = v1;
  *((_QWORD *)this + 48) = v2;
  *((_BYTE *)this + 372) = 1;
  *((_DWORD *)this + 91) = 4;
  *((_DWORD *)this + 92) = -2;
  *(_QWORD *)((char *)this + 404) = v1;
  *(_QWORD *)((char *)this + 412) = v2;
  *((_BYTE *)this + 400) = 1;
  *((_DWORD *)this + 98) = 4;
  *((_DWORD *)this + 99) = -2;
  *((_QWORD *)this + 54) = v1;
  *((_QWORD *)this + 55) = v2;
  *((_BYTE *)this + 428) = 1;
  *((_DWORD *)this + 105) = 4;
  *((_DWORD *)this + 106) = -2;
  *(_QWORD *)((char *)this + 460) = v1;
  *(_QWORD *)((char *)this + 468) = v2;
  *((_BYTE *)this + 456) = 1;
  *((_DWORD *)this + 112) = 4;
  *((_DWORD *)this + 113) = -2;
  *((_QWORD *)this + 61) = v1;
  *((_QWORD *)this + 62) = v2;
  *((_BYTE *)this + 484) = 1;
  *((_DWORD *)this + 119) = 4;
  *((_DWORD *)this + 120) = -2;
  *(_QWORD *)((char *)this + 516) = v1;
  *(_QWORD *)((char *)this + 524) = v2;
  *((_BYTE *)this + 512) = 1;
  *((_DWORD *)this + 126) = 4;
  *((_DWORD *)this + 127) = -2;
  *((_QWORD *)this + 68) = v1;
  *((_QWORD *)this + 69) = v2;
  *((_BYTE *)this + 540) = 1;
  *((_DWORD *)this + 133) = 4;
  *((_DWORD *)this + 134) = -2;
  *(_QWORD *)((char *)this + 572) = v1;
  *(_QWORD *)((char *)this + 580) = v2;
  *((_BYTE *)this + 568) = 1;
  *((_DWORD *)this + 140) = 4;
  *((_DWORD *)this + 141) = -2;
  *((_QWORD *)this + 75) = v1;
  *((_QWORD *)this + 76) = v2;
  *((_BYTE *)this + 596) = 1;
  *((_DWORD *)this + 147) = 4;
  *((_DWORD *)this + 148) = -2;
  *(_QWORD *)((char *)this + 628) = v1;
  *(_QWORD *)((char *)this + 636) = v2;
  *((_BYTE *)this + 624) = 1;
  *((_DWORD *)this + 154) = 4;
  *((_DWORD *)this + 155) = -2;
  *((_QWORD *)this + 82) = v1;
  *((_QWORD *)this + 83) = v2;
  *((_BYTE *)this + 652) = 1;
  *((_DWORD *)this + 168) = 4;
  *((_DWORD *)this + 161) = 4;
  *((_DWORD *)this + 162) = -2;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *(_QWORD *)((char *)this + 708) = 0LL;
  *(_QWORD *)((char *)this + 716) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_DWORD *)this + 171) = 1065353216;
  *((_BYTE *)this + 680) = 1;
  *((_DWORD *)this + 169) = -2;
  *((_DWORD *)this + 176) = 1065353216;
  *((_DWORD *)this + 181) = 1065353216;
  *((_DWORD *)this + 186) = 1065353216;
  *((_BYTE *)this + 748) = 1;
  *(_QWORD *)((char *)this + 764) = 0LL;
  *(_QWORD *)((char *)this + 772) = 0LL;
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  *(_QWORD *)((char *)this + 804) = 0LL;
  *(_QWORD *)((char *)this + 812) = 0LL;
  *((_DWORD *)this + 190) = 1065353216;
  *((_BYTE *)this + 756) = 1;
  *((_DWORD *)this + 188) = -2;
  *((_DWORD *)this + 195) = 1065353216;
  *((_DWORD *)this + 200) = 1065353216;
  *((_DWORD *)this + 205) = 1065353216;
  *((_BYTE *)this + 824) = 1;
  *((_QWORD *)this + 105) = 0LL;
  *((_QWORD *)this + 106) = 0LL;
  *(_QWORD *)((char *)this + 860) = 0LL;
  *(_QWORD *)((char *)this + 868) = 0LL;
  *((_QWORD *)this + 110) = 0LL;
  *((_QWORD *)this + 111) = 0LL;
  *((_DWORD *)this + 209) = 1065353216;
  *((_BYTE *)this + 832) = 1;
  *((_DWORD *)this + 207) = -2;
  *((_DWORD *)this + 214) = 1065353216;
  *((_DWORD *)this + 219) = 1065353216;
  *((_DWORD *)this + 224) = 1065353216;
  *((_BYTE *)this + 900) = 1;
  *(_QWORD *)((char *)this + 916) = 0LL;
  *(_QWORD *)((char *)this + 924) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *(_QWORD *)((char *)this + 956) = 0LL;
  *(_QWORD *)((char *)this + 964) = 0LL;
  *((_DWORD *)this + 228) = 1065353216;
  *((_BYTE *)this + 908) = 1;
  *((_DWORD *)this + 226) = -2;
  *((_DWORD *)this + 233) = 1065353216;
  *((_DWORD *)this + 238) = 1065353216;
  *((_DWORD *)this + 243) = 1065353216;
  *((_BYTE *)this + 976) = 1;
  *((_DWORD *)this + 245) = -1;
  *((_DWORD *)this + 246) = 0;
  *((_DWORD *)this + 248) = 0;
  *((_DWORD *)this + 250) = 0;
}


// ============================================================
