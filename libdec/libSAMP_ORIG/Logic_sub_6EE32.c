// ADDR: 0x6ef94
// SYMBOL: sub_6EF94
int __fastcall sub_6EF94(int a1, int a2, int a3)
{
  _BYTE *v3; // r3
  int result; // r0

  v3 = *(_BYTE **)(a2 + 16);
  switch ( *v3 )
  {
    case '[':
      result = sub_6FE4C();
      break;
    case '\\':
    case ']':
    case '^':
    case '_':
    case '`':
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'g':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'o':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 'u':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z':
      goto LABEL_5;
    case 'f':
      result = sub_6F3A8();
      break;
    case 'n':
      result = sub_6F07A();
      break;
    case 't':
      result = sub_6F20E();
      break;
    case '{':
      result = sub_6FA18();
      break;
    default:
      if ( *v3 == 34 )
        result = sub_6F598(a1, a2, a3, 0);
      else
LABEL_5:
        result = sub_70140();
      break;
  }
  return result;
}


// ======================================================================
