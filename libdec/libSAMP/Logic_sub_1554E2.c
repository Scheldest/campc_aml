// ADDR: 0x152cf8
// SYMBOL: sub_152CF8
int __fastcall sub_152CF8(int a1, int a2, int a3, __int64 *a4, int a5, int a6)
{
  int result; // r0
  int v11; // r4
  __int64 i; // r8
  _DWORD *v13; // r5
  bool v14; // zf
  float *v15; // r0
  unsigned int v16; // r0
  unsigned int v17; // r1
  int v18; // [sp+14h] [bp-2D44h]
  _QWORD v19[1440]; // [sp+18h] [bp-2D40h] BYREF
  __int16 v20; // [sp+2D18h] [bp-40h]
  __int16 v21; // [sp+2D1Ah] [bp-3Eh]
  _BYTE v22[4]; // [sp+2D1Ch] [bp-3Ch] BYREF
  _DWORD *v23; // [sp+2D20h] [bp-38h] BYREF
  unsigned __int16 v24[26]; // [sp+2D24h] [bp-34h] BYREF

  v21 = a2;
  v20 = a3;
  if ( a6 || sub_15E55C() != a2 )
  {
    result = sub_15E580(a2);
    if ( result )
    {
      v11 = sub_1525EC((_DWORD *)a1, a2);
      result = sub_15A3E8(v11, a3, a5, a6, v19);
      v18 = result;
      if ( result )
      {
        for ( i = *a4; (_DWORD)i != HIDWORD(i); LODWORD(i) = i + 2 )
        {
          v24[0] = *(_WORD *)i;
          result = v24[0];
          if ( v24[0] )
          {
            result = sub_15426C(a1 + 12, v24);
            if ( result )
            {
              v13 = *(_DWORD **)(result + 12);
              if ( v13 )
              {
                v14 = (*(int (__fastcall **)(_DWORD))(*v13 + 8))(*(_DWORD *)(result + 12)) == 0;
                v15 = (float *)(v11 + 32);
                if ( v14 )
                {
                  v16 = *((unsigned __int8 *)v13 + 56);
                  v17 = v13[15];
                  if ( !(v16 << 31) )
                    v17 = v16 >> 1;
                  if ( v17
                    || (v14 = std::string::compare(v13 + 14, 0, -1, &byte_8F794, 0) == 0, v15 = (float *)(v11 + 32),
                                                                                          !v14) )
                  {
                    v23 = v13 + 14;
                    sub_138B9C((int)v24, dword_381A0C + 136, (int)(v13 + 14), (int)&unk_B998D, (int)&v23, (int)v22);
                    v15 = (float *)(*(_DWORD *)v24 + 32);
                  }
                }
                result = sub_1508FC(v13, a2, (int)v19, v18, *v15 * 1.15);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    std::chrono::steady_clock::now((std::chrono::steady_clock *)v19);
    result = v19[0];
    *(_QWORD *)(a1 + 64) = v19[0];
  }
  return result;
}


// ======================================================================
// ADDR: 0x17d902
// SYMBOL: sub_17D902
int __fastcall sub_17D902(int result)
{
  int v1; // r1

  v1 = *(_DWORD *)(result + 8);
  if ( v1 )
    *(_DWORD *)(result + 8) = v1 + (-v1 & 7);
  return result;
}


// ======================================================================
