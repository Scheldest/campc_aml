// ADDR: 0x104ba4
// SYMBOL: sub_104BA4
int __fastcall sub_104BA4(int a1, _WORD *a2, _WORD *a3, char *a4, int a5)
{
  int v5; // r6
  int result; // r0
  char v7; // r0
  char v8; // r1
  int v9; // r0
  char *v10; // r0

  v5 = (unsigned __int8)byte_25B20C;
  *a2 = word_25B210;
  *a3 = word_25B212;
  if ( !v5 )
  {
    if ( a4 )
    {
      *a4 = 0;
      v8 = dword_25B223;
      *a4 = dword_25B223;
      if ( BYTE1(dword_25B223) )
        v8 = 2;
      *a4 = v8;
      if ( BYTE2(dword_25B223) )
        v8 = 3;
      *a4 = v8;
    }
    v9 = *(_DWORD *)(a1 + 92);
    if ( v9 && *(unsigned __int8 *)(v9 + 1157) << 31 )
    {
      if ( HIBYTE(dword_25B223) )
        byte_25B216 = 1;
      if ( (_BYTE)dword_25B227 )
        byte_25B218 = 1;
      if ( BYTE1(dword_25B227) )
      {
        byte_25B215 = 1;
        *(_WORD *)(sub_103960() + 36) = 255;
      }
      if ( BYTE2(dword_25B227) )
        byte_25B21D = 1;
      if ( HIBYTE(dword_25B227) )
      {
        v10 = &byte_25B21B;
        goto LABEL_34;
      }
    }
    else
    {
      if ( HIBYTE(dword_25B223) )
        byte_25B21E = 1;
      if ( (_BYTE)dword_25B227 )
        byte_25B218 = 1;
      if ( BYTE1(dword_25B227) )
        BYTE2(dword_25B223) = 1;
      if ( HIBYTE(dword_25B227) )
      {
        v10 = &byte_25B217;
LABEL_34:
        *v10 = 1;
      }
    }
    LOWORD(result) = (unsigned __int8)byte_25B214 | (unsigned __int16)(2
                                                                     * ((unsigned __int8)(2 * byte_25B216) | (unsigned __int16)(4 * ((unsigned __int8)(2 * byte_25B218) | (unsigned __int16)(4 * ((unsigned __int8)(2 * byte_25B21A) | (unsigned __int16)(4 * ((unsigned __int8)(2 * byte_25B21C) | (unsigned __int16)(4 * ((unsigned __int8)(2 * byte_25B21E) | (unsigned __int16)(4 * ((unsigned __int8)(2 * HIBYTE(word_25B21F)) | (unsigned __int16)(4 * ((unsigned __int8)word_25B221 | (unsigned __int16)(2 * HIBYTE(word_25B221)))) | (unsigned __int8)word_25B21F)) | (unsigned __int8)byte_25B21D)) | (unsigned __int8)byte_25B21B)) | (unsigned __int8)byte_25B219)) | (unsigned __int8)byte_25B217)) | (unsigned __int8)byte_25B215));
    if ( !a5 )
      return (unsigned __int16)result;
    goto LABEL_42;
  }
  if ( a4 )
  {
    *a4 = 0;
    LOWORD(result) = dword_25B208;
    switch ( dword_25B208 )
    {
      case 0x40000:
        v7 = 3;
        break;
      case 0x20000:
        v7 = 2;
        break;
      case 0x10000:
        v7 = 1;
        break;
      default:
        goto LABEL_40;
    }
    *a4 = v7;
    LOWORD(result) = 0;
  }
  else
  {
    LOWORD(result) = dword_25B208;
  }
LABEL_40:
  if ( a5 )
  {
    byte_25B20C = 0;
LABEL_42:
    *(_QWORD *)&byte_25B214 = 0LL;
    *(_QWORD *)&byte_25B21C = 0LL;
    dword_25B227 = 0;
    dword_25B223 = 0;
  }
  return (unsigned __int16)result;
}


// ======================================================================
// ADDR: 0x106070
// SYMBOL: sub_106070
bool __fastcall sub_106070(int a1)
{
  _DWORD v3[3]; // [sp+4h] [bp-Ch] BYREF

  if ( !sub_108480(*(unsigned __int16 *)(*(_DWORD *)(a1 + 92) + 38)) )
    return 0;
  v3[0] = *(unsigned __int16 *)(*(_DWORD *)(a1 + 92) + 38);
  return sub_108590(v3) == 5;
}


// ======================================================================
// ADDR: 0x10609e
// SYMBOL: sub_10609E
bool __fastcall sub_10609E(int a1)
{
  _DWORD v3[3]; // [sp+4h] [bp-Ch] BYREF

  if ( !sub_108480(*(unsigned __int16 *)(*(_DWORD *)(a1 + 92) + 38)) )
    return 0;
  v3[0] = *(unsigned __int16 *)(*(_DWORD *)(a1 + 92) + 38);
  return sub_108590(v3) == 4;
}


// ======================================================================
