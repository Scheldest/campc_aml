// ADDR: 0x219fb0
// SYMBOL: sub_219FB0
_DWORD *__fastcall sub_219FB0(unsigned __int8 **a1, int a2, int a3)
{
  __int64 v6; // r0
  __int64 v7; // r4
  bool v8; // zf
  _DWORD *result; // r0
  __int64 v10; // [sp+4h] [bp-24h] BYREF

  LODWORD(v6) = sub_215BB4((unsigned __int8 **)&v10, a1, 1);
  v7 = v10;
  v8 = (_DWORD)v10 == HIDWORD(v10);
  if ( (_DWORD)v10 != HIDWORD(v10) )
  {
    v6 = *(_QWORD *)a1;
    v8 = (_DWORD)v6 == HIDWORD(v6);
  }
  if ( v8 || *(_BYTE *)v6 != 69 )
    return 0;
  *a1 = (unsigned __int8 *)(v6 + 1);
  result = sub_216EF0((int)(a1 + 102), 24);
  result[2] = a2;
  result[3] = a3;
  *((_QWORD *)result + 2) = v7;
  *result = &off_232F9C;
  result[1] = 16843077;
  return result;
}


// ======================================================================
// ADDR: 0x21a038
// SYMBOL: sub_21A038
_DWORD *__fastcall sub_21A038(int a1, int *a2)
{
  _DWORD *result; // r0
  int v4; // r1

  result = sub_216EF0(a1 + 408, 12);
  *result = &off_232FD4;
  result[1] = 16843073;
  v4 = *a2;
  if ( *a2 )
    LOBYTE(v4) = 1;
  *((_BYTE *)result + 8) = v4;
  return result;
}


// ======================================================================
// ADDR: 0x21a3dc
// SYMBOL: sub_21A3DC
bool __fastcall sub_21A3DC(int a1)
{
  bool v1; // cf

  v1 = (unsigned int)(a1 - 48) >= 0xA;
  if ( (unsigned int)(a1 - 48) >= 0xA )
    v1 = (unsigned int)(a1 - 97) >= 6;
  return !v1 || (unsigned int)(a1 - 65) < 6;
}


// ======================================================================
