// ADDR: 0x107d98
// SYMBOL: sub_107D98
int __fastcall sub_107D98(int a1, const char *a2)
{
  int result; // r0

  sub_22178C(a1, 0x320u);
  strncpy((char *)a1, a2, 0x320u);
  result = *(_DWORD *)(a1 + 2444);
  *(_BYTE *)(a1 + 800) = 0;
  if ( result == 4 )
  {
    result = *(_DWORD *)(a1 + 2472);
    if ( result != -1 )
    {
      sub_108C68(result, result + 1);
      return sub_107DDC(a1);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x107ddc
// SYMBOL: sub_107DDC
char *__fastcall sub_107DDC(int a1)
{
  char *result; // r0
  char *v3; // r5
  _BYTE v4[72]; // [sp+0h] [bp-98h] BYREF
  char dest[80]; // [sp+48h] [bp-50h] BYREF

  sub_22178C((int)dest, 0x41u);
  sub_22178C((int)v4, 0x41u);
  result = _strchr_chk((const char *)a1, 58, 0x321u);
  if ( result )
  {
    v3 = result;
    result = (char *)strlen((const char *)a1);
    if ( (unsigned int)result <= 0x3F )
    {
      result = _strchr_chk((const char *)a1, 92, 0x321u);
      if ( !result )
      {
        result = _strchr_chk((const char *)a1, 47, 0x321u);
        if ( !result )
        {
          strncpy(dest, (const char *)a1, (size_t)&v3[-a1]);
          _strcpy_chk(v4, v3 + 1, 65);
          result = (char *)(*(_DWORD *)(a1 + 2472) + 1);
          if ( *(_DWORD *)(a1 + 2472) != -1 )
          {
            result = (char *)sub_1085C0(dest, v4);
            dword_2629D0[*(_DWORD *)(a1 + 2472)] = result;
          }
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x108c44
// SYMBOL: sub_108C44
int sub_108C44()
{
  int result; // r0

  result = 0;
  while ( byte_262908[result] )
  {
    if ( ++result == 200 )
      return -1;
  }
  byte_262908[result] = 1;
  return result;
}


// ======================================================================
