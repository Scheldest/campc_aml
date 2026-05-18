// ADDR: 0x1dae50
// SYMBOL: sub_1DAE50
int __fastcall sub_1DAE50(int result, int a2)
{
  int (*v2)(); // lr
  int (*v3)(); // r3
  int (*v4)(); // r5
  int (*v5)(); // r6
  int (*v6)(); // r12
  int (*v7)(); // r9
  int (*v8)(); // r7
  int (*v9)(); // r4

  v2 = sub_1DCCB8;
  v3 = sub_1DCCA0;
  v4 = sub_1DCC88;
  v5 = sub_1DCC7C;
  v6 = sub_1DCCC4;
  v7 = sub_1DCCAC;
  v8 = sub_1DCC70;
  v9 = sub_1DCC94;
  if ( a2 >= 0x8000 )
  {
    if ( (unsigned int)(a2 - 36864) >= 2 )
    {
      if ( a2 == 0x8000 )
      {
        *(_DWORD *)(result + 56) = 1065353216;
        *(_DWORD *)(result + 60) = 1065353216;
        *(_DWORD *)(result + 4) = 1065353216;
        *(_DWORD *)(result + 8) = 1065353216;
        *(_DWORD *)(result + 12) = 1050924810;
        *(_DWORD *)(result + 16) = 1063507722;
        *(_DWORD *)(result + 20) = 1069463634;
        *(_DWORD *)(result + 24) = 1062501089;
        *(_DWORD *)(result + 28) = 1028443341;
        *(_DWORD *)(result + 32) = 1004888130;
        *(_DWORD *)(result + 64) = 0;
        *(_DWORD *)(result + 68) = 0;
        *(_DWORD *)(result + 72) = 0;
        *(_DWORD *)(result + 40) = 1010055512;
        *(_DWORD *)(result + 36) = 1067534254;
        *(_DWORD *)(result + 76) = 0;
        v7 = sub_1DBFE8;
        *(_DWORD *)(result + 80) = 0;
        *(_DWORD *)(result + 88) = 1048576000;
        *(_DWORD *)(result + 96) = 1048576000;
        *(_DWORD *)(result + 44) = 1065252553;
        *(_DWORD *)(result + 104) = 1167867904;
        *(_DWORD *)(result + 108) = 1132068864;
        v3 = sub_1DBFCC;
        *(_DWORD *)(result + 84) = 0;
        v6 = sub_1DC180;
        *(_DWORD *)(result + 92) = 0;
        v9 = sub_1DBEA4;
        *(_DWORD *)(result + 100) = 0;
        *(_DWORD *)(result + 48) = 0;
        v2 = sub_1DC004;
        v5 = sub_1DBAD8;
        *(_BYTE *)(result + 52) = 1;
        v4 = sub_1DBB08;
        v8 = sub_1DBAAC;
      }
    }
    else
    {
      v2 = sub_1DCC38;
      v9 = sub_1DCBD4;
      v4 = sub_1DCB88;
      v5 = sub_1DCB7C;
      v7 = sub_1DCC2C;
      v6 = sub_1DCC54;
      *(_DWORD *)(result + 144) = 1065353216;
      v3 = sub_1DCC20;
      v8 = sub_1DCB70;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 1:
        *(_DWORD *)(result + 4) = 1065353216;
        *(_DWORD *)(result + 8) = 1065353216;
        *(_DWORD *)(result + 12) = 1050924810;
        *(_DWORD *)(result + 16) = 1063507722;
        *(_DWORD *)(result + 20) = 1069463634;
        *(_DWORD *)(result + 24) = 1062501089;
        *(_DWORD *)(result + 28) = 1028443341;
        *(_DWORD *)(result + 32) = 1004888130;
        *(_DWORD *)(result + 36) = 1067534254;
        *(_DWORD *)(result + 40) = 1010055512;
        *(_DWORD *)(result + 44) = 1065252553;
        *(_DWORD *)(result + 48) = 0;
        v6 = sub_1DC5C4;
        v3 = sub_1DC4A4;
        v2 = sub_1DC4DC;
        v7 = sub_1DC4C0;
        v5 = sub_1DC23C;
        v9 = sub_1DC49C;
        *(_BYTE *)(result + 52) = 1;
        v4 = (int (*)())&loc_1DC26C;
        v8 = sub_1DC210;
        break;
      case 4:
        *(_DWORD *)(result + 116) = 1036831949;
        *(_DWORD *)(result + 112) = 1036831949;
        v7 = sub_1DC7E4;
        *(_DWORD *)(result + 120) = 1056964608;
        v3 = sub_1DC7D8;
        *(_DWORD *)(result + 124) = 1056964608;
        v6 = sub_1DC868;
        v5 = sub_1DC6B8;
        v2 = sub_1DC7F0;
        v8 = sub_1DC6AC;
        *(_DWORD *)(result + 128) = -1082130432;
        v9 = sub_1DC7D0;
        v4 = (int (*)())&loc_1DC6C4;
        break;
      case 9:
        *(_DWORD *)(result + 136) = 1145569280;
        *(_DWORD *)(result + 132) = 1138491392;
        v6 = sub_1DCB44;
        v7 = sub_1DCAD4;
        v2 = sub_1DCB18;
        v5 = (int (*)())&loc_1DC928;
        v3 = sub_1DCA90;
        *(_DWORD *)(result + 140) = 0;
        v9 = sub_1DCA18;
        v4 = (int (*)())&loc_1DC9A0;
        v8 = sub_1DC8E0;
        break;
    }
  }
  *(_DWORD *)(result + 148) = v8;
  *(_DWORD *)(result + 152) = v5;
  *(_DWORD *)(result + 156) = v4;
  *(_DWORD *)(result + 160) = v9;
  *(_DWORD *)(result + 164) = v3;
  *(_DWORD *)(result + 168) = v7;
  *(_DWORD *)(result + 172) = v2;
  *(_DWORD *)(result + 176) = v6;
  *(_DWORD *)result = a2;
  return result;
}


// ======================================================================
