// ADDR: 0x101450
// SYMBOL: sub_101450
int __fastcall sub_101450(int a1, char *a2, float *a3, int a4, int a5, int a6, int a7, int a8)
{
  int result; // r0
  int v12; // r4
  float v13; // s2
  float v14; // s0
  int v15; // r4
  int v16; // r0
  int v17; // r4
  int v18; // r0
  float v19; // [sp+8h] [bp-48h] BYREF
  float v20; // [sp+Ch] [bp-44h]
  _DWORD v21[2]; // [sp+14h] [bp-3Ch] BYREF
  void *v22; // [sp+1Ch] [bp-34h]
  float v23[12]; // [sp+20h] [bp-30h] BYREF

  result = dword_23DEEC;
  if ( !dword_23DEEC )
    return result;
  sub_168738();
  v21[0] = 0;
  v21[1] = 0;
  sub_12AB98(*(_DWORD *)(*(_DWORD *)(dword_23DEEC + 84) + 24), (int)v21, (int)a3, a7, 1, 1.0);
  v12 = *(_DWORD *)(*(_DWORD *)(dword_23DEEC + 84) + 24);
  sub_DC6DC(v21, a2);
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))sub_12B090)(v23, v12, v21, (float)a4);
  if ( LOBYTE(v21[0]) << 31 )
    operator delete(v22);
  v19 = 0.0;
  v20 = 0.0;
  switch ( a8 )
  {
    case 0:
      v19 = 0.0;
      v20 = 0.0;
      break;
    case 1:
      v14 = (float)(*a3 - v23[0]) * 0.5;
      v20 = (float)(a3[1] - v23[1]) * 0.5;
      goto LABEL_9;
    case 2:
      v13 = *a3;
      v20 = 0.0;
      v14 = v13 - v23[0];
LABEL_9:
      v19 = v14;
      break;
  }
  v15 = *(_DWORD *)(*(_DWORD *)(dword_23DEEC + 84) + 24);
  sub_DC6DC(v21, a2);
  sub_12AE34(v15, (int)&v19, a6, (int)v21, 0, (float)a4);
  v16 = LOBYTE(v21[0]) << 31;
  if ( v16 )
    operator delete(v22);
  sub_16E5BC(v16);
  v17 = *(_DWORD *)(dword_23DEEC + 84);
  v18 = sub_167F70();
  return sub_12B5D0(v17, v18);
}


// ======================================================================
// ADDR: 0x101754
// SYMBOL: sub_101754
int __fastcall sub_101754(int a1, int a2, int *a3, int *a4)
{
  int result; // r0
  int v5; // r0
  int v6; // r1

  result = 0;
  if ( a2 <= 79 )
  {
    if ( a2 <= 39 )
    {
      switch ( a2 )
      {
        case 10:
          v6 = 32;
          v5 = 32;
          break;
        case 20:
          v5 = 32;
          v6 = 64;
          break;
        case 30:
          v6 = 64;
          v5 = 64;
          break;
        default:
          return result;
      }
      goto LABEL_37;
    }
    if ( a2 <= 59 )
    {
      if ( a2 == 40 )
      {
        v5 = 32;
      }
      else
      {
        if ( a2 != 50 )
          return result;
        v5 = 64;
      }
      v6 = 128;
      goto LABEL_37;
    }
    if ( a2 == 60 )
    {
      v6 = 128;
      v5 = 128;
      goto LABEL_37;
    }
    if ( a2 != 70 )
      return result;
    v5 = 32;
    goto LABEL_33;
  }
  if ( a2 <= 109 )
  {
    switch ( a2 )
    {
      case 'P':
        v5 = 64;
        break;
      case 'Z':
        v5 = 128;
        break;
      case 'd':
        v6 = 256;
        v5 = 256;
        goto LABEL_37;
      default:
        return result;
    }
LABEL_33:
    v6 = 256;
    goto LABEL_37;
  }
  if ( a2 <= 129 )
  {
    if ( a2 == 110 )
    {
      v5 = 64;
    }
    else
    {
      if ( a2 != 120 )
        return result;
      v5 = 128;
    }
    goto LABEL_36;
  }
  if ( a2 == 130 )
  {
    v5 = 256;
LABEL_36:
    v6 = 512;
    goto LABEL_37;
  }
  if ( a2 != 140 )
    return result;
  v6 = 512;
  v5 = 512;
LABEL_37:
  *a3 = v6;
  *a4 = v5;
  return 1;
}


// ======================================================================
