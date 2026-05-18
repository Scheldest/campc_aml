
// Address: 0x2a7530
// Original: _ZN16SaveSelectScreen6RenderEi
// Demangled: SaveSelectScreen::Render(int)
// attributes: thunk
int __fastcall SaveSelectScreen::Render(CharSelectScreen *this, int a2)
{
  return j_CharSelectScreen::Render(this, a2);
}


// ============================================================

// Address: 0x2a7534
// Original: _ZN16SaveSelectScreen22IsSaveLoadDeleteScreenEv
// Demangled: SaveSelectScreen::IsSaveLoadDeleteScreen(void)
int __fastcall SaveSelectScreen::IsSaveLoadDeleteScreen(SaveSelectScreen *this)
{
  return 1;
}


// ============================================================

// Address: 0x2a7538
// Original: _ZN16SaveSelectScreenD0Ev
// Demangled: SaveSelectScreen::~SaveSelectScreen()
void __fastcall SaveSelectScreen::~SaveSelectScreen(SaveSelectScreen *this)
{
  void *v1; // r0

  SelectScreen::~SelectScreen(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2a7550
// Original: _ZN16SaveSelectScreen13SaveSelection8GetColorEv
// Demangled: SaveSelectScreen::SaveSelection::GetColor(void)
void __fastcall SaveSelectScreen::SaveSelection::GetColor(SaveSelectScreen::SaveSelection *this, int a2)
{
  if ( *(_BYTE *)(a2 + 12) || (*(_DWORD *)(a2 + 8) | 1) == 7 && UseCloudSaves )
    CRGBA::CRGBA(this, 0xFFu, 0xFFu, 0x80u, 0xFFu);
  else
    CRGBA::CRGBA(this, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
}


// ============================================================

// Address: 0x2a7590
// Original: _ZN16SaveSelectScreen13SaveSelection8GetTitleEv
// Demangled: SaveSelectScreen::SaveSelection::GetTitle(void)
__int16 *__fastcall SaveSelectScreen::SaveSelection::GetTitle(SaveSelectScreen::SaveSelection *this)
{
  const unsigned __int16 *v2; // r0
  int v3; // r0
  int v4; // r0
  unsigned __int16 *v5; // r1
  unsigned __int16 *v6; // r4
  unsigned __int16 v8[6]; // [sp+4h] [bp-Ch] BYREF

  if ( *((_BYTE *)this + 12) )
  {
    v2 = (const unsigned __int16 *)CText::Get((CText *)TheText, (CKeyGen *)"MOB_ASV");
    *(_DWORD *)v8 = 32;
    GxtCharStrcpy(SaveSelectScreen::SaveSelection::GetTitle(void)::chars, v2);
    GxtCharStrcat(SaveSelectScreen::SaveSelection::GetTitle(void)::chars, v8);
    v3 = *((_DWORD *)this + 2);
    if ( CGenericGameStorage::ms_Slots[v3] )
    {
      if ( (v3 | 1) == 7 && UseCloudSaves )
      {
        if ( IsSCCloudAvailable() == 1 )
          sub_5E6BC0(&gString, "FEM_CS%d", *((_DWORD *)this + 2) + 1);
        else
          strcpy((char *)&gString, "FEM_NC");
      }
      else
      {
        sub_5E6BC0(&gString, "FEM_SL%d", v3 + 1);
      }
      v5 = (unsigned __int16 *)CText::Get((CText *)TheText, (CKeyGen *)&gString);
    }
    else
    {
      v5 = (unsigned __int16 *)&CGenericGameStorage::ms_SlotFileName[260 * v3];
    }
    v6 = SaveSelectScreen::SaveSelection::GetTitle(void)::chars;
    GxtCharStrcat(SaveSelectScreen::SaveSelection::GetTitle(void)::chars, v5);
    return (__int16 *)v6;
  }
  v4 = *((_DWORD *)this + 2);
  if ( !CGenericGameStorage::ms_Slots[v4] )
    return &CGenericGameStorage::ms_SlotFileName[260 * v4];
  if ( (v4 | 1) == 7 && UseCloudSaves )
  {
    if ( IsSCCloudAvailable() == 1 )
      sub_5E6BC0(&gString, "FEM_CS%d", *((_DWORD *)this + 2) + 1);
    else
      strcpy((char *)&gString, "FEM_NC");
  }
  else
  {
    sub_5E6BC0(&gString, "FEM_SL%d", v4 + 1);
  }
  return (__int16 *)j_CText::Get((CText *)TheText, (CKeyGen *)&gString);
}


// ============================================================
