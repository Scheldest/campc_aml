// ADDR: 0x14f278
// SYMBOL: sub_14F278
int __fastcall sub_14F278(int a1, unsigned int a2, int a3, const char *a4)
{
  int v5; // r0
  unsigned __int16 **v6; // r6
  _BOOL4 v10; // r11
  unsigned __int16 *v11; // r0
  unsigned __int16 *v12; // r1
  int v13; // r4
  __int64 v14; // kr08_8
  int v15; // r1
  int result; // r0
  __int16 v17; // [sp+Eh] [bp-22h] BYREF
  char v18[32]; // [sp+10h] [bp-20h] BYREF

  v5 = *(_DWORD *)(a1 + 4 * a2);
  v6 = (unsigned __int16 **)(a1 + 9216);
  v10 = 0;
  v17 = a2;
  if ( v5 )
  {
    sub_14F250(a1, a2, 0);
    if ( a2 <= 0x900 )
    {
      v11 = *(unsigned __int16 **)(a1 + 9220);
      v12 = *v6;
      if ( *v6 != v11 )
      {
        while ( *v12 != a2 )
        {
          if ( ++v12 == v11 )
          {
            v12 = *(unsigned __int16 **)(a1 + 9220);
            break;
          }
        }
      }
      v10 = v12 != v11;
    }
  }
  v13 = operator new(0x9E4u);
  sub_107C70(v13, a3, (int)a4);
  *(_DWORD *)(a1 + 4 * a2) = v13;
  if ( v10 )
  {
    *(_BYTE *)(v13 + 2528) = 0;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 9220);
    if ( (_DWORD)v14 == HIDWORD(v14) )
    {
      sub_14F668(a1 + 9216, &v17);
      v15 = *(_DWORD *)(a1 + 9220);
    }
    else
    {
      *(_WORD *)v14 = a2;
      v15 = v14 + 2;
      *(_DWORD *)(a1 + 9220) = v14 + 2;
    }
    std::__sort<std::__less<unsigned short,unsigned short> &,unsigned short *>(*v6, v15, v18);
  }
  result = *(unsigned __int8 *)(v13 + 2528);
  if ( *(_BYTE *)(v13 + 2528) )
  {
    result = strcasecmp(a4, "usebox");
    if ( !result )
    {
      result = 0;
      *(_BYTE *)(v13 + 2528) = 0;
    }
  }
  return result;
}


// ======================================================================
