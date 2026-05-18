// ADDR: 0xf53e0
// SYMBOL: sub_F53E0
int sub_F53E0(int a1, ...)
{
  int v2; // [sp+0h] [bp-F4h] BYREF
  _BYTE v3[224]; // [sp+4h] [bp-F0h] BYREF
  _BYTE v4[16]; // [sp+E4h] [bp-10h] BYREF
  int vars8; // [sp+FCh] [bp+8h] BYREF
  va_list va; // [sp+FCh] [bp+8h]
  int varsC; // [sp+100h] [bp+Ch]
  int vars10; // [sp+104h] [bp+10h]
  int v9; // [sp+108h] [bp+14h]
  int v10; // [sp+10Ch] [bp+18h]
  int v11; // [sp+110h] [bp+1Ch]
  int v12; // [sp+114h] [bp+20h]
  int v13; // [sp+118h] [bp+24h]
  int v14; // [sp+11Ch] [bp+28h]
  int v15; // [sp+120h] [bp+2Ch]
  int v16; // [sp+124h] [bp+30h]
  int v17; // [sp+128h] [bp+34h]
  int v18; // [sp+12Ch] [bp+38h]
  int v19; // [sp+130h] [bp+3Ch]
  int v20; // [sp+134h] [bp+40h]
  int v21; // [sp+138h] [bp+44h]
  int v22; // [sp+13Ch] [bp+48h]
  int v23; // [sp+140h] [bp+4Ch]
  int v24; // [sp+144h] [bp+50h]
  int v25; // [sp+148h] [bp+54h]
  int v26; // [sp+14Ch] [bp+58h]
  int v27; // [sp+150h] [bp+5Ch]
  int v28; // [sp+154h] [bp+60h]
  int v29; // [sp+158h] [bp+64h]
  int v30; // [sp+15Ch] [bp+68h]
  int v31; // [sp+160h] [bp+6Ch]
  int v32; // [sp+164h] [bp+70h]
  int v33; // [sp+168h] [bp+74h]
  int v34; // [sp+16Ch] [bp+78h]
  int v35; // [sp+170h] [bp+7Ch]
  int v36; // [sp+174h] [bp+80h]
  int v37; // [sp+178h] [bp+84h]
  int v38; // [sp+17Ch] [bp+88h]
  int v39; // [sp+180h] [bp+8Ch]
  int v40; // [sp+184h] [bp+90h]
  int v41; // [sp+188h] [bp+94h]
  int v42; // [sp+18Ch] [bp+98h]
  int v43; // [sp+190h] [bp+9Ch]
  int v44; // [sp+194h] [bp+A0h]
  int v45; // [sp+198h] [bp+A4h]
  int v46; // [sp+19Ch] [bp+A8h]
  int v47; // [sp+1A0h] [bp+ACh]
  int v48; // [sp+1A4h] [bp+B0h]
  int v49; // [sp+1A8h] [bp+B4h]
  int v50; // [sp+1ACh] [bp+B8h]
  int v51; // [sp+1B0h] [bp+BCh]
  int v52; // [sp+1B4h] [bp+C0h]
  int v53; // [sp+1B8h] [bp+C4h]
  int v54; // [sp+1BCh] [bp+C8h]
  int v55; // [sp+1C0h] [bp+CCh]
  int v56; // [sp+1C4h] [bp+D0h]
  int v57; // [sp+1C8h] [bp+D4h]
  int v58; // [sp+1CCh] [bp+D8h]
  int v59; // [sp+1D0h] [bp+DCh]
  int v60; // [sp+1D4h] [bp+E0h]
  int v61; // [sp+1D8h] [bp+E4h]
  va_list va1; // [sp+1DCh] [bp+E8h] BYREF

  va_start(va1, a1);
  va_start(va, a1);
  vars8 = va_arg(va1, _DWORD);
  varsC = va_arg(va1, _DWORD);
  vars10 = va_arg(va1, _DWORD);
  v9 = va_arg(va1, _DWORD);
  v10 = va_arg(va1, _DWORD);
  v11 = va_arg(va1, _DWORD);
  v12 = va_arg(va1, _DWORD);
  v13 = va_arg(va1, _DWORD);
  v14 = va_arg(va1, _DWORD);
  v15 = va_arg(va1, _DWORD);
  v16 = va_arg(va1, _DWORD);
  v17 = va_arg(va1, _DWORD);
  v18 = va_arg(va1, _DWORD);
  v19 = va_arg(va1, _DWORD);
  v20 = va_arg(va1, _DWORD);
  v21 = va_arg(va1, _DWORD);
  v22 = va_arg(va1, _DWORD);
  v23 = va_arg(va1, _DWORD);
  v24 = va_arg(va1, _DWORD);
  v25 = va_arg(va1, _DWORD);
  v26 = va_arg(va1, _DWORD);
  v27 = va_arg(va1, _DWORD);
  v28 = va_arg(va1, _DWORD);
  v29 = va_arg(va1, _DWORD);
  v30 = va_arg(va1, _DWORD);
  v31 = va_arg(va1, _DWORD);
  v32 = va_arg(va1, _DWORD);
  v33 = va_arg(va1, _DWORD);
  v34 = va_arg(va1, _DWORD);
  v35 = va_arg(va1, _DWORD);
  v36 = va_arg(va1, _DWORD);
  v37 = va_arg(va1, _DWORD);
  v38 = va_arg(va1, _DWORD);
  v39 = va_arg(va1, _DWORD);
  v40 = va_arg(va1, _DWORD);
  v41 = va_arg(va1, _DWORD);
  v42 = va_arg(va1, _DWORD);
  v43 = va_arg(va1, _DWORD);
  v44 = va_arg(va1, _DWORD);
  v45 = va_arg(va1, _DWORD);
  v46 = va_arg(va1, _DWORD);
  v47 = va_arg(va1, _DWORD);
  v48 = va_arg(va1, _DWORD);
  v49 = va_arg(va1, _DWORD);
  v50 = va_arg(va1, _DWORD);
  v51 = va_arg(va1, _DWORD);
  v52 = va_arg(va1, _DWORD);
  v53 = va_arg(va1, _DWORD);
  v54 = va_arg(va1, _DWORD);
  v55 = va_arg(va1, _DWORD);
  v56 = va_arg(va1, _DWORD);
  v57 = va_arg(va1, _DWORD);
  v58 = va_arg(va1, _DWORD);
  v59 = va_arg(va1, _DWORD);
  v60 = va_arg(va1, _DWORD);
  v61 = va_arg(va1, _DWORD);
  v2 = a1;
  j_memcpy(v3, va, sizeof(v3));
  return ((int (__fastcall *)(_BYTE *, int *, int *, int *))sub_F5498)(v4, &dword_240084, &v2, &v2);
}


// ======================================================================
// ADDR: 0xf5428
// SYMBOL: sub_F5428
int *__fastcall sub_F5428(unsigned int a1)
{
  int v1; // r3
  int *v2; // r1
  int *v3; // r2
  int v4; // r2

  v1 = dword_240088;
  if ( !dword_240088 )
    return 0;
  v2 = &dword_240088;
  do
  {
    v3 = (int *)v1;
    if ( *(_DWORD *)(v1 + 16) < a1 )
      v3 = (int *)(v1 + 4);
    v4 = *v3;
    if ( *(_DWORD *)(v1 + 16) >= a1 )
      v2 = (int *)v1;
    v1 = v4;
  }
  while ( v4 );
  if ( v2 == &dword_240088 || v2[4] > a1 )
    return 0;
  else
    return v2 + 5;
}


// ======================================================================
