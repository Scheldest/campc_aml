// ADDR: 0xfc90c
// SYMBOL: sub_FC90C
int __fastcall sub_FC90C(_DWORD *a1, int a2, int a3)
{
  int *v5; // r0
  int v6; // r9
  char *v7; // r4
  int *v8; // r5
  int v9; // r0
  char buf[1024]; // [sp+4h] [bp-41Ch] BYREF
  int v12; // [sp+404h] [bp-1Ch]

  v5 = (int *)_errno(_stack_chk_guard);
  v6 = *v5;
  v7 = buf;
  v8 = v5;
  v9 = strerror_r(a3, buf, 0x400u);
  if ( v9 )
  {
    if ( v9 == -1 )
      v9 = *v8;
    if ( v9 != 22 )
      abort();
    v7 = &byte_4FDB8;
  }
  if ( !*v7 )
  {
    v7 = buf;
    sub_FCF18(buf);
  }
  *v8 = v6;
  sub_5FBF8(a1, v7);
  return v12;
}


// ======================================================================
