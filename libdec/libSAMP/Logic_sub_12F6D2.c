// ADDR: 0x12f3d0
// SYMBOL: sub_12F3D0
int __fastcall sub_12F3D0(_DWORD *a1, int a2)
{
  _BYTE *v3; // r6
  int v5; // r0
  int result; // r0
  _BYTE *v7; // r5
  _BYTE *v8; // r6
  _BYTE *v9; // r5
  _BYTE *v10; // r5
  _BYTE *v11; // r5
  _BYTE *v12; // r5
  _BYTE *v13; // r0
  _BYTE *v14; // r6
  int v15; // r8
  _DWORD *v16; // r0
  void *v17[7]; // [sp+4h] [bp-1Ch] BYREF

  v3 = (_BYTE *)a1[23];
  if ( (_BYTE *)a1[25] != v3 )
    a1[25] = v3;
  v5 = a1[24];
  if ( a1[26] != v5 )
    a1[26] = v5;
  if ( v3[80] )
    (*(void (__fastcall **)(_BYTE *, _DWORD))(*(_DWORD *)v3 + 36))(v3, 0);
  result = 0;
  v3[80] = 0;
  switch ( a2 )
  {
    case 0:
      v7 = (_BYTE *)a1[28];
      if ( v7[80] != 1 )
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)v7 + 36))(a1[28], 1);
      a1[23] = a1[28];
      result = 1;
      v7[80] = 1;
      a2 = 0;
      break;
    case 1:
      v8 = (_BYTE *)a1[29];
      if ( v8[80] != 1 )
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)v8 + 36))(a1[29], 1);
      result = a1[29];
      a2 = 1;
      a1[23] = result;
      v8[80] = 1;
      break;
    case 2:
      v9 = (_BYTE *)a1[30];
      if ( v9[80] != 1 )
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)v9 + 36))(a1[30], 1);
      a1[23] = a1[30];
      result = 1;
      v9[80] = 1;
      a2 = 2;
      break;
    case 3:
      v10 = (_BYTE *)a1[31];
      if ( v10[80] != 1 )
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)v10 + 36))(a1[31], 1);
      a1[23] = a1[31];
      result = 1;
      v10[80] = 1;
      a2 = 3;
      break;
    case 4:
      v11 = (_BYTE *)a1[32];
      if ( v11[80] != 1 )
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)v11 + 36))(a1[32], 1);
      a1[23] = a1[32];
      result = 1;
      v11[80] = 1;
      a2 = 4;
      break;
    case 5:
      v12 = (_BYTE *)a1[33];
      if ( sub_12F588(v12) )
      {
        v13 = v12;
        if ( v12[80] != 1 )
        {
          (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v12 + 36))(v12, 1);
          v13 = (_BYTE *)a1[33];
        }
        a1[23] = v13;
        result = 1;
        v12[80] = 1;
        a2 = 5;
      }
      else
      {
        a2 = a1[24];
        v14 = (_BYTE *)a1[23];
        if ( v14[80] != 1 )
          (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v14 + 36))(v14, 1);
        v14[80] = 1;
        v15 = dword_23DEF4;
        if ( dword_23DEF4 )
        {
          v16 = sub_DC6DC(v17, &byte_8F794);
          sub_144712(v15, 1, 30, -1, v16);
          if ( LOBYTE(v17[0]) << 31 )
            operator delete(v17[2]);
        }
        result = sub_12F5E0(a1);
      }
      break;
    default:
      break;
  }
  a1[24] = a2;
  return result;
}


// ======================================================================
