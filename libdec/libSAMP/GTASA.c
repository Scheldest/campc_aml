// ADDR: 0xf10fc
// SYMBOL: Java_com_arizona_game_GTASA_initSAMP
int __fastcall Java_com_arizona_game_GTASA_initSAMP(int a1, int a2)
{
  char *v4; // r0
  _DWORD *v5; // r0
  int v6; // r0
  double v7; // d16
  int v8; // r6
  void *v10[3]; // [sp+4h] [bp-2Ch] BYREF
  double v11; // [sp+10h] [bp-20h]
  void *v12; // [sp+18h] [bp-18h]

  v4 = (char *)sub_F97EC(a1);
  v5 = sub_DC6DC(v10, v4);
  v6 = std::string::append((int)v5, "/SAMP/settings.json");
  v7 = *(double *)v6;
  v12 = *(void **)(v6 + 8);
  v11 = v7;
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 8) = 0;
  sub_E3F90();
  if ( LOBYTE(v11) << 31 )
    operator delete(v12);
  if ( LOBYTE(v10[0]) << 31 )
    operator delete(v10[2]);
  v8 = operator new(0x88u);
  sub_17BE14(v8, a1, a2);
  dword_381BF4 = v8;
  return sub_ED150(3);
}


// ======================================================================
// ADDR: 0xf55b4
// SYMBOL: Java_com_arizona_game_GTASA_SetRefreshRate
int Java_com_arizona_game_GTASA_SetRefreshRate()
{
  return sub_2242C8(6, "AXL", "Change frame rate limit from java is not supported - REMOVE THIS CODE FROM JAVA!!!");
}


// ======================================================================
// ADDR: 0x119394
// SYMBOL: Java_com_arizona_game_GTASA_InitModloaderConfig
int *__fastcall Java_com_arizona_game_GTASA_InitModloaderConfig(int a1, int a2, int a3)
{
  int *result; // r0

  _android_log_print(3, "AXL", "Modloader state %d", a3);
  result = &dword_238E8C;
  dword_238E8C = a3;
  return result;
}


// ======================================================================
// ADDR: 0x17cc88
// SYMBOL: Java_com_arizona_game_GTASA_OnInputEnd
void __fastcall Java_com_arizona_game_GTASA_OnInputEnd(int a1, int a2, int a3)
{
  int (__fastcall *v3)(int, int, char *); // r3
  char *v4; // r0
  _DWORD *v5; // r0
  void *v6; // r1
  void *v7; // r2
  int v8; // r5
  void *v9[3]; // [sp+4h] [bp-24h] BYREF
  void *v10[2]; // [sp+10h] [bp-18h] BYREF
  void *v11; // [sp+18h] [bp-10h]
  char v12[9]; // [sp+1Fh] [bp-9h] BYREF

  if ( dword_23DEEC )
  {
    if ( *(_BYTE *)(dword_381BF4 + 133) )
    {
      if ( !a3 )
        return;
    }
    else if ( !a3 || !*(_BYTE *)(dword_381BF4 + 132) )
    {
      return;
    }
    v3 = *(int (__fastcall **)(int, int, char *))(*(_DWORD *)a1 + 676);
    v12[0] = 1;
    v4 = (char *)v3(a1, a3, v12);
    v5 = sub_DC6DC(v10, v4);
    v7 = v10[1];
    v6 = v11;
    v8 = *(_DWORD *)(dword_23DEEC + 88);
    if ( ((int)v10[0] & 1) == 0 )
    {
      v6 = (char *)v5 + 1;
      v7 = (void *)(LOBYTE(v10[0]) >> 1);
    }
    sub_164DB4(v9, (int)v6, (size_t)v7);
    sub_12F968(v8);
    if ( LOBYTE(v9[0]) << 31 )
      operator delete(v9[2]);
    if ( LOBYTE(v10[0]) << 31 )
      operator delete(v11);
  }
}


