// ADDR: 0x114304
// SYMBOL: sub_114304
int __fastcall sub_114304(int a1, int *a2, float a3, float a4, float a5, float a6)
{
  int result; // r0
  int v9; // r1
  bool v10; // zf
  float v11; // s6
  float v12; // s4
  int v13; // r0
  int v14; // r1
  _QWORD v15[2]; // [sp+0h] [bp-10h] BYREF

  result = *(_DWORD *)(a1 + 32);
  v9 = a2[1];
  v10 = result == v9;
  if ( result != v9 )
    v10 = ++result == 0;
  if ( v10 )
  {
    v11 = (float)a2[2];
    result = *(unsigned __int8 *)(a1 + 40);
    v12 = (float)a2[3];
    *(float *)(a1 + 24) = v11;
    *(float *)(a1 + 28) = v12;
    if ( !result )
    {
      if ( v11 < a3 )
        return result;
      if ( v12 < a4 )
        return result;
      result = *a2;
      if ( *a2 != 2 )
        return result;
      std::chrono::system_clock::now((std::chrono::system_clock *)v15);
      *(_QWORD *)(a1 + 16) = v15[0];
      v13 = a2[1];
      *(_BYTE *)(a1 + 40) = 1;
      *(_DWORD *)(a1 + 32) = v13;
      return (int)sub_FA4D8(a2);
    }
    if ( *a2 != 1 )
    {
      if ( *a2 == 4 )
        *(_BYTE *)(a1 + 40) = 0;
      return (int)sub_FA4D8(a2);
    }
    std::chrono::system_clock::now((std::chrono::system_clock *)v15);
    if ( v15[0] - *(_QWORD *)(a1 + 16) >= (__int64)(unsigned int)&unk_7C830 )
    {
      std::chrono::system_clock::now((std::chrono::system_clock *)v15);
      *(_QWORD *)(a1 + 16) = v15[0];
    }
    if ( dword_23DEF4 )
    {
      v14 = *(_DWORD *)(a1 + 36);
      if ( v14 <= 3 )
      {
        if ( v14 != 1 && v14 != 2 )
          goto LABEL_27;
LABEL_26:
        sub_144460();
        goto LABEL_27;
      }
      if ( v14 != 256 )
      {
        if ( v14 != 128 && v14 != 4 )
          goto LABEL_27;
        goto LABEL_26;
      }
      sub_144A80(dword_23DEF4, 85, -1);
    }
LABEL_27:
    *(_BYTE *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 32) = -1;
    *(_DWORD *)(a1 + 36) = 0;
    return (int)sub_FA4D8(a2);
  }
  return result;
}


// ======================================================================
