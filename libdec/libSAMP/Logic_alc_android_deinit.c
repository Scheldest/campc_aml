// ADDR: 0x1ba304
// SYMBOL: sub_1BA304
void *sub_1BA304()
{
  int v0; // r0
  const char *v2; // r1
  void *pointer; // [sp+0h] [bp-8h] BYREF

  pointer = 0;
  v0 = (*(int (__fastcall **)(int, void **, char *))(*(_DWORD *)dword_382774 + 24))(
         dword_382774,
         &pointer,
         (char *)&elf_gnu_hash_indexes[1617] + 2);
  if ( v0 )
  {
    if ( v0 == -2 )
    {
      if ( !(*(int (__fastcall **)(int, void **, _DWORD))(*(_DWORD *)dword_382774 + 16))(dword_382774, &pointer, 0) )
      {
        pthread_setspecific(dword_382778, pointer);
        return pointer;
      }
      v2 = "Error attaching to current thread!";
    }
    else
    {
      v2 = "Error getting JNIEnv!";
    }
    j_al_print("GetEnv", v2);
    exit(1);
  }
  return pointer;
}


// ======================================================================