// ======================================================================
// ADDR: 0x17cd3c
// SYMBOL: Java_com_arizona_game_GTASA_InitSetting
int __fastcall Java_com_arizona_game_GTASA_InitSetting(int a1, int a2, int a3, char a4, int a5)
{
  int result; // r0
  char v6; // r0
  int v7; // r1

  result = dword_23DEEC;
  if ( dword_23DEEC )
  {
    v6 = a5;
    v7 = dword_381BF4;
    if ( a5 )
      v6 = 1;
    *(_BYTE *)(dword_381BF4 + 133) = v6;
    result = dword_23DF24;
    *(_BYTE *)(v7 + 132) = a3 != 0;
    *(_BYTE *)(result + 10023341) = a4;
  }
  return result;
}


// ======================================================================
// ADDR: 0x17cd88
// SYMBOL: Java_com_arizona_game_GTASA_OnKeyboardClosed
int Java_com_arizona_game_GTASA_OnKeyboardClosed()
{
  int result; // r0

  result = dword_23DEEC;
  if ( dword_23DEEC )
  {
    if ( sub_10BDC0(dword_2631B0) )
      sub_10BDA0(dword_2631B0, 0);
    result = *(_DWORD *)(dword_23DEEC + 88);
    *(_BYTE *)(result + 144) = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x17cdc0
// SYMBOL: Java_com_arizona_game_GTASA_viewShownStatusChanged
_BYTE *__fastcall Java_com_arizona_game_GTASA_viewShownStatusChanged(int a1, int a2, int a3, int a4)
{
  _BYTE *result; // r0
  char v5; // r4
  int v6; // r5
  int v7; // r0
  int v8; // t1
  bool v9; // zf

  result = (_BYTE *)(a3 + 1);
  if ( a3 != -1 )
  {
    result = (_BYTE *)dword_381BF4;
    if ( dword_381BF4 )
    {
      if ( dword_23DEF4 )
      {
        v5 = a3;
        if ( (unsigned __int8)a3 < 0x1Cu )
        {
          v7 = dword_381BF4 + (unsigned __int8)a3;
          v8 = *(unsigned __int8 *)(v7 + 104);
          result = (_BYTE *)(v7 + 104);
          if ( v8 != a4 )
          {
            v6 = a4;
            if ( a4 )
              v6 = 1;
            *result = v6;
            v9 = (a3 & 0xFFFFFFFE) == 2;
            if ( (a3 & 0xFFFFFFFE) == 2 )
              v9 = a4 == 0;
            if ( v9 )
            {
              sub_155858(dword_381A0C);
              v6 = 0;
            }
            else if ( a3 == 25 )
            {
              sub_12A778(dword_23DEEC);
              (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(dword_23DEEC + 88) + 8))(*(_DWORD *)(dword_23DEEC + 88));
            }
            return (_BYTE *)sub_1447E4(dword_23DEF4, v5, v6);
          }
        }
        else if ( a4 )
        {
          v6 = 1;
          return (_BYTE *)sub_1447E4(dword_23DEF4, v5, v6);
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x17ce64
// SYMBOL: Java_com_arizona_game_GTASA_switchStatusChanged
unsigned __int8 *__fastcall Java_com_arizona_game_GTASA_switchStatusChanged(int a1, __int64 a2, int a3)
{
  unsigned __int8 *result; // r0
  int v5; // r1

  result = (unsigned __int8 *)(unsigned __int8)a2;
  if ( (unsigned __int8)a2 <= 0x1Bu )
  {
    result = (unsigned __int8 *)dword_381BF4;
    if ( dword_381BF4 )
    {
      if ( dword_23DEF4 )
      {
        if ( a2 == 0x100000002LL )
        {
          result = (unsigned __int8 *)*(unsigned __int8 *)(dword_381BF4 + 106);
          if ( *(_BYTE *)(dword_381BF4 + 106) )
          {
            v5 = a3;
            if ( a3 )
              v5 = 1;
            return sub_155BC4(dword_381A0C, v5);
          }
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x17ceb8
// SYMBOL: Java_com_arizona_game_GTASA_sliderValueChanged
void __fastcall Java_com_arizona_game_GTASA_sliderValueChanged(int a1, int a2, int a3, int a4, int a5)
{
  if ( (unsigned __int8)a3 <= 0x1Bu
    && dword_381BF4
    && dword_23DEF4
    && *(_BYTE *)(dword_381BF4 + (unsigned __int8)a3 + 104) )
  {
    if ( a3 == 3 )
    {
      if ( (unsigned int)(a4 - 1) <= 0x3EA )
        sub_155E80(dword_381A0C, (unsigned __int16)a4, a5);
    }
    else if ( a3 == 2 )
    {
      switch ( a4 )
      {
        case 0:
          sub_155C20(dword_381A0C, a5);
          break;
        case 1:
          sub_155CA8(dword_381A0C, a5);
          break;
        case 2:
          sub_155D58(dword_381A0C, a5);
          break;
        case 3:
          sub_155DEC(dword_381A0C, a5);
          break;
        default:
          sub_138138(a4, a5);
          break;
      }
    }
  }
}


// ======================================================================
// ADDR: 0x17cf6c
// SYMBOL: Java_com_arizona_game_GTASA_clicked
void __fastcall Java_com_arizona_game_GTASA_clicked(int a1, int a2, int a3, int a4, int a5, int a6)
{
  char v7; // r5
  int v9; // r0
  size_t v10; // r10
  size_t v11; // r9
  int v12; // r0
  char *v13; // r1
  int v14; // r6
  void *v15[10]; // [sp+8h] [bp-28h] BYREF

  if ( dword_381BF4 )
  {
    if ( dword_23DEF4 )
    {
      v7 = a3;
      if ( (unsigned __int8)a3 <= 0x1Bu )
      {
        if ( *(_BYTE *)(dword_381BF4 + (unsigned __int8)a3 + 104) )
        {
          if ( a3 == 2 )
          {
            if ( a4 == 1 )
              sub_1449A8(dword_23DEF4);
          }
          else
          {
            v9 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 684))(a1, a6);
            if ( v9 < 1 )
            {
              v11 = 0;
              v13 = &byte_8F794;
            }
            else
            {
              v10 = v9;
              v11 = 0;
              v12 = (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)a1 + 736))(a1, a6, 0);
              if ( v12 )
              {
                v13 = (char *)v12;
                v11 = v10;
              }
              else
              {
                v13 = &byte_8F794;
              }
            }
            v14 = dword_23DEF4;
            sub_164DB4(v15, (int)v13, v11);
            sub_144712(v14, v7, a4, a5, (unsigned __int8 *)v15);
            if ( LOBYTE(v15[0]) << 31 )
              operator delete(v15[2]);
          }
        }
      }
    }
  }
}


// ======================================================================
// ADDR: 0x17d054
// SYMBOL: Java_com_arizona_game_GTASA_onDialogResponse
void __fastcall Java_com_arizona_game_GTASA_onDialogResponse(int a1, int a2, __int16 a3, char a4, __int16 a5, int a6)
{
  int v9; // r0
  size_t v10; // r4
  size_t v11; // r5
  int v12; // r0
  char *v13; // r1
  int v14; // r4
  void *v15; // r0
  char *v16; // r2
  void *v17[2]; // [sp+8h] [bp-28h] BYREF
  void *v18; // [sp+10h] [bp-20h]

  if ( dword_381BF4 && dword_23DEF4 )
  {
    v9 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 684))(a1, a6);
    if ( v9 < 1 )
    {
      v11 = 0;
      v13 = &byte_8F794;
    }
    else
    {
      v10 = v9;
      v11 = 0;
      v12 = (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)a1 + 736))(a1, a6, 0);
      if ( v12 )
      {
        v13 = (char *)v12;
        v11 = v10;
      }
      else
      {
        v13 = &byte_8F794;
      }
    }
    v14 = dword_23DEF4;
    sub_164DB4(v17, (int)v13, v11);
    v15 = v17[1];
    v16 = (char *)v18;
    if ( ((int)v17[0] & 1) == 0 )
    {
      v15 = (void *)(LOBYTE(v17[0]) >> 1);
      v16 = (char *)v17 + 1;
    }
    sub_144284(v14, a3, a4, a5, (int)v16, (int)v15);
    if ( LOBYTE(v17[0]) << 31 )
      operator delete(v18);
  }
}


// ======================================================================
