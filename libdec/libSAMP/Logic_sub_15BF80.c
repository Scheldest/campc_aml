// ADDR: 0x15c186
// SYMBOL: sub_15C186
bool __fastcall sub_15C186(std::__fs::filesystem::path *a1)
{
  int v1; // r0
  unsigned __int8 v3; // [sp+0h] [bp-10h] BYREF

  if ( ((1 << *((_BYTE *)a1 + 49)) & 0x13) != 0 )
  {
    std::__fs::filesystem::__status((std::__fs::filesystem *)&v3, a1, 0);
    v1 = v3;
  }
  else
  {
    v1 = *((unsigned __int8 *)a1 + 48);
  }
  return v1 == 1;
}


// ======================================================================
// ADDR: 0x15cb5c
// SYMBOL: sub_15CB5C
int __fastcall sub_15CB5C(int a1, int a2, int *a3, int *a4, _BYTE *a5)
{
  int v5; // r11
  unsigned int v6; // r5
  unsigned int v8; // r4
  unsigned int v10; // r0
  unsigned int v11; // r8
  int v12; // r1
  int *v13; // r6
  unsigned int v14; // r0
  unsigned int v15; // r1
  int result; // r0
  int v17; // r0
  float v18; // s0
  unsigned int v19; // s2
  float v20; // s2
  int v21; // r8
  _BOOL4 v22; // r5
  float v23; // r0
  std::__ndk1 *v24; // r1
  unsigned int v25; // r0
  unsigned int v26; // r1
  int v27; // r0
  int *v28; // r1
  unsigned int v29; // r0
  unsigned int v30; // r1

  v6 = *(_DWORD *)(a2 + 4);
  v8 = *a3;
  if ( v6 )
  {
    v10 = ((v6 - ((v6 >> 1) & 0x55555555)) & 0x33333333) + (((v6 - ((v6 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v11 = (16843009 * ((v10 + (v10 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v11 > 1 )
    {
      v5 = *a3;
      if ( v8 >= v6 )
      {
        sub_221798(v8, v6);
        v5 = v12;
      }
    }
    else
    {
      v5 = (v6 - 1) & v8;
    }
    v13 = *(int **)(*(_DWORD *)a2 + 4 * v5);
    if ( v13 )
    {
      while ( 1 )
      {
        v13 = (int *)*v13;
        if ( !v13 )
          break;
        v14 = v13[1];
        if ( v14 != v8 )
        {
          if ( v11 > 1 )
          {
            if ( v14 >= v6 )
            {
              sub_221798(v14, v6);
              v14 = v15;
            }
          }
          else
          {
            v14 &= v6 - 1;
          }
          if ( v14 != v5 )
            break;
        }
        if ( v13[2] == v8 )
        {
          result = 0;
          goto LABEL_38;
        }
      }
    }
  }
  v13 = (int *)operator new(0x10u);
  v17 = *(_DWORD *)(a2 + 12) + 1;
  v18 = *(float *)(a2 + 16);
  *v13 = 0;
  v13[1] = v8;
  v19 = v17;
  LOBYTE(v17) = *a5;
  v20 = (float)v19;
  v13[2] = *a4;
  *((_BYTE *)v13 + 12) = v17;
  if ( v6 && (float)(v18 * (float)v6) >= v20 )
  {
    v8 = v5;
  }
  else
  {
    v21 = 2 * v6;
    v22 = v6 < 3 || (v6 & (v6 - 1)) != 0;
    v23 = ceilf(v20 / v18);
    v24 = (std::__ndk1 *)(v22 | v21);
    v25 = (unsigned int)v23;
    if ( (v22 | (unsigned int)v21) < v25 )
      v24 = (std::__ndk1 *)v25;
    sub_15CD14(a2, v24);
    v6 = *(_DWORD *)(a2 + 4);
    if ( (v6 & (v6 - 1)) != 0 )
    {
      if ( v8 >= v6 )
      {
        sub_221798(v8, *(_DWORD *)(a2 + 4));
        v8 = v26;
      }
    }
    else
    {
      v8 &= v6 - 1;
    }
  }
  v27 = *(_DWORD *)a2;
  v28 = *(int **)(*(_DWORD *)a2 + 4 * v8);
  if ( v28 )
  {
    *v13 = *v28;
    *v28 = (int)v13;
  }
  else
  {
    *v13 = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 8) = v13;
    *(_DWORD *)(v27 + 4 * v8) = a2 + 8;
    if ( *v13 )
    {
      v29 = *(_DWORD *)(*v13 + 4);
      if ( (v6 & (v6 - 1)) != 0 )
      {
        if ( v29 >= v6 )
        {
          sub_221798(v29, v6);
          v29 = v30;
        }
      }
      else
      {
        v29 &= v6 - 1;
      }
      *(_DWORD *)(*(_DWORD *)a2 + 4 * v29) = v13;
    }
  }
  ++*(_DWORD *)(a2 + 12);
  result = 1;
LABEL_38:
  *(_BYTE *)(a1 + 4) = result;
  *(_DWORD *)a1 = v13;
  return result;
}


// ======================================================================
