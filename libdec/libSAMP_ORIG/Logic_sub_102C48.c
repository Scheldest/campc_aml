// ADDR: 0x103268
// SYMBOL: sub_103268
_DWORD *__fastcall sub_103268(_DWORD *a1, int a2, int a3, int a4)
{
  _QWORD *v5; // r0
  __int64 v6; // r2
  int v8[4]; // [sp+0h] [bp-10h] BYREF

  v8[0] = a3;
  v8[1] = a4;
  v5 = a1 + 5;
  v6 = *(_QWORD *)(a2 + 332);
  a1[3] = v5;
  *v5 = 0LL;
  v5[1] = 0LL;
  a1[1] = (HIDWORD(v6) - (int)v6) >> 2;
  a1[2] = v5;
  *a1 = a2;
  v5[2] = 0LL;
  v5[3] = 0LL;
  a1[4] = v5 + 4;
  v8[0] = (int)(a1 + 2);
  sub_1004F2(a2 + 332, v8);
  return a1;
}


// ======================================================================
// ADDR: 0x1032cc
// SYMBOL: sub_1032CC
_DWORD *__fastcall sub_1032CC(int a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  int v4; // r6
  int v5; // r0
  int *v6; // r1
  int v7; // r0
  int v8; // r6
  int v9; // r0
  int v10; // r8
  int v11; // r0
  int v12; // r2
  int v13; // r3
  int v14; // r9
  int v15; // r8
  int v16; // r6
  int v17; // r8
  size_t v18; // r0
  int v19; // r0
  int v20; // r2
  int v22[2]; // [sp+4h] [bp-5Ch] BYREF
  int v23; // [sp+Ch] [bp-54h] BYREF
  _DWORD v24[13]; // [sp+10h] [bp-50h] BYREF

  v23 = a1;
  if ( !sub_FE18C((__int64 *)a1, (int)"Ty", (int)"") )
  {
    if ( sub_FE18C((__int64 *)a1, (int)"Tn", (int)"") )
    {
      v7 = sub_103538(&v23, 1);
      if ( v7 )
      {
        v8 = v7;
        v9 = sub_FE7F0((unsigned __int8 **)a1);
        if ( v9 )
        {
          v10 = v9;
          v2 = sub_FFA98(a1 + 408, 16);
          v2[2] = v8;
          v2[3] = v10;
          *v2 = &off_1133B8;
          v2[1] = 16842781;
          return v2;
        }
      }
    }
    else if ( sub_FE18C((__int64 *)a1, (int)"Tt", (int)"") )
    {
      v11 = sub_103538(&v23, 2);
      if ( v11 )
      {
        v14 = v11;
        v15 = *(_DWORD *)(a1 + 8);
        v16 = *(_DWORD *)(a1 + 12);
        sub_103268(v24, a1, v12, v13);
        v17 = (v16 - v15) >> 2;
        while ( 1 )
        {
          v18 = _strlen_chk("E", 2u);
          if ( sub_FE18C((__int64 *)a1, (int)"E", (int)&aE[v18]) )
          {
            sub_FF908((int)v22, a1, v17);
            v2 = sub_FFA98(a1 + 408, 20);
            v20 = v22[0];
            v2[4] = v22[1];
            v2[2] = v14;
            v2[3] = v20;
            *v2 = &off_1133F0;
            v2[1] = 16842782;
            goto LABEL_21;
          }
          v22[0] = sub_1032CC(a1);
          if ( !v22[0] )
            break;
          sub_FF894(a1 + 8, v22);
        }
        v2 = 0;
LABEL_21:
        sub_103494(v24);
        return v2;
      }
    }
    else if ( sub_FE18C((__int64 *)a1, (int)"Tp", (int)"") )
    {
      v19 = sub_1032CC(a1);
      if ( v19 )
      {
        v4 = v19;
        v2 = sub_FFA98(a1 + 408, 12);
        v5 = 16842783;
        v6 = &`vtable for'`anonymous namespace'::itanium_demangle::TemplateParamPackDecl;
        goto LABEL_4;
      }
    }
    return 0;
  }
  v2 = 0;
  v3 = sub_103538(&v23, 0);
  if ( v3 )
  {
    v4 = v3;
    v2 = sub_FFA98(a1 + 408, 12);
    v5 = 16842780;
    v6 = &`vtable for'`anonymous namespace'::itanium_demangle::TypeTemplateParamDecl;
LABEL_4:
    *v2 = v6 + 2;
    v2[1] = v5;
    v2[2] = v4;
  }
  return v2;
}


// ======================================================================
// ADDR: 0x103494
// SYMBOL: sub_103494
int __fastcall sub_103494(int a1)
{
  *(_DWORD *)(*(_DWORD *)a1 + 336) = *(_DWORD *)(*(_DWORD *)a1 + 332) + 4 * *(_DWORD *)(a1 + 4);
  sub_FE132((void **)(a1 + 8));
  return a1;
}


// ======================================================================
// ADDR: 0x1034b8
// SYMBOL: sub_1034B8
_DWORD *__fastcall sub_1034B8(int a1, const char *a2)
{
  _DWORD *v3; // r5
  size_t v4; // r0
  _DWORD *result; // r0

  v3 = sub_FFA98(a1 + 408, 16);
  v4 = strlen(a2);
  v3[2] = a2;
  v3[3] = &a2[v4];
  result = v3;
  *v3 = &off_113118;
  v3[1] = 16843015;
  return result;
}


// ======================================================================
