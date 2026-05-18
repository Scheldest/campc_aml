
// Address: 0x199c08
// Original: j__ZN9CTimeInfo18FindOtherTimeModelEPKc
// Demangled: CTimeInfo::FindOtherTimeModel(char const*)
// attributes: thunk
int __fastcall CTimeInfo::FindOtherTimeModel(CTimeInfo *this, const char *a2)
{
  return _ZN9CTimeInfo18FindOtherTimeModelEPKc(this, a2);
}


// ============================================================

// Address: 0x384d00
// Original: _ZN9CTimeInfo18FindOtherTimeModelEPKc
// Demangled: CTimeInfo::FindOtherTimeModel(char const*)
int __fastcall CTimeInfo::FindOtherTimeModel(CTimeInfo *this, const char *a2)
{
  char *v3; // r0
  const char *v4; // r1
  int UppercaseKey; // r9
  int result; // r0
  int v7; // r1
  int v8; // r5
  float v9; // r6
  char haystack[24]; // [sp+4h] [bp-34h] BYREF

  strcpy(haystack, a2);
  v3 = strstr(haystack, (const char *)&dword_384DB0);
  if ( v3 )
  {
    v4 = (_BYTE *)&unk_79645F;
  }
  else
  {
    v3 = strstr(haystack, (const char *)&dword_384DB4);
    if ( !v3 )
      return 0;
    v4 = (const char *)&unk_746E5F;
  }
  *(_DWORD *)v3 = v4;
  UppercaseKey = CKeyGen::GetUppercaseKey((CKeyGen *)haystack, v4);
  result = 0;
  v7 = 0;
  do
  {
    v8 = v7;
    v9 = CModelInfo::ms_modelInfoPtrs[v7];
    if ( v9 != 0.0 )
    {
      result = (*(int (__fastcall **)(float))(*(_DWORD *)LODWORD(v9) + 24))(COERCE_FLOAT(LODWORD(v9)));
      if ( result )
      {
        if ( *(_DWORD *)(LODWORD(v9) + 4) == UppercaseKey )
        {
          LOWORD(v7) = v8;
          goto LABEL_14;
        }
      }
      else
      {
        result = 0;
      }
    }
    v7 = v8 + 1;
  }
  while ( v8 < 19999 );
  if ( v8 == 19999 )
    return 0;
LABEL_14:
  *((_WORD *)this + 1) = v7;
  return result;
}


// ============================================================
