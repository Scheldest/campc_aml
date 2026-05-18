// ADDR: 0x13067c
// SYMBOL: sub_13067C
_DWORD *__fastcall sub_13067C(_DWORD *a1, int a2)
{
  void *v5[2]; // [sp+4h] [bp-1Ch] BYREF
  void *v6; // [sp+Ch] [bp-14h]

  sub_DC6DC(v5, &byte_8F794);
  sub_13CE34(a1, v5, 0);
  if ( LOBYTE(v5[0]) << 31 )
    operator delete(v6);
  *a1 = &off_22DF1C;
  switch ( a2 )
  {
    case 4:
      sub_13055C((int)v5, "123");
      sub_130514((int)a1, (unsigned __int8 *)v5);
      break;
    case 5:
      sub_13055C((int)v5, "B[..]");
      sub_130514((int)a1, (unsigned __int8 *)v5);
      break;
    case 6:
      sub_13055C((int)v5, "ru");
      sub_130514((int)a1, (unsigned __int8 *)v5);
      break;
    case 7:
      sub_13055C((int)v5, "eng");
      sub_130514((int)a1, (unsigned __int8 *)v5);
      break;
    case 8:
      sub_13055C((int)v5, "[back]");
      sub_130514((int)a1, (unsigned __int8 *)v5);
      break;
    default:
      sub_13055C((int)v5, &byte_8F794);
      sub_130514((int)a1, (unsigned __int8 *)v5);
      break;
  }
  if ( LOBYTE(v5[0]) << 31 )
    operator delete(v6);
  a1[28] = a2;
  return a1;
}


// ======================================================================
