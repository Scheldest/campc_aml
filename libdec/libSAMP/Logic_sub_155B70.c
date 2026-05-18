// ADDR: 0x15e6c4
// SYMBOL: sub_15E6C4
int sub_15E6C4()
{
  void *v0; // r0
  void *v1; // r4
  int v2; // r5
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v0 = *(void **)(dword_23DEF4 + 528);
  if ( v0 )
  {
    v0 = j___dynamic_cast(
           v0,
           (const struct __class_type_info *)&`typeinfo for'RakClientInterface,
           (const struct __class_type_info *)&`typeinfo for'RakPeer,
           -2);
    v1 = v0;
  }
  else
  {
    v1 = 0;
  }
  v2 = sub_17E2E4(v0);
  (*(void (__fastcall **)(_DWORD *, void *, _DWORD))(*(_DWORD *)v1 + 100))(v4, v1, 0);
  return sub_182BE8(v1, v4[0], v4[1]) + v2;
}


// ======================================================================
