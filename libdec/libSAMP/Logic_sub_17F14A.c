// ADDR: 0x180f08
// SYMBOL: sub_180F08
int __fastcall sub_180F08(
        _DWORD *a1,
        int *a2,
        _BYTE *a3,
        _DWORD *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  int v16; // r0
  int v17; // r4
  int *v18; // r8
  int v19; // r5
  int v20; // r11
  unsigned int v21; // r4
  int v22; // r0
  _BOOL4 v23; // r0
  int v24; // r0
  bool v25; // zf
  int v26; // r0
  int v27; // r5
  __int64 v29; // kr00_8
  int v30; // r4
  int v31; // r1
  int v32; // r5
  int v33; // [sp+10h] [bp-158h] BYREF
  int v34; // [sp+18h] [bp-150h] BYREF
  int v35; // [sp+1Ch] [bp-14Ch]
  _BYTE *v36; // [sp+20h] [bp-148h]
  _DWORD *v37; // [sp+24h] [bp-144h]
  int *v38; // [sp+28h] [bp-140h]
  int v39[69]; // [sp+2Ch] [bp-13Ch] BYREF
  int v40; // [sp+140h] [bp-28h] BYREF
  int v41; // [sp+144h] [bp-24h]
  int v42; // [sp+148h] [bp-20h] BYREF

  v36 = a3;
  v16 = *a2;
  v38 = a2;
  v41 = a9;
  v40 = a8;
  if ( v16 > 256 )
    return 0;
  v17 = (int)a4;
  if ( a15 )
  {
    if ( *((_BYTE *)a1 + 2045) )
      return 0;
  }
  if ( a10 )
  {
    v18 = (int *)((char *)&v34 - ((4 * *((unsigned __int16 *)a1 + 4) + 7) & 0xFFFFFFF8));
    if ( *((_WORD *)a1 + 4) )
    {
      v37 = a4;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      do
      {
        v22 = a1[208];
        if ( *(_BYTE *)(v22 + v19) && sub_17E596(v22 + v19 + 4, (int)&v40) )
          v18[v20++] = v21;
        ++v21;
        v19 += 2112;
      }
      while ( v21 < *((unsigned __int16 *)a1 + 4) );
      v17 = (int)v37;
      v23 = 0;
    }
    else
    {
      v23 = 0;
      v20 = 0;
    }
  }
  else
  {
    v18 = &v33;
    v24 = sub_1811B4(a1);
    if ( v24 != -1 && (unsigned int)(*(_DWORD *)(a1[208] + 2112 * v24 + 2108) - 1) >= 3 )
    {
      v33 = v24;
      v26 = 0;
      goto LABEL_26;
    }
    v20 = 0;
    v23 = a1[512] != 0;
  }
  v25 = v20 == 0;
  if ( !v20 )
    v25 = !v23;
  if ( v25 )
    return 0;
  if ( v23 )
  {
    v26 = 1;
LABEL_26:
    v35 = v26;
    sub_17D4A8((int)v39);
    v20 = 1;
LABEL_27:
    v37 = a1;
    do
    {
      sub_17D822(v39);
      if ( a11 )
      {
        LOBYTE(v42) = 40;
        sub_17D628((int)v39, &v42, 8, 1);
        v42 = sub_17E2E4();
        sub_17D628((int)v39, &v42, 32, 1);
      }
      LOBYTE(v42) = 20;
      sub_17D628((int)v39, &v42, 8, 1);
      LOBYTE(v42) = *v38;
      sub_17D628((int)v39, &v42, 8, 1);
      v42 = v17;
      sub_17D912(v39, &v42, 32, 1);
      if ( v17 )
      {
        sub_17D628((int)v39, v36, v17, 0);
      }
      else
      {
        v42 = 0;
        sub_17D912(v39, &v42, 32, 1);
      }
      v29 = *(_QWORD *)(v37[208] + 2112 * *v18 + 4);
      (*(void (__fastcall **)(_DWORD *, int *, int, int, int, _DWORD, _DWORD, _DWORD, int))(*v37 + 56))(
        v37,
        v39,
        a5,
        a6,
        a7,
        v29,
        HIDWORD(v29),
        0,
        v33);
      ++v18;
      --v20;
    }
    while ( v20 );
    a1 = v37;
    goto LABEL_35;
  }
  sub_17D4A8((int)v39);
  v35 = 0;
  if ( v20 )
    goto LABEL_27;
LABEL_35:
  v27 = 1;
  if ( a15 )
  {
    *((_WORD *)a1 + 1020) = v41;
    v30 = v35;
    v31 = v40;
    *((_BYTE *)a1 + 2045) = 1;
    a1[508] = a15;
    a1[509] = v31;
    *((_BYTE *)a1 + 2044) = a10;
    if ( a6 == 6 )
    {
      if ( sub_17E580((int)&v40, (int)&unk_BE944) )
      {
        v18 = (int *)(sub_17E2E4() + 1500);
      }
      else
      {
        v32 = sub_17E2E4();
        v18 = (int *)(3 * (*(int (__fastcall **)(_DWORD *, int, int))(*a1 + 128))(a1, v40, v41) + v32);
      }
    }
    if ( *((_BYTE *)a1 + 2045) )
    {
      while ( (unsigned int)(a6 - 8) < 3 || sub_17E2E4() < (unsigned int)v18 )
      {
        sub_186FEC(30);
        if ( !v30 && !sub_181240(a1, v40, v41, a10) )
        {
          v27 = 0;
          goto LABEL_47;
        }
        if ( !*((_BYTE *)a1 + 2045) )
          break;
      }
    }
    v27 = 1;
    *((_BYTE *)a1 + 2045) = 0;
  }
LABEL_47:
  sub_17D542((int)v39);
  return v27;
}


// ======================================================================
