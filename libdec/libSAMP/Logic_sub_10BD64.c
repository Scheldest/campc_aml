// ADDR: 0x10c50a
// SYMBOL: sub_10C50A
int __fastcall sub_10C50A(int a1, float *a2, unsigned __int16 *a3, __int16 *a4)
{
  int v4; // r8
  unsigned int v5; // r9
  __int16 *v6; // r5
  unsigned int v7; // r4
  float *v8; // r10
  unsigned int v9; // r0
  unsigned int v10; // r5
  int v11; // r1
  int *v12; // r6
  unsigned int v13; // r1
  unsigned int v14; // r0
  float *v15; // r11
  unsigned int v16; // r10
  unsigned int v17; // r1
  int result; // r0
  int v19; // r4
  float v20; // s0
  __int64 v21; // r0
  __int16 v22; // r3
  int v23; // s2
  float v24; // s2
  int v25; // r8
  int v26; // r5
  _BOOL4 v27; // r5
  float v28; // r0
  std::__ndk1 *v29; // r1
  unsigned int v30; // r0
  unsigned int v31; // r1
  float v32; // r0
  int *v33; // r1
  unsigned int v34; // r0
  unsigned int v35; // r1

  v5 = *((_DWORD *)a2 + 1);
  v6 = a4;
  v7 = *a3;
  v8 = a2;
  if ( v5 )
  {
    v9 = ((v5 - ((v5 >> 1) & 0x55555555)) & 0x33333333) + (((v5 - ((v5 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v10 = (16843009 * ((v9 + (v9 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v10 > 1 )
    {
      v4 = *a3;
      if ( v5 <= v7 )
      {
        sub_221798(v7, v5);
        v4 = v11;
      }
    }
    else
    {
      v4 = (v5 - 1) & v7;
    }
    v12 = *(int **)(*(_DWORD *)v8 + 4 * v4);
    if ( v12 )
    {
      v13 = v5 - 1;
      while ( 1 )
      {
        v12 = (int *)*v12;
        if ( !v12 )
          break;
        v14 = v12[1];
        if ( v14 != v7 )
        {
          if ( v10 > 1 )
          {
            if ( v14 >= v5 )
            {
              v15 = v8;
              v16 = v13;
              sub_221798(v14, v5);
              v14 = v17;
              v13 = v16;
              v8 = v15;
            }
          }
          else
          {
            v14 &= v13;
          }
          if ( v14 != v4 )
            break;
        }
        if ( *((unsigned __int16 *)v12 + 4) == v7 )
        {
          result = 0;
          v19 = a1;
          goto LABEL_40;
        }
      }
    }
    v6 = a4;
  }
  v12 = (int *)operator new(0x14u);
  v20 = v8[4];
  v21 = *(_QWORD *)(v6 + 2);
  v22 = *v6;
  v23 = *((_DWORD *)v8 + 3) + 1;
  *v12 = 0;
  v12[1] = v7;
  v24 = (float)(unsigned int)v23;
  *(_QWORD *)(v12 + 3) = v21;
  *((_WORD *)v12 + 4) = v22;
  if ( v5 && (float)(v20 * (float)v5) >= v24 )
  {
    v7 = v4;
  }
  else
  {
    v25 = 2 * v5;
    if ( v5 < 3 )
    {
      v27 = 1;
    }
    else
    {
      v26 = v5 & (v5 - 1);
      v27 = v26 != 0;
    }
    v28 = ceilf(v24 / v20);
    v29 = (std::__ndk1 *)(v27 | v25);
    v30 = (unsigned int)v28;
    if ( (v27 | (unsigned int)v25) < v30 )
      v29 = (std::__ndk1 *)v30;
    sub_10C272((std::__ndk1 *)v8, v29);
    v5 = *((_DWORD *)v8 + 1);
    if ( (v5 & (v5 - 1)) != 0 )
    {
      if ( v5 <= v7 )
      {
        sub_221798(v7, *((_DWORD *)v8 + 1));
        v7 = v31;
      }
    }
    else
    {
      v7 &= v5 - 1;
    }
  }
  v32 = *v8;
  v33 = *(int **)(*(_DWORD *)v8 + 4 * v7);
  if ( v33 )
  {
    v19 = a1;
    *v12 = *v33;
    *v33 = (int)v12;
  }
  else
  {
    *v12 = *((_DWORD *)v8 + 2);
    *((_DWORD *)v8 + 2) = v12;
    *(_DWORD *)(LODWORD(v32) + 4 * v7) = v8 + 2;
    v19 = a1;
    if ( *v12 )
    {
      v34 = *(_DWORD *)(*v12 + 4);
      if ( (v5 & (v5 - 1)) != 0 )
      {
        if ( v34 >= v5 )
        {
          sub_221798(v34, v5);
          v34 = v35;
        }
      }
      else
      {
        v34 &= v5 - 1;
      }
      *(_DWORD *)(*(_DWORD *)v8 + 4 * v34) = v12;
    }
  }
  ++*((_DWORD *)v8 + 3);
  result = 1;
LABEL_40:
  *(_BYTE *)(v19 + 4) = result;
  *(_DWORD *)v19 = v12;
  return result;
}


// ======================================================================
