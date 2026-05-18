// ADDR: 0xee754
// SYMBOL: sub_EE754
unsigned __int8 *__fastcall sub_EE754(unsigned __int8 *result, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // r5
  int v4; // r0
  int v5; // r6
  int v6; // r6
  void *exception; // r4

  if ( result != a2 )
  {
    while ( 1 )
    {
      v3 = result;
      v4 = *result;
      if ( v4 == 37 )
      {
        if ( v3 + 1 != a2 )
        {
          result = v3 + 2;
          switch ( v3[1] )
          {
            case '%':
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'F':
            case 'G':
            case 'H':
            case 'I':
            case 'M':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'g':
            case 'h':
            case 'j':
            case 'm':
            case 'n':
            case 'p':
            case 'r':
            case 't':
            case 'u':
            case 'w':
            case 'x':
            case 'y':
            case 'z':
              goto LABEL_7;
            case 'E':
              if ( result == a2 )
                break;
              v6 = v3[2];
              result = v3 + 3;
              if ( ((unsigned int)(v6 - 67) > 0x16 || ((1 << (v6 - 67)) & 0x600001) == 0)
                && ((unsigned int)(v6 - 99) > 0x16 || ((1 << (v6 - 99)) & 0x600001) == 0) )
              {
                break;
              }
              goto LABEL_7;
            case 'O':
              if ( result == a2 )
                break;
              v5 = v3[2];
              result = v3 + 3;
              if ( ((unsigned int)(v5 - 72) > 0x1D || ((1 << (v5 - 72)) & 0x3000E823) == 0)
                && ((unsigned int)(v5 - 109) > 0xC || ((1 << (v5 - 109)) & 0x1501) == 0) )
              {
                break;
              }
              goto LABEL_7;
            case 'Q':
            case 'q':
              sub_EE93C(a3);
            default:
              break;
          }
        }
        exception = j___cxa_allocate_exception(8u);
        sub_EE924(exception, "invalid format");
        j___cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'fmt::v8::format_error,
          (void (*)(void *))fmt::v8::format_error::~format_error);
      }
      if ( v4 == 125 )
        return v3;
      result = v3 + 1;
LABEL_7:
      if ( result == a2 )
        return a2;
    }
  }
  return result;
}


// ======================================================================
