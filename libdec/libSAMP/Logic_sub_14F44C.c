// ADDR: 0x107e7a
// SYMBOL: sub_107E7A
unsigned int __fastcall sub_107E7A(char *s)
{
  unsigned int result; // r0
  __int64 v3; // kr00_8
  float v4; // s16
  float v5; // s18
  float v6; // s22
  char *v7; // r0
  unsigned int v8; // r2
  int v9; // r0
  float v10; // s20
  float v11; // s16
  double v12; // d19
  double v13; // d18
  float v14; // s22
  float v15; // s18
  float v16; // r0
  float v17; // r1
  float v18; // s0
  float v20; // s12
  float v21; // s14
  float v22; // s0
  _DWORD *v23; // r0
  float v24; // s2
  __int64 v25; // [sp+0h] [bp-28h]
  __int64 v26; // [sp+8h] [bp-20h]

  if ( *((_DWORD *)s + 618) != -1 && (*((_DWORD *)s + 611) & 0xFFFFFFFE) == 4 )
  {
    result = *((_DWORD *)s + 618);
    if ( result <= 0xC8 )
    {
      result = byte_262908[result];
      if ( result )
      {
        std::string::assign((int)&dword_25DAD8, s);
        v20 = *((float *)s + 612);
        v21 = *((float *)s + 613);
        v22 = (float)*(int *)(dword_2636B4 + 4) * 0.0015625;
        v23 = (_DWORD *)dword_2629D0[*((_DWORD *)s + 618)];
        v24 = (float)*(int *)(dword_2636B4 + 8) * 0.0022321;
        *(float *)&v25 = v22 * v20;
        *((float *)&v26 + 1) = v24 * v21;
        *(float *)&v26 = v22 * (float)(v20 + *((float *)s + 605));
        *((float *)&v25 + 1) = v24 * (float)(v21 + *((float *)s + 606));
        if ( v23 && *v23 )
          sub_108CD0();
        else
          _android_log_print(6, "AXL", "Textdraw \"%s\" does not contain texture", s);
        s[2500] = 1;
        result = (unsigned int)(s + 2504);
        *((_QWORD *)s + 313) = v25;
        *((_QWORD *)s + 314) = v26;
      }
    }
  }
  else
  {
    result = (unsigned __int8)*s;
    if ( result )
    {
      sub_163C40(s, s + 802);
      v3 = *(_QWORD *)(dword_2636B4 + 4);
      v4 = (float)*(int *)(dword_2636B4 + 4);
      v5 = (float)*(int *)(dword_2636B4 + 8) * 0.0022321;
      v6 = v4 * 0.0015625;
      sub_163C58((float)(v4 * 0.0015625) * *((float *)s + 601), (float)(*((float *)s + 602) * v5) * 0.5);
      v7 = s + 2524;
      if ( !s[2520] )
        v7 = s + 2412;
      sub_163C74(v7);
      sub_163C8C(0);
      v8 = __clz((unsigned __int8)s[2417]);
      v9 = 2;
      if ( !s[2443] )
        v9 = v8 >> 5;
      sub_163CA4(v9);
      v10 = (float)(*((float *)s + 605) * v4) * 0.0015625;
      sub_163CBC(LODWORD(v10));
      v11 = (float)(*((float *)s + 606) * v4) * 0.0015625;
      sub_163CD4(LODWORD(v11));
      sub_163CEC((unsigned __int8)s[2418], 0);
      sub_163D04(s + 2428);
      sub_163D1C((unsigned __int8)s[2432]);
      sub_163D34(s + 2436);
      if ( s[2441] )
        ((void (*)(void))sub_163D98)();
      else
        sub_163D4C((unsigned __int8)s[2440]);
      sub_163D80((unsigned __int8)s[2444]);
      v12 = (double)(int)v3 - (640.0 - *((float *)s + 612)) * v6;
      v13 = (double)SHIDWORD(v3) - (448.0 - *((float *)s + 613)) * v5;
      v14 = v12;
      v15 = v13;
      if ( s[2528] )
      {
        s[2528] = 0;
      }
      else
      {
        v16 = v12;
        v17 = v13;
        sub_163D64(LODWORD(v16), LODWORD(v17), s + 802);
      }
      sub_163D98(0);
      if ( s[2443] )
      {
        *((float *)s + 626) = v14 - (float)(v10 - v14);
      }
      else
      {
        if ( s[2417] )
        {
          v14 = v14 + (float)(v11 * -0.5);
          v18 = v11 + v14;
        }
        else
        {
          v18 = (float)(v10 - v14) + v14;
        }
        *((float *)s + 626) = v14;
        v14 = v18;
      }
      result = 1;
      s[2500] = 1;
      *((float *)s + 628) = v14;
      *((float *)s + 629) = v15;
      *((float *)s + 627) = v11 + v15;
    }
  }
  return result;
}


// ======================================================================
