// ADDR: 0x12fa04
// SYMBOL: sub_12FA04
bool __fastcall sub_12FA04(int a1, unsigned __int8 *a2)
{
  unsigned int v3; // r0
  unsigned int v4; // r11
  void **v5; // r0
  __int64 v6; // r4
  int v7; // r8
  unsigned int v8; // r3
  unsigned int v9; // r10
  int v10; // r9
  unsigned int v11; // r2

  v3 = *a2;
  v4 = *((_DWORD *)a2 + 1);
  if ( !(v3 << 31) )
    v4 = v3 >> 1;
  if ( v4 )
  {
    v5 = (void **)(a1 + 124);
    v6 = *(_QWORD *)(a1 + 124);
    v7 = (HIDWORD(v6) - (int)v6) / 12;
    if ( v7 == *(_DWORD *)(a1 + 84) )
    {
      v8 = v7 - 1;
      if ( v7 != 1 )
      {
        v9 = 1;
        v10 = 12;
        while ( -1431655765 * ((HIDWORD(v6) - (int)v6) >> 2) > v9 )
        {
          std::string::operator=(v6 + v10 - 12);
          v6 = *(_QWORD *)(a1 + 124);
          ++v9;
          v10 += 12;
          if ( v7 == v9 )
          {
            v11 = -1431655765 * ((HIDWORD(v6) - (int)v6) >> 2);
            v5 = (void **)(a1 + 124);
            v8 = v7 - 1;
            goto LABEL_13;
          }
        }
        v5 = (void **)(a1 + 124);
        goto LABEL_18;
      }
      v11 = 1;
LABEL_13:
      if ( v11 <= v8 )
LABEL_18:
        std::__vector_base_common<true>::__throw_out_of_range(v5);
      std::string::operator=(v6 + 12 * v8);
    }
    else if ( HIDWORD(v6) == *(_DWORD *)(a1 + 132) )
    {
      sub_126DEE(v5, (int)a2);
    }
    else
    {
      std::string::basic_string(*(_DWORD *)(a1 + 128), a2);
      *(_DWORD *)(a1 + 128) = HIDWORD(v6) + 12;
    }
  }
  return v4 != 0;
}


// ======================================================================
