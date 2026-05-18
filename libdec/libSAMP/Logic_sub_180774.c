// ADDR: 0x16201c
// SYMBOL: sub_16201C
int sub_16201C()
{
  int result; // r0
  std::runtime_error *exception; // r4

  result = dword_381A6C;
  if ( !dword_381A6C )
  {
    exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
    std::runtime_error::runtime_error(exception, "descent_builder: object not created yet");
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))std::underflow_error::~underflow_error);
  }
  return result;
}


// ======================================================================
// ADDR: 0x16206c
// SYMBOL: sub_16206C
unsigned int __fastcall sub_16206C(unsigned int *a1, unsigned __int8 *a2, unsigned int a3, char a4)
{
  unsigned int result; // r0
  unsigned int v5; // r4
  int v6; // r0
  int v8; // r0
  char *v9; // r8
  int v10; // r0
  unsigned __int8 v11; // r1
  _BYTE *v12; // r0
  int v13; // r1
  int v14; // r1
  char v15; // r2
  int v16; // r1
  _BYTE *v17; // r1
  int v18; // r0
  unsigned int v19; // r0
  int v20; // r0
  unsigned __int8 v21; // r1
  _BYTE *v22; // r0
  int v23; // r0
  unsigned int v24; // r0
  _BYTE v25[20]; // [sp+0h] [bp-1250h] BYREF
  char v26; // [sp+114h] [bp-113Ch] BYREF
  unsigned int v27; // [sp+1114h] [bp-13Ch] BYREF
  _BYTE v28[279]; // [sp+1118h] [bp-138h] BYREF
  unsigned __int8 v29[25]; // [sp+122Fh] [bp-21h] BYREF

  result = *a1;
  if ( result && a2 && a3 )
  {
    v5 = result;
    v6 = *a2;
    if ( a3 >= 6 && v6 == 40 )
      v6 = a2[5];
    if ( a3 >= 2 && v6 == 20 )
    {
      v6 = a2[1];
      v29[0] = a2[1];
      if ( a3 >= 3 && v6 == 252 )
      {
        v8 = sub_17D4F2((int)v28, a2 + 2, a3 - 2);
        if ( sub_17D9C0(v8, &v27, 32, 1) )
        {
          if ( v27 < 0x8008 )
            v9 = &v26;
          else
            v9 = (char *)operator new[](v27 >> 3);
          if ( sub_17D786((int)v28, (int)v9) )
          {
            sub_17D4F2((int)v25, v9, v27 >> 3);
            sub_17D786((int)v25, (int)v29);
            v20 = *(_DWORD *)(v5 + 304);
            v21 = v29[0];
            *(_DWORD *)(v5 + 304) = v20 + 1;
            v22 = (_BYTE *)(3 * v20 + v5);
            v22[6] = a4;
            v22[5] = 3;
            v22[4] = v21;
            sub_17D542(v25);
          }
          else
          {
            v23 = *(_DWORD *)(v5 + 304);
            *(_DWORD *)(v5 + 304) = v23 + 1;
            v24 = 3 * v23 + v5;
            *(_BYTE *)(v24 + 6) = a4;
            *(_WORD *)(v24 + 4) = 508;
          }
          if ( v27 >= 0x8008 )
            operator delete[](v9);
        }
        else
        {
          v18 = *(_DWORD *)(v5 + 304);
          *(_DWORD *)(v5 + 304) = v18 + 1;
          v19 = 3 * v18 + v5;
          *(_BYTE *)(v19 + 6) = a4;
          *(_WORD *)(v19 + 4) = 508;
        }
        sub_17D542(v28);
        goto LABEL_28;
      }
      v13 = *(_DWORD *)(v5 + 304);
      *(_DWORD *)(v5 + 304) = v13 + 1;
      v14 = 3 * v13;
      v15 = 1;
    }
    else
    {
      if ( a3 >= 2 && v6 == 220 )
      {
        v10 = *(_DWORD *)(v5 + 304);
        v11 = a2[1];
        *(_DWORD *)(v5 + 304) = v10 + 1;
        v12 = (_BYTE *)(3 * v10 + v5);
        v12[6] = a4;
        v12[5] = 2;
        v12[4] = v11;
        goto LABEL_28;
      }
      v16 = *(_DWORD *)(v5 + 304);
      *(_DWORD *)(v5 + 304) = v16 + 1;
      v14 = 3 * v16;
      v15 = 0;
    }
    v17 = (_BYTE *)(v14 + v5);
    v17[6] = a4;
    v17[5] = v15;
    v17[4] = v6;
LABEL_28:
    result = *(_DWORD *)(v5 + 304);
    if ( result >= 0x64 )
    {
      result = 0;
      *(_DWORD *)(v5 + 304) = 0;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x182f10
// SYMBOL: sub_182F10
int __fastcall sub_182F10(int a1)
{
  __int64 v2; // kr00_8
  int v3; // r6

  v2 = *(_QWORD *)(a1 + 4);
  if ( *(_DWORD *)(v2 + 60) == HIDWORD(v2) || *(_BYTE *)(*(_DWORD *)(v2 + 60) + 56) )
  {
    v3 = *(_DWORD *)(v2 + 60);
    *(_DWORD *)(v2 + 60) = operator new(0x40u);
    *(_DWORD *)(*(_DWORD *)(v2 + 60) + 60) = v3;
  }
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(v2 + 60);
  return v2;
}


// ======================================================================
