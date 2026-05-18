// ADDR: 0xf857c
// SYMBOL: sub_F857C
bool __fastcall sub_F857C(int a1, int a2, int a3)
{
  unsigned int v3; // r6
  char *v5; // r5

  v3 = a1 - 1;
  if ( (unsigned int)(a1 - 1) <= 0x713 )
  {
    v5 = (char *)&unk_92DBE + 72 * a1;
    std::string::assign(a2, v5);
    std::string::assign(a3, v5 + 36);
  }
  return v3 < 0x714;
}


// ======================================================================
// ADDR: 0x104f28
// SYMBOL: sub_104F28
int __fastcall sub_104F28(
        __int64 a1,
        const char *a2,
        _DWORD *a3,
        unsigned __int8 *a4,
        int a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        _DWORD *a8,
        int a9,
        int a10)
{
  int v10; // r5
  int result; // r0
  __int64 v14; // kr00_8
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // [sp+8h] [bp-88h]
  int v19; // [sp+Ch] [bp-84h]
  int v20; // [sp+10h] [bp-80h]
  int v21; // [sp+14h] [bp-7Ch]
  int v22; // [sp+18h] [bp-78h]
  _DWORD v23[12]; // [sp+34h] [bp-5Ch] BYREF
  float v24; // [sp+64h] [bp-2Ch]
  float v25; // [sp+68h] [bp-28h]

  v10 = a1;
  result = *(_DWORD *)(a1 + 92);
  if ( result )
  {
    LODWORD(a1) = a5;
    v14 = a1;
    result = sub_1082F4(*(_DWORD *)(v10 + 8));
    if ( result )
    {
      result = strcasecmp(a2, "SEX");
      if ( result )
      {
        if ( !strcasecmp(a2, "CARRY") && !strcasecmp((const char *)HIDWORD(v14), "crry_prtial") )
          **(_BYTE **)(v10 + 88) = 0;
        if ( sub_F9748(dword_23DEF0, (int)a2) )
        {
          sub_F8910(v10, v23);
          sub_107188(
            &unk_B37C6,
            v17,
            COERCE_UNSIGNED_INT64(v24),
            HIDWORD(COERCE_UNSIGNED_INT64(v24)),
            COERCE_UNSIGNED_INT64(v25),
            HIDWORD(COERCE_UNSIGNED_INT64(v25)),
            v18,
            v19,
            v20,
            v21,
            v22);
          return sub_107188(
                   &unk_B37DA,
                   *(_DWORD *)(v10 + 8),
                   HIDWORD(v14),
                   a2,
                   *a3,
                   a3[1],
                   *a4,
                   *(unsigned __int8 *)v14,
                   *a6,
                   *a7,
                   *a8);
        }
        else
        {
          return sub_F9EC8(dword_23DEF0, (int)a2, v15, v16, (int)a4, a5, (int)a6, (int)a7, (int)a8, a9, a10);
        }
      }
    }
  }
  return result;
}


// ======================================================================
