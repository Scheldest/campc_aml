// ADDR: 0x15d888
// SYMBOL: sub_15D888
int __fastcall sub_15D888(int a1, int *a2, unsigned __int16 *a3, __int16 *a4, __int64 *a5)
{
  int v5; // r11
  unsigned int v6; // r10
  __int16 *v7; // r8
  unsigned int v8; // r6
  unsigned int v10; // r0
  unsigned int v11; // r5
  int v12; // r1
  int **v13; // r8
  unsigned int v14; // r0
  unsigned int v15; // r1
  int result; // r0
  int v17; // r4
  int v18; // r5
  __int64 v19; // r0
  __int16 v20; // r2
  _DWORD *v21; // r8
  float v22; // s0
  int v23; // s2
  float v24; // s2
  int v25; // r11
  int v26; // r4
  _BOOL4 v27; // r4
  float v28; // r0
  std::__ndk1 *v29; // r1
  unsigned int v30; // r0
  unsigned int v31; // r1
  float v32; // r0
  _DWORD *v33; // r1
  unsigned int v34; // r0
  unsigned int v35; // r1
  _DWORD v38[2]; // [sp+8h] [bp-28h] BYREF
  char v39; // [sp+10h] [bp-20h]

  v6 = a2[1];
  v7 = a4;
  v8 = *a3;
  if ( v6 )
  {
    v10 = ((v6 - ((v6 >> 1) & 0x55555555)) & 0x33333333) + (((v6 - ((v6 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v11 = (16843009 * ((v10 + (v10 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v11 > 1 )
    {
      v5 = *a3;
      if ( v6 <= v8 )
      {
        sub_221798(v8, v6);
        v5 = v12;
      }
    }
    else
    {
      v5 = (v6 - 1) & v8;
    }
    v13 = *(int ***)(*a2 + 4 * v5);
    if ( v13 )
    {
      while ( 1 )
      {
        v13 = (int **)*v13;
        if ( !v13 )
          break;
        v14 = (unsigned int)v13[1];
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
        if ( *((unsigned __int16 *)v13 + 4) == v8 )
        {
          result = 0;
          v17 = a1;
          goto LABEL_39;
        }
      }
    }
    v7 = a4;
  }
  v18 = operator new(0x14u);
  v19 = *a5;
  v20 = *v7;
  v21 = a2 + 2;
  v22 = *((float *)a2 + 4);
  v23 = a2[3] + 1;
  *(_WORD *)(v18 + 8) = v20;
  *(_QWORD *)(v18 + 12) = v19;
  v24 = (float)(unsigned int)v23;
  *(_DWORD *)v18 = 0;
  *(_DWORD *)(v18 + 4) = v8;
  *(_DWORD *)a5 = 0;
  *((_DWORD *)a5 + 1) = 0;
  v38[0] = v18;
  v38[1] = a2 + 2;
  v39 = 1;
  if ( v6 && (float)(v22 * (float)v6) >= v24 )
  {
    v8 = v5;
    v17 = a1;
  }
  else
  {
    v25 = 2 * v6;
    if ( v6 < 3 )
    {
      v27 = 1;
    }
    else
    {
      v26 = v6 & (v6 - 1);
      v27 = v26 != 0;
    }
    v28 = ceilf(v24 / v22);
    v29 = (std::__ndk1 *)(v27 | v25);
    v30 = (unsigned int)v28;
    if ( (v27 | (unsigned int)v25) < v30 )
      v29 = (std::__ndk1 *)v30;
    sub_15D5CE((std::__ndk1 *)a2, v29);
    v6 = a2[1];
    v17 = a1;
    if ( (v6 & (v6 - 1)) != 0 )
    {
      if ( v6 <= v8 )
      {
        sub_221798(v8, a2[1]);
        v8 = v31;
      }
    }
    else
    {
      v8 &= v6 - 1;
    }
  }
  v32 = *(float *)a2;
  v33 = *(_DWORD **)(*a2 + 4 * v8);
  if ( v33 )
  {
    *(_DWORD *)v18 = *v33;
    *v33 = v18;
  }
  else
  {
    *(_DWORD *)v18 = *v21;
    *v21 = v18;
    *(_DWORD *)(LODWORD(v32) + 4 * v8) = v21;
    if ( *(_DWORD *)v38[0] )
    {
      v34 = *(_DWORD *)(*(_DWORD *)v38[0] + 4);
      if ( (v6 & (v6 - 1)) != 0 )
      {
        if ( v34 >= v6 )
        {
          sub_221798(v34, v6);
          v34 = v35;
        }
      }
      else
      {
        v34 &= v6 - 1;
      }
      *(_DWORD *)(*a2 + 4 * v34) = v38[0];
    }
  }
  v13 = (int **)v38[0];
  ++a2[3];
  v38[0] = 0;
  sub_15D7C0((int)v38, 0);
  result = 1;
LABEL_39:
  *(_BYTE *)(v17 + 4) = result;
  *(_DWORD *)v17 = v13;
  return result;
}


// ======================================================================
