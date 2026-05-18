// ADDR: 0x14a6a0
// SYMBOL: sub_14A6A0
int __fastcall sub_14A6A0(_DWORD *dest, char *src, int a3)
{
  char *v4; // r6
  int32x4_t v13; // t2
  int v14; // r11
  int v15; // r0
  int v16; // r1
  int v17; // r0
  int v18; // r0
  int v19; // r0
  char v20; // r1
  _BOOL4 v21; // r0
  int v22; // r1
  int v23; // r1
  unsigned int v24; // s0
  unsigned int v25; // s2
  int v26; // r0
  int v27; // r1
  char v28; // r2
  int v29; // r0
  int result; // r0

  dest[1] = 0;
  v4 = src + 18;
  _Q8 = *(_OWORD *)(src + 18);
  __asm { VCEQ.F32        Q8, Q8, #0.0 }
  v13.n128_u64[0] = ~(_QWORD)_Q8;
  v13.n128_u64[1] = ~*((_QWORD *)&_Q8 + 1);
  *(int16x4_t *)&_Q8 = vmovn_s32(v13);
  if ( !((_Q8 & 1 | (2 * (BYTE2(_Q8) & 1u)) | (4 * (BYTE4(_Q8) & 1u)) | (8 * (unsigned int)WORD3(_Q8))) << 28) )
    return _android_log_print(4, "AXL", "Bad CQuaternion: File: %s - Line: %i", "remoteplayer.cpp", 608);
  v14 = *((unsigned __int8 *)dest + 284);
  if ( *(unsigned __int16 *)src == *((unsigned __int16 *)dest + 58)
    && *((unsigned __int16 *)src + 1) == *((unsigned __int16 *)dest + 59)
    && *((unsigned __int16 *)src + 2) == *((unsigned __int16 *)dest + 60)
    && *((unsigned __int16 *)src + 31) == *((unsigned __int16 *)dest + 89)
    && *((_DWORD *)src + 16) == dest[68] )
  {
    if ( src[37] != *((_BYTE *)dest + 153) )
      goto LABEL_16;
    if ( src[34] != *((_BYTE *)dest + 150) )
      goto LABEL_16;
    if ( src[35] != *((_BYTE *)dest + 151) )
      goto LABEL_16;
    v15 = *((unsigned __int8 *)dest + 152);
    v16 = (unsigned __int8)src[36];
    *((_BYTE *)dest + 284) = v16 != v15;
    if ( v16 != v15 )
      goto LABEL_16;
    v17 = memcmp(src + 6, (char *)dest + 122, 0xCu);
    *((_BYTE *)dest + 284) = v17 != 0;
    if ( v17 )
      goto LABEL_16;
    v18 = memcmp(v4, (char *)dest + 134, 0x10u);
    *((_BYTE *)dest + 284) = v18 != 0;
    if ( v18 )
      goto LABEL_16;
    v19 = memcmp(src + 50, (char *)dest + 166, 0xCu);
    v20 = v19;
    if ( v19 )
      v20 = 1;
    *((_BYTE *)dest + 284) = v20;
    if ( !v19 )
      v21 = memcmp(src + 50, (char *)dest + 166, 0xCu) != 0;
    else
LABEL_16:
      v21 = 1;
  }
  else
  {
    v21 = 1;
    *((_BYTE *)dest + 284) = 1;
  }
  v22 = dest[74];
  *((_BYTE *)dest + 284) = v21;
  if ( v22 )
  {
    v23 = *(_DWORD *)(v22 + 92);
    if ( v23 )
    {
      if ( v14 != 0 && !v21 )
        dest[70] = *(_DWORD *)(v23 + 1156);
      if ( !v14 && !v21 )
        *(_DWORD *)(v23 + 1156) = dest[70];
    }
  }
  dest[68] = *((_DWORD *)src + 16);
  dest[73] = a3;
  j_memcpy(dest + 29, src, 0x44u);
  v24 = (unsigned __int8)src[34];
  v25 = (unsigned __int8)src[35];
  *((_BYTE *)dest + 26) = 16;
  *((float *)dest + 2) = (float)v24;
  *((float *)dest + 3) = (float)v25;
  v26 = sub_F0B30();
  v27 = dest[45];
  v28 = src[37];
  dest[72] = v26;
  *((_BYTE *)dest + 27) = v28;
  if ( v27 <= -1 )
    dest[45] = 0;
  v29 = dest[74];
  if ( v29 && sub_104108(v29) && (unsigned int)*((unsigned __int8 *)dest + 27) - 3 >= 2 )
    sub_14A8B4(dest);
  result = *((unsigned __int8 *)dest + 25);
  if ( result != 17 )
  {
    result = 17;
    *((_BYTE *)dest + 25) = 17;
  }
  return result;
}


// ======================================================================
