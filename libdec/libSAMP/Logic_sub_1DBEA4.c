// ADDR: 0x1dbb08
// SYMBOL: sub_1DBB08
float *__fastcall sub_1DBB08(float *result, int a2, int a3, float a4)
{
  switch ( a3 )
  {
    case 1:
      if ( a4 < 0.0 || a4 > 1.0 )
        goto LABEL_83;
      result[1] = a4;
      break;
    case 2:
      if ( a4 < 0.0 || a4 > 1.0 )
        goto LABEL_83;
      result[2] = a4;
      break;
    case 3:
      if ( a4 < 0.0 || a4 > 1.0 )
        goto LABEL_83;
      result[3] = a4;
      break;
    case 4:
      if ( a4 < 0.0 || a4 > 1.0 )
        goto LABEL_83;
      result[4] = a4;
      break;
    case 5:
      if ( a4 < 0.0 || a4 > 1.0 )
        goto LABEL_83;
      result[14] = a4;
      break;
    case 6:
      if ( a4 < 0.1 || a4 > 20.0 )
        goto LABEL_83;
      result[5] = a4;
      break;
    case 7:
      if ( a4 < 0.1 || a4 > 2.0 )
        goto LABEL_83;
      result[6] = a4;
      break;
    case 8:
      if ( a4 < 0.1 || a4 > 2.0 )
        goto LABEL_83;
      result[15] = a4;
      break;
    case 9:
      if ( a4 < 0.0 || a4 > 3.16 )
        goto LABEL_83;
      result[7] = a4;
      break;
    case 10:
      if ( a4 < 0.0 || a4 > 0.3 )
        goto LABEL_83;
      result[8] = a4;
      break;
    case 12:
      if ( a4 < 0.0 || a4 > 10.0 )
        goto LABEL_83;
      result[9] = a4;
      break;
    case 13:
      if ( a4 < 0.0 || a4 > 0.1 )
        goto LABEL_83;
      result[10] = a4;
      break;
    case 15:
      if ( a4 < 0.075 || a4 > 0.25 )
        goto LABEL_83;
      result[22] = a4;
      break;
    case 16:
      if ( a4 < 0.0 || a4 > 1.0 )
        goto LABEL_83;
      result[23] = a4;
      break;
    case 17:
      if ( a4 < 0.04 || a4 > 4.0 )
        goto LABEL_83;
      result[24] = a4;
      break;
    case 18:
      if ( a4 < 0.0 || a4 > 1.0 )
        goto LABEL_83;
      result[25] = a4;
      break;
    case 19:
      if ( a4 < 0.892 || a4 > 1.0 )
        goto LABEL_83;
      result[11] = a4;
      break;
    case 20:
      if ( a4 < 1000.0 || a4 > 20000.0 )
        goto LABEL_83;
      result[26] = a4;
      break;
    case 21:
      if ( a4 < 20.0 || a4 > 1000.0 )
        goto LABEL_83;
      result[27] = a4;
      break;
    case 22:
      if ( a4 < 0.0 || a4 > 10.0 )
LABEL_83:
        result = (float *)j_alSetError(a2, 40963);
      else
        result[12] = a4;
      break;
    default:
      result = (float *)j_alSetError(a2, 40962);
      break;
  }
  return result;
}


// ======================================================================
