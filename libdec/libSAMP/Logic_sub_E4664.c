// ADDR: 0xe62c4
// SYMBOL: sub_E62C4
int __fastcall sub_E62C4(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0
  int v9; // r1
  _BYTE v10[16]; // [sp+8h] [bp-28h] BYREF
  _BYTE *v11; // [sp+18h] [bp-18h]

  sub_E675C(v10, a3);
  sub_E66C0(a1, a2, v10, a4, a5);
  result = (int)v11;
  if ( v10 == v11 )
  {
    v9 = 4;
  }
  else
  {
    if ( !v11 )
      return result;
    v9 = 5;
  }
  return (*(int (**)(void))(*(_DWORD *)v11 + 4 * v9))();
}


// ======================================================================
// ADDR: 0xe6328
// SYMBOL: sub_E6328
void __fastcall sub_E6328(int a1, int a2, int a3)
{
  int v6; // r1
  char v7; // r0
  int v8; // r0
  int v9; // r6
  double v10; // d16
  int v11; // r0
  __int64 v12; // r2
  unsigned __int8 v13; // r1
  int v14; // r0
  int v15; // r6
  double v16; // d16
  int v17; // r0
  __int64 v18; // r2
  unsigned __int8 v19; // r1
  unsigned __int8 *v20; // r0
  int v21; // r0
  __int64 v22; // kr00_8
  unsigned __int8 v23[8]; // [sp+8h] [bp-110h] BYREF
  __int64 v24; // [sp+10h] [bp-108h]
  char v25; // [sp+18h] [bp-100h] BYREF
  __int64 v26; // [sp+20h] [bp-F8h]
  unsigned __int8 v27; // [sp+28h] [bp-F0h] BYREF
  __int64 v28; // [sp+30h] [bp-E8h]
  unsigned __int8 v29[8]; // [sp+38h] [bp-E0h] BYREF
  int v30; // [sp+40h] [bp-D8h]
  void *v31[2]; // [sp+48h] [bp-D0h] BYREF
  void *v32; // [sp+50h] [bp-C8h]
  _BYTE v33[8]; // [sp+54h] [bp-C4h] BYREF
  void *v34; // [sp+5Ch] [bp-BCh]
  double v35; // [sp+60h] [bp-B8h] BYREF
  int v36; // [sp+68h] [bp-B0h]
  _DWORD v37[2]; // [sp+70h] [bp-A8h] BYREF
  _BYTE v38[12]; // [sp+78h] [bp-A0h] BYREF
  _BYTE v39[8]; // [sp+84h] [bp-94h] BYREF
  void *v40; // [sp+8Ch] [bp-8Ch]
  _BYTE v41[16]; // [sp+90h] [bp-88h] BYREF
  _BYTE *v42; // [sp+A0h] [bp-78h]
  int v43; // [sp+A8h] [bp-70h] BYREF
  __int64 v44; // [sp+ACh] [bp-6Ch]
  __int64 v45; // [sp+B4h] [bp-64h]
  char v46; // [sp+BCh] [bp-5Ch]
  char v47; // [sp+BDh] [bp-5Bh]
  char v48; // [sp+D4h] [bp-44h]

  if ( *(_DWORD *)(a1 + 16) )
  {
    sub_E67B8(v41, a1);
    sub_E749C(&v43, a3, v41, *(unsigned __int8 *)(a1 + 128));
    if ( v41 == v42 )
    {
      v6 = 4;
    }
    else
    {
      if ( !v42 )
      {
LABEL_19:
        sub_E7540(a1, &v43);
        if ( a2 )
        {
          v14 = sub_E67FC(a1 + 32);
          *(_DWORD *)(a1 + 24) = v14;
          if ( v14 != 15 )
          {
            v15 = *(_DWORD *)(a1 + 52);
            sub_E7C78(v39, a1 + 32);
            v16 = *(double *)(a1 + 52);
            v36 = *(_DWORD *)(a1 + 60);
            v35 = v16;
            sub_DC6DC(v31, "value");
            sub_E7F28(v33, a1, 15, v31);
            v30 = 0;
            v29[0] = 0;
            sub_E7CE4(v37, 101, &v35, v33, v29);
            sub_E7C40(&v43, v15, v39, v37);
            v37[0] = &off_22A820;
            std::underflow_error::~underflow_error((std::underflow_error *)v38);
            std::exception::~exception((std::exception *)v37);
            sub_E3F7A(v29);
            if ( v33[0] << 31 )
              operator delete(v34);
            if ( LOBYTE(v31[0]) << 31 )
              operator delete(v32);
            if ( v39[0] << 31 )
              operator delete(v40);
          }
        }
        if ( v48 )
        {
          v17 = HIDWORD(v28);
          v18 = *(_QWORD *)(a3 + 8);
          v19 = *(_BYTE *)a3;
          *(_DWORD *)(a3 + 8) = 0;
          *(_DWORD *)(a3 + 12) = v17;
          *(_BYTE *)a3 = 9;
          v20 = &v27;
          v28 = v18;
          v27 = v19;
        }
        else
        {
          if ( *(_BYTE *)a3 != 9 )
          {
LABEL_32:
            sub_E8218(&v43);
            return;
          }
          v21 = HIDWORD(v26);
          v22 = *(_QWORD *)(a3 + 8);
          *(_BYTE *)a3 = 0;
          *(_DWORD *)(a3 + 8) = 0;
          *(_DWORD *)(a3 + 12) = v21;
          v25 = 9;
          v20 = (unsigned __int8 *)&v25;
          v26 = v22;
        }
        sub_E3F7A(v20);
        goto LABEL_32;
      }
      v6 = 5;
    }
    (*(void (**)(void))(*(_DWORD *)v42 + 4 * v6))();
    goto LABEL_19;
  }
  v7 = *(_BYTE *)(a1 + 128);
  v43 = a3;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0;
  v47 = v7;
  sub_E8260(a1);
  if ( a2 )
  {
    v8 = sub_E67FC(a1 + 32);
    *(_DWORD *)(a1 + 24) = v8;
    if ( v8 != 15 )
    {
      v9 = *(_DWORD *)(a1 + 52);
      sub_E7C78(v39, a1 + 32);
      v10 = *(double *)(a1 + 52);
      v36 = *(_DWORD *)(a1 + 60);
      v35 = v10;
      sub_DC6DC(v31, "value");
      sub_E7F28(v33, a1, 15, v31);
      v30 = 0;
      v29[0] = 0;
      sub_E7CE4(v37, 101, &v35, v33, v29);
      sub_E8960(&v43, v9, v39, v37);
      v37[0] = &off_22A820;
      std::underflow_error::~underflow_error((std::underflow_error *)v38);
      std::exception::~exception((std::exception *)v37);
      sub_E3F7A(v29);
      if ( v33[0] << 31 )
        operator delete(v34);
      if ( LOBYTE(v31[0]) << 31 )
        operator delete(v32);
      if ( v39[0] << 31 )
        operator delete(v40);
    }
  }
  if ( v46 )
  {
    v11 = HIDWORD(v24);
    v12 = *(_QWORD *)(a3 + 8);
    v13 = *(_BYTE *)a3;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)(a3 + 12) = v11;
    *(_BYTE *)a3 = 9;
    v24 = v12;
    v23[0] = v13;
    sub_E3F7A(v23);
  }
  if ( (_DWORD)v44 )
  {
    HIDWORD(v44) = v44;
    operator delete((void *)v44);
  }
}


// ======================================================================
// ADDR: 0xe669a
// SYMBOL: sub_E669A
_DWORD **__fastcall sub_E669A(_DWORD **a1)
{
  _DWORD *v2; // r0

  v2 = *a1;
  if ( v2 )
    std::ios_base::clear(
      (std::ios_base *)((char *)v2 + *(_DWORD *)(*v2 - 12)),
      *(_DWORD *)((char *)v2 + *(_DWORD *)(*v2 - 12) + 16) & 2);
  return a1;
}


// ======================================================================
// ADDR: 0xe6790
// SYMBOL: sub_E6790
_DWORD **__fastcall sub_E6790(int a1)
{
  void *v2; // r0

  if ( *(unsigned __int8 *)(a1 + 44) << 31 )
    operator delete(*(void **)(a1 + 52));
  v2 = *(void **)(a1 + 32);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 36) = v2;
    operator delete(v2);
  }
  return sub_E669A((_DWORD **)a1);
}


// ======================================================================
