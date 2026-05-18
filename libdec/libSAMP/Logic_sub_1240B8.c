// ADDR: 0x124258
// SYMBOL: sub_124258
int __fastcall sub_124258(int a1, __int64 *a2)
{
  __int64 v3; // r2
  int v4; // r1
  _UNKNOWN **v6; // [sp+0h] [bp-20h] BYREF
  __int64 v7; // [sp+4h] [bp-1Ch]
  int v8; // [sp+Ch] [bp-14h]
  _DWORD *v9; // [sp+10h] [bp-10h]

  v3 = *a2;
  v8 = *((_DWORD *)a2 + 2);
  v9 = &v6;
  v6 = &off_22C90C;
  v7 = v3;
  sub_112250(&v6, a1);
  if ( &v6 == v9 )
  {
    v4 = 4;
    goto LABEL_5;
  }
  if ( v9 )
  {
    v4 = 5;
LABEL_5:
    (*(void (**)(void))(*v9 + 4 * v4))();
  }
  return a1;
}


// ======================================================================
