// ADDR: 0x17c080
// SYMBOL: sub_17C080
int sub_17C080()
{
  int v0; // r0
  _DWORD v2[3]; // [sp+4h] [bp-Ch] BYREF

  v2[0] = 0;
  v0 = (*(int (__fastcall **)(int, _DWORD *, int *))(*(_DWORD *)dword_23DF30 + 24))(
         dword_23DF30,
         v2,
         &elf_gnu_hash_indexes[1618]);
  switch ( v0 )
  {
    case -3:
      _android_log_print(4, "AXL", "Env version not supported");
      break;
    case -1:
      _android_log_print(4, "AXL", "Env JNI error");
      break;
    case -2:
      _android_log_print(4, "AXL", "Env not attached");
      if ( !(*(int (__fastcall **)(int, _DWORD *, _DWORD))(*(_DWORD *)dword_23DF30 + 16))(dword_23DF30, v2, 0) )
        return v2[0];
      _android_log_print(4, "AXL", "Env failed to attach");
      break;
    default:
      return v2[0];
  }
  return 0;
}


// ======================================================================
// ADDR: 0x17c1b8
// SYMBOL: sub_17C1B8
int __fastcall sub_17C1B8(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 248))(a1);
}


// ======================================================================
