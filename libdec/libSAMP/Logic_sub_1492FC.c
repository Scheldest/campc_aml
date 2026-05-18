// ADDR: 0xf9e64
// SYMBOL: sub_F9E64
bool __fastcall sub_F9E64(int a1, unsigned __int8 *a2)
{
  if ( a2 )
  {
    (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a2 + 4))(a2);
    byte_247288[a2[96]] = 0;
  }
  return a2 != 0;
}


// ======================================================================
