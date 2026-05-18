// ADDR: 0x125af0
// SYMBOL: sub_125AF0
int __fastcall sub_125AF0(int a1, char *s)
{
  size_t v4; // r6
  int v5; // r5
  int result; // r0

  if ( !dword_263C48 )
    return _android_log_print(
             5,
             "AXL",
             "CHandlingHook: Can't Set handling name \"%s\" for %d. Custom names pool not allocated",
             s,
             a1);
  if ( a1 < 0 || dword_238E90 <= a1 )
    return _android_log_print(5, "AXL", "CHandlingHook: Can't Set handling name \"%s\" for %d. Invalid id", s, a1);
  if ( dword_238EA0 < a1 )
    dword_238EA0 = a1;
  v4 = strlen(s);
  if ( v4 >= 0xD )
    v4 = 13;
  v5 = 7 * a1;
  j_memcpy((void *)(dword_263C48 + 2 * v5), s, v4);
  result = dword_263C48 + 2 * v5;
  *(_BYTE *)(result + v4) = 0;
  return result;
}


// ======================================================================
